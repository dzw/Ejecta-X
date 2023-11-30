#include "EJFile.h"

#ifdef __cplusplus
#include <string>
#include <iostream>
#include <fstream>
#endif /*__cplusplus*/
#if defined(ANDROID)

#include <jni.h>
#include <android/log.h>

#include "EJCocoa/support/NSPlatformMacros.h"

#include <android/asset_manager.h>
class AAsset;
AAssetManager* g_assetManager;
jobject assetManager;
#endif

#ifdef _WINDOWS
FILE _iob[] = { *stdin, *stdout, *stderr };

extern "C" FILE * __cdecl __iob_func(void)
{
    return _iob;
}
#endif


unsigned char* ReadFileN(const char* filename, size_t* sizea)
{
    
#if defined(ANDROID)
    // Check file from main bundle - /assets/EJECTA_APP_FOLDER/
    if (g_assetManager == NULL) {
        NSLOG("error loading asset manager");
        return nullptr;
    }
    // Open file
    AAsset *asset = AAssetManager_open(g_assetManager, filename, AASSET_MODE_UNKNOWN);
    if (NULL == asset) {
        NSLOG("Error: Cannot find script %s", filename);
        return nullptr;
    } else {
        long size = AAsset_getLength(asset);        
        unsigned char *buffer = (unsigned char *) malloc(sizeof(char) *size);
        int result = AAsset_read(asset, buffer, size);
        if (result < 0) {
            NSLOG("Error reading file %s", filename);
            AAsset_close(asset);
            free(buffer);
            return nullptr;
        }
        *sizea = size;
        return buffer;
    }
#else
    
    std::ifstream iFile(filename, std::ios::in);
    std::string rslt(
        (std::istreambuf_iterator<char>(iFile)),
        (std::istreambuf_iterator<char>())
    );
    std::basic_string<char> remove_reference = std::move(rslt);
    size_t size = remove_reference.size();
    
    unsigned char* buffer = (unsigned char*)malloc(sizeof(char) * size);    
    memcpy(buffer, remove_reference.c_str(), size);
    *sizea = size;

    return buffer;
#endif
}
