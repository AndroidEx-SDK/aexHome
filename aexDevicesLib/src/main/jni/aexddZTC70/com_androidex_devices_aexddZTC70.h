/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_androidex_devices_aexddZTC70 */

#ifndef _Included_com_androidex_devices_aexddZTC70
#define _Included_com_androidex_devices_aexddZTC70
static char *const tag = "kmy";
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL aexddZTC70_JNI_OnLoad(JavaVM *vm, void *reserved);
JNIEXPORT void JNICALL aexddZTC70_JNI_OnUnload(JavaVM* vm, void* reserved);

JNIEXPORT jbyteArray JNICALL Java_com_androidex_devices_aexddZTC70_ztReadPacket
        (JNIEnv *, jobject, jint,jint);
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddZTC70_ztReadKeyLoop
        (JNIEnv *, jobject, jint, jint);
JNIEXPORT void JNICALL Java_com_androidex_devices_aexddZTC70_ztSendCmd
        (JNIEnv *, jobject, jint, jstring, jint);
JNIEXPORT void JNICALL Java_com_androidex_devices_aexddZTC70_ztSendHexCmd
        (JNIEnv *, jobject, jint, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif
