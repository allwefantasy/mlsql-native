#pragma once

#include <jni.h>

extern "C" {
JNIEXPORT jstring JNICALL Java_tech_mlsql_nativelib_runtime_MLSQLNativeRuntime_funcLower(JNIEnv *, jobject, jstring);
JNIEXPORT jstring JNICALL Java_tech_mlsql_nativelib_runtime_MLSQLNativeRuntime_funcUpper(JNIEnv *, jobject, jstring);
}
