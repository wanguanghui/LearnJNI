/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_shenmatouzi_shenmatouzi_utils_JNIUtils */

#ifndef _Included_com_wochacha_learnjni_utils_JNIUtils
#define _Included_com_wochacha_learnjni_utils_JNIUtils
#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL Java_com_wochacha_learnjni_utils_JNIUtils_get3DESKey
(JNIEnv *env, jclass clazz, jobject thiz);

/*
 * Class:     com_shenmatouzi_shenmatouzi_utils_JNIUtils
 * Method:    get3DESVi
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wochacha_learnjni_utils_JNIUtils_get3DESVi
(JNIEnv *env, jclass clazz, jobject thiz);

jstring getSignature(JNIEnv* env, jobject thiz);

jboolean equals(JNIEnv *env,jstring str, jstring ori);

#ifdef __cplusplus
}
#endif
#endif
