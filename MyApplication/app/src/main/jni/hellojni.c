//
// Created by happen on 2017/2/16.
//

#include <jni.h>
JNIEXPORT jstring JNICALL Java_com_jdjz_myapplication_MainActivity_getStringNative
  (JNIEnv *env, jobject obj){
            char *cstr = "Hello NDK JNI";
            jstring jstr=(*env)->NewStringUTF(env,cstr);
            return jstr;
  }