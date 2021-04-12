#include <napi.h>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)

#include <windows.h>

Napi::Object getInfo(const Napi::CallbackInfo &info);

#endif