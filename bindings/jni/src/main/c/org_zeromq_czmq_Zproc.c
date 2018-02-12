/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "czmq.h"
#include "org_zeromq_czmq_Zproc.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zproc__1_1new (JNIEnv *env, jclass c)
{
    //  Disable CZMQ signal handling; allow Java to deal with it
    zsys_handler_set (NULL);
    jlong new_ = (jlong) (intptr_t) zproc_new ();
    return new_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1destroy (JNIEnv *env, jclass c, jlong self)
{
    zproc_destroy ((zproc_t **) &self);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setArgs (JNIEnv *env, jclass c, jlong self, jlong args)
{
    zproc_set_args ((zproc_t *) (intptr_t) self, (zlist_t **) (intptr_t) &args);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setArgsx (JNIEnv *env, jclass c, jlong self, jstring args)
{
    char *args_ = (char *) (*env)->GetStringUTFChars (env, args, NULL);
    zproc_set_argsx ((zproc_t *) (intptr_t) self, args_);
    (*env)->ReleaseStringUTFChars (env, args, args_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setEnv (JNIEnv *env, jclass c, jlong self, jlong args)
{
    zproc_set_env ((zproc_t *) (intptr_t) self, (zhash_t **) (intptr_t) &args);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setStdin (JNIEnv *env, jclass c, jlong self, jlong socket)
{
    zproc_set_stdin ((zproc_t *) (intptr_t) self, (void *) (intptr_t) socket);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setStdout (JNIEnv *env, jclass c, jlong self, jlong socket)
{
    zproc_set_stdout ((zproc_t *) (intptr_t) self, (void *) (intptr_t) socket);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setStderr (JNIEnv *env, jclass c, jlong self, jlong socket)
{
    zproc_set_stderr ((zproc_t *) (intptr_t) self, (void *) (intptr_t) socket);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zproc__1_1stdin (JNIEnv *env, jclass c, jlong self)
{
    jlong stdin_ = (jlong) (intptr_t) zproc_stdin ((zproc_t *) (intptr_t) self);
    return stdin_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zproc__1_1stdout (JNIEnv *env, jclass c, jlong self)
{
    jlong stdout_ = (jlong) (intptr_t) zproc_stdout ((zproc_t *) (intptr_t) self);
    return stdout_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zproc__1_1stderr (JNIEnv *env, jclass c, jlong self)
{
    jlong stderr_ = (jlong) (intptr_t) zproc_stderr ((zproc_t *) (intptr_t) self);
    return stderr_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zproc__1_1run (JNIEnv *env, jclass c, jlong self)
{
    jint run_ = (jint) zproc_run ((zproc_t *) (intptr_t) self);
    return run_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zproc__1_1returncode (JNIEnv *env, jclass c, jlong self)
{
    jint returncode_ = (jint) zproc_returncode ((zproc_t *) (intptr_t) self);
    return returncode_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zproc__1_1pid (JNIEnv *env, jclass c, jlong self)
{
    jint pid_ = (jint) zproc_pid ((zproc_t *) (intptr_t) self);
    return pid_;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zproc__1_1running (JNIEnv *env, jclass c, jlong self)
{
    jboolean running_ = (jboolean) zproc_running ((zproc_t *) (intptr_t) self);
    return running_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zproc__1_1wait (JNIEnv *env, jclass c, jlong self, jboolean hang)
{
    jint wait_ = (jint) zproc_wait ((zproc_t *) (intptr_t) self, (bool) hang);
    return wait_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zproc__1_1actor (JNIEnv *env, jclass c, jlong self)
{
    jlong actor_ = (jlong) (intptr_t) zproc_actor ((zproc_t *) (intptr_t) self);
    return actor_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1kill (JNIEnv *env, jclass c, jlong self, jint signal)
{
    zproc_kill ((zproc_t *) (intptr_t) self, (int) signal);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setVerbose (JNIEnv *env, jclass c, jlong self, jboolean verbose)
{
    zproc_set_verbose ((zproc_t *) (intptr_t) self, (bool) verbose);
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zproc__1_1czmqVersion (JNIEnv *env, jclass c)
{
    jint czmq_version_ = (jint) zproc_czmq_version ();
    return czmq_version_;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zproc__1_1interrupted (JNIEnv *env, jclass c)
{
    jboolean interrupted_ = (jboolean) zproc_interrupted ();
    return interrupted_;
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zproc__1_1hasCurve (JNIEnv *env, jclass c)
{
    jboolean has_curve_ = (jboolean) zproc_has_curve ();
    return has_curve_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zproc__1_1hostname (JNIEnv *env, jclass c)
{
    char *hostname_ = (char *) zproc_hostname ();
    jstring return_string_ = (*env)->NewStringUTF (env, hostname_);
    zstr_free (&hostname_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1daemonize (JNIEnv *env, jclass c, jstring workdir)
{
    char *workdir_ = (char *) (*env)->GetStringUTFChars (env, workdir, NULL);
    zproc_daemonize (workdir_);
    (*env)->ReleaseStringUTFChars (env, workdir, workdir_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1runAs (JNIEnv *env, jclass c, jstring lockfile, jstring group, jstring user)
{
    char *lockfile_ = (char *) (*env)->GetStringUTFChars (env, lockfile, NULL);
    char *group_ = (char *) (*env)->GetStringUTFChars (env, group, NULL);
    char *user_ = (char *) (*env)->GetStringUTFChars (env, user, NULL);
    zproc_run_as (lockfile_, group_, user_);
    (*env)->ReleaseStringUTFChars (env, lockfile, lockfile_);
    (*env)->ReleaseStringUTFChars (env, group, group_);
    (*env)->ReleaseStringUTFChars (env, user, user_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setIoThreads (JNIEnv *env, jclass c, jlong io_threads)
{
    zproc_set_io_threads ((size_t) io_threads);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setMaxSockets (JNIEnv *env, jclass c, jlong max_sockets)
{
    zproc_set_max_sockets ((size_t) max_sockets);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setBiface (JNIEnv *env, jclass c, jstring value)
{
    char *value_ = (char *) (*env)->GetStringUTFChars (env, value, NULL);
    zproc_set_biface (value_);
    (*env)->ReleaseStringUTFChars (env, value, value_);
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zproc__1_1biface (JNIEnv *env, jclass c)
{
    char *biface_ = (char *) zproc_biface ();
    jstring return_string_ = (*env)->NewStringUTF (env, biface_);
    return return_string_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setLogIdent (JNIEnv *env, jclass c, jstring value)
{
    char *value_ = (char *) (*env)->GetStringUTFChars (env, value, NULL);
    zproc_set_log_ident (value_);
    (*env)->ReleaseStringUTFChars (env, value, value_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setLogSender (JNIEnv *env, jclass c, jstring endpoint)
{
    char *endpoint_ = (char *) (*env)->GetStringUTFChars (env, endpoint, NULL);
    zproc_set_log_sender (endpoint_);
    (*env)->ReleaseStringUTFChars (env, endpoint, endpoint_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1setLogSystem (JNIEnv *env, jclass c, jboolean logsystem)
{
    zproc_set_log_system ((bool) logsystem);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1logError (JNIEnv *env, jclass c, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    zproc_log_error ("%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1logWarning (JNIEnv *env, jclass c, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    zproc_log_warning ("%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1logNotice (JNIEnv *env, jclass c, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    zproc_log_notice ("%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1logInfo (JNIEnv *env, jclass c, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    zproc_log_info ("%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1logDebug (JNIEnv *env, jclass c, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    zproc_log_debug ("%s", format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zproc__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    zproc_test ((bool) verbose);
}

