/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jamruby_mruby_RArray */

#ifndef _Included_org_jamruby_mruby_RArray
#define _Included_org_jamruby_mruby_RArray
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jamruby_mruby_RArray
 * Method:    n_getLen
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_RArray_n_1getLen
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jamruby_mruby_RArray
 * Method:    n_getCapa
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_jamruby_mruby_RArray_n_1getCapa
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jamruby_mruby_RArray
 * Method:    n_getBuf
 * Signature: (J)[Lorg/jamruby/mruby/Value;
 */
JNIEXPORT jobjectArray JNICALL Java_org_jamruby_mruby_RArray_n_1getBuf
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
