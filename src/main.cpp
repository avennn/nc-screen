#include <napi.h>

using namespace Napi;

Object getInfo(const CallbackInfo& info) {
    Env env = info.Env();
    Object obj = Object::New(env);
    obj.Set("hello", "world");
    return obj;
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set("getInfo", Function::New(env, getInfo, "getInfo"));
    return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init)