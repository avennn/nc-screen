#include <napi.h>

#if __APPLE__

#include <CoreGraphics/CGDisplayConfiguration.h>
#include <ApplicationServices/ApplicationServices.h>

Napi::Object getInfo(const Napi::CallbackInfo &info);

#endif