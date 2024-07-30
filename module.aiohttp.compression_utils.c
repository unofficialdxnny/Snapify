/* Generated code for Python module 'aiohttp$compression_utils'
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

/* The "module_aiohttp$compression_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiohttp$compression_utils;
PyDictObject *moduledict_aiohttp$compression_utils;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[122];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[122];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("aiohttp.compression_utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 122; i++) {
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
void checkModuleConstants_aiohttp$compression_utils(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 122; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6ef691fa3711ab2e608a5d7c591f2dcf;
static PyCodeObject *codeobj_137dde9c25cbe015d20d4ac5533bc482;
static PyCodeObject *codeobj_408e8119a9a7d8366a4fec97ad67af6d;
static PyCodeObject *codeobj_fd316158b9e7c518b0aef8a06b6f3b34;
static PyCodeObject *codeobj_15d6d9b82424fd9f02e35abbaac7a194;
static PyCodeObject *codeobj_b3feb3c80f0b258cd9e5ce14b67f6f32;
static PyCodeObject *codeobj_bdde3c8ea77db1c8d89a631996439471;
static PyCodeObject *codeobj_bce035e1a680a21652494c8b79dde141;
static PyCodeObject *codeobj_657131784d71b98430272c30504ced60;
static PyCodeObject *codeobj_f33aa5c3624fd7cbff5f57c58eba49cc;
static PyCodeObject *codeobj_4008589cd9520ecfc9b76c8e97fa17cb;
static PyCodeObject *codeobj_2f41e450f8ca9b953d21272320a6dfab;
static PyCodeObject *codeobj_4971b3e00b900054b625c4388082e955;
static PyCodeObject *codeobj_f8738e9185694fc049ce4ed7fe2063d8;
static PyCodeObject *codeobj_70a9d78e3a372d314bb35fc1312a2be2;
static PyCodeObject *codeobj_a19110fc764272f39f936db4aed4e881;
static PyCodeObject *codeobj_04dd628ae10e642888981d463cff09b3;
static PyCodeObject *codeobj_92f1c43cdc649ba4c8b9f22fc0cafe60;
static PyCodeObject *codeobj_c4acc14a2b2eba93d46b4e4eb265e428;
static PyCodeObject *codeobj_ce38d3056564dd07bcd4b84b403094ed;

static void createModuleCodeObjects(void) {
 module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[109]); CHECK_OBJECT(module_filename_obj);
 codeobj_6ef691fa3711ab2e608a5d7c591f2dcf = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[110], mod_consts[110], NULL, NULL, 0, 0, 0);
 codeobj_137dde9c25cbe015d20d4ac5533bc482 = MAKE_CODE_OBJECT(module_filename_obj, 41, 0, mod_consts[74], mod_consts[74], mod_consts[111], NULL, 0, 0, 0);
 codeobj_408e8119a9a7d8366a4fec97ad67af6d = MAKE_CODE_OBJECT(module_filename_obj, 89, 0, mod_consts[92], mod_consts[92], mod_consts[111], NULL, 0, 0, 0);
 codeobj_fd316158b9e7c518b0aef8a06b6f3b34 = MAKE_CODE_OBJECT(module_filename_obj, 29, 0, mod_consts[67], mod_consts[67], mod_consts[111], NULL, 0, 0, 0);
 codeobj_15d6d9b82424fd9f02e35abbaac7a194 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[8], mod_consts[104], mod_consts[112], NULL, 1, 0, 0);
 codeobj_b3feb3c80f0b258cd9e5ce14b67f6f32 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[8], mod_consts[86], mod_consts[113], mod_consts[111], 8, 0, 0);
 codeobj_bdde3c8ea77db1c8d89a631996439471 = MAKE_CODE_OBJECT(module_filename_obj, 90, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[8], mod_consts[93], mod_consts[114], mod_consts[111], 5, 0, 0);
 codeobj_bce035e1a680a21652494c8b79dde141 = MAKE_CODE_OBJECT(module_filename_obj, 30, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[8], mod_consts[72], mod_consts[115], NULL, 4, 0, 0);
 codeobj_657131784d71b98430272c30504ced60 = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[19], mod_consts[27], mod_consts[116], NULL, 2, 0, 0);
 codeobj_f33aa5c3624fd7cbff5f57c58eba49cc = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[25], mod_consts[88], mod_consts[116], NULL, 2, 0, 0);
 codeobj_4008589cd9520ecfc9b76c8e97fa17cb = MAKE_CODE_OBJECT(module_filename_obj, 107, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[35], mod_consts[117], NULL, 3, 0, 0);
 codeobj_2f41e450f8ca9b953d21272320a6dfab = MAKE_CODE_OBJECT(module_filename_obj, 149, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[33], mod_consts[106], mod_consts[116], NULL, 2, 0, 0);
 codeobj_4971b3e00b900054b625c4388082e955 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[33], mod_consts[95], mod_consts[117], NULL, 3, 0, 0);
 codeobj_f8738e9185694fc049ce4ed7fe2063d8 = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[9], mod_consts[9], mod_consts[118], NULL, 2, 0, 0);
 codeobj_70a9d78e3a372d314bb35fc1312a2be2 = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[37], mod_consts[99], mod_consts[112], NULL, 1, 0, 0);
 codeobj_a19110fc764272f39f936db4aed4e881 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[28], mod_consts[108], mod_consts[112], NULL, 1, 0, 0);
 codeobj_04dd628ae10e642888981d463cff09b3 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[28], mod_consts[90], mod_consts[119], NULL, 2, 0, 0);
 codeobj_92f1c43cdc649ba4c8b9f22fc0cafe60 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[28], mod_consts[97], mod_consts[120], NULL, 2, 0, 0);
 codeobj_c4acc14a2b2eba93d46b4e4eb265e428 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[38], mod_consts[100], mod_consts[112], NULL, 1, 0, 0);
 codeobj_ce38d3056564dd07bcd4b84b403094ed = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[39], mod_consts[101], mod_consts[112], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_aiohttp$compression_utils$$$function__5_compress$$$coroutine__1_compress(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_aiohttp$compression_utils$$$function__9_decompress$$$coroutine__1_decompress(PyThreadState *tstate, struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__10_flush(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__11_eof(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__12_unconsumed_tail(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__13_unused_data(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__14___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__15_decompress_sync(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__16_flush(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__1_encoding_to_mode(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__2___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__3___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__4_compress_sync(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__5_compress(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__6_flush(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__7___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__8_decompress_sync(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__9_decompress(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_aiohttp$compression_utils$$$function__1_encoding_to_mode(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_encoding = python_pars[0];
 PyObject *par_suppress_deflate_header = python_pars[1];
 struct Nuitka_FrameObject *frame_f8738e9185694fc049ce4ed7fe2063d8;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_f8738e9185694fc049ce4ed7fe2063d8 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_f8738e9185694fc049ce4ed7fe2063d8)) {
     Py_XDECREF(cache_frame_f8738e9185694fc049ce4ed7fe2063d8);

#if _DEBUG_REFCOUNTS
     if (cache_frame_f8738e9185694fc049ce4ed7fe2063d8 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_f8738e9185694fc049ce4ed7fe2063d8 = MAKE_FUNCTION_FRAME(tstate, codeobj_f8738e9185694fc049ce4ed7fe2063d8, module_aiohttp$compression_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_f8738e9185694fc049ce4ed7fe2063d8->m_type_description == NULL);
 frame_f8738e9185694fc049ce4ed7fe2063d8 = cache_frame_f8738e9185694fc049ce4ed7fe2063d8;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_f8738e9185694fc049ce4ed7fe2063d8);
 assert(Py_REFCNT(frame_f8738e9185694fc049ce4ed7fe2063d8) == 2);

 // Framed code:
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(par_encoding);
  tmp_cmp_expr_left_1 = par_encoding;
  tmp_cmp_expr_right_1 = mod_consts[0];
  tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_add_expr_left_1;
  PyObject *tmp_add_expr_right_1;
  PyObject *tmp_expression_value_1;
  tmp_add_expr_left_1 = mod_consts[1];
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[2]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
  }

  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 24;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
  if (tmp_add_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 24;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_return_value = BINARY_OPERATION_ADD_OBJECT_LONG_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
  Py_DECREF(tmp_add_expr_right_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 24;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  goto frame_return_exit_1;
 }
 branch_no_1:;
 {
  nuitka_bool tmp_condition_result_2;
  int tmp_truth_name_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(par_suppress_deflate_header);
  tmp_truth_name_1 = CHECK_IF_TRUE(par_suppress_deflate_header);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 26;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[2]);

  if (unlikely(tmp_expression_value_2 == NULL)) {
      tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
  }

  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 26;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 26;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_return_value = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 26;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[2]);

  if (unlikely(tmp_expression_value_3 == NULL)) {
      tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
  }

  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 26;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[3]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 26;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  condexpr_end_1:;
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
     exception_tb = MAKE_TRACEBACK(frame_f8738e9185694fc049ce4ed7fe2063d8, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_f8738e9185694fc049ce4ed7fe2063d8->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_f8738e9185694fc049ce4ed7fe2063d8, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_f8738e9185694fc049ce4ed7fe2063d8,
     type_description_1,
     par_encoding,
     par_suppress_deflate_header
 );


 // Release cached frame if used for exception.
 if (frame_f8738e9185694fc049ce4ed7fe2063d8 == cache_frame_f8738e9185694fc049ce4ed7fe2063d8) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_f8738e9185694fc049ce4ed7fe2063d8);
     cache_frame_f8738e9185694fc049ce4ed7fe2063d8 = NULL;
 }

 assertFrameObject(frame_f8738e9185694fc049ce4ed7fe2063d8);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto function_exception_exit;
 frame_no_exception_1:;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_encoding);
 Py_DECREF(par_encoding);
 CHECK_OBJECT(par_suppress_deflate_header);
 Py_DECREF(par_suppress_deflate_header);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_encoding);
 Py_DECREF(par_encoding);
 CHECK_OBJECT(par_suppress_deflate_header);
 Py_DECREF(par_suppress_deflate_header);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$compression_utils$$$function__2___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_mode = python_pars[1];
 PyObject *par_executor = python_pars[2];
 PyObject *par_max_sync_chunk_size = python_pars[3];
 struct Nuitka_FrameObject *frame_bce035e1a680a21652494c8b79dde141;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_bce035e1a680a21652494c8b79dde141 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_bce035e1a680a21652494c8b79dde141)) {
     Py_XDECREF(cache_frame_bce035e1a680a21652494c8b79dde141);

#if _DEBUG_REFCOUNTS
     if (cache_frame_bce035e1a680a21652494c8b79dde141 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_bce035e1a680a21652494c8b79dde141 = MAKE_FUNCTION_FRAME(tstate, codeobj_bce035e1a680a21652494c8b79dde141, module_aiohttp$compression_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_bce035e1a680a21652494c8b79dde141->m_type_description == NULL);
 frame_bce035e1a680a21652494c8b79dde141 = cache_frame_bce035e1a680a21652494c8b79dde141;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_bce035e1a680a21652494c8b79dde141);
 assert(Py_REFCNT(frame_bce035e1a680a21652494c8b79dde141) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_mode);
  tmp_assattr_value_1 = par_mode;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  CHECK_OBJECT(par_executor);
  tmp_assattr_value_2 = par_executor;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 37;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  CHECK_OBJECT(par_max_sync_chunk_size);
  tmp_assattr_value_3 = par_max_sync_chunk_size;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[6], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 38;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_bce035e1a680a21652494c8b79dde141, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_bce035e1a680a21652494c8b79dde141->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_bce035e1a680a21652494c8b79dde141, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_bce035e1a680a21652494c8b79dde141,
     type_description_1,
     par_self,
     par_mode,
     par_executor,
     par_max_sync_chunk_size
 );


 // Release cached frame if used for exception.
 if (frame_bce035e1a680a21652494c8b79dde141 == cache_frame_bce035e1a680a21652494c8b79dde141) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_bce035e1a680a21652494c8b79dde141);
     cache_frame_bce035e1a680a21652494c8b79dde141 = NULL;
 }

 assertFrameObject(frame_bce035e1a680a21652494c8b79dde141);

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
 CHECK_OBJECT(par_mode);
 Py_DECREF(par_mode);
 CHECK_OBJECT(par_executor);
 Py_DECREF(par_executor);
 CHECK_OBJECT(par_max_sync_chunk_size);
 Py_DECREF(par_max_sync_chunk_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_mode);
 Py_DECREF(par_mode);
 CHECK_OBJECT(par_executor);
 Py_DECREF(par_executor);
 CHECK_OBJECT(par_max_sync_chunk_size);
 Py_DECREF(par_max_sync_chunk_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$compression_utils$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_encoding = python_pars[1];
 PyObject *par_suppress_deflate_header = python_pars[2];
 PyObject *par_level = python_pars[3];
 PyObject *par_wbits = python_pars[4];
 PyObject *par_strategy = python_pars[5];
 PyObject *par_executor = python_pars[6];
 PyObject *par_max_sync_chunk_size = python_pars[7];
 struct Nuitka_FrameObject *frame_b3feb3c80f0b258cd9e5ce14b67f6f32;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_b3feb3c80f0b258cd9e5ce14b67f6f32 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_b3feb3c80f0b258cd9e5ce14b67f6f32)) {
     Py_XDECREF(cache_frame_b3feb3c80f0b258cd9e5ce14b67f6f32);

#if _DEBUG_REFCOUNTS
     if (cache_frame_b3feb3c80f0b258cd9e5ce14b67f6f32 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_b3feb3c80f0b258cd9e5ce14b67f6f32 = MAKE_FUNCTION_FRAME(tstate, codeobj_b3feb3c80f0b258cd9e5ce14b67f6f32, module_aiohttp$compression_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_b3feb3c80f0b258cd9e5ce14b67f6f32->m_type_description == NULL);
 frame_b3feb3c80f0b258cd9e5ce14b67f6f32 = cache_frame_b3feb3c80f0b258cd9e5ce14b67f6f32;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_b3feb3c80f0b258cd9e5ce14b67f6f32);
 assert(Py_REFCNT(frame_b3feb3c80f0b258cd9e5ce14b67f6f32) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_type_arg_value_1;
  PyObject *tmp_object_arg_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_kw_call_value_0_1;
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_called_value_2;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_kw_call_value_1_1;
  PyObject *tmp_kw_call_value_2_1;
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 52;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_self);
  tmp_object_arg_value_1 = par_self;
  tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_aiohttp$compression_utils, tmp_type_arg_value_1, tmp_object_arg_value_1);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 52;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 52;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_wbits);
  tmp_cmp_expr_left_1 = par_wbits;
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 53;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_encoding);
  tmp_args_element_value_1 = par_encoding;
  CHECK_OBJECT(par_suppress_deflate_header);
  tmp_args_element_value_2 = par_suppress_deflate_header;
  frame_b3feb3c80f0b258cd9e5ce14b67f6f32->m_frame.f_lineno = 53;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
  }

  if (tmp_kw_call_value_0_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 53;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  CHECK_OBJECT(par_wbits);
  tmp_kw_call_value_0_1 = par_wbits;
  Py_INCREF(tmp_kw_call_value_0_1);
  condexpr_end_1:;
  CHECK_OBJECT(par_executor);
  tmp_kw_call_value_1_1 = par_executor;
  CHECK_OBJECT(par_max_sync_chunk_size);
  tmp_kw_call_value_2_1 = par_max_sync_chunk_size;
  frame_b3feb3c80f0b258cd9e5ce14b67f6f32->m_frame.f_lineno = 52;
  {
      PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

      tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[10]);
  }

  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_kw_call_value_0_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 52;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  CHECK_OBJECT(par_level);
  tmp_cmp_expr_left_2 = par_level;
  tmp_cmp_expr_right_2 = Py_None;
  tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_value_3;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_kw_call_value_0_2;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_kw_call_value_1_2;
  PyObject *tmp_assattr_target_1;
  tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[2]);

  if (unlikely(tmp_expression_value_2 == NULL)) {
      tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
  }

  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[11]);
  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
  if (tmp_kw_call_value_0_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_3);

   exception_lineno = 60;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_strategy);
  tmp_kw_call_value_1_2 = par_strategy;
  frame_b3feb3c80f0b258cd9e5ce14b67f6f32->m_frame.f_lineno = 60;
  {
      PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

      tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[12]);
  }

  Py_DECREF(tmp_called_value_3);
  Py_DECREF(tmp_kw_call_value_0_2);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
 }
 goto branch_end_1;
 branch_no_1:;
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_called_value_4;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_kw_call_value_0_3;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_kw_call_value_1_3;
  PyObject *tmp_kw_call_value_2_2;
  PyObject *tmp_assattr_target_2;
  tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[2]);

  if (unlikely(tmp_expression_value_4 == NULL)) {
      tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
  }

  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[11]);
  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_5 = par_self;
  tmp_kw_call_value_0_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[4]);
  if (tmp_kw_call_value_0_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_4);

   exception_lineno = 63;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_strategy);
  tmp_kw_call_value_1_3 = par_strategy;
  CHECK_OBJECT(par_level);
  tmp_kw_call_value_2_2 = par_level;
  frame_b3feb3c80f0b258cd9e5ce14b67f6f32->m_frame.f_lineno = 62;
  {
      PyObject *kw_values[3] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3, tmp_kw_call_value_2_2};

      tmp_assattr_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[14]);
  }

  Py_DECREF(tmp_called_value_4);
  Py_DECREF(tmp_kw_call_value_0_3);
  if (tmp_assattr_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
  Py_DECREF(tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
 }
 branch_end_1:;
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_assattr_target_3;
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[15]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 65;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  frame_b3feb3c80f0b258cd9e5ce14b67f6f32->m_frame.f_lineno = 65;
  tmp_assattr_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[16]);
  if (tmp_assattr_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 65;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
  if (par_self == NULL) {
   Py_DECREF(tmp_assattr_value_3);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 65;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }

  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[18], tmp_assattr_value_3);
  Py_DECREF(tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 65;
   type_description_1 = "ooooooooc";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_b3feb3c80f0b258cd9e5ce14b67f6f32, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_b3feb3c80f0b258cd9e5ce14b67f6f32->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_b3feb3c80f0b258cd9e5ce14b67f6f32, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_b3feb3c80f0b258cd9e5ce14b67f6f32,
     type_description_1,
     par_self,
     par_encoding,
     par_suppress_deflate_header,
     par_level,
     par_wbits,
     par_strategy,
     par_executor,
     par_max_sync_chunk_size,
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_b3feb3c80f0b258cd9e5ce14b67f6f32 == cache_frame_b3feb3c80f0b258cd9e5ce14b67f6f32) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_b3feb3c80f0b258cd9e5ce14b67f6f32);
     cache_frame_b3feb3c80f0b258cd9e5ce14b67f6f32 = NULL;
 }

 assertFrameObject(frame_b3feb3c80f0b258cd9e5ce14b67f6f32);

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
 CHECK_OBJECT(par_encoding);
 Py_DECREF(par_encoding);
 CHECK_OBJECT(par_suppress_deflate_header);
 Py_DECREF(par_suppress_deflate_header);
 CHECK_OBJECT(par_level);
 Py_DECREF(par_level);
 CHECK_OBJECT(par_wbits);
 Py_DECREF(par_wbits);
 CHECK_OBJECT(par_strategy);
 Py_DECREF(par_strategy);
 CHECK_OBJECT(par_executor);
 Py_DECREF(par_executor);
 CHECK_OBJECT(par_max_sync_chunk_size);
 Py_DECREF(par_max_sync_chunk_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_encoding);
 Py_DECREF(par_encoding);
 CHECK_OBJECT(par_suppress_deflate_header);
 Py_DECREF(par_suppress_deflate_header);
 CHECK_OBJECT(par_level);
 Py_DECREF(par_level);
 CHECK_OBJECT(par_wbits);
 Py_DECREF(par_wbits);
 CHECK_OBJECT(par_strategy);
 Py_DECREF(par_strategy);
 CHECK_OBJECT(par_executor);
 Py_DECREF(par_executor);
 CHECK_OBJECT(par_max_sync_chunk_size);
 Py_DECREF(par_max_sync_chunk_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$compression_utils$$$function__4_compress_sync(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_data = python_pars[1];
 struct Nuitka_FrameObject *frame_f33aa5c3624fd7cbff5f57c58eba49cc;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_f33aa5c3624fd7cbff5f57c58eba49cc = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_f33aa5c3624fd7cbff5f57c58eba49cc)) {
     Py_XDECREF(cache_frame_f33aa5c3624fd7cbff5f57c58eba49cc);

#if _DEBUG_REFCOUNTS
     if (cache_frame_f33aa5c3624fd7cbff5f57c58eba49cc == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_f33aa5c3624fd7cbff5f57c58eba49cc = MAKE_FUNCTION_FRAME(tstate, codeobj_f33aa5c3624fd7cbff5f57c58eba49cc, module_aiohttp$compression_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_f33aa5c3624fd7cbff5f57c58eba49cc->m_type_description == NULL);
 frame_f33aa5c3624fd7cbff5f57c58eba49cc = cache_frame_f33aa5c3624fd7cbff5f57c58eba49cc;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_f33aa5c3624fd7cbff5f57c58eba49cc);
 assert(Py_REFCNT(frame_f33aa5c3624fd7cbff5f57c58eba49cc) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_args_element_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_data);
  tmp_args_element_value_1 = par_data;
  frame_f33aa5c3624fd7cbff5f57c58eba49cc->m_frame.f_lineno = 68;
  tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[19], tmp_args_element_value_1);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
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
     exception_tb = MAKE_TRACEBACK(frame_f33aa5c3624fd7cbff5f57c58eba49cc, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_f33aa5c3624fd7cbff5f57c58eba49cc->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_f33aa5c3624fd7cbff5f57c58eba49cc, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_f33aa5c3624fd7cbff5f57c58eba49cc,
     type_description_1,
     par_self,
     par_data
 );


 // Release cached frame if used for exception.
 if (frame_f33aa5c3624fd7cbff5f57c58eba49cc == cache_frame_f33aa5c3624fd7cbff5f57c58eba49cc) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_f33aa5c3624fd7cbff5f57c58eba49cc);
     cache_frame_f33aa5c3624fd7cbff5f57c58eba49cc = NULL;
 }

 assertFrameObject(frame_f33aa5c3624fd7cbff5f57c58eba49cc);

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
 CHECK_OBJECT(par_data);
 Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_data);
 Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$compression_utils$$$function__5_compress(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[1]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[2];

  tmp_closure_1[0] = par_data;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_self;
  Py_INCREF(tmp_closure_1[1]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$compression_utils$$$function__5_compress$$$coroutine__1_compress(tstate, tmp_closure_1);

  goto function_return_exit;
 }

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_data);
 Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$compression_utils$$$function__5_compress$$$coroutine__1_compress_locals {
 PyObject *tmp_with_1__enter;
 PyObject *tmp_with_1__exit;
 nuitka_bool tmp_with_1__indicator;
 PyObject *tmp_with_1__source;
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 char yield_tmps[1024];
 PyObject *tmp_return_value;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 int exception_keeper_lineno_1;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
 int tmp_res;
 bool tmp_result;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 int exception_keeper_lineno_2;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 int exception_keeper_lineno_3;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 int exception_keeper_lineno_4;
};
#endif

static PyObject *aiohttp$compression_utils$$$function__5_compress$$$coroutine__1_compress_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$compression_utils$$$function__5_compress$$$coroutine__1_compress_locals *coroutine_heap = (struct aiohttp$compression_utils$$$function__5_compress$$$coroutine__1_compress_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 5: goto yield_return_5;
 case 4: goto yield_return_4;
 case 3: goto yield_return_3;
 case 2: goto yield_return_2;
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 coroutine_heap->tmp_with_1__enter = NULL;
 coroutine_heap->tmp_with_1__exit = NULL;
 coroutine_heap->tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
 coroutine_heap->tmp_with_1__source = NULL;
 coroutine_heap->type_description_1 = NULL;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;
 coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_657131784d71b98430272c30504ced60, module_aiohttp$compression_utils, sizeof(void *)+sizeof(void *));
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
 // Tried code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_1;
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[17]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }

  tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  assert(coroutine_heap->tmp_with_1__source == NULL);
  coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
 }
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
  tmp_expression_value_2 = coroutine_heap->tmp_with_1__source;
  tmp_called_value_1 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[20]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 71;
  tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
  Py_DECREF(tmp_called_value_1);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  assert(coroutine_heap->tmp_with_1__enter == NULL);
  coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
 }
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
  tmp_expression_value_3 = coroutine_heap->tmp_with_1__source;
  tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, mod_consts[21]);
  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  assert(coroutine_heap->tmp_with_1__exit == NULL);
  coroutine_heap->tmp_with_1__exit = tmp_assign_source_3;
 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_expression_value_5;
  coroutine->m_frame->m_frame.f_lineno = 71;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
  tmp_expression_value_5 = coroutine_heap->tmp_with_1__enter;
  tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_enter);
  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_4;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  tmp_assign_source_4 = yield_return_value;
  {
      PyObject *old = coroutine_heap->tmp_with_1__enter;
      assert(old != NULL);
      coroutine_heap->tmp_with_1__enter = tmp_assign_source_4;
      Py_DECREF(old);
  }

 }
 {
  nuitka_bool tmp_assign_source_5;
  tmp_assign_source_5 = NUITKA_BOOL_TRUE;
  coroutine_heap->tmp_with_1__indicator = tmp_assign_source_5;
 }
 // Tried code:
 // Tried code:
 {
  nuitka_bool tmp_condition_result_1;
  int tmp_and_left_truth_1;
  nuitka_bool tmp_and_left_value_1;
  nuitka_bool tmp_and_right_value_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  PyObject *tmp_len_arg_1;
  PyObject *tmp_expression_value_7;
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[17]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 77;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }

  tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[6]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 77;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  Py_DECREF(tmp_cmp_expr_left_1);
  tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 78;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }

  tmp_len_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
  if (tmp_cmp_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 78;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_cmp_expr_left_2);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[17]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 78;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }

  tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[6]);
  if (tmp_cmp_expr_right_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_2);

   coroutine_heap->exception_lineno = 78;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  tmp_and_right_value_1 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  Py_DECREF(tmp_cmp_expr_left_2);
  Py_DECREF(tmp_cmp_expr_right_2);
  if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 78;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
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
 {
  PyObject *tmp_expression_value_8;
  PyObject *tmp_expression_value_9;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_10;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_expression_value_12;
  PyObject *tmp_args_element_value_3;
  coroutine->m_frame->m_frame.f_lineno = 80;
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[15]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 80;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  coroutine->m_frame->m_frame.f_lineno = 80;
  tmp_expression_value_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[23]);
  if (tmp_expression_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 80;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[24]);
  Py_DECREF(tmp_expression_value_10);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 80;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_called_value_2);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[17]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 81;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }

  tmp_expression_value_11 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[5]);
  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_called_value_2);

   coroutine_heap->exception_lineno = 81;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_called_value_2);
   Py_DECREF(tmp_args_element_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[17]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 81;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }

  tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[25]);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_called_value_2);
   Py_DECREF(tmp_args_element_value_1);

   coroutine_heap->exception_lineno = 81;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_2);
   Py_DECREF(tmp_args_element_value_1);
   Py_DECREF(tmp_args_element_value_2);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 81;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }

  tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 80;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
      tmp_expression_value_9 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_2, call_args);
  }

  Py_DECREF(tmp_called_value_2);
  Py_DECREF(tmp_args_element_value_1);
  Py_DECREF(tmp_args_element_value_2);
  if (tmp_expression_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 80;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  tmp_expression_value_8 = ASYNC_AWAIT(tstate, tmp_expression_value_9, await_normal);
  Py_DECREF(tmp_expression_value_9);
  if (tmp_expression_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 80;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 2;
  coroutine->m_yield_from = tmp_expression_value_8;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_2:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_9, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 80;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  coroutine_heap->tmp_return_value = yield_return_value;
  goto try_return_handler_2;
 }
 branch_no_1:;
 {
  PyObject *tmp_called_value_3;
  PyObject *tmp_expression_value_13;
  PyObject *tmp_args_element_value_4;
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[17]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 83;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }

  tmp_expression_value_13 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[25]);
  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 83;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_3);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 83;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }

  tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 83;
  coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_4);
  Py_DECREF(tmp_called_value_3);
  if (coroutine_heap->tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 83;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_3;
  }
  goto try_return_handler_2;
 }
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Exception handler code:
 try_except_handler_3:;
 coroutine_heap->exception_keeper_type_1 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_1 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_1 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_1 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 // Preserve existing published exception id 1.
 coroutine_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

 if (coroutine_heap->exception_keeper_tb_1 == NULL) {
     coroutine_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
 } else if (coroutine_heap->exception_keeper_lineno_1 != 0) {
     coroutine_heap->exception_keeper_tb_1 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_1, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_1);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_type_1, &coroutine_heap->exception_keeper_value_1, &coroutine_heap->exception_keeper_tb_1);
 // Tried code:
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_3 = PyExc_BaseException;
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
  assert(!(coroutine_heap->tmp_res == -1));
  tmp_condition_result_2 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  nuitka_bool tmp_assign_source_6;
  tmp_assign_source_6 = NUITKA_BOOL_FALSE;
  coroutine_heap->tmp_with_1__indicator = tmp_assign_source_6;
 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_14;
  PyObject *tmp_expression_value_15;
  PyObject *tmp_called_value_4;
  PyObject *tmp_args_element_value_5;
  PyObject *tmp_args_element_value_6;
  PyObject *tmp_args_element_value_7;
  coroutine->m_frame->m_frame.f_lineno = 71;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
  tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
  tmp_args_element_value_5 = EXC_TYPE(PyThreadState_GET());
  tmp_args_element_value_6 = EXC_VALUE(PyThreadState_GET());
  tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
  coroutine->m_frame->m_frame.f_lineno = 71;
  {
      PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
      tmp_expression_value_15 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
  }

  if (tmp_expression_value_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_4;
  }
  tmp_expression_value_14 = ASYNC_AWAIT(tstate, tmp_expression_value_15, await_exit);
  Py_DECREF(tmp_expression_value_15);
  if (tmp_expression_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_4;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_15, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
  SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
  coroutine->m_yield_return_index = 3;
  coroutine->m_yield_from = tmp_expression_value_14;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_3:
  RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_3, sizeof(bool), &tmp_expression_value_15, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), &tmp_args_element_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_4;
  }
  tmp_operand_value_1 = yield_return_value;
  coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_4;
  }
  tmp_condition_result_3 = (coroutine_heap->tmp_res == 0) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 71;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "cc";
 goto try_except_handler_4;
 branch_no_3:;
 goto branch_end_2;
 branch_no_2:;
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 71;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "cc";
 goto try_except_handler_4;
 branch_end_2:;
 goto try_end_1;
 // Exception handler code:
 try_except_handler_4:;
 coroutine_heap->exception_keeper_type_2 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_2 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_2 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_2 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

 goto try_except_handler_2;
 // End of try:
 try_end_1:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

 goto try_end_2;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_2:;
 goto try_end_3;
 // Return handler code:
 try_return_handler_2:;
 {
  PyObject *tmp_expression_value_16;
  PyObject *tmp_expression_value_17;
  PyObject *tmp_called_value_5;
  PyObject *tmp_await_result_1;
  coroutine->m_frame->m_frame.f_lineno = 71;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
  tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
  coroutine->m_frame->m_frame.f_lineno = 71;
  tmp_expression_value_17 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_5, mod_consts[26]);

  if (tmp_expression_value_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  tmp_expression_value_16 = ASYNC_AWAIT(tstate, tmp_expression_value_17, await_exit);
  Py_DECREF(tmp_expression_value_17);
  if (tmp_expression_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_17, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 4;
  coroutine->m_yield_from = tmp_expression_value_16;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_4:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_17, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  tmp_await_result_1 = yield_return_value;
  Py_DECREF(tmp_await_result_1);
 }
 goto try_return_handler_1;
 // Exception handler code:
 try_except_handler_2:;
 coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 {
  bool tmp_condition_result_4;
  nuitka_bool tmp_cmp_expr_left_4;
  nuitka_bool tmp_cmp_expr_right_4;
  assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_4 = coroutine_heap->tmp_with_1__indicator;
  tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
  tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_expression_value_18;
  PyObject *tmp_expression_value_19;
  PyObject *tmp_called_value_6;
  PyObject *tmp_await_result_2;
  coroutine->m_frame->m_frame.f_lineno = 71;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
  tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
  coroutine->m_frame->m_frame.f_lineno = 71;
  tmp_expression_value_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_6, mod_consts[26]);

  if (tmp_expression_value_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

   Py_DECREF(coroutine_heap->exception_keeper_type_3);
   Py_XDECREF(coroutine_heap->exception_keeper_value_3);
   Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  tmp_expression_value_18 = ASYNC_AWAIT(tstate, tmp_expression_value_19, await_exit);
  Py_DECREF(tmp_expression_value_19);
  if (tmp_expression_value_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

   Py_DECREF(coroutine_heap->exception_keeper_type_3);
   Py_XDECREF(coroutine_heap->exception_keeper_value_3);
   Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), NULL);
  SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
  coroutine->m_yield_return_index = 5;
  coroutine->m_yield_from = tmp_expression_value_18;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_5:
  RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

   Py_DECREF(coroutine_heap->exception_keeper_type_3);
   Py_XDECREF(coroutine_heap->exception_keeper_value_3);
   Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

   coroutine_heap->exception_lineno = 71;
   coroutine_heap->type_description_1 = "cc";
      goto try_except_handler_1;
  }
  tmp_await_result_2 = yield_return_value;
  Py_DECREF(tmp_await_result_2);
 }
 branch_no_4:;
 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

 goto try_except_handler_1;
 // End of try:
 try_end_3:;
 goto try_end_4;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
 Py_DECREF(coroutine_heap->tmp_with_1__source);
 coroutine_heap->tmp_with_1__source = NULL;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
 Py_DECREF(coroutine_heap->tmp_with_1__enter);
 coroutine_heap->tmp_with_1__enter = NULL;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
 Py_DECREF(coroutine_heap->tmp_with_1__exit);
 coroutine_heap->tmp_with_1__exit = NULL;
 goto frame_return_exit_1;
 // Exception handler code:
 try_except_handler_1:;
 coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 Py_XDECREF(coroutine_heap->tmp_with_1__source);
 coroutine_heap->tmp_with_1__source = NULL;
 Py_XDECREF(coroutine_heap->tmp_with_1__enter);
 coroutine_heap->tmp_with_1__enter = NULL;
 Py_XDECREF(coroutine_heap->tmp_with_1__exit);
 coroutine_heap->tmp_with_1__exit = NULL;
 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_4;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_4;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_4;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_4;

 goto frame_exception_exit_1;
 // End of try:
 try_end_4:;

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

 goto function_return_exit;

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
      coroutine->m_closure[1],
      coroutine->m_closure[0]
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
 goto function_exception_exit;

 frame_no_exception_1:;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
 Py_DECREF(coroutine_heap->tmp_with_1__source);
 coroutine_heap->tmp_with_1__source = NULL;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
 Py_DECREF(coroutine_heap->tmp_with_1__enter);
 coroutine_heap->tmp_with_1__enter = NULL;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
 Py_DECREF(coroutine_heap->tmp_with_1__exit);
 coroutine_heap->tmp_with_1__exit = NULL;
 coroutine_heap->tmp_return_value = Py_None;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_aiohttp$compression_utils$$$function__5_compress$$$coroutine__1_compress(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$compression_utils$$$function__5_compress$$$coroutine__1_compress_context,
        module_aiohttp$compression_utils,
        mod_consts[19],
        mod_consts[27],
        codeobj_657131784d71b98430272c30504ced60,
        closure,
        2,
#if 1
        sizeof(struct aiohttp$compression_utils$$$function__5_compress$$$coroutine__1_compress_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$compression_utils$$$function__6_flush(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_mode = python_pars[1];
 struct Nuitka_FrameObject *frame_04dd628ae10e642888981d463cff09b3;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_04dd628ae10e642888981d463cff09b3 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_04dd628ae10e642888981d463cff09b3)) {
     Py_XDECREF(cache_frame_04dd628ae10e642888981d463cff09b3);

#if _DEBUG_REFCOUNTS
     if (cache_frame_04dd628ae10e642888981d463cff09b3 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_04dd628ae10e642888981d463cff09b3 = MAKE_FUNCTION_FRAME(tstate, codeobj_04dd628ae10e642888981d463cff09b3, module_aiohttp$compression_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_04dd628ae10e642888981d463cff09b3->m_type_description == NULL);
 frame_04dd628ae10e642888981d463cff09b3 = cache_frame_04dd628ae10e642888981d463cff09b3;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_04dd628ae10e642888981d463cff09b3);
 assert(Py_REFCNT(frame_04dd628ae10e642888981d463cff09b3) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_args_element_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_mode);
  tmp_args_element_value_1 = par_mode;
  frame_04dd628ae10e642888981d463cff09b3->m_frame.f_lineno = 86;
  tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[28], tmp_args_element_value_1);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
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
     exception_tb = MAKE_TRACEBACK(frame_04dd628ae10e642888981d463cff09b3, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_04dd628ae10e642888981d463cff09b3->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_04dd628ae10e642888981d463cff09b3, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_04dd628ae10e642888981d463cff09b3,
     type_description_1,
     par_self,
     par_mode
 );


 // Release cached frame if used for exception.
 if (frame_04dd628ae10e642888981d463cff09b3 == cache_frame_04dd628ae10e642888981d463cff09b3) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_04dd628ae10e642888981d463cff09b3);
     cache_frame_04dd628ae10e642888981d463cff09b3 = NULL;
 }

 assertFrameObject(frame_04dd628ae10e642888981d463cff09b3);

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
 CHECK_OBJECT(par_mode);
 Py_DECREF(par_mode);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_mode);
 Py_DECREF(par_mode);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$compression_utils$$$function__7___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_encoding = python_pars[1];
 PyObject *par_suppress_deflate_header = python_pars[2];
 PyObject *par_executor = python_pars[3];
 PyObject *par_max_sync_chunk_size = python_pars[4];
 struct Nuitka_FrameObject *frame_bdde3c8ea77db1c8d89a631996439471;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_bdde3c8ea77db1c8d89a631996439471 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_bdde3c8ea77db1c8d89a631996439471)) {
     Py_XDECREF(cache_frame_bdde3c8ea77db1c8d89a631996439471);

#if _DEBUG_REFCOUNTS
     if (cache_frame_bdde3c8ea77db1c8d89a631996439471 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_bdde3c8ea77db1c8d89a631996439471 = MAKE_FUNCTION_FRAME(tstate, codeobj_bdde3c8ea77db1c8d89a631996439471, module_aiohttp$compression_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_bdde3c8ea77db1c8d89a631996439471->m_type_description == NULL);
 frame_bdde3c8ea77db1c8d89a631996439471 = cache_frame_bdde3c8ea77db1c8d89a631996439471;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_bdde3c8ea77db1c8d89a631996439471);
 assert(Py_REFCNT(frame_bdde3c8ea77db1c8d89a631996439471) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_type_arg_value_1;
  PyObject *tmp_object_arg_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_kw_call_value_0_1;
  PyObject *tmp_called_value_2;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_kw_call_value_1_1;
  PyObject *tmp_kw_call_value_2_1;
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 97;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_self);
  tmp_object_arg_value_1 = par_self;
  tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_aiohttp$compression_utils, tmp_type_arg_value_1, tmp_object_arg_value_1);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 98;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_encoding);
  tmp_args_element_value_1 = par_encoding;
  CHECK_OBJECT(par_suppress_deflate_header);
  tmp_args_element_value_2 = par_suppress_deflate_header;
  frame_bdde3c8ea77db1c8d89a631996439471->m_frame.f_lineno = 98;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
  }

  if (tmp_kw_call_value_0_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 98;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_executor);
  tmp_kw_call_value_1_1 = par_executor;
  CHECK_OBJECT(par_max_sync_chunk_size);
  tmp_kw_call_value_2_1 = par_max_sync_chunk_size;
  frame_bdde3c8ea77db1c8d89a631996439471->m_frame.f_lineno = 97;
  {
      PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

      tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[10]);
  }

  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_kw_call_value_0_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_value_3;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_kw_call_value_0_2;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_assattr_target_1;
  tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[2]);

  if (unlikely(tmp_expression_value_2 == NULL)) {
      tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
  }

  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[29]);
  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[4]);
  if (tmp_kw_call_value_0_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_3);

   exception_lineno = 102;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  frame_bdde3c8ea77db1c8d89a631996439471->m_frame.f_lineno = 102;
  {
      PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

      tmp_assattr_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[30]);
  }

  Py_DECREF(tmp_called_value_3);
  Py_DECREF(tmp_kw_call_value_0_2);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_bdde3c8ea77db1c8d89a631996439471, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_bdde3c8ea77db1c8d89a631996439471->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_bdde3c8ea77db1c8d89a631996439471, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_bdde3c8ea77db1c8d89a631996439471,
     type_description_1,
     par_self,
     par_encoding,
     par_suppress_deflate_header,
     par_executor,
     par_max_sync_chunk_size,
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_bdde3c8ea77db1c8d89a631996439471 == cache_frame_bdde3c8ea77db1c8d89a631996439471) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_bdde3c8ea77db1c8d89a631996439471);
     cache_frame_bdde3c8ea77db1c8d89a631996439471 = NULL;
 }

 assertFrameObject(frame_bdde3c8ea77db1c8d89a631996439471);

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
 CHECK_OBJECT(par_encoding);
 Py_DECREF(par_encoding);
 CHECK_OBJECT(par_suppress_deflate_header);
 Py_DECREF(par_suppress_deflate_header);
 CHECK_OBJECT(par_executor);
 Py_DECREF(par_executor);
 CHECK_OBJECT(par_max_sync_chunk_size);
 Py_DECREF(par_max_sync_chunk_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_encoding);
 Py_DECREF(par_encoding);
 CHECK_OBJECT(par_suppress_deflate_header);
 Py_DECREF(par_suppress_deflate_header);
 CHECK_OBJECT(par_executor);
 Py_DECREF(par_executor);
 CHECK_OBJECT(par_max_sync_chunk_size);
 Py_DECREF(par_max_sync_chunk_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$compression_utils$$$function__8_decompress_sync(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_data = python_pars[1];
 PyObject *par_max_length = python_pars[2];
 struct Nuitka_FrameObject *frame_4971b3e00b900054b625c4388082e955;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_4971b3e00b900054b625c4388082e955 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_4971b3e00b900054b625c4388082e955)) {
     Py_XDECREF(cache_frame_4971b3e00b900054b625c4388082e955);

#if _DEBUG_REFCOUNTS
     if (cache_frame_4971b3e00b900054b625c4388082e955 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_4971b3e00b900054b625c4388082e955 = MAKE_FUNCTION_FRAME(tstate, codeobj_4971b3e00b900054b625c4388082e955, module_aiohttp$compression_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_4971b3e00b900054b625c4388082e955->m_type_description == NULL);
 frame_4971b3e00b900054b625c4388082e955 = cache_frame_4971b3e00b900054b625c4388082e955;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_4971b3e00b900054b625c4388082e955);
 assert(Py_REFCNT(frame_4971b3e00b900054b625c4388082e955) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[31]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_data);
  tmp_args_element_value_1 = par_data;
  CHECK_OBJECT(par_max_length);
  tmp_args_element_value_2 = par_max_length;
  frame_4971b3e00b900054b625c4388082e955->m_frame.f_lineno = 105;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_return_value = CALL_METHOD_WITH_ARGS2(
          tstate,
          tmp_called_instance_1,
          mod_consts[32],
          call_args
      );
  }

  Py_DECREF(tmp_called_instance_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
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
     exception_tb = MAKE_TRACEBACK(frame_4971b3e00b900054b625c4388082e955, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_4971b3e00b900054b625c4388082e955->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_4971b3e00b900054b625c4388082e955, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_4971b3e00b900054b625c4388082e955,
     type_description_1,
     par_self,
     par_data,
     par_max_length
 );


 // Release cached frame if used for exception.
 if (frame_4971b3e00b900054b625c4388082e955 == cache_frame_4971b3e00b900054b625c4388082e955) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_4971b3e00b900054b625c4388082e955);
     cache_frame_4971b3e00b900054b625c4388082e955 = NULL;
 }

 assertFrameObject(frame_4971b3e00b900054b625c4388082e955);

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
 CHECK_OBJECT(par_data);
 Py_DECREF(par_data);
 CHECK_OBJECT(par_max_length);
 Py_DECREF(par_max_length);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_data);
 Py_DECREF(par_data);
 CHECK_OBJECT(par_max_length);
 Py_DECREF(par_max_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$compression_utils$$$function__9_decompress(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[1]);
 struct Nuitka_CellObject *par_max_length = Nuitka_Cell_New1(python_pars[2]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[3];

  tmp_closure_1[0] = par_data;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_max_length;
  Py_INCREF(tmp_closure_1[1]);
  tmp_closure_1[2] = par_self;
  Py_INCREF(tmp_closure_1[2]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$compression_utils$$$function__9_decompress$$$coroutine__1_decompress(tstate, tmp_closure_1);

  goto function_return_exit;
 }

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_data);
 Py_DECREF(par_data);
 CHECK_OBJECT(par_max_length);
 Py_DECREF(par_max_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$compression_utils$$$function__9_decompress$$$coroutine__1_decompress_locals {
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 PyObject *tmp_return_value;
 char yield_tmps[1024];
};
#endif

static PyObject *aiohttp$compression_utils$$$function__9_decompress$$$coroutine__1_decompress_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$compression_utils$$$function__9_decompress$$$coroutine__1_decompress_locals *coroutine_heap = (struct aiohttp$compression_utils$$$function__9_decompress$$$coroutine__1_decompress_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 coroutine_heap->type_description_1 = NULL;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;
 coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_4008589cd9520ecfc9b76c8e97fa17cb, module_aiohttp$compression_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
  nuitka_bool tmp_condition_result_1;
  int tmp_and_left_truth_1;
  nuitka_bool tmp_and_left_value_1;
  nuitka_bool tmp_and_right_value_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  PyObject *tmp_len_arg_1;
  PyObject *tmp_expression_value_2;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[17]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 109;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 109;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  Py_DECREF(tmp_cmp_expr_left_1);
  tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 110;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_len_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
  if (tmp_cmp_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 110;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
   Py_DECREF(tmp_cmp_expr_left_2);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[17]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 110;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
  if (tmp_cmp_expr_right_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_2);

   coroutine_heap->exception_lineno = 110;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_1 = RICH_COMPARE_GT_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  Py_DECREF(tmp_cmp_expr_left_2);
  Py_DECREF(tmp_cmp_expr_right_2);
  if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 110;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
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
 {
  PyObject *tmp_expression_value_3;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_args_element_value_4;
  coroutine->m_frame->m_frame.f_lineno = 112;
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[15]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 112;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 112;
  tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[23]);
  if (tmp_expression_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 112;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[24]);
  Py_DECREF(tmp_expression_value_5);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 112;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[17]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 113;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[5]);
  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_called_value_1);

   coroutine_heap->exception_lineno = 113;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   Py_DECREF(tmp_args_element_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[17]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 113;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[33]);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_called_value_1);
   Py_DECREF(tmp_args_element_value_1);

   coroutine_heap->exception_lineno = 113;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   Py_DECREF(tmp_args_element_value_1);
   Py_DECREF(tmp_args_element_value_2);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 113;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   Py_DECREF(tmp_args_element_value_1);
   Py_DECREF(tmp_args_element_value_2);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[34]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 113;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  coroutine->m_frame->m_frame.f_lineno = 112;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
      tmp_expression_value_4 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_element_value_1);
  Py_DECREF(tmp_args_element_value_2);
  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 112;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_3 = ASYNC_AWAIT(tstate, tmp_expression_value_4, await_normal);
  Py_DECREF(tmp_expression_value_4);
  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 112;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_3;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_4, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_expression_value_6, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 112;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  coroutine_heap->tmp_return_value = yield_return_value;
  goto frame_return_exit_1;
 }
 branch_no_1:;
 {
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_args_element_value_5;
  PyObject *tmp_args_element_value_6;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[17]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 115;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[33]);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 115;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_2);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[22]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 115;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_called_value_2);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[34]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 115;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_6 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  coroutine->m_frame->m_frame.f_lineno = 115;
  {
      PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
      coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
  }

  Py_DECREF(tmp_called_value_2);
  if (coroutine_heap->tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 115;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  goto frame_return_exit_1;
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

 goto function_return_exit;

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
      coroutine->m_closure[2],
      coroutine->m_closure[0],
      coroutine->m_closure[1]
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
 goto function_exception_exit;

 frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");

    function_exception_exit:

    assert(coroutine_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, coroutine_heap->exception_type, coroutine_heap->exception_value, coroutine_heap->exception_tb);
    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_aiohttp$compression_utils$$$function__9_decompress$$$coroutine__1_decompress(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$compression_utils$$$function__9_decompress$$$coroutine__1_decompress_context,
        module_aiohttp$compression_utils,
        mod_consts[32],
        mod_consts[35],
        codeobj_4008589cd9520ecfc9b76c8e97fa17cb,
        closure,
        3,
#if 1
        sizeof(struct aiohttp$compression_utils$$$function__9_decompress$$$coroutine__1_decompress_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$compression_utils$$$function__10_flush(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_length = python_pars[1];
 struct Nuitka_FrameObject *frame_92f1c43cdc649ba4c8b9f22fc0cafe60;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_92f1c43cdc649ba4c8b9f22fc0cafe60 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_92f1c43cdc649ba4c8b9f22fc0cafe60)) {
     Py_XDECREF(cache_frame_92f1c43cdc649ba4c8b9f22fc0cafe60);

#if _DEBUG_REFCOUNTS
     if (cache_frame_92f1c43cdc649ba4c8b9f22fc0cafe60 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_92f1c43cdc649ba4c8b9f22fc0cafe60 = MAKE_FUNCTION_FRAME(tstate, codeobj_92f1c43cdc649ba4c8b9f22fc0cafe60, module_aiohttp$compression_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_92f1c43cdc649ba4c8b9f22fc0cafe60->m_type_description == NULL);
 frame_92f1c43cdc649ba4c8b9f22fc0cafe60 = cache_frame_92f1c43cdc649ba4c8b9f22fc0cafe60;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_92f1c43cdc649ba4c8b9f22fc0cafe60);
 assert(Py_REFCNT(frame_92f1c43cdc649ba4c8b9f22fc0cafe60) == 2);

 // Framed code:
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_called_instance_2;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_length);
  tmp_cmp_expr_left_1 = par_length;
  tmp_cmp_expr_right_1 = mod_consts[36];
  tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 120;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[31]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 119;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_length);
  tmp_args_element_value_1 = par_length;
  frame_92f1c43cdc649ba4c8b9f22fc0cafe60->m_frame.f_lineno = 119;
  tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[28], tmp_args_element_value_1);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 119;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[31]);
  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 121;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  frame_92f1c43cdc649ba4c8b9f22fc0cafe60->m_frame.f_lineno = 121;
  tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[28]);
  Py_DECREF(tmp_called_instance_2);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 121;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  condexpr_end_1:;
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
     exception_tb = MAKE_TRACEBACK(frame_92f1c43cdc649ba4c8b9f22fc0cafe60, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_92f1c43cdc649ba4c8b9f22fc0cafe60->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_92f1c43cdc649ba4c8b9f22fc0cafe60, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_92f1c43cdc649ba4c8b9f22fc0cafe60,
     type_description_1,
     par_self,
     par_length
 );


 // Release cached frame if used for exception.
 if (frame_92f1c43cdc649ba4c8b9f22fc0cafe60 == cache_frame_92f1c43cdc649ba4c8b9f22fc0cafe60) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_92f1c43cdc649ba4c8b9f22fc0cafe60);
     cache_frame_92f1c43cdc649ba4c8b9f22fc0cafe60 = NULL;
 }

 assertFrameObject(frame_92f1c43cdc649ba4c8b9f22fc0cafe60);

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
 CHECK_OBJECT(par_length);
 Py_DECREF(par_length);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_length);
 Py_DECREF(par_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$compression_utils$$$function__11_eof(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_70a9d78e3a372d314bb35fc1312a2be2;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_70a9d78e3a372d314bb35fc1312a2be2 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_70a9d78e3a372d314bb35fc1312a2be2)) {
     Py_XDECREF(cache_frame_70a9d78e3a372d314bb35fc1312a2be2);

#if _DEBUG_REFCOUNTS
     if (cache_frame_70a9d78e3a372d314bb35fc1312a2be2 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_70a9d78e3a372d314bb35fc1312a2be2 = MAKE_FUNCTION_FRAME(tstate, codeobj_70a9d78e3a372d314bb35fc1312a2be2, module_aiohttp$compression_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_70a9d78e3a372d314bb35fc1312a2be2->m_type_description == NULL);
 frame_70a9d78e3a372d314bb35fc1312a2be2 = cache_frame_70a9d78e3a372d314bb35fc1312a2be2;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_70a9d78e3a372d314bb35fc1312a2be2);
 assert(Py_REFCNT(frame_70a9d78e3a372d314bb35fc1312a2be2) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[31]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 126;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[37]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 126;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
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
     exception_tb = MAKE_TRACEBACK(frame_70a9d78e3a372d314bb35fc1312a2be2, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_70a9d78e3a372d314bb35fc1312a2be2->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_70a9d78e3a372d314bb35fc1312a2be2, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_70a9d78e3a372d314bb35fc1312a2be2,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_70a9d78e3a372d314bb35fc1312a2be2 == cache_frame_70a9d78e3a372d314bb35fc1312a2be2) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_70a9d78e3a372d314bb35fc1312a2be2);
     cache_frame_70a9d78e3a372d314bb35fc1312a2be2 = NULL;
 }

 assertFrameObject(frame_70a9d78e3a372d314bb35fc1312a2be2);

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


static PyObject *impl_aiohttp$compression_utils$$$function__12_unconsumed_tail(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_c4acc14a2b2eba93d46b4e4eb265e428;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_c4acc14a2b2eba93d46b4e4eb265e428 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_c4acc14a2b2eba93d46b4e4eb265e428)) {
     Py_XDECREF(cache_frame_c4acc14a2b2eba93d46b4e4eb265e428);

#if _DEBUG_REFCOUNTS
     if (cache_frame_c4acc14a2b2eba93d46b4e4eb265e428 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_c4acc14a2b2eba93d46b4e4eb265e428 = MAKE_FUNCTION_FRAME(tstate, codeobj_c4acc14a2b2eba93d46b4e4eb265e428, module_aiohttp$compression_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_c4acc14a2b2eba93d46b4e4eb265e428->m_type_description == NULL);
 frame_c4acc14a2b2eba93d46b4e4eb265e428 = cache_frame_c4acc14a2b2eba93d46b4e4eb265e428;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_c4acc14a2b2eba93d46b4e4eb265e428);
 assert(Py_REFCNT(frame_c4acc14a2b2eba93d46b4e4eb265e428) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[31]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 130;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[38]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 130;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
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
     exception_tb = MAKE_TRACEBACK(frame_c4acc14a2b2eba93d46b4e4eb265e428, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_c4acc14a2b2eba93d46b4e4eb265e428->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_c4acc14a2b2eba93d46b4e4eb265e428, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_c4acc14a2b2eba93d46b4e4eb265e428,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_c4acc14a2b2eba93d46b4e4eb265e428 == cache_frame_c4acc14a2b2eba93d46b4e4eb265e428) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_c4acc14a2b2eba93d46b4e4eb265e428);
     cache_frame_c4acc14a2b2eba93d46b4e4eb265e428 = NULL;
 }

 assertFrameObject(frame_c4acc14a2b2eba93d46b4e4eb265e428);

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


static PyObject *impl_aiohttp$compression_utils$$$function__13_unused_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_ce38d3056564dd07bcd4b84b403094ed;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_ce38d3056564dd07bcd4b84b403094ed = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_ce38d3056564dd07bcd4b84b403094ed)) {
     Py_XDECREF(cache_frame_ce38d3056564dd07bcd4b84b403094ed);

#if _DEBUG_REFCOUNTS
     if (cache_frame_ce38d3056564dd07bcd4b84b403094ed == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_ce38d3056564dd07bcd4b84b403094ed = MAKE_FUNCTION_FRAME(tstate, codeobj_ce38d3056564dd07bcd4b84b403094ed, module_aiohttp$compression_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_ce38d3056564dd07bcd4b84b403094ed->m_type_description == NULL);
 frame_ce38d3056564dd07bcd4b84b403094ed = cache_frame_ce38d3056564dd07bcd4b84b403094ed;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_ce38d3056564dd07bcd4b84b403094ed);
 assert(Py_REFCNT(frame_ce38d3056564dd07bcd4b84b403094ed) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[31]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 134;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[39]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 134;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
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
     exception_tb = MAKE_TRACEBACK(frame_ce38d3056564dd07bcd4b84b403094ed, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_ce38d3056564dd07bcd4b84b403094ed->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_ce38d3056564dd07bcd4b84b403094ed, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_ce38d3056564dd07bcd4b84b403094ed,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_ce38d3056564dd07bcd4b84b403094ed == cache_frame_ce38d3056564dd07bcd4b84b403094ed) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_ce38d3056564dd07bcd4b84b403094ed);
     cache_frame_ce38d3056564dd07bcd4b84b403094ed = NULL;
 }

 assertFrameObject(frame_ce38d3056564dd07bcd4b84b403094ed);

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


static PyObject *impl_aiohttp$compression_utils$$$function__14___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_15d6d9b82424fd9f02e35abbaac7a194;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_15d6d9b82424fd9f02e35abbaac7a194 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_15d6d9b82424fd9f02e35abbaac7a194)) {
     Py_XDECREF(cache_frame_15d6d9b82424fd9f02e35abbaac7a194);

#if _DEBUG_REFCOUNTS
     if (cache_frame_15d6d9b82424fd9f02e35abbaac7a194 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_15d6d9b82424fd9f02e35abbaac7a194 = MAKE_FUNCTION_FRAME(tstate, codeobj_15d6d9b82424fd9f02e35abbaac7a194, module_aiohttp$compression_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_15d6d9b82424fd9f02e35abbaac7a194->m_type_description == NULL);
 frame_15d6d9b82424fd9f02e35abbaac7a194 = cache_frame_15d6d9b82424fd9f02e35abbaac7a194;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_15d6d9b82424fd9f02e35abbaac7a194);
 assert(Py_REFCNT(frame_15d6d9b82424fd9f02e35abbaac7a194) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_operand_value_1;
  tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[40]);

  if (unlikely(tmp_operand_value_1 == NULL)) {
      tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
  }

  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 142;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 142;
   type_description_1 = "o";
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
  PyObject *tmp_make_exception_arg_1;
  tmp_make_exception_arg_1 = mod_consts[41];
  frame_15d6d9b82424fd9f02e35abbaac7a194->m_frame.f_lineno = 143;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  exception_type = tmp_raise_type_1;
  exception_lineno = 143;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "o";
  goto frame_exception_exit_1;
 }
 branch_no_1:;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_assattr_target_1;
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[42]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 147;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_15d6d9b82424fd9f02e35abbaac7a194->m_frame.f_lineno = 147;
  tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[43]);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 147;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[44], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 147;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_15d6d9b82424fd9f02e35abbaac7a194, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_15d6d9b82424fd9f02e35abbaac7a194->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_15d6d9b82424fd9f02e35abbaac7a194, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_15d6d9b82424fd9f02e35abbaac7a194,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_15d6d9b82424fd9f02e35abbaac7a194 == cache_frame_15d6d9b82424fd9f02e35abbaac7a194) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_15d6d9b82424fd9f02e35abbaac7a194);
     cache_frame_15d6d9b82424fd9f02e35abbaac7a194 = NULL;
 }

 assertFrameObject(frame_15d6d9b82424fd9f02e35abbaac7a194);

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


static PyObject *impl_aiohttp$compression_utils$$$function__15_decompress_sync(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_data = python_pars[1];
 struct Nuitka_FrameObject *frame_2f41e450f8ca9b953d21272320a6dfab;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_2f41e450f8ca9b953d21272320a6dfab = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_2f41e450f8ca9b953d21272320a6dfab)) {
     Py_XDECREF(cache_frame_2f41e450f8ca9b953d21272320a6dfab);

#if _DEBUG_REFCOUNTS
     if (cache_frame_2f41e450f8ca9b953d21272320a6dfab == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_2f41e450f8ca9b953d21272320a6dfab = MAKE_FUNCTION_FRAME(tstate, codeobj_2f41e450f8ca9b953d21272320a6dfab, module_aiohttp$compression_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_2f41e450f8ca9b953d21272320a6dfab->m_type_description == NULL);
 frame_2f41e450f8ca9b953d21272320a6dfab = cache_frame_2f41e450f8ca9b953d21272320a6dfab;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_2f41e450f8ca9b953d21272320a6dfab);
 assert(Py_REFCNT(frame_2f41e450f8ca9b953d21272320a6dfab) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[44]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 150;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[32]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 150;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_args_element_value_3;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[45]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 151;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_1 = (PyObject *)&PyBytes_Type;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[44]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 151;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_data);
  tmp_args_element_value_3 = par_data;
  frame_2f41e450f8ca9b953d21272320a6dfab->m_frame.f_lineno = 151;
  tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[32], tmp_args_element_value_3);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 151;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  frame_2f41e450f8ca9b953d21272320a6dfab->m_frame.f_lineno = 151;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_args_element_value_2);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 151;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  goto frame_return_exit_1;
 }
 branch_no_1:;
 {
  PyObject *tmp_called_value_2;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_args_element_value_5;
  PyObject *tmp_called_instance_2;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_args_element_value_6;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[45]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 152;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_4 = (PyObject *)&PyBytes_Type;
  CHECK_OBJECT(par_self);
  tmp_expression_value_4 = par_self;
  tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[44]);
  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 152;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_data);
  tmp_args_element_value_6 = par_data;
  frame_2f41e450f8ca9b953d21272320a6dfab->m_frame.f_lineno = 152;
  tmp_args_element_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[46], tmp_args_element_value_6);
  Py_DECREF(tmp_called_instance_2);
  if (tmp_args_element_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 152;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  frame_2f41e450f8ca9b953d21272320a6dfab->m_frame.f_lineno = 152;
  {
      PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
      tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
  }

  Py_DECREF(tmp_args_element_value_5);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 152;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
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
     exception_tb = MAKE_TRACEBACK(frame_2f41e450f8ca9b953d21272320a6dfab, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_2f41e450f8ca9b953d21272320a6dfab->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_2f41e450f8ca9b953d21272320a6dfab, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_2f41e450f8ca9b953d21272320a6dfab,
     type_description_1,
     par_self,
     par_data
 );


 // Release cached frame if used for exception.
 if (frame_2f41e450f8ca9b953d21272320a6dfab == cache_frame_2f41e450f8ca9b953d21272320a6dfab) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_2f41e450f8ca9b953d21272320a6dfab);
     cache_frame_2f41e450f8ca9b953d21272320a6dfab = NULL;
 }

 assertFrameObject(frame_2f41e450f8ca9b953d21272320a6dfab);

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
 CHECK_OBJECT(par_data);
 Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_data);
 Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$compression_utils$$$function__16_flush(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_a19110fc764272f39f936db4aed4e881;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_a19110fc764272f39f936db4aed4e881 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_a19110fc764272f39f936db4aed4e881)) {
     Py_XDECREF(cache_frame_a19110fc764272f39f936db4aed4e881);

#if _DEBUG_REFCOUNTS
     if (cache_frame_a19110fc764272f39f936db4aed4e881 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_a19110fc764272f39f936db4aed4e881 = MAKE_FUNCTION_FRAME(tstate, codeobj_a19110fc764272f39f936db4aed4e881, module_aiohttp$compression_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_a19110fc764272f39f936db4aed4e881->m_type_description == NULL);
 frame_a19110fc764272f39f936db4aed4e881 = cache_frame_a19110fc764272f39f936db4aed4e881;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_a19110fc764272f39f936db4aed4e881);
 assert(Py_REFCNT(frame_a19110fc764272f39f936db4aed4e881) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[44]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 155;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[28]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 155;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_3;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[45]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[45]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 156;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_1 = (PyObject *)&PyBytes_Type;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[44]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 156;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_a19110fc764272f39f936db4aed4e881->m_frame.f_lineno = 156;
  tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[28]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 156;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_a19110fc764272f39f936db4aed4e881->m_frame.f_lineno = 156;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_args_element_value_2);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 156;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  goto frame_return_exit_1;
 }
 branch_no_1:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_return_exit_1:

 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto function_return_exit;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_a19110fc764272f39f936db4aed4e881, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_a19110fc764272f39f936db4aed4e881->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_a19110fc764272f39f936db4aed4e881, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_a19110fc764272f39f936db4aed4e881,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_a19110fc764272f39f936db4aed4e881 == cache_frame_a19110fc764272f39f936db4aed4e881) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_a19110fc764272f39f936db4aed4e881);
     cache_frame_a19110fc764272f39f936db4aed4e881 = NULL;
 }

 assertFrameObject(frame_a19110fc764272f39f936db4aed4e881);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto function_exception_exit;
 frame_no_exception_1:;
 tmp_return_value = mod_consts[47];
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



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__10_flush(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__10_flush,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_92f1c43cdc649ba4c8b9f22fc0cafe60,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__11_eof(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__11_eof,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[99],
#endif
        codeobj_70a9d78e3a372d314bb35fc1312a2be2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__12_unconsumed_tail(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__12_unconsumed_tail,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_c4acc14a2b2eba93d46b4e4eb265e428,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__13_unused_data(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__13_unused_data,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[101],
#endif
        codeobj_ce38d3056564dd07bcd4b84b403094ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__14___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__14___init__,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[104],
#endif
        codeobj_15d6d9b82424fd9f02e35abbaac7a194,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__15_decompress_sync(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__15_decompress_sync,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_2f41e450f8ca9b953d21272320a6dfab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__16_flush(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__16_flush,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_a19110fc764272f39f936db4aed4e881,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__1_encoding_to_mode(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__1_encoding_to_mode,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f8738e9185694fc049ce4ed7fe2063d8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__2___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__2___init__,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[72],
#endif
        codeobj_bce035e1a680a21652494c8b79dde141,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__3___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__3___init__,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_b3feb3c80f0b258cd9e5ce14b67f6f32,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__4_compress_sync(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__4_compress_sync,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[88],
#endif
        codeobj_f33aa5c3624fd7cbff5f57c58eba49cc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__5_compress(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__5_compress,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[27],
#endif
        codeobj_657131784d71b98430272c30504ced60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__6_flush(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__6_flush,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_04dd628ae10e642888981d463cff09b3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__7___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__7___init__,
        mod_consts[8],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_bdde3c8ea77db1c8d89a631996439471,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__8_decompress_sync(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__8_decompress_sync,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_4971b3e00b900054b625c4388082e955,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$compression_utils$$$function__9_decompress(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$compression_utils$$$function__9_decompress,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[35],
#endif
        codeobj_4008589cd9520ecfc9b76c8e97fa17cb,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$compression_utils,
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

static function_impl_code const function_table_aiohttp$compression_utils[] = {
 impl_aiohttp$compression_utils$$$function__1_encoding_to_mode,
 impl_aiohttp$compression_utils$$$function__2___init__,
 impl_aiohttp$compression_utils$$$function__3___init__,
 impl_aiohttp$compression_utils$$$function__4_compress_sync,
 impl_aiohttp$compression_utils$$$function__5_compress,
 impl_aiohttp$compression_utils$$$function__6_flush,
 impl_aiohttp$compression_utils$$$function__7___init__,
 impl_aiohttp$compression_utils$$$function__8_decompress_sync,
 impl_aiohttp$compression_utils$$$function__9_decompress,
 impl_aiohttp$compression_utils$$$function__10_flush,
 impl_aiohttp$compression_utils$$$function__11_eof,
 impl_aiohttp$compression_utils$$$function__12_unconsumed_tail,
 impl_aiohttp$compression_utils$$$function__13_unused_data,
 impl_aiohttp$compression_utils$$$function__14___init__,
 impl_aiohttp$compression_utils$$$function__15_decompress_sync,
 impl_aiohttp$compression_utils$$$function__16_flush,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_aiohttp$compression_utils);

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
        module_aiohttp$compression_utils,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_aiohttp$compression_utils,
        sizeof(function_table_aiohttp$compression_utils) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiohttp$compression_utils(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiohttp$compression_utils");

    // Store the module for future use.
    module_aiohttp$compression_utils = module;

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
        PRINT_STRING("aiohttp$compression_utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("aiohttp$compression_utils: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.compression_utils" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initaiohttp$compression_utils\n");

    moduledict_aiohttp$compression_utils = MODULE_DICT(module_aiohttp$compression_utils);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiohttp$compression_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiohttp$compression_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[121]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiohttp$compression_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$compression_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$compression_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiohttp$compression_utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_aiohttp$compression_utils);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
 PyObject *outline_0_var___class__ = NULL;
 struct Nuitka_CellObject *outline_1_var___class__ = NULL;
 struct Nuitka_CellObject *outline_2_var___class__ = NULL;
 PyObject *outline_3_var___class__ = NULL;
 PyObject *tmp_class_creation_1__class_decl_dict = NULL;
 PyObject *tmp_class_creation_1__prepared = NULL;
 PyObject *tmp_class_creation_2__bases = NULL;
 PyObject *tmp_class_creation_2__bases_orig = NULL;
 PyObject *tmp_class_creation_2__class_decl_dict = NULL;
 PyObject *tmp_class_creation_2__metaclass = NULL;
 PyObject *tmp_class_creation_2__prepared = NULL;
 PyObject *tmp_class_creation_3__bases = NULL;
 PyObject *tmp_class_creation_3__bases_orig = NULL;
 PyObject *tmp_class_creation_3__class_decl_dict = NULL;
 PyObject *tmp_class_creation_3__metaclass = NULL;
 PyObject *tmp_class_creation_3__prepared = NULL;
 PyObject *tmp_class_creation_4__class_decl_dict = NULL;
 PyObject *tmp_class_creation_4__prepared = NULL;
 PyObject *tmp_import_from_1__module = NULL;
 struct Nuitka_FrameObject *frame_6ef691fa3711ab2e608a5d7c591f2dcf;
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
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
 int tmp_res;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
 struct Nuitka_ExceptionStackItem exception_preserved_2;
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
 PyObject *locals_aiohttp$compression_utils$$$class__1_ZlibBaseHandler_29 = NULL;
 PyObject *tmp_dictset_value;
 struct Nuitka_FrameObject *frame_fd316158b9e7c518b0aef8a06b6f3b34_2;
 NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
 PyObject *exception_keeper_type_6;
 PyObject *exception_keeper_value_6;
 PyTracebackObject *exception_keeper_tb_6;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
 PyObject *exception_keeper_type_7;
 PyObject *exception_keeper_value_7;
 PyTracebackObject *exception_keeper_tb_7;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
 PyObject *exception_keeper_type_8;
 PyObject *exception_keeper_value_8;
 PyTracebackObject *exception_keeper_tb_8;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
 PyObject *locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41 = NULL;
 struct Nuitka_FrameObject *frame_137dde9c25cbe015d20d4ac5533bc482_3;
 NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
 PyObject *exception_keeper_type_9;
 PyObject *exception_keeper_value_9;
 PyTracebackObject *exception_keeper_tb_9;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
 PyObject *exception_keeper_type_10;
 PyObject *exception_keeper_value_10;
 PyTracebackObject *exception_keeper_tb_10;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
 PyObject *exception_keeper_type_11;
 PyObject *exception_keeper_value_11;
 PyTracebackObject *exception_keeper_tb_11;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
 PyObject *locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89 = NULL;
 struct Nuitka_FrameObject *frame_408e8119a9a7d8366a4fec97ad67af6d_4;
 NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
 PyObject *exception_keeper_type_12;
 PyObject *exception_keeper_value_12;
 PyTracebackObject *exception_keeper_tb_12;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
 PyObject *exception_keeper_type_13;
 PyObject *exception_keeper_value_13;
 PyTracebackObject *exception_keeper_tb_13;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
 PyObject *exception_keeper_type_14;
 PyObject *exception_keeper_value_14;
 PyTracebackObject *exception_keeper_tb_14;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
 PyObject *locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137 = NULL;
 PyObject *exception_keeper_type_15;
 PyObject *exception_keeper_value_15;
 PyTracebackObject *exception_keeper_tb_15;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
 PyObject *exception_keeper_type_16;
 PyObject *exception_keeper_value_16;
 PyTracebackObject *exception_keeper_tb_16;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
 PyObject *exception_keeper_type_17;
 PyObject *exception_keeper_value_17;
 PyTracebackObject *exception_keeper_tb_17;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Module init code if any


    // Module code.
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = module_filename_obj;
  UPDATE_STRING_DICT0(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_2);
 }
 frame_6ef691fa3711ab2e608a5d7c591f2dcf = MAKE_MODULE_FRAME(codeobj_6ef691fa3711ab2e608a5d7c591f2dcf, module_aiohttp$compression_utils);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_6ef691fa3711ab2e608a5d7c591f2dcf);
 assert(Py_REFCNT(frame_6ef691fa3711ab2e608a5d7c591f2dcf) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = module_filename_obj;
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[50]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[51], tmp_assattr_value_1);
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
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[50]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[52], tmp_assattr_value_2);
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
  UPDATE_STRING_DICT0(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[15];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp$compression_utils;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = Py_None;
  tmp_level_value_1 = mod_consts[36];
  frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = 1;
  tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_name_value_2;
  PyObject *tmp_globals_arg_value_2;
  PyObject *tmp_locals_arg_value_2;
  PyObject *tmp_fromlist_value_2;
  PyObject *tmp_level_value_2;
  tmp_name_value_2 = mod_consts[2];
  tmp_globals_arg_value_2 = (PyObject *)moduledict_aiohttp$compression_utils;
  tmp_locals_arg_value_2 = Py_None;
  tmp_fromlist_value_2 = Py_None;
  tmp_level_value_2 = mod_consts[36];
  frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = 2;
  tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
  if (tmp_assign_source_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 2;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
 }
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_import_name_from_1;
  PyObject *tmp_name_value_3;
  PyObject *tmp_globals_arg_value_3;
  PyObject *tmp_locals_arg_value_3;
  PyObject *tmp_fromlist_value_3;
  PyObject *tmp_level_value_3;
  tmp_name_value_3 = mod_consts[54];
  tmp_globals_arg_value_3 = (PyObject *)moduledict_aiohttp$compression_utils;
  tmp_locals_arg_value_3 = Py_None;
  tmp_fromlist_value_3 = mod_consts[55];
  tmp_level_value_3 = mod_consts[36];
  frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = 3;
  tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
  if (tmp_import_name_from_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_1)) {
      tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_1,
          (PyObject *)moduledict_aiohttp$compression_utils,
          mod_consts[56],
          mod_consts[36]
      );
  } else {
      tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[56]);
  }

  Py_DECREF(tmp_import_name_from_1);
  if (tmp_assign_source_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_6);
 }
 {
  PyObject *tmp_assign_source_7;
  tmp_assign_source_7 = IMPORT_HARD_TYPING();
  assert(!(tmp_assign_source_7 == NULL));
  assert(tmp_import_from_1__module == NULL);
  Py_INCREF(tmp_assign_source_7);
  tmp_import_from_1__module = tmp_assign_source_7;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_8;
  PyObject *tmp_import_name_from_2;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_2 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_2)) {
      tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_2,
          (PyObject *)moduledict_aiohttp$compression_utils,
          mod_consts[57],
          mod_consts[36]
      );
  } else {
      tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[57]);
  }

  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 4;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_8);
 }
 {
  PyObject *tmp_assign_source_9;
  PyObject *tmp_import_name_from_3;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_3 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_3)) {
      tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_3,
          (PyObject *)moduledict_aiohttp$compression_utils,
          mod_consts[45],
          mod_consts[36]
      );
  } else {
      tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[45]);
  }

  if (tmp_assign_source_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 4;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_9);
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
 // Tried code:
 // Tried code:
 {
  PyObject *tmp_assign_source_10;
  PyObject *tmp_name_value_4;
  PyObject *tmp_globals_arg_value_4;
  PyObject *tmp_locals_arg_value_4;
  PyObject *tmp_fromlist_value_4;
  PyObject *tmp_level_value_4;
  tmp_name_value_4 = mod_consts[58];
  tmp_globals_arg_value_4 = (PyObject *)moduledict_aiohttp$compression_utils;
  tmp_locals_arg_value_4 = Py_None;
  tmp_fromlist_value_4 = Py_None;
  tmp_level_value_4 = mod_consts[36];
  frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = 8;
  tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_10);
 }
 goto try_end_2;
 // Exception handler code:
 try_except_handler_3:;
 exception_keeper_type_2 = exception_type;
 exception_keeper_value_2 = exception_value;
 exception_keeper_tb_2 = exception_tb;
 exception_keeper_lineno_2 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 // Preserve existing published exception id 1.
 exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_2 == NULL) {
     exception_keeper_tb_2 = MAKE_TRACEBACK(frame_6ef691fa3711ab2e608a5d7c591f2dcf, exception_keeper_lineno_2);
 } else if (exception_keeper_lineno_2 != 0) {
     exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_6ef691fa3711ab2e608a5d7c591f2dcf, exception_keeper_lineno_2);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
 // Tried code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_1 = PyExc_ImportError;
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  assert(!(tmp_res == -1));
  tmp_condition_result_1 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_name_value_5;
  PyObject *tmp_globals_arg_value_5;
  PyObject *tmp_locals_arg_value_5;
  PyObject *tmp_fromlist_value_5;
  PyObject *tmp_level_value_5;
  tmp_name_value_5 = mod_consts[42];
  tmp_globals_arg_value_5 = (PyObject *)moduledict_aiohttp$compression_utils;
  tmp_locals_arg_value_5 = Py_None;
  tmp_fromlist_value_5 = Py_None;
  tmp_level_value_5 = mod_consts[36];
  frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = 10;
  tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_11);
 }
 goto branch_end_1;
 branch_no_1:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 7;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame) frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = exception_tb->tb_lineno;

 goto try_except_handler_4;
 branch_end_1:;
 goto try_end_3;
 // Exception handler code:
 try_except_handler_4:;
 exception_keeper_type_3 = exception_type;
 exception_keeper_value_3 = exception_value;
 exception_keeper_tb_3 = exception_tb;
 exception_keeper_lineno_3 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto try_except_handler_2;
 // End of try:
 try_end_3:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 goto try_end_2;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_2:;
 {
  PyObject *tmp_assign_source_12;
  tmp_assign_source_12 = Py_True;
  UPDATE_STRING_DICT0(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_12);
 }
 goto try_end_4;
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

 // Preserve existing published exception id 2.
 exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_4 == NULL) {
     exception_keeper_tb_4 = MAKE_TRACEBACK(frame_6ef691fa3711ab2e608a5d7c591f2dcf, exception_keeper_lineno_4);
 } else if (exception_keeper_lineno_4 != 0) {
     exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_6ef691fa3711ab2e608a5d7c591f2dcf, exception_keeper_lineno_4);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
 // Tried code:
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_2 = PyExc_ImportError;
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  assert(!(tmp_res == -1));
  tmp_condition_result_2 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_assign_source_13;
  tmp_assign_source_13 = Py_False;
  UPDATE_STRING_DICT0(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_13);
 }
 goto branch_end_2;
 branch_no_2:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 6;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame) frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = exception_tb->tb_lineno;

 goto try_except_handler_5;
 branch_end_2:;
 goto try_end_5;
 // Exception handler code:
 try_except_handler_5:;
 exception_keeper_type_5 = exception_type;
 exception_keeper_value_5 = exception_value;
 exception_keeper_tb_5 = exception_tb;
 exception_keeper_lineno_5 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 // Restore previous exception id 2.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

 // Re-raise.
 exception_type = exception_keeper_type_5;
 exception_value = exception_keeper_value_5;
 exception_tb = exception_keeper_tb_5;
 exception_lineno = exception_keeper_lineno_5;

 goto frame_exception_exit_1;
 // End of try:
 try_end_5:;
 // Restore previous exception id 2.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

 goto try_end_4;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_4:;
 {
  PyObject *tmp_assign_source_14;
  tmp_assign_source_14 = mod_consts[59];
  UPDATE_STRING_DICT0(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_14);
 }
 {
  PyObject *tmp_assign_source_15;
  PyObject *tmp_defaults_1;
  PyObject *tmp_annotations_1;
  PyObject *tmp_dict_key_1;
  PyObject *tmp_dict_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_subscript_value_1;
  tmp_defaults_1 = mod_consts[61];
  tmp_dict_key_1 = mod_consts[62];
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
  }

  assert(!(tmp_expression_value_1 == NULL));
  tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
  tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
  if (tmp_dict_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  tmp_annotations_1 = _PyDict_NewPresized( 3 );
  tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
  Py_DECREF(tmp_dict_value_1);
  assert(!(tmp_res != 0));
  tmp_dict_key_1 = mod_consts[63];
  tmp_dict_value_1 = (PyObject *)&PyBool_Type;
  tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
  assert(!(tmp_res != 0));
  tmp_dict_key_1 = mod_consts[64];
  tmp_dict_value_1 = (PyObject *)&PyLong_Type;
  tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
  assert(!(tmp_res != 0));
  Py_INCREF(tmp_defaults_1);


  tmp_assign_source_15 = MAKE_FUNCTION_aiohttp$compression_utils$$$function__1_encoding_to_mode(tmp_defaults_1, tmp_annotations_1);

  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_15);
 }
 {
  PyObject *tmp_assign_source_16;
  tmp_assign_source_16 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__class_decl_dict == NULL);
  tmp_class_creation_1__class_decl_dict = tmp_assign_source_16;
 }
 {
  PyObject *tmp_assign_source_17;
  tmp_assign_source_17 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_17;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_18;
  {
   PyObject *tmp_set_locals_1;
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_set_locals_1 = tmp_class_creation_1__prepared;
   locals_aiohttp$compression_utils$$$class__1_ZlibBaseHandler_29 = tmp_set_locals_1;
   Py_INCREF(tmp_set_locals_1);
  }
  tmp_dictset_value = mod_consts[65];
  tmp_result = DICT_SET_ITEM(locals_aiohttp$compression_utils$$$class__1_ZlibBaseHandler_29, mod_consts[66], tmp_dictset_value);
  assert(!(tmp_result == false));
  tmp_dictset_value = mod_consts[67];
  tmp_result = DICT_SET_ITEM(locals_aiohttp$compression_utils$$$class__1_ZlibBaseHandler_29, mod_consts[68], tmp_dictset_value);
  assert(!(tmp_result == false));
  // Tried code:
  // Tried code:
  frame_fd316158b9e7c518b0aef8a06b6f3b34_2 = MAKE_CLASS_FRAME(tstate, codeobj_fd316158b9e7c518b0aef8a06b6f3b34, module_aiohttp$compression_utils, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_fd316158b9e7c518b0aef8a06b6f3b34_2);
  assert(Py_REFCNT(frame_fd316158b9e7c518b0aef8a06b6f3b34_2) == 2);

  // Framed code:
  {
   PyObject *tmp_defaults_2;
   PyObject *tmp_tuple_element_1;
   PyObject *tmp_annotations_2;
   PyObject *tmp_dict_key_2;
   PyObject *tmp_dict_value_2;
   tmp_tuple_element_1 = Py_None;
   tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 2);
   PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_1);
   tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[60]);

   if (unlikely(tmp_tuple_element_1 == NULL)) {
       tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
   }

   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 34;
    type_description_2 = "o";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_1);
   goto tuple_build_noexception_1;
   // Exception handling pass through code for tuple_build:
   tuple_build_exception_1:;
   Py_DECREF(tmp_defaults_2);
   goto frame_exception_exit_2;
   // Finished with no exception for tuple_build:
   tuple_build_noexception_1:;
   tmp_dict_key_2 = mod_consts[69];
   tmp_dict_value_2 = (PyObject *)&PyLong_Type;
   tmp_annotations_2 = _PyDict_NewPresized( 3 );
   {
    PyObject *tmp_expression_value_2;
    PyObject *tmp_subscript_value_2;
    PyObject *tmp_expression_value_3;
    PyObject *tmp_subscript_value_3;
    tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
    assert(!(tmp_res != 0));
    tmp_dict_key_2 = mod_consts[70];
    tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57]);

    if (unlikely(tmp_expression_value_2 == NULL)) {
        tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
    }

    if (tmp_expression_value_2 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 33;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_subscript_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[56]);

    if (unlikely(tmp_subscript_value_2 == NULL)) {
        tmp_subscript_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
    }

    if (tmp_subscript_value_2 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 33;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
    if (tmp_dict_value_2 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 33;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
    Py_DECREF(tmp_dict_value_2);
    assert(!(tmp_res != 0));
    tmp_dict_key_2 = mod_consts[71];
    tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57]);

    if (unlikely(tmp_expression_value_3 == NULL)) {
        tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
    }

    if (tmp_expression_value_3 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 34;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_subscript_value_3 = (PyObject *)&PyLong_Type;
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
    if (tmp_dict_value_2 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 34;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
    Py_DECREF(tmp_dict_value_2);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_1;
   // Exception handling pass through code for dict_build:
   dict_build_exception_1:;
   Py_DECREF(tmp_defaults_2);
   Py_DECREF(tmp_annotations_2);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_1:;


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__2___init__(tmp_defaults_2, tmp_annotations_2);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$compression_utils$$$class__1_ZlibBaseHandler_29, mod_consts[8], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 30;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_1;
  frame_exception_exit_2:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_fd316158b9e7c518b0aef8a06b6f3b34_2, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_fd316158b9e7c518b0aef8a06b6f3b34_2->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_fd316158b9e7c518b0aef8a06b6f3b34_2, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_fd316158b9e7c518b0aef8a06b6f3b34_2,
      type_description_2,
      outline_0_var___class__
  );



  assertFrameObject(frame_fd316158b9e7c518b0aef8a06b6f3b34_2);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_1;
  frame_no_exception_1:;
  goto skip_nested_handling_1;
  nested_frame_exit_1:;

  goto try_except_handler_8;
  skip_nested_handling_1:;
  {
   PyObject *tmp_assign_source_19;
   PyObject *tmp_called_value_1;
   PyObject *tmp_args_value_1;
   PyObject *tmp_tuple_element_2;
   PyObject *tmp_kwargs_value_1;
   tmp_called_value_1 = (PyObject *)&PyType_Type;
   tmp_tuple_element_2 = mod_consts[67];
   tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
   tmp_tuple_element_2 = const_tuple_empty;
   PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
   tmp_tuple_element_2 = locals_aiohttp$compression_utils$$$class__1_ZlibBaseHandler_29;
   PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_2);
   CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
   tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
   frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = 29;
   tmp_assign_source_19 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
   Py_DECREF(tmp_args_value_1);
   if (tmp_assign_source_19 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 29;

       goto try_except_handler_8;
   }
   assert(outline_0_var___class__ == NULL);
   outline_0_var___class__ = tmp_assign_source_19;
  }
  CHECK_OBJECT(outline_0_var___class__);
  tmp_assign_source_18 = outline_0_var___class__;
  Py_INCREF(tmp_assign_source_18);
  goto try_return_handler_8;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_8:;
  Py_DECREF(locals_aiohttp$compression_utils$$$class__1_ZlibBaseHandler_29);
  locals_aiohttp$compression_utils$$$class__1_ZlibBaseHandler_29 = NULL;
  goto try_return_handler_7;
  // Exception handler code:
  try_except_handler_8:;
  exception_keeper_type_6 = exception_type;
  exception_keeper_value_6 = exception_value;
  exception_keeper_tb_6 = exception_tb;
  exception_keeper_lineno_6 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$compression_utils$$$class__1_ZlibBaseHandler_29);
  locals_aiohttp$compression_utils$$$class__1_ZlibBaseHandler_29 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_6;
  exception_value = exception_keeper_value_6;
  exception_tb = exception_keeper_tb_6;
  exception_lineno = exception_keeper_lineno_6;

  goto try_except_handler_7;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_7:;
  CHECK_OBJECT(outline_0_var___class__);
  Py_DECREF(outline_0_var___class__);
  outline_0_var___class__ = NULL;
  goto outline_result_1;
  // Exception handler code:
  try_except_handler_7:;
  exception_keeper_type_7 = exception_type;
  exception_keeper_value_7 = exception_value;
  exception_keeper_tb_7 = exception_tb;
  exception_keeper_lineno_7 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_7;
  exception_value = exception_keeper_value_7;
  exception_tb = exception_keeper_tb_7;
  exception_lineno = exception_keeper_lineno_7;

  goto outline_exception_1;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_1:;
  exception_lineno = 29;
  goto try_except_handler_6;
  outline_result_1:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_18);
 }
 goto try_end_6;
 // Exception handler code:
 try_except_handler_6:;
 exception_keeper_type_8 = exception_type;
 exception_keeper_value_8 = exception_value;
 exception_keeper_tb_8 = exception_tb;
 exception_keeper_lineno_8 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
 Py_DECREF(tmp_class_creation_1__class_decl_dict);
 tmp_class_creation_1__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_1__prepared);
 Py_DECREF(tmp_class_creation_1__prepared);
 tmp_class_creation_1__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_8;
 exception_value = exception_keeper_value_8;
 exception_tb = exception_keeper_tb_8;
 exception_lineno = exception_keeper_lineno_8;

 goto frame_exception_exit_1;
 // End of try:
 try_end_6:;
 CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
 Py_DECREF(tmp_class_creation_1__class_decl_dict);
 tmp_class_creation_1__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_1__prepared);
 Py_DECREF(tmp_class_creation_1__prepared);
 tmp_class_creation_1__prepared = NULL;
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_tuple_element_3;
  tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[67]);

  if (unlikely(tmp_tuple_element_3 == NULL)) {
      tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
  }

  assert(!(tmp_tuple_element_3 == NULL));
  tmp_assign_source_20 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_20, 0, tmp_tuple_element_3);
  assert(tmp_class_creation_2__bases_orig == NULL);
  tmp_class_creation_2__bases_orig = tmp_assign_source_20;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_21;
  PyObject *tmp_dircall_arg1_1;
  CHECK_OBJECT(tmp_class_creation_2__bases_orig);
  tmp_dircall_arg1_1 = tmp_class_creation_2__bases_orig;
  Py_INCREF(tmp_dircall_arg1_1);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
      tmp_assign_source_21 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_9;
  }
  assert(tmp_class_creation_2__bases == NULL);
  tmp_class_creation_2__bases = tmp_assign_source_21;
 }
 {
  PyObject *tmp_assign_source_22;
  tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_2__class_decl_dict == NULL);
  tmp_class_creation_2__class_decl_dict = tmp_assign_source_22;
 }
 {
  PyObject *tmp_assign_source_23;
  PyObject *tmp_metaclass_value_1;
  nuitka_bool tmp_condition_result_3;
  int tmp_truth_name_1;
  PyObject *tmp_type_arg_1;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_subscript_value_4;
  PyObject *tmp_bases_value_1;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_9;
  }
  tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_expression_value_4 = tmp_class_creation_2__bases;
  tmp_subscript_value_4 = mod_consts[36];
  tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_4, 0);
  if (tmp_type_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_9;
  }
  tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
  Py_DECREF(tmp_type_arg_1);
  if (tmp_metaclass_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_9;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_1);
  condexpr_end_1:;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_bases_value_1 = tmp_class_creation_2__bases;
  tmp_assign_source_23 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
  Py_DECREF(tmp_metaclass_value_1);
  if (tmp_assign_source_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_9;
  }
  assert(tmp_class_creation_2__metaclass == NULL);
  tmp_class_creation_2__metaclass = tmp_assign_source_23;
 }
 {
  bool tmp_condition_result_4;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_5 = tmp_class_creation_2__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[73]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_9;
  }
  tmp_condition_result_4 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_assign_source_24;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_args_value_2;
  PyObject *tmp_tuple_element_4;
  PyObject *tmp_kwargs_value_2;
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_6 = tmp_class_creation_2__metaclass;
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[73]);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_9;
  }
  tmp_tuple_element_4 = mod_consts[74];
  tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_tuple_element_4 = tmp_class_creation_2__bases;
  PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
  CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
  tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
  frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = 41;
  tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
  Py_DECREF(tmp_called_value_2);
  Py_DECREF(tmp_args_value_2);
  if (tmp_assign_source_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_9;
  }
  assert(tmp_class_creation_2__prepared == NULL);
  tmp_class_creation_2__prepared = tmp_assign_source_24;
 }
 {
  bool tmp_condition_result_5;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_7;
  CHECK_OBJECT(tmp_class_creation_2__prepared);
  tmp_expression_value_7 = tmp_class_creation_2__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_7, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_9;
  }
  tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  assert(!(tmp_res == -1));
  tmp_condition_result_5 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_5 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_raise_type_1;
  PyObject *tmp_raise_value_1;
  PyObject *tmp_mod_expr_left_1;
  PyObject *tmp_mod_expr_right_1;
  PyObject *tmp_tuple_element_5;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_name_value_6;
  PyObject *tmp_default_value_1;
  tmp_raise_type_1 = PyExc_TypeError;
  tmp_mod_expr_left_1 = mod_consts[76];
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_8 = tmp_class_creation_2__metaclass;
  tmp_name_value_6 = mod_consts[77];
  tmp_default_value_1 = mod_consts[78];
  tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_8, tmp_name_value_6, tmp_default_value_1);
  if (tmp_tuple_element_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_9;
  }
  tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_9;
   PyObject *tmp_type_arg_2;
   PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_5);
   CHECK_OBJECT(tmp_class_creation_2__prepared);
   tmp_type_arg_2 = tmp_class_creation_2__prepared;
   tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_2);
   assert(!(tmp_expression_value_9 == NULL));
   tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[77]);
   Py_DECREF(tmp_expression_value_9);
   if (tmp_tuple_element_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 41;

       goto tuple_build_exception_2;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_5);
  }
  goto tuple_build_noexception_2;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_2:;
  Py_DECREF(tmp_mod_expr_right_1);
  goto try_except_handler_9;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_2:;
  tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
  Py_DECREF(tmp_mod_expr_right_1);
  if (tmp_raise_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_9;
  }
  exception_type = tmp_raise_type_1;
  Py_INCREF(tmp_raise_type_1);
  exception_value = tmp_raise_value_1;
  exception_lineno = 41;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_9;
 }
 branch_no_4:;
 goto branch_end_3;
 branch_no_3:;
 {
  PyObject *tmp_assign_source_25;
  tmp_assign_source_25 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_2__prepared == NULL);
  tmp_class_creation_2__prepared = tmp_assign_source_25;
 }
 branch_end_3:;
 {
  PyObject *tmp_assign_source_26;
  outline_1_var___class__ = Nuitka_Cell_NewEmpty();
  {
   PyObject *tmp_set_locals_2;
   CHECK_OBJECT(tmp_class_creation_2__prepared);
   tmp_set_locals_2 = tmp_class_creation_2__prepared;
   locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41 = tmp_set_locals_2;
   Py_INCREF(tmp_set_locals_2);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[65];
  tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[66], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_11;
  }
  tmp_dictset_value = mod_consts[74];
  tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[68], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_11;
  }
  frame_137dde9c25cbe015d20d4ac5533bc482_3 = MAKE_CLASS_FRAME(tstate, codeobj_137dde9c25cbe015d20d4ac5533bc482, module_aiohttp$compression_utils, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_137dde9c25cbe015d20d4ac5533bc482_3);
  assert(Py_REFCNT(frame_137dde9c25cbe015d20d4ac5533bc482_3) == 2);

  // Framed code:
  {
   PyObject *tmp_defaults_3;
   PyObject *tmp_tuple_element_6;
   PyObject *tmp_annotations_3;
   PyObject *tmp_dict_key_3;
   PyObject *tmp_dict_value_3;
   PyObject *tmp_expression_value_11;
   PyObject *tmp_subscript_value_5;
   struct Nuitka_CellObject *tmp_closure_1[1];
   tmp_tuple_element_6 = Py_None;
   tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 7);
   {
    PyObject *tmp_expression_value_10;
    PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_6);
    tmp_tuple_element_6 = Py_False;
    PyTuple_SET_ITEM0(tmp_defaults_3, 1, tmp_tuple_element_6);
    tmp_tuple_element_6 = Py_None;
    PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_6);
    tmp_tuple_element_6 = Py_None;
    PyTuple_SET_ITEM0(tmp_defaults_3, 3, tmp_tuple_element_6);
    tmp_expression_value_10 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[2]);

    if (tmp_expression_value_10 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[2]);

      if (unlikely(tmp_expression_value_10 == NULL)) {
          tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
      }

      if (tmp_expression_value_10 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 48;
       type_description_2 = "c";
          goto tuple_build_exception_3;
      }
            Py_INCREF(tmp_expression_value_10);
        } else {
            goto tuple_build_exception_3;
        }
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[79]);
    Py_DECREF(tmp_expression_value_10);
    if (tmp_tuple_element_6 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 48;
     type_description_2 = "c";
        goto tuple_build_exception_3;
    }
    PyTuple_SET_ITEM(tmp_defaults_3, 4, tmp_tuple_element_6);
    tmp_tuple_element_6 = Py_None;
    PyTuple_SET_ITEM0(tmp_defaults_3, 5, tmp_tuple_element_6);
    tmp_tuple_element_6 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[60]);

    if (tmp_tuple_element_6 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[60]);

      if (unlikely(tmp_tuple_element_6 == NULL)) {
          tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
      }

      if (tmp_tuple_element_6 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 50;
       type_description_2 = "c";
          goto tuple_build_exception_3;
      }
            Py_INCREF(tmp_tuple_element_6);
        } else {
            goto tuple_build_exception_3;
        }
    }

    PyTuple_SET_ITEM(tmp_defaults_3, 6, tmp_tuple_element_6);
   }
   goto tuple_build_noexception_3;
   // Exception handling pass through code for tuple_build:
   tuple_build_exception_3:;
   Py_DECREF(tmp_defaults_3);
   goto frame_exception_exit_3;
   // Finished with no exception for tuple_build:
   tuple_build_noexception_3:;
   tmp_dict_key_3 = mod_consts[62];
   tmp_expression_value_11 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[57]);

   if (tmp_expression_value_11 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57]);

     if (unlikely(tmp_expression_value_11 == NULL)) {
         tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
     }

     if (tmp_expression_value_11 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_defaults_3);

      exception_lineno = 44;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_11);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_5 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[80]);

   if (tmp_subscript_value_5 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_subscript_value_5);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_5);
   Py_DECREF(tmp_expression_value_11);
   Py_DECREF(tmp_subscript_value_5);
   if (tmp_dict_value_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_defaults_3);

    exception_lineno = 44;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_annotations_3 = _PyDict_NewPresized( 7 );
   {
    PyObject *tmp_expression_value_12;
    PyObject *tmp_subscript_value_6;
    PyObject *tmp_expression_value_13;
    PyObject *tmp_subscript_value_7;
    PyObject *tmp_expression_value_14;
    PyObject *tmp_subscript_value_8;
    PyObject *tmp_expression_value_15;
    PyObject *tmp_subscript_value_9;
    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
    Py_DECREF(tmp_dict_value_3);
    assert(!(tmp_res != 0));
    tmp_dict_key_3 = mod_consts[63];
    tmp_dict_value_3 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[81]);

    if (tmp_dict_value_3 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_3 = (PyObject *)&PyBool_Type;
            Py_INCREF(tmp_dict_value_3);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
    Py_DECREF(tmp_dict_value_3);
    assert(!(tmp_res != 0));
    tmp_dict_key_3 = mod_consts[82];
    tmp_expression_value_12 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[57]);

    if (tmp_expression_value_12 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57]);

      if (unlikely(tmp_expression_value_12 == NULL)) {
          tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
      }

      if (tmp_expression_value_12 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 46;
       type_description_2 = "c";
          goto dict_build_exception_2;
      }
            Py_INCREF(tmp_expression_value_12);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_subscript_value_6 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[83]);

    if (tmp_subscript_value_6 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_6 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_subscript_value_6);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
    Py_DECREF(tmp_expression_value_12);
    Py_DECREF(tmp_subscript_value_6);
    if (tmp_dict_value_3 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 46;
     type_description_2 = "c";
        goto dict_build_exception_2;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
    Py_DECREF(tmp_dict_value_3);
    assert(!(tmp_res != 0));
    tmp_dict_key_3 = mod_consts[84];
    tmp_expression_value_13 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[57]);

    if (tmp_expression_value_13 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57]);

      if (unlikely(tmp_expression_value_13 == NULL)) {
          tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
      }

      if (tmp_expression_value_13 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 47;
       type_description_2 = "c";
          goto dict_build_exception_2;
      }
            Py_INCREF(tmp_expression_value_13);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_subscript_value_7 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[83]);

    if (tmp_subscript_value_7 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_7 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_subscript_value_7);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_7);
    Py_DECREF(tmp_expression_value_13);
    Py_DECREF(tmp_subscript_value_7);
    if (tmp_dict_value_3 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 47;
     type_description_2 = "c";
        goto dict_build_exception_2;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
    Py_DECREF(tmp_dict_value_3);
    assert(!(tmp_res != 0));
    tmp_dict_key_3 = mod_consts[85];
    tmp_dict_value_3 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[83]);

    if (tmp_dict_value_3 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_3 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_dict_value_3);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
    Py_DECREF(tmp_dict_value_3);
    assert(!(tmp_res != 0));
    tmp_dict_key_3 = mod_consts[70];
    tmp_expression_value_14 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[57]);

    if (tmp_expression_value_14 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57]);

      if (unlikely(tmp_expression_value_14 == NULL)) {
          tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
      }

      if (tmp_expression_value_14 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 49;
       type_description_2 = "c";
          goto dict_build_exception_2;
      }
            Py_INCREF(tmp_expression_value_14);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_subscript_value_8 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[56]);

    if (tmp_subscript_value_8 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[56]);

      if (unlikely(tmp_subscript_value_8 == NULL)) {
          tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
      }

      if (tmp_subscript_value_8 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_14);

       exception_lineno = 49;
       type_description_2 = "c";
          goto dict_build_exception_2;
      }
            Py_INCREF(tmp_subscript_value_8);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_8);
    Py_DECREF(tmp_expression_value_14);
    Py_DECREF(tmp_subscript_value_8);
    if (tmp_dict_value_3 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 49;
     type_description_2 = "c";
        goto dict_build_exception_2;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
    Py_DECREF(tmp_dict_value_3);
    assert(!(tmp_res != 0));
    tmp_dict_key_3 = mod_consts[71];
    tmp_expression_value_15 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[57]);

    if (tmp_expression_value_15 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57]);

      if (unlikely(tmp_expression_value_15 == NULL)) {
          tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
      }

      if (tmp_expression_value_15 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 50;
       type_description_2 = "c";
          goto dict_build_exception_2;
      }
            Py_INCREF(tmp_expression_value_15);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_subscript_value_9 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[83]);

    if (tmp_subscript_value_9 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_9 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_subscript_value_9);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_9);
    Py_DECREF(tmp_expression_value_15);
    Py_DECREF(tmp_subscript_value_9);
    if (tmp_dict_value_3 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 50;
     type_description_2 = "c";
        goto dict_build_exception_2;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
    Py_DECREF(tmp_dict_value_3);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_2;
   // Exception handling pass through code for dict_build:
   dict_build_exception_2:;
   Py_DECREF(tmp_defaults_3);
   Py_DECREF(tmp_annotations_3);
   goto frame_exception_exit_3;
   // Finished with no exception for dict_build:
   dict_build_noexception_2:;

   tmp_closure_1[0] = outline_1_var___class__;
   Py_INCREF(tmp_closure_1[0]);

   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__3___init__(tmp_defaults_3, tmp_annotations_3, tmp_closure_1);

   tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[8], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 42;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_annotations_4;
   PyObject *tmp_dict_key_4;
   PyObject *tmp_dict_value_4;
   tmp_dict_key_4 = mod_consts[22];
   tmp_dict_value_4 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[87]);

   if (tmp_dict_value_4 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_4 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_4);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_4 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
   Py_DECREF(tmp_dict_value_4);
   assert(!(tmp_res != 0));
   tmp_dict_key_4 = mod_consts[64];
   tmp_dict_value_4 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[87]);

   if (tmp_dict_value_4 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_4 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_4);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
   Py_DECREF(tmp_dict_value_4);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__4_compress_sync(tmp_annotations_4);

   tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[25], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 67;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_annotations_5;
   PyObject *tmp_dict_key_5;
   PyObject *tmp_dict_value_5;
   tmp_dict_key_5 = mod_consts[22];
   tmp_dict_value_5 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[87]);

   if (tmp_dict_value_5 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_5 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_5);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_5 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
   Py_DECREF(tmp_dict_value_5);
   assert(!(tmp_res != 0));
   tmp_dict_key_5 = mod_consts[64];
   tmp_dict_value_5 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[87]);

   if (tmp_dict_value_5 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_5 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_5);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
   Py_DECREF(tmp_dict_value_5);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__5_compress(tmp_annotations_5);

   tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[19], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 70;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_defaults_4;
   PyObject *tmp_tuple_element_7;
   PyObject *tmp_expression_value_16;
   PyObject *tmp_annotations_6;
   PyObject *tmp_dict_key_6;
   PyObject *tmp_dict_value_6;
   tmp_expression_value_16 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[2]);

   if (tmp_expression_value_16 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[2]);

     if (unlikely(tmp_expression_value_16 == NULL)) {
         tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
     }

     if (tmp_expression_value_16 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 85;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_16);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[89]);
   Py_DECREF(tmp_expression_value_16);
   if (tmp_tuple_element_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 85;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_defaults_4 = MAKE_TUPLE_EMPTY(tstate, 1);
   PyTuple_SET_ITEM(tmp_defaults_4, 0, tmp_tuple_element_7);
   tmp_dict_key_6 = mod_consts[69];
   tmp_dict_value_6 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[83]);

   if (tmp_dict_value_6 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_6 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_dict_value_6);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_6 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
   Py_DECREF(tmp_dict_value_6);
   assert(!(tmp_res != 0));
   tmp_dict_key_6 = mod_consts[64];
   tmp_dict_value_6 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[87]);

   if (tmp_dict_value_6 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_6 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_6);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
   Py_DECREF(tmp_dict_value_6);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__6_flush(tmp_defaults_4, tmp_annotations_6);

   tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[28], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 85;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_2;
  frame_exception_exit_3:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_137dde9c25cbe015d20d4ac5533bc482_3, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_137dde9c25cbe015d20d4ac5533bc482_3->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_137dde9c25cbe015d20d4ac5533bc482_3, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_137dde9c25cbe015d20d4ac5533bc482_3,
      type_description_2,
      outline_1_var___class__
  );



  assertFrameObject(frame_137dde9c25cbe015d20d4ac5533bc482_3);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_2;
  frame_no_exception_2:;
  goto skip_nested_handling_2;
  nested_frame_exit_2:;

  goto try_except_handler_11;
  skip_nested_handling_2:;
  {
   nuitka_bool tmp_condition_result_6;
   PyObject *tmp_cmp_expr_left_3;
   PyObject *tmp_cmp_expr_right_3;
   CHECK_OBJECT(tmp_class_creation_2__bases);
   tmp_cmp_expr_left_3 = tmp_class_creation_2__bases;
   CHECK_OBJECT(tmp_class_creation_2__bases_orig);
   tmp_cmp_expr_right_3 = tmp_class_creation_2__bases_orig;
   tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
   if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 41;

       goto try_except_handler_11;
   }
   if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
       goto branch_yes_5;
   } else {
       goto branch_no_5;
   }
  }
  branch_yes_5:;
  CHECK_OBJECT(tmp_class_creation_2__bases_orig);
  tmp_dictset_value = tmp_class_creation_2__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41, mod_consts[91], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_11;
  }
  branch_no_5:;
  {
   PyObject *tmp_assign_source_27;
   PyObject *tmp_called_value_3;
   PyObject *tmp_args_value_3;
   PyObject *tmp_tuple_element_8;
   PyObject *tmp_kwargs_value_3;
   CHECK_OBJECT(tmp_class_creation_2__metaclass);
   tmp_called_value_3 = tmp_class_creation_2__metaclass;
   tmp_tuple_element_8 = mod_consts[74];
   tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_8);
   CHECK_OBJECT(tmp_class_creation_2__bases);
   tmp_tuple_element_8 = tmp_class_creation_2__bases;
   PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_8);
   tmp_tuple_element_8 = locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41;
   PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_8);
   CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
   tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
   frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = 41;
   tmp_assign_source_27 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
   Py_DECREF(tmp_args_value_3);
   if (tmp_assign_source_27 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 41;

       goto try_except_handler_11;
   }
   assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
   Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_27);

  }
  CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
  tmp_assign_source_26 = Nuitka_Cell_GET(outline_1_var___class__);
  Py_INCREF(tmp_assign_source_26);
  goto try_return_handler_11;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_11:;
  Py_DECREF(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41);
  locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41 = NULL;
  goto try_return_handler_10;
  // Exception handler code:
  try_except_handler_11:;
  exception_keeper_type_9 = exception_type;
  exception_keeper_value_9 = exception_value;
  exception_keeper_tb_9 = exception_tb;
  exception_keeper_lineno_9 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41);
  locals_aiohttp$compression_utils$$$class__2_ZLibCompressor_41 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_9;
  exception_value = exception_keeper_value_9;
  exception_tb = exception_keeper_tb_9;
  exception_lineno = exception_keeper_lineno_9;

  goto try_except_handler_10;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_10:;
  CHECK_OBJECT(outline_1_var___class__);
  Py_DECREF(outline_1_var___class__);
  outline_1_var___class__ = NULL;
  goto outline_result_2;
  // Exception handler code:
  try_except_handler_10:;
  exception_keeper_type_10 = exception_type;
  exception_keeper_value_10 = exception_value;
  exception_keeper_tb_10 = exception_tb;
  exception_keeper_lineno_10 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_10;
  exception_value = exception_keeper_value_10;
  exception_tb = exception_keeper_tb_10;
  exception_lineno = exception_keeper_lineno_10;

  goto outline_exception_2;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_2:;
  exception_lineno = 41;
  goto try_except_handler_9;
  outline_result_2:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_26);
 }
 goto try_end_7;
 // Exception handler code:
 try_except_handler_9:;
 exception_keeper_type_11 = exception_type;
 exception_keeper_value_11 = exception_value;
 exception_keeper_tb_11 = exception_tb;
 exception_keeper_lineno_11 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_class_creation_2__bases_orig);
 Py_DECREF(tmp_class_creation_2__bases_orig);
 tmp_class_creation_2__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_2__bases);
 tmp_class_creation_2__bases = NULL;
 Py_XDECREF(tmp_class_creation_2__class_decl_dict);
 tmp_class_creation_2__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_2__metaclass);
 tmp_class_creation_2__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_2__prepared);
 tmp_class_creation_2__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_11;
 exception_value = exception_keeper_value_11;
 exception_tb = exception_keeper_tb_11;
 exception_lineno = exception_keeper_lineno_11;

 goto frame_exception_exit_1;
 // End of try:
 try_end_7:;
 CHECK_OBJECT(tmp_class_creation_2__bases_orig);
 Py_DECREF(tmp_class_creation_2__bases_orig);
 tmp_class_creation_2__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_2__bases);
 Py_DECREF(tmp_class_creation_2__bases);
 tmp_class_creation_2__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
 Py_DECREF(tmp_class_creation_2__class_decl_dict);
 tmp_class_creation_2__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_2__metaclass);
 Py_DECREF(tmp_class_creation_2__metaclass);
 tmp_class_creation_2__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_2__prepared);
 Py_DECREF(tmp_class_creation_2__prepared);
 tmp_class_creation_2__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_28;
  PyObject *tmp_tuple_element_9;
  tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[67]);

  if (unlikely(tmp_tuple_element_9 == NULL)) {
      tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
  }

  if (tmp_tuple_element_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  tmp_assign_source_28 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_9);
  assert(tmp_class_creation_3__bases_orig == NULL);
  tmp_class_creation_3__bases_orig = tmp_assign_source_28;
 }
 {
  PyObject *tmp_assign_source_29;
  PyObject *tmp_dircall_arg1_2;
  CHECK_OBJECT(tmp_class_creation_3__bases_orig);
  tmp_dircall_arg1_2 = tmp_class_creation_3__bases_orig;
  Py_INCREF(tmp_dircall_arg1_2);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
      tmp_assign_source_29 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  assert(tmp_class_creation_3__bases == NULL);
  tmp_class_creation_3__bases = tmp_assign_source_29;
 }
 {
  PyObject *tmp_assign_source_30;
  tmp_assign_source_30 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_3__class_decl_dict == NULL);
  tmp_class_creation_3__class_decl_dict = tmp_assign_source_30;
 }
 {
  PyObject *tmp_assign_source_31;
  PyObject *tmp_metaclass_value_2;
  nuitka_bool tmp_condition_result_7;
  int tmp_truth_name_2;
  PyObject *tmp_type_arg_3;
  PyObject *tmp_expression_value_17;
  PyObject *tmp_subscript_value_10;
  PyObject *tmp_bases_value_2;
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
  if (tmp_truth_name_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  tmp_condition_result_7 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_2;
  } else {
      goto condexpr_false_2;
  }
  condexpr_true_2:;
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_expression_value_17 = tmp_class_creation_3__bases;
  tmp_subscript_value_10 = mod_consts[36];
  tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_17, tmp_subscript_value_10, 0);
  if (tmp_type_arg_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
  Py_DECREF(tmp_type_arg_3);
  if (tmp_metaclass_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  goto condexpr_end_2;
  condexpr_false_2:;
  tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_2);
  condexpr_end_2:;
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_bases_value_2 = tmp_class_creation_3__bases;
  tmp_assign_source_31 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
  Py_DECREF(tmp_metaclass_value_2);
  if (tmp_assign_source_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  assert(tmp_class_creation_3__metaclass == NULL);
  tmp_class_creation_3__metaclass = tmp_assign_source_31;
 }
 {
  bool tmp_condition_result_8;
  PyObject *tmp_expression_value_18;
  CHECK_OBJECT(tmp_class_creation_3__metaclass);
  tmp_expression_value_18 = tmp_class_creation_3__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_18, mod_consts[73]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  tmp_condition_result_8 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_8 != false) {
      goto branch_yes_6;
  } else {
      goto branch_no_6;
  }
 }
 branch_yes_6:;
 {
  PyObject *tmp_assign_source_32;
  PyObject *tmp_called_value_4;
  PyObject *tmp_expression_value_19;
  PyObject *tmp_args_value_4;
  PyObject *tmp_tuple_element_10;
  PyObject *tmp_kwargs_value_4;
  CHECK_OBJECT(tmp_class_creation_3__metaclass);
  tmp_expression_value_19 = tmp_class_creation_3__metaclass;
  tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[73]);
  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  tmp_tuple_element_10 = mod_consts[92];
  tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_10);
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_tuple_element_10 = tmp_class_creation_3__bases;
  PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_10);
  CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
  tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
  frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = 89;
  tmp_assign_source_32 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
  Py_DECREF(tmp_called_value_4);
  Py_DECREF(tmp_args_value_4);
  if (tmp_assign_source_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  assert(tmp_class_creation_3__prepared == NULL);
  tmp_class_creation_3__prepared = tmp_assign_source_32;
 }
 {
  bool tmp_condition_result_9;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_expression_value_20;
  CHECK_OBJECT(tmp_class_creation_3__prepared);
  tmp_expression_value_20 = tmp_class_creation_3__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  assert(!(tmp_res == -1));
  tmp_condition_result_9 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_9 != false) {
      goto branch_yes_7;
  } else {
      goto branch_no_7;
  }
 }
 branch_yes_7:;
 {
  PyObject *tmp_raise_type_2;
  PyObject *tmp_raise_value_2;
  PyObject *tmp_mod_expr_left_2;
  PyObject *tmp_mod_expr_right_2;
  PyObject *tmp_tuple_element_11;
  PyObject *tmp_expression_value_21;
  PyObject *tmp_name_value_7;
  PyObject *tmp_default_value_2;
  tmp_raise_type_2 = PyExc_TypeError;
  tmp_mod_expr_left_2 = mod_consts[76];
  CHECK_OBJECT(tmp_class_creation_3__metaclass);
  tmp_expression_value_21 = tmp_class_creation_3__metaclass;
  tmp_name_value_7 = mod_consts[77];
  tmp_default_value_2 = mod_consts[78];
  tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_21, tmp_name_value_7, tmp_default_value_2);
  if (tmp_tuple_element_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_22;
   PyObject *tmp_type_arg_4;
   PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_11);
   CHECK_OBJECT(tmp_class_creation_3__prepared);
   tmp_type_arg_4 = tmp_class_creation_3__prepared;
   tmp_expression_value_22 = BUILTIN_TYPE1(tmp_type_arg_4);
   assert(!(tmp_expression_value_22 == NULL));
   tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[77]);
   Py_DECREF(tmp_expression_value_22);
   if (tmp_tuple_element_11 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 89;

       goto tuple_build_exception_4;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_11);
  }
  goto tuple_build_noexception_4;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_4:;
  Py_DECREF(tmp_mod_expr_right_2);
  goto try_except_handler_12;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_4:;
  tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
  Py_DECREF(tmp_mod_expr_right_2);
  if (tmp_raise_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_12;
  }
  exception_type = tmp_raise_type_2;
  Py_INCREF(tmp_raise_type_2);
  exception_value = tmp_raise_value_2;
  exception_lineno = 89;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_12;
 }
 branch_no_7:;
 goto branch_end_6;
 branch_no_6:;
 {
  PyObject *tmp_assign_source_33;
  tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_3__prepared == NULL);
  tmp_class_creation_3__prepared = tmp_assign_source_33;
 }
 branch_end_6:;
 {
  PyObject *tmp_assign_source_34;
  outline_2_var___class__ = Nuitka_Cell_NewEmpty();
  {
   PyObject *tmp_set_locals_3;
   CHECK_OBJECT(tmp_class_creation_3__prepared);
   tmp_set_locals_3 = tmp_class_creation_3__prepared;
   locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89 = tmp_set_locals_3;
   Py_INCREF(tmp_set_locals_3);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[65];
  tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[66], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_14;
  }
  tmp_dictset_value = mod_consts[92];
  tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[68], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_14;
  }
  frame_408e8119a9a7d8366a4fec97ad67af6d_4 = MAKE_CLASS_FRAME(tstate, codeobj_408e8119a9a7d8366a4fec97ad67af6d, module_aiohttp$compression_utils, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_408e8119a9a7d8366a4fec97ad67af6d_4);
  assert(Py_REFCNT(frame_408e8119a9a7d8366a4fec97ad67af6d_4) == 2);

  // Framed code:
  {
   PyObject *tmp_defaults_5;
   PyObject *tmp_tuple_element_12;
   PyObject *tmp_annotations_7;
   PyObject *tmp_dict_key_7;
   PyObject *tmp_dict_value_7;
   PyObject *tmp_expression_value_23;
   PyObject *tmp_subscript_value_11;
   struct Nuitka_CellObject *tmp_closure_2[1];
   tmp_tuple_element_12 = Py_None;
   tmp_defaults_5 = MAKE_TUPLE_EMPTY(tstate, 4);
   PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_12);
   tmp_tuple_element_12 = Py_False;
   PyTuple_SET_ITEM0(tmp_defaults_5, 1, tmp_tuple_element_12);
   tmp_tuple_element_12 = Py_None;
   PyTuple_SET_ITEM0(tmp_defaults_5, 2, tmp_tuple_element_12);
   tmp_tuple_element_12 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[60]);

   if (tmp_tuple_element_12 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[60]);

     if (unlikely(tmp_tuple_element_12 == NULL)) {
         tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
     }

     if (tmp_tuple_element_12 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 95;
      type_description_2 = "c";
         goto tuple_build_exception_5;
     }
           Py_INCREF(tmp_tuple_element_12);
       } else {
           goto tuple_build_exception_5;
       }
   }

   PyTuple_SET_ITEM(tmp_defaults_5, 3, tmp_tuple_element_12);
   goto tuple_build_noexception_5;
   // Exception handling pass through code for tuple_build:
   tuple_build_exception_5:;
   Py_DECREF(tmp_defaults_5);
   goto frame_exception_exit_4;
   // Finished with no exception for tuple_build:
   tuple_build_noexception_5:;
   tmp_dict_key_7 = mod_consts[62];
   tmp_expression_value_23 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[57]);

   if (tmp_expression_value_23 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57]);

     if (unlikely(tmp_expression_value_23 == NULL)) {
         tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
     }

     if (tmp_expression_value_23 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_defaults_5);

      exception_lineno = 92;
      type_description_2 = "c";
         goto frame_exception_exit_4;
     }
           Py_INCREF(tmp_expression_value_23);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_subscript_value_11 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[80]);

   if (tmp_subscript_value_11 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_11 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_subscript_value_11);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_11);
   Py_DECREF(tmp_expression_value_23);
   Py_DECREF(tmp_subscript_value_11);
   if (tmp_dict_value_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_defaults_5);

    exception_lineno = 92;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   tmp_annotations_7 = _PyDict_NewPresized( 4 );
   {
    PyObject *tmp_expression_value_24;
    PyObject *tmp_subscript_value_12;
    PyObject *tmp_expression_value_25;
    PyObject *tmp_subscript_value_13;
    tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
    Py_DECREF(tmp_dict_value_7);
    assert(!(tmp_res != 0));
    tmp_dict_key_7 = mod_consts[63];
    tmp_dict_value_7 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[81]);

    if (tmp_dict_value_7 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_7 = (PyObject *)&PyBool_Type;
            Py_INCREF(tmp_dict_value_7);
        } else {
            goto dict_build_exception_3;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
    Py_DECREF(tmp_dict_value_7);
    assert(!(tmp_res != 0));
    tmp_dict_key_7 = mod_consts[70];
    tmp_expression_value_24 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[57]);

    if (tmp_expression_value_24 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57]);

      if (unlikely(tmp_expression_value_24 == NULL)) {
          tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
      }

      if (tmp_expression_value_24 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 94;
       type_description_2 = "c";
          goto dict_build_exception_3;
      }
            Py_INCREF(tmp_expression_value_24);
        } else {
            goto dict_build_exception_3;
        }
    }

    tmp_subscript_value_12 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[56]);

    if (tmp_subscript_value_12 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[56]);

      if (unlikely(tmp_subscript_value_12 == NULL)) {
          tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
      }

      if (tmp_subscript_value_12 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_24);

       exception_lineno = 94;
       type_description_2 = "c";
          goto dict_build_exception_3;
      }
            Py_INCREF(tmp_subscript_value_12);
        } else {
            goto dict_build_exception_3;
        }
    }

    tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_12);
    Py_DECREF(tmp_expression_value_24);
    Py_DECREF(tmp_subscript_value_12);
    if (tmp_dict_value_7 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 94;
     type_description_2 = "c";
        goto dict_build_exception_3;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
    Py_DECREF(tmp_dict_value_7);
    assert(!(tmp_res != 0));
    tmp_dict_key_7 = mod_consts[71];
    tmp_expression_value_25 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[57]);

    if (tmp_expression_value_25 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[57]);

      if (unlikely(tmp_expression_value_25 == NULL)) {
          tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
      }

      if (tmp_expression_value_25 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 95;
       type_description_2 = "c";
          goto dict_build_exception_3;
      }
            Py_INCREF(tmp_expression_value_25);
        } else {
            goto dict_build_exception_3;
        }
    }

    tmp_subscript_value_13 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[83]);

    if (tmp_subscript_value_13 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_13 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_subscript_value_13);
        } else {
            goto dict_build_exception_3;
        }
    }

    tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_13);
    Py_DECREF(tmp_expression_value_25);
    Py_DECREF(tmp_subscript_value_13);
    if (tmp_dict_value_7 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 95;
     type_description_2 = "c";
        goto dict_build_exception_3;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
    Py_DECREF(tmp_dict_value_7);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_3;
   // Exception handling pass through code for dict_build:
   dict_build_exception_3:;
   Py_DECREF(tmp_defaults_5);
   Py_DECREF(tmp_annotations_7);
   goto frame_exception_exit_4;
   // Finished with no exception for dict_build:
   dict_build_noexception_3:;

   tmp_closure_2[0] = outline_2_var___class__;
   Py_INCREF(tmp_closure_2[0]);

   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__7___init__(tmp_defaults_5, tmp_annotations_7, tmp_closure_2);

   tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[8], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 90;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
  }
  {
   PyObject *tmp_defaults_6;
   PyObject *tmp_annotations_8;
   PyObject *tmp_dict_key_8;
   PyObject *tmp_dict_value_8;
   tmp_defaults_6 = mod_consts[94];
   tmp_dict_key_8 = mod_consts[22];
   tmp_dict_value_8 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[87]);

   if (tmp_dict_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_8 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_8);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_8 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
   Py_DECREF(tmp_dict_value_8);
   assert(!(tmp_res != 0));
   tmp_dict_key_8 = mod_consts[34];
   tmp_dict_value_8 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[83]);

   if (tmp_dict_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_8 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_dict_value_8);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
   Py_DECREF(tmp_dict_value_8);
   assert(!(tmp_res != 0));
   tmp_dict_key_8 = mod_consts[64];
   tmp_dict_value_8 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[87]);

   if (tmp_dict_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_8 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_8);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
   Py_DECREF(tmp_dict_value_8);
   assert(!(tmp_res != 0));
   Py_INCREF(tmp_defaults_6);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__8_decompress_sync(tmp_defaults_6, tmp_annotations_8);

   tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[33], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 104;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
  }
  {
   PyObject *tmp_defaults_7;
   PyObject *tmp_annotations_9;
   PyObject *tmp_dict_key_9;
   PyObject *tmp_dict_value_9;
   tmp_defaults_7 = mod_consts[94];
   tmp_dict_key_9 = mod_consts[22];
   tmp_dict_value_9 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[87]);

   if (tmp_dict_value_9 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_9 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_9);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_9 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
   Py_DECREF(tmp_dict_value_9);
   assert(!(tmp_res != 0));
   tmp_dict_key_9 = mod_consts[34];
   tmp_dict_value_9 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[83]);

   if (tmp_dict_value_9 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_9 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_dict_value_9);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
   Py_DECREF(tmp_dict_value_9);
   assert(!(tmp_res != 0));
   tmp_dict_key_9 = mod_consts[64];
   tmp_dict_value_9 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[87]);

   if (tmp_dict_value_9 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_9 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_9);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
   Py_DECREF(tmp_dict_value_9);
   assert(!(tmp_res != 0));
   Py_INCREF(tmp_defaults_7);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__9_decompress(tmp_defaults_7, tmp_annotations_9);

   tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[32], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 107;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
  }
  {
   PyObject *tmp_defaults_8;
   PyObject *tmp_annotations_10;
   PyObject *tmp_dict_key_10;
   PyObject *tmp_dict_value_10;
   tmp_defaults_8 = mod_consts[94];
   tmp_dict_key_10 = mod_consts[96];
   tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[83]);

   if (tmp_dict_value_10 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_10 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_dict_value_10);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_10 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
   Py_DECREF(tmp_dict_value_10);
   assert(!(tmp_res != 0));
   tmp_dict_key_10 = mod_consts[64];
   tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[87]);

   if (tmp_dict_value_10 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_10 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_10);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
   Py_DECREF(tmp_dict_value_10);
   assert(!(tmp_res != 0));
   Py_INCREF(tmp_defaults_8);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__10_flush(tmp_defaults_8, tmp_annotations_10);

   tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[28], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 117;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
  }
  {
   nuitka_bool tmp_condition_result_10;
   PyObject *tmp_called_value_5;
   PyObject *tmp_args_element_value_1;
   PyObject *tmp_annotations_11;
   PyObject *tmp_dict_key_11;
   PyObject *tmp_dict_value_11;
   PyObject *tmp_called_value_6;
   PyObject *tmp_args_element_value_2;
   PyObject *tmp_annotations_12;
   PyObject *tmp_dict_key_12;
   PyObject *tmp_dict_value_12;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[98]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 124;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_3;
   } else {
       goto condexpr_false_3;
   }
   condexpr_true_3:;
   tmp_called_value_5 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[98]);

   if (unlikely(tmp_called_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[98], &exception_type, &exception_value);

    exception_lineno = 124;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }

   if (tmp_called_value_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 124;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   tmp_dict_key_11 = mod_consts[64];
   tmp_dict_value_11 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[81]);

   if (tmp_dict_value_11 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_11 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_11);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_11 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
   Py_DECREF(tmp_dict_value_11);
   assert(!(tmp_res != 0));


   tmp_args_element_value_1 = MAKE_FUNCTION_aiohttp$compression_utils$$$function__11_eof(tmp_annotations_11);

   frame_408e8119a9a7d8366a4fec97ad67af6d_4->m_frame.f_lineno = 124;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_1);
   Py_DECREF(tmp_called_value_5);
   Py_DECREF(tmp_args_element_value_1);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 124;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   goto condexpr_end_3;
   condexpr_false_3:;
   tmp_called_value_6 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_12 = mod_consts[64];
   tmp_dict_value_12 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[81]);

   if (tmp_dict_value_12 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_12 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_12);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_12 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
   Py_DECREF(tmp_dict_value_12);
   assert(!(tmp_res != 0));


   tmp_args_element_value_2 = MAKE_FUNCTION_aiohttp$compression_utils$$$function__11_eof(tmp_annotations_12);

   frame_408e8119a9a7d8366a4fec97ad67af6d_4->m_frame.f_lineno = 124;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_2);
   Py_DECREF(tmp_args_element_value_2);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 124;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   condexpr_end_3:;
   tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[37], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 125;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
  }
  {
   nuitka_bool tmp_condition_result_11;
   PyObject *tmp_called_value_7;
   PyObject *tmp_args_element_value_3;
   PyObject *tmp_annotations_13;
   PyObject *tmp_dict_key_13;
   PyObject *tmp_dict_value_13;
   PyObject *tmp_called_value_8;
   PyObject *tmp_args_element_value_4;
   PyObject *tmp_annotations_14;
   PyObject *tmp_dict_key_14;
   PyObject *tmp_dict_value_14;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[98]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 128;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_4;
   } else {
       goto condexpr_false_4;
   }
   condexpr_true_4:;
   tmp_called_value_7 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[98]);

   if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[98], &exception_type, &exception_value);

    exception_lineno = 128;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }

   if (tmp_called_value_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 128;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   tmp_dict_key_13 = mod_consts[64];
   tmp_dict_value_13 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[87]);

   if (tmp_dict_value_13 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_13 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_13);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_13 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
   Py_DECREF(tmp_dict_value_13);
   assert(!(tmp_res != 0));


   tmp_args_element_value_3 = MAKE_FUNCTION_aiohttp$compression_utils$$$function__12_unconsumed_tail(tmp_annotations_13);

   frame_408e8119a9a7d8366a4fec97ad67af6d_4->m_frame.f_lineno = 128;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_3);
   Py_DECREF(tmp_called_value_7);
   Py_DECREF(tmp_args_element_value_3);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 128;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   goto condexpr_end_4;
   condexpr_false_4:;
   tmp_called_value_8 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_14 = mod_consts[64];
   tmp_dict_value_14 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[87]);

   if (tmp_dict_value_14 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_14 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_14);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_14 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
   Py_DECREF(tmp_dict_value_14);
   assert(!(tmp_res != 0));


   tmp_args_element_value_4 = MAKE_FUNCTION_aiohttp$compression_utils$$$function__12_unconsumed_tail(tmp_annotations_14);

   frame_408e8119a9a7d8366a4fec97ad67af6d_4->m_frame.f_lineno = 128;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
   Py_DECREF(tmp_args_element_value_4);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 128;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   condexpr_end_4:;
   tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[38], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 129;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
  }
  {
   nuitka_bool tmp_condition_result_12;
   PyObject *tmp_called_value_9;
   PyObject *tmp_args_element_value_5;
   PyObject *tmp_annotations_15;
   PyObject *tmp_dict_key_15;
   PyObject *tmp_dict_value_15;
   PyObject *tmp_called_value_10;
   PyObject *tmp_args_element_value_6;
   PyObject *tmp_annotations_16;
   PyObject *tmp_dict_key_16;
   PyObject *tmp_dict_value_16;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[98]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 132;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_5;
   } else {
       goto condexpr_false_5;
   }
   condexpr_true_5:;
   tmp_called_value_9 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[98]);

   if (unlikely(tmp_called_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[98], &exception_type, &exception_value);

    exception_lineno = 132;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }

   if (tmp_called_value_9 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 132;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   tmp_dict_key_15 = mod_consts[64];
   tmp_dict_value_15 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[87]);

   if (tmp_dict_value_15 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_15 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_15);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_15 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
   Py_DECREF(tmp_dict_value_15);
   assert(!(tmp_res != 0));


   tmp_args_element_value_5 = MAKE_FUNCTION_aiohttp$compression_utils$$$function__13_unused_data(tmp_annotations_15);

   frame_408e8119a9a7d8366a4fec97ad67af6d_4->m_frame.f_lineno = 132;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_5);
   Py_DECREF(tmp_called_value_9);
   Py_DECREF(tmp_args_element_value_5);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 132;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   goto condexpr_end_5;
   condexpr_false_5:;
   tmp_called_value_10 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_16 = mod_consts[64];
   tmp_dict_value_16 = PyObject_GetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[87]);

   if (tmp_dict_value_16 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_16 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_16);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_16 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
   Py_DECREF(tmp_dict_value_16);
   assert(!(tmp_res != 0));


   tmp_args_element_value_6 = MAKE_FUNCTION_aiohttp$compression_utils$$$function__13_unused_data(tmp_annotations_16);

   frame_408e8119a9a7d8366a4fec97ad67af6d_4->m_frame.f_lineno = 132;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
   Py_DECREF(tmp_args_element_value_6);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 132;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   condexpr_end_5:;
   tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[39], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 133;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_3;
  frame_exception_exit_4:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_408e8119a9a7d8366a4fec97ad67af6d_4, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_408e8119a9a7d8366a4fec97ad67af6d_4->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_408e8119a9a7d8366a4fec97ad67af6d_4, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_408e8119a9a7d8366a4fec97ad67af6d_4,
      type_description_2,
      outline_2_var___class__
  );



  assertFrameObject(frame_408e8119a9a7d8366a4fec97ad67af6d_4);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_3;
  frame_no_exception_3:;
  goto skip_nested_handling_3;
  nested_frame_exit_3:;

  goto try_except_handler_14;
  skip_nested_handling_3:;
  {
   nuitka_bool tmp_condition_result_13;
   PyObject *tmp_cmp_expr_left_4;
   PyObject *tmp_cmp_expr_right_4;
   CHECK_OBJECT(tmp_class_creation_3__bases);
   tmp_cmp_expr_left_4 = tmp_class_creation_3__bases;
   CHECK_OBJECT(tmp_class_creation_3__bases_orig);
   tmp_cmp_expr_right_4 = tmp_class_creation_3__bases_orig;
   tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
   if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 89;

       goto try_except_handler_14;
   }
   if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
       goto branch_yes_8;
   } else {
       goto branch_no_8;
   }
  }
  branch_yes_8:;
  CHECK_OBJECT(tmp_class_creation_3__bases_orig);
  tmp_dictset_value = tmp_class_creation_3__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89, mod_consts[91], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto try_except_handler_14;
  }
  branch_no_8:;
  {
   PyObject *tmp_assign_source_35;
   PyObject *tmp_called_value_11;
   PyObject *tmp_args_value_5;
   PyObject *tmp_tuple_element_13;
   PyObject *tmp_kwargs_value_5;
   CHECK_OBJECT(tmp_class_creation_3__metaclass);
   tmp_called_value_11 = tmp_class_creation_3__metaclass;
   tmp_tuple_element_13 = mod_consts[92];
   tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_13);
   CHECK_OBJECT(tmp_class_creation_3__bases);
   tmp_tuple_element_13 = tmp_class_creation_3__bases;
   PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_13);
   tmp_tuple_element_13 = locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89;
   PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_13);
   CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
   tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
   frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = 89;
   tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_5, tmp_kwargs_value_5);
   Py_DECREF(tmp_args_value_5);
   if (tmp_assign_source_35 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 89;

       goto try_except_handler_14;
   }
   assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
   Nuitka_Cell_SET(outline_2_var___class__, tmp_assign_source_35);

  }
  CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
  tmp_assign_source_34 = Nuitka_Cell_GET(outline_2_var___class__);
  Py_INCREF(tmp_assign_source_34);
  goto try_return_handler_14;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_14:;
  Py_DECREF(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89);
  locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89 = NULL;
  goto try_return_handler_13;
  // Exception handler code:
  try_except_handler_14:;
  exception_keeper_type_12 = exception_type;
  exception_keeper_value_12 = exception_value;
  exception_keeper_tb_12 = exception_tb;
  exception_keeper_lineno_12 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89);
  locals_aiohttp$compression_utils$$$class__3_ZLibDecompressor_89 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_12;
  exception_value = exception_keeper_value_12;
  exception_tb = exception_keeper_tb_12;
  exception_lineno = exception_keeper_lineno_12;

  goto try_except_handler_13;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_13:;
  CHECK_OBJECT(outline_2_var___class__);
  Py_DECREF(outline_2_var___class__);
  outline_2_var___class__ = NULL;
  goto outline_result_3;
  // Exception handler code:
  try_except_handler_13:;
  exception_keeper_type_13 = exception_type;
  exception_keeper_value_13 = exception_value;
  exception_keeper_tb_13 = exception_tb;
  exception_keeper_lineno_13 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_13;
  exception_value = exception_keeper_value_13;
  exception_tb = exception_keeper_tb_13;
  exception_lineno = exception_keeper_lineno_13;

  goto outline_exception_3;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_3:;
  exception_lineno = 89;
  goto try_except_handler_12;
  outline_result_3:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_34);
 }
 goto try_end_8;
 // Exception handler code:
 try_except_handler_12:;
 exception_keeper_type_14 = exception_type;
 exception_keeper_value_14 = exception_value;
 exception_keeper_tb_14 = exception_tb;
 exception_keeper_lineno_14 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_3__bases_orig);
 tmp_class_creation_3__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_3__bases);
 tmp_class_creation_3__bases = NULL;
 Py_XDECREF(tmp_class_creation_3__class_decl_dict);
 tmp_class_creation_3__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_3__metaclass);
 tmp_class_creation_3__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_3__prepared);
 tmp_class_creation_3__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_14;
 exception_value = exception_keeper_value_14;
 exception_tb = exception_keeper_tb_14;
 exception_lineno = exception_keeper_lineno_14;

 goto frame_exception_exit_1;
 // End of try:
 try_end_8:;
 CHECK_OBJECT(tmp_class_creation_3__bases_orig);
 Py_DECREF(tmp_class_creation_3__bases_orig);
 tmp_class_creation_3__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_3__bases);
 Py_DECREF(tmp_class_creation_3__bases);
 tmp_class_creation_3__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
 Py_DECREF(tmp_class_creation_3__class_decl_dict);
 tmp_class_creation_3__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_3__metaclass);
 Py_DECREF(tmp_class_creation_3__metaclass);
 tmp_class_creation_3__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_3__prepared);
 Py_DECREF(tmp_class_creation_3__prepared);
 tmp_class_creation_3__prepared = NULL;
 {
  PyObject *tmp_assign_source_36;
  tmp_assign_source_36 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_4__class_decl_dict == NULL);
  tmp_class_creation_4__class_decl_dict = tmp_assign_source_36;
 }
 {
  PyObject *tmp_assign_source_37;
  tmp_assign_source_37 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_4__prepared == NULL);
  tmp_class_creation_4__prepared = tmp_assign_source_37;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_38;
  {
   PyObject *tmp_set_locals_4;
   CHECK_OBJECT(tmp_class_creation_4__prepared);
   tmp_set_locals_4 = tmp_class_creation_4__prepared;
   locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137 = tmp_set_locals_4;
   Py_INCREF(tmp_set_locals_4);
  }
  tmp_dictset_value = mod_consts[65];
  tmp_result = DICT_SET_ITEM(locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137, mod_consts[66], tmp_dictset_value);
  assert(!(tmp_result == false));
  tmp_dictset_value = mod_consts[102];
  tmp_result = DICT_SET_ITEM(locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137, mod_consts[68], tmp_dictset_value);
  assert(!(tmp_result == false));
  {
   PyObject *tmp_annotations_17;
   tmp_annotations_17 = DICT_COPY(tstate, mod_consts[103]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__14___init__(tmp_annotations_17);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137, mod_consts[8], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   assert(!(tmp_result == false));
  }
  {
   PyObject *tmp_annotations_18;
   tmp_annotations_18 = DICT_COPY(tstate, mod_consts[105]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__15_decompress_sync(tmp_annotations_18);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137, mod_consts[33], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   assert(!(tmp_result == false));
  }
  {
   PyObject *tmp_annotations_19;
   tmp_annotations_19 = DICT_COPY(tstate, mod_consts[107]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$compression_utils$$$function__16_flush(tmp_annotations_19);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137, mod_consts[28], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   assert(!(tmp_result == false));
  }
  // Tried code:
  // Tried code:
  {
   PyObject *tmp_assign_source_39;
   PyObject *tmp_called_value_12;
   PyObject *tmp_args_value_6;
   PyObject *tmp_tuple_element_14;
   PyObject *tmp_kwargs_value_6;
   tmp_called_value_12 = (PyObject *)&PyType_Type;
   tmp_tuple_element_14 = mod_consts[102];
   tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_14);
   tmp_tuple_element_14 = const_tuple_empty;
   PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_14);
   tmp_tuple_element_14 = locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137;
   PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_14);
   CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
   tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
   frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame.f_lineno = 137;
   tmp_assign_source_39 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_6, tmp_kwargs_value_6);
   Py_DECREF(tmp_args_value_6);
   if (tmp_assign_source_39 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 137;

       goto try_except_handler_17;
   }
   assert(outline_3_var___class__ == NULL);
   outline_3_var___class__ = tmp_assign_source_39;
  }
  CHECK_OBJECT(outline_3_var___class__);
  tmp_assign_source_38 = outline_3_var___class__;
  Py_INCREF(tmp_assign_source_38);
  goto try_return_handler_17;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_17:;
  Py_DECREF(locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137);
  locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137 = NULL;
  goto try_return_handler_16;
  // Exception handler code:
  try_except_handler_17:;
  exception_keeper_type_15 = exception_type;
  exception_keeper_value_15 = exception_value;
  exception_keeper_tb_15 = exception_tb;
  exception_keeper_lineno_15 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137);
  locals_aiohttp$compression_utils$$$class__4_BrotliDecompressor_137 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_15;
  exception_value = exception_keeper_value_15;
  exception_tb = exception_keeper_tb_15;
  exception_lineno = exception_keeper_lineno_15;

  goto try_except_handler_16;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_16:;
  CHECK_OBJECT(outline_3_var___class__);
  Py_DECREF(outline_3_var___class__);
  outline_3_var___class__ = NULL;
  goto outline_result_4;
  // Exception handler code:
  try_except_handler_16:;
  exception_keeper_type_16 = exception_type;
  exception_keeper_value_16 = exception_value;
  exception_keeper_tb_16 = exception_tb;
  exception_keeper_lineno_16 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_16;
  exception_value = exception_keeper_value_16;
  exception_tb = exception_keeper_tb_16;
  exception_lineno = exception_keeper_lineno_16;

  goto outline_exception_4;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_4:;
  exception_lineno = 137;
  goto try_except_handler_15;
  outline_result_4:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_38);
 }
 goto try_end_9;
 // Exception handler code:
 try_except_handler_15:;
 exception_keeper_type_17 = exception_type;
 exception_keeper_value_17 = exception_value;
 exception_keeper_tb_17 = exception_tb;
 exception_keeper_lineno_17 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
 Py_DECREF(tmp_class_creation_4__class_decl_dict);
 tmp_class_creation_4__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_4__prepared);
 Py_DECREF(tmp_class_creation_4__prepared);
 tmp_class_creation_4__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_17;
 exception_value = exception_keeper_value_17;
 exception_tb = exception_keeper_tb_17;
 exception_lineno = exception_keeper_lineno_17;

 goto frame_exception_exit_1;
 // End of try:
 try_end_9:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_4;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_6ef691fa3711ab2e608a5d7c591f2dcf, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_6ef691fa3711ab2e608a5d7c591f2dcf->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_6ef691fa3711ab2e608a5d7c591f2dcf, exception_lineno);
 }



 assertFrameObject(frame_6ef691fa3711ab2e608a5d7c591f2dcf);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto module_exception_exit;
 frame_no_exception_4:;
 CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
 Py_DECREF(tmp_class_creation_4__class_decl_dict);
 tmp_class_creation_4__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_4__prepared);
 Py_DECREF(tmp_class_creation_4__prepared);
 tmp_class_creation_4__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("aiohttp$compression_utils", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.compression_utils" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_aiohttp$compression_utils);
    return module_aiohttp$compression_utils;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$compression_utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("aiohttp$compression_utils", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
