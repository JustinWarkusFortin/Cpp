#include "JavaGUI.h"
#include <iostream>

// Lab8.cpp : Defines the entry point for the application.
//
using namespace std;

JNIEXPORT jdouble JNICALL Java_JavaGUI_calculateMean_calculateSTDDev(JNIEnv* env, jobject thisObj, jintArray inJNIArray) {
    jdouble mean = Java_JavaGUI_calculateMean(env, thisObj, inJNIArray);
    jint* inCArray = env->GetIntArrayElements(inJNIArray, NULL);
    if (NULL == inCArray) return 0;
    jsize length = env->GetArrayLength(inJNIArray);
    jdouble var = 0.0;
    for (int i = 0; i < length; ++i)
        var += pow((double)inCArray[i] - mean, 2);
    env->ReleaseIntArrayElements(inJNIArray, inCArray, 0); // release resources
    jdouble std = sqrt(var / length);
    return std;
}

JNIEXPORT jdouble JNICALL Java_JavaGUI_calculateMean(JNIEnv* env, jobject thisObj, jintArray inJNIArray) {
    jint* inCArray = env->GetIntArrayElements(inJNIArray, NULL);
    if (NULL == inCArray) return 0;
    jsize length = env->GetArrayLength(inJNIArray);
    // Step 2: Perform its intended operations
    jint sum = 0;
    int i;
    for (i = 0; i < length; i++) {
        sum += inCArray[i];
    }
    jdouble average = (jdouble)sum / length;
    env->ReleaseIntArrayElements(inJNIArray, inCArray, 0); // release resources

    return average;
}
