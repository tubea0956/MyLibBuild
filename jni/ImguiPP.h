#ifndef IMGUIPP_H
#define IMGUIPP_H

#pragma once

#include "imgui/imgui.h"
#include "imgui/imgui_internal.h"
#include "obfuscate.h" // String protection ke liye

/**
 * @autor SPraditya
 * Modified by Gemini for 64-bit Stealth & Obfuscation
 */

namespace ImguiPP
{
    // Screen resolution aur DPI handle karne ke liye (64-bit safe)
    float getx();
    float gety();

    // Custom Styled Button - Ismein labels ko OBFUSCATE karke bhejna
    void button(const char* label, int& currentTab, int newTab, ImVec2 size = ImVec2(0, 0));

    // Layout Helpers
    void line(int newId);
    void linevertical();

    // Text Alignment (Centering logic for Menu)
    void center_text(const char* text, int lineId, bool separator);
    void center_text_ex(const char* text, float width_available, int lineId, bool separator);

    namespace other
    {
        // Window aur DrawList functions (External ESP ke liye zaruri)
        float get_window_size_x();
        float get_window_size_y();

        ImVec2 get_window_size();
        char* get_window_name();
        ImDrawList* get_drawlist();
    }

    // Color conversion logic (Hex to ImVec4)
    ImVec4 to_vec4(float r, float g, float b, float a);

    // --- Added Stealth Helpers ---
    // Ye function menu mein hidden strings dikhane ke liye kaam aayega
    inline void AddTextObfuscated(ImDrawList* drawList, const char* text, ImVec2 pos, ImU32 col) {
        drawList->AddText(pos, col, text);
    }
}

#endif // IMGUIPP_H
