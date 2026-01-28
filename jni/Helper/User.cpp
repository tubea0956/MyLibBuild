#include <list>
#include <vector>
#include <string.h>
#include <pthread.h>
#include <thread>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <dlfcn.h>
#include <mutex>
std::mutex mtx; 
#include <android/content/Intent.h>
#include "imgui/imgui.h"
#include "Helper/Icon.h"
#include "Helper/Iconcpp.h"
#include "imgui/backends/imgui_impl_android.h"
#include "imgui/backends/imgui_impl_opengl3.h"
#include <Helper/define.h>
#include "Helper/ImguiPP.h"
#include "Helper/Menu.h"
#include "Helper/fake_dlfcn.h"
#include "Helper/Includes.h"
#include "Helper/plthook.h"
#include "Helper/json.hpp"
#include "Helper/StrEnc.h"
#include "Helper/Spoof.h"
#include "Helper/Tools.h"
#include "Helper/timer.h"
#include "Helper/obfuscate.h"
#include "Helper/Dobby/dobby.h"
#include "Helper/Items.h"
#include "Helper/Vector3.hpp"
#include "Helper/ElfImg.h"
#include "Helper/Rect.h"
#include "Substrate/SubstrateHook.h"
#include "patch/MemoryPatch.h"
#include "Helper/THUNDER.h"
#include "base64/base64.h"
#include "SDK.hpp"
bool THUNDER_AIM;
bool THUNDER_BT;
bool THUNDER_MAGIC;
bool THUNDER_XHIT;
ImFont* basic = nullptr;
char extras[32];
#include <cstring>
#include <string.h>
bool Logo = true;
float accent_color[4] = { 0.300f, 0.220f, 0.750f, 1.000f };
#include <curl/curl.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
using namespace SDK;
using json = nlohmann::json;
int gScreenWidth;
int gScreenHeight;
bool TerminationFix = true;
static float destination[3] = { 100.0f, 200.0f, 10.0f };
static float rotation[3] = { 0.0f, 0.0f, 0.0f };
 #include <And64InlineHook/And64InlineHook.hpp>
 
#include <curl/curl.h>
#include <openssl/evp.h>
#include <openssl/pem.h>
#include <openssl/rsa.h>
#include <openssl/err.h>
#include <openssl/md5.h>

#define GNames_Offset 0x8103904
#define GUObject_Offset 0xdd91fa0
#define GetActorArray 0x9e70e64
#define GNativeAndroidApp_Offset 0xdad0280
#define Actors_Offset 0xA0//4.1
#define SwapBuffers 0xc0df470 // 



bool HourFix;

bool End;

static int a = 0;
time_t rng = 0;
bool ExtremeExp = true;
bool OnlineText = false;
bool OnlineText2 = false;
float FOVSize = 0;
std::string g_Token, g_Auth;

static bool WantTextInputLast = false;

ProcMap g_Handle;

struct  MemTrap_t {
  uintptr_t baseAddr;
  uintptr_t endAddr;
};

std::vector<MemTrap_t> MemTraps = std::vector<MemTrap_t>();

bool IsObjectInvalid(UObject *pObject) {
    if (pObject == 0)
        return true;

    for (auto &i : MemTraps) {
        if ((uintptr_t) pObject >= i.baseAddr && (uintptr_t) pObject <= i.endAddr) {
            return true;
        }
    }
    return false;
}

bool initImGui = false;
int screenWidth = -1, glWidth, screenHeight = -1, glHeight;
float density = -1;
json items_data;
bool bValid = false;
bool server = false;
#define SLEEP_TIME 1000LL / 120LL
uintptr_t anort;
static char s[64];
ImColor outlinecolor = IM_COL32(10, 10, 10, 255);


bool WriteAddr(void *addr, void *buffer, size_t length) {
    unsigned long page_size = sysconf(_SC_PAGESIZE);
    unsigned long size = page_size * sizeof(uintptr_t);
    return mprotect((void *) ((uintptr_t) addr - ((uintptr_t) addr % page_size) - page_size), (size_t) size, PROT_EXEC | PROT_READ | PROT_WRITE) == 0 && memcpy(addr, buffer, length) != 0;
}


enum EAim {
  Distance = 0,
  Croshhair = 1
};

enum EAimTarget {
    Head = 0,
    Chest = 1
};

enum EEsp {
  EspTop = 0,
  EspBelow = 1,
  EspNone = 3
  
};

enum ECount {
  Count =0,
  Countb = 1,
  Countc = 2
  
};

enum EAimTrigger {
    None = 0,
    Shooting = 1,
    Scoping = 2,
    Both = 3,
    Any = 4
};

std::map<int, bool> Items;
std::map<int, float *> ItemColors;

static float chestY = 25.0f;
bool BTBUTTON;

struct sConfig {
    int Ipads;
	float FPSControlSize;
	bool Bypass;
	bool Kill;
 	float Skill;
	float Skill1;
	float Skill3;
	float Skill4;
	float Skill2;
    float Recc;
	float Line;
	float Prid;
	float Pridd;
	float Skeleton;	
	float Meter;
	float RadarX;
	float RadarY;
    float Loot;
bool Antiban;
bool IgnoreKnocked;
bool VisCheck;
bool IgnoreBots;
bool Linee;
bool Radar;
bool Health;
bool Name;
bool Distance;
bool TeamID;
bool Weapon;
bool Malik;
bool Malik2;
bool Dbox;
bool LootBox;
bool Ping;
bool LootI;
bool NoBot;
bool Alert;
bool Air;
bool Warning;
bool Genn;
bool ShowVehicle;
bool VehicleFuel;
bool Small;
bool Cross;
bool Ipad;
bool Unlock;
bool Less;
bool Skeletonn;
bool Plane;
bool VehicleHealth;
bool info;
bool autowalljump;
bool autoall;
bool Fovb;
bool GameInfo;
bool bypasss;
bool BypassLogo;
bool SpawanByp;
	
    struct sESPMenu {
        bool Line;
        bool Box;
        bool Skeleton;
        bool island;
        bool Health;
        bool ShowKnockedHealth;
        bool Name;
        bool Distance;
        bool TeamID;
        bool Weapon;
        bool Dbox;
        bool Radar;
        bool Offsc;
        bool Genn;
		
        bool NoBot;
        bool Loot;

		EEsp By;
		ECount Byy;
    };
    sESPMenu ESPMenu;


    struct sHighRisk {
        bool Shake;
        bool Recoil;
        bool Instant;
		bool Ghost;
        bool Para;
        bool Cross;
        bool IPad;
		bool HitEffect;
    };
    sHighRisk HighRisk{0};
    struct sVehicleESP {
        bool ShowVehicle;
        bool ShowDistance;
    };
    sVehicleESP VehicleESP{0};
     struct sSilentAim {
        bool Enable;
        bool AimBot;
		bool Meter;
		float Cross;
        float Recc;
		EAim By;
        EAimTarget Target;
        EAimTrigger Trigger;
        bool Pred;
        bool ReCo;
        bool IgnoreKnocked;
        bool VisCheck;
		bool IgnoreBots;
		bool Recoil;
    };
    sSilentAim SilentAim{0};
	
	
	
	struct sAimMenu {
        bool Enable;
        bool AimBot;
        bool Malik;
        
