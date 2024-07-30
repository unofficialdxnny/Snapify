/* Generated code for Python module 'aiohttp$base_protocol'
 * created by Nuitka version 2.4.1
 *
 * This code is in part copyright 2024 Kay Hayen.
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

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_aiohttp$base_protocol" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiohttp$base_protocol;
PyDictObject *moduledict_aiohttp$base_protocol;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[82];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[82];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("aiohttp.base_protocol"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 82; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_aiohttp$base_protocol(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 82; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_3eec8107611b5fd775d9a3eb55f64044;
static PyCodeObject *codeobj_cc4f4e6d26aa5584a991cdbca647b488;
static PyCodeObject *codeobj_d8ccd60caf690c98b34179ca9092b361;
static PyCodeObject *codeobj_9651ce62e295f18576244e1e1ec0dba2;
static PyCodeObject *codeobj_553e1d1c6c29790ea91d278005327abd;
static PyCodeObject *codeobj_59af0c88bdc1c7f3e3740d2b72ca4d36;
static PyCodeObject *codeobj_a4bd228bc4dfa2729e79467e59fc06f8;
static PyCodeObject *codeobj_ec259a66983a35ba7de8eafeeacda986;
static PyCodeObject *codeobj_e16df7291af975c2bd367b57b7fad343;
static PyCodeObject *codeobj_2f368314875d4143c718f51970a1b584;
static PyCodeObject *codeobj_6d196aed5e5dacbeb03bcab7a8113b99;

static void createModuleCodeObjects(void) {
 module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[73]); CHECK_OBJECT(module_filename_obj);
 codeobj_3eec8107611b5fd775d9a3eb55f64044 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[74], mod_consts[74], NULL, NULL, 0, 0, 0);
 codeobj_cc4f4e6d26aa5584a991cdbca647b488 = MAKE_CODE_OBJECT(module_filename_obj, 8, 0, mod_consts[40], mod_consts[40], mod_consts[75], NULL, 0, 0, 0);
 codeobj_d8ccd60caf690c98b34179ca9092b361 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[53], mod_consts[54], mod_consts[76], NULL, 2, 0, 0);
 codeobj_9651ce62e295f18576244e1e1ec0dba2 = MAKE_CODE_OBJECT(module_filename_obj, 86, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[23], mod_consts[24], mod_consts[77], NULL, 1, 0, 0);
 codeobj_553e1d1c6c29790ea91d278005327abd = MAKE_CODE_OBJECT(module_filename_obj, 27, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[57], mod_consts[78], NULL, 1, 0, 0);
 codeobj_59af0c88bdc1c7f3e3740d2b72ca4d36 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[70], mod_consts[71], mod_consts[79], NULL, 2, 0, 0);
 codeobj_a4bd228bc4dfa2729e79467e59fc06f8 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[66], mod_consts[67], mod_consts[80], NULL, 2, 0, 0);
 codeobj_ec259a66983a35ba7de8eafeeacda986 = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[9], mod_consts[63], mod_consts[78], NULL, 1, 0, 0);
 codeobj_e16df7291af975c2bd367b57b7fad343 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[60], mod_consts[78], NULL, 1, 0, 0);
 codeobj_2f368314875d4143c718f51970a1b584 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[11], mod_consts[64], mod_consts[78], NULL, 1, 0, 0);
 codeobj_6d196aed5e5dacbeb03bcab7a8113b99 = MAKE_CODE_OBJECT(module_filename_obj, 35, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[61], mod_consts[62], mod_consts[77], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_aiohttp$base_protocol$$$function__9__drain_helper$$$coroutine__1__drain_helper(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__2_connected(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__3_pause_writing(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__4_resume_writing(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__5_pause_reading(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__6_resume_reading(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__7_connection_made(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__8_connection_lost(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__9__drain_helper(PyObject *annotations);


// The module function definitions.
static PyObject *impl_aiohttp$base_protocol$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_loop = python_pars[1];
 struct Nuitka_FrameObject *frame_d8ccd60caf690c98b34179ca9092b361;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_d8ccd60caf690c98b34179ca9092b361 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_d8ccd60caf690c98b34179ca9092b361)) {
     Py_XDECREF(cache_frame_d8ccd60caf690c98b34179ca9092b361);

#if _DEBUG_REFCOUNTS
     if (cache_frame_d8ccd60caf690c98b34179ca9092b361 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_d8ccd60caf690c98b34179ca9092b361 = MAKE_FUNCTION_FRAME(tstate, codeobj_d8ccd60caf690c98b34179ca9092b361, module_aiohttp$base_protocol, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_d8ccd60caf690c98b34179ca9092b361->m_type_description == NULL);
 frame_d8ccd60caf690c98b34179ca9092b361 = cache_frame_d8ccd60caf690c98b34179ca9092b361;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_d8ccd60caf690c98b34179ca9092b361);
 assert(Py_REFCNT(frame_d8ccd60caf690c98b34179ca9092b361) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_loop);
  tmp_assattr_value_1 = par_loop;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 19;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  tmp_assattr_value_3 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[2], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 21;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_assattr_target_4;
  tmp_assattr_value_4 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_4 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[3], tmp_assattr_value_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 22;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_5;
  PyObject *tmp_assattr_target_5;
  tmp_assattr_value_5 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_5 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[4], tmp_assattr_value_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 24;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_d8ccd60caf690c98b34179ca9092b361, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_d8ccd60caf690c98b34179ca9092b361->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_d8ccd60caf690c98b34179ca9092b361, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_d8ccd60caf690c98b34179ca9092b361,
     type_description_1,
     par_self,
     par_loop
 );


 // Release cached frame if used for exception.
 if (frame_d8ccd60caf690c98b34179ca9092b361 == cache_frame_d8ccd60caf690c98b34179ca9092b361) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_d8ccd60caf690c98b34179ca9092b361);
     cache_frame_d8ccd60caf690c98b34179ca9092b361 = NULL;
 }

 assertFrameObject(frame_d8ccd60caf690c98b34179ca9092b361);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto function_exception_exit;
 frame_no_exception_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto function_return_exit;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_loop);
 Py_DECREF(par_loop);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_loop);
 Py_DECREF(par_loop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$base_protocol$$$function__2_connected(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_553e1d1c6c29790ea91d278005327abd;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_553e1d1c6c29790ea91d278005327abd = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_553e1d1c6c29790ea91d278005327abd)) {
     Py_XDECREF(cache_frame_553e1d1c6c29790ea91d278005327abd);

#if _DEBUG_REFCOUNTS
     if (cache_frame_553e1d1c6c29790ea91d278005327abd == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_553e1d1c6c29790ea91d278005327abd = MAKE_FUNCTION_FRAME(tstate, codeobj_553e1d1c6c29790ea91d278005327abd, module_aiohttp$base_protocol, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_553e1d1c6c29790ea91d278005327abd->m_type_description == NULL);
 frame_553e1d1c6c29790ea91d278005327abd = cache_frame_553e1d1c6c29790ea91d278005327abd;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_553e1d1c6c29790ea91d278005327abd);
 assert(Py_REFCNT(frame_553e1d1c6c29790ea91d278005327abd) == 2);

 // Framed code:
 {
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 29;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_return_value = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
  Py_DECREF(tmp_cmp_expr_left_1);
  Py_INCREF(tmp_return_value);
  goto frame_return_exit_1;
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_return_exit_1:

 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto function_return_exit;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_553e1d1c6c29790ea91d278005327abd, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_553e1d1c6c29790ea91d278005327abd->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_553e1d1c6c29790ea91d278005327abd, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_553e1d1c6c29790ea91d278005327abd,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_553e1d1c6c29790ea91d278005327abd == cache_frame_553e1d1c6c29790ea91d278005327abd) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_553e1d1c6c29790ea91d278005327abd);
     cache_frame_553e1d1c6c29790ea91d278005327abd = NULL;
 }

 assertFrameObject(frame_553e1d1c6c29790ea91d278005327abd);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto function_exception_exit;
 frame_no_exception_1:;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$base_protocol$$$function__3_pause_writing(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_e16df7291af975c2bd367b57b7fad343;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_e16df7291af975c2bd367b57b7fad343 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_e16df7291af975c2bd367b57b7fad343)) {
     Py_XDECREF(cache_frame_e16df7291af975c2bd367b57b7fad343);

#if _DEBUG_REFCOUNTS
     if (cache_frame_e16df7291af975c2bd367b57b7fad343 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_e16df7291af975c2bd367b57b7fad343 = MAKE_FUNCTION_FRAME(tstate, codeobj_e16df7291af975c2bd367b57b7fad343, module_aiohttp$base_protocol, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_e16df7291af975c2bd367b57b7fad343->m_type_description == NULL);
 frame_e16df7291af975c2bd367b57b7fad343 = cache_frame_e16df7291af975c2bd367b57b7fad343;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_e16df7291af975c2bd367b57b7fad343);
 assert(Py_REFCNT(frame_e16df7291af975c2bd367b57b7fad343) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
  if (tmp_operand_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 32;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  Py_DECREF(tmp_operand_value_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 32;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  assert(!(tmp_res == -1));
  tmp_condition_result_1 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_raise_type_1;
  tmp_raise_type_1 = PyExc_AssertionError;
  exception_type = tmp_raise_type_1;
  Py_INCREF(tmp_raise_type_1);
  exception_lineno = 32;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "o";
  goto frame_exception_exit_1;
 }
 branch_no_1:;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_True;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 33;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_e16df7291af975c2bd367b57b7fad343, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_e16df7291af975c2bd367b57b7fad343->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_e16df7291af975c2bd367b57b7fad343, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_e16df7291af975c2bd367b57b7fad343,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_e16df7291af975c2bd367b57b7fad343 == cache_frame_e16df7291af975c2bd367b57b7fad343) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_e16df7291af975c2bd367b57b7fad343);
     cache_frame_e16df7291af975c2bd367b57b7fad343 = NULL;
 }

 assertFrameObject(frame_e16df7291af975c2bd367b57b7fad343);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto function_exception_exit;
 frame_no_exception_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto function_return_exit;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$base_protocol$$$function__4_resume_writing(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *var_waiter = NULL;
 struct Nuitka_FrameObject *frame_6d196aed5e5dacbeb03bcab7a8113b99;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 bool tmp_result;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_frame_6d196aed5e5dacbeb03bcab7a8113b99 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_6d196aed5e5dacbeb03bcab7a8113b99)) {
     Py_XDECREF(cache_frame_6d196aed5e5dacbeb03bcab7a8113b99);

#if _DEBUG_REFCOUNTS
     if (cache_frame_6d196aed5e5dacbeb03bcab7a8113b99 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_6d196aed5e5dacbeb03bcab7a8113b99 = MAKE_FUNCTION_FRAME(tstate, codeobj_6d196aed5e5dacbeb03bcab7a8113b99, module_aiohttp$base_protocol, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_6d196aed5e5dacbeb03bcab7a8113b99->m_type_description == NULL);
 frame_6d196aed5e5dacbeb03bcab7a8113b99 = cache_frame_6d196aed5e5dacbeb03bcab7a8113b99;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_6d196aed5e5dacbeb03bcab7a8113b99);
 assert(Py_REFCNT(frame_6d196aed5e5dacbeb03bcab7a8113b99) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_raise_type_1;
  tmp_raise_type_1 = PyExc_AssertionError;
  exception_type = tmp_raise_type_1;
  Py_INCREF(tmp_raise_type_1);
  exception_lineno = 36;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "oo";
  goto frame_exception_exit_1;
 }
 branch_no_1:;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 37;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  assert(var_waiter == NULL);
  var_waiter = tmp_assign_source_1;
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(var_waiter);
  tmp_cmp_expr_left_1 = var_waiter;
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_called_instance_1;
  CHECK_OBJECT(var_waiter);
  tmp_called_instance_1 = var_waiter;
  frame_6d196aed5e5dacbeb03bcab7a8113b99->m_frame.f_lineno = 42;
  tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[6]);
  if (tmp_operand_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  Py_DECREF(tmp_operand_value_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_3 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(var_waiter);
  tmp_called_instance_2 = var_waiter;
  frame_6d196aed5e5dacbeb03bcab7a8113b99->m_frame.f_lineno = 43;
  tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
      tstate,
      tmp_called_instance_2,
      mod_consts[7],
      PyTuple_GET_ITEM(mod_consts[8], 0)
  );

  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 43;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 branch_no_3:;
 branch_no_2:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_6d196aed5e5dacbeb03bcab7a8113b99, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_6d196aed5e5dacbeb03bcab7a8113b99->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_6d196aed5e5dacbeb03bcab7a8113b99, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_6d196aed5e5dacbeb03bcab7a8113b99,
     type_description_1,
     par_self,
     var_waiter
 );


 // Release cached frame if used for exception.
 if (frame_6d196aed5e5dacbeb03bcab7a8113b99 == cache_frame_6d196aed5e5dacbeb03bcab7a8113b99) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_6d196aed5e5dacbeb03bcab7a8113b99);
     cache_frame_6d196aed5e5dacbeb03bcab7a8113b99 = NULL;
 }

 assertFrameObject(frame_6d196aed5e5dacbeb03bcab7a8113b99);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto try_return_handler_1;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(var_waiter);
 Py_DECREF(var_waiter);
 var_waiter = NULL;
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

 Py_XDECREF(var_waiter);
 var_waiter = NULL;
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
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$base_protocol$$$function__5_pause_reading(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_ec259a66983a35ba7de8eafeeacda986;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
 bool tmp_result;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
 static struct Nuitka_FrameObject *cache_frame_ec259a66983a35ba7de8eafeeacda986 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_ec259a66983a35ba7de8eafeeacda986)) {
     Py_XDECREF(cache_frame_ec259a66983a35ba7de8eafeeacda986);

#if _DEBUG_REFCOUNTS
     if (cache_frame_ec259a66983a35ba7de8eafeeacda986 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_ec259a66983a35ba7de8eafeeacda986 = MAKE_FUNCTION_FRAME(tstate, codeobj_ec259a66983a35ba7de8eafeeacda986, module_aiohttp$base_protocol, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_ec259a66983a35ba7de8eafeeacda986->m_type_description == NULL);
 frame_ec259a66983a35ba7de8eafeeacda986 = cache_frame_ec259a66983a35ba7de8eafeeacda986;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_ec259a66983a35ba7de8eafeeacda986);
 assert(Py_REFCNT(frame_ec259a66983a35ba7de8eafeeacda986) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  int tmp_and_left_truth_1;
  bool tmp_and_left_value_1;
  bool tmp_and_right_value_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 46;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 46;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
  tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 46;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_1);
  tmp_condition_result_1 = tmp_and_right_value_1;
  goto and_end_1;
  and_left_1:;
  tmp_condition_result_1 = tmp_and_left_value_1;
  and_end_1:;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 // Tried code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;
   type_description_1 = "o";
      goto try_except_handler_1;
  }
  frame_ec259a66983a35ba7de8eafeeacda986->m_frame.f_lineno = 48;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[9]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;
   type_description_1 = "o";
      goto try_except_handler_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 goto try_end_1;
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

 // Preserve existing published exception id 1.
 exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_1 == NULL) {
     exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ec259a66983a35ba7de8eafeeacda986, exception_keeper_lineno_1);
 } else if (exception_keeper_lineno_1 != 0) {
     exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ec259a66983a35ba7de8eafeeacda986, exception_keeper_lineno_1);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
 // Tried code:
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_2 = mod_consts[10];
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;
   type_description_1 = "o";
      goto try_except_handler_2;
  }
  tmp_condition_result_2 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 47;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_ec259a66983a35ba7de8eafeeacda986->m_frame) frame_ec259a66983a35ba7de8eafeeacda986->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "o";
 goto try_except_handler_2;
 branch_no_2:;
 goto try_end_2;
 // Exception handler code:
 try_except_handler_2:;
 exception_keeper_type_2 = exception_type;
 exception_keeper_value_2 = exception_value;
 exception_keeper_tb_2 = exception_tb;
 exception_keeper_lineno_2 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto frame_exception_exit_1;
 // End of try:
 try_end_2:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 goto try_end_1;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_1:;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_True;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }
 branch_no_1:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_ec259a66983a35ba7de8eafeeacda986, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_ec259a66983a35ba7de8eafeeacda986->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_ec259a66983a35ba7de8eafeeacda986, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_ec259a66983a35ba7de8eafeeacda986,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_ec259a66983a35ba7de8eafeeacda986 == cache_frame_ec259a66983a35ba7de8eafeeacda986) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_ec259a66983a35ba7de8eafeeacda986);
     cache_frame_ec259a66983a35ba7de8eafeeacda986 = NULL;
 }

 assertFrameObject(frame_ec259a66983a35ba7de8eafeeacda986);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto function_exception_exit;
 frame_no_exception_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto function_return_exit;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$base_protocol$$$function__6_resume_reading(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_2f368314875d4143c718f51970a1b584;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
 int tmp_res;
 bool tmp_result;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
 static struct Nuitka_FrameObject *cache_frame_2f368314875d4143c718f51970a1b584 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_2f368314875d4143c718f51970a1b584)) {
     Py_XDECREF(cache_frame_2f368314875d4143c718f51970a1b584);

#if _DEBUG_REFCOUNTS
     if (cache_frame_2f368314875d4143c718f51970a1b584 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_2f368314875d4143c718f51970a1b584 = MAKE_FUNCTION_FRAME(tstate, codeobj_2f368314875d4143c718f51970a1b584, module_aiohttp$base_protocol, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_2f368314875d4143c718f51970a1b584->m_type_description == NULL);
 frame_2f368314875d4143c718f51970a1b584 = cache_frame_2f368314875d4143c718f51970a1b584;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_2f368314875d4143c718f51970a1b584);
 assert(Py_REFCNT(frame_2f368314875d4143c718f51970a1b584) == 2);

 // Framed code:
 {
  nuitka_bool tmp_condition_result_1;
  int tmp_and_left_truth_1;
  nuitka_bool tmp_and_left_value_1;
  nuitka_bool tmp_and_right_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_attribute_value_1;
  int tmp_truth_name_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
  if (tmp_attribute_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_1);

   exception_lineno = 54;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_1);
  tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_and_right_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  Py_DECREF(tmp_cmp_expr_left_1);
  tmp_condition_result_1 = tmp_and_right_value_1;
  goto and_end_1;
  and_left_1:;
  tmp_condition_result_1 = tmp_and_left_value_1;
  and_end_1:;
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 // Tried code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;
   type_description_1 = "o";
      goto try_except_handler_1;
  }
  frame_2f368314875d4143c718f51970a1b584->m_frame.f_lineno = 56;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[11]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;
   type_description_1 = "o";
      goto try_except_handler_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 goto try_end_1;
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

 // Preserve existing published exception id 1.
 exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_1 == NULL) {
     exception_keeper_tb_1 = MAKE_TRACEBACK(frame_2f368314875d4143c718f51970a1b584, exception_keeper_lineno_1);
 } else if (exception_keeper_lineno_1 != 0) {
     exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_2f368314875d4143c718f51970a1b584, exception_keeper_lineno_1);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
 // Tried code:
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_2 = mod_consts[10];
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 57;
   type_description_1 = "o";
      goto try_except_handler_2;
  }
  tmp_condition_result_2 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 55;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_2f368314875d4143c718f51970a1b584->m_frame) frame_2f368314875d4143c718f51970a1b584->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "o";
 goto try_except_handler_2;
 branch_no_2:;
 goto try_end_2;
 // Exception handler code:
 try_except_handler_2:;
 exception_keeper_type_2 = exception_type;
 exception_keeper_value_2 = exception_value;
 exception_keeper_tb_2 = exception_tb;
 exception_keeper_lineno_2 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto frame_exception_exit_1;
 // End of try:
 try_end_2:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 goto try_end_1;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_1:;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }
 branch_no_1:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_2f368314875d4143c718f51970a1b584, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_2f368314875d4143c718f51970a1b584->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_2f368314875d4143c718f51970a1b584, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_2f368314875d4143c718f51970a1b584,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_2f368314875d4143c718f51970a1b584 == cache_frame_2f368314875d4143c718f51970a1b584) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_2f368314875d4143c718f51970a1b584);
     cache_frame_2f368314875d4143c718f51970a1b584 = NULL;
 }

 assertFrameObject(frame_2f368314875d4143c718f51970a1b584);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto function_exception_exit;
 frame_no_exception_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto function_return_exit;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$base_protocol$$$function__7_connection_made(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_transport = python_pars[1];
 PyObject *var_tr = NULL;
 struct Nuitka_FrameObject *frame_a4bd228bc4dfa2729e79467e59fc06f8;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_a4bd228bc4dfa2729e79467e59fc06f8 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_a4bd228bc4dfa2729e79467e59fc06f8)) {
     Py_XDECREF(cache_frame_a4bd228bc4dfa2729e79467e59fc06f8);

#if _DEBUG_REFCOUNTS
     if (cache_frame_a4bd228bc4dfa2729e79467e59fc06f8 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_a4bd228bc4dfa2729e79467e59fc06f8 = MAKE_FUNCTION_FRAME(tstate, codeobj_a4bd228bc4dfa2729e79467e59fc06f8, module_aiohttp$base_protocol, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_a4bd228bc4dfa2729e79467e59fc06f8->m_type_description == NULL);
 frame_a4bd228bc4dfa2729e79467e59fc06f8 = cache_frame_a4bd228bc4dfa2729e79467e59fc06f8;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_a4bd228bc4dfa2729e79467e59fc06f8);
 assert(Py_REFCNT(frame_a4bd228bc4dfa2729e79467e59fc06f8) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_args_element_value_2;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[12]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_transport);
  tmp_args_element_value_2 = par_transport;
  frame_a4bd228bc4dfa2729e79467e59fc06f8->m_frame.f_lineno = 62;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_args_element_value_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  assert(var_tr == NULL);
  var_tr = tmp_assign_source_1;
 }
 {
  PyObject *tmp_called_value_2;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_args_element_value_4;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[15]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 63;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_tr);
  tmp_args_element_value_3 = var_tr;
  tmp_args_element_value_4 = Py_True;
  frame_a4bd228bc4dfa2729e79467e59fc06f8->m_frame.f_lineno = 63;
  {
      PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
      tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
  }

  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 63;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(var_tr);
  tmp_assattr_value_1 = var_tr;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_a4bd228bc4dfa2729e79467e59fc06f8, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_a4bd228bc4dfa2729e79467e59fc06f8->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_a4bd228bc4dfa2729e79467e59fc06f8, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_a4bd228bc4dfa2729e79467e59fc06f8,
     type_description_1,
     par_self,
     par_transport,
     var_tr
 );


 // Release cached frame if used for exception.
 if (frame_a4bd228bc4dfa2729e79467e59fc06f8 == cache_frame_a4bd228bc4dfa2729e79467e59fc06f8) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_a4bd228bc4dfa2729e79467e59fc06f8);
     cache_frame_a4bd228bc4dfa2729e79467e59fc06f8 = NULL;
 }

 assertFrameObject(frame_a4bd228bc4dfa2729e79467e59fc06f8);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto try_return_handler_1;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(var_tr);
 Py_DECREF(var_tr);
 var_tr = NULL;
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

 Py_XDECREF(var_tr);
 var_tr = NULL;
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
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_transport);
 Py_DECREF(par_transport);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_transport);
 Py_DECREF(par_transport);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$base_protocol$$$function__8_connection_lost(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_exc = python_pars[1];
 PyObject *var_waiter = NULL;
 struct Nuitka_FrameObject *frame_59af0c88bdc1c7f3e3740d2b72ca4d36;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 PyObject *tmp_return_value = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_frame_59af0c88bdc1c7f3e3740d2b72ca4d36 = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_59af0c88bdc1c7f3e3740d2b72ca4d36)) {
     Py_XDECREF(cache_frame_59af0c88bdc1c7f3e3740d2b72ca4d36);

#if _DEBUG_REFCOUNTS
     if (cache_frame_59af0c88bdc1c7f3e3740d2b72ca4d36 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_59af0c88bdc1c7f3e3740d2b72ca4d36 = MAKE_FUNCTION_FRAME(tstate, codeobj_59af0c88bdc1c7f3e3740d2b72ca4d36, module_aiohttp$base_protocol, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_59af0c88bdc1c7f3e3740d2b72ca4d36->m_type_description == NULL);
 frame_59af0c88bdc1c7f3e3740d2b72ca4d36 = cache_frame_59af0c88bdc1c7f3e3740d2b72ca4d36;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_59af0c88bdc1c7f3e3740d2b72ca4d36);
 assert(Py_REFCNT(frame_59af0c88bdc1c7f3e3740d2b72ca4d36) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_1:;
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[2]);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 71;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  assert(var_waiter == NULL);
  var_waiter = tmp_assign_source_1;
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(var_waiter);
  tmp_cmp_expr_left_1 = var_waiter;
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_2:;
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 74;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
 }
 {
  nuitka_bool tmp_condition_result_3;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  int tmp_truth_name_1;
  CHECK_OBJECT(var_waiter);
  tmp_called_instance_1 = var_waiter;
  frame_59af0c88bdc1c7f3e3740d2b72ca4d36->m_frame.f_lineno = 75;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[6]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_call_result_1);

   exception_lineno = 75;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_call_result_1);
  if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_3:;
 {
  bool tmp_condition_result_4;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  CHECK_OBJECT(par_exc);
  tmp_cmp_expr_left_2 = par_exc;
  tmp_cmp_expr_right_2 = Py_None;
  tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_call_result_2;
  CHECK_OBJECT(var_waiter);
  tmp_called_instance_2 = var_waiter;
  frame_59af0c88bdc1c7f3e3740d2b72ca4d36->m_frame.f_lineno = 78;
  tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
      tstate,
      tmp_called_instance_2,
      mod_consts[7],
      PyTuple_GET_ITEM(mod_consts[8], 0)
  );

  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 goto branch_end_4;
 branch_no_4:;
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_call_result_3;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_make_exception_arg_1;
  PyObject *tmp_args_element_value_3;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[16]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 80;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_waiter);
  tmp_args_element_value_1 = var_waiter;
  tmp_make_exception_arg_1 = mod_consts[17];
  frame_59af0c88bdc1c7f3e3740d2b72ca4d36->m_frame.f_lineno = 82;
  tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ConnectionError, tmp_make_exception_arg_1);
  assert(!(tmp_args_element_value_2 == NULL));
  CHECK_OBJECT(par_exc);
  tmp_args_element_value_3 = par_exc;
  frame_59af0c88bdc1c7f3e3740d2b72ca4d36->m_frame.f_lineno = 80;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
      tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_args_element_value_2);
  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 80;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_3);
 }
 branch_end_4:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_return_exit_1:

 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto try_return_handler_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_59af0c88bdc1c7f3e3740d2b72ca4d36, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_59af0c88bdc1c7f3e3740d2b72ca4d36->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_59af0c88bdc1c7f3e3740d2b72ca4d36, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_59af0c88bdc1c7f3e3740d2b72ca4d36,
     type_description_1,
     par_self,
     par_exc,
     var_waiter
 );


 // Release cached frame if used for exception.
 if (frame_59af0c88bdc1c7f3e3740d2b72ca4d36 == cache_frame_59af0c88bdc1c7f3e3740d2b72ca4d36) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_59af0c88bdc1c7f3e3740d2b72ca4d36);
     cache_frame_59af0c88bdc1c7f3e3740d2b72ca4d36 = NULL;
 }

 assertFrameObject(frame_59af0c88bdc1c7f3e3740d2b72ca4d36);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto try_return_handler_1;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 Py_XDECREF(var_waiter);
 var_waiter = NULL;
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

 Py_XDECREF(var_waiter);
 var_waiter = NULL;
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
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_exc);
 Py_DECREF(par_exc);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_exc);
 Py_DECREF(par_exc);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$base_protocol$$$function__9__drain_helper(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[1];

  tmp_closure_1[0] = par_self;
  Py_INCREF(tmp_closure_1[0]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$base_protocol$$$function__9__drain_helper$$$coroutine__1__drain_helper(tstate, tmp_closure_1);

  goto function_return_exit;
 }

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$base_protocol$$$function__9__drain_helper$$$coroutine__1__drain_helper_locals {
 PyObject *var_waiter;
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 int tmp_res;
 PyObject *tmp_return_value;
 bool tmp_result;
 char yield_tmps[1024];
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 int exception_keeper_lineno_1;
};
#endif

static PyObject *aiohttp$base_protocol$$$function__9__drain_helper$$$coroutine__1__drain_helper_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$base_protocol$$$function__9__drain_helper$$$coroutine__1__drain_helper_locals *coroutine_heap = (struct aiohttp$base_protocol$$$function__9__drain_helper$$$coroutine__1__drain_helper_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 coroutine_heap->var_waiter = NULL;
 coroutine_heap->type_description_1 = NULL;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;
 coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
 // Tried code:
 if (isFrameUnusable(cache_m_frame)) {
     Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
     if (cache_m_frame == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_9651ce62e295f18576244e1e1ec0dba2, module_aiohttp$base_protocol, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_m_frame->m_type_description == NULL);
 coroutine->m_frame = cache_m_frame;
 // Mark the frame object as in use, ref count 1 will be up for reuse.
 Py_INCREF(coroutine->m_frame);
 assert(Py_REFCNT(coroutine->m_frame) == 2); // Frame stack

 Nuitka_SetFrameGenerator(coroutine->m_frame, (PyObject *)coroutine);

 assert(coroutine->m_frame->m_frame.f_back == NULL);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackGeneratorCompiledFrame(tstate, coroutine->m_frame);
 assert(Py_REFCNT(coroutine->m_frame) == 2);

 // Store currently existing exception as the one to publish again when we
 // yield or yield from.
 STORE_COROUTINE_EXCEPTION(tstate, coroutine);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_1;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 87;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 87;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 87;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = (coroutine_heap->tmp_res == 0) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_raise_type_1;
  PyObject *tmp_make_exception_arg_1;
  tmp_make_exception_arg_1 = mod_consts[17];
  coroutine->m_frame->m_frame.f_lineno = 88;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ConnectionResetError, tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  coroutine_heap->exception_type = tmp_raise_type_1;
  coroutine_heap->exception_lineno = 88;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
  coroutine_heap->type_description_1 = "co";
  goto frame_exception_exit_1;
 }
 branch_no_1:;
 {
  bool tmp_condition_result_2;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_expression_value_2;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 89;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[1]);
  if (tmp_operand_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 89;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  Py_DECREF(tmp_operand_value_2);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 89;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_2 = (coroutine_heap->tmp_res == 0) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 coroutine_heap->tmp_return_value = Py_None;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto frame_return_exit_1;
 branch_no_2:;
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_3;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 91;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[2]);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 91;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  assert(coroutine_heap->var_waiter == NULL);
  coroutine_heap->var_waiter = tmp_assign_source_1;
 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(coroutine_heap->var_waiter);
  tmp_cmp_expr_left_1 = coroutine_heap->var_waiter;
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_4;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 93;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 93;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 93;
  tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[20]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 93;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = coroutine_heap->var_waiter;
      assert(old != NULL);
      coroutine_heap->var_waiter = tmp_assign_source_2;
      Py_DECREF(old);
  }

 }
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(coroutine_heap->var_waiter);
  tmp_assattr_value_1 = coroutine_heap->var_waiter;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[18]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 94;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }

  tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[2], tmp_assattr_value_1);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 94;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
 }
 branch_no_3:;
 {
  PyObject *tmp_expression_value_5;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_await_result_1;
  coroutine->m_frame->m_frame.f_lineno = 95;
  tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_expression_value_7 == NULL)) {
      tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_expression_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 95;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[21]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 95;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  if (coroutine_heap->var_waiter == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 95;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_1 = coroutine_heap->var_waiter;
  coroutine->m_frame->m_frame.f_lineno = 95;
  tmp_expression_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  if (tmp_expression_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 95;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
  Py_DECREF(tmp_expression_value_6);
  if (tmp_expression_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 95;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_5;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 95;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_await_result_1 = yield_return_value;
  Py_DECREF(tmp_await_result_1);
 }

 // Release exception attached to the frame
 DROP_COROUTINE_EXCEPTION(coroutine);



 goto frame_no_exception_1;
 frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
 Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
 Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
 Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

 goto try_return_handler_1;

 frame_exception_exit_1:;

 // If it's not an exit exception, consider and create a traceback for it.
 if (!EXCEPTION_MATCH_GENERATOR(tstate, coroutine_heap->exception_type)) {
     if (coroutine_heap->exception_tb == NULL) {
         coroutine_heap->exception_tb = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_lineno);
     } else if (coroutine_heap->exception_tb->tb_frame != &coroutine->m_frame->m_frame) {
         coroutine_heap->exception_tb = ADD_TRACEBACK(coroutine_heap->exception_tb, coroutine->m_frame, coroutine_heap->exception_lineno);
     }

  Nuitka_Frame_AttachLocals(
      coroutine->m_frame,
      coroutine_heap->type_description_1,
      coroutine->m_closure[0],
      coroutine_heap->var_waiter
  );


     // Release cached frame if used for exception.
     if (coroutine->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
         count_active_frame_cache_instances -= 1;
         count_released_frame_cache_instances += 1;
#endif

         Py_DECREF(cache_m_frame);
         cache_m_frame = NULL;
     }

     assertFrameObject(coroutine->m_frame);
 }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
 Py_CLEAR(EXC_TYPE_F(coroutine));
#endif
 Py_CLEAR(EXC_VALUE_F(coroutine));
#if PYTHON_VERSION < 0x3b0
 Py_CLEAR(EXC_TRACEBACK_F(coroutine));
#endif
#endif

 // Return the error.
 goto try_except_handler_1;

 frame_no_exception_1:;
 coroutine_heap->tmp_return_value = Py_None;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto try_return_handler_1;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 Py_XDECREF(coroutine_heap->var_waiter);
 coroutine_heap->var_waiter = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 Py_XDECREF(coroutine_heap->var_waiter);
 coroutine_heap->var_waiter = NULL;
 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_1;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_1;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_1;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_1;

 goto function_exception_exit;
 // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_aiohttp$base_protocol$$$function__9__drain_helper$$$coroutine__1__drain_helper(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$base_protocol$$$function__9__drain_helper$$$coroutine__1__drain_helper_context,
        module_aiohttp$base_protocol,
        mod_consts[23],
        mod_consts[24],
        codeobj_9651ce62e295f18576244e1e1ec0dba2,
        closure,
        1,
#if 1
        sizeof(struct aiohttp$base_protocol$$$function__9__drain_helper$$$coroutine__1__drain_helper_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$base_protocol$$$function__1___init__,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_d8ccd60caf690c98b34179ca9092b361,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$base_protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__2_connected(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$base_protocol$$$function__2_connected,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[57],
#endif
        codeobj_553e1d1c6c29790ea91d278005327abd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$base_protocol,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__3_pause_writing(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$base_protocol$$$function__3_pause_writing,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_e16df7291af975c2bd367b57b7fad343,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$base_protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__4_resume_writing(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$base_protocol$$$function__4_resume_writing,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_6d196aed5e5dacbeb03bcab7a8113b99,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$base_protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__5_pause_reading(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$base_protocol$$$function__5_pause_reading,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[63],
#endif
        codeobj_ec259a66983a35ba7de8eafeeacda986,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$base_protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__6_resume_reading(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$base_protocol$$$function__6_resume_reading,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_2f368314875d4143c718f51970a1b584,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$base_protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__7_connection_made(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$base_protocol$$$function__7_connection_made,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_a4bd228bc4dfa2729e79467e59fc06f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$base_protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__8_connection_lost(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$base_protocol$$$function__8_connection_lost,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_59af0c88bdc1c7f3e3740d2b72ca4d36,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$base_protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$base_protocol$$$function__9__drain_helper(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$base_protocol$$$function__9__drain_helper,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[24],
#endif
        codeobj_9651ce62e295f18576244e1e1ec0dba2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$base_protocol,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_aiohttp$base_protocol[] = {
 impl_aiohttp$base_protocol$$$function__1___init__,
 impl_aiohttp$base_protocol$$$function__2_connected,
 impl_aiohttp$base_protocol$$$function__3_pause_writing,
 impl_aiohttp$base_protocol$$$function__4_resume_writing,
 impl_aiohttp$base_protocol$$$function__5_pause_reading,
 impl_aiohttp$base_protocol$$$function__6_resume_reading,
 impl_aiohttp$base_protocol$$$function__7_connection_made,
 impl_aiohttp$base_protocol$$$function__8_connection_lost,
 impl_aiohttp$base_protocol$$$function__9__drain_helper,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    PyThreadState *tstate = PyThreadState_GET();

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_aiohttp$base_protocol);

    if (unlikely(offset == -1)) {
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = Nuitka_Function_ExtractCodeObjectDescription(tstate, function);

    PyObject *result = MAKE_TUPLE_EMPTY(tstate, 8);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM_IMMORTAL(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM_IMMORTAL(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_aiohttp$base_protocol,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_aiohttp$base_protocol,
        sizeof(function_table_aiohttp$base_protocol) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiohttp$base_protocol(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiohttp$base_protocol");

    // Store the module for future use.
    module_aiohttp$base_protocol = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("aiohttp$base_protocol: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("aiohttp$base_protocol: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.base_protocol" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initaiohttp$base_protocol\n");

    moduledict_aiohttp$base_protocol = MODULE_DICT(module_aiohttp$base_protocol);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiohttp$base_protocol,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiohttp$base_protocol,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[81]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiohttp$base_protocol,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$base_protocol,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$base_protocol,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiohttp$base_protocol);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_aiohttp$base_protocol);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
 PyObject *outline_0_var___class__ = NULL;
 PyObject *tmp_class_creation_1__bases = NULL;
 PyObject *tmp_class_creation_1__bases_orig = NULL;
 PyObject *tmp_class_creation_1__class_decl_dict = NULL;
 PyObject *tmp_class_creation_1__metaclass = NULL;
 PyObject *tmp_class_creation_1__prepared = NULL;
 PyObject *tmp_import_from_1__module = NULL;
 struct Nuitka_FrameObject *frame_3eec8107611b5fd775d9a3eb55f64044;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
 int tmp_res;
 PyObject *locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8 = NULL;
 PyObject *tmp_dictset_value;
 struct Nuitka_FrameObject *frame_cc4f4e6d26aa5584a991cdbca647b488_2;
 NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Module init code if any


    // Module code.
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = module_filename_obj;
  UPDATE_STRING_DICT0(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_2);
 }
 frame_3eec8107611b5fd775d9a3eb55f64044 = MAKE_MODULE_FRAME(codeobj_3eec8107611b5fd775d9a3eb55f64044, module_aiohttp$base_protocol);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_3eec8107611b5fd775d9a3eb55f64044);
 assert(Py_REFCNT(frame_3eec8107611b5fd775d9a3eb55f64044) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = module_filename_obj;
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[27]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_True;
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[27]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[29], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_3;
  tmp_assign_source_3 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[13];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp$base_protocol;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = Py_None;
  tmp_level_value_1 = mod_consts[31];
  frame_3eec8107611b5fd775d9a3eb55f64044->m_frame.f_lineno = 1;
  tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  tmp_assign_source_5 = IMPORT_HARD_TYPING();
  assert(!(tmp_assign_source_5 == NULL));
  assert(tmp_import_from_1__module == NULL);
  Py_INCREF(tmp_assign_source_5);
  tmp_import_from_1__module = tmp_assign_source_5;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_import_name_from_1;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_1 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_1)) {
      tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_1,
          (PyObject *)moduledict_aiohttp$base_protocol,
          mod_consts[32],
          mod_consts[31]
      );
  } else {
      tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[32]);
  }

  if (tmp_assign_source_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 2;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_6);
 }
 {
  PyObject *tmp_assign_source_7;
  PyObject *tmp_import_name_from_2;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_2 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_2)) {
      tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_2,
          (PyObject *)moduledict_aiohttp$base_protocol,
          mod_consts[12],
          mod_consts[31]
      );
  } else {
      tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[12]);
  }

  if (tmp_assign_source_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 2;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_7);
 }
 goto try_end_1;
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

 CHECK_OBJECT(tmp_import_from_1__module);
 Py_DECREF(tmp_import_from_1__module);
 tmp_import_from_1__module = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_1;
 exception_value = exception_keeper_value_1;
 exception_tb = exception_keeper_tb_1;
 exception_lineno = exception_keeper_lineno_1;

 goto frame_exception_exit_1;
 // End of try:
 try_end_1:;
 CHECK_OBJECT(tmp_import_from_1__module);
 Py_DECREF(tmp_import_from_1__module);
 tmp_import_from_1__module = NULL;
 {
  PyObject *tmp_assign_source_8;
  PyObject *tmp_import_name_from_3;
  PyObject *tmp_name_value_2;
  PyObject *tmp_globals_arg_value_2;
  PyObject *tmp_locals_arg_value_2;
  PyObject *tmp_fromlist_value_2;
  PyObject *tmp_level_value_2;
  tmp_name_value_2 = mod_consts[33];
  tmp_globals_arg_value_2 = (PyObject *)moduledict_aiohttp$base_protocol;
  tmp_locals_arg_value_2 = Py_None;
  tmp_fromlist_value_2 = mod_consts[34];
  tmp_level_value_2 = mod_consts[35];
  frame_3eec8107611b5fd775d9a3eb55f64044->m_frame.f_lineno = 4;
  tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
  if (tmp_import_name_from_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 4;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_3)) {
      tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_3,
          (PyObject *)moduledict_aiohttp$base_protocol,
          mod_consts[16],
          mod_consts[31]
      );
  } else {
      tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[16]);
  }

  Py_DECREF(tmp_import_name_from_3);
  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 4;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_8);
 }
 {
  PyObject *tmp_assign_source_9;
  PyObject *tmp_import_name_from_4;
  PyObject *tmp_name_value_3;
  PyObject *tmp_globals_arg_value_3;
  PyObject *tmp_locals_arg_value_3;
  PyObject *tmp_fromlist_value_3;
  PyObject *tmp_level_value_3;
  tmp_name_value_3 = mod_consts[36];
  tmp_globals_arg_value_3 = (PyObject *)moduledict_aiohttp$base_protocol;
  tmp_locals_arg_value_3 = Py_None;
  tmp_fromlist_value_3 = mod_consts[37];
  tmp_level_value_3 = mod_consts[35];
  frame_3eec8107611b5fd775d9a3eb55f64044->m_frame.f_lineno = 5;
  tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
  if (tmp_import_name_from_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_4)) {
      tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_4,
          (PyObject *)moduledict_aiohttp$base_protocol,
          mod_consts[15],
          mod_consts[31]
      );
  } else {
      tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[15]);
  }

  Py_DECREF(tmp_import_name_from_4);
  if (tmp_assign_source_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_9);
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_10;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_expression_value_1;
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  tmp_assign_source_10 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM(tmp_assign_source_10, 0, tmp_tuple_element_1);
  assert(tmp_class_creation_1__bases_orig == NULL);
  tmp_class_creation_1__bases_orig = tmp_assign_source_10;
 }
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_dircall_arg1_1;
  CHECK_OBJECT(tmp_class_creation_1__bases_orig);
  tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
  Py_INCREF(tmp_dircall_arg1_1);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
      tmp_assign_source_11 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  assert(tmp_class_creation_1__bases == NULL);
  tmp_class_creation_1__bases = tmp_assign_source_11;
 }
 {
  PyObject *tmp_assign_source_12;
  tmp_assign_source_12 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__class_decl_dict == NULL);
  tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;
 }
 {
  PyObject *tmp_assign_source_13;
  PyObject *tmp_metaclass_value_1;
  nuitka_bool tmp_condition_result_1;
  int tmp_truth_name_1;
  PyObject *tmp_type_arg_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_subscript_value_1;
  PyObject *tmp_bases_value_1;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_expression_value_2 = tmp_class_creation_1__bases;
  tmp_subscript_value_1 = mod_consts[31];
  tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
  if (tmp_type_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
  Py_DECREF(tmp_type_arg_1);
  if (tmp_metaclass_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_1);
  condexpr_end_1:;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_bases_value_1 = tmp_class_creation_1__bases;
  tmp_assign_source_13 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
  Py_DECREF(tmp_metaclass_value_1);
  if (tmp_assign_source_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  assert(tmp_class_creation_1__metaclass == NULL);
  tmp_class_creation_1__metaclass = tmp_assign_source_13;
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_3 = tmp_class_creation_1__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[39]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  tmp_condition_result_2 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_assign_source_14;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_args_value_1;
  PyObject *tmp_tuple_element_2;
  PyObject *tmp_kwargs_value_1;
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_4 = tmp_class_creation_1__metaclass;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[39]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  tmp_tuple_element_2 = mod_consts[40];
  tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_tuple_element_2 = tmp_class_creation_1__bases;
  PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
  CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
  tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
  frame_3eec8107611b5fd775d9a3eb55f64044->m_frame.f_lineno = 8;
  tmp_assign_source_14 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_value_1);
  if (tmp_assign_source_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_14;
 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(tmp_class_creation_1__prepared);
  tmp_expression_value_5 = tmp_class_creation_1__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[41]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  assert(!(tmp_res == -1));
  tmp_condition_result_3 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_raise_type_1;
  PyObject *tmp_raise_value_1;
  PyObject *tmp_mod_expr_left_1;
  PyObject *tmp_mod_expr_right_1;
  PyObject *tmp_tuple_element_3;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_name_value_4;
  PyObject *tmp_default_value_1;
  tmp_raise_type_1 = PyExc_TypeError;
  tmp_mod_expr_left_1 = mod_consts[42];
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_6 = tmp_class_creation_1__metaclass;
  tmp_name_value_4 = mod_consts[43];
  tmp_default_value_1 = mod_consts[44];
  tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_4, tmp_default_value_1);
  if (tmp_tuple_element_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_7;
   PyObject *tmp_type_arg_2;
   PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_type_arg_2 = tmp_class_creation_1__prepared;
   tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
   assert(!(tmp_expression_value_7 == NULL));
   tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[43]);
   Py_DECREF(tmp_expression_value_7);
   if (tmp_tuple_element_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 8;

       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_mod_expr_right_1);
  goto try_except_handler_2;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
  Py_DECREF(tmp_mod_expr_right_1);
  if (tmp_raise_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_2;
  }
  exception_type = tmp_raise_type_1;
  Py_INCREF(tmp_raise_type_1);
  exception_value = tmp_raise_value_1;
  exception_lineno = 8;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_2;
 }
 branch_no_2:;
 goto branch_end_1;
 branch_no_1:;
 {
  PyObject *tmp_assign_source_15;
  tmp_assign_source_15 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_15;
 }
 branch_end_1:;
 {
  PyObject *tmp_assign_source_16;
  {
   PyObject *tmp_set_locals_1;
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_set_locals_1 = tmp_class_creation_1__prepared;
   locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8 = tmp_set_locals_1;
   Py_INCREF(tmp_set_locals_1);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[45];
  tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[46], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_4;
  }
  tmp_dictset_value = mod_consts[40];
  tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[47], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_4;
  }
  frame_cc4f4e6d26aa5584a991cdbca647b488_2 = MAKE_CLASS_FRAME(tstate, codeobj_cc4f4e6d26aa5584a991cdbca647b488, module_aiohttp$base_protocol, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_cc4f4e6d26aa5584a991cdbca647b488_2);
  assert(Py_REFCNT(frame_cc4f4e6d26aa5584a991cdbca647b488_2) == 2);

  // Framed code:
  tmp_dictset_value = mod_consts[48];
  tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 9;
   type_description_2 = "o";
      goto frame_exception_exit_2;
  }
  {
   PyObject *tmp_annotations_1;
   PyObject *tmp_dict_key_1;
   PyObject *tmp_dict_value_1;
   PyObject *tmp_expression_value_8;
   tmp_dict_key_1 = mod_consts[50];
   tmp_expression_value_8 = PyObject_GetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[13]);

   if (tmp_expression_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[13]);

     if (unlikely(tmp_expression_value_8 == NULL)) {
         tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
     }

     if (tmp_expression_value_8 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 18;
      type_description_2 = "o";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_8);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[51]);
   Py_DECREF(tmp_expression_value_8);
   if (tmp_dict_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 18;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_1 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
   Py_DECREF(tmp_dict_value_1);
   assert(!(tmp_res != 0));
   tmp_dict_key_1 = mod_consts[52];
   tmp_dict_value_1 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$base_protocol$$$function__1___init__(tmp_annotations_1);

   tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[53], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 18;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   nuitka_bool tmp_condition_result_4;
   PyObject *tmp_called_value_2;
   PyObject *tmp_args_element_value_1;
   PyObject *tmp_annotations_2;
   PyObject *tmp_dict_key_2;
   PyObject *tmp_dict_value_2;
   PyObject *tmp_called_value_3;
   PyObject *tmp_args_element_value_2;
   PyObject *tmp_annotations_3;
   PyObject *tmp_dict_key_3;
   PyObject *tmp_dict_value_3;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[55]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 26;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_2;
   } else {
       goto condexpr_false_2;
   }
   condexpr_true_2:;
   tmp_called_value_2 = PyObject_GetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[55]);

   if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[55], &exception_type, &exception_value);

    exception_lineno = 26;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }

   if (tmp_called_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 26;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_dict_key_2 = mod_consts[52];
   tmp_dict_value_2 = PyObject_GetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[56]);

   if (tmp_dict_value_2 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_2 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_2);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_2 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
   Py_DECREF(tmp_dict_value_2);
   assert(!(tmp_res != 0));


   tmp_args_element_value_1 = MAKE_FUNCTION_aiohttp$base_protocol$$$function__2_connected(tmp_annotations_2);

   frame_cc4f4e6d26aa5584a991cdbca647b488_2->m_frame.f_lineno = 26;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
   Py_DECREF(tmp_called_value_2);
   Py_DECREF(tmp_args_element_value_1);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 26;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   goto condexpr_end_2;
   condexpr_false_2:;
   tmp_called_value_3 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_3 = mod_consts[52];
   tmp_dict_value_3 = PyObject_GetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[56]);

   if (tmp_dict_value_3 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_3 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_3);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_3 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
   Py_DECREF(tmp_dict_value_3);
   assert(!(tmp_res != 0));


   tmp_args_element_value_2 = MAKE_FUNCTION_aiohttp$base_protocol$$$function__2_connected(tmp_annotations_3);

   frame_cc4f4e6d26aa5584a991cdbca647b488_2->m_frame.f_lineno = 26;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
   Py_DECREF(tmp_args_element_value_2);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 26;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   condexpr_end_2:;
   tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[19], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 27;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_4;
   tmp_annotations_4 = DICT_COPY(tstate, mod_consts[58]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$base_protocol$$$function__3_pause_writing(tmp_annotations_4);

   tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[59], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 31;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_5;
   tmp_annotations_5 = DICT_COPY(tstate, mod_consts[58]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$base_protocol$$$function__4_resume_writing(tmp_annotations_5);

   tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[61], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 35;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_6;
   tmp_annotations_6 = DICT_COPY(tstate, mod_consts[58]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$base_protocol$$$function__5_pause_reading(tmp_annotations_6);

   tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[9], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 45;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_7;
   tmp_annotations_7 = DICT_COPY(tstate, mod_consts[58]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$base_protocol$$$function__6_resume_reading(tmp_annotations_7);

   tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[11], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 53;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_8;
   PyObject *tmp_dict_key_4;
   PyObject *tmp_dict_value_4;
   PyObject *tmp_expression_value_9;
   tmp_dict_key_4 = mod_consts[4];
   tmp_expression_value_9 = PyObject_GetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[13]);

   if (tmp_expression_value_9 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[13]);

     if (unlikely(tmp_expression_value_9 == NULL)) {
         tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
     }

     if (tmp_expression_value_9 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 61;
      type_description_2 = "o";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_9);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[65]);
   Py_DECREF(tmp_expression_value_9);
   if (tmp_dict_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_8 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_4, tmp_dict_value_4);
   Py_DECREF(tmp_dict_value_4);
   assert(!(tmp_res != 0));
   tmp_dict_key_4 = mod_consts[52];
   tmp_dict_value_4 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_4, tmp_dict_value_4);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$base_protocol$$$function__7_connection_made(tmp_annotations_8);

   tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[66], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_9;
   PyObject *tmp_dict_key_5;
   PyObject *tmp_dict_value_5;
   PyObject *tmp_expression_value_10;
   PyObject *tmp_subscript_value_2;
   tmp_dict_key_5 = mod_consts[68];
   tmp_expression_value_10 = PyObject_GetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[32]);

   if (tmp_expression_value_10 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[32]);

     if (unlikely(tmp_expression_value_10 == NULL)) {
         tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
     }

     if (tmp_expression_value_10 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 66;
      type_description_2 = "o";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_10);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_subscript_value_2 = PyObject_GetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[69]);

   if (tmp_subscript_value_2 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_2 = PyExc_BaseException;
           Py_INCREF(tmp_subscript_value_2);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_2);
   Py_DECREF(tmp_expression_value_10);
   Py_DECREF(tmp_subscript_value_2);
   if (tmp_dict_value_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 66;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_9 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_5, tmp_dict_value_5);
   Py_DECREF(tmp_dict_value_5);
   assert(!(tmp_res != 0));
   tmp_dict_key_5 = mod_consts[52];
   tmp_dict_value_5 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_5, tmp_dict_value_5);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$base_protocol$$$function__8_connection_lost(tmp_annotations_9);

   tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[70], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 66;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_10;
   tmp_annotations_10 = DICT_COPY(tstate, mod_consts[58]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$base_protocol$$$function__9__drain_helper(tmp_annotations_10);

   tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[23], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 86;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_1;
  frame_exception_exit_2:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_cc4f4e6d26aa5584a991cdbca647b488_2, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_cc4f4e6d26aa5584a991cdbca647b488_2->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_cc4f4e6d26aa5584a991cdbca647b488_2, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_cc4f4e6d26aa5584a991cdbca647b488_2,
      type_description_2,
      outline_0_var___class__
  );



  assertFrameObject(frame_cc4f4e6d26aa5584a991cdbca647b488_2);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_1;
  frame_no_exception_1:;
  goto skip_nested_handling_1;
  nested_frame_exit_1:;

  goto try_except_handler_4;
  skip_nested_handling_1:;
  {
   nuitka_bool tmp_condition_result_5;
   PyObject *tmp_cmp_expr_left_1;
   PyObject *tmp_cmp_expr_right_1;
   CHECK_OBJECT(tmp_class_creation_1__bases);
   tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
   CHECK_OBJECT(tmp_class_creation_1__bases_orig);
   tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
   tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
   if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 8;

       goto try_except_handler_4;
   }
   if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
       goto branch_yes_3;
   } else {
       goto branch_no_3;
   }
  }
  branch_yes_3:;
  CHECK_OBJECT(tmp_class_creation_1__bases_orig);
  tmp_dictset_value = tmp_class_creation_1__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8, mod_consts[72], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_4;
  }
  branch_no_3:;
  {
   PyObject *tmp_assign_source_17;
   PyObject *tmp_called_value_4;
   PyObject *tmp_args_value_2;
   PyObject *tmp_tuple_element_4;
   PyObject *tmp_kwargs_value_2;
   CHECK_OBJECT(tmp_class_creation_1__metaclass);
   tmp_called_value_4 = tmp_class_creation_1__metaclass;
   tmp_tuple_element_4 = mod_consts[40];
   tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
   CHECK_OBJECT(tmp_class_creation_1__bases);
   tmp_tuple_element_4 = tmp_class_creation_1__bases;
   PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
   tmp_tuple_element_4 = locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8;
   PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
   CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
   tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
   frame_3eec8107611b5fd775d9a3eb55f64044->m_frame.f_lineno = 8;
   tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
   Py_DECREF(tmp_args_value_2);
   if (tmp_assign_source_17 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 8;

       goto try_except_handler_4;
   }
   assert(outline_0_var___class__ == NULL);
   outline_0_var___class__ = tmp_assign_source_17;
  }
  CHECK_OBJECT(outline_0_var___class__);
  tmp_assign_source_16 = outline_0_var___class__;
  Py_INCREF(tmp_assign_source_16);
  goto try_return_handler_4;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_4:;
  Py_DECREF(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8);
  locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8 = NULL;
  goto try_return_handler_3;
  // Exception handler code:
  try_except_handler_4:;
  exception_keeper_type_2 = exception_type;
  exception_keeper_value_2 = exception_value;
  exception_keeper_tb_2 = exception_tb;
  exception_keeper_lineno_2 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8);
  locals_aiohttp$base_protocol$$$class__1_BaseProtocol_8 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_2;
  exception_value = exception_keeper_value_2;
  exception_tb = exception_keeper_tb_2;
  exception_lineno = exception_keeper_lineno_2;

  goto try_except_handler_3;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_3:;
  CHECK_OBJECT(outline_0_var___class__);
  Py_DECREF(outline_0_var___class__);
  outline_0_var___class__ = NULL;
  goto outline_result_1;
  // Exception handler code:
  try_except_handler_3:;
  exception_keeper_type_3 = exception_type;
  exception_keeper_value_3 = exception_value;
  exception_keeper_tb_3 = exception_tb;
  exception_keeper_lineno_3 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_3;
  exception_value = exception_keeper_value_3;
  exception_tb = exception_keeper_tb_3;
  exception_lineno = exception_keeper_lineno_3;

  goto outline_exception_1;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_1:;
  exception_lineno = 8;
  goto try_except_handler_2;
  outline_result_1:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_16);
 }
 goto try_end_2;
 // Exception handler code:
 try_except_handler_2:;
 exception_keeper_type_4 = exception_type;
 exception_keeper_value_4 = exception_value;
 exception_keeper_tb_4 = exception_tb;
 exception_keeper_lineno_4 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_1__bases_orig);
 tmp_class_creation_1__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_1__bases);
 tmp_class_creation_1__bases = NULL;
 Py_XDECREF(tmp_class_creation_1__class_decl_dict);
 tmp_class_creation_1__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_1__metaclass);
 tmp_class_creation_1__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_1__prepared);
 tmp_class_creation_1__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_4;
 exception_value = exception_keeper_value_4;
 exception_tb = exception_keeper_tb_4;
 exception_lineno = exception_keeper_lineno_4;

 goto frame_exception_exit_1;
 // End of try:
 try_end_2:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_2;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_3eec8107611b5fd775d9a3eb55f64044, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_3eec8107611b5fd775d9a3eb55f64044->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_3eec8107611b5fd775d9a3eb55f64044, exception_lineno);
 }



 assertFrameObject(frame_3eec8107611b5fd775d9a3eb55f64044);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto module_exception_exit;
 frame_no_exception_2:;
 CHECK_OBJECT(tmp_class_creation_1__bases_orig);
 Py_DECREF(tmp_class_creation_1__bases_orig);
 tmp_class_creation_1__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_1__bases);
 Py_DECREF(tmp_class_creation_1__bases);
 tmp_class_creation_1__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
 Py_DECREF(tmp_class_creation_1__class_decl_dict);
 tmp_class_creation_1__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_1__metaclass);
 Py_DECREF(tmp_class_creation_1__metaclass);
 tmp_class_creation_1__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_1__prepared);
 Py_DECREF(tmp_class_creation_1__prepared);
 tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("aiohttp$base_protocol", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.base_protocol" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_aiohttp$base_protocol);
    return module_aiohttp$base_protocol;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$base_protocol, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("aiohttp$base_protocol", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
