#include <jni.h>
#include <string>
#include <iostream>
#include "MLSQLNativeRuntime.h"

JNIEXPORT jstring JNICALL Java_tech_mlsql_nativelib_runtime_MLSQLNativeRuntime_funcLower(JNIEnv *env, jobject thisObj, jstring str) {
    jboolean isCopy(false);
    const char* inCstr = (*env).GetStringUTFChars(str,&isCopy);
    auto s = std::string(inCstr)+"::native";
    std::transform(s.begin(),s.end(),s.begin(),[](unsigned char c){return std::tolower(c);});
    env->ReleaseStringUTFChars(str,inCstr);
    if (NULL == str) return NULL;
    return env->NewStringUTF(s.c_str());
}
JNIEXPORT jstring JNICALL Java_tech_mlsql_nativelib_runtime_MLSQLNativeRuntime_funcUpper(JNIEnv *env, jobject thisObj, jstring str){
    return str;
}