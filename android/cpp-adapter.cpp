#include <jni.h>
#include "react-native-sequel.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_reactnativesequel_SequelModule_nativeMultiply(JNIEnv *env, jclass type, jint a, jint b) {
    return example::multiply(a, b);
}
