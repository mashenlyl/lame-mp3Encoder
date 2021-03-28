#include "com_example_mp3encoder_Mp3EncoderTest.h"
#include <android/log.h>
#include "mp3_encoder.h"

#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, "liyaoli", __VA_ARGS__)

Mp3Encoder* encoder;

JNIEXPORT jint JNICALL Java_com_example_mp3encoder_Mp3EncoderTest_init
  (JNIEnv *env, jclass obj, jstring pcmPathParam, jint audioChannels, jint bitRate, jint sampleRate, jstring mp3PathParam)
{
    LOGI("encoder init");
    jint ret = -1;
    const char* pcmPath = env->GetStringUTFChars(pcmPathParam, NULL);
    const char* mp3Path = env->GetStringUTFChars(mp3PathParam, NULL);
    LOGI("encoder Mp3Encoder");
    encoder = new Mp3Encoder();
    LOGI("encoder Mp3Encoder after");
    ret = encoder->Init(pcmPath, mp3Path, sampleRate, audioChannels, bitRate);
    LOGI("encoder Init after");
    env->ReleaseStringUTFChars(pcmPathParam, pcmPath);
    env->ReleaseStringUTFChars(mp3PathParam, mp3Path);
    return ret;
}


JNIEXPORT void JNICALL Java_com_example_mp3encoder_Mp3EncoderTest_encode
        (JNIEnv *env, jclass obj) {
    LOGI("encoder encode");
    encoder->Encode();
}

JNIEXPORT void JNICALL Java_com_example_mp3encoder_Mp3EncoderTest_destroy
  (JNIEnv *env, jclass obj) {
    LOGI("encoder destroy");
    encoder->Destory();
}