        bool Pred;
        float Recc;
		float chestX;
		float Cross;
		float chestY;
		EAim By;
		bool ReCo;
        EAimTarget Target;
        EAimTrigger Trigger;
        bool IgnoreKnocked;
        bool VisCheck;
		bool IgnoreBot;
		bool RecoilComparison;
		
		
    };

    sAimMenu AimBot{0};
	
	
	
	   struct sOTHER {
        bool FPS;
    };
    sOTHER OTHER{0};

    struct sColorsESP {
		float *Text;
	float *Menucolour;
        float *Line;
        float *Box;
		float *Linebot1;
		float *Line1;
		float *Visline;
		float *Boxbot;
        float *Name;
        float *Distance;
        float *Skeleton;
		 float *Skeletonbot;
         float *Skeletonnon;
         float *BotNn;
         float *BotNv;
         float *PotNn;
         float *PotNv;
         
		 float *nonbot;
       //  float *Radar;
		  float *Linebot;
        float *Count;
        float *Vehicle;
		float *Fov;
		float *ImColor;
		float *aimbot;
		
    };
    sColorsESP ColorsESP{0};
};

sConfig Config{0};

#define CREATE_COLOR(r, g, b, a) new float[4] {(float)r, (float)g, (float)b, (float)a};

 
uintptr_t UE4;
uintptr_t g_Anogs;
uintptr_t g_gcloud;
uintptr_t g_swappy;
uintptr_t g_TDataMaster;
uintptr_t AimBullet_Offset;
uintptr_t GWorld_Offset, GUObjectArray_Offset, SilentAim_Offset;

android_app *g_App = 0;
ASTExtraPlayerCharacter *g_LocalPlayer = 0;
ASTExtraPlayerController *g_LocalController = 0;
timer RenderingFPS;


struct sRegion {
    uintptr_t start, end;
};

std::vector<sRegion> trapRegions;

bool isObjectInvalid(UObject *obj) {
    if (!Tools::IsPtrValid(obj)) {
        return true;
    }

    if (!Tools::IsPtrValid(obj->ClassPrivate)) {
        return true;
    }

    if (obj->InternalIndex <= 0) {
        return true;
    }

    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }

    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }

    return false;
}



 
std::string getObjectPath(UObject *Object) {
    std::string s;
    for (auto super = Object->ClassPrivate; super; super = (UClass *) super->SuperStruct) {
        if (!s.empty())
            s += ".";
        s += super->NamePrivate.GetName();
    }
    return s;
}

float AimSmooth = 4.0f;

void GETAIM(FRotator &angles) {
    if (angles.Pitch > 180)
        angles.Pitch -= 360;
    if (angles.Pitch < -180)
        angles.Pitch += 360;

    if (angles.Pitch < -75.f)
        angles.Pitch = -75.f;
    else if (angles.Pitch > 75.f)
        angles.Pitch = 75.f;

    while (angles.Yaw < -180.0f)
        angles.Yaw += 360.0f;
    while (angles.Yaw > 180.0f)
        angles.Yaw -= 360.0f;
}
void GETAIM(float *angles) {
    if (angles[0] > 180)
        angles[0] -= 360;
    if (angles[0] < -180)
        angles[0] += 360;

    if (angles[0] < -75.f)
        angles[0] = -75.f;
    else if (angles[0] > 75.f)
        angles[0] = 75.f;

    while (angles[1] < -180.0f)
        angles[1] += 360.0f;
    while (angles[1] > 180.0f)
        angles[1] -= 360.0f;
}


void GETAIM(Vector3 angles) {
    if (angles.X > 180)
        angles.X -= 360;
    if (angles.X < -180)
        angles.X += 360;

    if (angles.X < -75.f)
        angles.X = -75.f;
    else if (angles.X > 75.f)
        angles.X = 75.f;

    while (angles.Y < -180.0f)
        angles.Y += 360.0f;
    while (angles.Y > 180.0f)
        angles.Y -= 360.0f;
}long GetEpochTime()
    {
    auto duration = std::chrono::system_clock::now().time_since_epoch();
    return std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
    }
 

 
//Auto
UWorld *GEWorld;
int GWorldNum = 0;
TUObjectArray gobjects;
UWorld *GetWorld()
{
    if(GWorldNum == 0) {
        gobjects = UObject::GUObjectArray->ObjObjects;
        for (int i=0; i< gobjects.Num(); i++)
            if (auto obj = gobjects.GetByIndex(i)) {
                if(obj->IsA(UEngine::StaticClass())) {
                    auto GEngine = (UEngine *) obj;
                    if(GEngine) {
                        auto ViewPort = GEngine->GameViewport;
                        if (ViewPort)
                        {
                            GEWorld = ViewPort->World;
                            GWorldNum = i;
                            return ViewPort->World;
                        }
                    }
                }
            }
    }else {
        auto GEngine = (UEngine *) (gobjects.GetByIndex(GWorldNum));
        if(GEngine) {
            auto ViewPort = GEngine->GameViewport;
            if(ViewPort) {
                GEWorld = ViewPort->World;
                return ViewPort->World;
            }
        }
    }
    return 0;
}




TNameEntryArray *GetGNames()
{
    return ((TNameEntryArray * (*)()) (UE4 + GNames_Offset))();
}

std::vector<AActor *> getActors() {
    auto World = GetWorld();
    if (!World)
        return std::vector<AActor *>();
 
    auto PersistentLevel = World->PersistentLevel;
    if (!PersistentLevel)
        return std::vector<AActor *>();
 
    struct GovnoArray {
        uintptr_t base;
        int32_t count;
        int32_t max;
    };
    static thread_local GovnoArray Actors{};
 
    Actors = *(((GovnoArray*(*)(uintptr_t))(UE4 + GetActorArray))(reinterpret_cast<uintptr_t>(PersistentLevel)));
 
    if (Actors.count <= 0) {
        return {};
    }
 
    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.count; i++) {
        auto Actor = *(uintptr_t *) (Actors.base + (i * sizeof(uintptr_t)));
        if (Actor) {
            actors.push_back(reinterpret_cast<AActor *const>(Actor));
        }
    }
    return actors;
}

std::string deviceBrandModel() {
    if (!g_App)
        return "";

    auto activity = g_App->activity;
    if (!activity)
        return "";

    auto vm = activity->vm;
    if (!vm)
        return "";

    auto object = activity->clazz;
    if (!object)
        return "";

    std::string result;

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    
        std::string b = Tools::GetDeviceBrand(env);
        b += " - ";
        b += Tools::GetDeviceModel(env);
    
    vm->DetachCurrentThread();

    return b;
}

template<typename T>
void Write(uintptr_t addr, T value) {
    WriteAddr((void *) addr, &value, sizeof(T));
}
 

int32_t ToColor(float *col) {
    return ImGui::ColorConvertFloat4ToU32(*(ImVec4 *) (col));
}

    auto protect(uintptr_t addr, size_t len, int32_t prot) {
     static_assert(PAGE_SIZE == 4096);
     constexpr size_t page_size =                static_cast<size_t>(PAGE_SIZE);
    void* start = reinterpret_cast<void*>(addr & -page_size);
    uintptr_t end = (addr + len + page_size - 1) & -page_size;
    return mprotect(start, end - reinterpret_cast<uintptr_t>(start), prot);
}

