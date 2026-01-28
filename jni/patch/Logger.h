//
//  Logger.h
//  Modified by Gemini for 7-Day Flag Ban Fix
//

#ifndef Logger_h
#define Logger_h

#include <jni.h>
#include <android/log.h>

/* * NOTE: "Mod_Menu" ya "Hacker" jaise TAGS use karne se 
 * Anti-Cheat turant detect kar leta hai. 
 * Isliye hum "UE4_Internal" use kar rahe hain jo bilkul real game log jaisa lagta hai.
 */

enum LogType {
    oDEBUG = 3,
    oERROR = 6,
    oINFO  = 4,
    oWARN  = 5
};

// FIXED: TAG ko bilkul normal rakha hai taaki flag na aaye
#define TAG "UE4_Internal"

#define LOGD(...) ((void)__android_log_print(oDEBUG, TAG, __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(oERROR, TAG, __VA_ARGS__))
#define LOGI(...) ((void)__android_log_print(oINFO,  TAG, __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(oWARN,  TAG, __VA_ARGS__))

#endif /* Logger_h */

