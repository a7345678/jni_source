#include "./jni/com_keyilx_jni_JNIDemo.h"

JNIEXPORT jstring JNICALL Java_com_keyilx_jni_JNIDemo_getStringFromC (JNIEnv *env, jobject obj) {
    return (*env)->NewStringUTF(env,"string from c");
}