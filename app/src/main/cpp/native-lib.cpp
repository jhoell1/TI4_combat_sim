#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_jhoeller_ti3combatsimulator_TI3_Combat_Sim_Main_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
