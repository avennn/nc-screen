#include <napi.h>

#if __APPLE__

#include <CoreGraphics/CGDisplayConfiguration.h>
#include <ApplicationServices/ApplicationServices.h>

Napi::Object getInfo(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::Object obj = Napi::Object::New(env);

    // TODO: Mac OSX >= 10.6?
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

#endif