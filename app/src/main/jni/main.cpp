#include <jni.h>
#include <string.h>
#include "com_xunfang_xu_myndktest_MainActivity.h"

JNIEXPORT jstring JNICALL Java_com_xunfang_xu_myndktest_MainActivity_getStrFromNative
  (JNIEnv *env, jobject thiz){
    return env->NewStringUTF("Hello World in Jni!");
  }