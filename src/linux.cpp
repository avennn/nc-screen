#include <napi.h>

#if __linux__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Napi::Object getInfo(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::Object obj = Napi::Object::New(env);

    FILE *fp;
    char screenSize[12];
    char *pEnd;
    unsigned int width = 0;
    unsigned int height = 0;

    fp = popen("/usr/bin/env xrandr 2> /dev/null | grep \\* | cut -d ' ' -f4", "r");
    if (fp) { 
        fgets(screenSize, sizeof(screenSize) - 1, fp);
        width = strtol(strtok(screenSize, "x"), &pEnd, 10);
        height = strtol(strtok(NULL, "x"), &pEnd, 10);
    }
    
    obj.Set("width", Napi::Number::New(env, width));
    obj.Set("height", Napi::Number::New(env, height));
    
    return obj;
}

#endif