#include <napi.h>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)

#include <windows.h>

Napi::Object getInfo(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::Object obj = Napi::Object::New(env);

    unsigned int width = (unsigned int)GetSystemMetrics(SM_CXSCREEN);
    unsigned int height = (unsigned int)GetSystemMetrics(SM_CYSCREEN);

    obj.Set("width", Napi::Number::New(env, width));
    obj.Set("height", Napi::Number::New(env, height));
    
    return obj;
}

#endif