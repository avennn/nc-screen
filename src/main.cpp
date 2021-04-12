#include <napi.h>

#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__NT__)
    #include "win.h"
#elif __APPLE__
    #include "osx.h"
#elif __linux__
    #include 'linux.h'
#endif

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set("getInfo", Napi::Function::New(env, getInfo, "getInfo"));
    return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init)