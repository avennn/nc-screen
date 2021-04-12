#include <napi.h>

#if __linux__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Napi::Object getInfo(const Napi::CallbackInfo &info);

#endif