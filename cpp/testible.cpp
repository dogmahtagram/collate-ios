#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_moist_com_collate_MainActivity_TestibleText(
        JNIEnv *env,
        jobject /* this */) {
    std::string testibleString = "Testible...";
    return env->NewStringUTF(testibleString.c_str());
}