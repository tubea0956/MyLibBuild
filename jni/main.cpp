/*
 * Modified by Gemini for 7-Day Flag Ban Bypass
 * Logic: Scope-based Aimbot (250m/50m) + Visibility Check
 * Target: Chest Lock for 25+ Kills Safety
 */

#include "SDK.hpp" 
#include "Helper/User.cpp"
#include "icon.h"
#include "iconcpp.h"
#include "FONT.h"
#include "CN.h"
#include "MemoryPatch.h" 

extern bool syscall_write(uintptr_t dest, void* src, size_t size);

void DrawESP(ImDrawList *draw) {
    auto Actors = getActors();
    ASTExtraPlayerCharacter *localPlayer = nullptr;
    ASTExtraPlayerController *localController = nullptr;

    // FOV Drawing
    if (Config.AimBot.Enable) {
        draw->AddCircle(ImVec2(glWidth / 2.0f, glHeight / 2.0f), Config.AimBot.Cross * 0.5f, IM_COL32(222, 40, 27, 255), 300, 1.5f);
    }

    // Local Controller identification
    for (int i = 0; i < Actors.size(); i++) {
        auto Actor = Actors[i];
        if (isObjectInvalid(Actor)) continue;
        if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
            localController = (ASTExtraPlayerController *) Actor;
            break;
        }
    }

    if (localController) {
        // Local Player identification
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];
            if (isObjectInvalid(Actor)) continue;
            if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                if (((ASTExtraPlayerCharacter *) Actor)->PlayerKey == localController->PlayerKey) {
                    localPlayer = (ASTExtraPlayerCharacter *) Actor;
                    break;
                }
            }
        }

        if (localPlayer) {
            // --- NEW STEALTH AIMBOT LOGIC START ---
            ASTExtraPlayerCharacter* bestTarget = nullptr;
            float minCrosshairDist = 999999.0f;

            // Condition: Scope On = 250m, Scope Off = 50m
            float maxAimbotDist = (localPlayer->bIsScoping) ? 250.0f : 50.0f;

            for (int i = 0; i < Actors.size(); i++) {
                auto Actor = Actors[i];
                if (isObjectInvalid(Actor) || !Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) continue;

                auto Enemy = (ASTExtraPlayerCharacter *)Actor;
                if (Enemy->PlayerKey == localController->PlayerKey || Enemy->Health <= 0) continue;

                // 1. Visibility Check: Deewar ke piche wale ko ignore karo
                if (!Enemy->IsVisible()) continue; 

                // 2. Dynamic Distance Check
                float CurrentEnemyDist = localPlayer->GetDistanceTo(Enemy) / 100.0f;
                if (CurrentEnemyDist > maxAimbotDist) continue;

                // 3. Target Selection: Chest Bone for safety
                FVector ChestPos = Enemy->GetBonePos(OBFUSCATE("Chest"), {}); 
                ImVec2 ChestSC;
                if (W2S(ChestPos, (FVector2D*)&ChestSC)) {
                    float distToCrosshair = GetDistance2D(ImVec2(glWidth/2, glHeight/2), ChestSC);
                    if (distToCrosshair < (Config.AimBot.Cross * 0.5f) && distToCrosshair < minCrosshairDist) {
                        minCrosshairDist = distToCrosshair;
                        bestTarget = Enemy;
                    }
                }
            }

            // Aimbot Execution with Smoothness
            if (bestTarget && Config.AimBot.Enable) {
                FVector TargetChest = bestTarget->GetBonePos(OBFUSCATE("Chest"), {});
                FRotator AimRotation = CalculateRotation(localPlayer->GetCameraLocation(), TargetChest);
                localController->SetControlRotation(Smooth(localController->ControlRotation, AimRotation, Config.AimBot.Smooth));
            }
            // --- NEW STEALTH AIMBOT LOGIC END ---

            // ESP Loop (Baki logic Actors loop ke andar continue rahega)
            for (int i = 0; i < Actors.size(); i++) {
                auto Actor = Actors[i];
                if (isObjectInvalid(Actor)) continue;
                if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                    auto Player = (ASTExtraPlayerCharacter *)Actor;
                    if (isObjectInvalid(Player) || Player->PlayerKey == localController->PlayerKey) continue;

                    float Distance = localPlayer->GetDistanceTo(Player) / 100.0f;
                    if (Distance > 400.0f) continue;

                    auto HeadPos = Player->GetBonePos(OBFUSCATE("Head"), {});
                    ImVec2 HeadPosSC;
                    if (W2S(HeadPos, (FVector2D*)&HeadPosSC)) {
                        // ESP Drawing Code (Box, Name, etc.)
                    }
                }
            }
        }
    }
    g_LocalController = localController;
    g_LocalPlayer = localPlayer;
}

