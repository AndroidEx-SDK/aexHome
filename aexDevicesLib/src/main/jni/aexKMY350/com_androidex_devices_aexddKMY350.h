/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_androidex_devices_aexddKMY350 */

#ifndef _Included_com_androidex_devices_aexddKMY350
#define _Included_com_androidex_devices_aexddKMY350
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jint JNICALL aexddKMY350_JNI_OnLoad(JavaVM *vm, void *reserved);
JNIEXPORT void JNICALL aexddKMY350_JNI_OnUnload(JavaVM* vm, void* reserved);

JNIEXPORT jbyteArray JNICALL Java_com_androidex_devices_aexddKMY350_kmyReadPacket
        (JNIEnv *, jobject, jint,jint);
JNIEXPORT jint JNICALL Java_com_androidex_devices_aexddKMY350_kmyReadKeyLoop
        (JNIEnv *, jobject, jint, jint);
JNIEXPORT void JNICALL Java_com_androidex_devices_aexddKMY350_kmySendCmd
        (JNIEnv *, jobject, jint, jstring, jint);
JNIEXPORT void JNICALL Java_com_androidex_devices_aexddKMY350_kmySendHexCmd
        (JNIEnv *, jobject, jint, jstring, jint);

#ifdef __cplusplus
}
#endif
#endif