FVector WorldToRadar(float Yaw, FVector Origin, FVector LocalOrigin, float PosX, float PosY, Vector3 Size, bool &outbuff) {
    bool flag = false;
    double num = (double)Yaw;
    double num2 = num * 0.017453292519943295;
    float num3 = (float)std::cos(num2);
    float num4 = (float)std::sin(num2);
    float num5 = Origin.X - LocalOrigin.X;
    float num6 = Origin.Y - LocalOrigin.Y;
    struct FVector Xector;
    Xector.X = (num6 * num3 - num5 * num4) / 150.f;
    Xector.Y = (num5 * num3 + num6 * num4) / 150.f;
    struct FVector Xector2;
    Xector2.X = Xector.X + PosX + Size.X / 2.f;
    Xector2.Y = -Xector.Y + PosY + Size.Y / 2.f;
    bool flag2 = Xector2.X > PosX + Size.X;
    if (flag2) {
        Xector2.X = PosX + Size.X;
    }else{
        bool flag3 = Xector2.X < PosX;
        if (flag3) {
            Xector2.X = PosX;
        }
    }
    bool flag4 = Xector2.Y > PosY + Size.Y;
    if (flag4) {
        Xector2.Y = PosY + Size.Y;
    }else{
        bool flag5 = Xector2.Y < PosY;
        if (flag5){
            Xector2.Y = PosY;
        }
    }
    bool flag6 = Xector2.Y == PosY || Xector2.X == PosX;
    if (flag6){
        flag = true;
    }
    outbuff = flag;
    return Xector2;
}

// ======================================================================== //

#define W2S(w, s) UGameplayStatics::ProjectWorldToScreen(localController, w, true, s)


#define IM_PI                   3.14159265358979323846f
#define RAD2DEG(x) ((float)(x) * (float)(180.f / IM_PI))
#define DEG2RAD(x) ((float)(x) * (float)(IM_PI / 180.f))

void VectorAnglesRadar(Vector3 & forward, FVector & angles) {
	if (forward.X == 0.f && forward.Y == 0.f) {
		angles.X = forward.Z > 0.f ? -90.f : 90.f;
		angles.Y = 0.f;
	} else {
		angles.X = RAD2DEG(atan2(-forward.Z, forward.Magnitude(forward)));
		angles.Y = RAD2DEG(atan2(forward.Y, forward.X));
	}
	angles.Z = 0.f;
}


static char path[200];
static int currentItem = 0;

FVector operator*(const FVector &vector, float scalar)
{
    return FVector({vector.X * scalar, vector.Y * scalar, vector.Z * scalar});
}

int32_t (*orig_ANativeWindow_getWidth)(ANativeWindow *window);
int32_t _ANativeWindow_getWidth(ANativeWindow *window)
{
    screenWidth = orig_ANativeWindow_getWidth(window);
    return orig_ANativeWindow_getWidth(window);
}

void (*orig_onInputEvent)(void *thiz, void *ex_ab, void *ex_ac);
void onInputEvent(void *thiz, void *ex_ab, void *ex_ac)
{
    orig_onInputEvent(thiz, ex_ab, ex_ac);
    if (initImGui)
    {
        ImGui_ImplAndroid_HandleInputEvent((AInputEvent *)thiz, {(float)screenWidth / (float)glWidth, (float)screenHeight / (float)glHeight});
    }
    return;
}

int32_t (*orig_ANativeWindow_getHeight)(ANativeWindow *window);
int32_t _ANativeWindow_getHeight(ANativeWindow *window)
{
    screenHeight = orig_ANativeWindow_getHeight(window);
    return orig_ANativeWindow_getHeight(window);
}
//=====Aiming======//

    std::string getClipboardText()
{
    if (!g_App)
        return "";

    auto activity = g_App->activity;
    if (!activity)
        return "";

    auto vm = activity->vm;
    if (!vm)
        return "";

    auto object = activity->clazz;
    if (!object)
        return "";

    std::string result;

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    {
        auto ContextClass = env->FindClass("android/content/Context");
        auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService",
                                                       "(Ljava/lang/String;)Ljava/lang/Object;");
        auto str = env->NewStringUTF("clipboard");
        auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
        env->DeleteLocalRef(str);
        auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
        auto getText = env->GetMethodID(ClipboardManagerClass, "getText",
                                        "()Ljava/lang/CharSequence;");
        auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
        auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString",
                                               "()Ljava/lang/String;");
        auto text = env->CallObjectMethod(clipboardManager, getText);
        if (text)
        {
            str = (jstring)env->CallObjectMethod(text, toStringMethod);
            result = env->GetStringUTFChars(str, 0);
            env->DeleteLocalRef(str);
            env->DeleteLocalRef(text);
        }

        env->DeleteLocalRef(CharSequenceClass);
        env->DeleteLocalRef(ClipboardManagerClass);
        env->DeleteLocalRef(clipboardManager);
        env->DeleteLocalRef(ContextClass);
    }
    vm->DetachCurrentThread();

    return result;
}

