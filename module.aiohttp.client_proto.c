/* Generated code for Python module 'aiohttp$client_proto'
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

/* The "module_aiohttp$client_proto" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiohttp$client_proto;
PyDictObject *moduledict_aiohttp$client_proto;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[168];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[168];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("aiohttp.client_proto"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 168; i++) {
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
void checkModuleConstants_aiohttp$client_proto(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 168; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a50ce69635fa55357de4a486d4e819f9;
static PyCodeObject *codeobj_2bda082e6043cb0ecde83de18cf7f167;
static PyCodeObject *codeobj_9ee1093da0cbd7872a3d81ee82eb0fc2;
static PyCodeObject *codeobj_4f8cb1d0c781f54f4d2bdac6244c16e4;
static PyCodeObject *codeobj_bfa121849ab729da8472e54649309627;
static PyCodeObject *codeobj_d41efc7dfd703d43fcabfdcffd0ac2ad;
static PyCodeObject *codeobj_4503297db622a82c0ae395dce6c04dfb;
static PyCodeObject *codeobj_4b4ab96c79e30c8d9db8aad1e87af377;
static PyCodeObject *codeobj_f59fac3a841f89205fc86a739ad8001d;
static PyCodeObject *codeobj_e60ae47dd26331bc553e2c0e9696bb71;
static PyCodeObject *codeobj_1f491321dc4e7ea8d0ae18a47d521d69;
static PyCodeObject *codeobj_a9074fe2f69d7811be51aad8b7925e70;
static PyCodeObject *codeobj_8f0941d0e624bf2db52110f59ce8ae7d;
static PyCodeObject *codeobj_1bdbb384ce627e76d27ac5c6027d3d68;
static PyCodeObject *codeobj_59af21cf1a166421e4023f5d6032090d;
static PyCodeObject *codeobj_2f68c7c6229a7dfddd1e9ec17ef50674;
static PyCodeObject *codeobj_449801c86c6a21958b7fa5ead9ae1ef7;
static PyCodeObject *codeobj_19b4340850a38dec0d6dd7dc10a5cab1;
static PyCodeObject *codeobj_7b8706ff37248ef62575156a7764ab60;
static PyCodeObject *codeobj_5fa25d659036a96c7df959b8916b19d1;

static void createModuleCodeObjects(void) {
 module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[154]); CHECK_OBJECT(module_filename_obj);
 codeobj_a50ce69635fa55357de4a486d4e819f9 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[155], mod_consts[155], NULL, NULL, 0, 0, 0);
 codeobj_2bda082e6043cb0ecde83de18cf7f167 = MAKE_CODE_OBJECT(module_filename_obj, 23, 0, mod_consts[95], mod_consts[95], mod_consts[156], NULL, 0, 0, 0);
 codeobj_9ee1093da0cbd7872a3d81ee82eb0fc2 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[107], mod_consts[157], NULL, 2, 0, 0);
 codeobj_4f8cb1d0c781f54f4d2bdac6244c16e4 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[21], mod_consts[145], mod_consts[158], NULL, 1, 0, 0);
 codeobj_bfa121849ab729da8472e54649309627 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[52], mod_consts[149], mod_consts[159], NULL, 1, 0, 0);
 codeobj_d41efc7dfd703d43fcabfdcffd0ac2ad = MAKE_CODE_OBJECT(module_filename_obj, 212, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[146], mod_consts[160], NULL, 1, 0, 0);
 codeobj_4503297db622a82c0ae395dce6c04dfb = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[20], mod_consts[116], mod_consts[161], NULL, 1, 0, 0);
 codeobj_4b4ab96c79e30c8d9db8aad1e87af377 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[121], mod_consts[162], mod_consts[156], 2, 0, 0);
 codeobj_f59fac3a841f89205fc86a739ad8001d = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[46], mod_consts[152], mod_consts[163], NULL, 2, 0, 0);
 codeobj_e60ae47dd26331bc553e2c0e9696bb71 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[122], mod_consts[123], mod_consts[158], NULL, 1, 0, 0);
 codeobj_1f491321dc4e7ea8d0ae18a47d521d69 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[114], mod_consts[115], mod_consts[158], NULL, 1, 0, 0);
 codeobj_a9074fe2f69d7811be51aad8b7925e70 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[117], mod_consts[118], mod_consts[158], NULL, 1, 0, 0);
 codeobj_8f0941d0e624bf2db52110f59ce8ae7d = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[42], mod_consts[124], mod_consts[164], mod_consts[156], 1, 0, 0);
 codeobj_1bdbb384ce627e76d27ac5c6027d3d68 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[125], mod_consts[164], mod_consts[156], 1, 0, 0);
 codeobj_59af21cf1a166421e4023f5d6032090d = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[127], mod_consts[165], mod_consts[156], 3, 0, 0);
 codeobj_2f68c7c6229a7dfddd1e9ec17ef50674 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[129], mod_consts[130], mod_consts[166], NULL, 3, 0, 0);
 codeobj_449801c86c6a21958b7fa5ead9ae1ef7 = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[143], mod_consts[144], mod_consts[167], NULL, 1, 9, 0);
 codeobj_19b4340850a38dec0d6dd7dc10a5cab1 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[58], mod_consts[112], mod_consts[158], NULL, 1, 0, 0);
 codeobj_7b8706ff37248ef62575156a7764ab60 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[147], mod_consts[148], mod_consts[158], NULL, 1, 0, 0);
 codeobj_5fa25d659036a96c7df959b8916b19d1 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[110], mod_consts[111], mod_consts[158], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__10_resume_reading(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__11_set_exception(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__12_set_parser(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__13_set_response_params(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__14__drop_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__15__reschedule_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__16_start_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__17__on_read_timeout(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__18_data_received(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__2_upgraded(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__3_should_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__4_force_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__5_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__6_is_connected(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__7_connection_lost(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__8_eof_received(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__9_pause_reading(PyObject *annotations, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_aiohttp$client_proto$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_loop = python_pars[1];
 struct Nuitka_FrameObject *frame_9ee1093da0cbd7872a3d81ee82eb0fc2;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_9ee1093da0cbd7872a3d81ee82eb0fc2 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_9ee1093da0cbd7872a3d81ee82eb0fc2)) {
     Py_XDECREF(cache_frame_9ee1093da0cbd7872a3d81ee82eb0fc2);

#if _DEBUG_REFCOUNTS
     if (cache_frame_9ee1093da0cbd7872a3d81ee82eb0fc2 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_9ee1093da0cbd7872a3d81ee82eb0fc2 = MAKE_FUNCTION_FRAME(tstate, codeobj_9ee1093da0cbd7872a3d81ee82eb0fc2, module_aiohttp$client_proto, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_9ee1093da0cbd7872a3d81ee82eb0fc2->m_type_description == NULL);
 frame_9ee1093da0cbd7872a3d81ee82eb0fc2 = cache_frame_9ee1093da0cbd7872a3d81ee82eb0fc2;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_9ee1093da0cbd7872a3d81ee82eb0fc2);
 assert(Py_REFCNT(frame_9ee1093da0cbd7872a3d81ee82eb0fc2) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_dict_value_0_1;
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[0]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
  }

  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_kw_call_arg_value_0_1 = par_self;
  CHECK_OBJECT(par_loop);
  tmp_kw_call_dict_value_0_1 = par_loop;
  frame_9ee1093da0cbd7872a3d81ee82eb0fc2->m_frame.f_lineno = 27;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_1};
      PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
      tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[2]);
  }

  Py_DECREF(tmp_called_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[3]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_args_element_value_1 = par_self;
  CHECK_OBJECT(par_loop);
  tmp_args_element_value_2 = par_loop;
  frame_9ee1093da0cbd7872a3d81ee82eb0fc2->m_frame.f_lineno = 28;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
          tstate,
          tmp_called_instance_1,
          mod_consts[1],
          call_args
      );
  }

  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 30;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 32;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  tmp_assattr_value_3 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[6], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 33;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_assattr_target_4;
  tmp_assattr_value_4 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_4 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[7], tmp_assattr_value_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 34;
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
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[8], tmp_assattr_value_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_6;
  PyObject *tmp_assattr_target_6;
  tmp_assattr_value_6 = mod_consts[9];
  CHECK_OBJECT(par_self);
  tmp_assattr_target_6 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[10], tmp_assattr_value_6);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 38;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_7;
  PyObject *tmp_assattr_target_7;
  tmp_assattr_value_7 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_7 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[11], tmp_assattr_value_7);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_8;
  PyObject *tmp_assattr_target_8;
  tmp_assattr_value_8 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_8 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[12], tmp_assattr_value_8);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 40;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_9;
  PyObject *tmp_assattr_target_9;
  tmp_assattr_value_9 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_9 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[13], tmp_assattr_value_9);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_10;
  PyObject *tmp_assattr_target_10;
  tmp_assattr_value_10 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_10 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[14], tmp_assattr_value_10);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 43;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_11;
  PyObject *tmp_assattr_target_11;
  tmp_assattr_value_11 = mod_consts[15];
  CHECK_OBJECT(par_self);
  tmp_assattr_target_11 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[16], tmp_assattr_value_11);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_9ee1093da0cbd7872a3d81ee82eb0fc2, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_9ee1093da0cbd7872a3d81ee82eb0fc2->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_9ee1093da0cbd7872a3d81ee82eb0fc2, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_9ee1093da0cbd7872a3d81ee82eb0fc2,
     type_description_1,
     par_self,
     par_loop
 );


 // Release cached frame if used for exception.
 if (frame_9ee1093da0cbd7872a3d81ee82eb0fc2 == cache_frame_9ee1093da0cbd7872a3d81ee82eb0fc2) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_9ee1093da0cbd7872a3d81ee82eb0fc2);
     cache_frame_9ee1093da0cbd7872a3d81ee82eb0fc2 = NULL;
 }

 assertFrameObject(frame_9ee1093da0cbd7872a3d81ee82eb0fc2);

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


static PyObject *impl_aiohttp$client_proto$$$function__2_upgraded(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_5fa25d659036a96c7df959b8916b19d1;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_5fa25d659036a96c7df959b8916b19d1 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_5fa25d659036a96c7df959b8916b19d1)) {
     Py_XDECREF(cache_frame_5fa25d659036a96c7df959b8916b19d1);

#if _DEBUG_REFCOUNTS
     if (cache_frame_5fa25d659036a96c7df959b8916b19d1 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_5fa25d659036a96c7df959b8916b19d1 = MAKE_FUNCTION_FRAME(tstate, codeobj_5fa25d659036a96c7df959b8916b19d1, module_aiohttp$client_proto, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_5fa25d659036a96c7df959b8916b19d1->m_type_description == NULL);
 frame_5fa25d659036a96c7df959b8916b19d1 = cache_frame_5fa25d659036a96c7df959b8916b19d1;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_5fa25d659036a96c7df959b8916b19d1);
 assert(Py_REFCNT(frame_5fa25d659036a96c7df959b8916b19d1) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[11]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;
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
     exception_tb = MAKE_TRACEBACK(frame_5fa25d659036a96c7df959b8916b19d1, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_5fa25d659036a96c7df959b8916b19d1->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_5fa25d659036a96c7df959b8916b19d1, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_5fa25d659036a96c7df959b8916b19d1,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_5fa25d659036a96c7df959b8916b19d1 == cache_frame_5fa25d659036a96c7df959b8916b19d1) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_5fa25d659036a96c7df959b8916b19d1);
     cache_frame_5fa25d659036a96c7df959b8916b19d1 = NULL;
 }

 assertFrameObject(frame_5fa25d659036a96c7df959b8916b19d1);

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


static PyObject *impl_aiohttp$client_proto$$$function__3_should_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_19b4340850a38dec0d6dd7dc10a5cab1;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_19b4340850a38dec0d6dd7dc10a5cab1 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_19b4340850a38dec0d6dd7dc10a5cab1)) {
     Py_XDECREF(cache_frame_19b4340850a38dec0d6dd7dc10a5cab1);

#if _DEBUG_REFCOUNTS
     if (cache_frame_19b4340850a38dec0d6dd7dc10a5cab1 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_19b4340850a38dec0d6dd7dc10a5cab1 = MAKE_FUNCTION_FRAME(tstate, codeobj_19b4340850a38dec0d6dd7dc10a5cab1, module_aiohttp$client_proto, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_19b4340850a38dec0d6dd7dc10a5cab1->m_type_description == NULL);
 frame_19b4340850a38dec0d6dd7dc10a5cab1 = cache_frame_19b4340850a38dec0d6dd7dc10a5cab1;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_19b4340850a38dec0d6dd7dc10a5cab1);
 assert(Py_REFCNT(frame_19b4340850a38dec0d6dd7dc10a5cab1) == 2);

 // Framed code:
 {
  nuitka_bool tmp_condition_result_1;
  int tmp_or_left_truth_1;
  nuitka_bool tmp_or_left_value_1;
  nuitka_bool tmp_or_right_value_1;
  int tmp_and_left_truth_1;
  nuitka_bool tmp_and_left_value_1;
  nuitka_bool tmp_and_right_value_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_attribute_value_1;
  int tmp_truth_name_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;
   type_description_1 = "o";
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
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_19b4340850a38dec0d6dd7dc10a5cab1->m_frame.f_lineno = 53;
  tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[17]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  tmp_or_left_value_1 = tmp_and_right_value_1;
  goto and_end_1;
  and_left_1:;
  tmp_or_left_value_1 = tmp_and_left_value_1;
  and_end_1:;
  tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_or_left_truth_1 == 1) {
      goto or_left_1;
  } else {
      goto or_right_1;
  }
  or_right_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[11]);
  if (tmp_attribute_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_1);

   exception_lineno = 53;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_1);
  tmp_condition_result_1 = tmp_or_right_value_1;
  goto or_end_1;
  or_left_1:;
  tmp_condition_result_1 = tmp_or_left_value_1;
  or_end_1:;
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 tmp_return_value = Py_True;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_1:;
 {
  int tmp_or_left_truth_2;
  PyObject *tmp_or_left_value_2;
  PyObject *tmp_or_right_value_2;
  PyObject *tmp_expression_value_4;
  int tmp_or_left_truth_3;
  PyObject *tmp_or_left_value_3;
  PyObject *tmp_or_right_value_3;
  PyObject *tmp_expression_value_5;
  int tmp_or_left_truth_4;
  PyObject *tmp_or_left_value_4;
  PyObject *tmp_or_right_value_4;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  PyObject *tmp_called_instance_2;
  int tmp_or_left_truth_5;
  PyObject *tmp_or_left_value_5;
  PyObject *tmp_or_right_value_5;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  PyObject *tmp_expression_value_6;
  int tmp_or_left_truth_6;
  PyObject *tmp_or_left_value_6;
  PyObject *tmp_or_right_value_6;
  PyObject *tmp_cmp_expr_left_4;
  nuitka_digit tmp_cmp_expr_right_4;
  PyObject *tmp_len_arg_1;
  bool tmp_tmp_or_left_value_6_cbool_1;
  PyObject *tmp_value_value_1;
  PyObject *tmp_expression_value_7;
  CHECK_OBJECT(par_self);
  tmp_expression_value_4 = par_self;
  tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[4]);
  if (tmp_or_left_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 57;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
  if (tmp_or_left_truth_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_or_left_value_2);

   exception_lineno = 57;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  if (tmp_or_left_truth_2 == 1) {
      goto or_left_2;
  } else {
      goto or_right_2;
  }
  or_right_2:;
  Py_DECREF(tmp_or_left_value_2);
  CHECK_OBJECT(par_self);
  tmp_expression_value_5 = par_self;
  tmp_or_left_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[11]);
  if (tmp_or_left_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
  if (tmp_or_left_truth_3 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_or_left_value_3);

   exception_lineno = 58;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  if (tmp_or_left_truth_3 == 1) {
      goto or_left_3;
  } else {
      goto or_right_3;
  }
  or_right_3:;
  Py_DECREF(tmp_or_left_value_3);
  CHECK_OBJECT(par_self);
  tmp_called_instance_2 = par_self;
  frame_19b4340850a38dec0d6dd7dc10a5cab1->m_frame.f_lineno = 59;
  tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[18]);
  if (tmp_cmp_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_2 = Py_None;
  tmp_or_left_value_4 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
  Py_DECREF(tmp_cmp_expr_left_2);
  tmp_or_left_truth_4 = CHECK_IF_TRUE(tmp_or_left_value_4);
  if (tmp_or_left_truth_4 == 1) {
      goto or_left_4;
  } else {
      goto or_right_4;
  }
  or_right_4:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_6 = par_self;
  tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[7]);
  if (tmp_cmp_expr_left_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_3 = Py_None;
  tmp_or_left_value_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? Py_True : Py_False;
  Py_DECREF(tmp_cmp_expr_left_3);
  tmp_or_left_truth_5 = CHECK_IF_TRUE(tmp_or_left_value_5);
  if (tmp_or_left_truth_5 == 1) {
      goto or_left_5;
  } else {
      goto or_right_5;
  }
  or_right_5:;
  CHECK_OBJECT(par_self);
  tmp_len_arg_1 = par_self;
  tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
  if (tmp_cmp_expr_left_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 61;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_4 = 0;
  tmp_tmp_or_left_value_6_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
  Py_DECREF(tmp_cmp_expr_left_4);
  tmp_or_left_value_6 = (tmp_tmp_or_left_value_6_cbool_1 != false) ? Py_True : Py_False;
  tmp_or_left_truth_6 = CHECK_IF_TRUE(tmp_or_left_value_6);
  if (tmp_or_left_truth_6 == 1) {
      goto or_left_6;
  } else {
      goto or_right_6;
  }
  or_right_6:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_7 = par_self;
  tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[10]);
  if (tmp_value_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
  Py_DECREF(tmp_value_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_or_right_value_6 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_or_right_value_5 = tmp_or_right_value_6;
  goto or_end_6;
  or_left_6:;
  tmp_or_right_value_5 = tmp_or_left_value_6;
  or_end_6:;
  tmp_or_right_value_4 = tmp_or_right_value_5;
  goto or_end_5;
  or_left_5:;
  tmp_or_right_value_4 = tmp_or_left_value_5;
  or_end_5:;
  tmp_or_right_value_3 = tmp_or_right_value_4;
  goto or_end_4;
  or_left_4:;
  tmp_or_right_value_3 = tmp_or_left_value_4;
  or_end_4:;
  Py_INCREF(tmp_or_right_value_3);
  tmp_or_right_value_2 = tmp_or_right_value_3;
  goto or_end_3;
  or_left_3:;
  tmp_or_right_value_2 = tmp_or_left_value_3;
  or_end_3:;
  tmp_return_value = tmp_or_right_value_2;
  goto or_end_2;
  or_left_2:;
  tmp_return_value = tmp_or_left_value_2;
  or_end_2:;
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
     exception_tb = MAKE_TRACEBACK(frame_19b4340850a38dec0d6dd7dc10a5cab1, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_19b4340850a38dec0d6dd7dc10a5cab1->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_19b4340850a38dec0d6dd7dc10a5cab1, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_19b4340850a38dec0d6dd7dc10a5cab1,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_19b4340850a38dec0d6dd7dc10a5cab1 == cache_frame_19b4340850a38dec0d6dd7dc10a5cab1) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_19b4340850a38dec0d6dd7dc10a5cab1);
     cache_frame_19b4340850a38dec0d6dd7dc10a5cab1 = NULL;
 }

 assertFrameObject(frame_19b4340850a38dec0d6dd7dc10a5cab1);

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


static PyObject *impl_aiohttp$client_proto$$$function__4_force_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_1f491321dc4e7ea8d0ae18a47d521d69;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_1f491321dc4e7ea8d0ae18a47d521d69 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_1f491321dc4e7ea8d0ae18a47d521d69)) {
     Py_XDECREF(cache_frame_1f491321dc4e7ea8d0ae18a47d521d69);

#if _DEBUG_REFCOUNTS
     if (cache_frame_1f491321dc4e7ea8d0ae18a47d521d69 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_1f491321dc4e7ea8d0ae18a47d521d69 = MAKE_FUNCTION_FRAME(tstate, codeobj_1f491321dc4e7ea8d0ae18a47d521d69, module_aiohttp$client_proto, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_1f491321dc4e7ea8d0ae18a47d521d69->m_type_description == NULL);
 frame_1f491321dc4e7ea8d0ae18a47d521d69 = cache_frame_1f491321dc4e7ea8d0ae18a47d521d69;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_1f491321dc4e7ea8d0ae18a47d521d69);
 assert(Py_REFCNT(frame_1f491321dc4e7ea8d0ae18a47d521d69) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_True;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_1f491321dc4e7ea8d0ae18a47d521d69, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_1f491321dc4e7ea8d0ae18a47d521d69->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_1f491321dc4e7ea8d0ae18a47d521d69, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_1f491321dc4e7ea8d0ae18a47d521d69,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_1f491321dc4e7ea8d0ae18a47d521d69 == cache_frame_1f491321dc4e7ea8d0ae18a47d521d69) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_1f491321dc4e7ea8d0ae18a47d521d69);
     cache_frame_1f491321dc4e7ea8d0ae18a47d521d69 = NULL;
 }

 assertFrameObject(frame_1f491321dc4e7ea8d0ae18a47d521d69);

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


static PyObject *impl_aiohttp$client_proto$$$function__5_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *var_transport = NULL;
 struct Nuitka_FrameObject *frame_4503297db622a82c0ae395dce6c04dfb;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_4503297db622a82c0ae395dce6c04dfb = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_4503297db622a82c0ae395dce6c04dfb)) {
     Py_XDECREF(cache_frame_4503297db622a82c0ae395dce6c04dfb);

#if _DEBUG_REFCOUNTS
     if (cache_frame_4503297db622a82c0ae395dce6c04dfb == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_4503297db622a82c0ae395dce6c04dfb = MAKE_FUNCTION_FRAME(tstate, codeobj_4503297db622a82c0ae395dce6c04dfb, module_aiohttp$client_proto, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_4503297db622a82c0ae395dce6c04dfb->m_type_description == NULL);
 frame_4503297db622a82c0ae395dce6c04dfb = cache_frame_4503297db622a82c0ae395dce6c04dfb;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_4503297db622a82c0ae395dce6c04dfb);
 assert(Py_REFCNT(frame_4503297db622a82c0ae395dce6c04dfb) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  assert(var_transport == NULL);
  var_transport = tmp_assign_source_1;
 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(var_transport);
  tmp_cmp_expr_left_1 = var_transport;
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(var_transport);
  tmp_called_instance_1 = var_transport;
  frame_4503297db622a82c0ae395dce6c04dfb->m_frame.f_lineno = 71;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[20]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 71;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 72;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_call_result_2;
  CHECK_OBJECT(par_self);
  tmp_called_instance_2 = par_self;
  frame_4503297db622a82c0ae395dce6c04dfb->m_frame.f_lineno = 74;
  tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[21]);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 74;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 branch_no_1:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_4503297db622a82c0ae395dce6c04dfb, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_4503297db622a82c0ae395dce6c04dfb->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_4503297db622a82c0ae395dce6c04dfb, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_4503297db622a82c0ae395dce6c04dfb,
     type_description_1,
     par_self,
     var_transport
 );


 // Release cached frame if used for exception.
 if (frame_4503297db622a82c0ae395dce6c04dfb == cache_frame_4503297db622a82c0ae395dce6c04dfb) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_4503297db622a82c0ae395dce6c04dfb);
     cache_frame_4503297db622a82c0ae395dce6c04dfb = NULL;
 }

 assertFrameObject(frame_4503297db622a82c0ae395dce6c04dfb);

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
 CHECK_OBJECT(var_transport);
 Py_DECREF(var_transport);
 var_transport = NULL;
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

 Py_XDECREF(var_transport);
 var_transport = NULL;
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


static PyObject *impl_aiohttp$client_proto$$$function__6_is_connected(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_a9074fe2f69d7811be51aad8b7925e70;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 static struct Nuitka_FrameObject *cache_frame_a9074fe2f69d7811be51aad8b7925e70 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_a9074fe2f69d7811be51aad8b7925e70)) {
     Py_XDECREF(cache_frame_a9074fe2f69d7811be51aad8b7925e70);

#if _DEBUG_REFCOUNTS
     if (cache_frame_a9074fe2f69d7811be51aad8b7925e70 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_a9074fe2f69d7811be51aad8b7925e70 = MAKE_FUNCTION_FRAME(tstate, codeobj_a9074fe2f69d7811be51aad8b7925e70, module_aiohttp$client_proto, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_a9074fe2f69d7811be51aad8b7925e70->m_type_description == NULL);
 frame_a9074fe2f69d7811be51aad8b7925e70 = cache_frame_a9074fe2f69d7811be51aad8b7925e70;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_a9074fe2f69d7811be51aad8b7925e70);
 assert(Py_REFCNT(frame_a9074fe2f69d7811be51aad8b7925e70) == 2);

 // Framed code:
 {
  int tmp_and_left_truth_1;
  PyObject *tmp_and_left_value_1;
  PyObject *tmp_and_right_value_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
  Py_DECREF(tmp_cmp_expr_left_1);
  tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[19]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_a9074fe2f69d7811be51aad8b7925e70->m_frame.f_lineno = 77;
  tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[22]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_1 = (tmp_res == 0) ? Py_True : Py_False;
  tmp_return_value = tmp_and_right_value_1;
  goto and_end_1;
  and_left_1:;
  tmp_return_value = tmp_and_left_value_1;
  and_end_1:;
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
     exception_tb = MAKE_TRACEBACK(frame_a9074fe2f69d7811be51aad8b7925e70, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_a9074fe2f69d7811be51aad8b7925e70->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_a9074fe2f69d7811be51aad8b7925e70, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_a9074fe2f69d7811be51aad8b7925e70,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_a9074fe2f69d7811be51aad8b7925e70 == cache_frame_a9074fe2f69d7811be51aad8b7925e70) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_a9074fe2f69d7811be51aad8b7925e70);
     cache_frame_a9074fe2f69d7811be51aad8b7925e70 = NULL;
 }

 assertFrameObject(frame_a9074fe2f69d7811be51aad8b7925e70);

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


static PyObject *impl_aiohttp$client_proto$$$function__7_connection_lost(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_exc = python_pars[1];
 PyObject *var_original_connection_error = NULL;
 PyObject *var_reraised_exc = NULL;
 nuitka_bool var_connection_closed_cleanly = NUITKA_BOOL_UNASSIGNED;
 PyObject *var_uncompleted = NULL;
 PyObject *var_underlying_exc = NULL;
 PyObject *var_client_payload_exc_msg = NULL;
 PyObject *var_underlying_non_eof_exc = NULL;
 PyObject *tmp_with_1__enter = NULL;
 PyObject *tmp_with_1__exit = NULL;
 nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
 PyObject *tmp_with_1__source = NULL;
 struct Nuitka_FrameObject *frame_4b4ab96c79e30c8d9db8aad1e87af377;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
 struct Nuitka_ExceptionStackItem exception_preserved_2;
 PyObject *exception_keeper_type_6;
 PyObject *exception_keeper_value_6;
 PyTracebackObject *exception_keeper_tb_6;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
 PyObject *exception_keeper_type_7;
 PyObject *exception_keeper_value_7;
 PyTracebackObject *exception_keeper_tb_7;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
 static struct Nuitka_FrameObject *cache_frame_4b4ab96c79e30c8d9db8aad1e87af377 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_8;
 PyObject *exception_keeper_value_8;
 PyTracebackObject *exception_keeper_tb_8;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_4b4ab96c79e30c8d9db8aad1e87af377)) {
     Py_XDECREF(cache_frame_4b4ab96c79e30c8d9db8aad1e87af377);

#if _DEBUG_REFCOUNTS
     if (cache_frame_4b4ab96c79e30c8d9db8aad1e87af377 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_4b4ab96c79e30c8d9db8aad1e87af377 = MAKE_FUNCTION_FRAME(tstate, codeobj_4b4ab96c79e30c8d9db8aad1e87af377, module_aiohttp$client_proto, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_4b4ab96c79e30c8d9db8aad1e87af377->m_type_description == NULL);
 frame_4b4ab96c79e30c8d9db8aad1e87af377 = cache_frame_4b4ab96c79e30c8d9db8aad1e87af377;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_4b4ab96c79e30c8d9db8aad1e87af377);
 assert(Py_REFCNT(frame_4b4ab96c79e30c8d9db8aad1e87af377) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 80;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[21]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 80;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assign_source_1;
  CHECK_OBJECT(par_exc);
  tmp_assign_source_1 = par_exc;
  assert(var_original_connection_error == NULL);
  Py_INCREF(tmp_assign_source_1);
  var_original_connection_error = tmp_assign_source_1;
 }
 {
  PyObject *tmp_assign_source_2;
  CHECK_OBJECT(var_original_connection_error);
  tmp_assign_source_2 = var_original_connection_error;
  assert(var_reraised_exc == NULL);
  Py_INCREF(tmp_assign_source_2);
  var_reraised_exc = tmp_assign_source_2;
 }
 {
  nuitka_bool tmp_assign_source_3;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(var_original_connection_error);
  tmp_cmp_expr_left_1 = var_original_connection_error;
  tmp_cmp_expr_right_1 = Py_None;
  tmp_assign_source_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  var_connection_closed_cleanly = tmp_assign_source_3;
 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
  if (tmp_cmp_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 87;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_2 = Py_None;
  tmp_condition_result_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_2);
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 // Tried code:
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_called_value_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[23]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "oooobooooc";
      goto try_except_handler_2;
  }
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 88;
  tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[24]);

  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "oooobooooc";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__source == NULL);
  tmp_with_1__source = tmp_assign_source_4;
 }
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(tmp_with_1__source);
  tmp_expression_value_2 = tmp_with_1__source;
  tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[25]);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "oooobooooc";
      goto try_except_handler_2;
  }
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 88;
  tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
  Py_DECREF(tmp_called_value_2);
  if (tmp_assign_source_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "oooobooooc";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__enter == NULL);
  tmp_with_1__enter = tmp_assign_source_5;
 }
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(tmp_with_1__source);
  tmp_expression_value_3 = tmp_with_1__source;
  tmp_assign_source_6 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, mod_consts[26]);
  if (tmp_assign_source_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "oooobooooc";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__exit == NULL);
  tmp_with_1__exit = tmp_assign_source_6;
 }
 {
  nuitka_bool tmp_assign_source_7;
  tmp_assign_source_7 = NUITKA_BOOL_TRUE;
  tmp_with_1__indicator = tmp_assign_source_7;
 }
 // Tried code:
 // Tried code:
 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_call_result_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_4 = par_self;
  tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[7]);
  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;
   type_description_1 = "oooobooooc";
      goto try_except_handler_4;
  }
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 89;
  tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[27]);
  Py_DECREF(tmp_called_instance_2);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;
   type_description_1 = "oooobooooc";
      goto try_except_handler_4;
  }
  Py_DECREF(tmp_call_result_2);
 }
 goto try_end_1;
 // Exception handler code:
 try_except_handler_4:;
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
     exception_keeper_tb_1 = MAKE_TRACEBACK(frame_4b4ab96c79e30c8d9db8aad1e87af377, exception_keeper_lineno_1);
 } else if (exception_keeper_lineno_1 != 0) {
     exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_4b4ab96c79e30c8d9db8aad1e87af377, exception_keeper_lineno_1);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
 // Tried code:
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_3 = PyExc_BaseException;
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
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
  nuitka_bool tmp_assign_source_8;
  tmp_assign_source_8 = NUITKA_BOOL_FALSE;
  tmp_with_1__indicator = tmp_assign_source_8;
 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_called_value_3;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_args_element_value_3;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_3 = tmp_with_1__exit;
  tmp_args_element_value_1 = EXC_TYPE(PyThreadState_GET());
  tmp_args_element_value_2 = EXC_VALUE(PyThreadState_GET());
  tmp_args_element_value_3 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 88;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
      tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
  }

  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "oooobooooc";
      goto try_except_handler_5;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "oooobooooc";
      goto try_except_handler_5;
  }
  tmp_condition_result_3 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 88;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame) frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "oooobooooc";
 goto try_except_handler_5;
 branch_no_3:;
 goto branch_end_2;
 branch_no_2:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 88;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame) frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "oooobooooc";
 goto try_except_handler_5;
 branch_end_2:;
 goto try_end_2;
 // Exception handler code:
 try_except_handler_5:;
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

 goto try_except_handler_3;
 // End of try:
 try_end_2:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 goto try_end_1;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_1:;
 goto try_end_3;
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

 {
  bool tmp_condition_result_4;
  nuitka_bool tmp_cmp_expr_left_4;
  nuitka_bool tmp_cmp_expr_right_4;
  assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_4 = tmp_with_1__indicator;
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
  PyObject *tmp_called_value_4;
  PyObject *tmp_call_result_3;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_4 = tmp_with_1__exit;
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 88;
  tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_4, mod_consts[28]);

  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

   Py_DECREF(exception_keeper_type_3);
   Py_XDECREF(exception_keeper_value_3);
   Py_XDECREF(exception_keeper_tb_3);

   exception_lineno = 88;
   type_description_1 = "oooobooooc";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_3);
 }
 branch_no_4:;
 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto try_except_handler_2;
 // End of try:
 try_end_3:;
 {
  bool tmp_condition_result_5;
  nuitka_bool tmp_cmp_expr_left_5;
  nuitka_bool tmp_cmp_expr_right_5;
  assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_5 = tmp_with_1__indicator;
  tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
  tmp_condition_result_5 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
  if (tmp_condition_result_5 != false) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 {
  PyObject *tmp_called_value_5;
  PyObject *tmp_call_result_4;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_5 = tmp_with_1__exit;
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 88;
  tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_5, mod_consts[28]);

  if (tmp_call_result_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "oooobooooc";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_4);
 }
 branch_no_5:;
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

 Py_XDECREF(tmp_with_1__source);
 tmp_with_1__source = NULL;
 Py_XDECREF(tmp_with_1__enter);
 tmp_with_1__enter = NULL;
 Py_XDECREF(tmp_with_1__exit);
 tmp_with_1__exit = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_4;
 exception_value = exception_keeper_value_4;
 exception_tb = exception_keeper_tb_4;
 exception_lineno = exception_keeper_lineno_4;

 goto frame_exception_exit_1;
 // End of try:
 try_end_4:;
 CHECK_OBJECT(tmp_with_1__source);
 Py_DECREF(tmp_with_1__source);
 tmp_with_1__source = NULL;
 CHECK_OBJECT(tmp_with_1__enter);
 Py_DECREF(tmp_with_1__enter);
 tmp_with_1__enter = NULL;
 CHECK_OBJECT(tmp_with_1__exit);
 Py_DECREF(tmp_with_1__exit);
 tmp_with_1__exit = NULL;
 branch_no_1:;
 {
  PyObject *tmp_assign_source_9;
  tmp_assign_source_9 = Py_None;
  assert(var_uncompleted == NULL);
  Py_INCREF(tmp_assign_source_9);
  var_uncompleted = tmp_assign_source_9;
 }
 {
  bool tmp_condition_result_6;
  PyObject *tmp_cmp_expr_left_6;
  PyObject *tmp_cmp_expr_right_6;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(par_self);
  tmp_expression_value_5 = par_self;
  tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[12]);
  if (tmp_cmp_expr_left_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_6 = Py_None;
  tmp_condition_result_6 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_6);
  if (tmp_condition_result_6 != false) {
      goto branch_yes_6;
  } else {
      goto branch_no_6;
  }
 }
 branch_yes_6:;
 // Tried code:
 {
  PyObject *tmp_assign_source_10;
  PyObject *tmp_called_instance_3;
  PyObject *tmp_expression_value_6;
  CHECK_OBJECT(par_self);
  tmp_expression_value_6 = par_self;
  tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[12]);
  if (tmp_called_instance_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;
   type_description_1 = "oooobooooc";
      goto try_except_handler_6;
  }
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 94;
  tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[27]);
  Py_DECREF(tmp_called_instance_3);
  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;
   type_description_1 = "oooobooooc";
      goto try_except_handler_6;
  }
  {
      PyObject *old = var_uncompleted;
      assert(old != NULL);
      var_uncompleted = tmp_assign_source_10;
      Py_DECREF(old);
  }

 }
 goto try_end_5;
 // Exception handler code:
 try_except_handler_6:;
 exception_keeper_type_5 = exception_type;
 exception_keeper_value_5 = exception_value;
 exception_keeper_tb_5 = exception_tb;
 exception_keeper_lineno_5 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 // Preserve existing published exception id 2.
 exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_5 == NULL) {
     exception_keeper_tb_5 = MAKE_TRACEBACK(frame_4b4ab96c79e30c8d9db8aad1e87af377, exception_keeper_lineno_5);
 } else if (exception_keeper_lineno_5 != 0) {
     exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_4b4ab96c79e30c8d9db8aad1e87af377, exception_keeper_lineno_5);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
 // Tried code:
 {
  bool tmp_condition_result_7;
  PyObject *tmp_cmp_expr_left_7;
  PyObject *tmp_cmp_expr_right_7;
  tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_7 = PyExc_Exception;
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
  assert(!(tmp_res == -1));
  tmp_condition_result_7 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_7 != false) {
      goto branch_yes_7;
  } else {
      goto branch_no_7;
  }
 }
 branch_yes_7:;
 {
  PyObject *tmp_assign_source_11;
  tmp_assign_source_11 = EXC_VALUE(PyThreadState_GET());
  assert(var_underlying_exc == NULL);
  Py_INCREF(tmp_assign_source_11);
  var_underlying_exc = tmp_assign_source_11;
 }
 // Tried code:
 {
  bool tmp_condition_result_8;
  PyObject *tmp_cmp_expr_left_8;
  PyObject *tmp_cmp_expr_right_8;
  PyObject *tmp_expression_value_7;
  CHECK_OBJECT(par_self);
  tmp_expression_value_7 = par_self;
  tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[5]);
  if (tmp_cmp_expr_left_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 96;
   type_description_1 = "oooobooooc";
      goto try_except_handler_8;
  }
  tmp_cmp_expr_right_8 = Py_None;
  tmp_condition_result_8 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_8);
  if (tmp_condition_result_8 != false) {
      goto branch_yes_8;
  } else {
      goto branch_no_8;
  }
 }
 branch_yes_8:;
 {
  PyObject *tmp_assign_source_12;
  PyObject *tmp_string_concat_values_1;
  PyObject *tmp_tuple_element_1;
  tmp_tuple_element_1 = mod_consts[29];
  tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_format_value_1;
   PyObject *tmp_operand_value_2;
   PyObject *tmp_format_spec_1;
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
   CHECK_OBJECT(var_underlying_exc);
   tmp_operand_value_2 = var_underlying_exc;
   tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
   if (tmp_format_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 98;
    type_description_1 = "oooobooooc";
       goto tuple_build_exception_1;
   }
   tmp_format_spec_1 = mod_consts[30];
   tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
   Py_DECREF(tmp_format_value_1);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 98;
    type_description_1 = "oooobooooc";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_string_concat_values_1);
  goto try_except_handler_8;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_assign_source_12 = PyUnicode_Join(mod_consts[30], tmp_string_concat_values_1);
  Py_DECREF(tmp_string_concat_values_1);
  if (tmp_assign_source_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 98;
   type_description_1 = "oooobooooc";
      goto try_except_handler_8;
  }
  assert(var_client_payload_exc_msg == NULL);
  var_client_payload_exc_msg = tmp_assign_source_12;
 }
 {
  bool tmp_condition_result_9;
  PyObject *tmp_operand_value_3;
  assert(var_connection_closed_cleanly != NUITKA_BOOL_UNASSIGNED);
  tmp_operand_value_3 = (var_connection_closed_cleanly == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
  assert(!(tmp_res == -1));
  tmp_condition_result_9 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_9 != false) {
      goto branch_yes_9;
  } else {
      goto branch_no_9;
  }
 }
 branch_yes_9:;
 {
  PyObject *tmp_assign_source_13;
  PyObject *tmp_string_concat_values_2;
  PyObject *tmp_tuple_element_2;
  PyObject *tmp_format_value_2;
  PyObject *tmp_unicode_arg_1;
  PyObject *tmp_format_spec_2;
  CHECK_OBJECT(var_client_payload_exc_msg);
  tmp_unicode_arg_1 = var_client_payload_exc_msg;
  tmp_format_value_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
  if (tmp_format_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;
   type_description_1 = "oooobooooc";
      goto try_except_handler_8;
  }
  tmp_format_spec_2 = mod_consts[30];
  tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
  Py_DECREF(tmp_format_value_2);
  if (tmp_tuple_element_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;
   type_description_1 = "oooobooooc";
      goto try_except_handler_8;
  }
  tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 3);
  {
   PyObject *tmp_format_value_3;
   PyObject *tmp_operand_value_4;
   PyObject *tmp_format_spec_3;
   PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
   tmp_tuple_element_2 = mod_consts[31];
   PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
   CHECK_OBJECT(var_original_connection_error);
   tmp_operand_value_4 = var_original_connection_error;
   tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
   if (tmp_format_value_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 103;
    type_description_1 = "oooobooooc";
       goto tuple_build_exception_2;
   }
   tmp_format_spec_3 = mod_consts[30];
   tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
   Py_DECREF(tmp_format_value_3);
   if (tmp_tuple_element_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 103;
    type_description_1 = "oooobooooc";
       goto tuple_build_exception_2;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
  }
  goto tuple_build_noexception_2;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_2:;
  Py_DECREF(tmp_string_concat_values_2);
  goto try_except_handler_8;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_2:;
  tmp_assign_source_13 = PyUnicode_Join(mod_consts[30], tmp_string_concat_values_2);
  Py_DECREF(tmp_string_concat_values_2);
  if (tmp_assign_source_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "oooobooooc";
      goto try_except_handler_8;
  }
  {
      PyObject *old = var_client_payload_exc_msg;
      assert(old != NULL);
      var_client_payload_exc_msg = tmp_assign_source_13;
      Py_DECREF(old);
  }

 }
 branch_no_9:;
 {
  PyObject *tmp_called_value_6;
  PyObject *tmp_call_result_5;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_args_element_value_5;
  PyObject *tmp_called_value_7;
  PyObject *tmp_args_element_value_6;
  PyObject *tmp_args_element_value_7;
  tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[32]);

  if (unlikely(tmp_called_value_6 == NULL)) {
      tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
  }

  if (tmp_called_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;
   type_description_1 = "oooobooooc";
      goto try_except_handler_8;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_8 = par_self;
  tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[5]);
  if (tmp_args_element_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;
   type_description_1 = "oooobooooc";
      goto try_except_handler_8;
  }
  tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[33]);

  if (unlikely(tmp_called_value_7 == NULL)) {
      tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
  }

  if (tmp_called_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_args_element_value_4);

   exception_lineno = 107;
   type_description_1 = "oooobooooc";
      goto try_except_handler_8;
  }
  CHECK_OBJECT(var_client_payload_exc_msg);
  tmp_args_element_value_6 = var_client_payload_exc_msg;
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 107;
  tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_6);
  if (tmp_args_element_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_args_element_value_4);

   exception_lineno = 107;
   type_description_1 = "oooobooooc";
      goto try_except_handler_8;
  }
  CHECK_OBJECT(var_underlying_exc);
  tmp_args_element_value_7 = var_underlying_exc;
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 105;
  {
      PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_7};
      tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
  }

  Py_DECREF(tmp_args_element_value_4);
  Py_DECREF(tmp_args_element_value_5);
  if (tmp_call_result_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;
   type_description_1 = "oooobooooc";
      goto try_except_handler_8;
  }
  Py_DECREF(tmp_call_result_5);
 }
 branch_no_8:;
 goto try_end_6;
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

 Py_XDECREF(var_underlying_exc);
 var_underlying_exc = NULL;

 // Re-raise.
 exception_type = exception_keeper_type_6;
 exception_value = exception_keeper_value_6;
 exception_tb = exception_keeper_tb_6;
 exception_lineno = exception_keeper_lineno_6;

 goto try_except_handler_7;
 // End of try:
 try_end_6:;
 Py_XDECREF(var_underlying_exc);
 var_underlying_exc = NULL;

 goto branch_end_7;
 branch_no_7:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 93;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame) frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "oooobooooc";
 goto try_except_handler_7;
 branch_end_7:;
 goto try_end_7;
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

 // Restore previous exception id 2.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

 // Re-raise.
 exception_type = exception_keeper_type_7;
 exception_value = exception_keeper_value_7;
 exception_tb = exception_keeper_tb_7;
 exception_lineno = exception_keeper_lineno_7;

 goto frame_exception_exit_1;
 // End of try:
 try_end_7:;
 // Restore previous exception id 2.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

 goto try_end_5;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_5:;
 branch_no_6:;
 {
  bool tmp_condition_result_10;
  PyObject *tmp_operand_value_5;
  PyObject *tmp_called_instance_4;
  CHECK_OBJECT(par_self);
  tmp_called_instance_4 = par_self;
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 111;
  tmp_operand_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[17]);
  if (tmp_operand_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 111;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
  Py_DECREF(tmp_operand_value_5);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 111;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_10 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_10 != false) {
      goto branch_yes_10;
  } else {
      goto branch_no_10;
  }
 }
 branch_yes_10:;
 {
  nuitka_bool tmp_condition_result_11;
  PyObject *tmp_isinstance_inst_1;
  PyObject *tmp_isinstance_cls_1;
  CHECK_OBJECT(var_original_connection_error);
  tmp_isinstance_inst_1 = var_original_connection_error;
  tmp_isinstance_cls_1 = PyExc_OSError;
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 112;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_11 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
      goto branch_yes_11;
  } else {
      goto branch_no_11;
  }
 }
 branch_yes_11:;
 {
  PyObject *tmp_assign_source_14;
  PyObject *tmp_dircall_arg1_1;
  PyObject *tmp_dircall_arg2_1;
  PyObject *tmp_expression_value_9;
  tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[34]);

  if (unlikely(tmp_dircall_arg1_1 == NULL)) {
      tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
  }

  if (tmp_dircall_arg1_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_original_connection_error);
  tmp_expression_value_9 = var_original_connection_error;
  tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[35]);
  if (tmp_dircall_arg2_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  Py_INCREF(tmp_dircall_arg1_1);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
      tmp_assign_source_14 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
  }
  if (tmp_assign_source_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = var_reraised_exc;
      assert(old != NULL);
      var_reraised_exc = tmp_assign_source_14;
      Py_DECREF(old);
  }

 }
 branch_no_11:;
 {
  bool tmp_condition_result_12;
  assert(var_connection_closed_cleanly != NUITKA_BOOL_UNASSIGNED);
  tmp_condition_result_12 = var_connection_closed_cleanly == NUITKA_BOOL_TRUE;
  if (tmp_condition_result_12 != false) {
      goto branch_yes_12;
  } else {
      goto branch_no_12;
  }
 }
 branch_yes_12:;
 {
  PyObject *tmp_assign_source_15;
  PyObject *tmp_called_value_8;
  PyObject *tmp_args_element_value_8;
  tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[36]);

  if (unlikely(tmp_called_value_8 == NULL)) {
      tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
  }

  if (tmp_called_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 115;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_uncompleted);
  tmp_args_element_value_8 = var_uncompleted;
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 115;
  tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
  if (tmp_assign_source_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 115;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = var_reraised_exc;
      assert(old != NULL);
      var_reraised_exc = tmp_assign_source_15;
      Py_DECREF(old);
  }

 }
 branch_no_12:;
 {
  PyObject *tmp_assign_source_16;
  bool tmp_condition_result_13;
  assert(var_connection_closed_cleanly != NUITKA_BOOL_UNASSIGNED);
  tmp_condition_result_13 = var_connection_closed_cleanly == NUITKA_BOOL_TRUE;
  if (tmp_condition_result_13 != false) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  tmp_assign_source_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[37]);

  if (unlikely(tmp_assign_source_16 == NULL)) {
      tmp_assign_source_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
  }

  if (tmp_assign_source_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 119;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  CHECK_OBJECT(var_original_connection_error);
  tmp_assign_source_16 = var_original_connection_error;
  condexpr_end_1:;
  assert(var_underlying_non_eof_exc == NULL);
  Py_INCREF(tmp_assign_source_16);
  var_underlying_non_eof_exc = tmp_assign_source_16;
 }
 {
  bool tmp_condition_result_14;
  PyObject *tmp_cmp_expr_left_9;
  PyObject *tmp_cmp_expr_right_9;
  CHECK_OBJECT(var_underlying_non_eof_exc);
  tmp_cmp_expr_left_9 = var_underlying_non_eof_exc;
  tmp_cmp_expr_right_9 = Py_None;
  tmp_condition_result_14 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
  if (tmp_condition_result_14 != false) {
      goto branch_yes_13;
  } else {
      goto branch_no_13;
  }
 }
 branch_yes_13:;
 {
  PyObject *tmp_raise_type_1;
  tmp_raise_type_1 = PyExc_AssertionError;
  exception_type = tmp_raise_type_1;
  Py_INCREF(tmp_raise_type_1);
  exception_lineno = 123;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "oooobooooc";
  goto frame_exception_exit_1;
 }
 branch_no_13:;
 {
  bool tmp_condition_result_15;
  PyObject *tmp_cmp_expr_left_10;
  PyObject *tmp_cmp_expr_right_10;
  CHECK_OBJECT(var_reraised_exc);
  tmp_cmp_expr_left_10 = var_reraised_exc;
  tmp_cmp_expr_right_10 = Py_None;
  tmp_condition_result_15 = (tmp_cmp_expr_left_10 == tmp_cmp_expr_right_10) ? true : false;
  if (tmp_condition_result_15 != false) {
      goto branch_yes_14;
  } else {
      goto branch_no_14;
  }
 }
 branch_yes_14:;
 {
  PyObject *tmp_raise_type_2;
  tmp_raise_type_2 = PyExc_AssertionError;
  exception_type = tmp_raise_type_2;
  Py_INCREF(tmp_raise_type_2);
  exception_lineno = 124;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "oooobooooc";
  goto frame_exception_exit_1;
 }
 branch_no_14:;
 {
  PyObject *tmp_called_instance_5;
  PyObject *tmp_call_result_6;
  PyObject *tmp_args_element_value_9;
  PyObject *tmp_args_element_value_10;
  CHECK_OBJECT(par_self);
  tmp_called_instance_5 = par_self;
  CHECK_OBJECT(var_reraised_exc);
  tmp_args_element_value_9 = var_reraised_exc;
  CHECK_OBJECT(var_underlying_non_eof_exc);
  tmp_args_element_value_10 = var_underlying_non_eof_exc;
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 125;
  {
      PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
      tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
          tstate,
          tmp_called_instance_5,
          mod_consts[32],
          call_args
      );
  }

  if (tmp_call_result_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 125;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_6);
 }
 branch_no_10:;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_True;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 127;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  tmp_assattr_value_3 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 129;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_assattr_target_4;
  tmp_assattr_value_4 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_4 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[7], tmp_assattr_value_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 130;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_5;
  PyObject *tmp_assattr_target_5;
  tmp_assattr_value_5 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_5 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[38], tmp_assattr_value_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 131;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_called_value_9;
  PyObject *tmp_expression_value_10;
  PyObject *tmp_type_arg_value_1;
  PyObject *tmp_object_arg_value_1;
  PyObject *tmp_call_result_7;
  PyObject *tmp_args_element_value_11;
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 133;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_self);
  tmp_object_arg_value_1 = par_self;
  tmp_expression_value_10 = BUILTIN_SUPER0(tstate, moduledict_aiohttp$client_proto, tmp_type_arg_value_1, tmp_object_arg_value_1);
  if (tmp_expression_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 133;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[40]);
  Py_DECREF(tmp_expression_value_10);
  if (tmp_called_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 133;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  if (var_reraised_exc == NULL) {
   Py_DECREF(tmp_called_value_9);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[41]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 133;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_11 = var_reraised_exc;
  frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame.f_lineno = 133;
  tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_11);
  Py_DECREF(tmp_called_value_9);
  if (tmp_call_result_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 133;
   type_description_1 = "oooobooooc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_7);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_4b4ab96c79e30c8d9db8aad1e87af377, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_4b4ab96c79e30c8d9db8aad1e87af377->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_4b4ab96c79e30c8d9db8aad1e87af377, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_4b4ab96c79e30c8d9db8aad1e87af377,
     type_description_1,
     par_self,
     par_exc,
     var_original_connection_error,
     var_reraised_exc,
     (int)var_connection_closed_cleanly,
     var_uncompleted,
     var_underlying_exc,
     var_client_payload_exc_msg,
     var_underlying_non_eof_exc,
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_4b4ab96c79e30c8d9db8aad1e87af377 == cache_frame_4b4ab96c79e30c8d9db8aad1e87af377) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_4b4ab96c79e30c8d9db8aad1e87af377);
     cache_frame_4b4ab96c79e30c8d9db8aad1e87af377 = NULL;
 }

 assertFrameObject(frame_4b4ab96c79e30c8d9db8aad1e87af377);

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
 CHECK_OBJECT(var_original_connection_error);
 Py_DECREF(var_original_connection_error);
 var_original_connection_error = NULL;
 Py_XDECREF(var_reraised_exc);
 var_reraised_exc = NULL;
 assert(var_connection_closed_cleanly != NUITKA_BOOL_UNASSIGNED);
 var_connection_closed_cleanly = NUITKA_BOOL_UNASSIGNED;
 CHECK_OBJECT(var_uncompleted);
 Py_DECREF(var_uncompleted);
 var_uncompleted = NULL;
 Py_XDECREF(var_client_payload_exc_msg);
 var_client_payload_exc_msg = NULL;
 Py_XDECREF(var_underlying_non_eof_exc);
 var_underlying_non_eof_exc = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_8 = exception_type;
 exception_keeper_value_8 = exception_value;
 exception_keeper_tb_8 = exception_tb;
 exception_keeper_lineno_8 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(var_original_connection_error);
 var_original_connection_error = NULL;
 Py_XDECREF(var_reraised_exc);
 var_reraised_exc = NULL;
 var_connection_closed_cleanly = NUITKA_BOOL_UNASSIGNED;
 Py_XDECREF(var_uncompleted);
 var_uncompleted = NULL;
 Py_XDECREF(var_client_payload_exc_msg);
 var_client_payload_exc_msg = NULL;
 Py_XDECREF(var_underlying_non_eof_exc);
 var_underlying_non_eof_exc = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_8;
 exception_value = exception_keeper_value_8;
 exception_tb = exception_keeper_tb_8;
 exception_lineno = exception_keeper_lineno_8;

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


static PyObject *impl_aiohttp$client_proto$$$function__8_eof_received(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_e60ae47dd26331bc553e2c0e9696bb71;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_e60ae47dd26331bc553e2c0e9696bb71 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_e60ae47dd26331bc553e2c0e9696bb71)) {
     Py_XDECREF(cache_frame_e60ae47dd26331bc553e2c0e9696bb71);

#if _DEBUG_REFCOUNTS
     if (cache_frame_e60ae47dd26331bc553e2c0e9696bb71 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_e60ae47dd26331bc553e2c0e9696bb71 = MAKE_FUNCTION_FRAME(tstate, codeobj_e60ae47dd26331bc553e2c0e9696bb71, module_aiohttp$client_proto, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_e60ae47dd26331bc553e2c0e9696bb71->m_type_description == NULL);
 frame_e60ae47dd26331bc553e2c0e9696bb71 = cache_frame_e60ae47dd26331bc553e2c0e9696bb71;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_e60ae47dd26331bc553e2c0e9696bb71);
 assert(Py_REFCNT(frame_e60ae47dd26331bc553e2c0e9696bb71) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  frame_e60ae47dd26331bc553e2c0e9696bb71->m_frame.f_lineno = 137;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[21]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 137;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_e60ae47dd26331bc553e2c0e9696bb71, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_e60ae47dd26331bc553e2c0e9696bb71->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_e60ae47dd26331bc553e2c0e9696bb71, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_e60ae47dd26331bc553e2c0e9696bb71,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_e60ae47dd26331bc553e2c0e9696bb71 == cache_frame_e60ae47dd26331bc553e2c0e9696bb71) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_e60ae47dd26331bc553e2c0e9696bb71);
     cache_frame_e60ae47dd26331bc553e2c0e9696bb71 = NULL;
 }

 assertFrameObject(frame_e60ae47dd26331bc553e2c0e9696bb71);

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


static PyObject *impl_aiohttp$client_proto$$$function__9_pause_reading(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_8f0941d0e624bf2db52110f59ce8ae7d;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_8f0941d0e624bf2db52110f59ce8ae7d = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_8f0941d0e624bf2db52110f59ce8ae7d)) {
     Py_XDECREF(cache_frame_8f0941d0e624bf2db52110f59ce8ae7d);

#if _DEBUG_REFCOUNTS
     if (cache_frame_8f0941d0e624bf2db52110f59ce8ae7d == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_8f0941d0e624bf2db52110f59ce8ae7d = MAKE_FUNCTION_FRAME(tstate, codeobj_8f0941d0e624bf2db52110f59ce8ae7d, module_aiohttp$client_proto, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_8f0941d0e624bf2db52110f59ce8ae7d->m_type_description == NULL);
 frame_8f0941d0e624bf2db52110f59ce8ae7d = cache_frame_8f0941d0e624bf2db52110f59ce8ae7d;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_8f0941d0e624bf2db52110f59ce8ae7d);
 assert(Py_REFCNT(frame_8f0941d0e624bf2db52110f59ce8ae7d) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_type_arg_value_1;
  PyObject *tmp_object_arg_value_1;
  PyObject *tmp_call_result_1;
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 140;
   type_description_1 = "oc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_self);
  tmp_object_arg_value_1 = par_self;
  tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_aiohttp$client_proto, tmp_type_arg_value_1, tmp_object_arg_value_1);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 140;
   type_description_1 = "oc";
      goto frame_exception_exit_1;
  }
  frame_8f0941d0e624bf2db52110f59ce8ae7d->m_frame.f_lineno = 140;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[42]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 140;
   type_description_1 = "oc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_call_result_2;
  CHECK_OBJECT(par_self);
  tmp_called_instance_2 = par_self;
  frame_8f0941d0e624bf2db52110f59ce8ae7d->m_frame.f_lineno = 141;
  tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[21]);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 141;
   type_description_1 = "oc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_8f0941d0e624bf2db52110f59ce8ae7d, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_8f0941d0e624bf2db52110f59ce8ae7d->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_8f0941d0e624bf2db52110f59ce8ae7d, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_8f0941d0e624bf2db52110f59ce8ae7d,
     type_description_1,
     par_self,
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_8f0941d0e624bf2db52110f59ce8ae7d == cache_frame_8f0941d0e624bf2db52110f59ce8ae7d) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_8f0941d0e624bf2db52110f59ce8ae7d);
     cache_frame_8f0941d0e624bf2db52110f59ce8ae7d = NULL;
 }

 assertFrameObject(frame_8f0941d0e624bf2db52110f59ce8ae7d);

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


static PyObject *impl_aiohttp$client_proto$$$function__10_resume_reading(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_1bdbb384ce627e76d27ac5c6027d3d68;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_1bdbb384ce627e76d27ac5c6027d3d68 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_1bdbb384ce627e76d27ac5c6027d3d68)) {
     Py_XDECREF(cache_frame_1bdbb384ce627e76d27ac5c6027d3d68);

#if _DEBUG_REFCOUNTS
     if (cache_frame_1bdbb384ce627e76d27ac5c6027d3d68 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_1bdbb384ce627e76d27ac5c6027d3d68 = MAKE_FUNCTION_FRAME(tstate, codeobj_1bdbb384ce627e76d27ac5c6027d3d68, module_aiohttp$client_proto, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_1bdbb384ce627e76d27ac5c6027d3d68->m_type_description == NULL);
 frame_1bdbb384ce627e76d27ac5c6027d3d68 = cache_frame_1bdbb384ce627e76d27ac5c6027d3d68;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_1bdbb384ce627e76d27ac5c6027d3d68);
 assert(Py_REFCNT(frame_1bdbb384ce627e76d27ac5c6027d3d68) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_type_arg_value_1;
  PyObject *tmp_object_arg_value_1;
  PyObject *tmp_call_result_1;
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 144;
   type_description_1 = "oc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_self);
  tmp_object_arg_value_1 = par_self;
  tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_aiohttp$client_proto, tmp_type_arg_value_1, tmp_object_arg_value_1);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 144;
   type_description_1 = "oc";
      goto frame_exception_exit_1;
  }
  frame_1bdbb384ce627e76d27ac5c6027d3d68->m_frame.f_lineno = 144;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[43]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 144;
   type_description_1 = "oc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_call_result_2;
  CHECK_OBJECT(par_self);
  tmp_called_instance_2 = par_self;
  frame_1bdbb384ce627e76d27ac5c6027d3d68->m_frame.f_lineno = 145;
  tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[44]);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;
   type_description_1 = "oc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_1bdbb384ce627e76d27ac5c6027d3d68, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_1bdbb384ce627e76d27ac5c6027d3d68->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_1bdbb384ce627e76d27ac5c6027d3d68, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_1bdbb384ce627e76d27ac5c6027d3d68,
     type_description_1,
     par_self,
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_1bdbb384ce627e76d27ac5c6027d3d68 == cache_frame_1bdbb384ce627e76d27ac5c6027d3d68) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_1bdbb384ce627e76d27ac5c6027d3d68);
     cache_frame_1bdbb384ce627e76d27ac5c6027d3d68 = NULL;
 }

 assertFrameObject(frame_1bdbb384ce627e76d27ac5c6027d3d68);

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


static PyObject *impl_aiohttp$client_proto$$$function__11_set_exception(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_exc = python_pars[1];
 PyObject *par_exc_cause = python_pars[2];
 struct Nuitka_FrameObject *frame_59af21cf1a166421e4023f5d6032090d;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_frame_59af21cf1a166421e4023f5d6032090d = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_59af21cf1a166421e4023f5d6032090d)) {
     Py_XDECREF(cache_frame_59af21cf1a166421e4023f5d6032090d);

#if _DEBUG_REFCOUNTS
     if (cache_frame_59af21cf1a166421e4023f5d6032090d == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_59af21cf1a166421e4023f5d6032090d = MAKE_FUNCTION_FRAME(tstate, codeobj_59af21cf1a166421e4023f5d6032090d, module_aiohttp$client_proto, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_59af21cf1a166421e4023f5d6032090d->m_type_description == NULL);
 frame_59af21cf1a166421e4023f5d6032090d = cache_frame_59af21cf1a166421e4023f5d6032090d;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_59af21cf1a166421e4023f5d6032090d);
 assert(Py_REFCNT(frame_59af21cf1a166421e4023f5d6032090d) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_True;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 152;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  frame_59af21cf1a166421e4023f5d6032090d->m_frame.f_lineno = 153;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[21]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_type_arg_value_1;
  PyObject *tmp_object_arg_value_1;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 154;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_self);
  tmp_object_arg_value_1 = par_self;
  tmp_called_instance_2 = BUILTIN_SUPER0(tstate, moduledict_aiohttp$client_proto, tmp_type_arg_value_1, tmp_object_arg_value_1);
  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 154;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_exc);
  tmp_args_element_value_1 = par_exc;
  CHECK_OBJECT(par_exc_cause);
  tmp_args_element_value_2 = par_exc_cause;
  frame_59af21cf1a166421e4023f5d6032090d->m_frame.f_lineno = 154;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
          tstate,
          tmp_called_instance_2,
          mod_consts[32],
          call_args
      );
  }

  Py_DECREF(tmp_called_instance_2);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 154;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_59af21cf1a166421e4023f5d6032090d, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_59af21cf1a166421e4023f5d6032090d->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_59af21cf1a166421e4023f5d6032090d, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_59af21cf1a166421e4023f5d6032090d,
     type_description_1,
     par_self,
     par_exc,
     par_exc_cause,
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_59af21cf1a166421e4023f5d6032090d == cache_frame_59af21cf1a166421e4023f5d6032090d) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_59af21cf1a166421e4023f5d6032090d);
     cache_frame_59af21cf1a166421e4023f5d6032090d = NULL;
 }

 assertFrameObject(frame_59af21cf1a166421e4023f5d6032090d);

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
 CHECK_OBJECT(par_exc);
 Py_DECREF(par_exc);
 CHECK_OBJECT(par_exc_cause);
 Py_DECREF(par_exc_cause);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_exc);
 Py_DECREF(par_exc);
 CHECK_OBJECT(par_exc_cause);
 Py_DECREF(par_exc_cause);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_proto$$$function__12_set_parser(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_parser = python_pars[1];
 PyObject *par_payload = python_pars[2];
 PyObject *var_data = NULL;
 PyObject *tmp_tuple_unpack_1__element_1 = NULL;
 PyObject *tmp_tuple_unpack_1__element_2 = NULL;
 PyObject *tmp_tuple_unpack_1__source_iter = NULL;
 struct Nuitka_FrameObject *frame_2f68c7c6229a7dfddd1e9ec17ef50674;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *tmp_iterator_attempt;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
 static struct Nuitka_FrameObject *cache_frame_2f68c7c6229a7dfddd1e9ec17ef50674 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_2f68c7c6229a7dfddd1e9ec17ef50674)) {
     Py_XDECREF(cache_frame_2f68c7c6229a7dfddd1e9ec17ef50674);

#if _DEBUG_REFCOUNTS
     if (cache_frame_2f68c7c6229a7dfddd1e9ec17ef50674 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_2f68c7c6229a7dfddd1e9ec17ef50674 = MAKE_FUNCTION_FRAME(tstate, codeobj_2f68c7c6229a7dfddd1e9ec17ef50674, module_aiohttp$client_proto, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_2f68c7c6229a7dfddd1e9ec17ef50674->m_type_description == NULL);
 frame_2f68c7c6229a7dfddd1e9ec17ef50674 = cache_frame_2f68c7c6229a7dfddd1e9ec17ef50674;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_2f68c7c6229a7dfddd1e9ec17ef50674);
 assert(Py_REFCNT(frame_2f68c7c6229a7dfddd1e9ec17ef50674) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_payload);
  tmp_assattr_value_1 = par_payload;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 162;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  CHECK_OBJECT(par_parser);
  tmp_assattr_value_2 = par_parser;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 163;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  frame_2f68c7c6229a7dfddd1e9ec17ef50674->m_frame.f_lineno = 165;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[21]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 165;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_attribute_value_1;
  int tmp_truth_name_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[10]);
  if (tmp_attribute_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 167;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_1);

   exception_lineno = 167;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_1);
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 // Tried code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_iter_arg_1;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 168;
   type_description_1 = "oooo";
      goto try_except_handler_2;
  }
  tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
  tmp_tuple_element_1 = mod_consts[9];
  PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_1);
  tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
  Py_DECREF(tmp_iter_arg_1);
  assert(!(tmp_assign_source_1 == NULL));
  assert(tmp_tuple_unpack_1__source_iter == NULL);
  tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_unpack_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_2 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
  if (tmp_assign_source_2 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooo";
   exception_lineno = 168;
      goto try_except_handler_3;
  }
  assert(tmp_tuple_unpack_1__element_1 == NULL);
  tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
 }
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_unpack_2;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
  if (tmp_assign_source_3 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooo";
   exception_lineno = 168;
      goto try_except_handler_3;
  }
  assert(tmp_tuple_unpack_1__element_2 == NULL);
  tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
 }
 {
  PyObject *tmp_iterator_name_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
  // Check if iterator has left-over elements.
  CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

  tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

  if (likely(tmp_iterator_attempt == NULL)) {
      PyObject *error = GET_ERROR_OCCURRED(tstate);

      if (error != NULL) {
          if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
              CLEAR_ERROR_OCCURRED(tstate);
          } else {
              FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

     type_description_1 = "oooo";
     exception_lineno = 168;
              goto try_except_handler_3;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[45];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "oooo";
   exception_lineno = 168;
      goto try_except_handler_3;
  }
 }
 goto try_end_1;
 // Exception handler code:
 try_except_handler_3:;
 exception_keeper_type_1 = exception_type;
 exception_keeper_value_1 = exception_value;
 exception_keeper_tb_1 = exception_tb;
 exception_keeper_lineno_1 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
 Py_DECREF(tmp_tuple_unpack_1__source_iter);
 tmp_tuple_unpack_1__source_iter = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_1;
 exception_value = exception_keeper_value_1;
 exception_tb = exception_keeper_tb_1;
 exception_lineno = exception_keeper_lineno_1;

 goto try_except_handler_2;
 // End of try:
 try_end_1:;
 CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
 Py_DECREF(tmp_tuple_unpack_1__source_iter);
 tmp_tuple_unpack_1__source_iter = NULL;
 {
  PyObject *tmp_assign_source_4;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
  tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
  assert(var_data == NULL);
  Py_INCREF(tmp_assign_source_4);
  var_data = tmp_assign_source_4;
 }
 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;

 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
  tmp_assattr_value_3 = tmp_tuple_unpack_1__element_2;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[10], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 168;
   type_description_1 = "oooo";
      goto try_except_handler_2;
  }
 }
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

 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto frame_exception_exit_1;
 // End of try:
 try_end_2:;
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;

 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_2 = par_self;
  CHECK_OBJECT(var_data);
  tmp_args_element_value_1 = var_data;
  frame_2f68c7c6229a7dfddd1e9ec17ef50674->m_frame.f_lineno = 169;
  tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[46], tmp_args_element_value_1);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 169;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 branch_no_1:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_2f68c7c6229a7dfddd1e9ec17ef50674, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_2f68c7c6229a7dfddd1e9ec17ef50674->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_2f68c7c6229a7dfddd1e9ec17ef50674, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_2f68c7c6229a7dfddd1e9ec17ef50674,
     type_description_1,
     par_self,
     par_parser,
     par_payload,
     var_data
 );


 // Release cached frame if used for exception.
 if (frame_2f68c7c6229a7dfddd1e9ec17ef50674 == cache_frame_2f68c7c6229a7dfddd1e9ec17ef50674) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_2f68c7c6229a7dfddd1e9ec17ef50674);
     cache_frame_2f68c7c6229a7dfddd1e9ec17ef50674 = NULL;
 }

 assertFrameObject(frame_2f68c7c6229a7dfddd1e9ec17ef50674);

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
 Py_XDECREF(var_data);
 var_data = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_3 = exception_type;
 exception_keeper_value_3 = exception_value;
 exception_keeper_tb_3 = exception_tb;
 exception_keeper_lineno_3 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(var_data);
 var_data = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto function_exception_exit;
 // End of try:

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_parser);
 Py_DECREF(par_parser);
 CHECK_OBJECT(par_payload);
 Py_DECREF(par_payload);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_parser);
 Py_DECREF(par_parser);
 CHECK_OBJECT(par_payload);
 Py_DECREF(par_payload);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_proto$$$function__13_set_response_params(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_timer = python_pars[1];
 PyObject *par_skip_payload = python_pars[2];
 PyObject *par_read_until_eof = python_pars[3];
 PyObject *par_auto_decompress = python_pars[4];
 PyObject *par_read_timeout = python_pars[5];
 PyObject *par_read_bufsize = python_pars[6];
 PyObject *par_timeout_ceil_threshold = python_pars[7];
 PyObject *par_max_line_size = python_pars[8];
 PyObject *par_max_field_size = python_pars[9];
 PyObject *var_data = NULL;
 PyObject *tmp_tuple_unpack_1__element_1 = NULL;
 PyObject *tmp_tuple_unpack_1__element_2 = NULL;
 PyObject *tmp_tuple_unpack_1__source_iter = NULL;
 struct Nuitka_FrameObject *frame_449801c86c6a21958b7fa5ead9ae1ef7;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 PyObject *tmp_iterator_attempt;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_frame_449801c86c6a21958b7fa5ead9ae1ef7 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_449801c86c6a21958b7fa5ead9ae1ef7)) {
     Py_XDECREF(cache_frame_449801c86c6a21958b7fa5ead9ae1ef7);

#if _DEBUG_REFCOUNTS
     if (cache_frame_449801c86c6a21958b7fa5ead9ae1ef7 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_449801c86c6a21958b7fa5ead9ae1ef7 = MAKE_FUNCTION_FRAME(tstate, codeobj_449801c86c6a21958b7fa5ead9ae1ef7, module_aiohttp$client_proto, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_449801c86c6a21958b7fa5ead9ae1ef7->m_type_description == NULL);
 frame_449801c86c6a21958b7fa5ead9ae1ef7 = cache_frame_449801c86c6a21958b7fa5ead9ae1ef7;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_449801c86c6a21958b7fa5ead9ae1ef7);
 assert(Py_REFCNT(frame_449801c86c6a21958b7fa5ead9ae1ef7) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_skip_payload);
  tmp_assattr_value_1 = par_skip_payload;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 184;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  CHECK_OBJECT(par_read_timeout);
  tmp_assattr_value_2 = par_read_timeout;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 186;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  CHECK_OBJECT(par_timeout_ceil_threshold);
  tmp_assattr_value_3 = par_timeout_ceil_threshold;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[16], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 188;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_called_value_1;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_arg_value_1_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_kw_call_arg_value_2_1;
  PyObject *tmp_kw_call_dict_value_0_1;
  PyObject *tmp_kw_call_dict_value_1_1;
  PyObject *tmp_kw_call_dict_value_2_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_kw_call_dict_value_3_1;
  PyObject *tmp_kw_call_dict_value_4_1;
  PyObject *tmp_kw_call_dict_value_5_1;
  PyObject *tmp_kw_call_dict_value_6_1;
  PyObject *tmp_assattr_target_4;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[47]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[47]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 190;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_kw_call_arg_value_0_1 = par_self;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[48]);
  if (tmp_kw_call_arg_value_1_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 192;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_read_bufsize);
  tmp_kw_call_arg_value_2_1 = par_read_bufsize;
  CHECK_OBJECT(par_timer);
  tmp_kw_call_dict_value_0_1 = par_timer;
  tmp_kw_call_dict_value_1_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[33]);

  if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
      tmp_kw_call_dict_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
  }

  if (tmp_kw_call_dict_value_1_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_1_1);

   exception_lineno = 195;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_skip_payload);
  tmp_operand_value_1 = par_skip_payload;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_1_1);

   exception_lineno = 196;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_kw_call_dict_value_2_1 = (tmp_res == 0) ? Py_True : Py_False;
  CHECK_OBJECT(par_read_until_eof);
  tmp_kw_call_dict_value_3_1 = par_read_until_eof;
  CHECK_OBJECT(par_auto_decompress);
  tmp_kw_call_dict_value_4_1 = par_auto_decompress;
  CHECK_OBJECT(par_max_line_size);
  tmp_kw_call_dict_value_5_1 = par_max_line_size;
  CHECK_OBJECT(par_max_field_size);
  tmp_kw_call_dict_value_6_1 = par_max_field_size;
  frame_449801c86c6a21958b7fa5ead9ae1ef7->m_frame.f_lineno = 190;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
      PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
      tmp_assattr_value_4 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[49]);
  }

  Py_DECREF(tmp_kw_call_arg_value_1_1);
  if (tmp_assattr_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 190;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_4 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[12], tmp_assattr_value_4);
  Py_DECREF(tmp_assattr_value_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 190;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_attribute_value_1;
  int tmp_truth_name_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[10]);
  if (tmp_attribute_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_1);

   exception_lineno = 203;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_1);
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 // Tried code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_iter_arg_1;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[10]);
  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 204;
   type_description_1 = "ooooooooooo";
      goto try_except_handler_2;
  }
  tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
  tmp_tuple_element_1 = mod_consts[9];
  PyTuple_SET_ITEM0(tmp_iter_arg_1, 1, tmp_tuple_element_1);
  tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
  Py_DECREF(tmp_iter_arg_1);
  assert(!(tmp_assign_source_1 == NULL));
  assert(tmp_tuple_unpack_1__source_iter == NULL);
  tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_unpack_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_2 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
  if (tmp_assign_source_2 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooooooo";
   exception_lineno = 204;
      goto try_except_handler_3;
  }
  assert(tmp_tuple_unpack_1__element_1 == NULL);
  tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
 }
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_unpack_2;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
  if (tmp_assign_source_3 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooooooo";
   exception_lineno = 204;
      goto try_except_handler_3;
  }
  assert(tmp_tuple_unpack_1__element_2 == NULL);
  tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
 }
 {
  PyObject *tmp_iterator_name_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
  // Check if iterator has left-over elements.
  CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

  tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

  if (likely(tmp_iterator_attempt == NULL)) {
      PyObject *error = GET_ERROR_OCCURRED(tstate);

      if (error != NULL) {
          if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
              CLEAR_ERROR_OCCURRED(tstate);
          } else {
              FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

     type_description_1 = "ooooooooooo";
     exception_lineno = 204;
              goto try_except_handler_3;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[45];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "ooooooooooo";
   exception_lineno = 204;
      goto try_except_handler_3;
  }
 }
 goto try_end_1;
 // Exception handler code:
 try_except_handler_3:;
 exception_keeper_type_1 = exception_type;
 exception_keeper_value_1 = exception_value;
 exception_keeper_tb_1 = exception_tb;
 exception_keeper_lineno_1 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
 Py_DECREF(tmp_tuple_unpack_1__source_iter);
 tmp_tuple_unpack_1__source_iter = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_1;
 exception_value = exception_keeper_value_1;
 exception_tb = exception_keeper_tb_1;
 exception_lineno = exception_keeper_lineno_1;

 goto try_except_handler_2;
 // End of try:
 try_end_1:;
 CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
 Py_DECREF(tmp_tuple_unpack_1__source_iter);
 tmp_tuple_unpack_1__source_iter = NULL;
 {
  PyObject *tmp_assign_source_4;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
  tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
  assert(var_data == NULL);
  Py_INCREF(tmp_assign_source_4);
  var_data = tmp_assign_source_4;
 }
 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;

 {
  PyObject *tmp_assattr_value_5;
  PyObject *tmp_assattr_target_5;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
  tmp_assattr_value_5 = tmp_tuple_unpack_1__element_2;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_5 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[10], tmp_assattr_value_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 204;
   type_description_1 = "ooooooooooo";
      goto try_except_handler_2;
  }
 }
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

 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto frame_exception_exit_1;
 // End of try:
 try_end_2:;
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;

 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  CHECK_OBJECT(var_data);
  tmp_args_element_value_1 = var_data;
  frame_449801c86c6a21958b7fa5ead9ae1ef7->m_frame.f_lineno = 205;
  tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[46], tmp_args_element_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 205;
   type_description_1 = "ooooooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 branch_no_1:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_449801c86c6a21958b7fa5ead9ae1ef7, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_449801c86c6a21958b7fa5ead9ae1ef7->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_449801c86c6a21958b7fa5ead9ae1ef7, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_449801c86c6a21958b7fa5ead9ae1ef7,
     type_description_1,
     par_self,
     par_timer,
     par_skip_payload,
     par_read_until_eof,
     par_auto_decompress,
     par_read_timeout,
     par_read_bufsize,
     par_timeout_ceil_threshold,
     par_max_line_size,
     par_max_field_size,
     var_data
 );


 // Release cached frame if used for exception.
 if (frame_449801c86c6a21958b7fa5ead9ae1ef7 == cache_frame_449801c86c6a21958b7fa5ead9ae1ef7) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_449801c86c6a21958b7fa5ead9ae1ef7);
     cache_frame_449801c86c6a21958b7fa5ead9ae1ef7 = NULL;
 }

 assertFrameObject(frame_449801c86c6a21958b7fa5ead9ae1ef7);

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
 Py_XDECREF(var_data);
 var_data = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_3 = exception_type;
 exception_keeper_value_3 = exception_value;
 exception_keeper_tb_3 = exception_tb;
 exception_keeper_lineno_3 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(var_data);
 var_data = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto function_exception_exit;
 // End of try:

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_timer);
 Py_DECREF(par_timer);
 CHECK_OBJECT(par_skip_payload);
 Py_DECREF(par_skip_payload);
 CHECK_OBJECT(par_read_until_eof);
 Py_DECREF(par_read_until_eof);
 CHECK_OBJECT(par_auto_decompress);
 Py_DECREF(par_auto_decompress);
 CHECK_OBJECT(par_read_timeout);
 Py_DECREF(par_read_timeout);
 CHECK_OBJECT(par_read_bufsize);
 Py_DECREF(par_read_bufsize);
 CHECK_OBJECT(par_timeout_ceil_threshold);
 Py_DECREF(par_timeout_ceil_threshold);
 CHECK_OBJECT(par_max_line_size);
 Py_DECREF(par_max_line_size);
 CHECK_OBJECT(par_max_field_size);
 Py_DECREF(par_max_field_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_timer);
 Py_DECREF(par_timer);
 CHECK_OBJECT(par_skip_payload);
 Py_DECREF(par_skip_payload);
 CHECK_OBJECT(par_read_until_eof);
 Py_DECREF(par_read_until_eof);
 CHECK_OBJECT(par_auto_decompress);
 Py_DECREF(par_auto_decompress);
 CHECK_OBJECT(par_read_timeout);
 Py_DECREF(par_read_timeout);
 CHECK_OBJECT(par_read_bufsize);
 Py_DECREF(par_read_bufsize);
 CHECK_OBJECT(par_timeout_ceil_threshold);
 Py_DECREF(par_timeout_ceil_threshold);
 CHECK_OBJECT(par_max_line_size);
 Py_DECREF(par_max_line_size);
 CHECK_OBJECT(par_max_field_size);
 Py_DECREF(par_max_field_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_proto$$$function__14__drop_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_4f8cb1d0c781f54f4d2bdac6244c16e4;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_4f8cb1d0c781f54f4d2bdac6244c16e4 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_4f8cb1d0c781f54f4d2bdac6244c16e4)) {
     Py_XDECREF(cache_frame_4f8cb1d0c781f54f4d2bdac6244c16e4);

#if _DEBUG_REFCOUNTS
     if (cache_frame_4f8cb1d0c781f54f4d2bdac6244c16e4 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_4f8cb1d0c781f54f4d2bdac6244c16e4 = MAKE_FUNCTION_FRAME(tstate, codeobj_4f8cb1d0c781f54f4d2bdac6244c16e4, module_aiohttp$client_proto, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_4f8cb1d0c781f54f4d2bdac6244c16e4->m_type_description == NULL);
 frame_4f8cb1d0c781f54f4d2bdac6244c16e4 = cache_frame_4f8cb1d0c781f54f4d2bdac6244c16e4;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_4f8cb1d0c781f54f4d2bdac6244c16e4);
 assert(Py_REFCNT(frame_4f8cb1d0c781f54f4d2bdac6244c16e4) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 208;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_1);
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[14]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 209;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_4f8cb1d0c781f54f4d2bdac6244c16e4->m_frame.f_lineno = 209;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[50]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 209;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 210;
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
     exception_tb = MAKE_TRACEBACK(frame_4f8cb1d0c781f54f4d2bdac6244c16e4, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_4f8cb1d0c781f54f4d2bdac6244c16e4->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_4f8cb1d0c781f54f4d2bdac6244c16e4, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_4f8cb1d0c781f54f4d2bdac6244c16e4,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_4f8cb1d0c781f54f4d2bdac6244c16e4 == cache_frame_4f8cb1d0c781f54f4d2bdac6244c16e4) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_4f8cb1d0c781f54f4d2bdac6244c16e4);
     cache_frame_4f8cb1d0c781f54f4d2bdac6244c16e4 = NULL;
 }

 assertFrameObject(frame_4f8cb1d0c781f54f4d2bdac6244c16e4);

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


static PyObject *impl_aiohttp$client_proto$$$function__15__reschedule_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *var_timeout = NULL;
 struct Nuitka_FrameObject *frame_d41efc7dfd703d43fcabfdcffd0ac2ad;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_d41efc7dfd703d43fcabfdcffd0ac2ad = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_d41efc7dfd703d43fcabfdcffd0ac2ad)) {
     Py_XDECREF(cache_frame_d41efc7dfd703d43fcabfdcffd0ac2ad);

#if _DEBUG_REFCOUNTS
     if (cache_frame_d41efc7dfd703d43fcabfdcffd0ac2ad == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_d41efc7dfd703d43fcabfdcffd0ac2ad = MAKE_FUNCTION_FRAME(tstate, codeobj_d41efc7dfd703d43fcabfdcffd0ac2ad, module_aiohttp$client_proto, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_d41efc7dfd703d43fcabfdcffd0ac2ad->m_type_description == NULL);
 frame_d41efc7dfd703d43fcabfdcffd0ac2ad = cache_frame_d41efc7dfd703d43fcabfdcffd0ac2ad;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_d41efc7dfd703d43fcabfdcffd0ac2ad);
 assert(Py_REFCNT(frame_d41efc7dfd703d43fcabfdcffd0ac2ad) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 213;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  assert(var_timeout == NULL);
  var_timeout = tmp_assign_source_1;
 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[14]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 214;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_1);
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[14]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 215;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  frame_d41efc7dfd703d43fcabfdcffd0ac2ad->m_frame.f_lineno = 215;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[50]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 215;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 branch_no_1:;
 {
  nuitka_bool tmp_condition_result_2;
  int tmp_truth_name_1;
  CHECK_OBJECT(var_timeout);
  tmp_truth_name_1 = CHECK_IF_TRUE(var_timeout);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 217;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_5 = par_self;
  tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[48]);
  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 218;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[51]);
  Py_DECREF(tmp_expression_value_4);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 218;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_timeout);
  tmp_args_element_value_1 = var_timeout;
  CHECK_OBJECT(par_self);
  tmp_expression_value_6 = par_self;
  tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[52]);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 219;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  frame_d41efc7dfd703d43fcabfdcffd0ac2ad->m_frame.f_lineno = 218;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_element_value_2);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 218;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 218;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 goto branch_end_2;
 branch_no_2:;
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 222;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 branch_end_2:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_d41efc7dfd703d43fcabfdcffd0ac2ad, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_d41efc7dfd703d43fcabfdcffd0ac2ad->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_d41efc7dfd703d43fcabfdcffd0ac2ad, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_d41efc7dfd703d43fcabfdcffd0ac2ad,
     type_description_1,
     par_self,
     var_timeout
 );


 // Release cached frame if used for exception.
 if (frame_d41efc7dfd703d43fcabfdcffd0ac2ad == cache_frame_d41efc7dfd703d43fcabfdcffd0ac2ad) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_d41efc7dfd703d43fcabfdcffd0ac2ad);
     cache_frame_d41efc7dfd703d43fcabfdcffd0ac2ad = NULL;
 }

 assertFrameObject(frame_d41efc7dfd703d43fcabfdcffd0ac2ad);

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
 CHECK_OBJECT(var_timeout);
 Py_DECREF(var_timeout);
 var_timeout = NULL;
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

 Py_XDECREF(var_timeout);
 var_timeout = NULL;
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


static PyObject *impl_aiohttp$client_proto$$$function__16_start_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_7b8706ff37248ef62575156a7764ab60;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_7b8706ff37248ef62575156a7764ab60 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_7b8706ff37248ef62575156a7764ab60)) {
     Py_XDECREF(cache_frame_7b8706ff37248ef62575156a7764ab60);

#if _DEBUG_REFCOUNTS
     if (cache_frame_7b8706ff37248ef62575156a7764ab60 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_7b8706ff37248ef62575156a7764ab60 = MAKE_FUNCTION_FRAME(tstate, codeobj_7b8706ff37248ef62575156a7764ab60, module_aiohttp$client_proto, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_7b8706ff37248ef62575156a7764ab60->m_type_description == NULL);
 frame_7b8706ff37248ef62575156a7764ab60 = cache_frame_7b8706ff37248ef62575156a7764ab60;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_7b8706ff37248ef62575156a7764ab60);
 assert(Py_REFCNT(frame_7b8706ff37248ef62575156a7764ab60) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  frame_7b8706ff37248ef62575156a7764ab60->m_frame.f_lineno = 225;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[44]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 225;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_7b8706ff37248ef62575156a7764ab60, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_7b8706ff37248ef62575156a7764ab60->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_7b8706ff37248ef62575156a7764ab60, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_7b8706ff37248ef62575156a7764ab60,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_7b8706ff37248ef62575156a7764ab60 == cache_frame_7b8706ff37248ef62575156a7764ab60) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_7b8706ff37248ef62575156a7764ab60);
     cache_frame_7b8706ff37248ef62575156a7764ab60 = NULL;
 }

 assertFrameObject(frame_7b8706ff37248ef62575156a7764ab60);

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


static PyObject *impl_aiohttp$client_proto$$$function__17__on_read_timeout(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *var_exc = NULL;
 struct Nuitka_FrameObject *frame_bfa121849ab729da8472e54649309627;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_frame_bfa121849ab729da8472e54649309627 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_bfa121849ab729da8472e54649309627)) {
     Py_XDECREF(cache_frame_bfa121849ab729da8472e54649309627);

#if _DEBUG_REFCOUNTS
     if (cache_frame_bfa121849ab729da8472e54649309627 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_bfa121849ab729da8472e54649309627 = MAKE_FUNCTION_FRAME(tstate, codeobj_bfa121849ab729da8472e54649309627, module_aiohttp$client_proto, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_bfa121849ab729da8472e54649309627->m_type_description == NULL);
 frame_bfa121849ab729da8472e54649309627 = cache_frame_bfa121849ab729da8472e54649309627;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_bfa121849ab729da8472e54649309627);
 assert(Py_REFCNT(frame_bfa121849ab729da8472e54649309627) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_called_value_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[53]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 228;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  frame_bfa121849ab729da8472e54649309627->m_frame.f_lineno = 228;
  tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[54]);

  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 228;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  assert(var_exc == NULL);
  var_exc = tmp_assign_source_1;
 }
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  CHECK_OBJECT(var_exc);
  tmp_args_element_value_1 = var_exc;
  frame_bfa121849ab729da8472e54649309627->m_frame.f_lineno = 229;
  tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[32], tmp_args_element_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 229;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_1);
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_called_value_2;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_args_element_value_3;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[32]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 231;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 231;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_exc);
  tmp_args_element_value_3 = var_exc;
  frame_bfa121849ab729da8472e54649309627->m_frame.f_lineno = 231;
  {
      PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
      tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
  }

  Py_DECREF(tmp_args_element_value_2);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 231;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 branch_no_1:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_bfa121849ab729da8472e54649309627, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_bfa121849ab729da8472e54649309627->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_bfa121849ab729da8472e54649309627, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_bfa121849ab729da8472e54649309627,
     type_description_1,
     par_self,
     var_exc
 );


 // Release cached frame if used for exception.
 if (frame_bfa121849ab729da8472e54649309627 == cache_frame_bfa121849ab729da8472e54649309627) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_bfa121849ab729da8472e54649309627);
     cache_frame_bfa121849ab729da8472e54649309627 = NULL;
 }

 assertFrameObject(frame_bfa121849ab729da8472e54649309627);

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
 CHECK_OBJECT(var_exc);
 Py_DECREF(var_exc);
 var_exc = NULL;
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

 Py_XDECREF(var_exc);
 var_exc = NULL;
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


static PyObject *impl_aiohttp$client_proto$$$function__18_data_received(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_data = python_pars[1];
 PyObject *var_payload = NULL;
 PyObject *var_eof = NULL;
 PyObject *var_tail = NULL;
 PyObject *var_messages = NULL;
 PyObject *var_upgraded = NULL;
 PyObject *var_underlying_exc = NULL;
 PyObject *var_message = NULL;
 PyObject *tmp_for_loop_1__for_iterator = NULL;
 PyObject *tmp_for_loop_1__iter_value = NULL;
 PyObject *tmp_inplace_assign_1__value = NULL;
 PyObject *tmp_tuple_unpack_1__element_1 = NULL;
 PyObject *tmp_tuple_unpack_1__element_2 = NULL;
 PyObject *tmp_tuple_unpack_1__source_iter = NULL;
 PyObject *tmp_tuple_unpack_2__element_1 = NULL;
 PyObject *tmp_tuple_unpack_2__element_2 = NULL;
 PyObject *tmp_tuple_unpack_2__element_3 = NULL;
 PyObject *tmp_tuple_unpack_2__source_iter = NULL;
 PyObject *tmp_tuple_unpack_3__element_1 = NULL;
 PyObject *tmp_tuple_unpack_3__element_2 = NULL;
 PyObject *tmp_tuple_unpack_3__source_iter = NULL;
 struct Nuitka_FrameObject *frame_f59fac3a841f89205fc86a739ad8001d;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 PyObject *tmp_return_value = NULL;
 PyObject *tmp_iterator_attempt;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
 bool tmp_result;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
 PyObject *exception_keeper_type_6;
 PyObject *exception_keeper_value_6;
 PyTracebackObject *exception_keeper_tb_6;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
 PyObject *exception_keeper_type_7;
 PyObject *exception_keeper_value_7;
 PyTracebackObject *exception_keeper_tb_7;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
 PyObject *exception_keeper_type_8;
 PyObject *exception_keeper_value_8;
 PyTracebackObject *exception_keeper_tb_8;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
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
 static struct Nuitka_FrameObject *cache_frame_f59fac3a841f89205fc86a739ad8001d = NULL;
 PyObject *exception_keeper_type_12;
 PyObject *exception_keeper_value_12;
 PyTracebackObject *exception_keeper_tb_12;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_f59fac3a841f89205fc86a739ad8001d)) {
     Py_XDECREF(cache_frame_f59fac3a841f89205fc86a739ad8001d);

#if _DEBUG_REFCOUNTS
     if (cache_frame_f59fac3a841f89205fc86a739ad8001d == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_f59fac3a841f89205fc86a739ad8001d = MAKE_FUNCTION_FRAME(tstate, codeobj_f59fac3a841f89205fc86a739ad8001d, module_aiohttp$client_proto, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_f59fac3a841f89205fc86a739ad8001d->m_type_description == NULL);
 frame_f59fac3a841f89205fc86a739ad8001d = cache_frame_f59fac3a841f89205fc86a739ad8001d;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_f59fac3a841f89205fc86a739ad8001d);
 assert(Py_REFCNT(frame_f59fac3a841f89205fc86a739ad8001d) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 234;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[44]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 234;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_operand_value_1;
  CHECK_OBJECT(par_data);
  tmp_operand_value_1 = par_data;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 236;
   type_description_1 = "ooooooooo";
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
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 240;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_1);
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 // Tried code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_iter_arg_1;
  PyObject *tmp_called_instance_2;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_args_element_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;
   type_description_1 = "ooooooooo";
      goto try_except_handler_2;
  }
  CHECK_OBJECT(par_data);
  tmp_args_element_value_1 = par_data;
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 241;
  tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[55], tmp_args_element_value_1);
  Py_DECREF(tmp_called_instance_2);
  if (tmp_iter_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;
   type_description_1 = "ooooooooo";
      goto try_except_handler_2;
  }
  tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
  Py_DECREF(tmp_iter_arg_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;
   type_description_1 = "ooooooooo";
      goto try_except_handler_2;
  }
  assert(tmp_tuple_unpack_1__source_iter == NULL);
  tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_unpack_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_2 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
  if (tmp_assign_source_2 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooooo";
   exception_lineno = 241;
      goto try_except_handler_3;
  }
  assert(tmp_tuple_unpack_1__element_1 == NULL);
  tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
 }
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_unpack_2;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
  if (tmp_assign_source_3 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooooo";
   exception_lineno = 241;
      goto try_except_handler_3;
  }
  assert(tmp_tuple_unpack_1__element_2 == NULL);
  tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
 }
 {
  PyObject *tmp_iterator_name_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
  // Check if iterator has left-over elements.
  CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

  tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

  if (likely(tmp_iterator_attempt == NULL)) {
      PyObject *error = GET_ERROR_OCCURRED(tstate);

      if (error != NULL) {
          if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
              CLEAR_ERROR_OCCURRED(tstate);
          } else {
              FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

     type_description_1 = "ooooooooo";
     exception_lineno = 241;
              goto try_except_handler_3;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[45];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "ooooooooo";
   exception_lineno = 241;
      goto try_except_handler_3;
  }
 }
 goto try_end_1;
 // Exception handler code:
 try_except_handler_3:;
 exception_keeper_type_1 = exception_type;
 exception_keeper_value_1 = exception_value;
 exception_keeper_tb_1 = exception_tb;
 exception_keeper_lineno_1 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
 Py_DECREF(tmp_tuple_unpack_1__source_iter);
 tmp_tuple_unpack_1__source_iter = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_1;
 exception_value = exception_keeper_value_1;
 exception_tb = exception_keeper_tb_1;
 exception_lineno = exception_keeper_lineno_1;

 goto try_except_handler_2;
 // End of try:
 try_end_1:;
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

 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto frame_exception_exit_1;
 // End of try:
 try_end_2:;
 CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
 Py_DECREF(tmp_tuple_unpack_1__source_iter);
 tmp_tuple_unpack_1__source_iter = NULL;
 {
  PyObject *tmp_assign_source_4;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
  tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
  assert(var_eof == NULL);
  Py_INCREF(tmp_assign_source_4);
  var_eof = tmp_assign_source_4;
 }
 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;

 {
  PyObject *tmp_assign_source_5;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
  tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
  assert(var_tail == NULL);
  Py_INCREF(tmp_assign_source_5);
  var_tail = tmp_assign_source_5;
 }
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;

 {
  nuitka_bool tmp_condition_result_3;
  int tmp_truth_name_1;
  CHECK_OBJECT(var_eof);
  tmp_truth_name_1 = CHECK_IF_TRUE(var_eof);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 242;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 243;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 244;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  nuitka_bool tmp_condition_result_4;
  int tmp_truth_name_2;
  CHECK_OBJECT(var_tail);
  tmp_truth_name_2 = CHECK_IF_TRUE(var_tail);
  if (tmp_truth_name_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 246;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_called_instance_3;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_2;
  CHECK_OBJECT(par_self);
  tmp_called_instance_3 = par_self;
  CHECK_OBJECT(var_tail);
  tmp_args_element_value_2 = var_tail;
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 247;
  tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[46], tmp_args_element_value_2);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 247;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 branch_no_4:;
 branch_no_3:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 goto branch_end_2;
 branch_no_2:;
 {
  nuitka_bool tmp_condition_result_5;
  int tmp_or_left_truth_1;
  nuitka_bool tmp_or_left_value_1;
  nuitka_bool tmp_or_right_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_attribute_value_1;
  int tmp_truth_name_3;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  PyObject *tmp_expression_value_4;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[11]);
  if (tmp_attribute_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 250;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_1);
  if (tmp_truth_name_3 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_1);

   exception_lineno = 250;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_or_left_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_1);
  tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_or_left_truth_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 250;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  if (tmp_or_left_truth_1 == 1) {
      goto or_left_1;
  } else {
      goto or_right_1;
  }
  or_right_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_4 = par_self;
  tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[12]);
  if (tmp_cmp_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 250;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_2 = Py_None;
  tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  Py_DECREF(tmp_cmp_expr_left_2);
  tmp_condition_result_5 = tmp_or_right_value_1;
  goto or_end_1;
  or_left_1:;
  tmp_condition_result_5 = tmp_or_left_value_1;
  or_end_1:;
  if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(par_self);
  tmp_expression_value_5 = par_self;
  tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[10]);
  if (tmp_assign_source_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 252;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  assert(tmp_inplace_assign_1__value == NULL);
  tmp_inplace_assign_1__value = tmp_assign_source_6;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_7;
  PyObject *tmp_iadd_expr_left_1;
  PyObject *tmp_iadd_expr_right_1;
  CHECK_OBJECT(tmp_inplace_assign_1__value);
  tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
  CHECK_OBJECT(par_data);
  tmp_iadd_expr_right_1 = par_data;
  tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 252;
   type_description_1 = "ooooooooo";
      goto try_except_handler_4;
  }
  tmp_assign_source_7 = tmp_iadd_expr_left_1;
  tmp_inplace_assign_1__value = tmp_assign_source_7;

 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  CHECK_OBJECT(tmp_inplace_assign_1__value);
  tmp_assattr_value_3 = tmp_inplace_assign_1__value;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[10], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 252;
   type_description_1 = "ooooooooo";
      goto try_except_handler_4;
  }
 }
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

 CHECK_OBJECT(tmp_inplace_assign_1__value);
 Py_DECREF(tmp_inplace_assign_1__value);
 tmp_inplace_assign_1__value = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto frame_exception_exit_1;
 // End of try:
 try_end_3:;
 CHECK_OBJECT(tmp_inplace_assign_1__value);
 Py_DECREF(tmp_inplace_assign_1__value);
 tmp_inplace_assign_1__value = NULL;
 goto branch_end_5;
 branch_no_5:;
 // Tried code:
 // Tried code:
 {
  PyObject *tmp_assign_source_8;
  PyObject *tmp_iter_arg_2;
  PyObject *tmp_called_instance_4;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_args_element_value_3;
  CHECK_OBJECT(par_self);
  tmp_expression_value_6 = par_self;
  tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[12]);
  if (tmp_called_instance_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 256;
   type_description_1 = "ooooooooo";
      goto try_except_handler_6;
  }
  CHECK_OBJECT(par_data);
  tmp_args_element_value_3 = par_data;
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 256;
  tmp_iter_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[55], tmp_args_element_value_3);
  Py_DECREF(tmp_called_instance_4);
  if (tmp_iter_arg_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 256;
   type_description_1 = "ooooooooo";
      goto try_except_handler_6;
  }
  tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
  Py_DECREF(tmp_iter_arg_2);
  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 256;
   type_description_1 = "ooooooooo";
      goto try_except_handler_6;
  }
  assert(tmp_tuple_unpack_2__source_iter == NULL);
  tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_9;
  PyObject *tmp_unpack_3;
  CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
  tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
  tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 3);
  if (tmp_assign_source_9 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooooo";
   exception_lineno = 256;
      goto try_except_handler_7;
  }
  assert(tmp_tuple_unpack_2__element_1 == NULL);
  tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
 }
 {
  PyObject *tmp_assign_source_10;
  PyObject *tmp_unpack_4;
  CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
  tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
  tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 3);
  if (tmp_assign_source_10 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooooo";
   exception_lineno = 256;
      goto try_except_handler_7;
  }
  assert(tmp_tuple_unpack_2__element_2 == NULL);
  tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
 }
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_unpack_5;
  CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
  tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
  tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_5, 2, 3);
  if (tmp_assign_source_11 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooooo";
   exception_lineno = 256;
      goto try_except_handler_7;
  }
  assert(tmp_tuple_unpack_2__element_3 == NULL);
  tmp_tuple_unpack_2__element_3 = tmp_assign_source_11;
 }
 {
  PyObject *tmp_iterator_name_2;
  CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
  tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
  // Check if iterator has left-over elements.
  CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

  tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

  if (likely(tmp_iterator_attempt == NULL)) {
      PyObject *error = GET_ERROR_OCCURRED(tstate);

      if (error != NULL) {
          if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
              CLEAR_ERROR_OCCURRED(tstate);
          } else {
              FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

     type_description_1 = "ooooooooo";
     exception_lineno = 256;
              goto try_except_handler_7;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[56];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "ooooooooo";
   exception_lineno = 256;
      goto try_except_handler_7;
  }
 }
 goto try_end_4;
 // Exception handler code:
 try_except_handler_7:;
 exception_keeper_type_4 = exception_type;
 exception_keeper_value_4 = exception_value;
 exception_keeper_tb_4 = exception_tb;
 exception_keeper_lineno_4 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
 Py_DECREF(tmp_tuple_unpack_2__source_iter);
 tmp_tuple_unpack_2__source_iter = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_4;
 exception_value = exception_keeper_value_4;
 exception_tb = exception_keeper_tb_4;
 exception_lineno = exception_keeper_lineno_4;

 goto try_except_handler_6;
 // End of try:
 try_end_4:;
 goto try_end_5;
 // Exception handler code:
 try_except_handler_6:;
 exception_keeper_type_5 = exception_type;
 exception_keeper_value_5 = exception_value;
 exception_keeper_tb_5 = exception_tb;
 exception_keeper_lineno_5 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_tuple_unpack_2__element_1);
 tmp_tuple_unpack_2__element_1 = NULL;
 Py_XDECREF(tmp_tuple_unpack_2__element_2);
 tmp_tuple_unpack_2__element_2 = NULL;
 Py_XDECREF(tmp_tuple_unpack_2__element_3);
 tmp_tuple_unpack_2__element_3 = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_5;
 exception_value = exception_keeper_value_5;
 exception_tb = exception_keeper_tb_5;
 exception_lineno = exception_keeper_lineno_5;

 goto try_except_handler_5;
 // End of try:
 try_end_5:;
 goto try_end_6;
 // Exception handler code:
 try_except_handler_5:;
 exception_keeper_type_6 = exception_type;
 exception_keeper_value_6 = exception_value;
 exception_keeper_tb_6 = exception_tb;
 exception_keeper_lineno_6 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 // Preserve existing published exception id 1.
 exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_6 == NULL) {
     exception_keeper_tb_6 = MAKE_TRACEBACK(frame_f59fac3a841f89205fc86a739ad8001d, exception_keeper_lineno_6);
 } else if (exception_keeper_lineno_6 != 0) {
     exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_f59fac3a841f89205fc86a739ad8001d, exception_keeper_lineno_6);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
 // Tried code:
 {
  bool tmp_condition_result_6;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_3 = PyExc_BaseException;
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
  assert(!(tmp_res == -1));
  tmp_condition_result_6 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_6 != false) {
      goto branch_yes_6;
  } else {
      goto branch_no_6;
  }
 }
 branch_yes_6:;
 {
  PyObject *tmp_assign_source_12;
  tmp_assign_source_12 = EXC_VALUE(PyThreadState_GET());
  assert(var_underlying_exc == NULL);
  Py_INCREF(tmp_assign_source_12);
  var_underlying_exc = tmp_assign_source_12;
 }
 // Tried code:
 {
  bool tmp_condition_result_7;
  PyObject *tmp_cmp_expr_left_4;
  PyObject *tmp_cmp_expr_right_4;
  PyObject *tmp_expression_value_7;
  CHECK_OBJECT(par_self);
  tmp_expression_value_7 = par_self;
  tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[19]);
  if (tmp_cmp_expr_left_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 258;
   type_description_1 = "ooooooooo";
      goto try_except_handler_9;
  }
  tmp_cmp_expr_right_4 = Py_None;
  tmp_condition_result_7 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_4);
  if (tmp_condition_result_7 != false) {
      goto branch_yes_7;
  } else {
      goto branch_no_7;
  }
 }
 branch_yes_7:;
 {
  PyObject *tmp_called_instance_5;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_call_result_3;
  CHECK_OBJECT(par_self);
  tmp_expression_value_8 = par_self;
  tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[19]);
  if (tmp_called_instance_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 262;
   type_description_1 = "ooooooooo";
      goto try_except_handler_9;
  }
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 262;
  tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[20]);
  Py_DECREF(tmp_called_instance_5);
  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 262;
   type_description_1 = "ooooooooo";
      goto try_except_handler_9;
  }
  Py_DECREF(tmp_call_result_3);
 }
 branch_no_7:;
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_9;
  PyObject *tmp_call_result_4;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_called_value_2;
  PyObject *tmp_args_element_value_5;
  CHECK_OBJECT(par_self);
  tmp_expression_value_9 = par_self;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[32]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 264;
   type_description_1 = "ooooooooo";
      goto try_except_handler_9;
  }
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[57]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 264;
   type_description_1 = "ooooooooo";
      goto try_except_handler_9;
  }
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 264;
  tmp_args_element_value_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
  if (tmp_args_element_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 264;
   type_description_1 = "ooooooooo";
      goto try_except_handler_9;
  }
  CHECK_OBJECT(var_underlying_exc);
  tmp_args_element_value_5 = var_underlying_exc;
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 264;
  {
      PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
      tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_element_value_4);
  if (tmp_call_result_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 264;
   type_description_1 = "ooooooooo";
      goto try_except_handler_9;
  }
  Py_DECREF(tmp_call_result_4);
 }
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto try_return_handler_9;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_9:;
 Py_XDECREF(var_underlying_exc);
 var_underlying_exc = NULL;

 goto try_return_handler_8;
 // Exception handler code:
 try_except_handler_9:;
 exception_keeper_type_7 = exception_type;
 exception_keeper_value_7 = exception_value;
 exception_keeper_tb_7 = exception_tb;
 exception_keeper_lineno_7 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(var_underlying_exc);
 var_underlying_exc = NULL;

 // Re-raise.
 exception_type = exception_keeper_type_7;
 exception_value = exception_keeper_value_7;
 exception_tb = exception_keeper_tb_7;
 exception_lineno = exception_keeper_lineno_7;

 goto try_except_handler_8;
 // End of try:
 goto branch_end_6;
 branch_no_6:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 255;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_f59fac3a841f89205fc86a739ad8001d->m_frame) frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "ooooooooo";
 goto try_except_handler_8;
 branch_end_6:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_8:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 goto frame_return_exit_1;
 // Exception handler code:
 try_except_handler_8:;
 exception_keeper_type_8 = exception_type;
 exception_keeper_value_8 = exception_value;
 exception_keeper_tb_8 = exception_tb;
 exception_keeper_lineno_8 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 // Re-raise.
 exception_type = exception_keeper_type_8;
 exception_value = exception_keeper_value_8;
 exception_tb = exception_keeper_tb_8;
 exception_lineno = exception_keeper_lineno_8;

 goto frame_exception_exit_1;
 // End of try:
 // End of try:
 try_end_6:;
 CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
 Py_DECREF(tmp_tuple_unpack_2__source_iter);
 tmp_tuple_unpack_2__source_iter = NULL;
 {
  PyObject *tmp_assign_source_13;
  CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
  tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;
  assert(var_messages == NULL);
  Py_INCREF(tmp_assign_source_13);
  var_messages = tmp_assign_source_13;
 }
 Py_XDECREF(tmp_tuple_unpack_2__element_1);
 tmp_tuple_unpack_2__element_1 = NULL;

 {
  PyObject *tmp_assign_source_14;
  CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
  tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;
  assert(var_upgraded == NULL);
  Py_INCREF(tmp_assign_source_14);
  var_upgraded = tmp_assign_source_14;
 }
 Py_XDECREF(tmp_tuple_unpack_2__element_2);
 tmp_tuple_unpack_2__element_2 = NULL;

 {
  PyObject *tmp_assign_source_15;
  CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
  tmp_assign_source_15 = tmp_tuple_unpack_2__element_3;
  assert(var_tail == NULL);
  Py_INCREF(tmp_assign_source_15);
  var_tail = tmp_assign_source_15;
 }
 Py_XDECREF(tmp_tuple_unpack_2__element_3);
 tmp_tuple_unpack_2__element_3 = NULL;

 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_assattr_target_4;
  CHECK_OBJECT(var_upgraded);
  tmp_assattr_value_4 = var_upgraded;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_4 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[11], tmp_assattr_value_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 267;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_16;
  tmp_assign_source_16 = Py_None;
  assert(var_payload == NULL);
  Py_INCREF(tmp_assign_source_16);
  var_payload = tmp_assign_source_16;
 }
 {
  PyObject *tmp_assign_source_17;
  PyObject *tmp_iter_arg_3;
  CHECK_OBJECT(var_messages);
  tmp_iter_arg_3 = var_messages;
  tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
  if (tmp_assign_source_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 270;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  assert(tmp_for_loop_1__for_iterator == NULL);
  tmp_for_loop_1__for_iterator = tmp_assign_source_17;
 }
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_18;
  CHECK_OBJECT(tmp_for_loop_1__for_iterator);
  tmp_next_source_1 = tmp_for_loop_1__for_iterator;
  tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_18 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    type_description_1 = "ooooooooo";
    exception_lineno = 270;
          goto try_except_handler_10;
      }
  }

  {
      PyObject *old = tmp_for_loop_1__iter_value;
      tmp_for_loop_1__iter_value = tmp_assign_source_18;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_19;
  PyObject *tmp_iter_arg_4;
  CHECK_OBJECT(tmp_for_loop_1__iter_value);
  tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
  tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
  if (tmp_assign_source_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 270;
   type_description_1 = "ooooooooo";
      goto try_except_handler_11;
  }
  {
      PyObject *old = tmp_tuple_unpack_3__source_iter;
      tmp_tuple_unpack_3__source_iter = tmp_assign_source_19;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_unpack_6;
  CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
  tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
  tmp_assign_source_20 = UNPACK_NEXT(tstate, tmp_unpack_6, 0, 2);
  if (tmp_assign_source_20 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooooo";
   exception_lineno = 270;
      goto try_except_handler_12;
  }
  {
      PyObject *old = tmp_tuple_unpack_3__element_1;
      tmp_tuple_unpack_3__element_1 = tmp_assign_source_20;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_21;
  PyObject *tmp_unpack_7;
  CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
  tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
  tmp_assign_source_21 = UNPACK_NEXT(tstate, tmp_unpack_7, 1, 2);
  if (tmp_assign_source_21 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooooo";
   exception_lineno = 270;
      goto try_except_handler_12;
  }
  {
      PyObject *old = tmp_tuple_unpack_3__element_2;
      tmp_tuple_unpack_3__element_2 = tmp_assign_source_21;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_iterator_name_3;
  CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
  tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
  // Check if iterator has left-over elements.
  CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

  tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

  if (likely(tmp_iterator_attempt == NULL)) {
      PyObject *error = GET_ERROR_OCCURRED(tstate);

      if (error != NULL) {
          if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
              CLEAR_ERROR_OCCURRED(tstate);
          } else {
              FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

     type_description_1 = "ooooooooo";
     exception_lineno = 270;
              goto try_except_handler_12;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[45];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "ooooooooo";
   exception_lineno = 270;
      goto try_except_handler_12;
  }
 }
 goto try_end_7;
 // Exception handler code:
 try_except_handler_12:;
 exception_keeper_type_9 = exception_type;
 exception_keeper_value_9 = exception_value;
 exception_keeper_tb_9 = exception_tb;
 exception_keeper_lineno_9 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
 Py_DECREF(tmp_tuple_unpack_3__source_iter);
 tmp_tuple_unpack_3__source_iter = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_9;
 exception_value = exception_keeper_value_9;
 exception_tb = exception_keeper_tb_9;
 exception_lineno = exception_keeper_lineno_9;

 goto try_except_handler_11;
 // End of try:
 try_end_7:;
 goto try_end_8;
 // Exception handler code:
 try_except_handler_11:;
 exception_keeper_type_10 = exception_type;
 exception_keeper_value_10 = exception_value;
 exception_keeper_tb_10 = exception_tb;
 exception_keeper_lineno_10 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_tuple_unpack_3__element_1);
 tmp_tuple_unpack_3__element_1 = NULL;
 Py_XDECREF(tmp_tuple_unpack_3__element_2);
 tmp_tuple_unpack_3__element_2 = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_10;
 exception_value = exception_keeper_value_10;
 exception_tb = exception_keeper_tb_10;
 exception_lineno = exception_keeper_lineno_10;

 goto try_except_handler_10;
 // End of try:
 try_end_8:;
 CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
 Py_DECREF(tmp_tuple_unpack_3__source_iter);
 tmp_tuple_unpack_3__source_iter = NULL;
 {
  PyObject *tmp_assign_source_22;
  CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
  tmp_assign_source_22 = tmp_tuple_unpack_3__element_1;
  {
      PyObject *old = var_message;
      var_message = tmp_assign_source_22;
      Py_INCREF(var_message);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_3__element_1);
 tmp_tuple_unpack_3__element_1 = NULL;

 {
  PyObject *tmp_assign_source_23;
  CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
  tmp_assign_source_23 = tmp_tuple_unpack_3__element_2;
  {
      PyObject *old = var_payload;
      var_payload = tmp_assign_source_23;
      Py_INCREF(var_payload);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_3__element_2);
 tmp_tuple_unpack_3__element_2 = NULL;

 {
  nuitka_bool tmp_condition_result_8;
  PyObject *tmp_expression_value_10;
  PyObject *tmp_attribute_value_2;
  int tmp_truth_name_4;
  CHECK_OBJECT(var_message);
  tmp_expression_value_10 = var_message;
  tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[58]);
  if (tmp_attribute_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 271;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_2);
  if (tmp_truth_name_4 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_2);

   exception_lineno = 271;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  tmp_condition_result_8 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_2);
  if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
      goto branch_yes_8;
  } else {
      goto branch_no_8;
  }
 }
 branch_yes_8:;
 {
  PyObject *tmp_assattr_value_5;
  PyObject *tmp_assattr_target_5;
  tmp_assattr_value_5 = Py_True;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 272;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }

  tmp_assattr_target_5 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[4], tmp_assattr_value_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 272;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
 }
 branch_no_8:;
 {
  PyObject *tmp_assattr_value_6;
  PyObject *tmp_assattr_target_6;
  CHECK_OBJECT(var_payload);
  tmp_assattr_value_6 = var_payload;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 274;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }

  tmp_assattr_target_6 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[5], tmp_assattr_value_6);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 274;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
 }
 {
  nuitka_bool tmp_condition_result_9;
  int tmp_or_left_truth_2;
  nuitka_bool tmp_or_left_value_2;
  nuitka_bool tmp_or_right_value_2;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_attribute_value_3;
  int tmp_truth_name_5;
  PyObject *tmp_called_value_3;
  PyObject *tmp_call_result_5;
  PyObject *tmp_args_element_value_6;
  PyObject *tmp_expression_value_12;
  int tmp_truth_name_6;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 276;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }

  tmp_expression_value_11 = par_self;
  tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[6]);
  if (tmp_attribute_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 276;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_3);
  if (tmp_truth_name_5 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_3);

   exception_lineno = 276;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  tmp_or_left_value_2 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_3);
  tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_or_left_truth_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 276;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  if (tmp_or_left_truth_2 == 1) {
      goto or_left_2;
  } else {
      goto or_right_2;
  }
  or_right_2:;
  tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[60]);

  if (unlikely(tmp_called_value_3 == NULL)) {
      tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
  }

  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 276;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  CHECK_OBJECT(var_message);
  tmp_expression_value_12 = var_message;
  tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[61]);
  if (tmp_args_element_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 277;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 276;
  tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
  Py_DECREF(tmp_args_element_value_6);
  if (tmp_call_result_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 276;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  tmp_truth_name_6 = CHECK_IF_TRUE(tmp_call_result_5);
  if (tmp_truth_name_6 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_call_result_5);

   exception_lineno = 276;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  tmp_or_right_value_2 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_call_result_5);
  tmp_condition_result_9 = tmp_or_right_value_2;
  goto or_end_2;
  or_left_2:;
  tmp_condition_result_9 = tmp_or_left_value_2;
  or_end_2:;
  if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
      goto branch_yes_9;
  } else {
      goto branch_no_9;
  }
 }
 branch_yes_9:;
 {
  PyObject *tmp_called_value_4;
  PyObject *tmp_expression_value_13;
  PyObject *tmp_call_result_6;
  PyObject *tmp_args_element_value_7;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_args_element_value_8;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 279;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }

  tmp_expression_value_13 = par_self;
  tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[55]);
  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 279;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  CHECK_OBJECT(var_message);
  tmp_tuple_element_1 = var_message;
  tmp_args_element_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_element_value_7, 0, tmp_tuple_element_1);
  tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[62]);

  if (unlikely(tmp_tuple_element_1 == NULL)) {
      tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
  }

  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 279;
   type_description_1 = "ooooooooo";
      goto tuple_build_exception_1;
  }
  PyTuple_SET_ITEM0(tmp_args_element_value_7, 1, tmp_tuple_element_1);
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_called_value_4);
  Py_DECREF(tmp_args_element_value_7);
  goto try_except_handler_10;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_args_element_value_8 = mod_consts[63];
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 279;
  {
      PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
      tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
  }

  Py_DECREF(tmp_called_value_4);
  Py_DECREF(tmp_args_element_value_7);
  if (tmp_call_result_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 279;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  Py_DECREF(tmp_call_result_6);
 }
 goto branch_end_9;
 branch_no_9:;
 {
  PyObject *tmp_called_instance_6;
  PyObject *tmp_call_result_7;
  PyObject *tmp_args_element_value_9;
  PyObject *tmp_tuple_element_2;
  PyObject *tmp_args_element_value_10;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 281;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }

  tmp_called_instance_6 = par_self;
  CHECK_OBJECT(var_message);
  tmp_tuple_element_2 = var_message;
  tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_element_value_9, 0, tmp_tuple_element_2);
  CHECK_OBJECT(var_payload);
  tmp_tuple_element_2 = var_payload;
  PyTuple_SET_ITEM0(tmp_args_element_value_9, 1, tmp_tuple_element_2);
  tmp_args_element_value_10 = mod_consts[63];
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 281;
  {
      PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
      tmp_call_result_7 = CALL_METHOD_WITH_ARGS2(
          tstate,
          tmp_called_instance_6,
          mod_consts[55],
          call_args
      );
  }

  Py_DECREF(tmp_args_element_value_9);
  if (tmp_call_result_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 281;
   type_description_1 = "ooooooooo";
      goto try_except_handler_10;
  }
  Py_DECREF(tmp_call_result_7);
 }
 branch_end_9:;
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 270;
  type_description_1 = "ooooooooo";
     goto try_except_handler_10;
 }
 goto loop_start_1;
 loop_end_1:;
 goto try_end_9;
 // Exception handler code:
 try_except_handler_10:;
 exception_keeper_type_11 = exception_type;
 exception_keeper_value_11 = exception_value;
 exception_keeper_tb_11 = exception_tb;
 exception_keeper_lineno_11 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_for_loop_1__iter_value);
 tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_1__for_iterator);
 Py_DECREF(tmp_for_loop_1__for_iterator);
 tmp_for_loop_1__for_iterator = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_11;
 exception_value = exception_keeper_value_11;
 exception_tb = exception_keeper_tb_11;
 exception_lineno = exception_keeper_lineno_11;

 goto frame_exception_exit_1;
 // End of try:
 try_end_9:;
 Py_XDECREF(tmp_for_loop_1__iter_value);
 tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_1__for_iterator);
 Py_DECREF(tmp_for_loop_1__for_iterator);
 tmp_for_loop_1__for_iterator = NULL;
 {
  bool tmp_condition_result_10;
  PyObject *tmp_cmp_expr_left_5;
  PyObject *tmp_cmp_expr_right_5;
  if (var_payload == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 282;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_cmp_expr_left_5 = var_payload;
  tmp_cmp_expr_right_5 = Py_None;
  tmp_condition_result_10 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
  if (tmp_condition_result_10 != false) {
      goto branch_yes_10;
  } else {
      goto branch_no_10;
  }
 }
 branch_yes_10:;
 {
  bool tmp_condition_result_11;
  PyObject *tmp_cmp_expr_left_6;
  PyObject *tmp_cmp_expr_right_6;
  if (var_payload == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 287;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_cmp_expr_left_6 = var_payload;
  tmp_cmp_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[62]);

  if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
      tmp_cmp_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[62]);
  }

  if (tmp_cmp_expr_right_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_11 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
  if (tmp_condition_result_11 != false) {
      goto branch_yes_11;
  } else {
      goto branch_no_11;
  }
 }
 branch_yes_11:;
 {
  PyObject *tmp_called_value_5;
  PyObject *tmp_expression_value_14;
  PyObject *tmp_call_result_8;
  PyObject *tmp_args_element_value_11;
  PyObject *tmp_expression_value_15;
  if (var_payload == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 288;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_14 = var_payload;
  tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[65]);
  if (tmp_called_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 288;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  if (par_self == NULL) {
   Py_DECREF(tmp_called_value_5);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 288;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_15 = par_self;
  tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[21]);
  if (tmp_args_element_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_5);

   exception_lineno = 288;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 288;
  tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_11);
  Py_DECREF(tmp_called_value_5);
  Py_DECREF(tmp_args_element_value_11);
  if (tmp_call_result_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 288;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_8);
 }
 goto branch_end_11;
 branch_no_11:;
 {
  PyObject *tmp_called_instance_7;
  PyObject *tmp_call_result_9;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 290;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_called_instance_7 = par_self;
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 290;
  tmp_call_result_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[21]);
  if (tmp_call_result_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 290;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_9);
 }
 branch_end_11:;
 branch_no_10:;
 {
  nuitka_bool tmp_condition_result_12;
  int tmp_truth_name_7;
  CHECK_OBJECT(var_tail);
  tmp_truth_name_7 = CHECK_IF_TRUE(var_tail);
  if (tmp_truth_name_7 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 292;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_12 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
      goto branch_yes_12;
  } else {
      goto branch_no_12;
  }
 }
 branch_yes_12:;
 {
  nuitka_bool tmp_condition_result_13;
  int tmp_truth_name_8;
  CHECK_OBJECT(var_upgraded);
  tmp_truth_name_8 = CHECK_IF_TRUE(var_upgraded);
  if (tmp_truth_name_8 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 293;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_13 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
      goto branch_yes_13;
  } else {
      goto branch_no_13;
  }
 }
 branch_yes_13:;
 {
  PyObject *tmp_called_instance_8;
  PyObject *tmp_call_result_10;
  PyObject *tmp_args_element_value_12;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 294;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_called_instance_8 = par_self;
  CHECK_OBJECT(var_tail);
  tmp_args_element_value_12 = var_tail;
  frame_f59fac3a841f89205fc86a739ad8001d->m_frame.f_lineno = 294;
  tmp_call_result_10 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts[46], tmp_args_element_value_12);
  if (tmp_call_result_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 294;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_10);
 }
 goto branch_end_13;
 branch_no_13:;
 {
  PyObject *tmp_assattr_value_7;
  PyObject *tmp_assattr_target_7;
  CHECK_OBJECT(var_tail);
  tmp_assattr_value_7 = var_tail;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 296;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_assattr_target_7 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[10], tmp_assattr_value_7);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 296;
   type_description_1 = "ooooooooo";
      goto frame_exception_exit_1;
  }
 }
 branch_end_13:;
 branch_no_12:;
 branch_end_5:;
 branch_end_2:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_return_exit_1:

 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto try_return_handler_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_f59fac3a841f89205fc86a739ad8001d, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_f59fac3a841f89205fc86a739ad8001d->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_f59fac3a841f89205fc86a739ad8001d, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_f59fac3a841f89205fc86a739ad8001d,
     type_description_1,
     par_self,
     par_data,
     var_payload,
     var_eof,
     var_tail,
     var_messages,
     var_upgraded,
     var_underlying_exc,
     var_message
 );


 // Release cached frame if used for exception.
 if (frame_f59fac3a841f89205fc86a739ad8001d == cache_frame_f59fac3a841f89205fc86a739ad8001d) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_f59fac3a841f89205fc86a739ad8001d);
     cache_frame_f59fac3a841f89205fc86a739ad8001d = NULL;
 }

 assertFrameObject(frame_f59fac3a841f89205fc86a739ad8001d);

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
 Py_XDECREF(var_payload);
 var_payload = NULL;
 Py_XDECREF(var_eof);
 var_eof = NULL;
 Py_XDECREF(var_tail);
 var_tail = NULL;
 Py_XDECREF(var_messages);
 var_messages = NULL;
 Py_XDECREF(var_upgraded);
 var_upgraded = NULL;
 Py_XDECREF(var_message);
 var_message = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_12 = exception_type;
 exception_keeper_value_12 = exception_value;
 exception_keeper_tb_12 = exception_tb;
 exception_keeper_lineno_12 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(var_payload);
 var_payload = NULL;
 Py_XDECREF(var_eof);
 var_eof = NULL;
 Py_XDECREF(var_tail);
 var_tail = NULL;
 Py_XDECREF(var_messages);
 var_messages = NULL;
 Py_XDECREF(var_upgraded);
 var_upgraded = NULL;
 Py_XDECREF(var_message);
 var_message = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_12;
 exception_value = exception_keeper_value_12;
 exception_tb = exception_keeper_tb_12;
 exception_lineno = exception_keeper_lineno_12;

 goto function_exception_exit;
 // End of try:

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



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__10_resume_reading(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__10_resume_reading,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_1bdbb384ce627e76d27ac5c6027d3d68,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__11_set_exception(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__11_set_exception,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[127],
#endif
        codeobj_59af21cf1a166421e4023f5d6032090d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__12_set_parser(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__12_set_parser,
        mod_consts[129],
#if PYTHON_VERSION >= 0x300
        mod_consts[130],
#endif
        codeobj_2f68c7c6229a7dfddd1e9ec17ef50674,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__13_set_response_params(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__13_set_response_params,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[144],
#endif
        codeobj_449801c86c6a21958b7fa5ead9ae1ef7,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__14__drop_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__14__drop_timeout,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[145],
#endif
        codeobj_4f8cb1d0c781f54f4d2bdac6244c16e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__15__reschedule_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__15__reschedule_timeout,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_d41efc7dfd703d43fcabfdcffd0ac2ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__16_start_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__16_start_timeout,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_7b8706ff37248ef62575156a7764ab60,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__17__on_read_timeout(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__17__on_read_timeout,
        mod_consts[52],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_bfa121849ab729da8472e54649309627,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__18_data_received(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__18_data_received,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_f59fac3a841f89205fc86a739ad8001d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_9ee1093da0cbd7872a3d81ee82eb0fc2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__2_upgraded(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__2_upgraded,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_5fa25d659036a96c7df959b8916b19d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__3_should_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__3_should_close,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_19b4340850a38dec0d6dd7dc10a5cab1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__4_force_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__4_force_close,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_1f491321dc4e7ea8d0ae18a47d521d69,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__5_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__5_close,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_4503297db622a82c0ae395dce6c04dfb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__6_is_connected(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__6_is_connected,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_a9074fe2f69d7811be51aad8b7925e70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__7_connection_lost(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__7_connection_lost,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_4b4ab96c79e30c8d9db8aad1e87af377,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__8_eof_received(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__8_eof_received,
        mod_consts[122],
#if PYTHON_VERSION >= 0x300
        mod_consts[123],
#endif
        codeobj_e60ae47dd26331bc553e2c0e9696bb71,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_proto$$$function__9_pause_reading(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_proto$$$function__9_pause_reading,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_8f0941d0e624bf2db52110f59ce8ae7d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_proto,
        NULL,
        closure,
        1
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

static function_impl_code const function_table_aiohttp$client_proto[] = {
 impl_aiohttp$client_proto$$$function__1___init__,
 impl_aiohttp$client_proto$$$function__2_upgraded,
 impl_aiohttp$client_proto$$$function__3_should_close,
 impl_aiohttp$client_proto$$$function__4_force_close,
 impl_aiohttp$client_proto$$$function__5_close,
 impl_aiohttp$client_proto$$$function__6_is_connected,
 impl_aiohttp$client_proto$$$function__7_connection_lost,
 impl_aiohttp$client_proto$$$function__8_eof_received,
 impl_aiohttp$client_proto$$$function__9_pause_reading,
 impl_aiohttp$client_proto$$$function__10_resume_reading,
 impl_aiohttp$client_proto$$$function__11_set_exception,
 impl_aiohttp$client_proto$$$function__12_set_parser,
 impl_aiohttp$client_proto$$$function__13_set_response_params,
 impl_aiohttp$client_proto$$$function__14__drop_timeout,
 impl_aiohttp$client_proto$$$function__15__reschedule_timeout,
 impl_aiohttp$client_proto$$$function__16_start_timeout,
 impl_aiohttp$client_proto$$$function__17__on_read_timeout,
 impl_aiohttp$client_proto$$$function__18_data_received,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_aiohttp$client_proto);

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
        module_aiohttp$client_proto,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_aiohttp$client_proto,
        sizeof(function_table_aiohttp$client_proto) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiohttp$client_proto(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiohttp$client_proto");

    // Store the module for future use.
    module_aiohttp$client_proto = module;

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
        PRINT_STRING("aiohttp$client_proto: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("aiohttp$client_proto: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.client_proto" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initaiohttp$client_proto\n");

    moduledict_aiohttp$client_proto = MODULE_DICT(module_aiohttp$client_proto);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiohttp$client_proto,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiohttp$client_proto,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[30]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiohttp$client_proto,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$client_proto,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$client_proto,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiohttp$client_proto);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_aiohttp$client_proto);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
 struct Nuitka_CellObject *outline_0_var___class__ = NULL;
 PyObject *tmp_class_creation_1__bases = NULL;
 PyObject *tmp_class_creation_1__bases_orig = NULL;
 PyObject *tmp_class_creation_1__class_decl_dict = NULL;
 PyObject *tmp_class_creation_1__metaclass = NULL;
 PyObject *tmp_class_creation_1__prepared = NULL;
 PyObject *tmp_import_from_1__module = NULL;
 PyObject *tmp_import_from_2__module = NULL;
 PyObject *tmp_import_from_3__module = NULL;
 PyObject *tmp_import_from_4__module = NULL;
 PyObject *tmp_import_from_5__module = NULL;
 struct Nuitka_FrameObject *frame_a50ce69635fa55357de4a486d4e819f9;
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
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
 int tmp_res;
 PyObject *locals_aiohttp$client_proto$$$class__1_ResponseHandler_23 = NULL;
 PyObject *tmp_dictset_value;
 struct Nuitka_FrameObject *frame_2bda082e6043cb0ecde83de18cf7f167_2;
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

    // Module init code if any


    // Module code.
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = module_filename_obj;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_2);
 }
 frame_a50ce69635fa55357de4a486d4e819f9 = MAKE_MODULE_FRAME(codeobj_a50ce69635fa55357de4a486d4e819f9, module_aiohttp$client_proto);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_a50ce69635fa55357de4a486d4e819f9);
 assert(Py_REFCNT(frame_a50ce69635fa55357de4a486d4e819f9) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = module_filename_obj;
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[68]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[69], tmp_assattr_value_1);
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
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[68]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[70], tmp_assattr_value_2);
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
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[72];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp$client_proto;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = Py_None;
  tmp_level_value_1 = mod_consts[63];
  frame_a50ce69635fa55357de4a486d4e819f9->m_frame.f_lineno = 1;
  tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_import_name_from_1;
  PyObject *tmp_name_value_2;
  PyObject *tmp_globals_arg_value_2;
  PyObject *tmp_locals_arg_value_2;
  PyObject *tmp_fromlist_value_2;
  PyObject *tmp_level_value_2;
  tmp_name_value_2 = mod_consts[73];
  tmp_globals_arg_value_2 = (PyObject *)moduledict_aiohttp$client_proto;
  tmp_locals_arg_value_2 = Py_None;
  tmp_fromlist_value_2 = mod_consts[74];
  tmp_level_value_2 = mod_consts[63];
  frame_a50ce69635fa55357de4a486d4e819f9->m_frame.f_lineno = 2;
  tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
  if (tmp_import_name_from_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 2;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_1)) {
      tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_1,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[23],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[23]);
  }

  Py_DECREF(tmp_import_name_from_1);
  if (tmp_assign_source_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 2;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_5);
 }
 {
  PyObject *tmp_assign_source_6;
  tmp_assign_source_6 = IMPORT_HARD_TYPING();
  assert(!(tmp_assign_source_6 == NULL));
  assert(tmp_import_from_1__module == NULL);
  Py_INCREF(tmp_assign_source_6);
  tmp_import_from_1__module = tmp_assign_source_6;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_7;
  PyObject *tmp_import_name_from_2;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_2 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_2)) {
      tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_2,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[75],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[75]);
  }

  if (tmp_assign_source_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_7);
 }
 {
  PyObject *tmp_assign_source_8;
  PyObject *tmp_import_name_from_3;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_3 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_3)) {
      tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_3,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[76],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[76]);
  }

  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_8);
 }
 {
  PyObject *tmp_assign_source_9;
  PyObject *tmp_import_name_from_4;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_4 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_4)) {
      tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_4,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[77],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[77]);
  }

  if (tmp_assign_source_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_9);
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
  PyObject *tmp_assign_source_10;
  PyObject *tmp_import_name_from_5;
  PyObject *tmp_name_value_3;
  PyObject *tmp_globals_arg_value_3;
  PyObject *tmp_locals_arg_value_3;
  PyObject *tmp_fromlist_value_3;
  PyObject *tmp_level_value_3;
  tmp_name_value_3 = mod_consts[78];
  tmp_globals_arg_value_3 = (PyObject *)moduledict_aiohttp$client_proto;
  tmp_locals_arg_value_3 = Py_None;
  tmp_fromlist_value_3 = mod_consts[79];
  tmp_level_value_3 = mod_consts[80];
  frame_a50ce69635fa55357de4a486d4e819f9->m_frame.f_lineno = 5;
  tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
  if (tmp_import_name_from_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_5)) {
      tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_5,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[0],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[0]);
  }

  Py_DECREF(tmp_import_name_from_5);
  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_10);
 }
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_name_value_4;
  PyObject *tmp_globals_arg_value_4;
  PyObject *tmp_locals_arg_value_4;
  PyObject *tmp_fromlist_value_4;
  PyObject *tmp_level_value_4;
  tmp_name_value_4 = mod_consts[81];
  tmp_globals_arg_value_4 = (PyObject *)moduledict_aiohttp$client_proto;
  tmp_locals_arg_value_4 = Py_None;
  tmp_fromlist_value_4 = mod_consts[82];
  tmp_level_value_4 = mod_consts[80];
  frame_a50ce69635fa55357de4a486d4e819f9->m_frame.f_lineno = 6;
  tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_2__module == NULL);
  tmp_import_from_2__module = tmp_assign_source_11;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_12;
  PyObject *tmp_import_name_from_6;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_6 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_6)) {
      tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_6,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[34],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[34]);
  }

  if (tmp_assign_source_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_12);
 }
 {
  PyObject *tmp_assign_source_13;
  PyObject *tmp_import_name_from_7;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_7 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_7)) {
      tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_7,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[33],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[33]);
  }

  if (tmp_assign_source_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_13);
 }
 {
  PyObject *tmp_assign_source_14;
  PyObject *tmp_import_name_from_8;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_8 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_8)) {
      tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_8,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[36],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[36]);
  }

  if (tmp_assign_source_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_14);
 }
 {
  PyObject *tmp_assign_source_15;
  PyObject *tmp_import_name_from_9;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_9 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_9)) {
      tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_9,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[53],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[53]);
  }

  if (tmp_assign_source_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_15);
 }
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

 CHECK_OBJECT(tmp_import_from_2__module);
 Py_DECREF(tmp_import_from_2__module);
 tmp_import_from_2__module = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto frame_exception_exit_1;
 // End of try:
 try_end_2:;
 CHECK_OBJECT(tmp_import_from_2__module);
 Py_DECREF(tmp_import_from_2__module);
 tmp_import_from_2__module = NULL;
 {
  PyObject *tmp_assign_source_16;
  PyObject *tmp_name_value_5;
  PyObject *tmp_globals_arg_value_5;
  PyObject *tmp_locals_arg_value_5;
  PyObject *tmp_fromlist_value_5;
  PyObject *tmp_level_value_5;
  tmp_name_value_5 = mod_consts[83];
  tmp_globals_arg_value_5 = (PyObject *)moduledict_aiohttp$client_proto;
  tmp_locals_arg_value_5 = Py_None;
  tmp_fromlist_value_5 = mod_consts[84];
  tmp_level_value_5 = mod_consts[80];
  frame_a50ce69635fa55357de4a486d4e819f9->m_frame.f_lineno = 12;
  tmp_assign_source_16 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
  if (tmp_assign_source_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 12;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_3__module == NULL);
  tmp_import_from_3__module = tmp_assign_source_16;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_17;
  PyObject *tmp_import_name_from_10;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_10 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_10)) {
      tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_10,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[37],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[37]);
  }

  if (tmp_assign_source_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 12;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_17);
 }
 {
  PyObject *tmp_assign_source_18;
  PyObject *tmp_import_name_from_11;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_11 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_11)) {
      tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_11,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[85],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[85]);
  }

  if (tmp_assign_source_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 12;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_18);
 }
 {
  PyObject *tmp_assign_source_19;
  PyObject *tmp_import_name_from_12;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_12 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_12)) {
      tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_12,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[32],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[32]);
  }

  if (tmp_assign_source_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 12;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_19);
 }
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_import_name_from_13;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_13 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_13)) {
      tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_13,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[60],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[60]);
  }

  if (tmp_assign_source_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 12;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_20);
 }
 goto try_end_3;
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

 CHECK_OBJECT(tmp_import_from_3__module);
 Py_DECREF(tmp_import_from_3__module);
 tmp_import_from_3__module = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto frame_exception_exit_1;
 // End of try:
 try_end_3:;
 CHECK_OBJECT(tmp_import_from_3__module);
 Py_DECREF(tmp_import_from_3__module);
 tmp_import_from_3__module = NULL;
 {
  PyObject *tmp_assign_source_21;
  PyObject *tmp_name_value_6;
  PyObject *tmp_globals_arg_value_6;
  PyObject *tmp_locals_arg_value_6;
  PyObject *tmp_fromlist_value_6;
  PyObject *tmp_level_value_6;
  tmp_name_value_6 = mod_consts[86];
  tmp_globals_arg_value_6 = (PyObject *)moduledict_aiohttp$client_proto;
  tmp_locals_arg_value_6 = Py_None;
  tmp_fromlist_value_6 = mod_consts[87];
  tmp_level_value_6 = mod_consts[80];
  frame_a50ce69635fa55357de4a486d4e819f9->m_frame.f_lineno = 18;
  tmp_assign_source_21 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
  if (tmp_assign_source_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 18;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_4__module == NULL);
  tmp_import_from_4__module = tmp_assign_source_21;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_22;
  PyObject *tmp_import_name_from_14;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_14 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_14)) {
      tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_14,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[47],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[47]);
  }

  if (tmp_assign_source_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 18;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_22);
 }
 {
  PyObject *tmp_assign_source_23;
  PyObject *tmp_import_name_from_15;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_15 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_15)) {
      tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_15,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[88],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[88]);
  }

  if (tmp_assign_source_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 18;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_23);
 }
 goto try_end_4;
 // Exception handler code:
 try_except_handler_4:;
 exception_keeper_type_4 = exception_type;
 exception_keeper_value_4 = exception_value;
 exception_keeper_tb_4 = exception_tb;
 exception_keeper_lineno_4 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_import_from_4__module);
 Py_DECREF(tmp_import_from_4__module);
 tmp_import_from_4__module = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_4;
 exception_value = exception_keeper_value_4;
 exception_tb = exception_keeper_tb_4;
 exception_lineno = exception_keeper_lineno_4;

 goto frame_exception_exit_1;
 // End of try:
 try_end_4:;
 CHECK_OBJECT(tmp_import_from_4__module);
 Py_DECREF(tmp_import_from_4__module);
 tmp_import_from_4__module = NULL;
 {
  PyObject *tmp_assign_source_24;
  PyObject *tmp_import_name_from_16;
  PyObject *tmp_name_value_7;
  PyObject *tmp_globals_arg_value_7;
  PyObject *tmp_locals_arg_value_7;
  PyObject *tmp_fromlist_value_7;
  PyObject *tmp_level_value_7;
  tmp_name_value_7 = mod_consts[89];
  tmp_globals_arg_value_7 = (PyObject *)moduledict_aiohttp$client_proto;
  tmp_locals_arg_value_7 = Py_None;
  tmp_fromlist_value_7 = mod_consts[90];
  tmp_level_value_7 = mod_consts[80];
  frame_a50ce69635fa55357de4a486d4e819f9->m_frame.f_lineno = 19;
  tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
  if (tmp_import_name_from_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 19;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_16)) {
      tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_16,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[57],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[57]);
  }

  Py_DECREF(tmp_import_name_from_16);
  if (tmp_assign_source_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 19;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_24);
 }
 {
  PyObject *tmp_assign_source_25;
  PyObject *tmp_name_value_8;
  PyObject *tmp_globals_arg_value_8;
  PyObject *tmp_locals_arg_value_8;
  PyObject *tmp_fromlist_value_8;
  PyObject *tmp_level_value_8;
  tmp_name_value_8 = mod_consts[91];
  tmp_globals_arg_value_8 = (PyObject *)moduledict_aiohttp$client_proto;
  tmp_locals_arg_value_8 = Py_None;
  tmp_fromlist_value_8 = mod_consts[92];
  tmp_level_value_8 = mod_consts[80];
  frame_a50ce69635fa55357de4a486d4e819f9->m_frame.f_lineno = 20;
  tmp_assign_source_25 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
  if (tmp_assign_source_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_5__module == NULL);
  tmp_import_from_5__module = tmp_assign_source_25;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_26;
  PyObject *tmp_import_name_from_17;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_17 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_17)) {
      tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_17,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[62],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[62]);
  }

  if (tmp_assign_source_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_26);
 }
 {
  PyObject *tmp_assign_source_27;
  PyObject *tmp_import_name_from_18;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_18 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_18)) {
      tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_18,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[3],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[3]);
  }

  if (tmp_assign_source_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_27);
 }
 {
  PyObject *tmp_assign_source_28;
  PyObject *tmp_import_name_from_19;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_19 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_19)) {
      tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_19,
          (PyObject *)moduledict_aiohttp$client_proto,
          mod_consts[93],
          mod_consts[63]
      );
  } else {
      tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[93]);
  }

  if (tmp_assign_source_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_28);
 }
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

 CHECK_OBJECT(tmp_import_from_5__module);
 Py_DECREF(tmp_import_from_5__module);
 tmp_import_from_5__module = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_5;
 exception_value = exception_keeper_value_5;
 exception_tb = exception_keeper_tb_5;
 exception_lineno = exception_keeper_lineno_5;

 goto frame_exception_exit_1;
 // End of try:
 try_end_5:;
 CHECK_OBJECT(tmp_import_from_5__module);
 Py_DECREF(tmp_import_from_5__module);
 tmp_import_from_5__module = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_29;
  PyObject *tmp_tuple_element_1;
  tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[0]);

  if (unlikely(tmp_tuple_element_1 == NULL)) {
      tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
  }

  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
  }
  tmp_assign_source_29 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_1;
   PyObject *tmp_subscript_value_1;
   PyObject *tmp_expression_value_2;
   PyObject *tmp_subscript_value_2;
   PyObject *tmp_tuple_element_2;
   PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_1);
   tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[3]);

   if (unlikely(tmp_expression_value_1 == NULL)) {
       tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
   }

   if (tmp_expression_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;

       goto tuple_build_exception_1;
   }
   tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[77]);

   if (unlikely(tmp_expression_value_2 == NULL)) {
       tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
   }

   if (tmp_expression_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;

       goto tuple_build_exception_1;
   }
   tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[88]);

   if (unlikely(tmp_tuple_element_2 == NULL)) {
       tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
   }

   if (tmp_tuple_element_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;

       goto tuple_build_exception_1;
   }
   tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
   PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
   tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[93]);

   if (unlikely(tmp_tuple_element_2 == NULL)) {
       tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[93]);
   }

   if (tmp_tuple_element_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;

       goto tuple_build_exception_2;
   }
   PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
   goto tuple_build_noexception_1;
   // Exception handling pass through code for tuple_build:
   tuple_build_exception_2:;
   Py_DECREF(tmp_subscript_value_2);
   goto tuple_build_exception_1;
   // Finished with no exception for tuple_build:
   tuple_build_noexception_1:;
   tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
   Py_DECREF(tmp_subscript_value_2);
   if (tmp_subscript_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;

       goto tuple_build_exception_1;
   }
   tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
   Py_DECREF(tmp_subscript_value_1);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;

       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_assign_source_29, 1, tmp_tuple_element_1);
  }
  goto tuple_build_noexception_2;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_assign_source_29);
  goto try_except_handler_6;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_2:;
  assert(tmp_class_creation_1__bases_orig == NULL);
  tmp_class_creation_1__bases_orig = tmp_assign_source_29;
 }
 {
  PyObject *tmp_assign_source_30;
  PyObject *tmp_dircall_arg1_1;
  CHECK_OBJECT(tmp_class_creation_1__bases_orig);
  tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
  Py_INCREF(tmp_dircall_arg1_1);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
      tmp_assign_source_30 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
  }
  assert(tmp_class_creation_1__bases == NULL);
  tmp_class_creation_1__bases = tmp_assign_source_30;
 }
 {
  PyObject *tmp_assign_source_31;
  tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__class_decl_dict == NULL);
  tmp_class_creation_1__class_decl_dict = tmp_assign_source_31;
 }
 {
  PyObject *tmp_assign_source_32;
  PyObject *tmp_metaclass_value_1;
  nuitka_bool tmp_condition_result_1;
  int tmp_truth_name_1;
  PyObject *tmp_type_arg_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_subscript_value_3;
  PyObject *tmp_bases_value_1;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
  }
  tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_expression_value_3 = tmp_class_creation_1__bases;
  tmp_subscript_value_3 = mod_consts[63];
  tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_3, 0);
  if (tmp_type_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
  }
  tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
  Py_DECREF(tmp_type_arg_1);
  if (tmp_metaclass_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_1);
  condexpr_end_1:;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_bases_value_1 = tmp_class_creation_1__bases;
  tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
  Py_DECREF(tmp_metaclass_value_1);
  if (tmp_assign_source_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
  }
  assert(tmp_class_creation_1__metaclass == NULL);
  tmp_class_creation_1__metaclass = tmp_assign_source_32;
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_expression_value_4;
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_4 = tmp_class_creation_1__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[94]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
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
  PyObject *tmp_assign_source_33;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_args_value_1;
  PyObject *tmp_tuple_element_3;
  PyObject *tmp_kwargs_value_1;
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_5 = tmp_class_creation_1__metaclass;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[94]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
  }
  tmp_tuple_element_3 = mod_consts[95];
  tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_tuple_element_3 = tmp_class_creation_1__bases;
  PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
  CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
  tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
  frame_a50ce69635fa55357de4a486d4e819f9->m_frame.f_lineno = 23;
  tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_value_1);
  if (tmp_assign_source_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
  }
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_33;
 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_6;
  CHECK_OBJECT(tmp_class_creation_1__prepared);
  tmp_expression_value_6 = tmp_class_creation_1__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_6, mod_consts[96]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
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
  PyObject *tmp_tuple_element_4;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_name_value_9;
  PyObject *tmp_default_value_1;
  tmp_raise_type_1 = PyExc_TypeError;
  tmp_mod_expr_left_1 = mod_consts[97];
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_7 = tmp_class_creation_1__metaclass;
  tmp_name_value_9 = mod_consts[98];
  tmp_default_value_1 = mod_consts[99];
  tmp_tuple_element_4 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_9, tmp_default_value_1);
  if (tmp_tuple_element_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
  }
  tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_8;
   PyObject *tmp_type_arg_2;
   PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_type_arg_2 = tmp_class_creation_1__prepared;
   tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
   assert(!(tmp_expression_value_8 == NULL));
   tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[98]);
   Py_DECREF(tmp_expression_value_8);
   if (tmp_tuple_element_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;

       goto tuple_build_exception_3;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
  }
  goto tuple_build_noexception_3;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_3:;
  Py_DECREF(tmp_mod_expr_right_1);
  goto try_except_handler_6;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_3:;
  tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
  Py_DECREF(tmp_mod_expr_right_1);
  if (tmp_raise_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_6;
  }
  exception_type = tmp_raise_type_1;
  Py_INCREF(tmp_raise_type_1);
  exception_value = tmp_raise_value_1;
  exception_lineno = 23;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_6;
 }
 branch_no_2:;
 goto branch_end_1;
 branch_no_1:;
 {
  PyObject *tmp_assign_source_34;
  tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_34;
 }
 branch_end_1:;
 {
  PyObject *tmp_assign_source_35;
  outline_0_var___class__ = Nuitka_Cell_NewEmpty();
  {
   PyObject *tmp_set_locals_1;
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_set_locals_1 = tmp_class_creation_1__prepared;
   locals_aiohttp$client_proto$$$class__1_ResponseHandler_23 = tmp_set_locals_1;
   Py_INCREF(tmp_set_locals_1);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[100];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[101], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_8;
  }
  tmp_dictset_value = mod_consts[102];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[66], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_8;
  }
  tmp_dictset_value = mod_consts[95];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[103], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_8;
  }
  frame_2bda082e6043cb0ecde83de18cf7f167_2 = MAKE_CLASS_FRAME(tstate, codeobj_2bda082e6043cb0ecde83de18cf7f167, module_aiohttp$client_proto, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_2bda082e6043cb0ecde83de18cf7f167_2);
  assert(Py_REFCNT(frame_2bda082e6043cb0ecde83de18cf7f167_2) == 2);

  // Framed code:
  {
   PyObject *tmp_annotations_1;
   PyObject *tmp_dict_key_1;
   PyObject *tmp_dict_value_1;
   PyObject *tmp_expression_value_9;
   tmp_dict_key_1 = mod_consts[104];
   tmp_expression_value_9 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[72]);

   if (tmp_expression_value_9 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[72]);

     if (unlikely(tmp_expression_value_9 == NULL)) {
         tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
     }

     if (tmp_expression_value_9 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 26;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_9);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[105]);
   Py_DECREF(tmp_expression_value_9);
   if (tmp_dict_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 26;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_annotations_1 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
   Py_DECREF(tmp_dict_value_1);
   assert(!(tmp_res != 0));
   tmp_dict_key_1 = mod_consts[106];
   tmp_dict_value_1 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__1___init__(tmp_annotations_1);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[1], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 26;
    type_description_2 = "c";
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
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[108]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 47;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_2;
   } else {
       goto condexpr_false_2;
   }
   condexpr_true_2:;
   tmp_called_value_2 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[108]);

   if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[108], &exception_type, &exception_value);

    exception_lineno = 47;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }

   if (tmp_called_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 47;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_dict_key_2 = mod_consts[106];
   tmp_dict_value_2 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[109]);

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


   tmp_args_element_value_1 = MAKE_FUNCTION_aiohttp$client_proto$$$function__2_upgraded(tmp_annotations_2);

   frame_2bda082e6043cb0ecde83de18cf7f167_2->m_frame.f_lineno = 47;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
   Py_DECREF(tmp_called_value_2);
   Py_DECREF(tmp_args_element_value_1);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 47;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   goto condexpr_end_2;
   condexpr_false_2:;
   tmp_called_value_3 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_3 = mod_consts[106];
   tmp_dict_value_3 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[109]);

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


   tmp_args_element_value_2 = MAKE_FUNCTION_aiohttp$client_proto$$$function__2_upgraded(tmp_annotations_3);

   frame_2bda082e6043cb0ecde83de18cf7f167_2->m_frame.f_lineno = 47;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
   Py_DECREF(tmp_args_element_value_2);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 47;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   condexpr_end_2:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[110], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 48;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   nuitka_bool tmp_condition_result_5;
   PyObject *tmp_called_value_4;
   PyObject *tmp_args_element_value_3;
   PyObject *tmp_annotations_4;
   PyObject *tmp_dict_key_4;
   PyObject *tmp_dict_value_4;
   PyObject *tmp_called_value_5;
   PyObject *tmp_args_element_value_4;
   PyObject *tmp_annotations_5;
   PyObject *tmp_dict_key_5;
   PyObject *tmp_dict_value_5;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[108]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 51;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_3;
   } else {
       goto condexpr_false_3;
   }
   condexpr_true_3:;
   tmp_called_value_4 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[108]);

   if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[108], &exception_type, &exception_value);

    exception_lineno = 51;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }

   if (tmp_called_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 51;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_dict_key_4 = mod_consts[106];
   tmp_dict_value_4 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[109]);

   if (tmp_dict_value_4 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_4 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_4);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_4 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
   Py_DECREF(tmp_dict_value_4);
   assert(!(tmp_res != 0));


   tmp_args_element_value_3 = MAKE_FUNCTION_aiohttp$client_proto$$$function__3_should_close(tmp_annotations_4);

   frame_2bda082e6043cb0ecde83de18cf7f167_2->m_frame.f_lineno = 51;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
   Py_DECREF(tmp_called_value_4);
   Py_DECREF(tmp_args_element_value_3);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 51;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   goto condexpr_end_3;
   condexpr_false_3:;
   tmp_called_value_5 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_5 = mod_consts[106];
   tmp_dict_value_5 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[109]);

   if (tmp_dict_value_5 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_5 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_5);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_5 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
   Py_DECREF(tmp_dict_value_5);
   assert(!(tmp_res != 0));


   tmp_args_element_value_4 = MAKE_FUNCTION_aiohttp$client_proto$$$function__3_should_close(tmp_annotations_5);

   frame_2bda082e6043cb0ecde83de18cf7f167_2->m_frame.f_lineno = 51;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
   Py_DECREF(tmp_args_element_value_4);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 51;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   condexpr_end_3:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[58], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 52;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_6;
   tmp_annotations_6 = DICT_COPY(tstate, mod_consts[113]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__4_force_close(tmp_annotations_6);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[114], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 65;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_7;
   tmp_annotations_7 = DICT_COPY(tstate, mod_consts[113]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__5_close(tmp_annotations_7);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[20], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 68;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_8;
   PyObject *tmp_dict_key_6;
   PyObject *tmp_dict_value_6;
   tmp_dict_key_6 = mod_consts[106];
   tmp_dict_value_6 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[109]);

   if (tmp_dict_value_6 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_6 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_6);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_8 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
   Py_DECREF(tmp_dict_value_6);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__6_is_connected(tmp_annotations_8);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[117], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 76;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_9;
   PyObject *tmp_dict_key_7;
   PyObject *tmp_dict_value_7;
   PyObject *tmp_expression_value_10;
   PyObject *tmp_subscript_value_4;
   struct Nuitka_CellObject *tmp_closure_1[1];
   tmp_dict_key_7 = mod_consts[119];
   tmp_expression_value_10 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[76]);

   if (tmp_expression_value_10 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[76]);

     if (unlikely(tmp_expression_value_10 == NULL)) {
         tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
     }

     if (tmp_expression_value_10 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 79;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_10);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_subscript_value_4 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[120]);

   if (tmp_subscript_value_4 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_4 = PyExc_BaseException;
           Py_INCREF(tmp_subscript_value_4);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_4);
   Py_DECREF(tmp_expression_value_10);
   Py_DECREF(tmp_subscript_value_4);
   if (tmp_dict_value_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 79;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_annotations_9 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
   Py_DECREF(tmp_dict_value_7);
   assert(!(tmp_res != 0));
   tmp_dict_key_7 = mod_consts[106];
   tmp_dict_value_7 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
   assert(!(tmp_res != 0));

   tmp_closure_1[0] = outline_0_var___class__;
   Py_INCREF(tmp_closure_1[0]);

   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__7_connection_lost(tmp_annotations_9, tmp_closure_1);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[40], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 79;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_10;
   tmp_annotations_10 = DICT_COPY(tstate, mod_consts[113]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__8_eof_received(tmp_annotations_10);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[122], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 135;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_11;
   struct Nuitka_CellObject *tmp_closure_2[1];
   tmp_annotations_11 = DICT_COPY(tstate, mod_consts[113]);

   tmp_closure_2[0] = outline_0_var___class__;
   Py_INCREF(tmp_closure_2[0]);

   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__9_pause_reading(tmp_annotations_11, tmp_closure_2);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[42], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 139;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_12;
   struct Nuitka_CellObject *tmp_closure_3[1];
   tmp_annotations_12 = DICT_COPY(tstate, mod_consts[113]);

   tmp_closure_3[0] = outline_0_var___class__;
   Py_INCREF(tmp_closure_3[0]);

   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__10_resume_reading(tmp_annotations_12, tmp_closure_3);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[43], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 143;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_defaults_1;
   PyObject *tmp_tuple_element_5;
   PyObject *tmp_annotations_13;
   PyObject *tmp_dict_key_8;
   PyObject *tmp_dict_value_8;
   struct Nuitka_CellObject *tmp_closure_4[1];
   tmp_tuple_element_5 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[37]);

   if (tmp_tuple_element_5 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[37]);

     if (unlikely(tmp_tuple_element_5 == NULL)) {
         tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
     }

     if (tmp_tuple_element_5 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 150;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_tuple_element_5);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_defaults_1 = MAKE_TUPLE_EMPTY(tstate, 1);
   PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_5);
   tmp_dict_key_8 = mod_consts[119];
   tmp_dict_value_8 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[120]);

   if (tmp_dict_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_8 = PyExc_BaseException;
           Py_INCREF(tmp_dict_value_8);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_13 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_8, tmp_dict_value_8);
   Py_DECREF(tmp_dict_value_8);
   assert(!(tmp_res != 0));
   tmp_dict_key_8 = mod_consts[126];
   tmp_dict_value_8 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[120]);

   if (tmp_dict_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_8 = PyExc_BaseException;
           Py_INCREF(tmp_dict_value_8);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_8, tmp_dict_value_8);
   Py_DECREF(tmp_dict_value_8);
   assert(!(tmp_res != 0));
   tmp_dict_key_8 = mod_consts[106];
   tmp_dict_value_8 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_8, tmp_dict_value_8);
   assert(!(tmp_res != 0));

   tmp_closure_4[0] = outline_0_var___class__;
   Py_INCREF(tmp_closure_4[0]);

   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__11_set_exception(tmp_defaults_1, tmp_annotations_13, tmp_closure_4);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[32], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 147;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_14;
   PyObject *tmp_dict_key_9;
   PyObject *tmp_dict_value_9;
   tmp_dict_key_9 = mod_consts[128];
   tmp_dict_value_9 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[75]);

   if (tmp_dict_value_9 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[75]);

     if (unlikely(tmp_dict_value_9 == NULL)) {
         tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
     }

     if (tmp_dict_value_9 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 156;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_dict_value_9);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_14 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_9, tmp_dict_value_9);
   Py_DECREF(tmp_dict_value_9);
   assert(!(tmp_res != 0));
   tmp_dict_key_9 = mod_consts[64];
   tmp_dict_value_9 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[75]);

   if (tmp_dict_value_9 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[75]);

     if (unlikely(tmp_dict_value_9 == NULL)) {
         tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
     }

     if (tmp_dict_value_9 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 156;
      type_description_2 = "c";
         goto dict_build_exception_1;
     }
           Py_INCREF(tmp_dict_value_9);
       } else {
           goto dict_build_exception_1;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_9, tmp_dict_value_9);
   Py_DECREF(tmp_dict_value_9);
   assert(!(tmp_res != 0));
   tmp_dict_key_9 = mod_consts[106];
   tmp_dict_value_9 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_9, tmp_dict_value_9);
   assert(!(tmp_res != 0));
   goto dict_build_noexception_1;
   // Exception handling pass through code for dict_build:
   dict_build_exception_1:;
   Py_DECREF(tmp_annotations_14);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_1:;


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__12_set_parser(tmp_annotations_14);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[129], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 156;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_kw_defaults_1;
   PyObject *tmp_annotations_15;
   PyObject *tmp_dict_key_10;
   PyObject *tmp_dict_value_10;
   PyObject *tmp_expression_value_11;
   PyObject *tmp_subscript_value_5;
   tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts[131]);
   tmp_dict_key_10 = mod_consts[132];
   tmp_expression_value_11 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[76]);

   if (tmp_expression_value_11 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[76]);

     if (unlikely(tmp_expression_value_11 == NULL)) {
         tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
     }

     if (tmp_expression_value_11 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_kw_defaults_1);

      exception_lineno = 174;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_11);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_subscript_value_5 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[85]);

   if (tmp_subscript_value_5 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[85]);

     if (unlikely(tmp_subscript_value_5 == NULL)) {
         tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
     }

     if (tmp_subscript_value_5 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_kw_defaults_1);
      Py_DECREF(tmp_expression_value_11);

      exception_lineno = 174;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_subscript_value_5);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_5);
   Py_DECREF(tmp_expression_value_11);
   Py_DECREF(tmp_subscript_value_5);
   if (tmp_dict_value_10 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_kw_defaults_1);

    exception_lineno = 174;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_annotations_15 = _PyDict_NewPresized( 10 );
   {
    PyObject *tmp_expression_value_12;
    PyObject *tmp_subscript_value_6;
    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_10, tmp_dict_value_10);
    Py_DECREF(tmp_dict_value_10);
    assert(!(tmp_res != 0));
    tmp_dict_key_10 = mod_consts[133];
    tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[109]);

    if (tmp_dict_value_10 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_10 = (PyObject *)&PyBool_Type;
            Py_INCREF(tmp_dict_value_10);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_10, tmp_dict_value_10);
    Py_DECREF(tmp_dict_value_10);
    assert(!(tmp_res != 0));
    tmp_dict_key_10 = mod_consts[134];
    tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[109]);

    if (tmp_dict_value_10 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_10 = (PyObject *)&PyBool_Type;
            Py_INCREF(tmp_dict_value_10);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_10, tmp_dict_value_10);
    Py_DECREF(tmp_dict_value_10);
    assert(!(tmp_res != 0));
    tmp_dict_key_10 = mod_consts[135];
    tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[109]);

    if (tmp_dict_value_10 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_10 = (PyObject *)&PyBool_Type;
            Py_INCREF(tmp_dict_value_10);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_10, tmp_dict_value_10);
    Py_DECREF(tmp_dict_value_10);
    assert(!(tmp_res != 0));
    tmp_dict_key_10 = mod_consts[136];
    tmp_expression_value_12 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[76]);

    if (tmp_expression_value_12 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[76]);

      if (unlikely(tmp_expression_value_12 == NULL)) {
          tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
      }

      if (tmp_expression_value_12 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 178;
       type_description_2 = "c";
          goto dict_build_exception_2;
      }
            Py_INCREF(tmp_expression_value_12);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_subscript_value_6 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[137]);

    if (tmp_subscript_value_6 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_6 = (PyObject *)&PyFloat_Type;
            Py_INCREF(tmp_subscript_value_6);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_6);
    Py_DECREF(tmp_expression_value_12);
    Py_DECREF(tmp_subscript_value_6);
    if (tmp_dict_value_10 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 178;
     type_description_2 = "c";
        goto dict_build_exception_2;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_10, tmp_dict_value_10);
    Py_DECREF(tmp_dict_value_10);
    assert(!(tmp_res != 0));
    tmp_dict_key_10 = mod_consts[138];
    tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[139]);

    if (tmp_dict_value_10 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_10 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_dict_value_10);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_10, tmp_dict_value_10);
    Py_DECREF(tmp_dict_value_10);
    assert(!(tmp_res != 0));
    tmp_dict_key_10 = mod_consts[140];
    tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[137]);

    if (tmp_dict_value_10 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_10 = (PyObject *)&PyFloat_Type;
            Py_INCREF(tmp_dict_value_10);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_10, tmp_dict_value_10);
    Py_DECREF(tmp_dict_value_10);
    assert(!(tmp_res != 0));
    tmp_dict_key_10 = mod_consts[141];
    tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[139]);

    if (tmp_dict_value_10 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_10 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_dict_value_10);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_10, tmp_dict_value_10);
    Py_DECREF(tmp_dict_value_10);
    assert(!(tmp_res != 0));
    tmp_dict_key_10 = mod_consts[142];
    tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[139]);

    if (tmp_dict_value_10 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_10 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_dict_value_10);
        } else {
            goto dict_build_exception_2;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_10, tmp_dict_value_10);
    Py_DECREF(tmp_dict_value_10);
    assert(!(tmp_res != 0));
    tmp_dict_key_10 = mod_consts[106];
    tmp_dict_value_10 = Py_None;
    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_10, tmp_dict_value_10);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_2;
   // Exception handling pass through code for dict_build:
   dict_build_exception_2:;
   Py_DECREF(tmp_kw_defaults_1);
   Py_DECREF(tmp_annotations_15);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_2:;


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__13_set_response_params(tmp_kw_defaults_1, tmp_annotations_15);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[143], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 171;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_16;
   tmp_annotations_16 = DICT_COPY(tstate, mod_consts[113]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__14__drop_timeout(tmp_annotations_16);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[21], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 207;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_17;
   tmp_annotations_17 = DICT_COPY(tstate, mod_consts[113]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__15__reschedule_timeout(tmp_annotations_17);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[44], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 212;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_18;
   tmp_annotations_18 = DICT_COPY(tstate, mod_consts[113]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__16_start_timeout(tmp_annotations_18);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[147], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 224;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_19;
   tmp_annotations_19 = DICT_COPY(tstate, mod_consts[113]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__17__on_read_timeout(tmp_annotations_19);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[52], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 227;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_20;
   PyObject *tmp_dict_key_11;
   PyObject *tmp_dict_value_11;
   tmp_dict_key_11 = mod_consts[150];
   tmp_dict_value_11 = PyObject_GetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[151]);

   if (tmp_dict_value_11 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_11 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_11);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_20 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_11, tmp_dict_value_11);
   Py_DECREF(tmp_dict_value_11);
   assert(!(tmp_res != 0));
   tmp_dict_key_11 = mod_consts[106];
   tmp_dict_value_11 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_11, tmp_dict_value_11);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_proto$$$function__18_data_received(tmp_annotations_20);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[46], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 233;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_1;
  frame_exception_exit_2:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_2bda082e6043cb0ecde83de18cf7f167_2, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_2bda082e6043cb0ecde83de18cf7f167_2->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_2bda082e6043cb0ecde83de18cf7f167_2, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_2bda082e6043cb0ecde83de18cf7f167_2,
      type_description_2,
      outline_0_var___class__
  );



  assertFrameObject(frame_2bda082e6043cb0ecde83de18cf7f167_2);

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
   nuitka_bool tmp_condition_result_6;
   PyObject *tmp_cmp_expr_left_1;
   PyObject *tmp_cmp_expr_right_1;
   CHECK_OBJECT(tmp_class_creation_1__bases);
   tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
   CHECK_OBJECT(tmp_class_creation_1__bases_orig);
   tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
   tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
   if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;

       goto try_except_handler_8;
   }
   if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
       goto branch_yes_3;
   } else {
       goto branch_no_3;
   }
  }
  branch_yes_3:;
  CHECK_OBJECT(tmp_class_creation_1__bases_orig);
  tmp_dictset_value = tmp_class_creation_1__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23, mod_consts[153], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto try_except_handler_8;
  }
  branch_no_3:;
  {
   PyObject *tmp_assign_source_36;
   PyObject *tmp_called_value_6;
   PyObject *tmp_args_value_2;
   PyObject *tmp_tuple_element_6;
   PyObject *tmp_kwargs_value_2;
   CHECK_OBJECT(tmp_class_creation_1__metaclass);
   tmp_called_value_6 = tmp_class_creation_1__metaclass;
   tmp_tuple_element_6 = mod_consts[95];
   tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_6);
   CHECK_OBJECT(tmp_class_creation_1__bases);
   tmp_tuple_element_6 = tmp_class_creation_1__bases;
   PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_6);
   tmp_tuple_element_6 = locals_aiohttp$client_proto$$$class__1_ResponseHandler_23;
   PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_6);
   CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
   tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
   frame_a50ce69635fa55357de4a486d4e819f9->m_frame.f_lineno = 23;
   tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_2, tmp_kwargs_value_2);
   Py_DECREF(tmp_args_value_2);
   if (tmp_assign_source_36 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;

       goto try_except_handler_8;
   }
   assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
   Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_36);

  }
  CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
  tmp_assign_source_35 = Nuitka_Cell_GET(outline_0_var___class__);
  Py_INCREF(tmp_assign_source_35);
  goto try_return_handler_8;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_8:;
  Py_DECREF(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23);
  locals_aiohttp$client_proto$$$class__1_ResponseHandler_23 = NULL;
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

  Py_DECREF(locals_aiohttp$client_proto$$$class__1_ResponseHandler_23);
  locals_aiohttp$client_proto$$$class__1_ResponseHandler_23 = NULL;
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
  exception_lineno = 23;
  goto try_except_handler_6;
  outline_result_1:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_35);
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
 exception_type = exception_keeper_type_8;
 exception_value = exception_keeper_value_8;
 exception_tb = exception_keeper_tb_8;
 exception_lineno = exception_keeper_lineno_8;

 goto frame_exception_exit_1;
 // End of try:
 try_end_6:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_2;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_a50ce69635fa55357de4a486d4e819f9, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_a50ce69635fa55357de4a486d4e819f9->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_a50ce69635fa55357de4a486d4e819f9, exception_lineno);
 }



 assertFrameObject(frame_a50ce69635fa55357de4a486d4e819f9);

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
    PGO_onModuleExit("aiohttp$client_proto", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.client_proto" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_aiohttp$client_proto);
    return module_aiohttp$client_proto;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_proto, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("aiohttp$client_proto", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
