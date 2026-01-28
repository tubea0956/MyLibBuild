LOCAL_PATH := $(call my-dir)
MAIN_LOCAL_PATH := $(call my-dir)

# 1. External Libraries (CURL & SSL)
include $(CLEAR_VARS)
LOCAL_MODULE := libcurl
LOCAL_SRC_FILES := curl/curl-android-$(TARGET_ARCH_ABI)/lib/libcurl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libssl
LOCAL_SRC_FILES := curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libssl.a
include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libcrypto
LOCAL_SRC_FILES := curl/openssl-android-$(TARGET_ARCH_ABI)/lib/libcrypto.a
include $(PREBUILT_STATIC_LIBRARY)

# 2. Dobby Hooking Engine (64-bit ke liye mandatory)
include $(CLEAR_VARS)
LOCAL_MODULE := libdobby
LOCAL_SRC_FILES := Helper/Dobby/libraries/$(TARGET_ARCH_ABI)/libdobby.a
LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH)/Helper/Dobby/include
include $(PREBUILT_STATIC_LIBRARY)

# 3. Main Cheat Library (WISDOM_SRC)
include $(CLEAR_VARS)
LOCAL_MODULE    := WISDOM_SRC

# 64-bit Stealth Flags
LOCAL_CFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w -DNDEBUG
LOCAL_CFLAGS += -fno-rtti -fno-exceptions -fpermissive
LOCAL_CPPFLAGS := -Wno-error=format-security -fvisibility=hidden -ffunction-sections -fdata-sections -w -std=c++17 -O3
LOCAL_CPPFLAGS += -fno-rtti -fno-exceptions -fpermissive
LOCAL_LDFLAGS += -Wl,--gc-sections,--strip-all -llog

# Include Paths
LOCAL_C_INCLUDES += $(MAIN_LOCAL_PATH)
LOCAL_C_INCLUDES += $(LOCAL_PATH)/curl/curl-android-$(TARGET_ARCH_ABI)/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/curl/openssl-android-$(TARGET_ARCH_ABI)/include
LOCAL_C_INCLUDES += $(LOCAL_PATH)/Helper/Dobby/include

# Source Files (Filtered for 64-bit Stealth)
LOCAL_SRC_FILES := main.cpp \
    Cruel.cpp \
    patch/KittyMemory.cpp \
    patch/MemoryPatch.cpp \
    patch/KittyUtils.cpp \
    Helper/tools.cpp \
    Helper/ImguiPP.cpp \
    imgui/imgui.cpp \
    imgui/imgui_draw.cpp \
    imgui/imgui_demo.cpp \
    imgui/imgui_tables.cpp \
    imgui/imgui_widgets.cpp \
    imgui/backends/imgui_impl_android.cpp \
    imgui/backends/imgui_impl_opengl3.cpp \
    SDK/8X_MANISH_Basic.cpp \
    SDK/8X_MANISH_Basic_functions.cpp \
    SDK/8X_MANISH_Engine_functions.cpp \
    SDK/8X_MANISH_CoreUObject_functions.cpp

# Libraries to link
LOCAL_LDLIBS    := -llog -landroid -lEGL -lGLESv3 -lz
LOCAL_STATIC_LIBRARIES := libcurl libssl libcrypto libdobby

include $(BUILD_SHARED_LIBRARY)
