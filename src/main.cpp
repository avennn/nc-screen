#include <napi.h>

#include <CoreGraphics/CGDisplayConfiguration.h>
#include <ApplicationServices/ApplicationServices.h>

// https://stackoverflow.com/questions/4921817/get-screen-resolution-programmatically-in-os-x
// https://github.com/nodejs/node-gyp/issues/1981
// https://github.com/davidmarkclements/screenres
Napi::Object getInfo(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::Object obj = Napi::Object::New(env);

    CGDirectDisplayID displayId = CGMainDisplayID();
    unsigned int wide = CGDisplayPixelsWide(displayId);
    // unsigned int high = CGDisplayPixelsHigh(displayId);

    CGDisplayModeRef displayMode = CGDisplayCopyDisplayMode(displayId);
    unsigned int width = CGDisplayModeGetPixelWidth(displayMode);
    unsigned int height = CGDisplayModeGetPixelHeight(displayMode);
    CGDisplayModeRelease(displayMode);

    bool isRetina = width / wide == 2 ? true : false;

    obj.Set("width", Napi::Number::New(env, width));
    obj.Set("height", Napi::Number::New(env, height));
    obj.Set("isRetina", Napi::Boolean::New(env, isRetina));
    return obj;
}

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    exports.Set("getInfo", Napi::Function::New(env, getInfo, "getInfo"));
    return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Init)