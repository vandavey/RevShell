/* Generated code for Python module 'dns._compat'
 * created by Nuitka version 0.6.8.4
 *
 * This code is in part copyright 2020 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_dns$_compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dns$_compat;
PyDictObject *moduledict_dns$_compat;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_basestring;
static PyObject *const_str_plain_rounding;
extern PyObject *const_str_plain_PY2;
static PyObject *const_str_plain_prec;
static PyObject *const_str_plain_maybe_encode;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_xrange;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_maybe_ord;
static PyObject *const_str_plain_Context;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_text_type;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain_range;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_chr;
extern PyObject *const_str_plain_long;
static PyObject *const_tuple_str_plain_Context_tuple;
extern PyObject *const_str_plain_maybe_decode;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_unichr;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_binary_type;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_string_types;
extern PyObject *const_str_plain_int;
static PyObject *const_str_digest_7025ea71be54dd2cdd72a76907f3581e;
static PyObject *const_str_digest_ded7568c041bc1185774d6f48bdfdbef;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_unicode;
static PyObject *const_str_plain_round_py2_compat;
static PyObject *const_str_plain_create_decimal;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_what;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_8b806e8b770e90bef9399490b102671a;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_maybe_chr;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_decimal;
static PyObject *const_tuple_type_str_tuple;
extern PyObject *const_str_plain_PY3;
static PyObject *const_str_plain_ROUND_HALF_UP;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_str_plain_what_str_plain_d_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_basestring = UNSTREAM_STRING_ASCII(&constant_bin[ 2453 ], 10, 1);
    const_str_plain_rounding = UNSTREAM_STRING_ASCII(&constant_bin[ 19097 ], 8, 1);
    const_str_plain_prec = UNSTREAM_STRING_ASCII(&constant_bin[ 19105 ], 4, 1);
    const_str_plain_maybe_encode = UNSTREAM_STRING_ASCII(&constant_bin[ 19109 ], 12, 1);
    const_str_plain_Context = UNSTREAM_STRING_ASCII(&constant_bin[ 2287 ], 7, 1);
    const_tuple_str_plain_Context_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_str_plain_Context_tuple, 0, const_str_plain_Context); Py_INCREF(const_str_plain_Context);
    const_str_digest_7025ea71be54dd2cdd72a76907f3581e = UNSTREAM_STRING_ASCII(&constant_bin[ 19121 ], 245, 0);
    const_str_digest_ded7568c041bc1185774d6f48bdfdbef = UNSTREAM_STRING_ASCII(&constant_bin[ 19366 ], 20, 0);
    const_str_plain_round_py2_compat = UNSTREAM_STRING_ASCII(&constant_bin[ 19386 ], 16, 1);
    const_str_plain_create_decimal = UNSTREAM_STRING_ASCII(&constant_bin[ 19402 ], 14, 1);
    const_str_digest_8b806e8b770e90bef9399490b102671a = UNSTREAM_STRING_ASCII(&constant_bin[ 19416 ], 58, 0);
    const_str_plain_maybe_chr = UNSTREAM_STRING_ASCII(&constant_bin[ 19474 ], 9, 1);
    const_str_plain_decimal = UNSTREAM_STRING_ASCII(&constant_bin[ 2342 ], 7, 1);
    const_tuple_type_str_tuple = PyTuple_New(1);
    PyTuple_SET_ITEM(const_tuple_type_str_tuple, 0, (PyObject *)&PyUnicode_Type); Py_INCREF((PyObject *)&PyUnicode_Type);
    const_str_plain_ROUND_HALF_UP = UNSTREAM_STRING_ASCII(&constant_bin[ 19483 ], 13, 1);
    const_tuple_str_plain_what_str_plain_d_tuple = PyTuple_New(2);
    PyTuple_SET_ITEM(const_tuple_str_plain_what_str_plain_d_tuple, 0, const_str_plain_what); Py_INCREF(const_str_plain_what);
    PyTuple_SET_ITEM(const_tuple_str_plain_what_str_plain_d_tuple, 1, const_str_plain_d); Py_INCREF(const_str_plain_d);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dns$_compat(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b8159092d61dbcbdc31ef6a4619e3ee0;
static PyCodeObject *codeobj_99e4d5af6cbe580d1d461679c319f96f;
static PyCodeObject *codeobj_6629b2dbc87ec36ae2caaa153330b3ea;
static PyCodeObject *codeobj_ef3703559d422d6ef631a46b45ea2db5;
static PyCodeObject *codeobj_a8e0b6de25e01d8b7d8e0546a6c3f035;
static PyCodeObject *codeobj_1a9989053fad2f83f64dd720e205f61f;
static PyCodeObject *codeobj_89ee5b5b487b3e2d8d59cb2fac680ebd;
static PyCodeObject *codeobj_b2d06d00f9459ab649bfbaca2665af7a;
static PyCodeObject *codeobj_10899e82b44a91dc02bb5be2bd33d0ed;
static PyCodeObject *codeobj_15d097fedbc867f9e86ddc6b0b3bc308;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_8b806e8b770e90bef9399490b102671a;
    codeobj_b8159092d61dbcbdc31ef6a4619e3ee0 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_ded7568c041bc1185774d6f48bdfdbef, const_tuple_empty, 0, 0, 0);
    codeobj_99e4d5af6cbe580d1d461679c319f96f = MAKE_CODEOBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_maybe_chr, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_6629b2dbc87ec36ae2caaa153330b3ea = MAKE_CODEOBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_maybe_chr, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_ef3703559d422d6ef631a46b45ea2db5 = MAKE_CODEOBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_maybe_decode, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_a8e0b6de25e01d8b7d8e0546a6c3f035 = MAKE_CODEOBJECT(module_filename_obj, 37, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_maybe_decode, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_1a9989053fad2f83f64dd720e205f61f = MAKE_CODEOBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_maybe_encode, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_89ee5b5b487b3e2d8d59cb2fac680ebd = MAKE_CODEOBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_maybe_encode, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_b2d06d00f9459ab649bfbaca2665af7a = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_maybe_ord, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_10899e82b44a91dc02bb5be2bd33d0ed = MAKE_CODEOBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_maybe_ord, const_tuple_str_plain_x_tuple, 1, 0, 0);
    codeobj_15d097fedbc867f9e86ddc6b0b3bc308 = MAKE_CODEOBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, const_str_plain_round_py2_compat, const_tuple_str_plain_what_str_plain_d_tuple, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_dns$_compat$$$function_1_maybe_decode();


static PyObject *MAKE_FUNCTION_dns$_compat$$$function_2_maybe_encode();


static PyObject *MAKE_FUNCTION_dns$_compat$$$function_3_maybe_chr();


static PyObject *MAKE_FUNCTION_dns$_compat$$$function_4_maybe_ord();


static PyObject *MAKE_FUNCTION_dns$_compat$$$function_5_maybe_decode();


static PyObject *MAKE_FUNCTION_dns$_compat$$$function_6_maybe_encode();


static PyObject *MAKE_FUNCTION_dns$_compat$$$function_7_maybe_chr();


static PyObject *MAKE_FUNCTION_dns$_compat$$$function_8_maybe_ord();


static PyObject *MAKE_FUNCTION_dns$_compat$$$function_9_round_py2_compat();


// The module function definitions.
static PyObject *impl_dns$_compat$$$function_1_maybe_decode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_ef3703559d422d6ef631a46b45ea2db5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef3703559d422d6ef631a46b45ea2db5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ef3703559d422d6ef631a46b45ea2db5)) {
        Py_XDECREF(cache_frame_ef3703559d422d6ef631a46b45ea2db5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef3703559d422d6ef631a46b45ea2db5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef3703559d422d6ef631a46b45ea2db5 = MAKE_FUNCTION_FRAME(codeobj_ef3703559d422d6ef631a46b45ea2db5, module_dns$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ef3703559d422d6ef631a46b45ea2db5->m_type_description == NULL);
    frame_ef3703559d422d6ef631a46b45ea2db5 = cache_frame_ef3703559d422d6ef631a46b45ea2db5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ef3703559d422d6ef631a46b45ea2db5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ef3703559d422d6ef631a46b45ea2db5) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_x);
        tmp_called_instance_1 = par_x;
        frame_ef3703559d422d6ef631a46b45ea2db5->m_frame.f_lineno = 23;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_decode);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef3703559d422d6ef631a46b45ea2db5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef3703559d422d6ef631a46b45ea2db5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ef3703559d422d6ef631a46b45ea2db5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef3703559d422d6ef631a46b45ea2db5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef3703559d422d6ef631a46b45ea2db5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef3703559d422d6ef631a46b45ea2db5, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef3703559d422d6ef631a46b45ea2db5,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_ef3703559d422d6ef631a46b45ea2db5 == cache_frame_ef3703559d422d6ef631a46b45ea2db5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_ef3703559d422d6ef631a46b45ea2db5);
    }
    cache_frame_ef3703559d422d6ef631a46b45ea2db5 = NULL;

    assertFrameObject(frame_ef3703559d422d6ef631a46b45ea2db5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$_compat$$$function_2_maybe_encode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_1a9989053fad2f83f64dd720e205f61f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a9989053fad2f83f64dd720e205f61f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a9989053fad2f83f64dd720e205f61f)) {
        Py_XDECREF(cache_frame_1a9989053fad2f83f64dd720e205f61f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a9989053fad2f83f64dd720e205f61f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a9989053fad2f83f64dd720e205f61f = MAKE_FUNCTION_FRAME(codeobj_1a9989053fad2f83f64dd720e205f61f, module_dns$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1a9989053fad2f83f64dd720e205f61f->m_type_description == NULL);
    frame_1a9989053fad2f83f64dd720e205f61f = cache_frame_1a9989053fad2f83f64dd720e205f61f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1a9989053fad2f83f64dd720e205f61f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1a9989053fad2f83f64dd720e205f61f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_x);
        tmp_called_instance_1 = par_x;
        frame_1a9989053fad2f83f64dd720e205f61f->m_frame.f_lineno = 25;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, const_str_plain_encode);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a9989053fad2f83f64dd720e205f61f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a9989053fad2f83f64dd720e205f61f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1a9989053fad2f83f64dd720e205f61f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a9989053fad2f83f64dd720e205f61f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a9989053fad2f83f64dd720e205f61f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a9989053fad2f83f64dd720e205f61f, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a9989053fad2f83f64dd720e205f61f,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_1a9989053fad2f83f64dd720e205f61f == cache_frame_1a9989053fad2f83f64dd720e205f61f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_1a9989053fad2f83f64dd720e205f61f);
    }
    cache_frame_1a9989053fad2f83f64dd720e205f61f = NULL;

    assertFrameObject(frame_1a9989053fad2f83f64dd720e205f61f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$_compat$$$function_3_maybe_chr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$_compat$$$function_4_maybe_ord(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$_compat$$$function_5_maybe_decode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$_compat$$$function_6_maybe_encode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$_compat$$$function_7_maybe_chr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_6629b2dbc87ec36ae2caaa153330b3ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6629b2dbc87ec36ae2caaa153330b3ea = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6629b2dbc87ec36ae2caaa153330b3ea)) {
        Py_XDECREF(cache_frame_6629b2dbc87ec36ae2caaa153330b3ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6629b2dbc87ec36ae2caaa153330b3ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6629b2dbc87ec36ae2caaa153330b3ea = MAKE_FUNCTION_FRAME(codeobj_6629b2dbc87ec36ae2caaa153330b3ea, module_dns$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_6629b2dbc87ec36ae2caaa153330b3ea->m_type_description == NULL);
    frame_6629b2dbc87ec36ae2caaa153330b3ea = cache_frame_6629b2dbc87ec36ae2caaa153330b3ea;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_6629b2dbc87ec36ae2caaa153330b3ea);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_6629b2dbc87ec36ae2caaa153330b3ea) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_chr_arg_1;
        CHECK_OBJECT(par_x);
        tmp_chr_arg_1 = par_x;
        tmp_return_value = BUILTIN_CHR(tmp_chr_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6629b2dbc87ec36ae2caaa153330b3ea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6629b2dbc87ec36ae2caaa153330b3ea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_6629b2dbc87ec36ae2caaa153330b3ea);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6629b2dbc87ec36ae2caaa153330b3ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6629b2dbc87ec36ae2caaa153330b3ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6629b2dbc87ec36ae2caaa153330b3ea, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6629b2dbc87ec36ae2caaa153330b3ea,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_6629b2dbc87ec36ae2caaa153330b3ea == cache_frame_6629b2dbc87ec36ae2caaa153330b3ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_6629b2dbc87ec36ae2caaa153330b3ea);
    }
    cache_frame_6629b2dbc87ec36ae2caaa153330b3ea = NULL;

    assertFrameObject(frame_6629b2dbc87ec36ae2caaa153330b3ea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$_compat$$$function_8_maybe_ord(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_10899e82b44a91dc02bb5be2bd33d0ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10899e82b44a91dc02bb5be2bd33d0ed = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_10899e82b44a91dc02bb5be2bd33d0ed)) {
        Py_XDECREF(cache_frame_10899e82b44a91dc02bb5be2bd33d0ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_10899e82b44a91dc02bb5be2bd33d0ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_10899e82b44a91dc02bb5be2bd33d0ed = MAKE_FUNCTION_FRAME(codeobj_10899e82b44a91dc02bb5be2bd33d0ed, module_dns$_compat, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_10899e82b44a91dc02bb5be2bd33d0ed->m_type_description == NULL);
    frame_10899e82b44a91dc02bb5be2bd33d0ed = cache_frame_10899e82b44a91dc02bb5be2bd33d0ed;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_10899e82b44a91dc02bb5be2bd33d0ed);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_10899e82b44a91dc02bb5be2bd33d0ed) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ord_arg_1;
        CHECK_OBJECT(par_x);
        tmp_ord_arg_1 = par_x;
        tmp_return_value = BUILTIN_ORD(tmp_ord_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10899e82b44a91dc02bb5be2bd33d0ed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_10899e82b44a91dc02bb5be2bd33d0ed);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_10899e82b44a91dc02bb5be2bd33d0ed);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_10899e82b44a91dc02bb5be2bd33d0ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_10899e82b44a91dc02bb5be2bd33d0ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_10899e82b44a91dc02bb5be2bd33d0ed, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_10899e82b44a91dc02bb5be2bd33d0ed,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if (frame_10899e82b44a91dc02bb5be2bd33d0ed == cache_frame_10899e82b44a91dc02bb5be2bd33d0ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_10899e82b44a91dc02bb5be2bd33d0ed);
    }
    cache_frame_10899e82b44a91dc02bb5be2bd33d0ed = NULL;

    assertFrameObject(frame_10899e82b44a91dc02bb5be2bd33d0ed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dns$_compat$$$function_9_round_py2_compat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_what = python_pars[0];
    PyObject *var_d = NULL;
    struct Nuitka_FrameObject *frame_15d097fedbc867f9e86ddc6b0b3bc308;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_15d097fedbc867f9e86ddc6b0b3bc308 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_15d097fedbc867f9e86ddc6b0b3bc308)) {
        Py_XDECREF(cache_frame_15d097fedbc867f9e86ddc6b0b3bc308);

#if _DEBUG_REFCOUNTS
        if (cache_frame_15d097fedbc867f9e86ddc6b0b3bc308 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_15d097fedbc867f9e86ddc6b0b3bc308 = MAKE_FUNCTION_FRAME(codeobj_15d097fedbc867f9e86ddc6b0b3bc308, module_dns$_compat, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_15d097fedbc867f9e86ddc6b0b3bc308->m_type_description == NULL);
    frame_15d097fedbc867f9e86ddc6b0b3bc308 = cache_frame_15d097fedbc867f9e86ddc6b0b3bc308;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_15d097fedbc867f9e86ddc6b0b3bc308);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_15d097fedbc867f9e86ddc6b0b3bc308) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_unicode_arg_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_Context);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_Context);
        }

        if (tmp_mvar_value_1 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2281 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        tmp_dict_key_1 = const_str_plain_prec;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_long);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_long);
        }

        if (tmp_mvar_value_2 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2310 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT(par_what);
        tmp_args_element_name_1 = par_what;
        frame_15d097fedbc867f9e86ddc6b0b3bc308->m_frame.f_lineno = 56;
        tmp_unicode_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_1);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_len_arg_1 = PyObject_Unicode(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = const_str_plain_rounding;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_decimal);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_decimal);
        }

        if (tmp_mvar_value_3 == NULL) {
            Py_DECREF(tmp_kw_name_1);
            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2336 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_3;
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_ROUND_HALF_UP);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_name_1);

            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem(tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_15d097fedbc867f9e86ddc6b0b3bc308->m_frame.f_lineno = 55;
        tmp_expression_name_1 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kw_name_1);
        Py_DECREF(tmp_kw_name_1);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, const_str_plain_create_decimal);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_what);
        tmp_unicode_arg_2 = par_what;
        tmp_args_element_name_2 = PyObject_Unicode(tmp_unicode_arg_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_15d097fedbc867f9e86ddc6b0b3bc308->m_frame.f_lineno = 55;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_d == NULL);
        var_d = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_long);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_long);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2310 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT(var_d);
        tmp_args_element_name_3 = var_d;
        frame_15d097fedbc867f9e86ddc6b0b3bc308->m_frame.f_lineno = 59;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_15d097fedbc867f9e86ddc6b0b3bc308);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_15d097fedbc867f9e86ddc6b0b3bc308);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_15d097fedbc867f9e86ddc6b0b3bc308);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_15d097fedbc867f9e86ddc6b0b3bc308, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_15d097fedbc867f9e86ddc6b0b3bc308->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_15d097fedbc867f9e86ddc6b0b3bc308, exception_lineno);
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_15d097fedbc867f9e86ddc6b0b3bc308,
        type_description_1,
        par_what,
        var_d
    );


    // Release cached frame.
    if (frame_15d097fedbc867f9e86ddc6b0b3bc308 == cache_frame_15d097fedbc867f9e86ddc6b0b3bc308) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(frame_15d097fedbc867f9e86ddc6b0b3bc308);
    }
    cache_frame_15d097fedbc867f9e86ddc6b0b3bc308 = NULL;

    assertFrameObject(frame_15d097fedbc867f9e86ddc6b0b3bc308);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_d);
    Py_DECREF(var_d);
    var_d = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_d);
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_what);
    Py_DECREF(par_what);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_what);
    Py_DECREF(par_what);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_dns$_compat$$$function_1_maybe_decode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$_compat$$$function_1_maybe_decode,
        const_str_plain_maybe_decode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ef3703559d422d6ef631a46b45ea2db5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$_compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$_compat$$$function_2_maybe_encode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$_compat$$$function_2_maybe_encode,
        const_str_plain_maybe_encode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1a9989053fad2f83f64dd720e205f61f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$_compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$_compat$$$function_3_maybe_chr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$_compat$$$function_3_maybe_chr,
        const_str_plain_maybe_chr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_99e4d5af6cbe580d1d461679c319f96f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$_compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$_compat$$$function_4_maybe_ord() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$_compat$$$function_4_maybe_ord,
        const_str_plain_maybe_ord,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b2d06d00f9459ab649bfbaca2665af7a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$_compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$_compat$$$function_5_maybe_decode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$_compat$$$function_5_maybe_decode,
        const_str_plain_maybe_decode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a8e0b6de25e01d8b7d8e0546a6c3f035,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$_compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$_compat$$$function_6_maybe_encode() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$_compat$$$function_6_maybe_encode,
        const_str_plain_maybe_encode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_89ee5b5b487b3e2d8d59cb2fac680ebd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$_compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$_compat$$$function_7_maybe_chr() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$_compat$$$function_7_maybe_chr,
        const_str_plain_maybe_chr,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6629b2dbc87ec36ae2caaa153330b3ea,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$_compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$_compat$$$function_8_maybe_ord() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$_compat$$$function_8_maybe_ord,
        const_str_plain_maybe_ord,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_10899e82b44a91dc02bb5be2bd33d0ed,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$_compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dns$_compat$$$function_9_round_py2_compat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dns$_compat$$$function_9_round_py2_compat,
        const_str_plain_round_py2_compat,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_15d097fedbc867f9e86ddc6b0b3bc308,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dns$_compat,
        const_str_digest_7025ea71be54dd2cdd72a76907f3581e,
        0
    );

    return (PyObject *)result;
}


extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;
extern PyObject *const_str_empty;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_dns$_compat[] = {
    impl_dns$_compat$$$function_1_maybe_decode,
    impl_dns$_compat$$$function_2_maybe_encode,
    impl_dns$_compat$$$function_3_maybe_chr,
    impl_dns$_compat$$$function_4_maybe_ord,
    impl_dns$_compat$$$function_5_maybe_decode,
    impl_dns$_compat$$$function_6_maybe_encode,
    impl_dns$_compat$$$function_7_maybe_chr,
    impl_dns$_compat$$$function_8_maybe_ord,
    impl_dns$_compat$$$function_9_round_py2_compat,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_dns$_compat;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_dns$_compat) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_dns$_compat[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_dns$_compat,
        doc,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_dns$_compat(PyObject *module) {
    module_dns$_compat = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_dns$_compat;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("dns._compat: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dns._compat: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dns._compat: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initdns$_compat\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_dns$_compat = MODULE_DICT(module_dns$_compat);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL)
        {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_dns$_compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dns$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dns$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL)
        {
            UPDATE_STRING_DICT1(
                moduledict_dns$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1)
        {
            UPDATE_STRING_DICT1(
                moduledict_dns$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dns$_compat);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL)
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT(bootstrap_module);
        PyObject *module_spec_class = PyObject_GetAttrString(bootstrap_module, "ModuleSpec");
        Py_DECREF(bootstrap_module);

        PyObject *args[] = {
            GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___name__),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF(module_spec_class);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE(spec_value, const_str_plain_submodule_search_locations, PyList_New(0));
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b8159092d61dbcbdc31ef6a4619e3ee0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_8b806e8b770e90bef9399490b102671a;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_b8159092d61dbcbdc31ef6a4619e3ee0 = MAKE_MODULE_FRAME(codeobj_b8159092d61dbcbdc31ef6a4619e3ee0, module_dns$_compat);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_b8159092d61dbcbdc31ef6a4619e3ee0);
    assert(Py_REFCNT(frame_b8159092d61dbcbdc31ef6a4619e3ee0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_8b806e8b770e90bef9399490b102671a;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_dns$_compat;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_b8159092d61dbcbdc31ef6a4619e3ee0->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_decimal;
        tmp_globals_name_2 = (PyObject *)moduledict_dns$_compat;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_b8159092d61dbcbdc31ef6a4619e3ee0->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_decimal, tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_decimal;
        tmp_globals_name_3 = (PyObject *)moduledict_dns$_compat;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_Context_tuple;
        tmp_level_name_3 = const_int_0;
        frame_b8159092d61dbcbdc31ef6a4619e3ee0->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_dns$_compat,
                const_str_plain_Context,
                const_int_0
            );
        } else {
           tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_Context);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_Context, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        if (tmp_mvar_value_3 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 851 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 5;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = tmp_mvar_value_3;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, const_str_plain_version_info);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_3;
        tmp_assign_source_7 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_sys);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_sys);
        }

        if (tmp_mvar_value_4 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 851 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 6;

            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = tmp_mvar_value_4;
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, const_str_plain_version_info);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_3, tmp_subscript_name_2, 0);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_compexpr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_int_pos_2;
        tmp_assign_source_8 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        Py_DECREF(tmp_compexpr_left_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_PY2, tmp_assign_source_8);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_5;
        int tmp_truth_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_PY3);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3);
        }

        if (tmp_mvar_value_5 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2365 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_5);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = (PyObject *)&PyLong_Type;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_long, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = (PyObject *)&PyRange_Type;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_10);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_long);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_long);
        }

        if (tmp_mvar_value_6 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2310 ], 26, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_11 = tmp_mvar_value_6;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_long, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_xrange);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_xrange);
        }

        if (tmp_mvar_value_7 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2390 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_12 = tmp_mvar_value_7;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_12);
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_8;
        int tmp_truth_name_2;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_PY3);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3);
        }

        if (tmp_mvar_value_8 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2365 ], 25, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 17;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_mvar_value_8);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = (PyObject *)&PyUnicode_Type;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = (PyObject *)&PyBytes_Type;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_binary_type, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = const_tuple_type_str_tuple;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = LOOKUP_BUILTIN(const_str_plain_chr);
        assert(tmp_assign_source_16 != NULL);
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_unichr, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_dns$_compat$$$function_1_maybe_decode();



        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_maybe_decode, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = MAKE_FUNCTION_dns$_compat$$$function_2_maybe_encode();



        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_maybe_encode, tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_dns$_compat$$$function_3_maybe_chr();



        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_maybe_chr, tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_FUNCTION_dns$_compat$$$function_4_maybe_ord();



        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_maybe_ord, tmp_assign_source_20);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_unicode);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_unicode);
        }

        if (tmp_mvar_value_9 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2418 ], 29, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 31;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_21 = tmp_mvar_value_9;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = (PyObject *)&PyUnicode_Type;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_binary_type, tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_10;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_basestring);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring);
        }

        if (tmp_mvar_value_10 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2447 ], 32, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 34;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_10;
        tmp_assign_source_23 = PyTuple_New(1);
        Py_INCREF(tmp_tuple_element_1);
        PyTuple_SET_ITEM(tmp_assign_source_23, 0, tmp_tuple_element_1);
        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_mvar_value_11;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_unichr);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain_unichr);
        }

        if (tmp_mvar_value_11 == NULL) {

            exception_type = PyExc_NameError;
            Py_INCREF(exception_type);
            exception_value = UNSTREAM_STRING(&constant_bin[ 2479 ], 28, 0);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }

        tmp_assign_source_24 = tmp_mvar_value_11;
        UPDATE_STRING_DICT0(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_unichr, tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = MAKE_FUNCTION_dns$_compat$$$function_5_maybe_decode();



        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_maybe_decode, tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_dns$_compat$$$function_6_maybe_encode();



        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_maybe_encode, tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_dns$_compat$$$function_7_maybe_chr();



        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_maybe_chr, tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_FUNCTION_dns$_compat$$$function_8_maybe_ord();



        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_maybe_ord, tmp_assign_source_28);
    }
    branch_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b8159092d61dbcbdc31ef6a4619e3ee0);
#endif
    popFrameStack();

    assertFrameObject(frame_b8159092d61dbcbdc31ef6a4619e3ee0);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_b8159092d61dbcbdc31ef6a4619e3ee0);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b8159092d61dbcbdc31ef6a4619e3ee0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b8159092d61dbcbdc31ef6a4619e3ee0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b8159092d61dbcbdc31ef6a4619e3ee0, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_FUNCTION_dns$_compat$$$function_9_round_py2_compat();



        UPDATE_STRING_DICT1(moduledict_dns$_compat, (Nuitka_StringObject *)const_str_plain_round_py2_compat, tmp_assign_source_29);
    }

    return module_dns$_compat;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
