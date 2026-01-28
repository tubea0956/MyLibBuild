APP_ABI := arm64-v8a
APP_PLATFORM := android-21
APP_STL := c++_static
APP_OPTIM := release
# Security flags: Stack protection aur PIE (Position Independent Executable)
APP_CPPFLAGS += -fstack-protector-all
APP_PIE := true


