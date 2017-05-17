// Created by cmcc on 2017/5/17.
//
#include <jni.h>

#ifndef NDKTEST_COM_EXAMPLE_CMCC_NDKTEST_CODE_H
#define NDKTEST_COM_EXAMPLE_CMCC_NDKTEST_CODE_H
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wobiancao_ndkjnidemo_ndk_JniUtils
 * Method:    getStringFormC
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wobiancao_ndkjnidemo_ndk_JniUtils_getStringFormC
        (JNIEnv *, jclass);

/*
 * Class:     com_wobiancao_ndkjnidemo_ndk_JniUtils
 * Method:    getKeyValue
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wobiancao_ndkjnidemo_ndk_JniUtils_getKeyValue
        (JNIEnv *, jclass);

/*
 * Class:     com_wobiancao_ndkjnidemo_ndk_JniUtils
 * Method:    getIv
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_wobiancao_ndkjnidemo_ndk_JniUtils_getIv
        (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif

