#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_nativelib_NativeLib_stringFromLibJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello C++ From NativeLib";
    return env->NewStringUTF(hello.c_str());
}