const char *GetAndroidID(JNIEnv *env, jobject context)
{
    jclass contextClass = env->FindClass(/*android/content/Context*/
                                         StrEnc("`L+&0^[S+-:J^$,r9q92(as",
                                                "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07",
                                                23)
                                             .c_str());
    jmethodID getContentResolverMethod = env->GetMethodID(contextClass, /*getContentResolver*/
                                                          StrEnc("E8X\\7r7ys_Q%JS+L+~",
                                                                 "\x22\x5D\x2C\x1F\x58\x1C\x43\x1C\x1D\x2B\x03\x40\x39\x3C\x47\x3A\x4E\x0C",
                                                                 18)
                                                              .c_str(), /*()Landroid/content/ContentResolver;*/
                                                          StrEnc("8^QKmj< }5D:9q7f.BXkef]A*GYLNg}B!/L",
                                                                 "\x10\x77\x1D\x2A\x03\x0E\x4E\x4F\x14\x51\x6B\x59\x56\x1F\x43\x03\x40\x36\x77\x28\x0A\x08\x29\x24\x44\x33\x0B\x29\x3D\x08\x11\x34\x44\x5D\x77",
                                                                 35)
                                                              .c_str());
    jclass settingSecureClass = env->FindClass(/*android/provider/Settings$Secure*/
                                               StrEnc("T1yw^BCF^af&dB_@Raf}\\FS,zT~L(3Z\"",
                                                      "\x35\x5F\x1D\x05\x31\x2B\x27\x69\x2E\x13\x09\x50\x0D\x26\x3A\x32\x7D\x32\x03\x09\x28\x2F\x3D\x4B\x09\x70\x2D\x29\x4B\x46\x28\x47",
                                                      32)
                                                   .c_str());
    jmethodID getStringMethod = env->GetStaticMethodID(settingSecureClass, /*getString*/
                                                       StrEnc("e<F*J5c0Y",
                                                              "\x02\x59\x32\x79\x3E\x47\x0A\x5E\x3E",
                                                              9)
                                                           .c_str(), /*(Landroid/content/ContentResolver;Ljava/lang/String;)Ljava/lang/String;*/
                                                       StrEnc("$6*%R*!XO\"m18o,0S!*`uI$IW)l_/_knSdlRiO1T`2sH|Ouy__^}%Y)JsQ:-\"(2_^-$i{?H",
                                                              "\x0C\x7A\x4B\x4B\x36\x58\x4E\x31\x2B\x0D\x0E\x5E\x56\x1B\x49\x5E\x27\x0E\x69\x0F\x1B\x3D\x41\x27\x23\x7B\x09\x2C\x40\x33\x1D\x0B\x21\x5F\x20\x38\x08\x39\x50\x7B\x0C\x53\x1D\x2F\x53\x1C\x01\x0B\x36\x31\x39\x46\x0C\x15\x43\x2B\x05\x30\x15\x41\x43\x46\x55\x70\x0D\x59\x56\x00\x15\x58\x73",
                                                              71)
                                                           .c_str());

    auto obj = env->CallObjectMethod(context, getContentResolverMethod);
    auto str = (jstring)env->CallStaticObjectMethod(settingSecureClass, getStringMethod, obj,
                                                    env->NewStringUTF(/*android_id*/
                                                                      StrEnc("ujHO)8OfOE",
                                                                             "\x14\x04\x2C\x3D\x46\x51\x2B\x39\x26\x21",
                                                                             10)
                                                                          .c_str()));
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceModel(JNIEnv *env)
{
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("m5I{GKGWBP-VOxkA",
                                                                   "\x0C\x5B\x2D\x09\x28\x22\x23\x78\x2D\x23\x02\x14\x3A\x11\x07\x25",
                                                                   16)
                                           .c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*MODEL*/
                                             StrEnc("|}[q:", "\x31\x32\x1F\x34\x76",
                                                    5)
                                                 .c_str(), /*Ljava/lang/String;*/
                                             StrEnc(".D:C:ETZ1O-Ib&^h.Y",
                                                    "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62",
                                                    18)
                                                 .c_str());

    auto str = (jstring)env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceBrand(JNIEnv *env)
{
    jclass buildClass = env->FindClass(/*android/os/Build*/ StrEnc("0iW=2^>0zTRB!B90",
                                                                   "\x51\x07\x33\x4F\x5D\x37\x5A\x1F\x15\x27\x7D\x00\x54\x2B\x55\x54",
                                                                   16)
                                           .c_str());
    jfieldID modelId = env->GetStaticFieldID(buildClass, /*BRAND*/
                                             StrEnc("@{[FP", "\x02\x29\x1A\x08\x14",
                                                    5)
                                                 .c_str(), /*Ljava/lang/String;*/
                                             StrEnc(".D:C:ETZ1O-Ib&^h.Y",
                                                    "\x62\x2E\x5B\x35\x5B\x6A\x38\x3B\x5F\x28\x02\x1A\x16\x54\x37\x06\x49\x62",
                                                    18)
                                                 .c_str());

    auto str = (jstring)env->GetStaticObjectField(buildClass, modelId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetPackageName(JNIEnv *env, jobject context)
{
    jclass contextClass = env->FindClass(/*android/content/Context*/
                                         StrEnc("`L+&0^[S+-:J^$,r9q92(as",
                                                "\x01\x22\x4F\x54\x5F\x37\x3F\x7C\x48\x42\x54\x3E\x3B\x4A\x58\x5D\x7A\x1E\x57\x46\x4D\x19\x07",
                                                23)
                                             .c_str());
    jmethodID getPackageNameId = env->GetMethodID(contextClass, /*getPackageName*/
                                                  StrEnc("YN4DaP)!{wRGN}",
                                                         "\x3E\x2B\x40\x14\x00\x33\x42\x40\x1C\x12\x1C\x26\x23\x18",
                                                         14)
                                                      .c_str(), /*()Ljava/lang/String;*/
                                                  StrEnc("VnpibEspM(b]<s#[9cQD",
                                                         "\x7E\x47\x3C\x03\x03\x33\x12\x5F\x21\x49\x0C\x3A\x13\x20\x57\x29\x50\x0D\x36\x7F",
                                                         20)
                                                      .c_str());

    auto str = (jstring)env->CallObjectMethod(context, getPackageNameId);
    return env->GetStringUTFChars(str, 0);
}

const char *GetDeviceUniqueIdentifier(JNIEnv *env, const char *uuid)
{
    jclass uuidClass = env->FindClass(/*java/util/UUID*/
                                      StrEnc("B/TxJ=3BZ_]SFx", "\x28\x4E\x22\x19\x65\x48\x47\x2B\x36\x70\x08\x06\x0F\x3C",
                                             14)
                                          .c_str());

    auto len = strlen(uuid);

    jbyteArray myJByteArray = env->NewByteArray(len);
    env->SetByteArrayRegion(myJByteArray, 0, len, (jbyte *)uuid);

    jmethodID nameUUIDFromBytesMethod = env->GetStaticMethodID(uuidClass, /*nameUUIDFromBytes*/
                                                               StrEnc("P6LV|'0#A+zQmoat,",
                                                                      "\x3E\x57\x21\x33\x29\x72\x79\x67\x07\x59\x15\x3C\x2F\x16\x15\x11\x5F",
                                                                      17)
                                                                   .c_str(), /*([B)Ljava/util/UUID;*/
                                                               StrEnc("sW[\"Q[W3,7@H.vT0) xB",
                                                                      "\x5B\x0C\x19\x0B\x1D\x31\x36\x45\x4D\x18\x35\x3C\x47\x1A\x7B\x65\x7C\x69\x3C\x79",
                                                                      20)
                                                                   .c_str());
    jmethodID toStringMethod = env->GetMethodID(uuidClass, /*toString*/ StrEnc("2~5292eW", "\x46\x11\x66\x46\x4B\x5B\x0B\x30", 8).c_str(), /*()Ljava/lang/String;*/
                                                StrEnc("P$BMc' #j?<:myTh_*h0",
                                                       "\x78\x0D\x0E\x27\x02\x51\x41\x0C\x06\x5E\x52\x5D\x42\x2A\x20\x1A\x36\x44\x0F\x0B",
                                                       20)
                                                    .c_str());

    auto obj = env->CallStaticObjectMethod(uuidClass, nameUUIDFromBytesMethod, myJByteArray);
    auto str = (jstring)env->CallObjectMethod(obj, toStringMethod);
    return env->GetStringUTFChars(str, 0);
}

std::string RSA_Encrypt(const std::string &clear_text, const std::string &pub_key)
{
    std::string result;
    BIO *key = BIO_new_mem_buf((unsigned char *)pub_key.c_str(), -1);
    RSA *rsa = RSA_new();
    rsa = PEM_read_bio_RSA_PUBKEY(key, &rsa, NULL, NULL);
    if (!rsa)
    {
        return "";
    }

    int key_len = RSA_size(rsa);
    int block_len = key_len - 11;

    char *sub_text = new char[key_len + 1];
    memset(sub_text, 0, key_len + 1);
    int ret = 0;
    int pos = 0;
    std::string sub_str;

    while (pos < clear_text.length())
    {
        sub_str = clear_text.substr(pos, block_len);
        memset(sub_text, 0, key_len + 1);
        ret = RSA_public_encrypt(sub_str.length(), (const unsigned char *)sub_str.c_str(),
                                 (unsigned char *)sub_text, rsa, RSA_PKCS1_PADDING);
        if (ret >= 0)
        {
            result.append(std::string(sub_text, ret));
        }
        pos += block_len;
    }

    BIO_free_all(key);
    RSA_free(rsa);
    delete[] sub_text;

    return result;
}

std::string RSA_Decrypt(const std::string &cipher_text, const std::string &pub_key)
{
    std::string result;
    BIO *key = BIO_new_mem_buf((unsigned char *)pub_key.c_str(), -1);
    RSA *rsa = RSA_new();

    rsa = PEM_read_bio_RSA_PUBKEY(key, &rsa, NULL, NULL);
    if (!rsa)
    {
        return "";
    }

    int len = RSA_size(rsa);
    char *buf = new char[len + 1];
    memset(buf, 0, len + 1);

    int ret = RSA_public_decrypt(cipher_text.length(), (const unsigned char *)cipher_text.c_str(),
                                 (unsigned char *)buf, rsa, RSA_PKCS1_PADDING);
    if (ret >= 0)
    {
        result.append(std::string(buf, ret));
    }

    free(buf);
    BIO_free_all(key);
    RSA_free(rsa);

    return result;
}

uint8_t PUBLIC_KEY[450] = {0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0xE2, 0xE5, 0xE7, 0xE9, 0xEE, 0x80, 0xF0,
                           0xF5, 0xE2, 0xEC, 0xE9, 0xE3, 0x80, 0xEB, 0xE5, 0xF9, 0x8D, 0x8D, 0x8D,
                           0x8D, 0x8D, 0xAA, 0xED, 0xE9, 0xE9, 0xE2, 0xE9, 0xCA, 0xE1, 0xEE, 0xE2,
                           0xC7, 0xCB, 0xD1, 0xC8, 0xCB, 0xC9, 0xE7, 0x99, 0xD7, 0x90, 0xE2, 0xE1,
                           0xF1, 0xE5, 0xE6, 0xE1, 0xE1, 0xEF, 0xE3, 0xE1, 0xF1, 0x98, 0xE1, 0xED,
                           0xE9, 0xE9, 0xE2, 0xE3, 0xC7, 0xEB, 0xE3, 0xE1, 0xF1, 0xE5, 0xE1, 0x91,
                           0xD4, 0xCF, 0xEA, 0x96, 0xED, 0x95, 0xCB, 0xF4, 0xEA, 0xCD, 0xCA, 0xE2,
                           0xC9, 0xE6, 0xD0, 0xFA, 0xCE, 0xC8, 0xC3, 0xAA, 0x96, 0x90, 0xCB, 0x8B,
                           0xD8, 0xE7, 0xF7, 0xD6, 0xC6, 0xE1, 0xC4, 0xD1, 0xD7, 0xD6, 0xE5, 0xEA,
                           0xE7, 0xE2, 0xED, 0x95, 0x93, 0xDA, 0xEA, 0x94, 0xCF, 0x99, 0xF9, 0xDA,
                           0x91, 0xF0, 0xC3, 0x90, 0x94, 0xE6, 0xEA, 0x98, 0xF4, 0xF6, 0xFA, 0xE1,
                           0xE8, 0xC1, 0x95, 0x8F, 0xCB, 0x96, 0xEA, 0xC8, 0xC7, 0xD0, 0x8F, 0xC7,
                           0xF3, 0xC6, 0xC7, 0xE1, 0xF6, 0x8F, 0xF0, 0xEB, 0xC1, 0xC5, 0xD8, 0xCA,
                           0xAA, 0x96, 0x90, 0x94, 0x98, 0xD3,
                           0xEA, 0xCE, 0xC9, 0x8B, 0xF9, 0x97, 0xF8, 0xE2, 0xD2, 0xC8, 0xEE, 0xF9,
                           0x93, 0xE5, 0xD2, 0xC7, 0xF2, 0xEA, 0x96, 0xED, 0xCF, 0xC5, 0xED, 0xCB,
                           0xDA, 0xF0, 0xE9, 0xEF, 0xD4, 0xEA, 0xE7, 0xCB, 0x90, 0xC7, 0xD8, 0xEF,
                           0xF7, 0x95, 0x93, 0xC6, 0xCF, 0x8F, 0xD3, 0xC8, 0xEB, 0xC8, 0xCD, 0xF5,
                           0xC2, 0x96, 0xC7, 0xC7, 0x90, 0xD0, 0xCE, 0xD6, 0xD0, 0x92, 0xE8, 0xAA,
                           0x98, 0xE3, 0xE9, 0x97, 0xD2, 0x99, 0xFA, 0xEC, 0xEB, 0x96, 0xC7, 0xF3,
                           0xF9, 0xC4, 0xF6, 0xD0, 0xD5, 0x98, 0xD4, 0xF9, 0xCA, 0xFA, 0xEC, 0xEE,
                           0xD1, 0xE6, 0x95, 0xF3, 0xF2, 0xCB, 0xCE, 0xE1, 0xE7, 0xED, 0x92, 0x93,
                           0xC8, 0xC9, 0x8F, 0xF8, 0x8B, 0xCD, 0xF4, 0x92, 0xF8, 0x93, 0xEC, 0xEF,
                           0x93, 0xF0, 0x91, 0xC8, 0xCB, 0xC1, 0x8F, 0xC7, 0xF5, 0xCD, 0xF5, 0xEB,
                           0xC5, 0x95, 0xCF, 0xFA, 0xAA, 0x90, 0x8B, 0xEB, 0xC6, 0xF1, 0x90, 0xF4,
                           0xCA, 0x96, 0x91, 0xF7, 0xCE, 0xE6, 0x93, 0xE7, 0x92, 0xC1, 0x95, 0xF7,
                           0xF9, 0xE2, 0xD9, 0x96, 0x8F, 0xCA, 0xE7, 0xE5, 0xDA, 0xC8, 0xF1, 0xC5,
                           0xEC, 0xC7, 0x95, 0x92, 0x91, 0x90,
                           0xF4, 0x99, 0xD9, 0x91, 0xD3, 0xD8, 0xF6, 0xEC, 0xE5, 0xF6, 0xF6, 0xF6,
                           0x95, 0xD8, 0xC8, 0xCA, 0xF1, 0xE8, 0xE7, 0xE1, 0xD2, 0x95, 0xD7, 0xC6,
                           0x97, 0xF1, 0xE9, 0xAA, 0xCD, 0x96, 0xF5, 0xC7, 0xCE, 0xF7, 0xEC, 0xD9,
                           0xCD, 0x8B, 0xDA, 0xC6, 0x99, 0xE9, 0xCA, 0xC6, 0xC9, 0xCE, 0xE2, 0xC7,
                           0xF2, 0x99, 0xF0, 0xF4, 0x99, 0xC3, 0xE8, 0xFA, 0xF4, 0x93, 0xD0, 0xC4,
                           0x8B, 0x97, 0xC9, 0xE1, 0x91, 0xE4, 0xF7, 0x93, 0x92, 0xE3, 0x98, 0xC4,
                           0xD7, 0xF5, 0xEA, 0xD6, 0xE2, 0xF4, 0xF0, 0xCE, 0xD8, 0xDA, 0xEE, 0xC9,
                           0xEA, 0x96, 0xCF, 0x96, 0xE2, 0x90, 0xF3, 0xCC, 0xAA, 0xD5, 0xD7, 0xE9,
                           0xE4, 0xE1, 0xF1, 0xE1, 0xE2, 0xAA, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D, 0xE5,
                           0xEE, 0xE4, 0x80, 0xF0, 0xF5, 0xE2, 0xEC, 0xE9, 0xE3, 0x80, 0xEB, 0xE5,
                           0xF9, 0x8D, 0x8D, 0x8D, 0x8D, 0x8D};

struct MemoryStruct
{
    char *memory;
    size_t size;
};

static size_t WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    size_t realsize = size * nmemb;
    struct MemoryStruct *mem = (struct MemoryStruct *)userp;

    mem->memory = (char *)realloc(mem->memory, mem->size + realsize + 1);
    if (mem->memory == NULL)
    {
        return 0;
    }

    memcpy(&(mem->memory[mem->size]), contents, realsize);
    mem->size += realsize;
    mem->memory[mem->size] = 0;

    return realsize;
}

int AntiCrackCanart() {
    JavaVM* java_vm = g_App->activity->vm;
    JNIEnv* java_env = NULL;
    jint jni_return = java_vm->GetEnv((void**)&java_env, JNI_VERSION_1_6);
    if (jni_return == JNI_ERR)
        return -1;
    jni_return = java_vm->AttachCurrentThread(&java_env, NULL);
    if (jni_return != JNI_OK)
        return -2;
    jclass native_activity_clazz = java_env->GetObjectClass(g_App->activity->clazz);
    if (native_activity_clazz == NULL /*By kaushik */)
        return -3;
    jmethodID method_id = java_env->GetMethodID(native_activity_clazz, OBFUSCATE("AndroidThunkJava_RestartGame"),
    OBFUSCATE("()V"));
    if (method_id == NULL)
        return -4;
    java_env->CallVoidMethod(g_App->activity->clazz, method_id);
    jni_return = java_vm->DetachCurrentThread();
    if (jni_return != JNI_OK)
        return -5;
    return 0;
}
bool isAntiCrackCanartFolderHere(const std::string& folderPath) {
    return (access(folderPath.c_str(), F_OK) == 0);
}

void Crack() {
std::string folderPath = OBFUSCATE("/storage/emulated/0/Android/data/com.guoshi.httpcanary");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack2() {
std::string folderPath = OBFUSCATE("/storage/emulated/0/Android/data/com.guoshi.httpcanary.premium");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack3() {
std::string folderPath = OBFUSCATE("/data/user/0/eu.faircode.netguard");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack4() {
std::string folderPath = OBFUSCATE("/data/user/0/com.guoshi.httpcanary.premium");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack5() {
std::string folderPath = OBFUSCATE("/storage/emulated/0/Android/data/com.sniffer");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack6() {
std::string folderPath = OBFUSCATE("/data/user/0/com.sniffer");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack7() {
std::string folderPath = OBFUSCATE("/data/user/0/com.guoshi.httpcanary");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack8() {
std::string folderPath = OBFUSCATE("/data/user/0/org.httpcanary.pro");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack9() {
std::string folderPath = OBFUSCATE("/storage/emulated/0/Android/data/com.datacapture.pro");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack10() {
std::string folderPath = OBFUSCATE("/data/user/0/com.datacapture.pro");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack11() {
std::string folderPath = OBFUSCATE("/storage/emulated/0/Android/data/com.httpcanary.pro");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack12() {
std::string folderPath = OBFUSCATE("/storage/emulated/0/Android/data/ROKMOD.COM");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack13() {
std::string folderPath = OBFUSCATE("/storage/emulated/0/Android/data/com.sanmeet");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}
void Crack14() {
std::string folderPath = OBFUSCATE("/data/user/0/com.sanmeet");
if (isAntiCrackCanartFolderHere(folderPath)){
    AntiCrackCanart(); } else {}
}

std::string Login(const char *user_key) {
    if (!g_App)
        return "Internal Error";

    auto activity = g_App->activity;
    if (!activity)
        return "Internal Error";

    auto vm = activity->vm;
    if (!vm)
        return "Internal Error";

    auto object = activity->clazz;
    if (!object)
        return "Internal Error";

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    std::string hwid = user_key;
    hwid += GetAndroidID(env, object);
    hwid += GetDeviceModel(env);
    hwid += GetDeviceBrand(env);
    std::string UUID = GetDeviceUniqueIdentifier(env, hwid.c_str());
    vm->DetachCurrentThread();
    std::string errMsg;

    struct MemoryStruct chunk{};
    chunk.memory = (char *) malloc(1);
    chunk.size = 0;

    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    if (curl) {
        std::string sss_aus = OBFUSCATE("https://msbvip.dfox.site/connect");
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, /*POST*/
                         StrEnc(",IL=", "\x7C\x06\x1F\x69", 4).c_str());
        curl_easy_setopt(curl, CURLOPT_URL,
                         sss_aus.c_str()); //"https://api.keyvip.tech/Dimension/public/connect");
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        curl_easy_setopt(curl, CURLOPT_DEFAULT_PROTOCOL, /*https*/
                         StrEnc("!mLBO", "\x49\x19\x38\x32\x3C", 5).c_str());
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, /*Content-Type: application/x-www-form-urlencoded*/
                                    StrEnc("@;Ls\\(KP4Qrop`b#d3094/r1cf<c<=H)AiiBG6i|Ta66s2[",
                                           "\x03\x54\x22\x07\x39\x46\x3F\x7D\x60\x28\x02\x0A\x4A\x40\x03\x53\x14\x5F\x59\x5A\x55\x5B\x1B\x5E\x0D\x49\x44\x4E\x4B\x4A\x3F\x04\x27\x06\x1B\x2F\x6A\x43\x1B\x10\x31\x0F\x55\x59\x17\x57\x3F",
                                           47).c_str());
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

        char data[4096];
        sprintf(data, /*game=PUBG&user_key=%s&serial=%s*/StrEnc("qu2yXK,YkJyGD@ut0.u~Nb'5(:.:chK",
                                                                "\x16\x14\x5F\x1C\x65\x1B\x79\x1B\x2C\x6C\x0C\x34\x21\x32\x2A\x1F\x55\x57\x48\x5B\x3D\x44\x54\x50\x5A\x53\x4F\x56\x5E\x4D\x38",
                                                                31).c_str(), user_key,
                UUID.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);

        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *) &chunk);

        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, 0L);
        curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, 0L);

        res = curl_easy_perform(curl);
        if (res == CURLE_OK) {
            try {
                json result = json::parse(chunk.memory);
                if (result[/*status*/ StrEnc("(>_LBm", "\x5B\x4A\x3E\x38\x37\x1E", 6).c_str()] ==
                    true) {
                    std::string token = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20",
                                                               4).c_str()][/*token*/ StrEnc("{>3Lr",
                                                                                            "\x0F\x51\x58\x29\x1C",
                                                                                            5).c_str()].get<std::string>();
                    time_t rng = result[/*data*/ StrEnc("fAVA", "\x02\x20\x22\x20",
                                                        4).c_str()][/*rng*/ StrEnc("+n,",
                                                                                   "\x59\x00\x4B",
                                                                                   3).c_str()].get<time_t>();
                    if (rng + 30 > time(0)) {
                        std::string auth = /*PUBG*/ StrEnc("Q*) ", "\x01\x7F\x6B\x67", 4).c_str();;
                        auth += "-";
                        auth += user_key;
                        auth += "-";
                        auth += UUID;
                        auth += "-";
                        auth += /*Vm8Lk7Uj2JmsjCPVPVjrLa7zgfx3uz9E*/ StrEnc(
                                "-2:uwZdV^%]?{{wHs2V,+(^NJU;kC*_{",
                                "\x7B\x5F\x02\x39\x1C\x6D\x31\x3C\x6C\x6F\x30\x4C\x11\x38\x27\x1E\x23\x64\x3C\x5E\x67\x49\x69\x34\x2D\x33\x43\x58\x36\x50\x66\x3E",
                                32).c_str();
                        std::string outputAuth = Tools::CalcMD5(auth);

                        g_Token = token;
                        g_Auth = outputAuth;

                        bValid = g_Token == g_Auth;
                    }
                } else {
                    errMsg = result[/*reason*/ StrEnc("LW(3(c", "\x3E\x32\x49\x40\x47\x0D",
                                                      6).c_str()].get<std::string>();
                }
            } catch (json::exception &e) {
                errMsg = "{";
                errMsg += e.what();
                errMsg += "}\n{";
                errMsg += chunk.memory;
                errMsg += "}";
            }
        } else {
            errMsg = curl_easy_strerror(res);
        }
    }
    curl_easy_cleanup(curl);
    return bValid ? "OK" : errMsg;
}

bool isInsideFOVs(int x, int y) {
    if (!Config.SilentAim.Cross)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad = Config.SilentAim.Cross*0.5f;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}

auto GetTargetForCross() {
   ASTExtraPlayerCharacter *result = 0;
	float max = std::numeric_limits<float>::infinity();
	auto Actors = getActors();
	auto localPlayer = g_LocalPlayer;
	auto localController = g_LocalController;
	if (localPlayer)
	{
		for (auto Actor : Actors)
		{
			if (isObjectInvalid(Actor))
				continue;
			if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
			{
			
			     auto Player = (ASTExtraPlayerCharacter *)Actor;
                auto Target = (ASTExtraPlayerCharacter *) Actor;

               float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
               if (dist > Config.SilentAim.Meter)
                    continue;

			
			if (Player->PlayerKey == localPlayer->PlayerKey)
					continue;
				if (Player->TeamID == localPlayer->TeamID)
					continue;
				if (Player->bDead)
					continue;
					
					
                              if (Config.SilentAim.IgnoreKnocked) {
                            if (Player->Health == 0.0f)
                                continue;
                        }


                        if (Config.SilentAim.VisCheck) {
                            if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                                continue;
                        }
                        if (Config.SilentAim.IgnoreBots) {
                            if (Player->bEnsure)
                                continue;
                        }

                auto Root = Player->GetBonePos("Root", {});
				auto Head = Player->GetBonePos("Head", {});
				FVector2D RootSc, HeadPosSC;
				if (W2S(Root, &RootSc) && W2S(Head, &HeadPosSC))
				{
					float height = abs(HeadPosSC.Y - RootSc.Y);
					float width = height * 0.20f;

					FVector middlePoint = {HeadPosSC.X + (width / 2), HeadPosSC.Y + (height / 2), 0};
					if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight))
					{
						FVector2D v2Middle = FVector2D((float)(glWidth / 2), (float)(glHeight / 2));
						FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
						
						
                                if(isInsideFOVs((int)middlePoint.X, (int)middlePoint.Y)) {

                                float dist = FVector2D::Distance(v2Middle, v2Loc);

                                if (dist < max) {
                                    max = dist;
                                    result = Player;
                                }
                              }
                            }
                        }
                    
                
            }
        }
    }

    return result;
}


bool isInsideFOVAim(int x, int y) {
    if (!Config.AimBot.Cross)
        return true;

    int circle_x = glWidth / 2;
    int circle_y = glHeight / 2;
    int rad = Config.AimBot.Cross*0.5f;
    return (x - circle_x) * (x - circle_x) + (y - circle_y) * (y - circle_y) <= rad * rad;
}

auto GetTargetForAimBot() {
   ASTExtraPlayerCharacter *result = 0;
	float max = std::numeric_limits<float>::infinity();
	auto Actors = getActors();
	auto localPlayer = g_LocalPlayer;
	auto localController = g_LocalController;
	if (localPlayer)
	{
		for (auto Actor : Actors)
		{
			if (isObjectInvalid(Actor))
				continue;
			if (Actor->IsA(ASTExtraPlayerCharacter::StaticClass()))
			{
			
			     auto Player = (ASTExtraPlayerCharacter *)Actor;
                auto Target = (ASTExtraPlayerCharacter *) Actor;

               float dist = localPlayer->GetDistanceTo(Target) / 100.0f;    
               if (dist > Config.Meter)
                    continue;

			
			if (Player->PlayerKey == localPlayer->PlayerKey)
					continue;
				if (Player->TeamID == localPlayer->TeamID)
					continue;
				if (Player->bDead)
					continue;
					
					
                              if (Config.AimBot.IgnoreKnocked) {
                            if (Player->Health == 0.0f)
                                continue;
                        }


                        if (Config.AimBot.VisCheck) {
                            if (!localController->LineOfSightTo(Player, {0, 0, 0}, true))
                                continue;
                        }
                        if (Config.AimBot.IgnoreBot) {
                            if (Player->bIsAI)
                                continue;
                        }

                        auto Root = Player->GetBonePos("Root", {});
				auto Head = Player->GetBonePos("Head", {});
				FVector2D RootSc, HeadPosSC;
				if (W2S(Root, &RootSc) && W2S(Head, &HeadPosSC))
				{
					float height = abs(HeadPosSC.Y - RootSc.Y);
					float width = height * 0.20f;

					FVector middlePoint = {HeadPosSC.X + (width / 2), HeadPosSC.Y + (height / 2), 0};
					if ((middlePoint.X >= 0 && middlePoint.X <= glWidth) && (middlePoint.Y >= 0 && middlePoint.Y <= glHeight))
					{
						FVector2D v2Middle = FVector2D((float)(glWidth / 2), (float)(glHeight / 2));
						FVector2D v2Loc = FVector2D(middlePoint.X, middlePoint.Y);
						
						
                                if(isInsideFOVAim((int)middlePoint.X, (int)middlePoint.Y)) {

                                float dist = FVector2D::Distance(v2Middle, v2Loc);

                                if (dist < max) {
                                    max = dist;
                                    result = Player;
                                }
                              }
                            }
                        }
                    
                
            }
        }
    }

    return result;
}
 
const char *GetVehicleName(ASTExtraVehicleBase *Vehicle) {
    switch (Vehicle->VehicleShapeType) {
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Motorbike_SideCart:
            return "Motorbike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Dacia:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyDacia:
            return "Dacia";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MiniBus:
            return "Mini Bus";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PickUp01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyPickup:
            return "Pick Up";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Buggy:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyBuggy:
            return "Buggy";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ01:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ02:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAZ03:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUAZ:
            return "UAZ";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_PG117:
            return "PG117";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Aquarail:
            return "Aquarail";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Mirado01:
            return "Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Rony:
            return "Rony";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Scooter:
            return "Scooter";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowMobile:
            return "Snow Mobile";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_TukTukTuk:
            return "Tuk Tuk";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_SnowBike:
            return "Snow Bike";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Surfboard:
            return "Surf Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Snowboard:
            return "Snow Board";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Amphibious:
            return "Amphibious";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_LadaNiva:
            return "Lada Niva";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_UAV:
            return "UAV";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_MegaDrop:
            return "Mega Drop";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini:
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_Lamborghini01:
            return "Lamborghini";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_GoldMirado:
            return "Gold Mirado";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_BigFoot:
            return "Big Foot";
            break;
        case ESTExtraVehicleShapeType::ESTExtraVehicleShapeType__VST_HeavyUH60:
            return "UH60";
            break;
        default:
            return "Vehicle";
            break;
    }
    return "Vehicle";
}

void (*orig_shoot_event)(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, void *unk1, int unk2) = 0;

void shoot_event(USTExtraShootWeaponComponent *thiz, FVector start, FRotator rot, ASTExtraShootWeapon *weapon, int unk1) {

        if (Config.SilentAim.Enable) {
        ASTExtraPlayerCharacter *Target = GetTargetForCross();
        if (Target) {
            bool triggerOk = false;
            if (Config.SilentAim.Trigger != EAimTrigger::None) {
                if (Config.SilentAim.Trigger == EAimTrigger::Shooting) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Scoping) {
                    triggerOk = g_LocalPlayer->bIsGunADS;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Both) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring && g_LocalPlayer->bIsGunADS;
                } else if (Config.SilentAim.Trigger == EAimTrigger::Any) {
                    triggerOk = g_LocalPlayer->bIsWeaponFiring || g_LocalPlayer->bIsGunADS;
                }
            } else triggerOk = true;
            if (triggerOk) {
                FVector targetAimPos = Target->GetBonePos("Head", {});
                //if (Config.SilentAim.Target == EAimTarget::Chest) {
                    targetAimPos.Z -= 25.0f;
               // }

                UShootWeaponEntity *ShootWeaponEntityComponent = thiz->ShootWeaponEntityComponent;

				
			
                if (ShootWeaponEntityComponent) {
                    ASTExtraVehicleBase *CurrentVehicle = Target->CurrentVehicle;
                    if (CurrentVehicle) {
                        FVector LinearVelocity = CurrentVehicle->ReplicatedMovement.LinearVelocity;

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(LinearVelocity, timeToTravel));
                    } else {
                        FVector Velocity = Target->GetVelocity();

                        float dist = g_LocalPlayer->GetDistanceTo(Target);
                        auto timeToTravel = dist / ShootWeaponEntityComponent->BulletRange;

                        targetAimPos = UKismetMathLibrary::Add_VectorVector(targetAimPos, UKismetMathLibrary::Multiply_VectorFloat(Velocity, timeToTravel));
                    }
                    FVector fDir = UKismetMathLibrary::Subtract_VectorVector(targetAimPos, start);
                    FRotator sex = UKismetMathLibrary::Conv_VectorToRotator(fDir);
                    rot = sex;
                }
            }
        }
    }

    return orig_shoot_event(thiz, start, rot, weapon, unk1);
}
 

//3D BOX
FRotator ToRotator(FVector local, FVector target) {
    FVector rotation = UKismetMathLibrary::Subtract_VectorVector(local, target);

    float hyp = sqrt(rotation.X * rotation.X + rotation.Y * rotation.Y);

    FRotator newViewAngle = {0};
    newViewAngle.Pitch = -atan(rotation.Z / hyp) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Yaw = atan(rotation.Y / rotation.X) * (180.f / (float) 3.14159265358979323846);
    newViewAngle.Roll = (float) 0.f;

    if (rotation.X >= 0.f)
        newViewAngle.Yaw += 180.0f;

    return newViewAngle;
}

void Line(ImDrawList *draw,FVector2D origin, FVector2D dest, ImColor color)
{
   draw->AddLine({origin.X, origin.Y},{dest.X, dest.Y},color, 1.0f);
}
bool W2S2(FVector worldPos, FVector2D *screenPos) {
    return g_LocalController->ProjectWorldLocationToScreen(worldPos, true, screenPos);
}


void DrawBoxEnemy(ImDrawList *draw, ImVec2 X, ImVec2 Y, float thicc, float rounding, int color)
{
    draw->AddLine({X.x, X.y}, {Y.x, Y.y}, color, thicc);
}

void DrawLine(ImDrawList *draw, FVector2D origin, FVector2D dest, ImColor color, float thickness = 3.0f)
{
    draw->AddLine({origin.X, origin.Y}, {dest.X, dest.Y}, color, thickness);
}

void DrawText(ImDrawList *draw, const std::string &text, const FVector2D &position, ImU32 color, float fontSize)
{
    draw->AddText(NULL, fontSize, {position.X, position.Y}, color, text.c_str());
}

void DrawTextWithBorder(ImDrawList *draw, const std::string &text, const FVector2D &position, ImU32 textColor, ImU32 borderColor, float fontSize)
{
    float borderSize = 1.0f;

    for (int x = -1; x <= 1; ++x)
    {
        for (int y = -1; y <= 1; ++y)
        {
            if (x == 0 && y == 0)
                continue;

            DrawText(draw, text, {position.X + x * borderSize, position.Y + y * borderSize}, borderColor, fontSize);
        }
    }
    DrawText(draw, text, position, textColor, fontSize);
}




void Box3D(ImDrawList *draw, FVector origin, Vector3 extends, ImColor col) {
    
    origin.X -= extends.X / 2.f;
    origin.Y -= extends.Y / 2.f;
    origin.Z -= extends.Z / 2.f;
 FVector one = origin;
 FVector two = origin; two.X += extends.X;
 FVector tree = origin; tree.X += extends.X; tree.Y += extends.Y;
 FVector four = origin; four.Y += extends.Y;

 FVector five = one; five.Z += extends.Z;
 FVector six = two; six.Z += extends.Z;
 FVector seven = tree; seven.Z += extends.Z;
 FVector eight = four; eight.Z += extends.Z;

    FVector2D s1, s2, s3, s4, s5, s6, s7, s8;
    if (W2S2(one, &s1) && W2S2(two, &s2) && W2S2(tree, &s3) && W2S2(four, &s4) &&
    W2S2(five, &s5) && W2S2(six, &s6) && W2S2(seven, &s7) && W2S2(eight, &s8))
    {
        
    Line(draw,s1, s2, col);
    Line(draw,s2, s3, col);
    Line(draw,s3, s4, col);
    Line(draw,s4, s1, col);
 
    Line(draw,s5, s6, col);
    Line(draw,s6, s7, col);
    Line(draw,s7, s8, col);
    Line(draw,s8, s5, col);
 
    Line(draw,s1, s5, col);
    Line(draw,s2, s6, col);
    Line(draw,s3, s7, col);
    Line(draw,s4, s8, col);

}  
}
#define IM_CLAMP(V, MN, MX)     ((V) < (MN) ? (MN) : (V) > (MX) ? (MX) : (V))
        namespace Settings
        {
        static int Tab = 1;
        }
