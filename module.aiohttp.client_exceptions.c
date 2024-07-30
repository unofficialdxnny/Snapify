/* Generated code for Python module 'aiohttp$client_exceptions'
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

/* The "module_aiohttp$client_exceptions" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiohttp$client_exceptions;
PyDictObject *moduledict_aiohttp$client_exceptions;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[190];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[190];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("aiohttp.client_exceptions"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 190; i++) {
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
void checkModuleConstants_aiohttp$client_exceptions(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 190; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_31a9966f3d0c2a60e49a4ce5c2a51a84;
static PyCodeObject *codeobj_aead42c11667672579738e7480de8f06;
static PyCodeObject *codeobj_e7631bd35b34e9e53b20a1304ef7bf39;
static PyCodeObject *codeobj_aa1543f9ab4208dc838a222a9a018a05;
static PyCodeObject *codeobj_452c1fe980929a16f2f3935e62e91405;
static PyCodeObject *codeobj_8f7a1653573b9e8930434ddfe169b1a2;
static PyCodeObject *codeobj_48739845754f316564ed7ef5fb25faf9;
static PyCodeObject *codeobj_c08cb45ee31f7b4d390fa51afcaf355e;
static PyCodeObject *codeobj_cd3fc46ad4f837590e5e9dfad2e76b04;
static PyCodeObject *codeobj_82af5b8a36e9de605fc6d02429ba18b7;
static PyCodeObject *codeobj_4656422b05e1ad28521ac84006e810c6;
static PyCodeObject *codeobj_b06c8229fabab92dc23ba048813e0347;
static PyCodeObject *codeobj_f40bb8b189bfbbfdb10f9165c6bbc939;
static PyCodeObject *codeobj_04a4e944d203d805c3b564bfb74ba50c;
static PyCodeObject *codeobj_6764067a47d4a5ba85e7088ea2944778;
static PyCodeObject *codeobj_7e415c47ae1ee447f42ba6a5b0e0420a;
static PyCodeObject *codeobj_8bb20b0c729ba6fecaf5169d3367b800;
static PyCodeObject *codeobj_b88b53619fe21cb3ca180a77e91ddfce;
static PyCodeObject *codeobj_68b116516ae9da0dbc5d897f59e12b00;
static PyCodeObject *codeobj_65270da2da4ec143de4b572ba0d8c5a7;
static PyCodeObject *codeobj_680115e73fc10544b70d408ae104769a;
static PyCodeObject *codeobj_504b484b895a03f654c7b122d3952f55;
static PyCodeObject *codeobj_d7fc5809fc8f785ff4bf45f4bb2a2300;
static PyCodeObject *codeobj_d5e6d2f35b4a102e8cb9dca4c58a6972;
static PyCodeObject *codeobj_2dc447960346eece692b1f0a890a184a;
static PyCodeObject *codeobj_5bb4dd01d4f976d7ebe148ed491bf078;
static PyCodeObject *codeobj_b5bbbd8b9984754d6cf24d70d10c6b14;
static PyCodeObject *codeobj_a1b61c8006e30dedaac4db806b3448ba;
static PyCodeObject *codeobj_4d9e4d4a56b69270742f8d008562f527;
static PyCodeObject *codeobj_5859be622d1f76b625fd40591198b8eb;
static PyCodeObject *codeobj_6df7f714c643e2308134328321d8795b;
static PyCodeObject *codeobj_4915fb2502d766424ebe1f9970e2e1f0;
static PyCodeObject *codeobj_8048c00cf1d4e002152c89be122b53bc;
static PyCodeObject *codeobj_ddf2366353a3d4e91dcdbcaba59650c9;

static void createModuleCodeObjects(void) {
 module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[177]); CHECK_OBJECT(module_filename_obj);
 codeobj_31a9966f3d0c2a60e49a4ce5c2a51a84 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[178], mod_consts[178], NULL, NULL, 0, 0, 0);
 codeobj_aead42c11667672579738e7480de8f06 = MAKE_CODE_OBJECT(module_filename_obj, 315, 0, mod_consts[167], mod_consts[167], mod_consts[179], NULL, 0, 0, 0);
 codeobj_e7631bd35b34e9e53b20a1304ef7bf39 = MAKE_CODE_OBJECT(module_filename_obj, 157, 0, mod_consts[113], mod_consts[113], mod_consts[179], NULL, 0, 0, 0);
 codeobj_aa1543f9ab4208dc838a222a9a018a05 = MAKE_CODE_OBJECT(module_filename_obj, 49, 0, mod_consts[85], mod_consts[85], mod_consts[179], NULL, 0, 0, 0);
 codeobj_452c1fe980929a16f2f3935e62e91405 = MAKE_CODE_OBJECT(module_filename_obj, 265, 0, mod_consts[152], mod_consts[152], mod_consts[179], NULL, 0, 0, 0);
 codeobj_8f7a1653573b9e8930434ddfe169b1a2 = MAKE_CODE_OBJECT(module_filename_obj, 230, 0, mod_consts[138], mod_consts[138], mod_consts[179], NULL, 0, 0, 0);
 codeobj_48739845754f316564ed7ef5fb25faf9 = MAKE_CODE_OBJECT(module_filename_obj, 245, 0, mod_consts[145], mod_consts[145], mod_consts[179], NULL, 0, 0, 0);
 codeobj_c08cb45ee31f7b4d390fa51afcaf355e = MAKE_CODE_OBJECT(module_filename_obj, 203, 0, mod_consts[130], mod_consts[130], mod_consts[179], NULL, 0, 0, 0);
 codeobj_cd3fc46ad4f837590e5e9dfad2e76b04 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[171], mod_consts[180], NULL, 3, 0, 0);
 codeobj_82af5b8a36e9de605fc6d02429ba18b7 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[118], mod_consts[181], mod_consts[179], 3, 0, 0);
 codeobj_4656422b05e1ad28521ac84006e810c6 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[92], mod_consts[182], NULL, 3, 4, 0);
 codeobj_b06c8229fabab92dc23ba048813e0347 = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[154], mod_consts[183], mod_consts[179], 2, 0, 0);
 codeobj_f40bb8b189bfbbfdb10f9165c6bbc939 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[141], mod_consts[184], NULL, 2, 0, 0);
 codeobj_04a4e944d203d805c3b564bfb74ba50c = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[148], mod_consts[185], NULL, 5, 0, 0);
 codeobj_6764067a47d4a5ba85e7088ea2944778 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[133], mod_consts[186], mod_consts[179], 4, 0, 0);
 codeobj_7e415c47ae1ee447f42ba6a5b0e0420a = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[95], mod_consts[96], mod_consts[187], NULL, 1, 0, 0);
 codeobj_8bb20b0c729ba6fecaf5169d3367b800 = MAKE_CODE_OBJECT(module_filename_obj, 283, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[95], mod_consts[156], mod_consts[188], NULL, 1, 0, 0);
 codeobj_b88b53619fe21cb3ca180a77e91ddfce = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[95], mod_consts[149], mod_consts[188], NULL, 1, 0, 0);
 codeobj_68b116516ae9da0dbc5d897f59e12b00 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[93], mod_consts[176], mod_consts[188], NULL, 1, 0, 0);
 codeobj_65270da2da4ec143de4b572ba0d8c5a7 = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[93], mod_consts[125], mod_consts[188], NULL, 1, 0, 0);
 codeobj_680115e73fc10544b70d408ae104769a = MAKE_CODE_OBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[93], mod_consts[94], mod_consts[188], NULL, 1, 0, 0);
 codeobj_504b484b895a03f654c7b122d3952f55 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[93], mod_consts[135], mod_consts[188], NULL, 1, 0, 0);
 codeobj_d7fc5809fc8f785ff4bf45f4bb2a2300 = MAKE_CODE_OBJECT(module_filename_obj, 326, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[169], mod_consts[172], mod_consts[188], NULL, 1, 0, 0);
 codeobj_d5e6d2f35b4a102e8cb9dca4c58a6972 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[88], mod_consts[98], mod_consts[188], NULL, 1, 0, 0);
 codeobj_2dc447960346eece692b1f0a890a184a = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[88], mod_consts[98], mod_consts[189], NULL, 2, 0, 0);
 codeobj_5bb4dd01d4f976d7ebe148ed491bf078 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[30], mod_consts[173], mod_consts[188], NULL, 1, 0, 0);
 codeobj_b5bbbd8b9984754d6cf24d70d10c6b14 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[30], mod_consts[120], mod_consts[188], NULL, 1, 0, 0);
 codeobj_a1b61c8006e30dedaac4db806b3448ba = MAKE_CODE_OBJECT(module_filename_obj, 171, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[116], mod_consts[119], mod_consts[188], NULL, 1, 0, 0);
 codeobj_4d9e4d4a56b69270742f8d008562f527 = MAKE_CODE_OBJECT(module_filename_obj, 217, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[132], mod_consts[134], mod_consts[188], NULL, 1, 0, 0);
 codeobj_5859be622d1f76b625fd40591198b8eb = MAKE_CODE_OBJECT(module_filename_obj, 334, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[31], mod_consts[174], mod_consts[188], NULL, 1, 0, 0);
 codeobj_6df7f714c643e2308134328321d8795b = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[31], mod_consts[121], mod_consts[188], NULL, 1, 0, 0);
 codeobj_4915fb2502d766424ebe1f9970e2e1f0 = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[175], mod_consts[188], NULL, 1, 0, 0);
 codeobj_8048c00cf1d4e002152c89be122b53bc = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[124], mod_consts[188], NULL, 1, 0, 0);
 codeobj_ddf2366353a3d4e91dcdbcaba59650c9 = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[155], mod_consts[188], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__10_ssl(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__11___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__12___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__13_path(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__14___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__15___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__16___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__17___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__18___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__19_url(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__1___init__(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__20___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__21___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__22_certificate_error(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__23_host(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__24_port(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__25_ssl(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__26___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__2___str__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__3___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__4_code(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__5_code(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__6___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__7_os_error(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__8_host(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__9_port(PyObject *annotations);


// The module function definitions.
static PyObject *impl_aiohttp$client_exceptions$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_request_info = python_pars[1];
 PyObject *par_history = python_pars[2];
 PyObject *par_code = python_pars[3];
 PyObject *par_status = python_pars[4];
 PyObject *par_message = python_pars[5];
 PyObject *par_headers = python_pars[6];
 struct Nuitka_FrameObject *frame_4656422b05e1ad28521ac84006e810c6;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_frame_4656422b05e1ad28521ac84006e810c6 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_4656422b05e1ad28521ac84006e810c6)) {
     Py_XDECREF(cache_frame_4656422b05e1ad28521ac84006e810c6);

#if _DEBUG_REFCOUNTS
     if (cache_frame_4656422b05e1ad28521ac84006e810c6 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_4656422b05e1ad28521ac84006e810c6 = MAKE_FUNCTION_FRAME(tstate, codeobj_4656422b05e1ad28521ac84006e810c6, module_aiohttp$client_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_4656422b05e1ad28521ac84006e810c6->m_type_description == NULL);
 frame_4656422b05e1ad28521ac84006e810c6 = cache_frame_4656422b05e1ad28521ac84006e810c6;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_4656422b05e1ad28521ac84006e810c6);
 assert(Py_REFCNT(frame_4656422b05e1ad28521ac84006e810c6) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_request_info);
  tmp_assattr_value_1 = par_request_info;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(par_code);
  tmp_cmp_expr_left_1 = par_code;
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
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  CHECK_OBJECT(par_status);
  tmp_cmp_expr_left_2 = par_status;
  tmp_cmp_expr_right_2 = Py_None;
  tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_raise_type_1;
  PyObject *tmp_make_exception_arg_1;
  tmp_make_exception_arg_1 = mod_consts[1];
  frame_4656422b05e1ad28521ac84006e810c6->m_frame.f_lineno = 72;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  exception_type = tmp_raise_type_1;
  exception_lineno = 72;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "ooooooo";
  goto frame_exception_exit_1;
 }
 branch_no_2:;
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_value_1;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_kwargs_value_1;
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[2]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
  }

  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  tmp_tuple_element_1 = mod_consts[4];
  tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
  tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[5]);

  if (unlikely(tmp_tuple_element_1 == NULL)) {
      tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
  }

  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;
   type_description_1 = "ooooooo";
      goto tuple_build_exception_1;
  }
  PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_value_1);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[6]);
  frame_4656422b05e1ad28521ac84006e810c6->m_frame.f_lineno = 76;
  tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_value_1);
  Py_DECREF(tmp_kwargs_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 branch_no_1:;
 {
  bool tmp_condition_result_3;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  CHECK_OBJECT(par_status);
  tmp_cmp_expr_left_3 = par_status;
  tmp_cmp_expr_right_3 = Py_None;
  tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  CHECK_OBJECT(par_status);
  tmp_assattr_value_2 = par_status;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
 }
 goto branch_end_3;
 branch_no_3:;
 {
  bool tmp_condition_result_4;
  PyObject *tmp_cmp_expr_left_4;
  PyObject *tmp_cmp_expr_right_4;
  CHECK_OBJECT(par_code);
  tmp_cmp_expr_left_4 = par_code;
  tmp_cmp_expr_right_4 = Py_None;
  tmp_condition_result_4 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  CHECK_OBJECT(par_code);
  tmp_assattr_value_3 = par_code;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[7], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 84;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
 }
 goto branch_end_4;
 branch_no_4:;
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_assattr_target_4;
  tmp_assattr_value_4 = mod_consts[8];
  CHECK_OBJECT(par_self);
  tmp_assattr_target_4 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[7], tmp_assattr_value_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
 }
 branch_end_4:;
 branch_end_3:;
 {
  PyObject *tmp_assattr_value_5;
  PyObject *tmp_assattr_target_5;
  CHECK_OBJECT(par_message);
  tmp_assattr_value_5 = par_message;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_5 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[9], tmp_assattr_value_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 87;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_6;
  PyObject *tmp_assattr_target_6;
  CHECK_OBJECT(par_headers);
  tmp_assattr_value_6 = par_headers;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_6 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[10], tmp_assattr_value_6);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_7;
  PyObject *tmp_assattr_target_7;
  CHECK_OBJECT(par_history);
  tmp_assattr_value_7 = par_history;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_7 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[11], tmp_assattr_value_7);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_8;
  PyObject *tmp_tuple_element_2;
  PyObject *tmp_assattr_target_8;
  CHECK_OBJECT(par_request_info);
  tmp_tuple_element_2 = par_request_info;
  tmp_assattr_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_assattr_value_8, 0, tmp_tuple_element_2);
  CHECK_OBJECT(par_history);
  tmp_tuple_element_2 = par_history;
  PyTuple_SET_ITEM0(tmp_assattr_value_8, 1, tmp_tuple_element_2);
  CHECK_OBJECT(par_self);
  tmp_assattr_target_8 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[12], tmp_assattr_value_8);
  Py_DECREF(tmp_assattr_value_8);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 90;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_4656422b05e1ad28521ac84006e810c6, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_4656422b05e1ad28521ac84006e810c6->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_4656422b05e1ad28521ac84006e810c6, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_4656422b05e1ad28521ac84006e810c6,
     type_description_1,
     par_self,
     par_request_info,
     par_history,
     par_code,
     par_status,
     par_message,
     par_headers
 );


 // Release cached frame if used for exception.
 if (frame_4656422b05e1ad28521ac84006e810c6 == cache_frame_4656422b05e1ad28521ac84006e810c6) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_4656422b05e1ad28521ac84006e810c6);
     cache_frame_4656422b05e1ad28521ac84006e810c6 = NULL;
 }

 assertFrameObject(frame_4656422b05e1ad28521ac84006e810c6);

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
 CHECK_OBJECT(par_request_info);
 Py_DECREF(par_request_info);
 CHECK_OBJECT(par_history);
 Py_DECREF(par_history);
 CHECK_OBJECT(par_code);
 Py_DECREF(par_code);
 CHECK_OBJECT(par_status);
 Py_DECREF(par_status);
 CHECK_OBJECT(par_message);
 Py_DECREF(par_message);
 CHECK_OBJECT(par_headers);
 Py_DECREF(par_headers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_request_info);
 Py_DECREF(par_request_info);
 CHECK_OBJECT(par_history);
 Py_DECREF(par_history);
 CHECK_OBJECT(par_code);
 Py_DECREF(par_code);
 CHECK_OBJECT(par_status);
 Py_DECREF(par_status);
 CHECK_OBJECT(par_message);
 Py_DECREF(par_message);
 CHECK_OBJECT(par_headers);
 Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_exceptions$$$function__2___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_680115e73fc10544b70d408ae104769a;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_680115e73fc10544b70d408ae104769a = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_680115e73fc10544b70d408ae104769a)) {
     Py_XDECREF(cache_frame_680115e73fc10544b70d408ae104769a);

#if _DEBUG_REFCOUNTS
     if (cache_frame_680115e73fc10544b70d408ae104769a == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_680115e73fc10544b70d408ae104769a = MAKE_FUNCTION_FRAME(tstate, codeobj_680115e73fc10544b70d408ae104769a, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_680115e73fc10544b70d408ae104769a->m_type_description == NULL);
 frame_680115e73fc10544b70d408ae104769a = cache_frame_680115e73fc10544b70d408ae104769a;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_680115e73fc10544b70d408ae104769a);
 assert(Py_REFCNT(frame_680115e73fc10544b70d408ae104769a) == 2);

 // Framed code:
 {
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_arg_value_1_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_kw_call_arg_value_2_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_kw_call_arg_value_3_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_expression_value_4;
  tmp_kw_call_arg_value_0_1 = mod_consts[13];
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[7]);
  if (tmp_kw_call_arg_value_1_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[9]);
  if (tmp_kw_call_arg_value_2_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_1_1);

   exception_lineno = 95;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_4 = par_self;
  tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[0]);
  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 96;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[14]);
  Py_DECREF(tmp_expression_value_3);
  if (tmp_kw_call_arg_value_3_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 96;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_680115e73fc10544b70d408ae104769a->m_frame.f_lineno = 93;
  {
      PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
      tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
  }

  Py_DECREF(tmp_kw_call_arg_value_1_1);
  Py_DECREF(tmp_kw_call_arg_value_2_1);
  Py_DECREF(tmp_kw_call_arg_value_3_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 93;
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
     exception_tb = MAKE_TRACEBACK(frame_680115e73fc10544b70d408ae104769a, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_680115e73fc10544b70d408ae104769a->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_680115e73fc10544b70d408ae104769a, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_680115e73fc10544b70d408ae104769a,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_680115e73fc10544b70d408ae104769a == cache_frame_680115e73fc10544b70d408ae104769a) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_680115e73fc10544b70d408ae104769a);
     cache_frame_680115e73fc10544b70d408ae104769a = NULL;
 }

 assertFrameObject(frame_680115e73fc10544b70d408ae104769a);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__3___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *var_args = NULL;
 struct Nuitka_FrameObject *frame_7e415c47ae1ee447f42ba6a5b0e0420a;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_7e415c47ae1ee447f42ba6a5b0e0420a = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_7e415c47ae1ee447f42ba6a5b0e0420a)) {
     Py_XDECREF(cache_frame_7e415c47ae1ee447f42ba6a5b0e0420a);

#if _DEBUG_REFCOUNTS
     if (cache_frame_7e415c47ae1ee447f42ba6a5b0e0420a == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_7e415c47ae1ee447f42ba6a5b0e0420a = MAKE_FUNCTION_FRAME(tstate, codeobj_7e415c47ae1ee447f42ba6a5b0e0420a, module_aiohttp$client_exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_7e415c47ae1ee447f42ba6a5b0e0420a->m_type_description == NULL);
 frame_7e415c47ae1ee447f42ba6a5b0e0420a = cache_frame_7e415c47ae1ee447f42ba6a5b0e0420a;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_7e415c47ae1ee447f42ba6a5b0e0420a);
 assert(Py_REFCNT(frame_7e415c47ae1ee447f42ba6a5b0e0420a) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_string_concat_values_1;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_format_value_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_format_spec_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 100;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_format_value_1 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_format_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 100;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_format_spec_1 = mod_consts[15];
  tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
  Py_DECREF(tmp_format_value_1);
  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 100;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 3);
  {
   PyObject *tmp_format_value_2;
   PyObject *tmp_operand_value_2;
   PyObject *tmp_expression_value_2;
   PyObject *tmp_format_spec_2;
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
   tmp_tuple_element_1 = mod_consts[16];
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
   CHECK_OBJECT(par_self);
   tmp_expression_value_2 = par_self;
   tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[11]);
   if (tmp_operand_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 100;
    type_description_1 = "oo";
       goto tuple_build_exception_1;
   }
   tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_2);
   Py_DECREF(tmp_operand_value_2);
   if (tmp_format_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 100;
    type_description_1 = "oo";
       goto tuple_build_exception_1;
   }
   tmp_format_spec_2 = mod_consts[15];
   tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
   Py_DECREF(tmp_format_value_2);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 100;
    type_description_1 = "oo";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_string_concat_values_1);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_assign_source_1 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_1);
  Py_DECREF(tmp_string_concat_values_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 100;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  assert(var_args == NULL);
  var_args = tmp_assign_source_1;
 }
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 101;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = mod_consts[8];
  tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  Py_DECREF(tmp_cmp_expr_left_1);
  if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 101;
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
  PyObject *tmp_assign_source_2;
  PyObject *tmp_iadd_expr_left_1;
  PyObject *tmp_iadd_expr_right_1;
  PyObject *tmp_string_concat_values_2;
  PyObject *tmp_tuple_element_2;
  CHECK_OBJECT(var_args);
  tmp_iadd_expr_left_1 = var_args;
  tmp_tuple_element_2 = mod_consts[17];
  tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_format_value_3;
   PyObject *tmp_operand_value_3;
   PyObject *tmp_expression_value_4;
   PyObject *tmp_format_spec_3;
   PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
   CHECK_OBJECT(par_self);
   tmp_expression_value_4 = par_self;
   tmp_operand_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[7]);
   if (tmp_operand_value_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 102;
    type_description_1 = "oo";
       goto tuple_build_exception_2;
   }
   tmp_format_value_3 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_3);
   Py_DECREF(tmp_operand_value_3);
   if (tmp_format_value_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 102;
    type_description_1 = "oo";
       goto tuple_build_exception_2;
   }
   tmp_format_spec_3 = mod_consts[15];
   tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
   Py_DECREF(tmp_format_value_3);
   if (tmp_tuple_element_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 102;
    type_description_1 = "oo";
       goto tuple_build_exception_2;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
  }
  goto tuple_build_noexception_2;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_2:;
  Py_DECREF(tmp_string_concat_values_2);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_2:;
  tmp_iadd_expr_right_1 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_2);
  Py_DECREF(tmp_string_concat_values_2);
  if (tmp_iadd_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
  Py_DECREF(tmp_iadd_expr_right_1);
  assert(!(tmp_result == false));
  tmp_assign_source_2 = tmp_iadd_expr_left_1;
  var_args = tmp_assign_source_2;

 }
 branch_no_1:;
 {
  nuitka_bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(par_self);
  tmp_expression_value_5 = par_self;
  tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[9]);
  if (tmp_cmp_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_2 = mod_consts[15];
  tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  Py_DECREF(tmp_cmp_expr_left_2);
  if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_iadd_expr_left_2;
  PyObject *tmp_iadd_expr_right_2;
  PyObject *tmp_string_concat_values_3;
  PyObject *tmp_tuple_element_3;
  CHECK_OBJECT(var_args);
  tmp_iadd_expr_left_2 = var_args;
  tmp_tuple_element_3 = mod_consts[18];
  tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_format_value_4;
   PyObject *tmp_operand_value_4;
   PyObject *tmp_expression_value_6;
   PyObject *tmp_format_spec_4;
   PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
   CHECK_OBJECT(par_self);
   tmp_expression_value_6 = par_self;
   tmp_operand_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[9]);
   if (tmp_operand_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 104;
    type_description_1 = "oo";
       goto tuple_build_exception_3;
   }
   tmp_format_value_4 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_4);
   Py_DECREF(tmp_operand_value_4);
   if (tmp_format_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 104;
    type_description_1 = "oo";
       goto tuple_build_exception_3;
   }
   tmp_format_spec_4 = mod_consts[15];
   tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
   Py_DECREF(tmp_format_value_4);
   if (tmp_tuple_element_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 104;
    type_description_1 = "oo";
       goto tuple_build_exception_3;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
  }
  goto tuple_build_noexception_3;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_3:;
  Py_DECREF(tmp_string_concat_values_3);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_3:;
  tmp_iadd_expr_right_2 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_3);
  Py_DECREF(tmp_string_concat_values_3);
  if (tmp_iadd_expr_right_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 104;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
  Py_DECREF(tmp_iadd_expr_right_2);
  assert(!(tmp_result == false));
  tmp_assign_source_3 = tmp_iadd_expr_left_2;
  var_args = tmp_assign_source_3;

 }
 branch_no_2:;
 {
  bool tmp_condition_result_3;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  PyObject *tmp_expression_value_7;
  CHECK_OBJECT(par_self);
  tmp_expression_value_7 = par_self;
  tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[10]);
  if (tmp_cmp_expr_left_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_3 = Py_None;
  tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_3);
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_iadd_expr_left_3;
  PyObject *tmp_iadd_expr_right_3;
  PyObject *tmp_string_concat_values_4;
  PyObject *tmp_tuple_element_4;
  CHECK_OBJECT(var_args);
  tmp_iadd_expr_left_3 = var_args;
  tmp_tuple_element_4 = mod_consts[19];
  tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_format_value_5;
   PyObject *tmp_operand_value_5;
   PyObject *tmp_expression_value_8;
   PyObject *tmp_format_spec_5;
   PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
   CHECK_OBJECT(par_self);
   tmp_expression_value_8 = par_self;
   tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[10]);
   if (tmp_operand_value_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 106;
    type_description_1 = "oo";
       goto tuple_build_exception_4;
   }
   tmp_format_value_5 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_5);
   Py_DECREF(tmp_operand_value_5);
   if (tmp_format_value_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 106;
    type_description_1 = "oo";
       goto tuple_build_exception_4;
   }
   tmp_format_spec_5 = mod_consts[15];
   tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
   Py_DECREF(tmp_format_value_5);
   if (tmp_tuple_element_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 106;
    type_description_1 = "oo";
       goto tuple_build_exception_4;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
  }
  goto tuple_build_noexception_4;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_4:;
  Py_DECREF(tmp_string_concat_values_4);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_4:;
  tmp_iadd_expr_right_3 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_4);
  Py_DECREF(tmp_string_concat_values_4);
  if (tmp_iadd_expr_right_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
  Py_DECREF(tmp_iadd_expr_right_3);
  assert(!(tmp_result == false));
  tmp_assign_source_4 = tmp_iadd_expr_left_3;
  var_args = tmp_assign_source_4;

 }
 branch_no_3:;
 {
  PyObject *tmp_string_concat_values_5;
  PyObject *tmp_tuple_element_5;
  PyObject *tmp_format_value_6;
  PyObject *tmp_expression_value_9;
  PyObject *tmp_type_arg_1;
  PyObject *tmp_format_spec_6;
  CHECK_OBJECT(par_self);
  tmp_type_arg_1 = par_self;
  tmp_expression_value_9 = BUILTIN_TYPE1(tmp_type_arg_1);
  assert(!(tmp_expression_value_9 == NULL));
  tmp_format_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[20]);
  Py_DECREF(tmp_expression_value_9);
  if (tmp_format_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_format_spec_6 = mod_consts[15];
  tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
  Py_DECREF(tmp_format_value_6);
  if (tmp_tuple_element_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 4);
  PyTuple_SET_ITEM(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
  tmp_tuple_element_5 = mod_consts[21];
  PyTuple_SET_ITEM0(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
  CHECK_OBJECT(var_args);
  tmp_tuple_element_5 = var_args;
  PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
  tmp_tuple_element_5 = mod_consts[22];
  PyTuple_SET_ITEM0(tmp_string_concat_values_5, 3, tmp_tuple_element_5);
  tmp_return_value = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_5);
  Py_DECREF(tmp_string_concat_values_5);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;
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

 goto try_return_handler_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_7e415c47ae1ee447f42ba6a5b0e0420a, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_7e415c47ae1ee447f42ba6a5b0e0420a->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_7e415c47ae1ee447f42ba6a5b0e0420a, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_7e415c47ae1ee447f42ba6a5b0e0420a,
     type_description_1,
     par_self,
     var_args
 );


 // Release cached frame if used for exception.
 if (frame_7e415c47ae1ee447f42ba6a5b0e0420a == cache_frame_7e415c47ae1ee447f42ba6a5b0e0420a) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_7e415c47ae1ee447f42ba6a5b0e0420a);
     cache_frame_7e415c47ae1ee447f42ba6a5b0e0420a = NULL;
 }

 assertFrameObject(frame_7e415c47ae1ee447f42ba6a5b0e0420a);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(var_args);
 Py_DECREF(var_args);
 var_args = NULL;
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

 Py_XDECREF(var_args);
 var_args = NULL;
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


static PyObject *impl_aiohttp$client_exceptions$$$function__4_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_d5e6d2f35b4a102e8cb9dca4c58a6972;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_d5e6d2f35b4a102e8cb9dca4c58a6972 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_d5e6d2f35b4a102e8cb9dca4c58a6972)) {
     Py_XDECREF(cache_frame_d5e6d2f35b4a102e8cb9dca4c58a6972);

#if _DEBUG_REFCOUNTS
     if (cache_frame_d5e6d2f35b4a102e8cb9dca4c58a6972 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_d5e6d2f35b4a102e8cb9dca4c58a6972 = MAKE_FUNCTION_FRAME(tstate, codeobj_d5e6d2f35b4a102e8cb9dca4c58a6972, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_d5e6d2f35b4a102e8cb9dca4c58a6972->m_type_description == NULL);
 frame_d5e6d2f35b4a102e8cb9dca4c58a6972 = cache_frame_d5e6d2f35b4a102e8cb9dca4c58a6972;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_d5e6d2f35b4a102e8cb9dca4c58a6972);
 assert(Py_REFCNT(frame_d5e6d2f35b4a102e8cb9dca4c58a6972) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_value_1;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_kwargs_value_1;
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[2]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
  }

  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 111;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 111;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_tuple_element_1 = mod_consts[23];
  tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
  tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[5]);

  if (unlikely(tmp_tuple_element_1 == NULL)) {
      tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
  }

  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "o";
      goto tuple_build_exception_1;
  }
  PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_value_1);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[6]);
  frame_d5e6d2f35b4a102e8cb9dca4c58a6972->m_frame.f_lineno = 111;
  tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_value_1);
  Py_DECREF(tmp_kwargs_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 111;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 116;
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
     exception_tb = MAKE_TRACEBACK(frame_d5e6d2f35b4a102e8cb9dca4c58a6972, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_d5e6d2f35b4a102e8cb9dca4c58a6972->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_d5e6d2f35b4a102e8cb9dca4c58a6972, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_d5e6d2f35b4a102e8cb9dca4c58a6972,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_d5e6d2f35b4a102e8cb9dca4c58a6972 == cache_frame_d5e6d2f35b4a102e8cb9dca4c58a6972) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_d5e6d2f35b4a102e8cb9dca4c58a6972);
     cache_frame_d5e6d2f35b4a102e8cb9dca4c58a6972 = NULL;
 }

 assertFrameObject(frame_d5e6d2f35b4a102e8cb9dca4c58a6972);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__5_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_value = python_pars[1];
 struct Nuitka_FrameObject *frame_2dc447960346eece692b1f0a890a184a;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_2dc447960346eece692b1f0a890a184a = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_2dc447960346eece692b1f0a890a184a)) {
     Py_XDECREF(cache_frame_2dc447960346eece692b1f0a890a184a);

#if _DEBUG_REFCOUNTS
     if (cache_frame_2dc447960346eece692b1f0a890a184a == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_2dc447960346eece692b1f0a890a184a = MAKE_FUNCTION_FRAME(tstate, codeobj_2dc447960346eece692b1f0a890a184a, module_aiohttp$client_exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_2dc447960346eece692b1f0a890a184a->m_type_description == NULL);
 frame_2dc447960346eece692b1f0a890a184a = cache_frame_2dc447960346eece692b1f0a890a184a;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_2dc447960346eece692b1f0a890a184a);
 assert(Py_REFCNT(frame_2dc447960346eece692b1f0a890a184a) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_value_1;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_kwargs_value_1;
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[2]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
  }

  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 120;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 120;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  tmp_tuple_element_1 = mod_consts[23];
  tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
  tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[5]);

  if (unlikely(tmp_tuple_element_1 == NULL)) {
      tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
  }

  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;
   type_description_1 = "oo";
      goto tuple_build_exception_1;
  }
  PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_value_1);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_kwargs_value_1 = DICT_COPY(tstate, mod_consts[6]);
  frame_2dc447960346eece692b1f0a890a184a->m_frame.f_lineno = 120;
  tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_value_1);
  Py_DECREF(tmp_kwargs_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 120;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_value);
  tmp_assattr_value_1 = par_value;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 125;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_2dc447960346eece692b1f0a890a184a, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_2dc447960346eece692b1f0a890a184a->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_2dc447960346eece692b1f0a890a184a, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_2dc447960346eece692b1f0a890a184a,
     type_description_1,
     par_self,
     par_value
 );


 // Release cached frame if used for exception.
 if (frame_2dc447960346eece692b1f0a890a184a == cache_frame_2dc447960346eece692b1f0a890a184a) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_2dc447960346eece692b1f0a890a184a);
     cache_frame_2dc447960346eece692b1f0a890a184a = NULL;
 }

 assertFrameObject(frame_2dc447960346eece692b1f0a890a184a);

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
 CHECK_OBJECT(par_value);
 Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_value);
 Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_exceptions$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_connection_key = python_pars[1];
 PyObject *par_os_error = python_pars[2];
 struct Nuitka_FrameObject *frame_82af5b8a36e9de605fc6d02429ba18b7;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_frame_82af5b8a36e9de605fc6d02429ba18b7 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_82af5b8a36e9de605fc6d02429ba18b7)) {
     Py_XDECREF(cache_frame_82af5b8a36e9de605fc6d02429ba18b7);

#if _DEBUG_REFCOUNTS
     if (cache_frame_82af5b8a36e9de605fc6d02429ba18b7 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_82af5b8a36e9de605fc6d02429ba18b7 = MAKE_FUNCTION_FRAME(tstate, codeobj_82af5b8a36e9de605fc6d02429ba18b7, module_aiohttp$client_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_82af5b8a36e9de605fc6d02429ba18b7->m_type_description == NULL);
 frame_82af5b8a36e9de605fc6d02429ba18b7 = cache_frame_82af5b8a36e9de605fc6d02429ba18b7;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_82af5b8a36e9de605fc6d02429ba18b7);
 assert(Py_REFCNT(frame_82af5b8a36e9de605fc6d02429ba18b7) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_connection_key);
  tmp_assattr_value_1 = par_connection_key;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 165;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  CHECK_OBJECT(par_os_error);
  tmp_assattr_value_2 = par_os_error;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[25], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_type_arg_value_1;
  PyObject *tmp_object_arg_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_expression_value_3;
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 167;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_self);
  tmp_object_arg_value_1 = par_self;
  tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_aiohttp$client_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 167;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[27]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 167;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_os_error);
  tmp_expression_value_2 = par_os_error;
  tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[28]);
  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 167;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_os_error);
  tmp_expression_value_3 = par_os_error;
  tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[29]);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);
   Py_DECREF(tmp_args_element_value_1);

   exception_lineno = 167;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
  frame_82af5b8a36e9de605fc6d02429ba18b7->m_frame.f_lineno = 167;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_element_value_1);
  Py_DECREF(tmp_args_element_value_2);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 167;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_assattr_target_3;
  CHECK_OBJECT(par_connection_key);
  tmp_tuple_element_1 = par_connection_key;
  tmp_assattr_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_assattr_value_3, 0, tmp_tuple_element_1);
  CHECK_OBJECT(par_os_error);
  tmp_tuple_element_1 = par_os_error;
  PyTuple_SET_ITEM0(tmp_assattr_value_3, 1, tmp_tuple_element_1);
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[12], tmp_assattr_value_3);
  Py_DECREF(tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 168;
   type_description_1 = "oooc";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_82af5b8a36e9de605fc6d02429ba18b7, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_82af5b8a36e9de605fc6d02429ba18b7->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_82af5b8a36e9de605fc6d02429ba18b7, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_82af5b8a36e9de605fc6d02429ba18b7,
     type_description_1,
     par_self,
     par_connection_key,
     par_os_error,
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_82af5b8a36e9de605fc6d02429ba18b7 == cache_frame_82af5b8a36e9de605fc6d02429ba18b7) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_82af5b8a36e9de605fc6d02429ba18b7);
     cache_frame_82af5b8a36e9de605fc6d02429ba18b7 = NULL;
 }

 assertFrameObject(frame_82af5b8a36e9de605fc6d02429ba18b7);

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
 CHECK_OBJECT(par_connection_key);
 Py_DECREF(par_connection_key);
 CHECK_OBJECT(par_os_error);
 Py_DECREF(par_os_error);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_connection_key);
 Py_DECREF(par_connection_key);
 CHECK_OBJECT(par_os_error);
 Py_DECREF(par_os_error);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_exceptions$$$function__7_os_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_a1b61c8006e30dedaac4db806b3448ba;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_a1b61c8006e30dedaac4db806b3448ba = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_a1b61c8006e30dedaac4db806b3448ba)) {
     Py_XDECREF(cache_frame_a1b61c8006e30dedaac4db806b3448ba);

#if _DEBUG_REFCOUNTS
     if (cache_frame_a1b61c8006e30dedaac4db806b3448ba == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_a1b61c8006e30dedaac4db806b3448ba = MAKE_FUNCTION_FRAME(tstate, codeobj_a1b61c8006e30dedaac4db806b3448ba, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_a1b61c8006e30dedaac4db806b3448ba->m_type_description == NULL);
 frame_a1b61c8006e30dedaac4db806b3448ba = cache_frame_a1b61c8006e30dedaac4db806b3448ba;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_a1b61c8006e30dedaac4db806b3448ba);
 assert(Py_REFCNT(frame_a1b61c8006e30dedaac4db806b3448ba) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[25]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 172;
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
     exception_tb = MAKE_TRACEBACK(frame_a1b61c8006e30dedaac4db806b3448ba, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_a1b61c8006e30dedaac4db806b3448ba->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_a1b61c8006e30dedaac4db806b3448ba, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_a1b61c8006e30dedaac4db806b3448ba,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_a1b61c8006e30dedaac4db806b3448ba == cache_frame_a1b61c8006e30dedaac4db806b3448ba) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_a1b61c8006e30dedaac4db806b3448ba);
     cache_frame_a1b61c8006e30dedaac4db806b3448ba = NULL;
 }

 assertFrameObject(frame_a1b61c8006e30dedaac4db806b3448ba);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__8_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_b5bbbd8b9984754d6cf24d70d10c6b14;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_b5bbbd8b9984754d6cf24d70d10c6b14 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_b5bbbd8b9984754d6cf24d70d10c6b14)) {
     Py_XDECREF(cache_frame_b5bbbd8b9984754d6cf24d70d10c6b14);

#if _DEBUG_REFCOUNTS
     if (cache_frame_b5bbbd8b9984754d6cf24d70d10c6b14 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_b5bbbd8b9984754d6cf24d70d10c6b14 = MAKE_FUNCTION_FRAME(tstate, codeobj_b5bbbd8b9984754d6cf24d70d10c6b14, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_b5bbbd8b9984754d6cf24d70d10c6b14->m_type_description == NULL);
 frame_b5bbbd8b9984754d6cf24d70d10c6b14 = cache_frame_b5bbbd8b9984754d6cf24d70d10c6b14;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_b5bbbd8b9984754d6cf24d70d10c6b14);
 assert(Py_REFCNT(frame_b5bbbd8b9984754d6cf24d70d10c6b14) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 176;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 176;
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
     exception_tb = MAKE_TRACEBACK(frame_b5bbbd8b9984754d6cf24d70d10c6b14, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_b5bbbd8b9984754d6cf24d70d10c6b14->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_b5bbbd8b9984754d6cf24d70d10c6b14, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_b5bbbd8b9984754d6cf24d70d10c6b14,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_b5bbbd8b9984754d6cf24d70d10c6b14 == cache_frame_b5bbbd8b9984754d6cf24d70d10c6b14) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_b5bbbd8b9984754d6cf24d70d10c6b14);
     cache_frame_b5bbbd8b9984754d6cf24d70d10c6b14 = NULL;
 }

 assertFrameObject(frame_b5bbbd8b9984754d6cf24d70d10c6b14);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__9_port(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_6df7f714c643e2308134328321d8795b;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_6df7f714c643e2308134328321d8795b = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_6df7f714c643e2308134328321d8795b)) {
     Py_XDECREF(cache_frame_6df7f714c643e2308134328321d8795b);

#if _DEBUG_REFCOUNTS
     if (cache_frame_6df7f714c643e2308134328321d8795b == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_6df7f714c643e2308134328321d8795b = MAKE_FUNCTION_FRAME(tstate, codeobj_6df7f714c643e2308134328321d8795b, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_6df7f714c643e2308134328321d8795b->m_type_description == NULL);
 frame_6df7f714c643e2308134328321d8795b = cache_frame_6df7f714c643e2308134328321d8795b;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_6df7f714c643e2308134328321d8795b);
 assert(Py_REFCNT(frame_6df7f714c643e2308134328321d8795b) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 180;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[31]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 180;
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
     exception_tb = MAKE_TRACEBACK(frame_6df7f714c643e2308134328321d8795b, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_6df7f714c643e2308134328321d8795b->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_6df7f714c643e2308134328321d8795b, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_6df7f714c643e2308134328321d8795b,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_6df7f714c643e2308134328321d8795b == cache_frame_6df7f714c643e2308134328321d8795b) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_6df7f714c643e2308134328321d8795b);
     cache_frame_6df7f714c643e2308134328321d8795b = NULL;
 }

 assertFrameObject(frame_6df7f714c643e2308134328321d8795b);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__10_ssl(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_8048c00cf1d4e002152c89be122b53bc;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_8048c00cf1d4e002152c89be122b53bc = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_8048c00cf1d4e002152c89be122b53bc)) {
     Py_XDECREF(cache_frame_8048c00cf1d4e002152c89be122b53bc);

#if _DEBUG_REFCOUNTS
     if (cache_frame_8048c00cf1d4e002152c89be122b53bc == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_8048c00cf1d4e002152c89be122b53bc = MAKE_FUNCTION_FRAME(tstate, codeobj_8048c00cf1d4e002152c89be122b53bc, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_8048c00cf1d4e002152c89be122b53bc->m_type_description == NULL);
 frame_8048c00cf1d4e002152c89be122b53bc = cache_frame_8048c00cf1d4e002152c89be122b53bc;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_8048c00cf1d4e002152c89be122b53bc);
 assert(Py_REFCNT(frame_8048c00cf1d4e002152c89be122b53bc) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 184;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 184;
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
     exception_tb = MAKE_TRACEBACK(frame_8048c00cf1d4e002152c89be122b53bc, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_8048c00cf1d4e002152c89be122b53bc->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_8048c00cf1d4e002152c89be122b53bc, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_8048c00cf1d4e002152c89be122b53bc,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_8048c00cf1d4e002152c89be122b53bc == cache_frame_8048c00cf1d4e002152c89be122b53bc) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_8048c00cf1d4e002152c89be122b53bc);
     cache_frame_8048c00cf1d4e002152c89be122b53bc = NULL;
 }

 assertFrameObject(frame_8048c00cf1d4e002152c89be122b53bc);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__11___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_65270da2da4ec143de4b572ba0d8c5a7;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_65270da2da4ec143de4b572ba0d8c5a7 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_65270da2da4ec143de4b572ba0d8c5a7)) {
     Py_XDECREF(cache_frame_65270da2da4ec143de4b572ba0d8c5a7);

#if _DEBUG_REFCOUNTS
     if (cache_frame_65270da2da4ec143de4b572ba0d8c5a7 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_65270da2da4ec143de4b572ba0d8c5a7 = MAKE_FUNCTION_FRAME(tstate, codeobj_65270da2da4ec143de4b572ba0d8c5a7, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_65270da2da4ec143de4b572ba0d8c5a7->m_type_description == NULL);
 frame_65270da2da4ec143de4b572ba0d8c5a7 = cache_frame_65270da2da4ec143de4b572ba0d8c5a7;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_65270da2da4ec143de4b572ba0d8c5a7);
 assert(Py_REFCNT(frame_65270da2da4ec143de4b572ba0d8c5a7) == 2);

 // Framed code:
 {
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_arg_value_1_1;
  PyObject *tmp_kw_call_arg_value_2_1;
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_kw_call_arg_value_3_1;
  PyObject *tmp_expression_value_3;
  tmp_kw_call_arg_value_0_1 = mod_consts[33];
  CHECK_OBJECT(par_self);
  tmp_kw_call_arg_value_1_1 = par_self;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 188;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_True;
  tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_1);
  if (tmp_condition_result_1 != false) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  tmp_kw_call_arg_value_2_1 = mod_consts[34];
  Py_INCREF(tmp_kw_call_arg_value_2_1);
  goto condexpr_end_1;
  condexpr_false_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[32]);
  if (tmp_kw_call_arg_value_2_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 188;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  condexpr_end_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[29]);
  if (tmp_kw_call_arg_value_3_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 188;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_65270da2da4ec143de4b572ba0d8c5a7->m_frame.f_lineno = 187;
  {
      PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
      tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
  }

  Py_DECREF(tmp_kw_call_arg_value_2_1);
  Py_DECREF(tmp_kw_call_arg_value_3_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 187;
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
     exception_tb = MAKE_TRACEBACK(frame_65270da2da4ec143de4b572ba0d8c5a7, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_65270da2da4ec143de4b572ba0d8c5a7->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_65270da2da4ec143de4b572ba0d8c5a7, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_65270da2da4ec143de4b572ba0d8c5a7,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_65270da2da4ec143de4b572ba0d8c5a7 == cache_frame_65270da2da4ec143de4b572ba0d8c5a7) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_65270da2da4ec143de4b572ba0d8c5a7);
     cache_frame_65270da2da4ec143de4b572ba0d8c5a7 = NULL;
 }

 assertFrameObject(frame_65270da2da4ec143de4b572ba0d8c5a7);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__12___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_path = python_pars[1];
 PyObject *par_connection_key = python_pars[2];
 PyObject *par_os_error = python_pars[3];
 struct Nuitka_FrameObject *frame_6764067a47d4a5ba85e7088ea2944778;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_frame_6764067a47d4a5ba85e7088ea2944778 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_6764067a47d4a5ba85e7088ea2944778)) {
     Py_XDECREF(cache_frame_6764067a47d4a5ba85e7088ea2944778);

#if _DEBUG_REFCOUNTS
     if (cache_frame_6764067a47d4a5ba85e7088ea2944778 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_6764067a47d4a5ba85e7088ea2944778 = MAKE_FUNCTION_FRAME(tstate, codeobj_6764067a47d4a5ba85e7088ea2944778, module_aiohttp$client_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_6764067a47d4a5ba85e7088ea2944778->m_type_description == NULL);
 frame_6764067a47d4a5ba85e7088ea2944778 = cache_frame_6764067a47d4a5ba85e7088ea2944778;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_6764067a47d4a5ba85e7088ea2944778);
 assert(Py_REFCNT(frame_6764067a47d4a5ba85e7088ea2944778) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_path);
  tmp_assattr_value_1 = par_path;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[35], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 213;
   type_description_1 = "ooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_type_arg_value_1;
  PyObject *tmp_object_arg_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 214;
   type_description_1 = "ooooc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_self);
  tmp_object_arg_value_1 = par_self;
  tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_aiohttp$client_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 214;
   type_description_1 = "ooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_connection_key);
  tmp_args_element_value_1 = par_connection_key;
  CHECK_OBJECT(par_os_error);
  tmp_args_element_value_2 = par_os_error;
  frame_6764067a47d4a5ba85e7088ea2944778->m_frame.f_lineno = 214;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
          tstate,
          tmp_called_instance_1,
          mod_consts[27],
          call_args
      );
  }

  Py_DECREF(tmp_called_instance_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 214;
   type_description_1 = "ooooc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_6764067a47d4a5ba85e7088ea2944778, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_6764067a47d4a5ba85e7088ea2944778->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_6764067a47d4a5ba85e7088ea2944778, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_6764067a47d4a5ba85e7088ea2944778,
     type_description_1,
     par_self,
     par_path,
     par_connection_key,
     par_os_error,
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_6764067a47d4a5ba85e7088ea2944778 == cache_frame_6764067a47d4a5ba85e7088ea2944778) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_6764067a47d4a5ba85e7088ea2944778);
     cache_frame_6764067a47d4a5ba85e7088ea2944778 = NULL;
 }

 assertFrameObject(frame_6764067a47d4a5ba85e7088ea2944778);

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
 CHECK_OBJECT(par_path);
 Py_DECREF(par_path);
 CHECK_OBJECT(par_connection_key);
 Py_DECREF(par_connection_key);
 CHECK_OBJECT(par_os_error);
 Py_DECREF(par_os_error);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_path);
 Py_DECREF(par_path);
 CHECK_OBJECT(par_connection_key);
 Py_DECREF(par_connection_key);
 CHECK_OBJECT(par_os_error);
 Py_DECREF(par_os_error);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_exceptions$$$function__13_path(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_4d9e4d4a56b69270742f8d008562f527;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_4d9e4d4a56b69270742f8d008562f527 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_4d9e4d4a56b69270742f8d008562f527)) {
     Py_XDECREF(cache_frame_4d9e4d4a56b69270742f8d008562f527);

#if _DEBUG_REFCOUNTS
     if (cache_frame_4d9e4d4a56b69270742f8d008562f527 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_4d9e4d4a56b69270742f8d008562f527 = MAKE_FUNCTION_FRAME(tstate, codeobj_4d9e4d4a56b69270742f8d008562f527, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_4d9e4d4a56b69270742f8d008562f527->m_type_description == NULL);
 frame_4d9e4d4a56b69270742f8d008562f527 = cache_frame_4d9e4d4a56b69270742f8d008562f527;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_4d9e4d4a56b69270742f8d008562f527);
 assert(Py_REFCNT(frame_4d9e4d4a56b69270742f8d008562f527) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[35]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 218;
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
     exception_tb = MAKE_TRACEBACK(frame_4d9e4d4a56b69270742f8d008562f527, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_4d9e4d4a56b69270742f8d008562f527->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_4d9e4d4a56b69270742f8d008562f527, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_4d9e4d4a56b69270742f8d008562f527,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_4d9e4d4a56b69270742f8d008562f527 == cache_frame_4d9e4d4a56b69270742f8d008562f527) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_4d9e4d4a56b69270742f8d008562f527);
     cache_frame_4d9e4d4a56b69270742f8d008562f527 = NULL;
 }

 assertFrameObject(frame_4d9e4d4a56b69270742f8d008562f527);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__14___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_504b484b895a03f654c7b122d3952f55;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_504b484b895a03f654c7b122d3952f55 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_504b484b895a03f654c7b122d3952f55)) {
     Py_XDECREF(cache_frame_504b484b895a03f654c7b122d3952f55);

#if _DEBUG_REFCOUNTS
     if (cache_frame_504b484b895a03f654c7b122d3952f55 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_504b484b895a03f654c7b122d3952f55 = MAKE_FUNCTION_FRAME(tstate, codeobj_504b484b895a03f654c7b122d3952f55, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_504b484b895a03f654c7b122d3952f55->m_type_description == NULL);
 frame_504b484b895a03f654c7b122d3952f55 = cache_frame_504b484b895a03f654c7b122d3952f55;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_504b484b895a03f654c7b122d3952f55);
 assert(Py_REFCNT(frame_504b484b895a03f654c7b122d3952f55) == 2);

 // Framed code:
 {
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_arg_value_1_1;
  PyObject *tmp_kw_call_arg_value_2_1;
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_kw_call_arg_value_3_1;
  PyObject *tmp_expression_value_3;
  tmp_kw_call_arg_value_0_1 = mod_consts[36];
  CHECK_OBJECT(par_self);
  tmp_kw_call_arg_value_1_1 = par_self;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[32]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 222;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_True;
  tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_1);
  if (tmp_condition_result_1 != false) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  tmp_kw_call_arg_value_2_1 = mod_consts[34];
  Py_INCREF(tmp_kw_call_arg_value_2_1);
  goto condexpr_end_1;
  condexpr_false_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[32]);
  if (tmp_kw_call_arg_value_2_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 222;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  condexpr_end_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[29]);
  if (tmp_kw_call_arg_value_3_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 222;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_504b484b895a03f654c7b122d3952f55->m_frame.f_lineno = 221;
  {
      PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
      tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tstate, unicode_builtin_format, call_args);
  }

  Py_DECREF(tmp_kw_call_arg_value_2_1);
  Py_DECREF(tmp_kw_call_arg_value_3_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 221;
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
     exception_tb = MAKE_TRACEBACK(frame_504b484b895a03f654c7b122d3952f55, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_504b484b895a03f654c7b122d3952f55->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_504b484b895a03f654c7b122d3952f55, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_504b484b895a03f654c7b122d3952f55,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_504b484b895a03f654c7b122d3952f55 == cache_frame_504b484b895a03f654c7b122d3952f55) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_504b484b895a03f654c7b122d3952f55);
     cache_frame_504b484b895a03f654c7b122d3952f55 = NULL;
 }

 assertFrameObject(frame_504b484b895a03f654c7b122d3952f55);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_message = python_pars[1];
 struct Nuitka_FrameObject *frame_f40bb8b189bfbbfdb10f9165c6bbc939;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_f40bb8b189bfbbfdb10f9165c6bbc939 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(par_message);
  tmp_cmp_expr_left_1 = par_message;
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = mod_consts[37];
  {
      PyObject *old = par_message;
      assert(old != NULL);
      par_message = tmp_assign_source_1;
      Py_INCREF(par_message);
      Py_DECREF(old);
  }

 }
 branch_no_1:;
 // Tried code:
 if (isFrameUnusable(cache_frame_f40bb8b189bfbbfdb10f9165c6bbc939)) {
     Py_XDECREF(cache_frame_f40bb8b189bfbbfdb10f9165c6bbc939);

#if _DEBUG_REFCOUNTS
     if (cache_frame_f40bb8b189bfbbfdb10f9165c6bbc939 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_f40bb8b189bfbbfdb10f9165c6bbc939 = MAKE_FUNCTION_FRAME(tstate, codeobj_f40bb8b189bfbbfdb10f9165c6bbc939, module_aiohttp$client_exceptions, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_f40bb8b189bfbbfdb10f9165c6bbc939->m_type_description == NULL);
 frame_f40bb8b189bfbbfdb10f9165c6bbc939 = cache_frame_f40bb8b189bfbbfdb10f9165c6bbc939;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_f40bb8b189bfbbfdb10f9165c6bbc939);
 assert(Py_REFCNT(frame_f40bb8b189bfbbfdb10f9165c6bbc939) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_message);
  tmp_tuple_element_1 = par_message;
  tmp_assattr_value_1 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assattr_value_1, 0, tmp_tuple_element_1);
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 237;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  CHECK_OBJECT(par_message);
  tmp_assattr_value_2 = par_message;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[9], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 238;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_f40bb8b189bfbbfdb10f9165c6bbc939, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_f40bb8b189bfbbfdb10f9165c6bbc939->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_f40bb8b189bfbbfdb10f9165c6bbc939, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_f40bb8b189bfbbfdb10f9165c6bbc939,
     type_description_1,
     par_self,
     par_message
 );


 // Release cached frame if used for exception.
 if (frame_f40bb8b189bfbbfdb10f9165c6bbc939 == cache_frame_f40bb8b189bfbbfdb10f9165c6bbc939) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_f40bb8b189bfbbfdb10f9165c6bbc939);
     cache_frame_f40bb8b189bfbbfdb10f9165c6bbc939 = NULL;
 }

 assertFrameObject(frame_f40bb8b189bfbbfdb10f9165c6bbc939);

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
 CHECK_OBJECT(par_message);
 Py_DECREF(par_message);
 par_message = NULL;
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

 CHECK_OBJECT(par_message);
 Py_DECREF(par_message);
 par_message = NULL;
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


static PyObject *impl_aiohttp$client_exceptions$$$function__16___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_expected = python_pars[1];
 PyObject *par_got = python_pars[2];
 PyObject *par_host = python_pars[3];
 PyObject *par_port = python_pars[4];
 struct Nuitka_FrameObject *frame_04a4e944d203d805c3b564bfb74ba50c;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_04a4e944d203d805c3b564bfb74ba50c = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_04a4e944d203d805c3b564bfb74ba50c)) {
     Py_XDECREF(cache_frame_04a4e944d203d805c3b564bfb74ba50c);

#if _DEBUG_REFCOUNTS
     if (cache_frame_04a4e944d203d805c3b564bfb74ba50c == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_04a4e944d203d805c3b564bfb74ba50c = MAKE_FUNCTION_FRAME(tstate, codeobj_04a4e944d203d805c3b564bfb74ba50c, module_aiohttp$client_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_04a4e944d203d805c3b564bfb74ba50c->m_type_description == NULL);
 frame_04a4e944d203d805c3b564bfb74ba50c = cache_frame_04a4e944d203d805c3b564bfb74ba50c;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_04a4e944d203d805c3b564bfb74ba50c);
 assert(Py_REFCNT(frame_04a4e944d203d805c3b564bfb74ba50c) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_expected);
  tmp_assattr_value_1 = par_expected;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 249;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  CHECK_OBJECT(par_got);
  tmp_assattr_value_2 = par_got;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 250;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  CHECK_OBJECT(par_host);
  tmp_assattr_value_3 = par_host;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[30], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 251;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_assattr_target_4;
  CHECK_OBJECT(par_port);
  tmp_assattr_value_4 = par_port;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_4 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[31], tmp_assattr_value_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 252;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_5;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_assattr_target_5;
  CHECK_OBJECT(par_expected);
  tmp_tuple_element_1 = par_expected;
  tmp_assattr_value_5 = MAKE_TUPLE_EMPTY(tstate, 4);
  PyTuple_SET_ITEM0(tmp_assattr_value_5, 0, tmp_tuple_element_1);
  CHECK_OBJECT(par_got);
  tmp_tuple_element_1 = par_got;
  PyTuple_SET_ITEM0(tmp_assattr_value_5, 1, tmp_tuple_element_1);
  CHECK_OBJECT(par_host);
  tmp_tuple_element_1 = par_host;
  PyTuple_SET_ITEM0(tmp_assattr_value_5, 2, tmp_tuple_element_1);
  CHECK_OBJECT(par_port);
  tmp_tuple_element_1 = par_port;
  PyTuple_SET_ITEM0(tmp_assattr_value_5, 3, tmp_tuple_element_1);
  CHECK_OBJECT(par_self);
  tmp_assattr_target_5 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[12], tmp_assattr_value_5);
  Py_DECREF(tmp_assattr_value_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 253;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_04a4e944d203d805c3b564bfb74ba50c, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_04a4e944d203d805c3b564bfb74ba50c->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_04a4e944d203d805c3b564bfb74ba50c, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_04a4e944d203d805c3b564bfb74ba50c,
     type_description_1,
     par_self,
     par_expected,
     par_got,
     par_host,
     par_port
 );


 // Release cached frame if used for exception.
 if (frame_04a4e944d203d805c3b564bfb74ba50c == cache_frame_04a4e944d203d805c3b564bfb74ba50c) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_04a4e944d203d805c3b564bfb74ba50c);
     cache_frame_04a4e944d203d805c3b564bfb74ba50c = NULL;
 }

 assertFrameObject(frame_04a4e944d203d805c3b564bfb74ba50c);

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
 CHECK_OBJECT(par_expected);
 Py_DECREF(par_expected);
 CHECK_OBJECT(par_got);
 Py_DECREF(par_got);
 CHECK_OBJECT(par_host);
 Py_DECREF(par_host);
 CHECK_OBJECT(par_port);
 Py_DECREF(par_port);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_expected);
 Py_DECREF(par_expected);
 CHECK_OBJECT(par_got);
 Py_DECREF(par_got);
 CHECK_OBJECT(par_host);
 Py_DECREF(par_host);
 CHECK_OBJECT(par_port);
 Py_DECREF(par_port);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_exceptions$$$function__17___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_b88b53619fe21cb3ca180a77e91ddfce;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_b88b53619fe21cb3ca180a77e91ddfce = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_b88b53619fe21cb3ca180a77e91ddfce)) {
     Py_XDECREF(cache_frame_b88b53619fe21cb3ca180a77e91ddfce);

#if _DEBUG_REFCOUNTS
     if (cache_frame_b88b53619fe21cb3ca180a77e91ddfce == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_b88b53619fe21cb3ca180a77e91ddfce = MAKE_FUNCTION_FRAME(tstate, codeobj_b88b53619fe21cb3ca180a77e91ddfce, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_b88b53619fe21cb3ca180a77e91ddfce->m_type_description == NULL);
 frame_b88b53619fe21cb3ca180a77e91ddfce = cache_frame_b88b53619fe21cb3ca180a77e91ddfce;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_b88b53619fe21cb3ca180a77e91ddfce);
 assert(Py_REFCNT(frame_b88b53619fe21cb3ca180a77e91ddfce) == 2);

 // Framed code:
 {
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_arg_value_1_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_kw_call_arg_value_2_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_kw_call_arg_value_3_1;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_kw_call_arg_value_4_1;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_kw_call_arg_value_5_1;
  PyObject *tmp_expression_value_6;
  tmp_kw_call_arg_value_0_1 = mod_consts[40];
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 257;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_kw_call_arg_value_1_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 257;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[38]);
  if (tmp_kw_call_arg_value_2_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_1_1);

   exception_lineno = 257;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_4 = par_self;
  tmp_kw_call_arg_value_3_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[39]);
  if (tmp_kw_call_arg_value_3_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 257;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_5 = par_self;
  tmp_kw_call_arg_value_4_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[30]);
  if (tmp_kw_call_arg_value_4_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);
   Py_DECREF(tmp_kw_call_arg_value_3_1);

   exception_lineno = 257;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_6 = par_self;
  tmp_kw_call_arg_value_5_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[31]);
  if (tmp_kw_call_arg_value_5_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);
   Py_DECREF(tmp_kw_call_arg_value_3_1);
   Py_DECREF(tmp_kw_call_arg_value_4_1);

   exception_lineno = 257;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_b88b53619fe21cb3ca180a77e91ddfce->m_frame.f_lineno = 256;
  {
      PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1};
      tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, unicode_builtin_format, call_args);
  }

  Py_DECREF(tmp_kw_call_arg_value_1_1);
  Py_DECREF(tmp_kw_call_arg_value_2_1);
  Py_DECREF(tmp_kw_call_arg_value_3_1);
  Py_DECREF(tmp_kw_call_arg_value_4_1);
  Py_DECREF(tmp_kw_call_arg_value_5_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 256;
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
     exception_tb = MAKE_TRACEBACK(frame_b88b53619fe21cb3ca180a77e91ddfce, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_b88b53619fe21cb3ca180a77e91ddfce->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_b88b53619fe21cb3ca180a77e91ddfce, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_b88b53619fe21cb3ca180a77e91ddfce,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_b88b53619fe21cb3ca180a77e91ddfce == cache_frame_b88b53619fe21cb3ca180a77e91ddfce) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_b88b53619fe21cb3ca180a77e91ddfce);
     cache_frame_b88b53619fe21cb3ca180a77e91ddfce = NULL;
 }

 assertFrameObject(frame_b88b53619fe21cb3ca180a77e91ddfce);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__18___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_url = python_pars[1];
 struct Nuitka_FrameObject *frame_b06c8229fabab92dc23ba048813e0347;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_b06c8229fabab92dc23ba048813e0347 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_b06c8229fabab92dc23ba048813e0347)) {
     Py_XDECREF(cache_frame_b06c8229fabab92dc23ba048813e0347);

#if _DEBUG_REFCOUNTS
     if (cache_frame_b06c8229fabab92dc23ba048813e0347 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_b06c8229fabab92dc23ba048813e0347 = MAKE_FUNCTION_FRAME(tstate, codeobj_b06c8229fabab92dc23ba048813e0347, module_aiohttp$client_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_b06c8229fabab92dc23ba048813e0347->m_type_description == NULL);
 frame_b06c8229fabab92dc23ba048813e0347 = cache_frame_b06c8229fabab92dc23ba048813e0347;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_b06c8229fabab92dc23ba048813e0347);
 assert(Py_REFCNT(frame_b06c8229fabab92dc23ba048813e0347) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_type_arg_value_1;
  PyObject *tmp_object_arg_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[26]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 277;
   type_description_1 = "ooc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_self);
  tmp_object_arg_value_1 = par_self;
  tmp_called_instance_1 = BUILTIN_SUPER0(tstate, moduledict_aiohttp$client_exceptions, tmp_type_arg_value_1, tmp_object_arg_value_1);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 277;
   type_description_1 = "ooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_url);
  tmp_args_element_value_1 = par_url;
  frame_b06c8229fabab92dc23ba048813e0347->m_frame.f_lineno = 277;
  tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[27], tmp_args_element_value_1);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 277;
   type_description_1 = "ooc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_b06c8229fabab92dc23ba048813e0347, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_b06c8229fabab92dc23ba048813e0347->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_b06c8229fabab92dc23ba048813e0347, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_b06c8229fabab92dc23ba048813e0347,
     type_description_1,
     par_self,
     par_url,
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_b06c8229fabab92dc23ba048813e0347 == cache_frame_b06c8229fabab92dc23ba048813e0347) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_b06c8229fabab92dc23ba048813e0347);
     cache_frame_b06c8229fabab92dc23ba048813e0347 = NULL;
 }

 assertFrameObject(frame_b06c8229fabab92dc23ba048813e0347);

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
 CHECK_OBJECT(par_url);
 Py_DECREF(par_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_url);
 Py_DECREF(par_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_exceptions$$$function__19_url(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_ddf2366353a3d4e91dcdbcaba59650c9;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_ddf2366353a3d4e91dcdbcaba59650c9 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_ddf2366353a3d4e91dcdbcaba59650c9)) {
     Py_XDECREF(cache_frame_ddf2366353a3d4e91dcdbcaba59650c9);

#if _DEBUG_REFCOUNTS
     if (cache_frame_ddf2366353a3d4e91dcdbcaba59650c9 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_ddf2366353a3d4e91dcdbcaba59650c9 = MAKE_FUNCTION_FRAME(tstate, codeobj_ddf2366353a3d4e91dcdbcaba59650c9, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_ddf2366353a3d4e91dcdbcaba59650c9->m_type_description == NULL);
 frame_ddf2366353a3d4e91dcdbcaba59650c9 = cache_frame_ddf2366353a3d4e91dcdbcaba59650c9;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_ddf2366353a3d4e91dcdbcaba59650c9);
 assert(Py_REFCNT(frame_ddf2366353a3d4e91dcdbcaba59650c9) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_subscript_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 281;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_subscript_value_1 = mod_consts[8];
  tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 281;
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
     exception_tb = MAKE_TRACEBACK(frame_ddf2366353a3d4e91dcdbcaba59650c9, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_ddf2366353a3d4e91dcdbcaba59650c9->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_ddf2366353a3d4e91dcdbcaba59650c9, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_ddf2366353a3d4e91dcdbcaba59650c9,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_ddf2366353a3d4e91dcdbcaba59650c9 == cache_frame_ddf2366353a3d4e91dcdbcaba59650c9) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_ddf2366353a3d4e91dcdbcaba59650c9);
     cache_frame_ddf2366353a3d4e91dcdbcaba59650c9 = NULL;
 }

 assertFrameObject(frame_ddf2366353a3d4e91dcdbcaba59650c9);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__20___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_8bb20b0c729ba6fecaf5169d3367b800;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_8bb20b0c729ba6fecaf5169d3367b800 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_8bb20b0c729ba6fecaf5169d3367b800)) {
     Py_XDECREF(cache_frame_8bb20b0c729ba6fecaf5169d3367b800);

#if _DEBUG_REFCOUNTS
     if (cache_frame_8bb20b0c729ba6fecaf5169d3367b800 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_8bb20b0c729ba6fecaf5169d3367b800 = MAKE_FUNCTION_FRAME(tstate, codeobj_8bb20b0c729ba6fecaf5169d3367b800, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_8bb20b0c729ba6fecaf5169d3367b800->m_type_description == NULL);
 frame_8bb20b0c729ba6fecaf5169d3367b800 = cache_frame_8bb20b0c729ba6fecaf5169d3367b800;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_8bb20b0c729ba6fecaf5169d3367b800);
 assert(Py_REFCNT(frame_8bb20b0c729ba6fecaf5169d3367b800) == 2);

 // Framed code:
 {
  PyObject *tmp_string_concat_values_1;
  PyObject *tmp_tuple_element_1;
  tmp_tuple_element_1 = mod_consts[41];
  tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
  {
   PyObject *tmp_format_value_1;
   PyObject *tmp_expression_value_1;
   PyObject *tmp_expression_value_2;
   PyObject *tmp_format_spec_1;
   PyObject *tmp_format_value_2;
   PyObject *tmp_expression_value_3;
   PyObject *tmp_format_spec_2;
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
   CHECK_OBJECT(par_self);
   tmp_expression_value_2 = par_self;
   tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tstate, tmp_expression_value_2);
   if (tmp_expression_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 284;
    type_description_1 = "o";
       goto tuple_build_exception_1;
   }
   tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
   Py_DECREF(tmp_expression_value_1);
   if (tmp_format_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 284;
    type_description_1 = "o";
       goto tuple_build_exception_1;
   }
   tmp_format_spec_1 = mod_consts[15];
   tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
   Py_DECREF(tmp_format_value_1);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 284;
    type_description_1 = "o";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
   tmp_tuple_element_1 = mod_consts[42];
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
   CHECK_OBJECT(par_self);
   tmp_expression_value_3 = par_self;
   tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[43]);
   if (tmp_format_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 284;
    type_description_1 = "o";
       goto tuple_build_exception_1;
   }
   tmp_format_spec_2 = mod_consts[15];
   tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
   Py_DECREF(tmp_format_value_2);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 284;
    type_description_1 = "o";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
   tmp_tuple_element_1 = mod_consts[44];
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_string_concat_values_1);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_return_value = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_1);
  Py_DECREF(tmp_string_concat_values_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 284;
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
     exception_tb = MAKE_TRACEBACK(frame_8bb20b0c729ba6fecaf5169d3367b800, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_8bb20b0c729ba6fecaf5169d3367b800->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_8bb20b0c729ba6fecaf5169d3367b800, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_8bb20b0c729ba6fecaf5169d3367b800,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_8bb20b0c729ba6fecaf5169d3367b800 == cache_frame_8bb20b0c729ba6fecaf5169d3367b800) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_8bb20b0c729ba6fecaf5169d3367b800);
     cache_frame_8bb20b0c729ba6fecaf5169d3367b800 = NULL;
 }

 assertFrameObject(frame_8bb20b0c729ba6fecaf5169d3367b800);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__21___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_connection_key = python_pars[1];
 PyObject *par_certificate_error = python_pars[2];
 struct Nuitka_FrameObject *frame_cd3fc46ad4f837590e5e9dfad2e76b04;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_cd3fc46ad4f837590e5e9dfad2e76b04 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_cd3fc46ad4f837590e5e9dfad2e76b04)) {
     Py_XDECREF(cache_frame_cd3fc46ad4f837590e5e9dfad2e76b04);

#if _DEBUG_REFCOUNTS
     if (cache_frame_cd3fc46ad4f837590e5e9dfad2e76b04 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_cd3fc46ad4f837590e5e9dfad2e76b04 = MAKE_FUNCTION_FRAME(tstate, codeobj_cd3fc46ad4f837590e5e9dfad2e76b04, module_aiohttp$client_exceptions, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_cd3fc46ad4f837590e5e9dfad2e76b04->m_type_description == NULL);
 frame_cd3fc46ad4f837590e5e9dfad2e76b04 = cache_frame_cd3fc46ad4f837590e5e9dfad2e76b04;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_cd3fc46ad4f837590e5e9dfad2e76b04);
 assert(Py_REFCNT(frame_cd3fc46ad4f837590e5e9dfad2e76b04) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_connection_key);
  tmp_assattr_value_1 = par_connection_key;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[24], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 321;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  CHECK_OBJECT(par_certificate_error);
  tmp_assattr_value_2 = par_certificate_error;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[45], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 322;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_assattr_target_3;
  CHECK_OBJECT(par_connection_key);
  tmp_tuple_element_1 = par_connection_key;
  tmp_assattr_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_assattr_value_3, 0, tmp_tuple_element_1);
  CHECK_OBJECT(par_certificate_error);
  tmp_tuple_element_1 = par_certificate_error;
  PyTuple_SET_ITEM0(tmp_assattr_value_3, 1, tmp_tuple_element_1);
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[12], tmp_assattr_value_3);
  Py_DECREF(tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 323;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_cd3fc46ad4f837590e5e9dfad2e76b04, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_cd3fc46ad4f837590e5e9dfad2e76b04->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_cd3fc46ad4f837590e5e9dfad2e76b04, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_cd3fc46ad4f837590e5e9dfad2e76b04,
     type_description_1,
     par_self,
     par_connection_key,
     par_certificate_error
 );


 // Release cached frame if used for exception.
 if (frame_cd3fc46ad4f837590e5e9dfad2e76b04 == cache_frame_cd3fc46ad4f837590e5e9dfad2e76b04) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_cd3fc46ad4f837590e5e9dfad2e76b04);
     cache_frame_cd3fc46ad4f837590e5e9dfad2e76b04 = NULL;
 }

 assertFrameObject(frame_cd3fc46ad4f837590e5e9dfad2e76b04);

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
 CHECK_OBJECT(par_connection_key);
 Py_DECREF(par_connection_key);
 CHECK_OBJECT(par_certificate_error);
 Py_DECREF(par_certificate_error);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_connection_key);
 Py_DECREF(par_connection_key);
 CHECK_OBJECT(par_certificate_error);
 Py_DECREF(par_certificate_error);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_exceptions$$$function__22_certificate_error(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_d7fc5809fc8f785ff4bf45f4bb2a2300;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_d7fc5809fc8f785ff4bf45f4bb2a2300 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_d7fc5809fc8f785ff4bf45f4bb2a2300)) {
     Py_XDECREF(cache_frame_d7fc5809fc8f785ff4bf45f4bb2a2300);

#if _DEBUG_REFCOUNTS
     if (cache_frame_d7fc5809fc8f785ff4bf45f4bb2a2300 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_d7fc5809fc8f785ff4bf45f4bb2a2300 = MAKE_FUNCTION_FRAME(tstate, codeobj_d7fc5809fc8f785ff4bf45f4bb2a2300, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_d7fc5809fc8f785ff4bf45f4bb2a2300->m_type_description == NULL);
 frame_d7fc5809fc8f785ff4bf45f4bb2a2300 = cache_frame_d7fc5809fc8f785ff4bf45f4bb2a2300;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_d7fc5809fc8f785ff4bf45f4bb2a2300);
 assert(Py_REFCNT(frame_d7fc5809fc8f785ff4bf45f4bb2a2300) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[45]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 327;
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
     exception_tb = MAKE_TRACEBACK(frame_d7fc5809fc8f785ff4bf45f4bb2a2300, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_d7fc5809fc8f785ff4bf45f4bb2a2300->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_d7fc5809fc8f785ff4bf45f4bb2a2300, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_d7fc5809fc8f785ff4bf45f4bb2a2300,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_d7fc5809fc8f785ff4bf45f4bb2a2300 == cache_frame_d7fc5809fc8f785ff4bf45f4bb2a2300) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_d7fc5809fc8f785ff4bf45f4bb2a2300);
     cache_frame_d7fc5809fc8f785ff4bf45f4bb2a2300 = NULL;
 }

 assertFrameObject(frame_d7fc5809fc8f785ff4bf45f4bb2a2300);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__23_host(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_5bb4dd01d4f976d7ebe148ed491bf078;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_5bb4dd01d4f976d7ebe148ed491bf078 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_5bb4dd01d4f976d7ebe148ed491bf078)) {
     Py_XDECREF(cache_frame_5bb4dd01d4f976d7ebe148ed491bf078);

#if _DEBUG_REFCOUNTS
     if (cache_frame_5bb4dd01d4f976d7ebe148ed491bf078 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_5bb4dd01d4f976d7ebe148ed491bf078 = MAKE_FUNCTION_FRAME(tstate, codeobj_5bb4dd01d4f976d7ebe148ed491bf078, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_5bb4dd01d4f976d7ebe148ed491bf078->m_type_description == NULL);
 frame_5bb4dd01d4f976d7ebe148ed491bf078 = cache_frame_5bb4dd01d4f976d7ebe148ed491bf078;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_5bb4dd01d4f976d7ebe148ed491bf078);
 assert(Py_REFCNT(frame_5bb4dd01d4f976d7ebe148ed491bf078) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 331;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 331;
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
     exception_tb = MAKE_TRACEBACK(frame_5bb4dd01d4f976d7ebe148ed491bf078, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_5bb4dd01d4f976d7ebe148ed491bf078->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_5bb4dd01d4f976d7ebe148ed491bf078, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_5bb4dd01d4f976d7ebe148ed491bf078,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_5bb4dd01d4f976d7ebe148ed491bf078 == cache_frame_5bb4dd01d4f976d7ebe148ed491bf078) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_5bb4dd01d4f976d7ebe148ed491bf078);
     cache_frame_5bb4dd01d4f976d7ebe148ed491bf078 = NULL;
 }

 assertFrameObject(frame_5bb4dd01d4f976d7ebe148ed491bf078);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__24_port(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_5859be622d1f76b625fd40591198b8eb;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_5859be622d1f76b625fd40591198b8eb = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_5859be622d1f76b625fd40591198b8eb)) {
     Py_XDECREF(cache_frame_5859be622d1f76b625fd40591198b8eb);

#if _DEBUG_REFCOUNTS
     if (cache_frame_5859be622d1f76b625fd40591198b8eb == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_5859be622d1f76b625fd40591198b8eb = MAKE_FUNCTION_FRAME(tstate, codeobj_5859be622d1f76b625fd40591198b8eb, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_5859be622d1f76b625fd40591198b8eb->m_type_description == NULL);
 frame_5859be622d1f76b625fd40591198b8eb = cache_frame_5859be622d1f76b625fd40591198b8eb;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_5859be622d1f76b625fd40591198b8eb);
 assert(Py_REFCNT(frame_5859be622d1f76b625fd40591198b8eb) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 335;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[31]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 335;
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
     exception_tb = MAKE_TRACEBACK(frame_5859be622d1f76b625fd40591198b8eb, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_5859be622d1f76b625fd40591198b8eb->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_5859be622d1f76b625fd40591198b8eb, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_5859be622d1f76b625fd40591198b8eb,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_5859be622d1f76b625fd40591198b8eb == cache_frame_5859be622d1f76b625fd40591198b8eb) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_5859be622d1f76b625fd40591198b8eb);
     cache_frame_5859be622d1f76b625fd40591198b8eb = NULL;
 }

 assertFrameObject(frame_5859be622d1f76b625fd40591198b8eb);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__25_ssl(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_4915fb2502d766424ebe1f9970e2e1f0;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_4915fb2502d766424ebe1f9970e2e1f0 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_4915fb2502d766424ebe1f9970e2e1f0)) {
     Py_XDECREF(cache_frame_4915fb2502d766424ebe1f9970e2e1f0);

#if _DEBUG_REFCOUNTS
     if (cache_frame_4915fb2502d766424ebe1f9970e2e1f0 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_4915fb2502d766424ebe1f9970e2e1f0 = MAKE_FUNCTION_FRAME(tstate, codeobj_4915fb2502d766424ebe1f9970e2e1f0, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_4915fb2502d766424ebe1f9970e2e1f0->m_type_description == NULL);
 frame_4915fb2502d766424ebe1f9970e2e1f0 = cache_frame_4915fb2502d766424ebe1f9970e2e1f0;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_4915fb2502d766424ebe1f9970e2e1f0);
 assert(Py_REFCNT(frame_4915fb2502d766424ebe1f9970e2e1f0) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[24]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 339;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[46]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 339;
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
     exception_tb = MAKE_TRACEBACK(frame_4915fb2502d766424ebe1f9970e2e1f0, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_4915fb2502d766424ebe1f9970e2e1f0->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_4915fb2502d766424ebe1f9970e2e1f0, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_4915fb2502d766424ebe1f9970e2e1f0,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_4915fb2502d766424ebe1f9970e2e1f0 == cache_frame_4915fb2502d766424ebe1f9970e2e1f0) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_4915fb2502d766424ebe1f9970e2e1f0);
     cache_frame_4915fb2502d766424ebe1f9970e2e1f0 = NULL;
 }

 assertFrameObject(frame_4915fb2502d766424ebe1f9970e2e1f0);

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


static PyObject *impl_aiohttp$client_exceptions$$$function__26___str__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_68b116516ae9da0dbc5d897f59e12b00;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_68b116516ae9da0dbc5d897f59e12b00 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_68b116516ae9da0dbc5d897f59e12b00)) {
     Py_XDECREF(cache_frame_68b116516ae9da0dbc5d897f59e12b00);

#if _DEBUG_REFCOUNTS
     if (cache_frame_68b116516ae9da0dbc5d897f59e12b00 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_68b116516ae9da0dbc5d897f59e12b00 = MAKE_FUNCTION_FRAME(tstate, codeobj_68b116516ae9da0dbc5d897f59e12b00, module_aiohttp$client_exceptions, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_68b116516ae9da0dbc5d897f59e12b00->m_type_description == NULL);
 frame_68b116516ae9da0dbc5d897f59e12b00 = cache_frame_68b116516ae9da0dbc5d897f59e12b00;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_68b116516ae9da0dbc5d897f59e12b00);
 assert(Py_REFCNT(frame_68b116516ae9da0dbc5d897f59e12b00) == 2);

 // Framed code:
 {
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_arg_value_1_1;
  tmp_kw_call_arg_value_0_1 = mod_consts[47];
  CHECK_OBJECT(par_self);
  tmp_kw_call_arg_value_1_1 = par_self;
  frame_68b116516ae9da0dbc5d897f59e12b00->m_frame.f_lineno = 343;
  {
      PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
      tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
  }

  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 343;
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
     exception_tb = MAKE_TRACEBACK(frame_68b116516ae9da0dbc5d897f59e12b00, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_68b116516ae9da0dbc5d897f59e12b00->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_68b116516ae9da0dbc5d897f59e12b00, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_68b116516ae9da0dbc5d897f59e12b00,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_68b116516ae9da0dbc5d897f59e12b00 == cache_frame_68b116516ae9da0dbc5d897f59e12b00) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_68b116516ae9da0dbc5d897f59e12b00);
     cache_frame_68b116516ae9da0dbc5d897f59e12b00 = NULL;
 }

 assertFrameObject(frame_68b116516ae9da0dbc5d897f59e12b00);

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



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__10_ssl(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__10_ssl,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_8048c00cf1d4e002152c89be122b53bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__11___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__11___str__,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_65270da2da4ec143de4b572ba0d8c5a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__12___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__12___init__,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[133],
#endif
        codeobj_6764067a47d4a5ba85e7088ea2944778,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__13_path(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__13_path,
        mod_consts[132],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_4d9e4d4a56b69270742f8d008562f527,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__14___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__14___str__,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_504b484b895a03f654c7b122d3952f55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__15___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__15___init__,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_f40bb8b189bfbbfdb10f9165c6bbc939,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__16___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__16___init__,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_04a4e944d203d805c3b564bfb74ba50c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__17___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__17___repr__,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_b88b53619fe21cb3ca180a77e91ddfce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__18___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__18___init__,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_b06c8229fabab92dc23ba048813e0347,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__19_url(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__19_url,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_ddf2366353a3d4e91dcdbcaba59650c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__1___init__(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__1___init__,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[92],
#endif
        codeobj_4656422b05e1ad28521ac84006e810c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__20___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__20___repr__,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_8bb20b0c729ba6fecaf5169d3367b800,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__21___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__21___init__,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_cd3fc46ad4f837590e5e9dfad2e76b04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__22_certificate_error(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__22_certificate_error,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_d7fc5809fc8f785ff4bf45f4bb2a2300,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__23_host(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__23_host,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_5bb4dd01d4f976d7ebe148ed491bf078,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__24_port(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__24_port,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_5859be622d1f76b625fd40591198b8eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__25_ssl(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__25_ssl,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_4915fb2502d766424ebe1f9970e2e1f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__26___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__26___str__,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_68b116516ae9da0dbc5d897f59e12b00,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__2___str__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__2___str__,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        codeobj_680115e73fc10544b70d408ae104769a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__3___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__3___repr__,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[96],
#endif
        codeobj_7e415c47ae1ee447f42ba6a5b0e0420a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__4_code(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__4_code,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_d5e6d2f35b4a102e8cb9dca4c58a6972,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__5_code(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__5_code,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[98],
#endif
        codeobj_2dc447960346eece692b1f0a890a184a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__6___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__6___init__,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[118],
#endif
        codeobj_82af5b8a36e9de605fc6d02429ba18b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__7_os_error(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__7_os_error,
        mod_consts[116],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_a1b61c8006e30dedaac4db806b3448ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__8_host(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__8_host,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        mod_consts[120],
#endif
        codeobj_b5bbbd8b9984754d6cf24d70d10c6b14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_exceptions$$$function__9_port(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_exceptions$$$function__9_port,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_6df7f714c643e2308134328321d8795b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_exceptions,
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

static function_impl_code const function_table_aiohttp$client_exceptions[] = {
 impl_aiohttp$client_exceptions$$$function__1___init__,
 impl_aiohttp$client_exceptions$$$function__2___str__,
 impl_aiohttp$client_exceptions$$$function__3___repr__,
 impl_aiohttp$client_exceptions$$$function__4_code,
 impl_aiohttp$client_exceptions$$$function__5_code,
 impl_aiohttp$client_exceptions$$$function__6___init__,
 impl_aiohttp$client_exceptions$$$function__7_os_error,
 impl_aiohttp$client_exceptions$$$function__8_host,
 impl_aiohttp$client_exceptions$$$function__9_port,
 impl_aiohttp$client_exceptions$$$function__10_ssl,
 impl_aiohttp$client_exceptions$$$function__11___str__,
 impl_aiohttp$client_exceptions$$$function__12___init__,
 impl_aiohttp$client_exceptions$$$function__13_path,
 impl_aiohttp$client_exceptions$$$function__14___str__,
 impl_aiohttp$client_exceptions$$$function__15___init__,
 impl_aiohttp$client_exceptions$$$function__16___init__,
 impl_aiohttp$client_exceptions$$$function__17___repr__,
 impl_aiohttp$client_exceptions$$$function__18___init__,
 impl_aiohttp$client_exceptions$$$function__19_url,
 impl_aiohttp$client_exceptions$$$function__20___repr__,
 impl_aiohttp$client_exceptions$$$function__21___init__,
 impl_aiohttp$client_exceptions$$$function__22_certificate_error,
 impl_aiohttp$client_exceptions$$$function__23_host,
 impl_aiohttp$client_exceptions$$$function__24_port,
 impl_aiohttp$client_exceptions$$$function__25_ssl,
 impl_aiohttp$client_exceptions$$$function__26___str__,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_aiohttp$client_exceptions);

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
        module_aiohttp$client_exceptions,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_aiohttp$client_exceptions,
        sizeof(function_table_aiohttp$client_exceptions) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiohttp$client_exceptions(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiohttp$client_exceptions");

    // Store the module for future use.
    module_aiohttp$client_exceptions = module;

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
        PRINT_STRING("aiohttp$client_exceptions: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("aiohttp$client_exceptions: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.client_exceptions" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initaiohttp$client_exceptions\n");

    moduledict_aiohttp$client_exceptions = MODULE_DICT(module_aiohttp$client_exceptions);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiohttp$client_exceptions,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiohttp$client_exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[15]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiohttp$client_exceptions,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$client_exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$client_exceptions,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiohttp$client_exceptions);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_aiohttp$client_exceptions);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
 PyObject *outline_0_var___class__ = NULL;
 PyObject *outline_1_var___class__ = NULL;
 PyObject *outline_2_var___class__ = NULL;
 PyObject *outline_3_var___class__ = NULL;
 PyObject *outline_4_var___class__ = NULL;
 PyObject *outline_5_var___class__ = NULL;
 PyObject *outline_6_var___class__ = NULL;
 PyObject *outline_7_var___class__ = NULL;
 struct Nuitka_CellObject *outline_8_var___class__ = NULL;
 PyObject *outline_9_var___class__ = NULL;
 struct Nuitka_CellObject *outline_10_var___class__ = NULL;
 PyObject *outline_11_var___class__ = NULL;
 PyObject *outline_12_var___class__ = NULL;
 PyObject *outline_13_var___class__ = NULL;
 PyObject *outline_14_var___class__ = NULL;
 PyObject *outline_15_var___class__ = NULL;
 struct Nuitka_CellObject *outline_16_var___class__ = NULL;
 PyObject *outline_17_var___class__ = NULL;
 PyObject *outline_18_var___class__ = NULL;
 PyObject *outline_19_var___class__ = NULL;
 PyObject *tmp_class_creation_10__bases = NULL;
 PyObject *tmp_class_creation_10__bases_orig = NULL;
 PyObject *tmp_class_creation_10__class_decl_dict = NULL;
 PyObject *tmp_class_creation_10__metaclass = NULL;
 PyObject *tmp_class_creation_10__prepared = NULL;
 PyObject *tmp_class_creation_11__bases = NULL;
 PyObject *tmp_class_creation_11__bases_orig = NULL;
 PyObject *tmp_class_creation_11__class_decl_dict = NULL;
 PyObject *tmp_class_creation_11__metaclass = NULL;
 PyObject *tmp_class_creation_11__prepared = NULL;
 PyObject *tmp_class_creation_12__bases = NULL;
 PyObject *tmp_class_creation_12__bases_orig = NULL;
 PyObject *tmp_class_creation_12__class_decl_dict = NULL;
 PyObject *tmp_class_creation_12__metaclass = NULL;
 PyObject *tmp_class_creation_12__prepared = NULL;
 PyObject *tmp_class_creation_13__bases = NULL;
 PyObject *tmp_class_creation_13__bases_orig = NULL;
 PyObject *tmp_class_creation_13__class_decl_dict = NULL;
 PyObject *tmp_class_creation_13__metaclass = NULL;
 PyObject *tmp_class_creation_13__prepared = NULL;
 PyObject *tmp_class_creation_14__bases = NULL;
 PyObject *tmp_class_creation_14__bases_orig = NULL;
 PyObject *tmp_class_creation_14__class_decl_dict = NULL;
 PyObject *tmp_class_creation_14__metaclass = NULL;
 PyObject *tmp_class_creation_14__prepared = NULL;
 PyObject *tmp_class_creation_15__bases = NULL;
 PyObject *tmp_class_creation_15__bases_orig = NULL;
 PyObject *tmp_class_creation_15__class_decl_dict = NULL;
 PyObject *tmp_class_creation_15__metaclass = NULL;
 PyObject *tmp_class_creation_15__prepared = NULL;
 PyObject *tmp_class_creation_16__bases = NULL;
 PyObject *tmp_class_creation_16__bases_orig = NULL;
 PyObject *tmp_class_creation_16__class_decl_dict = NULL;
 PyObject *tmp_class_creation_16__metaclass = NULL;
 PyObject *tmp_class_creation_16__prepared = NULL;
 PyObject *tmp_class_creation_17__bases = NULL;
 PyObject *tmp_class_creation_17__bases_orig = NULL;
 PyObject *tmp_class_creation_17__class_decl_dict = NULL;
 PyObject *tmp_class_creation_17__metaclass = NULL;
 PyObject *tmp_class_creation_17__prepared = NULL;
 PyObject *tmp_class_creation_18__bases = NULL;
 PyObject *tmp_class_creation_18__bases_orig = NULL;
 PyObject *tmp_class_creation_18__class_decl_dict = NULL;
 PyObject *tmp_class_creation_18__metaclass = NULL;
 PyObject *tmp_class_creation_18__prepared = NULL;
 PyObject *tmp_class_creation_19__bases = NULL;
 PyObject *tmp_class_creation_19__bases_orig = NULL;
 PyObject *tmp_class_creation_19__class_decl_dict = NULL;
 PyObject *tmp_class_creation_19__metaclass = NULL;
 PyObject *tmp_class_creation_19__prepared = NULL;
 PyObject *tmp_class_creation_1__bases = NULL;
 PyObject *tmp_class_creation_1__class_decl_dict = NULL;
 PyObject *tmp_class_creation_1__metaclass = NULL;
 PyObject *tmp_class_creation_1__prepared = NULL;
 PyObject *tmp_class_creation_20__bases = NULL;
 PyObject *tmp_class_creation_20__bases_orig = NULL;
 PyObject *tmp_class_creation_20__class_decl_dict = NULL;
 PyObject *tmp_class_creation_20__metaclass = NULL;
 PyObject *tmp_class_creation_20__prepared = NULL;
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
 PyObject *tmp_class_creation_4__bases = NULL;
 PyObject *tmp_class_creation_4__bases_orig = NULL;
 PyObject *tmp_class_creation_4__class_decl_dict = NULL;
 PyObject *tmp_class_creation_4__metaclass = NULL;
 PyObject *tmp_class_creation_4__prepared = NULL;
 PyObject *tmp_class_creation_5__bases = NULL;
 PyObject *tmp_class_creation_5__bases_orig = NULL;
 PyObject *tmp_class_creation_5__class_decl_dict = NULL;
 PyObject *tmp_class_creation_5__metaclass = NULL;
 PyObject *tmp_class_creation_5__prepared = NULL;
 PyObject *tmp_class_creation_6__bases = NULL;
 PyObject *tmp_class_creation_6__bases_orig = NULL;
 PyObject *tmp_class_creation_6__class_decl_dict = NULL;
 PyObject *tmp_class_creation_6__metaclass = NULL;
 PyObject *tmp_class_creation_6__prepared = NULL;
 PyObject *tmp_class_creation_7__bases = NULL;
 PyObject *tmp_class_creation_7__bases_orig = NULL;
 PyObject *tmp_class_creation_7__class_decl_dict = NULL;
 PyObject *tmp_class_creation_7__metaclass = NULL;
 PyObject *tmp_class_creation_7__prepared = NULL;
 PyObject *tmp_class_creation_8__bases = NULL;
 PyObject *tmp_class_creation_8__bases_orig = NULL;
 PyObject *tmp_class_creation_8__class_decl_dict = NULL;
 PyObject *tmp_class_creation_8__metaclass = NULL;
 PyObject *tmp_class_creation_8__prepared = NULL;
 PyObject *tmp_class_creation_9__bases = NULL;
 PyObject *tmp_class_creation_9__bases_orig = NULL;
 PyObject *tmp_class_creation_9__class_decl_dict = NULL;
 PyObject *tmp_class_creation_9__metaclass = NULL;
 PyObject *tmp_class_creation_9__prepared = NULL;
 PyObject *tmp_import_from_1__module = NULL;
 struct Nuitka_FrameObject *frame_31a9966f3d0c2a60e49a4ce5c2a51a84;
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
 PyObject *locals_aiohttp$client_exceptions$$$class__1_ClientError_45 = NULL;
 PyObject *tmp_dictset_value;
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
 PyObject *locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49 = NULL;
 struct Nuitka_FrameObject *frame_aa1543f9ab4208dc838a222a9a018a05_2;
 NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
 PyObject *locals_aiohttp$client_exceptions$$$class__3_ContentTypeError_128 = NULL;
 PyObject *exception_keeper_type_10;
 PyObject *exception_keeper_value_10;
 PyTracebackObject *exception_keeper_tb_10;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
 PyObject *exception_keeper_type_11;
 PyObject *exception_keeper_value_11;
 PyTracebackObject *exception_keeper_tb_11;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
 PyObject *exception_keeper_type_12;
 PyObject *exception_keeper_value_12;
 PyTracebackObject *exception_keeper_tb_12;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
 PyObject *locals_aiohttp$client_exceptions$$$class__4_WSServerHandshakeError_132 = NULL;
 PyObject *exception_keeper_type_13;
 PyObject *exception_keeper_value_13;
 PyTracebackObject *exception_keeper_tb_13;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
 PyObject *exception_keeper_type_14;
 PyObject *exception_keeper_value_14;
 PyTracebackObject *exception_keeper_tb_14;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
 PyObject *exception_keeper_type_15;
 PyObject *exception_keeper_value_15;
 PyTracebackObject *exception_keeper_tb_15;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
 PyObject *locals_aiohttp$client_exceptions$$$class__5_ClientHttpProxyError_136 = NULL;
 PyObject *exception_keeper_type_16;
 PyObject *exception_keeper_value_16;
 PyTracebackObject *exception_keeper_tb_16;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
 PyObject *exception_keeper_type_17;
 PyObject *exception_keeper_value_17;
 PyTracebackObject *exception_keeper_tb_17;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
 PyObject *exception_keeper_type_18;
 PyObject *exception_keeper_value_18;
 PyTracebackObject *exception_keeper_tb_18;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
 PyObject *locals_aiohttp$client_exceptions$$$class__6_TooManyRedirects_145 = NULL;
 PyObject *exception_keeper_type_19;
 PyObject *exception_keeper_value_19;
 PyTracebackObject *exception_keeper_tb_19;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
 PyObject *exception_keeper_type_20;
 PyObject *exception_keeper_value_20;
 PyTracebackObject *exception_keeper_tb_20;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
 PyObject *exception_keeper_type_21;
 PyObject *exception_keeper_value_21;
 PyTracebackObject *exception_keeper_tb_21;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
 PyObject *locals_aiohttp$client_exceptions$$$class__7_ClientConnectionError_149 = NULL;
 PyObject *exception_keeper_type_22;
 PyObject *exception_keeper_value_22;
 PyTracebackObject *exception_keeper_tb_22;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
 PyObject *exception_keeper_type_23;
 PyObject *exception_keeper_value_23;
 PyTracebackObject *exception_keeper_tb_23;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
 PyObject *exception_keeper_type_24;
 PyObject *exception_keeper_value_24;
 PyTracebackObject *exception_keeper_tb_24;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
 PyObject *locals_aiohttp$client_exceptions$$$class__8_ClientOSError_153 = NULL;
 PyObject *exception_keeper_type_25;
 PyObject *exception_keeper_value_25;
 PyTracebackObject *exception_keeper_tb_25;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
 PyObject *exception_keeper_type_26;
 PyObject *exception_keeper_value_26;
 PyTracebackObject *exception_keeper_tb_26;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
 PyObject *exception_keeper_type_27;
 PyObject *exception_keeper_value_27;
 PyTracebackObject *exception_keeper_tb_27;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
 PyObject *locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157 = NULL;
 struct Nuitka_FrameObject *frame_e7631bd35b34e9e53b20a1304ef7bf39_3;
 NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
 PyObject *exception_keeper_type_28;
 PyObject *exception_keeper_value_28;
 PyTracebackObject *exception_keeper_tb_28;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
 PyObject *exception_keeper_type_29;
 PyObject *exception_keeper_value_29;
 PyTracebackObject *exception_keeper_tb_29;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
 PyObject *exception_keeper_type_30;
 PyObject *exception_keeper_value_30;
 PyTracebackObject *exception_keeper_tb_30;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
 PyObject *locals_aiohttp$client_exceptions$$$class__10_ClientProxyConnectionError_195 = NULL;
 PyObject *exception_keeper_type_31;
 PyObject *exception_keeper_value_31;
 PyTracebackObject *exception_keeper_tb_31;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
 PyObject *exception_keeper_type_32;
 PyObject *exception_keeper_value_32;
 PyTracebackObject *exception_keeper_tb_32;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
 PyObject *exception_keeper_type_33;
 PyObject *exception_keeper_value_33;
 PyTracebackObject *exception_keeper_tb_33;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
 PyObject *locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203 = NULL;
 struct Nuitka_FrameObject *frame_c08cb45ee31f7b4d390fa51afcaf355e_4;
 NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
 PyObject *exception_keeper_type_34;
 PyObject *exception_keeper_value_34;
 PyTracebackObject *exception_keeper_tb_34;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
 PyObject *exception_keeper_type_35;
 PyObject *exception_keeper_value_35;
 PyTracebackObject *exception_keeper_tb_35;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
 PyObject *exception_keeper_type_36;
 PyObject *exception_keeper_value_36;
 PyTracebackObject *exception_keeper_tb_36;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
 PyObject *locals_aiohttp$client_exceptions$$$class__12_ServerConnectionError_226 = NULL;
 PyObject *exception_keeper_type_37;
 PyObject *exception_keeper_value_37;
 PyTracebackObject *exception_keeper_tb_37;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
 PyObject *exception_keeper_type_38;
 PyObject *exception_keeper_value_38;
 PyTracebackObject *exception_keeper_tb_38;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
 PyObject *exception_keeper_type_39;
 PyObject *exception_keeper_value_39;
 PyTracebackObject *exception_keeper_tb_39;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
 PyObject *locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230 = NULL;
 struct Nuitka_FrameObject *frame_8f7a1653573b9e8930434ddfe169b1a2_5;
 NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
 PyObject *exception_keeper_type_40;
 PyObject *exception_keeper_value_40;
 PyTracebackObject *exception_keeper_tb_40;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
 PyObject *exception_keeper_type_41;
 PyObject *exception_keeper_value_41;
 PyTracebackObject *exception_keeper_tb_41;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
 PyObject *exception_keeper_type_42;
 PyObject *exception_keeper_value_42;
 PyTracebackObject *exception_keeper_tb_42;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
 PyObject *locals_aiohttp$client_exceptions$$$class__14_ServerTimeoutError_241 = NULL;
 PyObject *exception_keeper_type_43;
 PyObject *exception_keeper_value_43;
 PyTracebackObject *exception_keeper_tb_43;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
 PyObject *exception_keeper_type_44;
 PyObject *exception_keeper_value_44;
 PyTracebackObject *exception_keeper_tb_44;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
 PyObject *exception_keeper_type_45;
 PyObject *exception_keeper_value_45;
 PyTracebackObject *exception_keeper_tb_45;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
 PyObject *locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245 = NULL;
 struct Nuitka_FrameObject *frame_48739845754f316564ed7ef5fb25faf9_6;
 NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
 PyObject *exception_keeper_type_46;
 PyObject *exception_keeper_value_46;
 PyTracebackObject *exception_keeper_tb_46;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
 PyObject *exception_keeper_type_47;
 PyObject *exception_keeper_value_47;
 PyTracebackObject *exception_keeper_tb_47;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
 PyObject *exception_keeper_type_48;
 PyObject *exception_keeper_value_48;
 PyTracebackObject *exception_keeper_tb_48;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
 PyObject *locals_aiohttp$client_exceptions$$$class__16_ClientPayloadError_261 = NULL;
 PyObject *exception_keeper_type_49;
 PyObject *exception_keeper_value_49;
 PyTracebackObject *exception_keeper_tb_49;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
 PyObject *exception_keeper_type_50;
 PyObject *exception_keeper_value_50;
 PyTracebackObject *exception_keeper_tb_50;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
 PyObject *exception_keeper_type_51;
 PyObject *exception_keeper_value_51;
 PyTracebackObject *exception_keeper_tb_51;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
 PyObject *locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265 = NULL;
 struct Nuitka_FrameObject *frame_452c1fe980929a16f2f3935e62e91405_7;
 NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
 PyObject *exception_keeper_type_52;
 PyObject *exception_keeper_value_52;
 PyTracebackObject *exception_keeper_tb_52;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
 PyObject *exception_keeper_type_53;
 PyObject *exception_keeper_value_53;
 PyTracebackObject *exception_keeper_tb_53;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
 PyObject *exception_keeper_type_54;
 PyObject *exception_keeper_value_54;
 PyTracebackObject *exception_keeper_tb_54;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
 PyObject *locals_aiohttp$client_exceptions$$$class__18_ClientSSLError_287 = NULL;
 PyObject *exception_keeper_type_55;
 PyObject *exception_keeper_value_55;
 PyTracebackObject *exception_keeper_tb_55;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
 PyObject *exception_keeper_type_56;
 PyObject *exception_keeper_value_56;
 PyTracebackObject *exception_keeper_tb_56;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
 PyObject *exception_keeper_type_57;
 PyObject *exception_keeper_value_57;
 PyTracebackObject *exception_keeper_tb_57;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
 PyObject *locals_aiohttp$client_exceptions$$$class__19_ClientConnectorSSLError_311 = NULL;
 PyObject *exception_keeper_type_58;
 PyObject *exception_keeper_value_58;
 PyTracebackObject *exception_keeper_tb_58;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
 PyObject *exception_keeper_type_59;
 PyObject *exception_keeper_value_59;
 PyTracebackObject *exception_keeper_tb_59;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
 PyObject *exception_keeper_type_60;
 PyObject *exception_keeper_value_60;
 PyTracebackObject *exception_keeper_tb_60;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
 PyObject *locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315 = NULL;
 struct Nuitka_FrameObject *frame_aead42c11667672579738e7480de8f06_8;
 NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
 PyObject *exception_keeper_type_61;
 PyObject *exception_keeper_value_61;
 PyTracebackObject *exception_keeper_tb_61;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
 PyObject *exception_keeper_type_62;
 PyObject *exception_keeper_value_62;
 PyTracebackObject *exception_keeper_tb_62;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
 PyObject *exception_keeper_type_63;
 PyObject *exception_keeper_value_63;
 PyTracebackObject *exception_keeper_tb_63;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;

    // Module init code if any


    // Module code.
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = mod_consts[48];
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = module_filename_obj;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_2);
 }
 frame_31a9966f3d0c2a60e49a4ce5c2a51a84 = MAKE_MODULE_FRAME(codeobj_31a9966f3d0c2a60e49a4ce5c2a51a84, module_aiohttp$client_exceptions);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_31a9966f3d0c2a60e49a4ce5c2a51a84);
 assert(Py_REFCNT(frame_31a9966f3d0c2a60e49a4ce5c2a51a84) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = module_filename_obj;
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[51]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[52], tmp_assattr_value_1);
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
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[51]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[53], tmp_assattr_value_2);
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
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[55];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp$client_exceptions;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = Py_None;
  tmp_level_value_1 = mod_consts[8];
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 3;
  tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_name_value_2;
  PyObject *tmp_globals_arg_value_2;
  PyObject *tmp_locals_arg_value_2;
  PyObject *tmp_fromlist_value_2;
  PyObject *tmp_level_value_2;
  tmp_name_value_2 = mod_consts[2];
  tmp_globals_arg_value_2 = (PyObject *)moduledict_aiohttp$client_exceptions;
  tmp_locals_arg_value_2 = Py_None;
  tmp_fromlist_value_2 = Py_None;
  tmp_level_value_2 = mod_consts[8];
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 4;
  tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
  if (tmp_assign_source_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 4;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_5);
 }
 {
  PyObject *tmp_assign_source_6;
  tmp_assign_source_6 = IMPORT_HARD_TYPING();
  assert(!(tmp_assign_source_6 == NULL));
  assert(tmp_import_from_1__module == NULL);
  Py_INCREF(tmp_assign_source_6);
  tmp_import_from_1__module = tmp_assign_source_6;
 }
 {
  PyObject *tmp_assign_source_7;
  tmp_assign_source_7 = Py_False;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_7);
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_8;
  PyObject *tmp_import_name_from_1;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_1 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_1)) {
      tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_1,
          (PyObject *)moduledict_aiohttp$client_exceptions,
          mod_consts[57],
          mod_consts[8]
      );
  } else {
      tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[57]);
  }

  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_8);
 }
 {
  PyObject *tmp_assign_source_9;
  PyObject *tmp_import_name_from_2;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_2 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_2)) {
      tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_2,
          (PyObject *)moduledict_aiohttp$client_exceptions,
          mod_consts[58],
          mod_consts[8]
      );
  } else {
      tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[58]);
  }

  if (tmp_assign_source_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_9);
 }
 {
  PyObject *tmp_assign_source_10;
  PyObject *tmp_import_name_from_3;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_3 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_3)) {
      tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_3,
          (PyObject *)moduledict_aiohttp$client_exceptions,
          mod_consts[59],
          mod_consts[8]
      );
  } else {
      tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[59]);
  }

  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_10);
 }
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_import_name_from_4;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_4 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_4)) {
      tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_4,
          (PyObject *)moduledict_aiohttp$client_exceptions,
          mod_consts[60],
          mod_consts[8]
      );
  } else {
      tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[60]);
  }

  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_11);
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
  PyObject *tmp_assign_source_12;
  PyObject *tmp_import_name_from_5;
  PyObject *tmp_name_value_3;
  PyObject *tmp_globals_arg_value_3;
  PyObject *tmp_locals_arg_value_3;
  PyObject *tmp_fromlist_value_3;
  PyObject *tmp_level_value_3;
  tmp_name_value_3 = mod_consts[61];
  tmp_globals_arg_value_3 = (PyObject *)moduledict_aiohttp$client_exceptions;
  tmp_locals_arg_value_3 = Py_None;
  tmp_fromlist_value_3 = mod_consts[62];
  tmp_level_value_3 = mod_consts[63];
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 7;
  tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
  if (tmp_import_name_from_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_5)) {
      tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_5,
          (PyObject *)moduledict_aiohttp$client_exceptions,
          mod_consts[64],
          mod_consts[8]
      );
  } else {
      tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[64]);
  }

  Py_DECREF(tmp_import_name_from_5);
  if (tmp_assign_source_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_12);
 }
 {
  PyObject *tmp_assign_source_13;
  PyObject *tmp_import_name_from_6;
  PyObject *tmp_name_value_4;
  PyObject *tmp_globals_arg_value_4;
  PyObject *tmp_locals_arg_value_4;
  PyObject *tmp_fromlist_value_4;
  PyObject *tmp_level_value_4;
  tmp_name_value_4 = mod_consts[65];
  tmp_globals_arg_value_4 = (PyObject *)moduledict_aiohttp$client_exceptions;
  tmp_locals_arg_value_4 = Py_None;
  tmp_fromlist_value_4 = mod_consts[66];
  tmp_level_value_4 = mod_consts[63];
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 8;
  tmp_import_name_from_6 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
  if (tmp_import_name_from_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_6)) {
      tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_6,
          (PyObject *)moduledict_aiohttp$client_exceptions,
          mod_consts[67],
          mod_consts[8]
      );
  } else {
      tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[67]);
  }

  Py_DECREF(tmp_import_name_from_6);
  if (tmp_assign_source_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_13);
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_14;
  PyObject *tmp_name_value_5;
  PyObject *tmp_globals_arg_value_5;
  PyObject *tmp_locals_arg_value_5;
  PyObject *tmp_fromlist_value_5;
  PyObject *tmp_level_value_5;
  tmp_name_value_5 = mod_consts[32];
  tmp_globals_arg_value_5 = (PyObject *)moduledict_aiohttp$client_exceptions;
  tmp_locals_arg_value_5 = Py_None;
  tmp_fromlist_value_5 = Py_None;
  tmp_level_value_5 = mod_consts[8];
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 11;
  tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
  if (tmp_assign_source_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 11;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_14);
 }
 {
  PyObject *tmp_assign_source_15;
  PyObject *tmp_expression_value_1;
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[32]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
  }

  assert(!(tmp_expression_value_1 == NULL));
  tmp_assign_source_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[68]);
  if (tmp_assign_source_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_15);
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

 // Preserve existing published exception id 1.
 exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_2 == NULL) {
     exception_keeper_tb_2 = MAKE_TRACEBACK(frame_31a9966f3d0c2a60e49a4ce5c2a51a84, exception_keeper_lineno_2);
 } else if (exception_keeper_lineno_2 != 0) {
     exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_31a9966f3d0c2a60e49a4ce5c2a51a84, exception_keeper_lineno_2);
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
  PyObject *tmp_assign_source_16;
  tmp_assign_source_16 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_16);
 }
 {
  PyObject *tmp_assign_source_17;
  tmp_assign_source_17 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_17);
 }
 goto branch_end_1;
 branch_no_1:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 10;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame) frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = exception_tb->tb_lineno;

 goto try_except_handler_3;
 branch_end_1:;
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

 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto frame_exception_exit_1;
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
  PyObject *tmp_assign_source_18;
  tmp_assign_source_18 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_18);
 }
 {
  PyObject *tmp_assign_source_19;
  tmp_assign_source_19 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_19);
 }
 {
  PyObject *tmp_assign_source_20;
  tmp_assign_source_20 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_20);
 }
 {
  PyObject *tmp_assign_source_21;
  tmp_assign_source_21 = mod_consts[72];
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_21);
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_22;
  PyObject *tmp_dircall_arg1_1;
  tmp_dircall_arg1_1 = mod_consts[74];
  Py_INCREF(tmp_dircall_arg1_1);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
      tmp_assign_source_22 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_4;
  }
  assert(tmp_class_creation_1__bases == NULL);
  tmp_class_creation_1__bases = tmp_assign_source_22;
 }
 {
  PyObject *tmp_assign_source_23;
  tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__class_decl_dict == NULL);
  tmp_class_creation_1__class_decl_dict = tmp_assign_source_23;
 }
 {
  PyObject *tmp_assign_source_24;
  PyObject *tmp_metaclass_value_1;
  nuitka_bool tmp_condition_result_2;
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


   exception_lineno = 45;

      goto try_except_handler_4;
  }
  tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_expression_value_2 = tmp_class_creation_1__bases;
  tmp_subscript_value_1 = mod_consts[8];
  tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
  if (tmp_type_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_4;
  }
  tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
  Py_DECREF(tmp_type_arg_1);
  if (tmp_metaclass_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_4;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_1);
  condexpr_end_1:;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_bases_value_1 = tmp_class_creation_1__bases;
  tmp_assign_source_24 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
  Py_DECREF(tmp_metaclass_value_1);
  if (tmp_assign_source_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_4;
  }
  assert(tmp_class_creation_1__metaclass == NULL);
  tmp_class_creation_1__metaclass = tmp_assign_source_24;
 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_3 = tmp_class_creation_1__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_4;
  }
  tmp_condition_result_3 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_assign_source_25;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_args_value_1;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_kwargs_value_1;
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_4 = tmp_class_creation_1__metaclass;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[75]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_4;
  }
  tmp_tuple_element_1 = mod_consts[76];
  tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_tuple_element_1 = tmp_class_creation_1__bases;
  PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
  CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
  tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 45;
  tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_value_1);
  if (tmp_assign_source_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_4;
  }
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_25;
 }
 {
  bool tmp_condition_result_4;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(tmp_class_creation_1__prepared);
  tmp_expression_value_5 = tmp_class_creation_1__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_4;
  }
  tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  assert(!(tmp_res == -1));
  tmp_condition_result_4 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_raise_type_1;
  PyObject *tmp_raise_value_1;
  PyObject *tmp_mod_expr_left_1;
  PyObject *tmp_mod_expr_right_1;
  PyObject *tmp_tuple_element_2;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_name_value_6;
  PyObject *tmp_default_value_1;
  tmp_raise_type_1 = PyExc_TypeError;
  tmp_mod_expr_left_1 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_6 = tmp_class_creation_1__metaclass;
  tmp_name_value_6 = mod_consts[20];
  tmp_default_value_1 = mod_consts[79];
  tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_6, tmp_default_value_1);
  if (tmp_tuple_element_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_4;
  }
  tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_7;
   PyObject *tmp_type_arg_2;
   PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_type_arg_2 = tmp_class_creation_1__prepared;
   tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
   assert(!(tmp_expression_value_7 == NULL));
   tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[20]);
   Py_DECREF(tmp_expression_value_7);
   if (tmp_tuple_element_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 45;

       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_mod_expr_right_1);
  goto try_except_handler_4;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
  Py_DECREF(tmp_mod_expr_right_1);
  if (tmp_raise_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_4;
  }
  exception_type = tmp_raise_type_1;
  Py_INCREF(tmp_raise_type_1);
  exception_value = tmp_raise_value_1;
  exception_lineno = 45;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_4;
 }
 branch_no_3:;
 goto branch_end_2;
 branch_no_2:;
 {
  PyObject *tmp_assign_source_26;
  tmp_assign_source_26 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_26;
 }
 branch_end_2:;
 {
  PyObject *tmp_assign_source_27;
  {
   PyObject *tmp_set_locals_1;
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_set_locals_1 = tmp_class_creation_1__prepared;
   locals_aiohttp$client_exceptions$$$class__1_ClientError_45 = tmp_set_locals_1;
   Py_INCREF(tmp_set_locals_1);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__1_ClientError_45, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_6;
  }
  tmp_dictset_value = mod_consts[82];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__1_ClientError_45, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_6;
  }
  tmp_dictset_value = mod_consts[76];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__1_ClientError_45, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_6;
  }
  {
   nuitka_bool tmp_condition_result_5;
   PyObject *tmp_cmp_expr_left_2;
   PyObject *tmp_cmp_expr_right_2;
   CHECK_OBJECT(tmp_class_creation_1__bases);
   tmp_cmp_expr_left_2 = tmp_class_creation_1__bases;
   tmp_cmp_expr_right_2 = mod_consts[74];
   tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
   if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 45;

       goto try_except_handler_6;
   }
   if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
       goto branch_yes_4;
   } else {
       goto branch_no_4;
   }
  }
  branch_yes_4:;
  tmp_dictset_value = mod_consts[74];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__1_ClientError_45, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto try_except_handler_6;
  }
  branch_no_4:;
  {
   PyObject *tmp_assign_source_28;
   PyObject *tmp_called_value_2;
   PyObject *tmp_args_value_2;
   PyObject *tmp_tuple_element_3;
   PyObject *tmp_kwargs_value_2;
   CHECK_OBJECT(tmp_class_creation_1__metaclass);
   tmp_called_value_2 = tmp_class_creation_1__metaclass;
   tmp_tuple_element_3 = mod_consts[76];
   tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
   CHECK_OBJECT(tmp_class_creation_1__bases);
   tmp_tuple_element_3 = tmp_class_creation_1__bases;
   PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
   tmp_tuple_element_3 = locals_aiohttp$client_exceptions$$$class__1_ClientError_45;
   PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
   CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
   tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 45;
   tmp_assign_source_28 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
   Py_DECREF(tmp_args_value_2);
   if (tmp_assign_source_28 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 45;

       goto try_except_handler_6;
   }
   assert(outline_0_var___class__ == NULL);
   outline_0_var___class__ = tmp_assign_source_28;
  }
  CHECK_OBJECT(outline_0_var___class__);
  tmp_assign_source_27 = outline_0_var___class__;
  Py_INCREF(tmp_assign_source_27);
  goto try_return_handler_6;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_6:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__1_ClientError_45);
  locals_aiohttp$client_exceptions$$$class__1_ClientError_45 = NULL;
  goto try_return_handler_5;
  // Exception handler code:
  try_except_handler_6:;
  exception_keeper_type_4 = exception_type;
  exception_keeper_value_4 = exception_value;
  exception_keeper_tb_4 = exception_tb;
  exception_keeper_lineno_4 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__1_ClientError_45);
  locals_aiohttp$client_exceptions$$$class__1_ClientError_45 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_4;
  exception_value = exception_keeper_value_4;
  exception_tb = exception_keeper_tb_4;
  exception_lineno = exception_keeper_lineno_4;

  goto try_except_handler_5;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_5:;
  CHECK_OBJECT(outline_0_var___class__);
  Py_DECREF(outline_0_var___class__);
  outline_0_var___class__ = NULL;
  goto outline_result_1;
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

  // Re-raise.
  exception_type = exception_keeper_type_5;
  exception_value = exception_keeper_value_5;
  exception_tb = exception_keeper_tb_5;
  exception_lineno = exception_keeper_lineno_5;

  goto outline_exception_1;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_1:;
  exception_lineno = 45;
  goto try_except_handler_4;
  outline_result_1:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_27);
 }
 goto try_end_4;
 // Exception handler code:
 try_except_handler_4:;
 exception_keeper_type_6 = exception_type;
 exception_keeper_value_6 = exception_value;
 exception_keeper_tb_6 = exception_tb;
 exception_keeper_lineno_6 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_1__bases);
 tmp_class_creation_1__bases = NULL;
 Py_XDECREF(tmp_class_creation_1__class_decl_dict);
 tmp_class_creation_1__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_1__metaclass);
 tmp_class_creation_1__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_1__prepared);
 tmp_class_creation_1__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_6;
 exception_value = exception_keeper_value_6;
 exception_tb = exception_keeper_tb_6;
 exception_lineno = exception_keeper_lineno_6;

 goto frame_exception_exit_1;
 // End of try:
 try_end_4:;
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
 // Tried code:
 {
  PyObject *tmp_assign_source_29;
  PyObject *tmp_tuple_element_4;
  tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_tuple_element_4 == NULL)) {
      tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_tuple_element_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  tmp_assign_source_29 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_29, 0, tmp_tuple_element_4);
  assert(tmp_class_creation_2__bases_orig == NULL);
  tmp_class_creation_2__bases_orig = tmp_assign_source_29;
 }
 {
  PyObject *tmp_assign_source_30;
  PyObject *tmp_dircall_arg1_2;
  CHECK_OBJECT(tmp_class_creation_2__bases_orig);
  tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
  Py_INCREF(tmp_dircall_arg1_2);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
      tmp_assign_source_30 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  assert(tmp_class_creation_2__bases == NULL);
  tmp_class_creation_2__bases = tmp_assign_source_30;
 }
 {
  PyObject *tmp_assign_source_31;
  tmp_assign_source_31 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_2__class_decl_dict == NULL);
  tmp_class_creation_2__class_decl_dict = tmp_assign_source_31;
 }
 {
  PyObject *tmp_assign_source_32;
  PyObject *tmp_metaclass_value_2;
  nuitka_bool tmp_condition_result_6;
  int tmp_truth_name_2;
  PyObject *tmp_type_arg_3;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_subscript_value_2;
  PyObject *tmp_bases_value_2;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
  if (tmp_truth_name_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_2;
  } else {
      goto condexpr_false_2;
  }
  condexpr_true_2:;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_expression_value_8 = tmp_class_creation_2__bases;
  tmp_subscript_value_2 = mod_consts[8];
  tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_8, tmp_subscript_value_2, 0);
  if (tmp_type_arg_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
  Py_DECREF(tmp_type_arg_3);
  if (tmp_metaclass_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  goto condexpr_end_2;
  condexpr_false_2:;
  tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_2);
  condexpr_end_2:;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_bases_value_2 = tmp_class_creation_2__bases;
  tmp_assign_source_32 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
  Py_DECREF(tmp_metaclass_value_2);
  if (tmp_assign_source_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  assert(tmp_class_creation_2__metaclass == NULL);
  tmp_class_creation_2__metaclass = tmp_assign_source_32;
 }
 {
  bool tmp_condition_result_7;
  PyObject *tmp_expression_value_9;
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_9 = tmp_class_creation_2__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_9, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  tmp_condition_result_7 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_7 != false) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 {
  PyObject *tmp_assign_source_33;
  PyObject *tmp_called_value_3;
  PyObject *tmp_expression_value_10;
  PyObject *tmp_args_value_3;
  PyObject *tmp_tuple_element_5;
  PyObject *tmp_kwargs_value_3;
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_10 = tmp_class_creation_2__metaclass;
  tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[75]);
  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  tmp_tuple_element_5 = mod_consts[85];
  tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_tuple_element_5 = tmp_class_creation_2__bases;
  PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
  CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
  tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 49;
  tmp_assign_source_33 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
  Py_DECREF(tmp_called_value_3);
  Py_DECREF(tmp_args_value_3);
  if (tmp_assign_source_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  assert(tmp_class_creation_2__prepared == NULL);
  tmp_class_creation_2__prepared = tmp_assign_source_33;
 }
 {
  bool tmp_condition_result_8;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_expression_value_11;
  CHECK_OBJECT(tmp_class_creation_2__prepared);
  tmp_expression_value_11 = tmp_class_creation_2__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_11, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  assert(!(tmp_res == -1));
  tmp_condition_result_8 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_8 != false) {
      goto branch_yes_6;
  } else {
      goto branch_no_6;
  }
 }
 branch_yes_6:;
 {
  PyObject *tmp_raise_type_2;
  PyObject *tmp_raise_value_2;
  PyObject *tmp_mod_expr_left_2;
  PyObject *tmp_mod_expr_right_2;
  PyObject *tmp_tuple_element_6;
  PyObject *tmp_expression_value_12;
  PyObject *tmp_name_value_7;
  PyObject *tmp_default_value_2;
  tmp_raise_type_2 = PyExc_TypeError;
  tmp_mod_expr_left_2 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_12 = tmp_class_creation_2__metaclass;
  tmp_name_value_7 = mod_consts[20];
  tmp_default_value_2 = mod_consts[79];
  tmp_tuple_element_6 = BUILTIN_GETATTR(tstate, tmp_expression_value_12, tmp_name_value_7, tmp_default_value_2);
  if (tmp_tuple_element_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_13;
   PyObject *tmp_type_arg_4;
   PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
   CHECK_OBJECT(tmp_class_creation_2__prepared);
   tmp_type_arg_4 = tmp_class_creation_2__prepared;
   tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_4);
   assert(!(tmp_expression_value_13 == NULL));
   tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[20]);
   Py_DECREF(tmp_expression_value_13);
   if (tmp_tuple_element_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 49;

       goto tuple_build_exception_2;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
  }
  goto tuple_build_noexception_2;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_2:;
  Py_DECREF(tmp_mod_expr_right_2);
  goto try_except_handler_7;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_2:;
  tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
  Py_DECREF(tmp_mod_expr_right_2);
  if (tmp_raise_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_7;
  }
  exception_type = tmp_raise_type_2;
  Py_INCREF(tmp_raise_type_2);
  exception_value = tmp_raise_value_2;
  exception_lineno = 49;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_7;
 }
 branch_no_6:;
 goto branch_end_5;
 branch_no_5:;
 {
  PyObject *tmp_assign_source_34;
  tmp_assign_source_34 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_2__prepared == NULL);
  tmp_class_creation_2__prepared = tmp_assign_source_34;
 }
 branch_end_5:;
 {
  PyObject *tmp_assign_source_35;
  {
   PyObject *tmp_set_locals_2;
   CHECK_OBJECT(tmp_class_creation_2__prepared);
   tmp_set_locals_2 = tmp_class_creation_2__prepared;
   locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49 = tmp_set_locals_2;
   Py_INCREF(tmp_set_locals_2);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_9;
  }
  tmp_dictset_value = mod_consts[86];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_9;
  }
  tmp_dictset_value = mod_consts[85];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_9;
  }
  frame_aa1543f9ab4208dc838a222a9a018a05_2 = MAKE_CLASS_FRAME(tstate, codeobj_aa1543f9ab4208dc838a222a9a018a05, module_aiohttp$client_exceptions, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_aa1543f9ab4208dc838a222a9a018a05_2);
  assert(Py_REFCNT(frame_aa1543f9ab4208dc838a222a9a018a05_2) == 2);

  // Framed code:
  {
   PyObject *tmp_kw_defaults_1;
   PyObject *tmp_annotations_1;
   PyObject *tmp_dict_key_1;
   PyObject *tmp_dict_value_1;
   tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts[87]);
   tmp_dict_key_1 = mod_consts[0];
   tmp_dict_value_1 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[69]);

   if (tmp_dict_value_1 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[69]);

     if (unlikely(tmp_dict_value_1 == NULL)) {
         tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
     }

     if (tmp_dict_value_1 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_kw_defaults_1);

      exception_lineno = 61;
      type_description_2 = "o";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_dict_value_1);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_1 = _PyDict_NewPresized( 7 );
   {
    PyObject *tmp_expression_value_14;
    PyObject *tmp_subscript_value_3;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_expression_value_15;
    PyObject *tmp_subscript_value_4;
    PyObject *tmp_expression_value_16;
    PyObject *tmp_subscript_value_5;
    PyObject *tmp_expression_value_17;
    PyObject *tmp_subscript_value_6;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[11];
    tmp_expression_value_14 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[59]);

    if (tmp_expression_value_14 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[59]);

      if (unlikely(tmp_expression_value_14 == NULL)) {
          tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
      }

      if (tmp_expression_value_14 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 62;
       type_description_2 = "o";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_expression_value_14);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_tuple_element_7 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[70]);

    if (tmp_tuple_element_7 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[70]);

      if (unlikely(tmp_tuple_element_7 == NULL)) {
          tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
      }

      if (tmp_tuple_element_7 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_14);

       exception_lineno = 62;
       type_description_2 = "o";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_tuple_element_7);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
    PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_7);
    tmp_tuple_element_7 = Py_Ellipsis;
    PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_7);
    tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_3);
    Py_DECREF(tmp_expression_value_14);
    Py_DECREF(tmp_subscript_value_3);
    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 62;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[88];
    tmp_expression_value_15 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[58]);

    if (tmp_expression_value_15 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[58]);

      if (unlikely(tmp_expression_value_15 == NULL)) {
          tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
      }

      if (tmp_expression_value_15 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 64;
       type_description_2 = "o";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_expression_value_15);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_subscript_value_4 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[89]);

    if (tmp_subscript_value_4 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_4 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_subscript_value_4);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_4);
    Py_DECREF(tmp_expression_value_15);
    Py_DECREF(tmp_subscript_value_4);
    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 64;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[7];
    tmp_expression_value_16 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[58]);

    if (tmp_expression_value_16 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[58]);

      if (unlikely(tmp_expression_value_16 == NULL)) {
          tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
      }

      if (tmp_expression_value_16 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 65;
       type_description_2 = "o";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_expression_value_16);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_subscript_value_5 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[89]);

    if (tmp_subscript_value_5 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_5 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_subscript_value_5);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_5);
    Py_DECREF(tmp_expression_value_16);
    Py_DECREF(tmp_subscript_value_5);
    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 65;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[9];
    tmp_dict_value_1 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[90]);

    if (tmp_dict_value_1 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            Py_INCREF(tmp_dict_value_1);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[10];
    tmp_expression_value_17 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[58]);

    if (tmp_expression_value_17 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[58]);

      if (unlikely(tmp_expression_value_17 == NULL)) {
          tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
      }

      if (tmp_expression_value_17 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 67;
       type_description_2 = "o";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_expression_value_17);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_subscript_value_6 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[67]);

    if (tmp_subscript_value_6 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[67]);

      if (unlikely(tmp_subscript_value_6 == NULL)) {
          tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
      }

      if (tmp_subscript_value_6 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_17);

       exception_lineno = 67;
       type_description_2 = "o";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_subscript_value_6);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_6);
    Py_DECREF(tmp_expression_value_17);
    Py_DECREF(tmp_subscript_value_6);
    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 67;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[91];
    tmp_dict_value_1 = Py_None;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_1;
   // Exception handling pass through code for dict_build:
   dict_build_exception_1:;
   Py_DECREF(tmp_kw_defaults_1);
   Py_DECREF(tmp_annotations_1);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_1:;


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__1___init__(tmp_kw_defaults_1, tmp_annotations_1);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[27], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 59;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_2;
   PyObject *tmp_dict_key_2;
   PyObject *tmp_dict_value_2;
   tmp_dict_key_2 = mod_consts[91];
   tmp_dict_value_2 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[90]);

   if (tmp_dict_value_2 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_2);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_2 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
   Py_DECREF(tmp_dict_value_2);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__2___str__(tmp_annotations_2);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[93], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 92;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_3;
   PyObject *tmp_dict_key_3;
   PyObject *tmp_dict_value_3;
   tmp_dict_key_3 = mod_consts[91];
   tmp_dict_value_3 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[90]);

   if (tmp_dict_value_3 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_3 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_3);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_3 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
   Py_DECREF(tmp_dict_value_3);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__3___repr__(tmp_annotations_3);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[95], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 99;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   nuitka_bool tmp_condition_result_9;
   PyObject *tmp_called_value_4;
   PyObject *tmp_args_element_value_1;
   PyObject *tmp_annotations_4;
   PyObject *tmp_dict_key_4;
   PyObject *tmp_dict_value_4;
   PyObject *tmp_called_value_5;
   PyObject *tmp_args_element_value_2;
   PyObject *tmp_annotations_5;
   PyObject *tmp_dict_key_5;
   PyObject *tmp_dict_value_5;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[97]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 109;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_3;
   } else {
       goto condexpr_false_3;
   }
   condexpr_true_3:;
   tmp_called_value_4 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[97]);

   if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[97], &exception_type, &exception_value);

    exception_lineno = 109;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }

   if (tmp_called_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 109;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_dict_key_4 = mod_consts[91];
   tmp_dict_value_4 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[89]);

   if (tmp_dict_value_4 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_4 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_dict_value_4);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_4 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
   Py_DECREF(tmp_dict_value_4);
   assert(!(tmp_res != 0));


   tmp_args_element_value_1 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__4_code(tmp_annotations_4);

   frame_aa1543f9ab4208dc838a222a9a018a05_2->m_frame.f_lineno = 109;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_1);
   Py_DECREF(tmp_called_value_4);
   Py_DECREF(tmp_args_element_value_1);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 109;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   goto condexpr_end_3;
   condexpr_false_3:;
   tmp_called_value_5 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_5 = mod_consts[91];
   tmp_dict_value_5 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[89]);

   if (tmp_dict_value_5 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_5 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_dict_value_5);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_5 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
   Py_DECREF(tmp_dict_value_5);
   assert(!(tmp_res != 0));


   tmp_args_element_value_2 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__4_code(tmp_annotations_5);

   frame_aa1543f9ab4208dc838a222a9a018a05_2->m_frame.f_lineno = 109;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
   Py_DECREF(tmp_args_element_value_2);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 109;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   condexpr_end_3:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[88], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 110;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_called_value_6;
   PyObject *tmp_expression_value_18;
   PyObject *tmp_args_element_value_3;
   PyObject *tmp_annotations_6;
   PyObject *tmp_dict_key_6;
   PyObject *tmp_dict_value_6;
   tmp_expression_value_18 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[88]);

   if (unlikely(tmp_expression_value_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[88], &exception_type, &exception_value);

    exception_lineno = 118;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }

   if (tmp_expression_value_18 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 118;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[99]);
   Py_DECREF(tmp_expression_value_18);
   if (tmp_called_value_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 118;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_dict_key_6 = mod_consts[100];
   tmp_dict_value_6 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[89]);

   if (tmp_dict_value_6 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_6 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_dict_value_6);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_6 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
   Py_DECREF(tmp_dict_value_6);
   assert(!(tmp_res != 0));
   tmp_dict_key_6 = mod_consts[91];
   tmp_dict_value_6 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
   assert(!(tmp_res != 0));


   tmp_args_element_value_3 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__5_code(tmp_annotations_6);

   frame_aa1543f9ab4208dc838a222a9a018a05_2->m_frame.f_lineno = 118;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
   Py_DECREF(tmp_called_value_6);
   Py_DECREF(tmp_args_element_value_3);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 118;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[88], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 119;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_1;
  frame_exception_exit_2:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_aa1543f9ab4208dc838a222a9a018a05_2, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_aa1543f9ab4208dc838a222a9a018a05_2->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_aa1543f9ab4208dc838a222a9a018a05_2, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_aa1543f9ab4208dc838a222a9a018a05_2,
      type_description_2,
      outline_1_var___class__
  );



  assertFrameObject(frame_aa1543f9ab4208dc838a222a9a018a05_2);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_1;
  frame_no_exception_1:;
  goto skip_nested_handling_1;
  nested_frame_exit_1:;

  goto try_except_handler_9;
  skip_nested_handling_1:;
  {
   nuitka_bool tmp_condition_result_10;
   PyObject *tmp_cmp_expr_left_3;
   PyObject *tmp_cmp_expr_right_3;
   CHECK_OBJECT(tmp_class_creation_2__bases);
   tmp_cmp_expr_left_3 = tmp_class_creation_2__bases;
   CHECK_OBJECT(tmp_class_creation_2__bases_orig);
   tmp_cmp_expr_right_3 = tmp_class_creation_2__bases_orig;
   tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
   if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 49;

       goto try_except_handler_9;
   }
   if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
       goto branch_yes_7;
   } else {
       goto branch_no_7;
   }
  }
  branch_yes_7:;
  CHECK_OBJECT(tmp_class_creation_2__bases_orig);
  tmp_dictset_value = tmp_class_creation_2__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto try_except_handler_9;
  }
  branch_no_7:;
  {
   PyObject *tmp_assign_source_36;
   PyObject *tmp_called_value_7;
   PyObject *tmp_args_value_4;
   PyObject *tmp_tuple_element_8;
   PyObject *tmp_kwargs_value_4;
   CHECK_OBJECT(tmp_class_creation_2__metaclass);
   tmp_called_value_7 = tmp_class_creation_2__metaclass;
   tmp_tuple_element_8 = mod_consts[85];
   tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
   CHECK_OBJECT(tmp_class_creation_2__bases);
   tmp_tuple_element_8 = tmp_class_creation_2__bases;
   PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
   tmp_tuple_element_8 = locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49;
   PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_8);
   CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
   tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 49;
   tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_4, tmp_kwargs_value_4);
   Py_DECREF(tmp_args_value_4);
   if (tmp_assign_source_36 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 49;

       goto try_except_handler_9;
   }
   assert(outline_1_var___class__ == NULL);
   outline_1_var___class__ = tmp_assign_source_36;
  }
  CHECK_OBJECT(outline_1_var___class__);
  tmp_assign_source_35 = outline_1_var___class__;
  Py_INCREF(tmp_assign_source_35);
  goto try_return_handler_9;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_9:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49);
  locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49 = NULL;
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

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49);
  locals_aiohttp$client_exceptions$$$class__2_ClientResponseError_49 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_7;
  exception_value = exception_keeper_value_7;
  exception_tb = exception_keeper_tb_7;
  exception_lineno = exception_keeper_lineno_7;

  goto try_except_handler_8;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_8:;
  CHECK_OBJECT(outline_1_var___class__);
  Py_DECREF(outline_1_var___class__);
  outline_1_var___class__ = NULL;
  goto outline_result_2;
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

  // Re-raise.
  exception_type = exception_keeper_type_8;
  exception_value = exception_keeper_value_8;
  exception_tb = exception_keeper_tb_8;
  exception_lineno = exception_keeper_lineno_8;

  goto outline_exception_2;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_2:;
  exception_lineno = 49;
  goto try_except_handler_7;
  outline_result_2:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_35);
 }
 goto try_end_5;
 // Exception handler code:
 try_except_handler_7:;
 exception_keeper_type_9 = exception_type;
 exception_keeper_value_9 = exception_value;
 exception_keeper_tb_9 = exception_tb;
 exception_keeper_lineno_9 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_2__bases_orig);
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
 exception_type = exception_keeper_type_9;
 exception_value = exception_keeper_value_9;
 exception_tb = exception_keeper_tb_9;
 exception_lineno = exception_keeper_lineno_9;

 goto frame_exception_exit_1;
 // End of try:
 try_end_5:;
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
  PyObject *tmp_assign_source_37;
  PyObject *tmp_tuple_element_9;
  tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[85]);

  if (unlikely(tmp_tuple_element_9 == NULL)) {
      tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
  }

  if (tmp_tuple_element_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  tmp_assign_source_37 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_37, 0, tmp_tuple_element_9);
  assert(tmp_class_creation_3__bases_orig == NULL);
  tmp_class_creation_3__bases_orig = tmp_assign_source_37;
 }
 {
  PyObject *tmp_assign_source_38;
  PyObject *tmp_dircall_arg1_3;
  CHECK_OBJECT(tmp_class_creation_3__bases_orig);
  tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
  Py_INCREF(tmp_dircall_arg1_3);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
      tmp_assign_source_38 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  assert(tmp_class_creation_3__bases == NULL);
  tmp_class_creation_3__bases = tmp_assign_source_38;
 }
 {
  PyObject *tmp_assign_source_39;
  tmp_assign_source_39 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_3__class_decl_dict == NULL);
  tmp_class_creation_3__class_decl_dict = tmp_assign_source_39;
 }
 {
  PyObject *tmp_assign_source_40;
  PyObject *tmp_metaclass_value_3;
  nuitka_bool tmp_condition_result_11;
  int tmp_truth_name_3;
  PyObject *tmp_type_arg_5;
  PyObject *tmp_expression_value_19;
  PyObject *tmp_subscript_value_7;
  PyObject *tmp_bases_value_3;
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
  if (tmp_truth_name_3 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  tmp_condition_result_11 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_4;
  } else {
      goto condexpr_false_4;
  }
  condexpr_true_4:;
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_expression_value_19 = tmp_class_creation_3__bases;
  tmp_subscript_value_7 = mod_consts[8];
  tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_7, 0);
  if (tmp_type_arg_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
  Py_DECREF(tmp_type_arg_5);
  if (tmp_metaclass_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  goto condexpr_end_4;
  condexpr_false_4:;
  tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_3);
  condexpr_end_4:;
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_bases_value_3 = tmp_class_creation_3__bases;
  tmp_assign_source_40 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
  Py_DECREF(tmp_metaclass_value_3);
  if (tmp_assign_source_40 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  assert(tmp_class_creation_3__metaclass == NULL);
  tmp_class_creation_3__metaclass = tmp_assign_source_40;
 }
 {
  bool tmp_condition_result_12;
  PyObject *tmp_expression_value_20;
  CHECK_OBJECT(tmp_class_creation_3__metaclass);
  tmp_expression_value_20 = tmp_class_creation_3__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  tmp_condition_result_12 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_12 != false) {
      goto branch_yes_8;
  } else {
      goto branch_no_8;
  }
 }
 branch_yes_8:;
 {
  PyObject *tmp_assign_source_41;
  PyObject *tmp_called_value_8;
  PyObject *tmp_expression_value_21;
  PyObject *tmp_args_value_5;
  PyObject *tmp_tuple_element_10;
  PyObject *tmp_kwargs_value_5;
  CHECK_OBJECT(tmp_class_creation_3__metaclass);
  tmp_expression_value_21 = tmp_class_creation_3__metaclass;
  tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[75]);
  if (tmp_called_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  tmp_tuple_element_10 = mod_consts[101];
  tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_tuple_element_10 = tmp_class_creation_3__bases;
  PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
  CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
  tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 128;
  tmp_assign_source_41 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_5, tmp_kwargs_value_5);
  Py_DECREF(tmp_called_value_8);
  Py_DECREF(tmp_args_value_5);
  if (tmp_assign_source_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  assert(tmp_class_creation_3__prepared == NULL);
  tmp_class_creation_3__prepared = tmp_assign_source_41;
 }
 {
  bool tmp_condition_result_13;
  PyObject *tmp_operand_value_3;
  PyObject *tmp_expression_value_22;
  CHECK_OBJECT(tmp_class_creation_3__prepared);
  tmp_expression_value_22 = tmp_class_creation_3__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
  assert(!(tmp_res == -1));
  tmp_condition_result_13 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_13 != false) {
      goto branch_yes_9;
  } else {
      goto branch_no_9;
  }
 }
 branch_yes_9:;
 {
  PyObject *tmp_raise_type_3;
  PyObject *tmp_raise_value_3;
  PyObject *tmp_mod_expr_left_3;
  PyObject *tmp_mod_expr_right_3;
  PyObject *tmp_tuple_element_11;
  PyObject *tmp_expression_value_23;
  PyObject *tmp_name_value_8;
  PyObject *tmp_default_value_3;
  tmp_raise_type_3 = PyExc_TypeError;
  tmp_mod_expr_left_3 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_3__metaclass);
  tmp_expression_value_23 = tmp_class_creation_3__metaclass;
  tmp_name_value_8 = mod_consts[20];
  tmp_default_value_3 = mod_consts[79];
  tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_8, tmp_default_value_3);
  if (tmp_tuple_element_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_24;
   PyObject *tmp_type_arg_6;
   PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
   CHECK_OBJECT(tmp_class_creation_3__prepared);
   tmp_type_arg_6 = tmp_class_creation_3__prepared;
   tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_6);
   assert(!(tmp_expression_value_24 == NULL));
   tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[20]);
   Py_DECREF(tmp_expression_value_24);
   if (tmp_tuple_element_11 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 128;

       goto tuple_build_exception_3;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
  }
  goto tuple_build_noexception_3;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_3:;
  Py_DECREF(tmp_mod_expr_right_3);
  goto try_except_handler_10;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_3:;
  tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
  Py_DECREF(tmp_mod_expr_right_3);
  if (tmp_raise_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_10;
  }
  exception_type = tmp_raise_type_3;
  Py_INCREF(tmp_raise_type_3);
  exception_value = tmp_raise_value_3;
  exception_lineno = 128;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_10;
 }
 branch_no_9:;
 goto branch_end_8;
 branch_no_8:;
 {
  PyObject *tmp_assign_source_42;
  tmp_assign_source_42 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_3__prepared == NULL);
  tmp_class_creation_3__prepared = tmp_assign_source_42;
 }
 branch_end_8:;
 {
  PyObject *tmp_assign_source_43;
  {
   PyObject *tmp_set_locals_3;
   CHECK_OBJECT(tmp_class_creation_3__prepared);
   tmp_set_locals_3 = tmp_class_creation_3__prepared;
   locals_aiohttp$client_exceptions$$$class__3_ContentTypeError_128 = tmp_set_locals_3;
   Py_INCREF(tmp_set_locals_3);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__3_ContentTypeError_128, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_12;
  }
  tmp_dictset_value = mod_consts[102];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__3_ContentTypeError_128, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_12;
  }
  tmp_dictset_value = mod_consts[101];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__3_ContentTypeError_128, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_12;
  }
  {
   nuitka_bool tmp_condition_result_14;
   PyObject *tmp_cmp_expr_left_4;
   PyObject *tmp_cmp_expr_right_4;
   CHECK_OBJECT(tmp_class_creation_3__bases);
   tmp_cmp_expr_left_4 = tmp_class_creation_3__bases;
   CHECK_OBJECT(tmp_class_creation_3__bases_orig);
   tmp_cmp_expr_right_4 = tmp_class_creation_3__bases_orig;
   tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
   if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 128;

       goto try_except_handler_12;
   }
   if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
       goto branch_yes_10;
   } else {
       goto branch_no_10;
   }
  }
  branch_yes_10:;
  CHECK_OBJECT(tmp_class_creation_3__bases_orig);
  tmp_dictset_value = tmp_class_creation_3__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__3_ContentTypeError_128, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 128;

      goto try_except_handler_12;
  }
  branch_no_10:;
  {
   PyObject *tmp_assign_source_44;
   PyObject *tmp_called_value_9;
   PyObject *tmp_args_value_6;
   PyObject *tmp_tuple_element_12;
   PyObject *tmp_kwargs_value_6;
   CHECK_OBJECT(tmp_class_creation_3__metaclass);
   tmp_called_value_9 = tmp_class_creation_3__metaclass;
   tmp_tuple_element_12 = mod_consts[101];
   tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
   CHECK_OBJECT(tmp_class_creation_3__bases);
   tmp_tuple_element_12 = tmp_class_creation_3__bases;
   PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
   tmp_tuple_element_12 = locals_aiohttp$client_exceptions$$$class__3_ContentTypeError_128;
   PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
   CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
   tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 128;
   tmp_assign_source_44 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_6, tmp_kwargs_value_6);
   Py_DECREF(tmp_args_value_6);
   if (tmp_assign_source_44 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 128;

       goto try_except_handler_12;
   }
   assert(outline_2_var___class__ == NULL);
   outline_2_var___class__ = tmp_assign_source_44;
  }
  CHECK_OBJECT(outline_2_var___class__);
  tmp_assign_source_43 = outline_2_var___class__;
  Py_INCREF(tmp_assign_source_43);
  goto try_return_handler_12;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_12:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__3_ContentTypeError_128);
  locals_aiohttp$client_exceptions$$$class__3_ContentTypeError_128 = NULL;
  goto try_return_handler_11;
  // Exception handler code:
  try_except_handler_12:;
  exception_keeper_type_10 = exception_type;
  exception_keeper_value_10 = exception_value;
  exception_keeper_tb_10 = exception_tb;
  exception_keeper_lineno_10 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__3_ContentTypeError_128);
  locals_aiohttp$client_exceptions$$$class__3_ContentTypeError_128 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_10;
  exception_value = exception_keeper_value_10;
  exception_tb = exception_keeper_tb_10;
  exception_lineno = exception_keeper_lineno_10;

  goto try_except_handler_11;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_11:;
  CHECK_OBJECT(outline_2_var___class__);
  Py_DECREF(outline_2_var___class__);
  outline_2_var___class__ = NULL;
  goto outline_result_3;
  // Exception handler code:
  try_except_handler_11:;
  exception_keeper_type_11 = exception_type;
  exception_keeper_value_11 = exception_value;
  exception_keeper_tb_11 = exception_tb;
  exception_keeper_lineno_11 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_11;
  exception_value = exception_keeper_value_11;
  exception_tb = exception_keeper_tb_11;
  exception_lineno = exception_keeper_lineno_11;

  goto outline_exception_3;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_3:;
  exception_lineno = 128;
  goto try_except_handler_10;
  outline_result_3:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_43);
 }
 goto try_end_6;
 // Exception handler code:
 try_except_handler_10:;
 exception_keeper_type_12 = exception_type;
 exception_keeper_value_12 = exception_value;
 exception_keeper_tb_12 = exception_tb;
 exception_keeper_lineno_12 = exception_lineno;
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
 exception_type = exception_keeper_type_12;
 exception_value = exception_keeper_value_12;
 exception_tb = exception_keeper_tb_12;
 exception_lineno = exception_keeper_lineno_12;

 goto frame_exception_exit_1;
 // End of try:
 try_end_6:;
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
 // Tried code:
 {
  PyObject *tmp_assign_source_45;
  PyObject *tmp_tuple_element_13;
  tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[85]);

  if (unlikely(tmp_tuple_element_13 == NULL)) {
      tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
  }

  if (tmp_tuple_element_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  tmp_assign_source_45 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_45, 0, tmp_tuple_element_13);
  assert(tmp_class_creation_4__bases_orig == NULL);
  tmp_class_creation_4__bases_orig = tmp_assign_source_45;
 }
 {
  PyObject *tmp_assign_source_46;
  PyObject *tmp_dircall_arg1_4;
  CHECK_OBJECT(tmp_class_creation_4__bases_orig);
  tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
  Py_INCREF(tmp_dircall_arg1_4);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
      tmp_assign_source_46 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_46 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  assert(tmp_class_creation_4__bases == NULL);
  tmp_class_creation_4__bases = tmp_assign_source_46;
 }
 {
  PyObject *tmp_assign_source_47;
  tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_4__class_decl_dict == NULL);
  tmp_class_creation_4__class_decl_dict = tmp_assign_source_47;
 }
 {
  PyObject *tmp_assign_source_48;
  PyObject *tmp_metaclass_value_4;
  nuitka_bool tmp_condition_result_15;
  int tmp_truth_name_4;
  PyObject *tmp_type_arg_7;
  PyObject *tmp_expression_value_25;
  PyObject *tmp_subscript_value_8;
  PyObject *tmp_bases_value_4;
  CHECK_OBJECT(tmp_class_creation_4__bases);
  tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
  if (tmp_truth_name_4 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  tmp_condition_result_15 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_5;
  } else {
      goto condexpr_false_5;
  }
  condexpr_true_5:;
  CHECK_OBJECT(tmp_class_creation_4__bases);
  tmp_expression_value_25 = tmp_class_creation_4__bases;
  tmp_subscript_value_8 = mod_consts[8];
  tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_8, 0);
  if (tmp_type_arg_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
  Py_DECREF(tmp_type_arg_7);
  if (tmp_metaclass_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  goto condexpr_end_5;
  condexpr_false_5:;
  tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_4);
  condexpr_end_5:;
  CHECK_OBJECT(tmp_class_creation_4__bases);
  tmp_bases_value_4 = tmp_class_creation_4__bases;
  tmp_assign_source_48 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
  Py_DECREF(tmp_metaclass_value_4);
  if (tmp_assign_source_48 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  assert(tmp_class_creation_4__metaclass == NULL);
  tmp_class_creation_4__metaclass = tmp_assign_source_48;
 }
 {
  bool tmp_condition_result_16;
  PyObject *tmp_expression_value_26;
  CHECK_OBJECT(tmp_class_creation_4__metaclass);
  tmp_expression_value_26 = tmp_class_creation_4__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  tmp_condition_result_16 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_16 != false) {
      goto branch_yes_11;
  } else {
      goto branch_no_11;
  }
 }
 branch_yes_11:;
 {
  PyObject *tmp_assign_source_49;
  PyObject *tmp_called_value_10;
  PyObject *tmp_expression_value_27;
  PyObject *tmp_args_value_7;
  PyObject *tmp_tuple_element_14;
  PyObject *tmp_kwargs_value_7;
  CHECK_OBJECT(tmp_class_creation_4__metaclass);
  tmp_expression_value_27 = tmp_class_creation_4__metaclass;
  tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[75]);
  if (tmp_called_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  tmp_tuple_element_14 = mod_consts[103];
  tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
  CHECK_OBJECT(tmp_class_creation_4__bases);
  tmp_tuple_element_14 = tmp_class_creation_4__bases;
  PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
  CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
  tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 132;
  tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_7, tmp_kwargs_value_7);
  Py_DECREF(tmp_called_value_10);
  Py_DECREF(tmp_args_value_7);
  if (tmp_assign_source_49 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  assert(tmp_class_creation_4__prepared == NULL);
  tmp_class_creation_4__prepared = tmp_assign_source_49;
 }
 {
  bool tmp_condition_result_17;
  PyObject *tmp_operand_value_4;
  PyObject *tmp_expression_value_28;
  CHECK_OBJECT(tmp_class_creation_4__prepared);
  tmp_expression_value_28 = tmp_class_creation_4__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
  assert(!(tmp_res == -1));
  tmp_condition_result_17 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_17 != false) {
      goto branch_yes_12;
  } else {
      goto branch_no_12;
  }
 }
 branch_yes_12:;
 {
  PyObject *tmp_raise_type_4;
  PyObject *tmp_raise_value_4;
  PyObject *tmp_mod_expr_left_4;
  PyObject *tmp_mod_expr_right_4;
  PyObject *tmp_tuple_element_15;
  PyObject *tmp_expression_value_29;
  PyObject *tmp_name_value_9;
  PyObject *tmp_default_value_4;
  tmp_raise_type_4 = PyExc_TypeError;
  tmp_mod_expr_left_4 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_4__metaclass);
  tmp_expression_value_29 = tmp_class_creation_4__metaclass;
  tmp_name_value_9 = mod_consts[20];
  tmp_default_value_4 = mod_consts[79];
  tmp_tuple_element_15 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_9, tmp_default_value_4);
  if (tmp_tuple_element_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_30;
   PyObject *tmp_type_arg_8;
   PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_15);
   CHECK_OBJECT(tmp_class_creation_4__prepared);
   tmp_type_arg_8 = tmp_class_creation_4__prepared;
   tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_8);
   assert(!(tmp_expression_value_30 == NULL));
   tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[20]);
   Py_DECREF(tmp_expression_value_30);
   if (tmp_tuple_element_15 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 132;

       goto tuple_build_exception_4;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_15);
  }
  goto tuple_build_noexception_4;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_4:;
  Py_DECREF(tmp_mod_expr_right_4);
  goto try_except_handler_13;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_4:;
  tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
  Py_DECREF(tmp_mod_expr_right_4);
  if (tmp_raise_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_13;
  }
  exception_type = tmp_raise_type_4;
  Py_INCREF(tmp_raise_type_4);
  exception_value = tmp_raise_value_4;
  exception_lineno = 132;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_13;
 }
 branch_no_12:;
 goto branch_end_11;
 branch_no_11:;
 {
  PyObject *tmp_assign_source_50;
  tmp_assign_source_50 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_4__prepared == NULL);
  tmp_class_creation_4__prepared = tmp_assign_source_50;
 }
 branch_end_11:;
 {
  PyObject *tmp_assign_source_51;
  {
   PyObject *tmp_set_locals_4;
   CHECK_OBJECT(tmp_class_creation_4__prepared);
   tmp_set_locals_4 = tmp_class_creation_4__prepared;
   locals_aiohttp$client_exceptions$$$class__4_WSServerHandshakeError_132 = tmp_set_locals_4;
   Py_INCREF(tmp_set_locals_4);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__4_WSServerHandshakeError_132, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_15;
  }
  tmp_dictset_value = mod_consts[104];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__4_WSServerHandshakeError_132, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_15;
  }
  tmp_dictset_value = mod_consts[103];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__4_WSServerHandshakeError_132, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_15;
  }
  {
   nuitka_bool tmp_condition_result_18;
   PyObject *tmp_cmp_expr_left_5;
   PyObject *tmp_cmp_expr_right_5;
   CHECK_OBJECT(tmp_class_creation_4__bases);
   tmp_cmp_expr_left_5 = tmp_class_creation_4__bases;
   CHECK_OBJECT(tmp_class_creation_4__bases_orig);
   tmp_cmp_expr_right_5 = tmp_class_creation_4__bases_orig;
   tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
   if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 132;

       goto try_except_handler_15;
   }
   if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
       goto branch_yes_13;
   } else {
       goto branch_no_13;
   }
  }
  branch_yes_13:;
  CHECK_OBJECT(tmp_class_creation_4__bases_orig);
  tmp_dictset_value = tmp_class_creation_4__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__4_WSServerHandshakeError_132, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 132;

      goto try_except_handler_15;
  }
  branch_no_13:;
  {
   PyObject *tmp_assign_source_52;
   PyObject *tmp_called_value_11;
   PyObject *tmp_args_value_8;
   PyObject *tmp_tuple_element_16;
   PyObject *tmp_kwargs_value_8;
   CHECK_OBJECT(tmp_class_creation_4__metaclass);
   tmp_called_value_11 = tmp_class_creation_4__metaclass;
   tmp_tuple_element_16 = mod_consts[103];
   tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
   CHECK_OBJECT(tmp_class_creation_4__bases);
   tmp_tuple_element_16 = tmp_class_creation_4__bases;
   PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
   tmp_tuple_element_16 = locals_aiohttp$client_exceptions$$$class__4_WSServerHandshakeError_132;
   PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_16);
   CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
   tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 132;
   tmp_assign_source_52 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_8, tmp_kwargs_value_8);
   Py_DECREF(tmp_args_value_8);
   if (tmp_assign_source_52 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 132;

       goto try_except_handler_15;
   }
   assert(outline_3_var___class__ == NULL);
   outline_3_var___class__ = tmp_assign_source_52;
  }
  CHECK_OBJECT(outline_3_var___class__);
  tmp_assign_source_51 = outline_3_var___class__;
  Py_INCREF(tmp_assign_source_51);
  goto try_return_handler_15;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_15:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__4_WSServerHandshakeError_132);
  locals_aiohttp$client_exceptions$$$class__4_WSServerHandshakeError_132 = NULL;
  goto try_return_handler_14;
  // Exception handler code:
  try_except_handler_15:;
  exception_keeper_type_13 = exception_type;
  exception_keeper_value_13 = exception_value;
  exception_keeper_tb_13 = exception_tb;
  exception_keeper_lineno_13 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__4_WSServerHandshakeError_132);
  locals_aiohttp$client_exceptions$$$class__4_WSServerHandshakeError_132 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_13;
  exception_value = exception_keeper_value_13;
  exception_tb = exception_keeper_tb_13;
  exception_lineno = exception_keeper_lineno_13;

  goto try_except_handler_14;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_14:;
  CHECK_OBJECT(outline_3_var___class__);
  Py_DECREF(outline_3_var___class__);
  outline_3_var___class__ = NULL;
  goto outline_result_4;
  // Exception handler code:
  try_except_handler_14:;
  exception_keeper_type_14 = exception_type;
  exception_keeper_value_14 = exception_value;
  exception_keeper_tb_14 = exception_tb;
  exception_keeper_lineno_14 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_14;
  exception_value = exception_keeper_value_14;
  exception_tb = exception_keeper_tb_14;
  exception_lineno = exception_keeper_lineno_14;

  goto outline_exception_4;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_4:;
  exception_lineno = 132;
  goto try_except_handler_13;
  outline_result_4:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_51);
 }
 goto try_end_7;
 // Exception handler code:
 try_except_handler_13:;
 exception_keeper_type_15 = exception_type;
 exception_keeper_value_15 = exception_value;
 exception_keeper_tb_15 = exception_tb;
 exception_keeper_lineno_15 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_4__bases_orig);
 tmp_class_creation_4__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_4__bases);
 tmp_class_creation_4__bases = NULL;
 Py_XDECREF(tmp_class_creation_4__class_decl_dict);
 tmp_class_creation_4__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_4__metaclass);
 tmp_class_creation_4__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_4__prepared);
 tmp_class_creation_4__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_15;
 exception_value = exception_keeper_value_15;
 exception_tb = exception_keeper_tb_15;
 exception_lineno = exception_keeper_lineno_15;

 goto frame_exception_exit_1;
 // End of try:
 try_end_7:;
 CHECK_OBJECT(tmp_class_creation_4__bases_orig);
 Py_DECREF(tmp_class_creation_4__bases_orig);
 tmp_class_creation_4__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_4__bases);
 Py_DECREF(tmp_class_creation_4__bases);
 tmp_class_creation_4__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
 Py_DECREF(tmp_class_creation_4__class_decl_dict);
 tmp_class_creation_4__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_4__metaclass);
 Py_DECREF(tmp_class_creation_4__metaclass);
 tmp_class_creation_4__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_4__prepared);
 Py_DECREF(tmp_class_creation_4__prepared);
 tmp_class_creation_4__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_53;
  PyObject *tmp_tuple_element_17;
  tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[85]);

  if (unlikely(tmp_tuple_element_17 == NULL)) {
      tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
  }

  if (tmp_tuple_element_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  tmp_assign_source_53 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_53, 0, tmp_tuple_element_17);
  assert(tmp_class_creation_5__bases_orig == NULL);
  tmp_class_creation_5__bases_orig = tmp_assign_source_53;
 }
 {
  PyObject *tmp_assign_source_54;
  PyObject *tmp_dircall_arg1_5;
  CHECK_OBJECT(tmp_class_creation_5__bases_orig);
  tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
  Py_INCREF(tmp_dircall_arg1_5);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
      tmp_assign_source_54 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_54 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  assert(tmp_class_creation_5__bases == NULL);
  tmp_class_creation_5__bases = tmp_assign_source_54;
 }
 {
  PyObject *tmp_assign_source_55;
  tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_5__class_decl_dict == NULL);
  tmp_class_creation_5__class_decl_dict = tmp_assign_source_55;
 }
 {
  PyObject *tmp_assign_source_56;
  PyObject *tmp_metaclass_value_5;
  nuitka_bool tmp_condition_result_19;
  int tmp_truth_name_5;
  PyObject *tmp_type_arg_9;
  PyObject *tmp_expression_value_31;
  PyObject *tmp_subscript_value_9;
  PyObject *tmp_bases_value_5;
  CHECK_OBJECT(tmp_class_creation_5__bases);
  tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
  if (tmp_truth_name_5 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  tmp_condition_result_19 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_6;
  } else {
      goto condexpr_false_6;
  }
  condexpr_true_6:;
  CHECK_OBJECT(tmp_class_creation_5__bases);
  tmp_expression_value_31 = tmp_class_creation_5__bases;
  tmp_subscript_value_9 = mod_consts[8];
  tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_9, 0);
  if (tmp_type_arg_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
  Py_DECREF(tmp_type_arg_9);
  if (tmp_metaclass_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  goto condexpr_end_6;
  condexpr_false_6:;
  tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_5);
  condexpr_end_6:;
  CHECK_OBJECT(tmp_class_creation_5__bases);
  tmp_bases_value_5 = tmp_class_creation_5__bases;
  tmp_assign_source_56 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
  Py_DECREF(tmp_metaclass_value_5);
  if (tmp_assign_source_56 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  assert(tmp_class_creation_5__metaclass == NULL);
  tmp_class_creation_5__metaclass = tmp_assign_source_56;
 }
 {
  bool tmp_condition_result_20;
  PyObject *tmp_expression_value_32;
  CHECK_OBJECT(tmp_class_creation_5__metaclass);
  tmp_expression_value_32 = tmp_class_creation_5__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  tmp_condition_result_20 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_20 != false) {
      goto branch_yes_14;
  } else {
      goto branch_no_14;
  }
 }
 branch_yes_14:;
 {
  PyObject *tmp_assign_source_57;
  PyObject *tmp_called_value_12;
  PyObject *tmp_expression_value_33;
  PyObject *tmp_args_value_9;
  PyObject *tmp_tuple_element_18;
  PyObject *tmp_kwargs_value_9;
  CHECK_OBJECT(tmp_class_creation_5__metaclass);
  tmp_expression_value_33 = tmp_class_creation_5__metaclass;
  tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[75]);
  if (tmp_called_value_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  tmp_tuple_element_18 = mod_consts[105];
  tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
  CHECK_OBJECT(tmp_class_creation_5__bases);
  tmp_tuple_element_18 = tmp_class_creation_5__bases;
  PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
  CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
  tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 136;
  tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_9, tmp_kwargs_value_9);
  Py_DECREF(tmp_called_value_12);
  Py_DECREF(tmp_args_value_9);
  if (tmp_assign_source_57 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  assert(tmp_class_creation_5__prepared == NULL);
  tmp_class_creation_5__prepared = tmp_assign_source_57;
 }
 {
  bool tmp_condition_result_21;
  PyObject *tmp_operand_value_5;
  PyObject *tmp_expression_value_34;
  CHECK_OBJECT(tmp_class_creation_5__prepared);
  tmp_expression_value_34 = tmp_class_creation_5__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
  assert(!(tmp_res == -1));
  tmp_condition_result_21 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_21 != false) {
      goto branch_yes_15;
  } else {
      goto branch_no_15;
  }
 }
 branch_yes_15:;
 {
  PyObject *tmp_raise_type_5;
  PyObject *tmp_raise_value_5;
  PyObject *tmp_mod_expr_left_5;
  PyObject *tmp_mod_expr_right_5;
  PyObject *tmp_tuple_element_19;
  PyObject *tmp_expression_value_35;
  PyObject *tmp_name_value_10;
  PyObject *tmp_default_value_5;
  tmp_raise_type_5 = PyExc_TypeError;
  tmp_mod_expr_left_5 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_5__metaclass);
  tmp_expression_value_35 = tmp_class_creation_5__metaclass;
  tmp_name_value_10 = mod_consts[20];
  tmp_default_value_5 = mod_consts[79];
  tmp_tuple_element_19 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_10, tmp_default_value_5);
  if (tmp_tuple_element_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_36;
   PyObject *tmp_type_arg_10;
   PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_19);
   CHECK_OBJECT(tmp_class_creation_5__prepared);
   tmp_type_arg_10 = tmp_class_creation_5__prepared;
   tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_10);
   assert(!(tmp_expression_value_36 == NULL));
   tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[20]);
   Py_DECREF(tmp_expression_value_36);
   if (tmp_tuple_element_19 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 136;

       goto tuple_build_exception_5;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_19);
  }
  goto tuple_build_noexception_5;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_5:;
  Py_DECREF(tmp_mod_expr_right_5);
  goto try_except_handler_16;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_5:;
  tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
  Py_DECREF(tmp_mod_expr_right_5);
  if (tmp_raise_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_16;
  }
  exception_type = tmp_raise_type_5;
  Py_INCREF(tmp_raise_type_5);
  exception_value = tmp_raise_value_5;
  exception_lineno = 136;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_16;
 }
 branch_no_15:;
 goto branch_end_14;
 branch_no_14:;
 {
  PyObject *tmp_assign_source_58;
  tmp_assign_source_58 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_5__prepared == NULL);
  tmp_class_creation_5__prepared = tmp_assign_source_58;
 }
 branch_end_14:;
 {
  PyObject *tmp_assign_source_59;
  {
   PyObject *tmp_set_locals_5;
   CHECK_OBJECT(tmp_class_creation_5__prepared);
   tmp_set_locals_5 = tmp_class_creation_5__prepared;
   locals_aiohttp$client_exceptions$$$class__5_ClientHttpProxyError_136 = tmp_set_locals_5;
   Py_INCREF(tmp_set_locals_5);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__5_ClientHttpProxyError_136, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_18;
  }
  tmp_dictset_value = mod_consts[106];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__5_ClientHttpProxyError_136, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_18;
  }
  tmp_dictset_value = mod_consts[105];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__5_ClientHttpProxyError_136, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_18;
  }
  {
   nuitka_bool tmp_condition_result_22;
   PyObject *tmp_cmp_expr_left_6;
   PyObject *tmp_cmp_expr_right_6;
   CHECK_OBJECT(tmp_class_creation_5__bases);
   tmp_cmp_expr_left_6 = tmp_class_creation_5__bases;
   CHECK_OBJECT(tmp_class_creation_5__bases_orig);
   tmp_cmp_expr_right_6 = tmp_class_creation_5__bases_orig;
   tmp_condition_result_22 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
   if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 136;

       goto try_except_handler_18;
   }
   if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
       goto branch_yes_16;
   } else {
       goto branch_no_16;
   }
  }
  branch_yes_16:;
  CHECK_OBJECT(tmp_class_creation_5__bases_orig);
  tmp_dictset_value = tmp_class_creation_5__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__5_ClientHttpProxyError_136, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;

      goto try_except_handler_18;
  }
  branch_no_16:;
  {
   PyObject *tmp_assign_source_60;
   PyObject *tmp_called_value_13;
   PyObject *tmp_args_value_10;
   PyObject *tmp_tuple_element_20;
   PyObject *tmp_kwargs_value_10;
   CHECK_OBJECT(tmp_class_creation_5__metaclass);
   tmp_called_value_13 = tmp_class_creation_5__metaclass;
   tmp_tuple_element_20 = mod_consts[105];
   tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
   CHECK_OBJECT(tmp_class_creation_5__bases);
   tmp_tuple_element_20 = tmp_class_creation_5__bases;
   PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
   tmp_tuple_element_20 = locals_aiohttp$client_exceptions$$$class__5_ClientHttpProxyError_136;
   PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_20);
   CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
   tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 136;
   tmp_assign_source_60 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_10, tmp_kwargs_value_10);
   Py_DECREF(tmp_args_value_10);
   if (tmp_assign_source_60 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 136;

       goto try_except_handler_18;
   }
   assert(outline_4_var___class__ == NULL);
   outline_4_var___class__ = tmp_assign_source_60;
  }
  CHECK_OBJECT(outline_4_var___class__);
  tmp_assign_source_59 = outline_4_var___class__;
  Py_INCREF(tmp_assign_source_59);
  goto try_return_handler_18;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_18:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__5_ClientHttpProxyError_136);
  locals_aiohttp$client_exceptions$$$class__5_ClientHttpProxyError_136 = NULL;
  goto try_return_handler_17;
  // Exception handler code:
  try_except_handler_18:;
  exception_keeper_type_16 = exception_type;
  exception_keeper_value_16 = exception_value;
  exception_keeper_tb_16 = exception_tb;
  exception_keeper_lineno_16 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__5_ClientHttpProxyError_136);
  locals_aiohttp$client_exceptions$$$class__5_ClientHttpProxyError_136 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_16;
  exception_value = exception_keeper_value_16;
  exception_tb = exception_keeper_tb_16;
  exception_lineno = exception_keeper_lineno_16;

  goto try_except_handler_17;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_17:;
  CHECK_OBJECT(outline_4_var___class__);
  Py_DECREF(outline_4_var___class__);
  outline_4_var___class__ = NULL;
  goto outline_result_5;
  // Exception handler code:
  try_except_handler_17:;
  exception_keeper_type_17 = exception_type;
  exception_keeper_value_17 = exception_value;
  exception_keeper_tb_17 = exception_tb;
  exception_keeper_lineno_17 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_17;
  exception_value = exception_keeper_value_17;
  exception_tb = exception_keeper_tb_17;
  exception_lineno = exception_keeper_lineno_17;

  goto outline_exception_5;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_5:;
  exception_lineno = 136;
  goto try_except_handler_16;
  outline_result_5:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_59);
 }
 goto try_end_8;
 // Exception handler code:
 try_except_handler_16:;
 exception_keeper_type_18 = exception_type;
 exception_keeper_value_18 = exception_value;
 exception_keeper_tb_18 = exception_tb;
 exception_keeper_lineno_18 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_5__bases_orig);
 tmp_class_creation_5__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_5__bases);
 tmp_class_creation_5__bases = NULL;
 Py_XDECREF(tmp_class_creation_5__class_decl_dict);
 tmp_class_creation_5__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_5__metaclass);
 tmp_class_creation_5__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_5__prepared);
 tmp_class_creation_5__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_18;
 exception_value = exception_keeper_value_18;
 exception_tb = exception_keeper_tb_18;
 exception_lineno = exception_keeper_lineno_18;

 goto frame_exception_exit_1;
 // End of try:
 try_end_8:;
 CHECK_OBJECT(tmp_class_creation_5__bases_orig);
 Py_DECREF(tmp_class_creation_5__bases_orig);
 tmp_class_creation_5__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_5__bases);
 Py_DECREF(tmp_class_creation_5__bases);
 tmp_class_creation_5__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
 Py_DECREF(tmp_class_creation_5__class_decl_dict);
 tmp_class_creation_5__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_5__metaclass);
 Py_DECREF(tmp_class_creation_5__metaclass);
 tmp_class_creation_5__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_5__prepared);
 Py_DECREF(tmp_class_creation_5__prepared);
 tmp_class_creation_5__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_61;
  PyObject *tmp_tuple_element_21;
  tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[85]);

  if (unlikely(tmp_tuple_element_21 == NULL)) {
      tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
  }

  if (tmp_tuple_element_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  tmp_assign_source_61 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_61, 0, tmp_tuple_element_21);
  assert(tmp_class_creation_6__bases_orig == NULL);
  tmp_class_creation_6__bases_orig = tmp_assign_source_61;
 }
 {
  PyObject *tmp_assign_source_62;
  PyObject *tmp_dircall_arg1_6;
  CHECK_OBJECT(tmp_class_creation_6__bases_orig);
  tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
  Py_INCREF(tmp_dircall_arg1_6);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
      tmp_assign_source_62 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_62 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  assert(tmp_class_creation_6__bases == NULL);
  tmp_class_creation_6__bases = tmp_assign_source_62;
 }
 {
  PyObject *tmp_assign_source_63;
  tmp_assign_source_63 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_6__class_decl_dict == NULL);
  tmp_class_creation_6__class_decl_dict = tmp_assign_source_63;
 }
 {
  PyObject *tmp_assign_source_64;
  PyObject *tmp_metaclass_value_6;
  nuitka_bool tmp_condition_result_23;
  int tmp_truth_name_6;
  PyObject *tmp_type_arg_11;
  PyObject *tmp_expression_value_37;
  PyObject *tmp_subscript_value_10;
  PyObject *tmp_bases_value_6;
  CHECK_OBJECT(tmp_class_creation_6__bases);
  tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
  if (tmp_truth_name_6 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  tmp_condition_result_23 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_7;
  } else {
      goto condexpr_false_7;
  }
  condexpr_true_7:;
  CHECK_OBJECT(tmp_class_creation_6__bases);
  tmp_expression_value_37 = tmp_class_creation_6__bases;
  tmp_subscript_value_10 = mod_consts[8];
  tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_37, tmp_subscript_value_10, 0);
  if (tmp_type_arg_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
  Py_DECREF(tmp_type_arg_11);
  if (tmp_metaclass_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  goto condexpr_end_7;
  condexpr_false_7:;
  tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_6);
  condexpr_end_7:;
  CHECK_OBJECT(tmp_class_creation_6__bases);
  tmp_bases_value_6 = tmp_class_creation_6__bases;
  tmp_assign_source_64 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
  Py_DECREF(tmp_metaclass_value_6);
  if (tmp_assign_source_64 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  assert(tmp_class_creation_6__metaclass == NULL);
  tmp_class_creation_6__metaclass = tmp_assign_source_64;
 }
 {
  bool tmp_condition_result_24;
  PyObject *tmp_expression_value_38;
  CHECK_OBJECT(tmp_class_creation_6__metaclass);
  tmp_expression_value_38 = tmp_class_creation_6__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  tmp_condition_result_24 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_24 != false) {
      goto branch_yes_17;
  } else {
      goto branch_no_17;
  }
 }
 branch_yes_17:;
 {
  PyObject *tmp_assign_source_65;
  PyObject *tmp_called_value_14;
  PyObject *tmp_expression_value_39;
  PyObject *tmp_args_value_11;
  PyObject *tmp_tuple_element_22;
  PyObject *tmp_kwargs_value_11;
  CHECK_OBJECT(tmp_class_creation_6__metaclass);
  tmp_expression_value_39 = tmp_class_creation_6__metaclass;
  tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[75]);
  if (tmp_called_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  tmp_tuple_element_22 = mod_consts[107];
  tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
  CHECK_OBJECT(tmp_class_creation_6__bases);
  tmp_tuple_element_22 = tmp_class_creation_6__bases;
  PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
  CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
  tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 145;
  tmp_assign_source_65 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_11, tmp_kwargs_value_11);
  Py_DECREF(tmp_called_value_14);
  Py_DECREF(tmp_args_value_11);
  if (tmp_assign_source_65 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  assert(tmp_class_creation_6__prepared == NULL);
  tmp_class_creation_6__prepared = tmp_assign_source_65;
 }
 {
  bool tmp_condition_result_25;
  PyObject *tmp_operand_value_6;
  PyObject *tmp_expression_value_40;
  CHECK_OBJECT(tmp_class_creation_6__prepared);
  tmp_expression_value_40 = tmp_class_creation_6__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_40, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
  assert(!(tmp_res == -1));
  tmp_condition_result_25 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_25 != false) {
      goto branch_yes_18;
  } else {
      goto branch_no_18;
  }
 }
 branch_yes_18:;
 {
  PyObject *tmp_raise_type_6;
  PyObject *tmp_raise_value_6;
  PyObject *tmp_mod_expr_left_6;
  PyObject *tmp_mod_expr_right_6;
  PyObject *tmp_tuple_element_23;
  PyObject *tmp_expression_value_41;
  PyObject *tmp_name_value_11;
  PyObject *tmp_default_value_6;
  tmp_raise_type_6 = PyExc_TypeError;
  tmp_mod_expr_left_6 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_6__metaclass);
  tmp_expression_value_41 = tmp_class_creation_6__metaclass;
  tmp_name_value_11 = mod_consts[20];
  tmp_default_value_6 = mod_consts[79];
  tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_41, tmp_name_value_11, tmp_default_value_6);
  if (tmp_tuple_element_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_42;
   PyObject *tmp_type_arg_12;
   PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_23);
   CHECK_OBJECT(tmp_class_creation_6__prepared);
   tmp_type_arg_12 = tmp_class_creation_6__prepared;
   tmp_expression_value_42 = BUILTIN_TYPE1(tmp_type_arg_12);
   assert(!(tmp_expression_value_42 == NULL));
   tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[20]);
   Py_DECREF(tmp_expression_value_42);
   if (tmp_tuple_element_23 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 145;

       goto tuple_build_exception_6;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_23);
  }
  goto tuple_build_noexception_6;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_6:;
  Py_DECREF(tmp_mod_expr_right_6);
  goto try_except_handler_19;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_6:;
  tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
  Py_DECREF(tmp_mod_expr_right_6);
  if (tmp_raise_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_19;
  }
  exception_type = tmp_raise_type_6;
  Py_INCREF(tmp_raise_type_6);
  exception_value = tmp_raise_value_6;
  exception_lineno = 145;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_19;
 }
 branch_no_18:;
 goto branch_end_17;
 branch_no_17:;
 {
  PyObject *tmp_assign_source_66;
  tmp_assign_source_66 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_6__prepared == NULL);
  tmp_class_creation_6__prepared = tmp_assign_source_66;
 }
 branch_end_17:;
 {
  PyObject *tmp_assign_source_67;
  {
   PyObject *tmp_set_locals_6;
   CHECK_OBJECT(tmp_class_creation_6__prepared);
   tmp_set_locals_6 = tmp_class_creation_6__prepared;
   locals_aiohttp$client_exceptions$$$class__6_TooManyRedirects_145 = tmp_set_locals_6;
   Py_INCREF(tmp_set_locals_6);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__6_TooManyRedirects_145, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_21;
  }
  tmp_dictset_value = mod_consts[108];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__6_TooManyRedirects_145, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_21;
  }
  tmp_dictset_value = mod_consts[107];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__6_TooManyRedirects_145, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_21;
  }
  {
   nuitka_bool tmp_condition_result_26;
   PyObject *tmp_cmp_expr_left_7;
   PyObject *tmp_cmp_expr_right_7;
   CHECK_OBJECT(tmp_class_creation_6__bases);
   tmp_cmp_expr_left_7 = tmp_class_creation_6__bases;
   CHECK_OBJECT(tmp_class_creation_6__bases_orig);
   tmp_cmp_expr_right_7 = tmp_class_creation_6__bases_orig;
   tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
   if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 145;

       goto try_except_handler_21;
   }
   if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
       goto branch_yes_19;
   } else {
       goto branch_no_19;
   }
  }
  branch_yes_19:;
  CHECK_OBJECT(tmp_class_creation_6__bases_orig);
  tmp_dictset_value = tmp_class_creation_6__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__6_TooManyRedirects_145, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;

      goto try_except_handler_21;
  }
  branch_no_19:;
  {
   PyObject *tmp_assign_source_68;
   PyObject *tmp_called_value_15;
   PyObject *tmp_args_value_12;
   PyObject *tmp_tuple_element_24;
   PyObject *tmp_kwargs_value_12;
   CHECK_OBJECT(tmp_class_creation_6__metaclass);
   tmp_called_value_15 = tmp_class_creation_6__metaclass;
   tmp_tuple_element_24 = mod_consts[107];
   tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_24);
   CHECK_OBJECT(tmp_class_creation_6__bases);
   tmp_tuple_element_24 = tmp_class_creation_6__bases;
   PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_24);
   tmp_tuple_element_24 = locals_aiohttp$client_exceptions$$$class__6_TooManyRedirects_145;
   PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_24);
   CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
   tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 145;
   tmp_assign_source_68 = CALL_FUNCTION(tstate, tmp_called_value_15, tmp_args_value_12, tmp_kwargs_value_12);
   Py_DECREF(tmp_args_value_12);
   if (tmp_assign_source_68 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 145;

       goto try_except_handler_21;
   }
   assert(outline_5_var___class__ == NULL);
   outline_5_var___class__ = tmp_assign_source_68;
  }
  CHECK_OBJECT(outline_5_var___class__);
  tmp_assign_source_67 = outline_5_var___class__;
  Py_INCREF(tmp_assign_source_67);
  goto try_return_handler_21;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_21:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__6_TooManyRedirects_145);
  locals_aiohttp$client_exceptions$$$class__6_TooManyRedirects_145 = NULL;
  goto try_return_handler_20;
  // Exception handler code:
  try_except_handler_21:;
  exception_keeper_type_19 = exception_type;
  exception_keeper_value_19 = exception_value;
  exception_keeper_tb_19 = exception_tb;
  exception_keeper_lineno_19 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__6_TooManyRedirects_145);
  locals_aiohttp$client_exceptions$$$class__6_TooManyRedirects_145 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_19;
  exception_value = exception_keeper_value_19;
  exception_tb = exception_keeper_tb_19;
  exception_lineno = exception_keeper_lineno_19;

  goto try_except_handler_20;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_20:;
  CHECK_OBJECT(outline_5_var___class__);
  Py_DECREF(outline_5_var___class__);
  outline_5_var___class__ = NULL;
  goto outline_result_6;
  // Exception handler code:
  try_except_handler_20:;
  exception_keeper_type_20 = exception_type;
  exception_keeper_value_20 = exception_value;
  exception_keeper_tb_20 = exception_tb;
  exception_keeper_lineno_20 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_20;
  exception_value = exception_keeper_value_20;
  exception_tb = exception_keeper_tb_20;
  exception_lineno = exception_keeper_lineno_20;

  goto outline_exception_6;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_6:;
  exception_lineno = 145;
  goto try_except_handler_19;
  outline_result_6:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_67);
 }
 goto try_end_9;
 // Exception handler code:
 try_except_handler_19:;
 exception_keeper_type_21 = exception_type;
 exception_keeper_value_21 = exception_value;
 exception_keeper_tb_21 = exception_tb;
 exception_keeper_lineno_21 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_6__bases_orig);
 tmp_class_creation_6__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_6__bases);
 tmp_class_creation_6__bases = NULL;
 Py_XDECREF(tmp_class_creation_6__class_decl_dict);
 tmp_class_creation_6__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_6__metaclass);
 tmp_class_creation_6__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_6__prepared);
 tmp_class_creation_6__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_21;
 exception_value = exception_keeper_value_21;
 exception_tb = exception_keeper_tb_21;
 exception_lineno = exception_keeper_lineno_21;

 goto frame_exception_exit_1;
 // End of try:
 try_end_9:;
 CHECK_OBJECT(tmp_class_creation_6__bases_orig);
 Py_DECREF(tmp_class_creation_6__bases_orig);
 tmp_class_creation_6__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_6__bases);
 Py_DECREF(tmp_class_creation_6__bases);
 tmp_class_creation_6__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
 Py_DECREF(tmp_class_creation_6__class_decl_dict);
 tmp_class_creation_6__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_6__metaclass);
 Py_DECREF(tmp_class_creation_6__metaclass);
 tmp_class_creation_6__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_6__prepared);
 Py_DECREF(tmp_class_creation_6__prepared);
 tmp_class_creation_6__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_69;
  PyObject *tmp_tuple_element_25;
  tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_tuple_element_25 == NULL)) {
      tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_tuple_element_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  tmp_assign_source_69 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_69, 0, tmp_tuple_element_25);
  assert(tmp_class_creation_7__bases_orig == NULL);
  tmp_class_creation_7__bases_orig = tmp_assign_source_69;
 }
 {
  PyObject *tmp_assign_source_70;
  PyObject *tmp_dircall_arg1_7;
  CHECK_OBJECT(tmp_class_creation_7__bases_orig);
  tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
  Py_INCREF(tmp_dircall_arg1_7);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
      tmp_assign_source_70 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_70 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  assert(tmp_class_creation_7__bases == NULL);
  tmp_class_creation_7__bases = tmp_assign_source_70;
 }
 {
  PyObject *tmp_assign_source_71;
  tmp_assign_source_71 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_7__class_decl_dict == NULL);
  tmp_class_creation_7__class_decl_dict = tmp_assign_source_71;
 }
 {
  PyObject *tmp_assign_source_72;
  PyObject *tmp_metaclass_value_7;
  nuitka_bool tmp_condition_result_27;
  int tmp_truth_name_7;
  PyObject *tmp_type_arg_13;
  PyObject *tmp_expression_value_43;
  PyObject *tmp_subscript_value_11;
  PyObject *tmp_bases_value_7;
  CHECK_OBJECT(tmp_class_creation_7__bases);
  tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
  if (tmp_truth_name_7 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  tmp_condition_result_27 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_8;
  } else {
      goto condexpr_false_8;
  }
  condexpr_true_8:;
  CHECK_OBJECT(tmp_class_creation_7__bases);
  tmp_expression_value_43 = tmp_class_creation_7__bases;
  tmp_subscript_value_11 = mod_consts[8];
  tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_43, tmp_subscript_value_11, 0);
  if (tmp_type_arg_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
  Py_DECREF(tmp_type_arg_13);
  if (tmp_metaclass_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  goto condexpr_end_8;
  condexpr_false_8:;
  tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_7);
  condexpr_end_8:;
  CHECK_OBJECT(tmp_class_creation_7__bases);
  tmp_bases_value_7 = tmp_class_creation_7__bases;
  tmp_assign_source_72 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
  Py_DECREF(tmp_metaclass_value_7);
  if (tmp_assign_source_72 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  assert(tmp_class_creation_7__metaclass == NULL);
  tmp_class_creation_7__metaclass = tmp_assign_source_72;
 }
 {
  bool tmp_condition_result_28;
  PyObject *tmp_expression_value_44;
  CHECK_OBJECT(tmp_class_creation_7__metaclass);
  tmp_expression_value_44 = tmp_class_creation_7__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_44, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  tmp_condition_result_28 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_28 != false) {
      goto branch_yes_20;
  } else {
      goto branch_no_20;
  }
 }
 branch_yes_20:;
 {
  PyObject *tmp_assign_source_73;
  PyObject *tmp_called_value_16;
  PyObject *tmp_expression_value_45;
  PyObject *tmp_args_value_13;
  PyObject *tmp_tuple_element_26;
  PyObject *tmp_kwargs_value_13;
  CHECK_OBJECT(tmp_class_creation_7__metaclass);
  tmp_expression_value_45 = tmp_class_creation_7__metaclass;
  tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[75]);
  if (tmp_called_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  tmp_tuple_element_26 = mod_consts[109];
  tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_26);
  CHECK_OBJECT(tmp_class_creation_7__bases);
  tmp_tuple_element_26 = tmp_class_creation_7__bases;
  PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_26);
  CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
  tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 149;
  tmp_assign_source_73 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_13, tmp_kwargs_value_13);
  Py_DECREF(tmp_called_value_16);
  Py_DECREF(tmp_args_value_13);
  if (tmp_assign_source_73 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  assert(tmp_class_creation_7__prepared == NULL);
  tmp_class_creation_7__prepared = tmp_assign_source_73;
 }
 {
  bool tmp_condition_result_29;
  PyObject *tmp_operand_value_7;
  PyObject *tmp_expression_value_46;
  CHECK_OBJECT(tmp_class_creation_7__prepared);
  tmp_expression_value_46 = tmp_class_creation_7__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_46, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
  assert(!(tmp_res == -1));
  tmp_condition_result_29 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_29 != false) {
      goto branch_yes_21;
  } else {
      goto branch_no_21;
  }
 }
 branch_yes_21:;
 {
  PyObject *tmp_raise_type_7;
  PyObject *tmp_raise_value_7;
  PyObject *tmp_mod_expr_left_7;
  PyObject *tmp_mod_expr_right_7;
  PyObject *tmp_tuple_element_27;
  PyObject *tmp_expression_value_47;
  PyObject *tmp_name_value_12;
  PyObject *tmp_default_value_7;
  tmp_raise_type_7 = PyExc_TypeError;
  tmp_mod_expr_left_7 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_7__metaclass);
  tmp_expression_value_47 = tmp_class_creation_7__metaclass;
  tmp_name_value_12 = mod_consts[20];
  tmp_default_value_7 = mod_consts[79];
  tmp_tuple_element_27 = BUILTIN_GETATTR(tstate, tmp_expression_value_47, tmp_name_value_12, tmp_default_value_7);
  if (tmp_tuple_element_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_48;
   PyObject *tmp_type_arg_14;
   PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_27);
   CHECK_OBJECT(tmp_class_creation_7__prepared);
   tmp_type_arg_14 = tmp_class_creation_7__prepared;
   tmp_expression_value_48 = BUILTIN_TYPE1(tmp_type_arg_14);
   assert(!(tmp_expression_value_48 == NULL));
   tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[20]);
   Py_DECREF(tmp_expression_value_48);
   if (tmp_tuple_element_27 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 149;

       goto tuple_build_exception_7;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_27);
  }
  goto tuple_build_noexception_7;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_7:;
  Py_DECREF(tmp_mod_expr_right_7);
  goto try_except_handler_22;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_7:;
  tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
  Py_DECREF(tmp_mod_expr_right_7);
  if (tmp_raise_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_22;
  }
  exception_type = tmp_raise_type_7;
  Py_INCREF(tmp_raise_type_7);
  exception_value = tmp_raise_value_7;
  exception_lineno = 149;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_22;
 }
 branch_no_21:;
 goto branch_end_20;
 branch_no_20:;
 {
  PyObject *tmp_assign_source_74;
  tmp_assign_source_74 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_7__prepared == NULL);
  tmp_class_creation_7__prepared = tmp_assign_source_74;
 }
 branch_end_20:;
 {
  PyObject *tmp_assign_source_75;
  {
   PyObject *tmp_set_locals_7;
   CHECK_OBJECT(tmp_class_creation_7__prepared);
   tmp_set_locals_7 = tmp_class_creation_7__prepared;
   locals_aiohttp$client_exceptions$$$class__7_ClientConnectionError_149 = tmp_set_locals_7;
   Py_INCREF(tmp_set_locals_7);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__7_ClientConnectionError_149, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_24;
  }
  tmp_dictset_value = mod_consts[110];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__7_ClientConnectionError_149, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_24;
  }
  tmp_dictset_value = mod_consts[109];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__7_ClientConnectionError_149, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_24;
  }
  {
   nuitka_bool tmp_condition_result_30;
   PyObject *tmp_cmp_expr_left_8;
   PyObject *tmp_cmp_expr_right_8;
   CHECK_OBJECT(tmp_class_creation_7__bases);
   tmp_cmp_expr_left_8 = tmp_class_creation_7__bases;
   CHECK_OBJECT(tmp_class_creation_7__bases_orig);
   tmp_cmp_expr_right_8 = tmp_class_creation_7__bases_orig;
   tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
   if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 149;

       goto try_except_handler_24;
   }
   if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
       goto branch_yes_22;
   } else {
       goto branch_no_22;
   }
  }
  branch_yes_22:;
  CHECK_OBJECT(tmp_class_creation_7__bases_orig);
  tmp_dictset_value = tmp_class_creation_7__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__7_ClientConnectionError_149, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 149;

      goto try_except_handler_24;
  }
  branch_no_22:;
  {
   PyObject *tmp_assign_source_76;
   PyObject *tmp_called_value_17;
   PyObject *tmp_args_value_14;
   PyObject *tmp_tuple_element_28;
   PyObject *tmp_kwargs_value_14;
   CHECK_OBJECT(tmp_class_creation_7__metaclass);
   tmp_called_value_17 = tmp_class_creation_7__metaclass;
   tmp_tuple_element_28 = mod_consts[109];
   tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_28);
   CHECK_OBJECT(tmp_class_creation_7__bases);
   tmp_tuple_element_28 = tmp_class_creation_7__bases;
   PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_28);
   tmp_tuple_element_28 = locals_aiohttp$client_exceptions$$$class__7_ClientConnectionError_149;
   PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_28);
   CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
   tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 149;
   tmp_assign_source_76 = CALL_FUNCTION(tstate, tmp_called_value_17, tmp_args_value_14, tmp_kwargs_value_14);
   Py_DECREF(tmp_args_value_14);
   if (tmp_assign_source_76 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 149;

       goto try_except_handler_24;
   }
   assert(outline_6_var___class__ == NULL);
   outline_6_var___class__ = tmp_assign_source_76;
  }
  CHECK_OBJECT(outline_6_var___class__);
  tmp_assign_source_75 = outline_6_var___class__;
  Py_INCREF(tmp_assign_source_75);
  goto try_return_handler_24;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_24:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__7_ClientConnectionError_149);
  locals_aiohttp$client_exceptions$$$class__7_ClientConnectionError_149 = NULL;
  goto try_return_handler_23;
  // Exception handler code:
  try_except_handler_24:;
  exception_keeper_type_22 = exception_type;
  exception_keeper_value_22 = exception_value;
  exception_keeper_tb_22 = exception_tb;
  exception_keeper_lineno_22 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__7_ClientConnectionError_149);
  locals_aiohttp$client_exceptions$$$class__7_ClientConnectionError_149 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_22;
  exception_value = exception_keeper_value_22;
  exception_tb = exception_keeper_tb_22;
  exception_lineno = exception_keeper_lineno_22;

  goto try_except_handler_23;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_23:;
  CHECK_OBJECT(outline_6_var___class__);
  Py_DECREF(outline_6_var___class__);
  outline_6_var___class__ = NULL;
  goto outline_result_7;
  // Exception handler code:
  try_except_handler_23:;
  exception_keeper_type_23 = exception_type;
  exception_keeper_value_23 = exception_value;
  exception_keeper_tb_23 = exception_tb;
  exception_keeper_lineno_23 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_23;
  exception_value = exception_keeper_value_23;
  exception_tb = exception_keeper_tb_23;
  exception_lineno = exception_keeper_lineno_23;

  goto outline_exception_7;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_7:;
  exception_lineno = 149;
  goto try_except_handler_22;
  outline_result_7:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_75);
 }
 goto try_end_10;
 // Exception handler code:
 try_except_handler_22:;
 exception_keeper_type_24 = exception_type;
 exception_keeper_value_24 = exception_value;
 exception_keeper_tb_24 = exception_tb;
 exception_keeper_lineno_24 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_7__bases_orig);
 tmp_class_creation_7__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_7__bases);
 tmp_class_creation_7__bases = NULL;
 Py_XDECREF(tmp_class_creation_7__class_decl_dict);
 tmp_class_creation_7__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_7__metaclass);
 tmp_class_creation_7__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_7__prepared);
 tmp_class_creation_7__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_24;
 exception_value = exception_keeper_value_24;
 exception_tb = exception_keeper_tb_24;
 exception_lineno = exception_keeper_lineno_24;

 goto frame_exception_exit_1;
 // End of try:
 try_end_10:;
 CHECK_OBJECT(tmp_class_creation_7__bases_orig);
 Py_DECREF(tmp_class_creation_7__bases_orig);
 tmp_class_creation_7__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_7__bases);
 Py_DECREF(tmp_class_creation_7__bases);
 tmp_class_creation_7__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
 Py_DECREF(tmp_class_creation_7__class_decl_dict);
 tmp_class_creation_7__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_7__metaclass);
 Py_DECREF(tmp_class_creation_7__metaclass);
 tmp_class_creation_7__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_7__prepared);
 Py_DECREF(tmp_class_creation_7__prepared);
 tmp_class_creation_7__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_77;
  PyObject *tmp_tuple_element_29;
  tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[109]);

  if (unlikely(tmp_tuple_element_29 == NULL)) {
      tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
  }

  if (tmp_tuple_element_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  tmp_assign_source_77 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_assign_source_77, 0, tmp_tuple_element_29);
  tmp_tuple_element_29 = PyExc_OSError;
  PyTuple_SET_ITEM0(tmp_assign_source_77, 1, tmp_tuple_element_29);
  assert(tmp_class_creation_8__bases_orig == NULL);
  tmp_class_creation_8__bases_orig = tmp_assign_source_77;
 }
 {
  PyObject *tmp_assign_source_78;
  PyObject *tmp_dircall_arg1_8;
  CHECK_OBJECT(tmp_class_creation_8__bases_orig);
  tmp_dircall_arg1_8 = tmp_class_creation_8__bases_orig;
  Py_INCREF(tmp_dircall_arg1_8);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_8};
      tmp_assign_source_78 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_78 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  assert(tmp_class_creation_8__bases == NULL);
  tmp_class_creation_8__bases = tmp_assign_source_78;
 }
 {
  PyObject *tmp_assign_source_79;
  tmp_assign_source_79 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_8__class_decl_dict == NULL);
  tmp_class_creation_8__class_decl_dict = tmp_assign_source_79;
 }
 {
  PyObject *tmp_assign_source_80;
  PyObject *tmp_metaclass_value_8;
  nuitka_bool tmp_condition_result_31;
  int tmp_truth_name_8;
  PyObject *tmp_type_arg_15;
  PyObject *tmp_expression_value_49;
  PyObject *tmp_subscript_value_12;
  PyObject *tmp_bases_value_8;
  CHECK_OBJECT(tmp_class_creation_8__bases);
  tmp_truth_name_8 = CHECK_IF_TRUE(tmp_class_creation_8__bases);
  if (tmp_truth_name_8 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  tmp_condition_result_31 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_9;
  } else {
      goto condexpr_false_9;
  }
  condexpr_true_9:;
  CHECK_OBJECT(tmp_class_creation_8__bases);
  tmp_expression_value_49 = tmp_class_creation_8__bases;
  tmp_subscript_value_12 = mod_consts[8];
  tmp_type_arg_15 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_49, tmp_subscript_value_12, 0);
  if (tmp_type_arg_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  tmp_metaclass_value_8 = BUILTIN_TYPE1(tmp_type_arg_15);
  Py_DECREF(tmp_type_arg_15);
  if (tmp_metaclass_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  goto condexpr_end_9;
  condexpr_false_9:;
  tmp_metaclass_value_8 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_8);
  condexpr_end_9:;
  CHECK_OBJECT(tmp_class_creation_8__bases);
  tmp_bases_value_8 = tmp_class_creation_8__bases;
  tmp_assign_source_80 = SELECT_METACLASS(tstate, tmp_metaclass_value_8, tmp_bases_value_8);
  Py_DECREF(tmp_metaclass_value_8);
  if (tmp_assign_source_80 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  assert(tmp_class_creation_8__metaclass == NULL);
  tmp_class_creation_8__metaclass = tmp_assign_source_80;
 }
 {
  bool tmp_condition_result_32;
  PyObject *tmp_expression_value_50;
  CHECK_OBJECT(tmp_class_creation_8__metaclass);
  tmp_expression_value_50 = tmp_class_creation_8__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_50, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  tmp_condition_result_32 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_32 != false) {
      goto branch_yes_23;
  } else {
      goto branch_no_23;
  }
 }
 branch_yes_23:;
 {
  PyObject *tmp_assign_source_81;
  PyObject *tmp_called_value_18;
  PyObject *tmp_expression_value_51;
  PyObject *tmp_args_value_15;
  PyObject *tmp_tuple_element_30;
  PyObject *tmp_kwargs_value_15;
  CHECK_OBJECT(tmp_class_creation_8__metaclass);
  tmp_expression_value_51 = tmp_class_creation_8__metaclass;
  tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[75]);
  if (tmp_called_value_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  tmp_tuple_element_30 = mod_consts[111];
  tmp_args_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_15, 0, tmp_tuple_element_30);
  CHECK_OBJECT(tmp_class_creation_8__bases);
  tmp_tuple_element_30 = tmp_class_creation_8__bases;
  PyTuple_SET_ITEM0(tmp_args_value_15, 1, tmp_tuple_element_30);
  CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
  tmp_kwargs_value_15 = tmp_class_creation_8__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 153;
  tmp_assign_source_81 = CALL_FUNCTION(tstate, tmp_called_value_18, tmp_args_value_15, tmp_kwargs_value_15);
  Py_DECREF(tmp_called_value_18);
  Py_DECREF(tmp_args_value_15);
  if (tmp_assign_source_81 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  assert(tmp_class_creation_8__prepared == NULL);
  tmp_class_creation_8__prepared = tmp_assign_source_81;
 }
 {
  bool tmp_condition_result_33;
  PyObject *tmp_operand_value_8;
  PyObject *tmp_expression_value_52;
  CHECK_OBJECT(tmp_class_creation_8__prepared);
  tmp_expression_value_52 = tmp_class_creation_8__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_52, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
  assert(!(tmp_res == -1));
  tmp_condition_result_33 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_33 != false) {
      goto branch_yes_24;
  } else {
      goto branch_no_24;
  }
 }
 branch_yes_24:;
 {
  PyObject *tmp_raise_type_8;
  PyObject *tmp_raise_value_8;
  PyObject *tmp_mod_expr_left_8;
  PyObject *tmp_mod_expr_right_8;
  PyObject *tmp_tuple_element_31;
  PyObject *tmp_expression_value_53;
  PyObject *tmp_name_value_13;
  PyObject *tmp_default_value_8;
  tmp_raise_type_8 = PyExc_TypeError;
  tmp_mod_expr_left_8 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_8__metaclass);
  tmp_expression_value_53 = tmp_class_creation_8__metaclass;
  tmp_name_value_13 = mod_consts[20];
  tmp_default_value_8 = mod_consts[79];
  tmp_tuple_element_31 = BUILTIN_GETATTR(tstate, tmp_expression_value_53, tmp_name_value_13, tmp_default_value_8);
  if (tmp_tuple_element_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  tmp_mod_expr_right_8 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_54;
   PyObject *tmp_type_arg_16;
   PyTuple_SET_ITEM(tmp_mod_expr_right_8, 0, tmp_tuple_element_31);
   CHECK_OBJECT(tmp_class_creation_8__prepared);
   tmp_type_arg_16 = tmp_class_creation_8__prepared;
   tmp_expression_value_54 = BUILTIN_TYPE1(tmp_type_arg_16);
   assert(!(tmp_expression_value_54 == NULL));
   tmp_tuple_element_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[20]);
   Py_DECREF(tmp_expression_value_54);
   if (tmp_tuple_element_31 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 153;

       goto tuple_build_exception_8;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_8, 1, tmp_tuple_element_31);
  }
  goto tuple_build_noexception_8;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_8:;
  Py_DECREF(tmp_mod_expr_right_8);
  goto try_except_handler_25;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_8:;
  tmp_raise_value_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
  Py_DECREF(tmp_mod_expr_right_8);
  if (tmp_raise_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_25;
  }
  exception_type = tmp_raise_type_8;
  Py_INCREF(tmp_raise_type_8);
  exception_value = tmp_raise_value_8;
  exception_lineno = 153;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_25;
 }
 branch_no_24:;
 goto branch_end_23;
 branch_no_23:;
 {
  PyObject *tmp_assign_source_82;
  tmp_assign_source_82 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_8__prepared == NULL);
  tmp_class_creation_8__prepared = tmp_assign_source_82;
 }
 branch_end_23:;
 {
  PyObject *tmp_assign_source_83;
  {
   PyObject *tmp_set_locals_8;
   CHECK_OBJECT(tmp_class_creation_8__prepared);
   tmp_set_locals_8 = tmp_class_creation_8__prepared;
   locals_aiohttp$client_exceptions$$$class__8_ClientOSError_153 = tmp_set_locals_8;
   Py_INCREF(tmp_set_locals_8);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__8_ClientOSError_153, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_27;
  }
  tmp_dictset_value = mod_consts[112];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__8_ClientOSError_153, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_27;
  }
  tmp_dictset_value = mod_consts[111];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__8_ClientOSError_153, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_27;
  }
  {
   nuitka_bool tmp_condition_result_34;
   PyObject *tmp_cmp_expr_left_9;
   PyObject *tmp_cmp_expr_right_9;
   CHECK_OBJECT(tmp_class_creation_8__bases);
   tmp_cmp_expr_left_9 = tmp_class_creation_8__bases;
   CHECK_OBJECT(tmp_class_creation_8__bases_orig);
   tmp_cmp_expr_right_9 = tmp_class_creation_8__bases_orig;
   tmp_condition_result_34 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
   if (tmp_condition_result_34 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 153;

       goto try_except_handler_27;
   }
   if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
       goto branch_yes_25;
   } else {
       goto branch_no_25;
   }
  }
  branch_yes_25:;
  CHECK_OBJECT(tmp_class_creation_8__bases_orig);
  tmp_dictset_value = tmp_class_creation_8__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__8_ClientOSError_153, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 153;

      goto try_except_handler_27;
  }
  branch_no_25:;
  {
   PyObject *tmp_assign_source_84;
   PyObject *tmp_called_value_19;
   PyObject *tmp_args_value_16;
   PyObject *tmp_tuple_element_32;
   PyObject *tmp_kwargs_value_16;
   CHECK_OBJECT(tmp_class_creation_8__metaclass);
   tmp_called_value_19 = tmp_class_creation_8__metaclass;
   tmp_tuple_element_32 = mod_consts[111];
   tmp_args_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_16, 0, tmp_tuple_element_32);
   CHECK_OBJECT(tmp_class_creation_8__bases);
   tmp_tuple_element_32 = tmp_class_creation_8__bases;
   PyTuple_SET_ITEM0(tmp_args_value_16, 1, tmp_tuple_element_32);
   tmp_tuple_element_32 = locals_aiohttp$client_exceptions$$$class__8_ClientOSError_153;
   PyTuple_SET_ITEM0(tmp_args_value_16, 2, tmp_tuple_element_32);
   CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
   tmp_kwargs_value_16 = tmp_class_creation_8__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 153;
   tmp_assign_source_84 = CALL_FUNCTION(tstate, tmp_called_value_19, tmp_args_value_16, tmp_kwargs_value_16);
   Py_DECREF(tmp_args_value_16);
   if (tmp_assign_source_84 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 153;

       goto try_except_handler_27;
   }
   assert(outline_7_var___class__ == NULL);
   outline_7_var___class__ = tmp_assign_source_84;
  }
  CHECK_OBJECT(outline_7_var___class__);
  tmp_assign_source_83 = outline_7_var___class__;
  Py_INCREF(tmp_assign_source_83);
  goto try_return_handler_27;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_27:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__8_ClientOSError_153);
  locals_aiohttp$client_exceptions$$$class__8_ClientOSError_153 = NULL;
  goto try_return_handler_26;
  // Exception handler code:
  try_except_handler_27:;
  exception_keeper_type_25 = exception_type;
  exception_keeper_value_25 = exception_value;
  exception_keeper_tb_25 = exception_tb;
  exception_keeper_lineno_25 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__8_ClientOSError_153);
  locals_aiohttp$client_exceptions$$$class__8_ClientOSError_153 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_25;
  exception_value = exception_keeper_value_25;
  exception_tb = exception_keeper_tb_25;
  exception_lineno = exception_keeper_lineno_25;

  goto try_except_handler_26;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_26:;
  CHECK_OBJECT(outline_7_var___class__);
  Py_DECREF(outline_7_var___class__);
  outline_7_var___class__ = NULL;
  goto outline_result_8;
  // Exception handler code:
  try_except_handler_26:;
  exception_keeper_type_26 = exception_type;
  exception_keeper_value_26 = exception_value;
  exception_keeper_tb_26 = exception_tb;
  exception_keeper_lineno_26 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_26;
  exception_value = exception_keeper_value_26;
  exception_tb = exception_keeper_tb_26;
  exception_lineno = exception_keeper_lineno_26;

  goto outline_exception_8;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_8:;
  exception_lineno = 153;
  goto try_except_handler_25;
  outline_result_8:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_83);
 }
 goto try_end_11;
 // Exception handler code:
 try_except_handler_25:;
 exception_keeper_type_27 = exception_type;
 exception_keeper_value_27 = exception_value;
 exception_keeper_tb_27 = exception_tb;
 exception_keeper_lineno_27 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_8__bases_orig);
 tmp_class_creation_8__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_8__bases);
 tmp_class_creation_8__bases = NULL;
 Py_XDECREF(tmp_class_creation_8__class_decl_dict);
 tmp_class_creation_8__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_8__metaclass);
 tmp_class_creation_8__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_8__prepared);
 tmp_class_creation_8__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_27;
 exception_value = exception_keeper_value_27;
 exception_tb = exception_keeper_tb_27;
 exception_lineno = exception_keeper_lineno_27;

 goto frame_exception_exit_1;
 // End of try:
 try_end_11:;
 CHECK_OBJECT(tmp_class_creation_8__bases_orig);
 Py_DECREF(tmp_class_creation_8__bases_orig);
 tmp_class_creation_8__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_8__bases);
 Py_DECREF(tmp_class_creation_8__bases);
 tmp_class_creation_8__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_8__class_decl_dict);
 Py_DECREF(tmp_class_creation_8__class_decl_dict);
 tmp_class_creation_8__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_8__metaclass);
 Py_DECREF(tmp_class_creation_8__metaclass);
 tmp_class_creation_8__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_8__prepared);
 Py_DECREF(tmp_class_creation_8__prepared);
 tmp_class_creation_8__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_85;
  PyObject *tmp_tuple_element_33;
  tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[111]);

  if (unlikely(tmp_tuple_element_33 == NULL)) {
      tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[111]);
  }

  if (tmp_tuple_element_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  tmp_assign_source_85 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_85, 0, tmp_tuple_element_33);
  assert(tmp_class_creation_9__bases_orig == NULL);
  tmp_class_creation_9__bases_orig = tmp_assign_source_85;
 }
 {
  PyObject *tmp_assign_source_86;
  PyObject *tmp_dircall_arg1_9;
  CHECK_OBJECT(tmp_class_creation_9__bases_orig);
  tmp_dircall_arg1_9 = tmp_class_creation_9__bases_orig;
  Py_INCREF(tmp_dircall_arg1_9);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_9};
      tmp_assign_source_86 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_86 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  assert(tmp_class_creation_9__bases == NULL);
  tmp_class_creation_9__bases = tmp_assign_source_86;
 }
 {
  PyObject *tmp_assign_source_87;
  tmp_assign_source_87 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_9__class_decl_dict == NULL);
  tmp_class_creation_9__class_decl_dict = tmp_assign_source_87;
 }
 {
  PyObject *tmp_assign_source_88;
  PyObject *tmp_metaclass_value_9;
  nuitka_bool tmp_condition_result_35;
  int tmp_truth_name_9;
  PyObject *tmp_type_arg_17;
  PyObject *tmp_expression_value_55;
  PyObject *tmp_subscript_value_13;
  PyObject *tmp_bases_value_9;
  CHECK_OBJECT(tmp_class_creation_9__bases);
  tmp_truth_name_9 = CHECK_IF_TRUE(tmp_class_creation_9__bases);
  if (tmp_truth_name_9 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  tmp_condition_result_35 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_10;
  } else {
      goto condexpr_false_10;
  }
  condexpr_true_10:;
  CHECK_OBJECT(tmp_class_creation_9__bases);
  tmp_expression_value_55 = tmp_class_creation_9__bases;
  tmp_subscript_value_13 = mod_consts[8];
  tmp_type_arg_17 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_55, tmp_subscript_value_13, 0);
  if (tmp_type_arg_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  tmp_metaclass_value_9 = BUILTIN_TYPE1(tmp_type_arg_17);
  Py_DECREF(tmp_type_arg_17);
  if (tmp_metaclass_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  goto condexpr_end_10;
  condexpr_false_10:;
  tmp_metaclass_value_9 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_9);
  condexpr_end_10:;
  CHECK_OBJECT(tmp_class_creation_9__bases);
  tmp_bases_value_9 = tmp_class_creation_9__bases;
  tmp_assign_source_88 = SELECT_METACLASS(tstate, tmp_metaclass_value_9, tmp_bases_value_9);
  Py_DECREF(tmp_metaclass_value_9);
  if (tmp_assign_source_88 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  assert(tmp_class_creation_9__metaclass == NULL);
  tmp_class_creation_9__metaclass = tmp_assign_source_88;
 }
 {
  bool tmp_condition_result_36;
  PyObject *tmp_expression_value_56;
  CHECK_OBJECT(tmp_class_creation_9__metaclass);
  tmp_expression_value_56 = tmp_class_creation_9__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  tmp_condition_result_36 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_36 != false) {
      goto branch_yes_26;
  } else {
      goto branch_no_26;
  }
 }
 branch_yes_26:;
 {
  PyObject *tmp_assign_source_89;
  PyObject *tmp_called_value_20;
  PyObject *tmp_expression_value_57;
  PyObject *tmp_args_value_17;
  PyObject *tmp_tuple_element_34;
  PyObject *tmp_kwargs_value_17;
  CHECK_OBJECT(tmp_class_creation_9__metaclass);
  tmp_expression_value_57 = tmp_class_creation_9__metaclass;
  tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[75]);
  if (tmp_called_value_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  tmp_tuple_element_34 = mod_consts[113];
  tmp_args_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_17, 0, tmp_tuple_element_34);
  CHECK_OBJECT(tmp_class_creation_9__bases);
  tmp_tuple_element_34 = tmp_class_creation_9__bases;
  PyTuple_SET_ITEM0(tmp_args_value_17, 1, tmp_tuple_element_34);
  CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
  tmp_kwargs_value_17 = tmp_class_creation_9__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 157;
  tmp_assign_source_89 = CALL_FUNCTION(tstate, tmp_called_value_20, tmp_args_value_17, tmp_kwargs_value_17);
  Py_DECREF(tmp_called_value_20);
  Py_DECREF(tmp_args_value_17);
  if (tmp_assign_source_89 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  assert(tmp_class_creation_9__prepared == NULL);
  tmp_class_creation_9__prepared = tmp_assign_source_89;
 }
 {
  bool tmp_condition_result_37;
  PyObject *tmp_operand_value_9;
  PyObject *tmp_expression_value_58;
  CHECK_OBJECT(tmp_class_creation_9__prepared);
  tmp_expression_value_58 = tmp_class_creation_9__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_58, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  tmp_operand_value_9 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
  assert(!(tmp_res == -1));
  tmp_condition_result_37 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_37 != false) {
      goto branch_yes_27;
  } else {
      goto branch_no_27;
  }
 }
 branch_yes_27:;
 {
  PyObject *tmp_raise_type_9;
  PyObject *tmp_raise_value_9;
  PyObject *tmp_mod_expr_left_9;
  PyObject *tmp_mod_expr_right_9;
  PyObject *tmp_tuple_element_35;
  PyObject *tmp_expression_value_59;
  PyObject *tmp_name_value_14;
  PyObject *tmp_default_value_9;
  tmp_raise_type_9 = PyExc_TypeError;
  tmp_mod_expr_left_9 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_9__metaclass);
  tmp_expression_value_59 = tmp_class_creation_9__metaclass;
  tmp_name_value_14 = mod_consts[20];
  tmp_default_value_9 = mod_consts[79];
  tmp_tuple_element_35 = BUILTIN_GETATTR(tstate, tmp_expression_value_59, tmp_name_value_14, tmp_default_value_9);
  if (tmp_tuple_element_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  tmp_mod_expr_right_9 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_60;
   PyObject *tmp_type_arg_18;
   PyTuple_SET_ITEM(tmp_mod_expr_right_9, 0, tmp_tuple_element_35);
   CHECK_OBJECT(tmp_class_creation_9__prepared);
   tmp_type_arg_18 = tmp_class_creation_9__prepared;
   tmp_expression_value_60 = BUILTIN_TYPE1(tmp_type_arg_18);
   assert(!(tmp_expression_value_60 == NULL));
   tmp_tuple_element_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[20]);
   Py_DECREF(tmp_expression_value_60);
   if (tmp_tuple_element_35 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 157;

       goto tuple_build_exception_9;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_9, 1, tmp_tuple_element_35);
  }
  goto tuple_build_noexception_9;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_9:;
  Py_DECREF(tmp_mod_expr_right_9);
  goto try_except_handler_28;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_9:;
  tmp_raise_value_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
  Py_DECREF(tmp_mod_expr_right_9);
  if (tmp_raise_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_28;
  }
  exception_type = tmp_raise_type_9;
  Py_INCREF(tmp_raise_type_9);
  exception_value = tmp_raise_value_9;
  exception_lineno = 157;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_28;
 }
 branch_no_27:;
 goto branch_end_26;
 branch_no_26:;
 {
  PyObject *tmp_assign_source_90;
  tmp_assign_source_90 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_9__prepared == NULL);
  tmp_class_creation_9__prepared = tmp_assign_source_90;
 }
 branch_end_26:;
 {
  PyObject *tmp_assign_source_91;
  outline_8_var___class__ = Nuitka_Cell_NewEmpty();
  {
   PyObject *tmp_set_locals_9;
   CHECK_OBJECT(tmp_class_creation_9__prepared);
   tmp_set_locals_9 = tmp_class_creation_9__prepared;
   locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157 = tmp_set_locals_9;
   Py_INCREF(tmp_set_locals_9);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_30;
  }
  tmp_dictset_value = mod_consts[114];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_30;
  }
  tmp_dictset_value = mod_consts[113];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_30;
  }
  frame_e7631bd35b34e9e53b20a1304ef7bf39_3 = MAKE_CLASS_FRAME(tstate, codeobj_e7631bd35b34e9e53b20a1304ef7bf39, module_aiohttp$client_exceptions, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_e7631bd35b34e9e53b20a1304ef7bf39_3);
  assert(Py_REFCNT(frame_e7631bd35b34e9e53b20a1304ef7bf39_3) == 2);

  // Framed code:
  {
   PyObject *tmp_annotations_7;
   PyObject *tmp_dict_key_7;
   PyObject *tmp_dict_value_7;
   struct Nuitka_CellObject *tmp_closure_1[1];
   tmp_dict_key_7 = mod_consts[115];
   tmp_dict_value_7 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[71]);

   if (tmp_dict_value_7 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[71]);

     if (unlikely(tmp_dict_value_7 == NULL)) {
         tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
     }

     if (tmp_dict_value_7 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 164;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_dict_value_7);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_7 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
   Py_DECREF(tmp_dict_value_7);
   assert(!(tmp_res != 0));
   tmp_dict_key_7 = mod_consts[116];
   tmp_dict_value_7 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[117]);

   if (tmp_dict_value_7 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_7 = PyExc_OSError;
           Py_INCREF(tmp_dict_value_7);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
   Py_DECREF(tmp_dict_value_7);
   assert(!(tmp_res != 0));
   tmp_dict_key_7 = mod_consts[91];
   tmp_dict_value_7 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
   assert(!(tmp_res != 0));

   tmp_closure_1[0] = outline_8_var___class__;
   Py_INCREF(tmp_closure_1[0]);

   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__6___init__(tmp_annotations_7, tmp_closure_1);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[27], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 164;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   nuitka_bool tmp_condition_result_38;
   PyObject *tmp_called_value_21;
   PyObject *tmp_args_element_value_4;
   PyObject *tmp_annotations_8;
   PyObject *tmp_dict_key_8;
   PyObject *tmp_dict_value_8;
   PyObject *tmp_called_value_22;
   PyObject *tmp_args_element_value_5;
   PyObject *tmp_annotations_9;
   PyObject *tmp_dict_key_9;
   PyObject *tmp_dict_value_9;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[97]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 170;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_condition_result_38 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_11;
   } else {
       goto condexpr_false_11;
   }
   condexpr_true_11:;
   tmp_called_value_21 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[97]);

   if (unlikely(tmp_called_value_21 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[97], &exception_type, &exception_value);

    exception_lineno = 170;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }

   if (tmp_called_value_21 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 170;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_dict_key_8 = mod_consts[91];
   tmp_dict_value_8 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[117]);

   if (tmp_dict_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_8 = PyExc_OSError;
           Py_INCREF(tmp_dict_value_8);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_8 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
   Py_DECREF(tmp_dict_value_8);
   assert(!(tmp_res != 0));


   tmp_args_element_value_4 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__7_os_error(tmp_annotations_8);

   frame_e7631bd35b34e9e53b20a1304ef7bf39_3->m_frame.f_lineno = 170;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_4);
   Py_DECREF(tmp_called_value_21);
   Py_DECREF(tmp_args_element_value_4);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 170;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   goto condexpr_end_11;
   condexpr_false_11:;
   tmp_called_value_22 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_9 = mod_consts[91];
   tmp_dict_value_9 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[117]);

   if (tmp_dict_value_9 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_9 = PyExc_OSError;
           Py_INCREF(tmp_dict_value_9);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_9 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
   Py_DECREF(tmp_dict_value_9);
   assert(!(tmp_res != 0));


   tmp_args_element_value_5 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__7_os_error(tmp_annotations_9);

   frame_e7631bd35b34e9e53b20a1304ef7bf39_3->m_frame.f_lineno = 170;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_5);
   Py_DECREF(tmp_args_element_value_5);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 170;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   condexpr_end_11:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[116], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 171;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   nuitka_bool tmp_condition_result_39;
   PyObject *tmp_called_value_23;
   PyObject *tmp_args_element_value_6;
   PyObject *tmp_annotations_10;
   PyObject *tmp_dict_key_10;
   PyObject *tmp_dict_value_10;
   PyObject *tmp_called_value_24;
   PyObject *tmp_args_element_value_7;
   PyObject *tmp_annotations_11;
   PyObject *tmp_dict_key_11;
   PyObject *tmp_dict_value_11;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[97]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 174;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_condition_result_39 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_12;
   } else {
       goto condexpr_false_12;
   }
   condexpr_true_12:;
   tmp_called_value_23 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[97]);

   if (unlikely(tmp_called_value_23 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[97], &exception_type, &exception_value);

    exception_lineno = 174;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }

   if (tmp_called_value_23 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 174;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_dict_key_10 = mod_consts[91];
   tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[90]);

   if (tmp_dict_value_10 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_10 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_10);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_10 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
   Py_DECREF(tmp_dict_value_10);
   assert(!(tmp_res != 0));


   tmp_args_element_value_6 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__8_host(tmp_annotations_10);

   frame_e7631bd35b34e9e53b20a1304ef7bf39_3->m_frame.f_lineno = 174;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_6);
   Py_DECREF(tmp_called_value_23);
   Py_DECREF(tmp_args_element_value_6);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 174;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   goto condexpr_end_12;
   condexpr_false_12:;
   tmp_called_value_24 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_11 = mod_consts[91];
   tmp_dict_value_11 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[90]);

   if (tmp_dict_value_11 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_11);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_11 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
   Py_DECREF(tmp_dict_value_11);
   assert(!(tmp_res != 0));


   tmp_args_element_value_7 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__8_host(tmp_annotations_11);

   frame_e7631bd35b34e9e53b20a1304ef7bf39_3->m_frame.f_lineno = 174;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_7);
   Py_DECREF(tmp_args_element_value_7);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 174;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   condexpr_end_12:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[30], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 175;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   nuitka_bool tmp_condition_result_40;
   PyObject *tmp_called_value_25;
   PyObject *tmp_args_element_value_8;
   PyObject *tmp_annotations_12;
   PyObject *tmp_dict_key_12;
   PyObject *tmp_dict_value_12;
   PyObject *tmp_expression_value_61;
   PyObject *tmp_subscript_value_14;
   PyObject *tmp_called_value_26;
   PyObject *tmp_args_element_value_9;
   PyObject *tmp_annotations_13;
   PyObject *tmp_dict_key_13;
   PyObject *tmp_dict_value_13;
   PyObject *tmp_expression_value_62;
   PyObject *tmp_subscript_value_15;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[97]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 178;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_condition_result_40 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_13;
   } else {
       goto condexpr_false_13;
   }
   condexpr_true_13:;
   tmp_called_value_25 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[97]);

   if (unlikely(tmp_called_value_25 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[97], &exception_type, &exception_value);

    exception_lineno = 178;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }

   if (tmp_called_value_25 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 178;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_dict_key_12 = mod_consts[91];
   tmp_expression_value_61 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[58]);

   if (tmp_expression_value_61 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[58]);

     if (unlikely(tmp_expression_value_61 == NULL)) {
         tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
     }

     if (tmp_expression_value_61 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_25);

      exception_lineno = 179;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_61);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_14 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[89]);

   if (tmp_subscript_value_14 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_14 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_subscript_value_14);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_14);
   Py_DECREF(tmp_expression_value_61);
   Py_DECREF(tmp_subscript_value_14);
   if (tmp_dict_value_12 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_25);

    exception_lineno = 179;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_annotations_12 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
   Py_DECREF(tmp_dict_value_12);
   assert(!(tmp_res != 0));


   tmp_args_element_value_8 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__9_port(tmp_annotations_12);

   frame_e7631bd35b34e9e53b20a1304ef7bf39_3->m_frame.f_lineno = 178;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_8);
   Py_DECREF(tmp_called_value_25);
   Py_DECREF(tmp_args_element_value_8);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 178;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   goto condexpr_end_13;
   condexpr_false_13:;
   tmp_called_value_26 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_13 = mod_consts[91];
   tmp_expression_value_62 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[58]);

   if (tmp_expression_value_62 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[58]);

     if (unlikely(tmp_expression_value_62 == NULL)) {
         tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
     }

     if (tmp_expression_value_62 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 179;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_62);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_15 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[89]);

   if (tmp_subscript_value_15 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_15 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_subscript_value_15);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_15);
   Py_DECREF(tmp_expression_value_62);
   Py_DECREF(tmp_subscript_value_15);
   if (tmp_dict_value_13 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 179;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_annotations_13 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
   Py_DECREF(tmp_dict_value_13);
   assert(!(tmp_res != 0));


   tmp_args_element_value_9 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__9_port(tmp_annotations_13);

   frame_e7631bd35b34e9e53b20a1304ef7bf39_3->m_frame.f_lineno = 178;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_9);
   Py_DECREF(tmp_args_element_value_9);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 178;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   condexpr_end_13:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[31], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 179;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   nuitka_bool tmp_condition_result_41;
   PyObject *tmp_called_value_27;
   PyObject *tmp_args_element_value_10;
   PyObject *tmp_annotations_14;
   PyObject *tmp_dict_key_14;
   PyObject *tmp_dict_value_14;
   PyObject *tmp_expression_value_63;
   PyObject *tmp_subscript_value_16;
   PyObject *tmp_tuple_element_36;
   PyObject *tmp_called_value_28;
   PyObject *tmp_args_element_value_11;
   PyObject *tmp_annotations_15;
   PyObject *tmp_dict_key_15;
   PyObject *tmp_dict_value_15;
   PyObject *tmp_expression_value_64;
   PyObject *tmp_subscript_value_17;
   PyObject *tmp_tuple_element_37;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[97]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 182;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_condition_result_41 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_41 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_14;
   } else {
       goto condexpr_false_14;
   }
   condexpr_true_14:;
   tmp_called_value_27 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[97]);

   if (unlikely(tmp_called_value_27 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[97], &exception_type, &exception_value);

    exception_lineno = 182;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }

   if (tmp_called_value_27 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 182;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_dict_key_14 = mod_consts[91];
   tmp_expression_value_63 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[60]);

   if (tmp_expression_value_63 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[60]);

     if (unlikely(tmp_expression_value_63 == NULL)) {
         tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
     }

     if (tmp_expression_value_63 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_27);

      exception_lineno = 183;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_63);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_tuple_element_36 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[68]);

   if (tmp_tuple_element_36 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[68]);

     if (unlikely(tmp_tuple_element_36 == NULL)) {
         tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
     }

     if (tmp_tuple_element_36 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_27);
      Py_DECREF(tmp_expression_value_63);

      exception_lineno = 183;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_tuple_element_36);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_36);
   tmp_tuple_element_36 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[122]);

   if (tmp_tuple_element_36 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_36 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_tuple_element_36);
       } else {
           goto frame_exception_exit_3;
       }
   }

   PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_36);
   tmp_tuple_element_36 = mod_consts[123];
   PyTuple_SET_ITEM0(tmp_subscript_value_16, 2, tmp_tuple_element_36);
   tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_16);
   Py_DECREF(tmp_expression_value_63);
   Py_DECREF(tmp_subscript_value_16);
   if (tmp_dict_value_14 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_27);

    exception_lineno = 183;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_annotations_14 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
   Py_DECREF(tmp_dict_value_14);
   assert(!(tmp_res != 0));


   tmp_args_element_value_10 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__10_ssl(tmp_annotations_14);

   frame_e7631bd35b34e9e53b20a1304ef7bf39_3->m_frame.f_lineno = 182;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_10);
   Py_DECREF(tmp_called_value_27);
   Py_DECREF(tmp_args_element_value_10);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 182;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   goto condexpr_end_14;
   condexpr_false_14:;
   tmp_called_value_28 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_15 = mod_consts[91];
   tmp_expression_value_64 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[60]);

   if (tmp_expression_value_64 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[60]);

     if (unlikely(tmp_expression_value_64 == NULL)) {
         tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
     }

     if (tmp_expression_value_64 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 183;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_64);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_tuple_element_37 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[68]);

   if (tmp_tuple_element_37 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[68]);

     if (unlikely(tmp_tuple_element_37 == NULL)) {
         tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
     }

     if (tmp_tuple_element_37 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_expression_value_64);

      exception_lineno = 183;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_tuple_element_37);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_37);
   tmp_tuple_element_37 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[122]);

   if (tmp_tuple_element_37 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_37 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_tuple_element_37);
       } else {
           goto frame_exception_exit_3;
       }
   }

   PyTuple_SET_ITEM(tmp_subscript_value_17, 1, tmp_tuple_element_37);
   tmp_tuple_element_37 = mod_consts[123];
   PyTuple_SET_ITEM0(tmp_subscript_value_17, 2, tmp_tuple_element_37);
   tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_17);
   Py_DECREF(tmp_expression_value_64);
   Py_DECREF(tmp_subscript_value_17);
   if (tmp_dict_value_15 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 183;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_annotations_15 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
   Py_DECREF(tmp_dict_value_15);
   assert(!(tmp_res != 0));


   tmp_args_element_value_11 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__10_ssl(tmp_annotations_15);

   frame_e7631bd35b34e9e53b20a1304ef7bf39_3->m_frame.f_lineno = 182;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_11);
   Py_DECREF(tmp_args_element_value_11);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 182;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   condexpr_end_14:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[32], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 183;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_annotations_16;
   PyObject *tmp_dict_key_16;
   PyObject *tmp_dict_value_16;
   tmp_dict_key_16 = mod_consts[91];
   tmp_dict_value_16 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[90]);

   if (tmp_dict_value_16 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_16 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_16);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_16 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
   Py_DECREF(tmp_dict_value_16);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__11___str__(tmp_annotations_16);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[93], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 186;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_expression_value_65;
   tmp_expression_value_65 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[126]);

   if (tmp_expression_value_65 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_65 = PyExc_BaseException;
           Py_INCREF(tmp_expression_value_65);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dictset_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[127]);
   Py_DECREF(tmp_expression_value_65);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 192;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[127], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 192;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_2;
  frame_exception_exit_3:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_e7631bd35b34e9e53b20a1304ef7bf39_3, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_e7631bd35b34e9e53b20a1304ef7bf39_3->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_e7631bd35b34e9e53b20a1304ef7bf39_3, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_e7631bd35b34e9e53b20a1304ef7bf39_3,
      type_description_2,
      outline_8_var___class__
  );



  assertFrameObject(frame_e7631bd35b34e9e53b20a1304ef7bf39_3);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_2;
  frame_no_exception_2:;
  goto skip_nested_handling_2;
  nested_frame_exit_2:;

  goto try_except_handler_30;
  skip_nested_handling_2:;
  {
   nuitka_bool tmp_condition_result_42;
   PyObject *tmp_cmp_expr_left_10;
   PyObject *tmp_cmp_expr_right_10;
   CHECK_OBJECT(tmp_class_creation_9__bases);
   tmp_cmp_expr_left_10 = tmp_class_creation_9__bases;
   CHECK_OBJECT(tmp_class_creation_9__bases_orig);
   tmp_cmp_expr_right_10 = tmp_class_creation_9__bases_orig;
   tmp_condition_result_42 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
   if (tmp_condition_result_42 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 157;

       goto try_except_handler_30;
   }
   if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
       goto branch_yes_28;
   } else {
       goto branch_no_28;
   }
  }
  branch_yes_28:;
  CHECK_OBJECT(tmp_class_creation_9__bases_orig);
  tmp_dictset_value = tmp_class_creation_9__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 157;

      goto try_except_handler_30;
  }
  branch_no_28:;
  {
   PyObject *tmp_assign_source_92;
   PyObject *tmp_called_value_29;
   PyObject *tmp_args_value_18;
   PyObject *tmp_tuple_element_38;
   PyObject *tmp_kwargs_value_18;
   CHECK_OBJECT(tmp_class_creation_9__metaclass);
   tmp_called_value_29 = tmp_class_creation_9__metaclass;
   tmp_tuple_element_38 = mod_consts[113];
   tmp_args_value_18 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_18, 0, tmp_tuple_element_38);
   CHECK_OBJECT(tmp_class_creation_9__bases);
   tmp_tuple_element_38 = tmp_class_creation_9__bases;
   PyTuple_SET_ITEM0(tmp_args_value_18, 1, tmp_tuple_element_38);
   tmp_tuple_element_38 = locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157;
   PyTuple_SET_ITEM0(tmp_args_value_18, 2, tmp_tuple_element_38);
   CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
   tmp_kwargs_value_18 = tmp_class_creation_9__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 157;
   tmp_assign_source_92 = CALL_FUNCTION(tstate, tmp_called_value_29, tmp_args_value_18, tmp_kwargs_value_18);
   Py_DECREF(tmp_args_value_18);
   if (tmp_assign_source_92 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 157;

       goto try_except_handler_30;
   }
   assert(Nuitka_Cell_GET(outline_8_var___class__) == NULL);
   Nuitka_Cell_SET(outline_8_var___class__, tmp_assign_source_92);

  }
  CHECK_OBJECT(Nuitka_Cell_GET(outline_8_var___class__));
  tmp_assign_source_91 = Nuitka_Cell_GET(outline_8_var___class__);
  Py_INCREF(tmp_assign_source_91);
  goto try_return_handler_30;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_30:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157);
  locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157 = NULL;
  goto try_return_handler_29;
  // Exception handler code:
  try_except_handler_30:;
  exception_keeper_type_28 = exception_type;
  exception_keeper_value_28 = exception_value;
  exception_keeper_tb_28 = exception_tb;
  exception_keeper_lineno_28 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157);
  locals_aiohttp$client_exceptions$$$class__9_ClientConnectorError_157 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_28;
  exception_value = exception_keeper_value_28;
  exception_tb = exception_keeper_tb_28;
  exception_lineno = exception_keeper_lineno_28;

  goto try_except_handler_29;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_29:;
  CHECK_OBJECT(outline_8_var___class__);
  Py_DECREF(outline_8_var___class__);
  outline_8_var___class__ = NULL;
  goto outline_result_9;
  // Exception handler code:
  try_except_handler_29:;
  exception_keeper_type_29 = exception_type;
  exception_keeper_value_29 = exception_value;
  exception_keeper_tb_29 = exception_tb;
  exception_keeper_lineno_29 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_29;
  exception_value = exception_keeper_value_29;
  exception_tb = exception_keeper_tb_29;
  exception_lineno = exception_keeper_lineno_29;

  goto outline_exception_9;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_9:;
  exception_lineno = 157;
  goto try_except_handler_28;
  outline_result_9:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_91);
 }
 goto try_end_12;
 // Exception handler code:
 try_except_handler_28:;
 exception_keeper_type_30 = exception_type;
 exception_keeper_value_30 = exception_value;
 exception_keeper_tb_30 = exception_tb;
 exception_keeper_lineno_30 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_9__bases_orig);
 tmp_class_creation_9__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_9__bases);
 tmp_class_creation_9__bases = NULL;
 Py_XDECREF(tmp_class_creation_9__class_decl_dict);
 tmp_class_creation_9__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_9__metaclass);
 tmp_class_creation_9__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_9__prepared);
 tmp_class_creation_9__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_30;
 exception_value = exception_keeper_value_30;
 exception_tb = exception_keeper_tb_30;
 exception_lineno = exception_keeper_lineno_30;

 goto frame_exception_exit_1;
 // End of try:
 try_end_12:;
 CHECK_OBJECT(tmp_class_creation_9__bases_orig);
 Py_DECREF(tmp_class_creation_9__bases_orig);
 tmp_class_creation_9__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_9__bases);
 Py_DECREF(tmp_class_creation_9__bases);
 tmp_class_creation_9__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_9__class_decl_dict);
 Py_DECREF(tmp_class_creation_9__class_decl_dict);
 tmp_class_creation_9__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_9__metaclass);
 Py_DECREF(tmp_class_creation_9__metaclass);
 tmp_class_creation_9__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_9__prepared);
 Py_DECREF(tmp_class_creation_9__prepared);
 tmp_class_creation_9__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_93;
  PyObject *tmp_tuple_element_39;
  tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[113]);

  if (unlikely(tmp_tuple_element_39 == NULL)) {
      tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
  }

  if (tmp_tuple_element_39 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  tmp_assign_source_93 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_93, 0, tmp_tuple_element_39);
  assert(tmp_class_creation_10__bases_orig == NULL);
  tmp_class_creation_10__bases_orig = tmp_assign_source_93;
 }
 {
  PyObject *tmp_assign_source_94;
  PyObject *tmp_dircall_arg1_10;
  CHECK_OBJECT(tmp_class_creation_10__bases_orig);
  tmp_dircall_arg1_10 = tmp_class_creation_10__bases_orig;
  Py_INCREF(tmp_dircall_arg1_10);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_10};
      tmp_assign_source_94 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_94 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  assert(tmp_class_creation_10__bases == NULL);
  tmp_class_creation_10__bases = tmp_assign_source_94;
 }
 {
  PyObject *tmp_assign_source_95;
  tmp_assign_source_95 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_10__class_decl_dict == NULL);
  tmp_class_creation_10__class_decl_dict = tmp_assign_source_95;
 }
 {
  PyObject *tmp_assign_source_96;
  PyObject *tmp_metaclass_value_10;
  nuitka_bool tmp_condition_result_43;
  int tmp_truth_name_10;
  PyObject *tmp_type_arg_19;
  PyObject *tmp_expression_value_66;
  PyObject *tmp_subscript_value_18;
  PyObject *tmp_bases_value_10;
  CHECK_OBJECT(tmp_class_creation_10__bases);
  tmp_truth_name_10 = CHECK_IF_TRUE(tmp_class_creation_10__bases);
  if (tmp_truth_name_10 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  tmp_condition_result_43 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_43 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_15;
  } else {
      goto condexpr_false_15;
  }
  condexpr_true_15:;
  CHECK_OBJECT(tmp_class_creation_10__bases);
  tmp_expression_value_66 = tmp_class_creation_10__bases;
  tmp_subscript_value_18 = mod_consts[8];
  tmp_type_arg_19 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_66, tmp_subscript_value_18, 0);
  if (tmp_type_arg_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  tmp_metaclass_value_10 = BUILTIN_TYPE1(tmp_type_arg_19);
  Py_DECREF(tmp_type_arg_19);
  if (tmp_metaclass_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  goto condexpr_end_15;
  condexpr_false_15:;
  tmp_metaclass_value_10 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_10);
  condexpr_end_15:;
  CHECK_OBJECT(tmp_class_creation_10__bases);
  tmp_bases_value_10 = tmp_class_creation_10__bases;
  tmp_assign_source_96 = SELECT_METACLASS(tstate, tmp_metaclass_value_10, tmp_bases_value_10);
  Py_DECREF(tmp_metaclass_value_10);
  if (tmp_assign_source_96 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  assert(tmp_class_creation_10__metaclass == NULL);
  tmp_class_creation_10__metaclass = tmp_assign_source_96;
 }
 {
  bool tmp_condition_result_44;
  PyObject *tmp_expression_value_67;
  CHECK_OBJECT(tmp_class_creation_10__metaclass);
  tmp_expression_value_67 = tmp_class_creation_10__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_67, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  tmp_condition_result_44 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_44 != false) {
      goto branch_yes_29;
  } else {
      goto branch_no_29;
  }
 }
 branch_yes_29:;
 {
  PyObject *tmp_assign_source_97;
  PyObject *tmp_called_value_30;
  PyObject *tmp_expression_value_68;
  PyObject *tmp_args_value_19;
  PyObject *tmp_tuple_element_40;
  PyObject *tmp_kwargs_value_19;
  CHECK_OBJECT(tmp_class_creation_10__metaclass);
  tmp_expression_value_68 = tmp_class_creation_10__metaclass;
  tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[75]);
  if (tmp_called_value_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  tmp_tuple_element_40 = mod_consts[128];
  tmp_args_value_19 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_19, 0, tmp_tuple_element_40);
  CHECK_OBJECT(tmp_class_creation_10__bases);
  tmp_tuple_element_40 = tmp_class_creation_10__bases;
  PyTuple_SET_ITEM0(tmp_args_value_19, 1, tmp_tuple_element_40);
  CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
  tmp_kwargs_value_19 = tmp_class_creation_10__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 195;
  tmp_assign_source_97 = CALL_FUNCTION(tstate, tmp_called_value_30, tmp_args_value_19, tmp_kwargs_value_19);
  Py_DECREF(tmp_called_value_30);
  Py_DECREF(tmp_args_value_19);
  if (tmp_assign_source_97 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  assert(tmp_class_creation_10__prepared == NULL);
  tmp_class_creation_10__prepared = tmp_assign_source_97;
 }
 {
  bool tmp_condition_result_45;
  PyObject *tmp_operand_value_10;
  PyObject *tmp_expression_value_69;
  CHECK_OBJECT(tmp_class_creation_10__prepared);
  tmp_expression_value_69 = tmp_class_creation_10__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_69, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  tmp_operand_value_10 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_10);
  assert(!(tmp_res == -1));
  tmp_condition_result_45 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_45 != false) {
      goto branch_yes_30;
  } else {
      goto branch_no_30;
  }
 }
 branch_yes_30:;
 {
  PyObject *tmp_raise_type_10;
  PyObject *tmp_raise_value_10;
  PyObject *tmp_mod_expr_left_10;
  PyObject *tmp_mod_expr_right_10;
  PyObject *tmp_tuple_element_41;
  PyObject *tmp_expression_value_70;
  PyObject *tmp_name_value_15;
  PyObject *tmp_default_value_10;
  tmp_raise_type_10 = PyExc_TypeError;
  tmp_mod_expr_left_10 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_10__metaclass);
  tmp_expression_value_70 = tmp_class_creation_10__metaclass;
  tmp_name_value_15 = mod_consts[20];
  tmp_default_value_10 = mod_consts[79];
  tmp_tuple_element_41 = BUILTIN_GETATTR(tstate, tmp_expression_value_70, tmp_name_value_15, tmp_default_value_10);
  if (tmp_tuple_element_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  tmp_mod_expr_right_10 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_71;
   PyObject *tmp_type_arg_20;
   PyTuple_SET_ITEM(tmp_mod_expr_right_10, 0, tmp_tuple_element_41);
   CHECK_OBJECT(tmp_class_creation_10__prepared);
   tmp_type_arg_20 = tmp_class_creation_10__prepared;
   tmp_expression_value_71 = BUILTIN_TYPE1(tmp_type_arg_20);
   assert(!(tmp_expression_value_71 == NULL));
   tmp_tuple_element_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[20]);
   Py_DECREF(tmp_expression_value_71);
   if (tmp_tuple_element_41 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 195;

       goto tuple_build_exception_10;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_10, 1, tmp_tuple_element_41);
  }
  goto tuple_build_noexception_10;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_10:;
  Py_DECREF(tmp_mod_expr_right_10);
  goto try_except_handler_31;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_10:;
  tmp_raise_value_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
  Py_DECREF(tmp_mod_expr_right_10);
  if (tmp_raise_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_31;
  }
  exception_type = tmp_raise_type_10;
  Py_INCREF(tmp_raise_type_10);
  exception_value = tmp_raise_value_10;
  exception_lineno = 195;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_31;
 }
 branch_no_30:;
 goto branch_end_29;
 branch_no_29:;
 {
  PyObject *tmp_assign_source_98;
  tmp_assign_source_98 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_10__prepared == NULL);
  tmp_class_creation_10__prepared = tmp_assign_source_98;
 }
 branch_end_29:;
 {
  PyObject *tmp_assign_source_99;
  {
   PyObject *tmp_set_locals_10;
   CHECK_OBJECT(tmp_class_creation_10__prepared);
   tmp_set_locals_10 = tmp_class_creation_10__prepared;
   locals_aiohttp$client_exceptions$$$class__10_ClientProxyConnectionError_195 = tmp_set_locals_10;
   Py_INCREF(tmp_set_locals_10);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__10_ClientProxyConnectionError_195, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_33;
  }
  tmp_dictset_value = mod_consts[129];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__10_ClientProxyConnectionError_195, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_33;
  }
  tmp_dictset_value = mod_consts[128];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__10_ClientProxyConnectionError_195, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_33;
  }
  {
   nuitka_bool tmp_condition_result_46;
   PyObject *tmp_cmp_expr_left_11;
   PyObject *tmp_cmp_expr_right_11;
   CHECK_OBJECT(tmp_class_creation_10__bases);
   tmp_cmp_expr_left_11 = tmp_class_creation_10__bases;
   CHECK_OBJECT(tmp_class_creation_10__bases_orig);
   tmp_cmp_expr_right_11 = tmp_class_creation_10__bases_orig;
   tmp_condition_result_46 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
   if (tmp_condition_result_46 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 195;

       goto try_except_handler_33;
   }
   if (tmp_condition_result_46 == NUITKA_BOOL_TRUE) {
       goto branch_yes_31;
   } else {
       goto branch_no_31;
   }
  }
  branch_yes_31:;
  CHECK_OBJECT(tmp_class_creation_10__bases_orig);
  tmp_dictset_value = tmp_class_creation_10__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__10_ClientProxyConnectionError_195, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;

      goto try_except_handler_33;
  }
  branch_no_31:;
  {
   PyObject *tmp_assign_source_100;
   PyObject *tmp_called_value_31;
   PyObject *tmp_args_value_20;
   PyObject *tmp_tuple_element_42;
   PyObject *tmp_kwargs_value_20;
   CHECK_OBJECT(tmp_class_creation_10__metaclass);
   tmp_called_value_31 = tmp_class_creation_10__metaclass;
   tmp_tuple_element_42 = mod_consts[128];
   tmp_args_value_20 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_20, 0, tmp_tuple_element_42);
   CHECK_OBJECT(tmp_class_creation_10__bases);
   tmp_tuple_element_42 = tmp_class_creation_10__bases;
   PyTuple_SET_ITEM0(tmp_args_value_20, 1, tmp_tuple_element_42);
   tmp_tuple_element_42 = locals_aiohttp$client_exceptions$$$class__10_ClientProxyConnectionError_195;
   PyTuple_SET_ITEM0(tmp_args_value_20, 2, tmp_tuple_element_42);
   CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
   tmp_kwargs_value_20 = tmp_class_creation_10__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 195;
   tmp_assign_source_100 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_20, tmp_kwargs_value_20);
   Py_DECREF(tmp_args_value_20);
   if (tmp_assign_source_100 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 195;

       goto try_except_handler_33;
   }
   assert(outline_9_var___class__ == NULL);
   outline_9_var___class__ = tmp_assign_source_100;
  }
  CHECK_OBJECT(outline_9_var___class__);
  tmp_assign_source_99 = outline_9_var___class__;
  Py_INCREF(tmp_assign_source_99);
  goto try_return_handler_33;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_33:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__10_ClientProxyConnectionError_195);
  locals_aiohttp$client_exceptions$$$class__10_ClientProxyConnectionError_195 = NULL;
  goto try_return_handler_32;
  // Exception handler code:
  try_except_handler_33:;
  exception_keeper_type_31 = exception_type;
  exception_keeper_value_31 = exception_value;
  exception_keeper_tb_31 = exception_tb;
  exception_keeper_lineno_31 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__10_ClientProxyConnectionError_195);
  locals_aiohttp$client_exceptions$$$class__10_ClientProxyConnectionError_195 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_31;
  exception_value = exception_keeper_value_31;
  exception_tb = exception_keeper_tb_31;
  exception_lineno = exception_keeper_lineno_31;

  goto try_except_handler_32;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_32:;
  CHECK_OBJECT(outline_9_var___class__);
  Py_DECREF(outline_9_var___class__);
  outline_9_var___class__ = NULL;
  goto outline_result_10;
  // Exception handler code:
  try_except_handler_32:;
  exception_keeper_type_32 = exception_type;
  exception_keeper_value_32 = exception_value;
  exception_keeper_tb_32 = exception_tb;
  exception_keeper_lineno_32 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_32;
  exception_value = exception_keeper_value_32;
  exception_tb = exception_keeper_tb_32;
  exception_lineno = exception_keeper_lineno_32;

  goto outline_exception_10;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_10:;
  exception_lineno = 195;
  goto try_except_handler_31;
  outline_result_10:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_99);
 }
 goto try_end_13;
 // Exception handler code:
 try_except_handler_31:;
 exception_keeper_type_33 = exception_type;
 exception_keeper_value_33 = exception_value;
 exception_keeper_tb_33 = exception_tb;
 exception_keeper_lineno_33 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_10__bases_orig);
 tmp_class_creation_10__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_10__bases);
 tmp_class_creation_10__bases = NULL;
 Py_XDECREF(tmp_class_creation_10__class_decl_dict);
 tmp_class_creation_10__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_10__metaclass);
 tmp_class_creation_10__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_10__prepared);
 tmp_class_creation_10__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_33;
 exception_value = exception_keeper_value_33;
 exception_tb = exception_keeper_tb_33;
 exception_lineno = exception_keeper_lineno_33;

 goto frame_exception_exit_1;
 // End of try:
 try_end_13:;
 CHECK_OBJECT(tmp_class_creation_10__bases_orig);
 Py_DECREF(tmp_class_creation_10__bases_orig);
 tmp_class_creation_10__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_10__bases);
 Py_DECREF(tmp_class_creation_10__bases);
 tmp_class_creation_10__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_10__class_decl_dict);
 Py_DECREF(tmp_class_creation_10__class_decl_dict);
 tmp_class_creation_10__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_10__metaclass);
 Py_DECREF(tmp_class_creation_10__metaclass);
 tmp_class_creation_10__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_10__prepared);
 Py_DECREF(tmp_class_creation_10__prepared);
 tmp_class_creation_10__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_101;
  PyObject *tmp_tuple_element_43;
  tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[113]);

  if (unlikely(tmp_tuple_element_43 == NULL)) {
      tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
  }

  if (tmp_tuple_element_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  tmp_assign_source_101 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_101, 0, tmp_tuple_element_43);
  assert(tmp_class_creation_11__bases_orig == NULL);
  tmp_class_creation_11__bases_orig = tmp_assign_source_101;
 }
 {
  PyObject *tmp_assign_source_102;
  PyObject *tmp_dircall_arg1_11;
  CHECK_OBJECT(tmp_class_creation_11__bases_orig);
  tmp_dircall_arg1_11 = tmp_class_creation_11__bases_orig;
  Py_INCREF(tmp_dircall_arg1_11);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_11};
      tmp_assign_source_102 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_102 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  assert(tmp_class_creation_11__bases == NULL);
  tmp_class_creation_11__bases = tmp_assign_source_102;
 }
 {
  PyObject *tmp_assign_source_103;
  tmp_assign_source_103 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_11__class_decl_dict == NULL);
  tmp_class_creation_11__class_decl_dict = tmp_assign_source_103;
 }
 {
  PyObject *tmp_assign_source_104;
  PyObject *tmp_metaclass_value_11;
  nuitka_bool tmp_condition_result_47;
  int tmp_truth_name_11;
  PyObject *tmp_type_arg_21;
  PyObject *tmp_expression_value_72;
  PyObject *tmp_subscript_value_19;
  PyObject *tmp_bases_value_11;
  CHECK_OBJECT(tmp_class_creation_11__bases);
  tmp_truth_name_11 = CHECK_IF_TRUE(tmp_class_creation_11__bases);
  if (tmp_truth_name_11 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  tmp_condition_result_47 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_16;
  } else {
      goto condexpr_false_16;
  }
  condexpr_true_16:;
  CHECK_OBJECT(tmp_class_creation_11__bases);
  tmp_expression_value_72 = tmp_class_creation_11__bases;
  tmp_subscript_value_19 = mod_consts[8];
  tmp_type_arg_21 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_72, tmp_subscript_value_19, 0);
  if (tmp_type_arg_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  tmp_metaclass_value_11 = BUILTIN_TYPE1(tmp_type_arg_21);
  Py_DECREF(tmp_type_arg_21);
  if (tmp_metaclass_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  goto condexpr_end_16;
  condexpr_false_16:;
  tmp_metaclass_value_11 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_11);
  condexpr_end_16:;
  CHECK_OBJECT(tmp_class_creation_11__bases);
  tmp_bases_value_11 = tmp_class_creation_11__bases;
  tmp_assign_source_104 = SELECT_METACLASS(tstate, tmp_metaclass_value_11, tmp_bases_value_11);
  Py_DECREF(tmp_metaclass_value_11);
  if (tmp_assign_source_104 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  assert(tmp_class_creation_11__metaclass == NULL);
  tmp_class_creation_11__metaclass = tmp_assign_source_104;
 }
 {
  bool tmp_condition_result_48;
  PyObject *tmp_expression_value_73;
  CHECK_OBJECT(tmp_class_creation_11__metaclass);
  tmp_expression_value_73 = tmp_class_creation_11__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_73, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  tmp_condition_result_48 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_48 != false) {
      goto branch_yes_32;
  } else {
      goto branch_no_32;
  }
 }
 branch_yes_32:;
 {
  PyObject *tmp_assign_source_105;
  PyObject *tmp_called_value_32;
  PyObject *tmp_expression_value_74;
  PyObject *tmp_args_value_21;
  PyObject *tmp_tuple_element_44;
  PyObject *tmp_kwargs_value_21;
  CHECK_OBJECT(tmp_class_creation_11__metaclass);
  tmp_expression_value_74 = tmp_class_creation_11__metaclass;
  tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[75]);
  if (tmp_called_value_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  tmp_tuple_element_44 = mod_consts[130];
  tmp_args_value_21 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_21, 0, tmp_tuple_element_44);
  CHECK_OBJECT(tmp_class_creation_11__bases);
  tmp_tuple_element_44 = tmp_class_creation_11__bases;
  PyTuple_SET_ITEM0(tmp_args_value_21, 1, tmp_tuple_element_44);
  CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
  tmp_kwargs_value_21 = tmp_class_creation_11__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 203;
  tmp_assign_source_105 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_21, tmp_kwargs_value_21);
  Py_DECREF(tmp_called_value_32);
  Py_DECREF(tmp_args_value_21);
  if (tmp_assign_source_105 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  assert(tmp_class_creation_11__prepared == NULL);
  tmp_class_creation_11__prepared = tmp_assign_source_105;
 }
 {
  bool tmp_condition_result_49;
  PyObject *tmp_operand_value_11;
  PyObject *tmp_expression_value_75;
  CHECK_OBJECT(tmp_class_creation_11__prepared);
  tmp_expression_value_75 = tmp_class_creation_11__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_75, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  tmp_operand_value_11 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_11);
  assert(!(tmp_res == -1));
  tmp_condition_result_49 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_49 != false) {
      goto branch_yes_33;
  } else {
      goto branch_no_33;
  }
 }
 branch_yes_33:;
 {
  PyObject *tmp_raise_type_11;
  PyObject *tmp_raise_value_11;
  PyObject *tmp_mod_expr_left_11;
  PyObject *tmp_mod_expr_right_11;
  PyObject *tmp_tuple_element_45;
  PyObject *tmp_expression_value_76;
  PyObject *tmp_name_value_16;
  PyObject *tmp_default_value_11;
  tmp_raise_type_11 = PyExc_TypeError;
  tmp_mod_expr_left_11 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_11__metaclass);
  tmp_expression_value_76 = tmp_class_creation_11__metaclass;
  tmp_name_value_16 = mod_consts[20];
  tmp_default_value_11 = mod_consts[79];
  tmp_tuple_element_45 = BUILTIN_GETATTR(tstate, tmp_expression_value_76, tmp_name_value_16, tmp_default_value_11);
  if (tmp_tuple_element_45 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  tmp_mod_expr_right_11 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_77;
   PyObject *tmp_type_arg_22;
   PyTuple_SET_ITEM(tmp_mod_expr_right_11, 0, tmp_tuple_element_45);
   CHECK_OBJECT(tmp_class_creation_11__prepared);
   tmp_type_arg_22 = tmp_class_creation_11__prepared;
   tmp_expression_value_77 = BUILTIN_TYPE1(tmp_type_arg_22);
   assert(!(tmp_expression_value_77 == NULL));
   tmp_tuple_element_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[20]);
   Py_DECREF(tmp_expression_value_77);
   if (tmp_tuple_element_45 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 203;

       goto tuple_build_exception_11;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_11, 1, tmp_tuple_element_45);
  }
  goto tuple_build_noexception_11;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_11:;
  Py_DECREF(tmp_mod_expr_right_11);
  goto try_except_handler_34;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_11:;
  tmp_raise_value_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
  Py_DECREF(tmp_mod_expr_right_11);
  if (tmp_raise_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_34;
  }
  exception_type = tmp_raise_type_11;
  Py_INCREF(tmp_raise_type_11);
  exception_value = tmp_raise_value_11;
  exception_lineno = 203;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_34;
 }
 branch_no_33:;
 goto branch_end_32;
 branch_no_32:;
 {
  PyObject *tmp_assign_source_106;
  tmp_assign_source_106 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_11__prepared == NULL);
  tmp_class_creation_11__prepared = tmp_assign_source_106;
 }
 branch_end_32:;
 {
  PyObject *tmp_assign_source_107;
  outline_10_var___class__ = Nuitka_Cell_NewEmpty();
  {
   PyObject *tmp_set_locals_11;
   CHECK_OBJECT(tmp_class_creation_11__prepared);
   tmp_set_locals_11 = tmp_class_creation_11__prepared;
   locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203 = tmp_set_locals_11;
   Py_INCREF(tmp_set_locals_11);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_36;
  }
  tmp_dictset_value = mod_consts[131];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_36;
  }
  tmp_dictset_value = mod_consts[130];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_36;
  }
  frame_c08cb45ee31f7b4d390fa51afcaf355e_4 = MAKE_CLASS_FRAME(tstate, codeobj_c08cb45ee31f7b4d390fa51afcaf355e, module_aiohttp$client_exceptions, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_c08cb45ee31f7b4d390fa51afcaf355e_4);
  assert(Py_REFCNT(frame_c08cb45ee31f7b4d390fa51afcaf355e_4) == 2);

  // Framed code:
  {
   PyObject *tmp_annotations_17;
   PyObject *tmp_dict_key_17;
   PyObject *tmp_dict_value_17;
   struct Nuitka_CellObject *tmp_closure_2[1];
   tmp_dict_key_17 = mod_consts[132];
   tmp_dict_value_17 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[90]);

   if (tmp_dict_value_17 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_17 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_17);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_17 = _PyDict_NewPresized( 4 );
   tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
   Py_DECREF(tmp_dict_value_17);
   assert(!(tmp_res != 0));
   tmp_dict_key_17 = mod_consts[115];
   tmp_dict_value_17 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[71]);

   if (tmp_dict_value_17 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[71]);

     if (unlikely(tmp_dict_value_17 == NULL)) {
         tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
     }

     if (tmp_dict_value_17 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 211;
      type_description_2 = "c";
         goto dict_build_exception_2;
     }
           Py_INCREF(tmp_dict_value_17);
       } else {
           goto dict_build_exception_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
   Py_DECREF(tmp_dict_value_17);
   assert(!(tmp_res != 0));
   tmp_dict_key_17 = mod_consts[116];
   tmp_dict_value_17 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[117]);

   if (tmp_dict_value_17 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_17 = PyExc_OSError;
           Py_INCREF(tmp_dict_value_17);
       } else {
           goto dict_build_exception_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
   Py_DECREF(tmp_dict_value_17);
   assert(!(tmp_res != 0));
   tmp_dict_key_17 = mod_consts[91];
   tmp_dict_value_17 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_17, tmp_dict_value_17);
   assert(!(tmp_res != 0));
   goto dict_build_noexception_2;
   // Exception handling pass through code for dict_build:
   dict_build_exception_2:;
   Py_DECREF(tmp_annotations_17);
   goto frame_exception_exit_4;
   // Finished with no exception for dict_build:
   dict_build_noexception_2:;

   tmp_closure_2[0] = outline_10_var___class__;
   Py_INCREF(tmp_closure_2[0]);

   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__12___init__(tmp_annotations_17, tmp_closure_2);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[27], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 210;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
  }
  {
   nuitka_bool tmp_condition_result_50;
   PyObject *tmp_called_value_33;
   PyObject *tmp_args_element_value_12;
   PyObject *tmp_annotations_18;
   PyObject *tmp_dict_key_18;
   PyObject *tmp_dict_value_18;
   PyObject *tmp_called_value_34;
   PyObject *tmp_args_element_value_13;
   PyObject *tmp_annotations_19;
   PyObject *tmp_dict_key_19;
   PyObject *tmp_dict_value_19;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[97]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 216;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   tmp_condition_result_50 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_50 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_17;
   } else {
       goto condexpr_false_17;
   }
   condexpr_true_17:;
   tmp_called_value_33 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[97]);

   if (unlikely(tmp_called_value_33 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[97], &exception_type, &exception_value);

    exception_lineno = 216;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }

   if (tmp_called_value_33 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 216;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   tmp_dict_key_18 = mod_consts[91];
   tmp_dict_value_18 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[90]);

   if (tmp_dict_value_18 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_18 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_18);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_18 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_18, tmp_dict_value_18);
   Py_DECREF(tmp_dict_value_18);
   assert(!(tmp_res != 0));


   tmp_args_element_value_12 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__13_path(tmp_annotations_18);

   frame_c08cb45ee31f7b4d390fa51afcaf355e_4->m_frame.f_lineno = 216;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_12);
   Py_DECREF(tmp_called_value_33);
   Py_DECREF(tmp_args_element_value_12);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 216;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   goto condexpr_end_17;
   condexpr_false_17:;
   tmp_called_value_34 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_19 = mod_consts[91];
   tmp_dict_value_19 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[90]);

   if (tmp_dict_value_19 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_19 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_19);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_19 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_19, tmp_dict_value_19);
   Py_DECREF(tmp_dict_value_19);
   assert(!(tmp_res != 0));


   tmp_args_element_value_13 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__13_path(tmp_annotations_19);

   frame_c08cb45ee31f7b4d390fa51afcaf355e_4->m_frame.f_lineno = 216;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_13);
   Py_DECREF(tmp_args_element_value_13);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 216;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
   condexpr_end_17:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[132], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 217;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
  }
  {
   PyObject *tmp_annotations_20;
   PyObject *tmp_dict_key_20;
   PyObject *tmp_dict_value_20;
   tmp_dict_key_20 = mod_consts[91];
   tmp_dict_value_20 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[90]);

   if (tmp_dict_value_20 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_20 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_20);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_20 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_20, tmp_dict_value_20);
   Py_DECREF(tmp_dict_value_20);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__14___str__(tmp_annotations_20);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[93], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 220;
    type_description_2 = "c";
       goto frame_exception_exit_4;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_3;
  frame_exception_exit_4:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_c08cb45ee31f7b4d390fa51afcaf355e_4, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_c08cb45ee31f7b4d390fa51afcaf355e_4->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_c08cb45ee31f7b4d390fa51afcaf355e_4, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_c08cb45ee31f7b4d390fa51afcaf355e_4,
      type_description_2,
      outline_10_var___class__
  );



  assertFrameObject(frame_c08cb45ee31f7b4d390fa51afcaf355e_4);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_3;
  frame_no_exception_3:;
  goto skip_nested_handling_3;
  nested_frame_exit_3:;

  goto try_except_handler_36;
  skip_nested_handling_3:;
  {
   nuitka_bool tmp_condition_result_51;
   PyObject *tmp_cmp_expr_left_12;
   PyObject *tmp_cmp_expr_right_12;
   CHECK_OBJECT(tmp_class_creation_11__bases);
   tmp_cmp_expr_left_12 = tmp_class_creation_11__bases;
   CHECK_OBJECT(tmp_class_creation_11__bases_orig);
   tmp_cmp_expr_right_12 = tmp_class_creation_11__bases_orig;
   tmp_condition_result_51 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
   if (tmp_condition_result_51 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 203;

       goto try_except_handler_36;
   }
   if (tmp_condition_result_51 == NUITKA_BOOL_TRUE) {
       goto branch_yes_34;
   } else {
       goto branch_no_34;
   }
  }
  branch_yes_34:;
  CHECK_OBJECT(tmp_class_creation_11__bases_orig);
  tmp_dictset_value = tmp_class_creation_11__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 203;

      goto try_except_handler_36;
  }
  branch_no_34:;
  {
   PyObject *tmp_assign_source_108;
   PyObject *tmp_called_value_35;
   PyObject *tmp_args_value_22;
   PyObject *tmp_tuple_element_46;
   PyObject *tmp_kwargs_value_22;
   CHECK_OBJECT(tmp_class_creation_11__metaclass);
   tmp_called_value_35 = tmp_class_creation_11__metaclass;
   tmp_tuple_element_46 = mod_consts[130];
   tmp_args_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_22, 0, tmp_tuple_element_46);
   CHECK_OBJECT(tmp_class_creation_11__bases);
   tmp_tuple_element_46 = tmp_class_creation_11__bases;
   PyTuple_SET_ITEM0(tmp_args_value_22, 1, tmp_tuple_element_46);
   tmp_tuple_element_46 = locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203;
   PyTuple_SET_ITEM0(tmp_args_value_22, 2, tmp_tuple_element_46);
   CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
   tmp_kwargs_value_22 = tmp_class_creation_11__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 203;
   tmp_assign_source_108 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_22, tmp_kwargs_value_22);
   Py_DECREF(tmp_args_value_22);
   if (tmp_assign_source_108 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 203;

       goto try_except_handler_36;
   }
   assert(Nuitka_Cell_GET(outline_10_var___class__) == NULL);
   Nuitka_Cell_SET(outline_10_var___class__, tmp_assign_source_108);

  }
  CHECK_OBJECT(Nuitka_Cell_GET(outline_10_var___class__));
  tmp_assign_source_107 = Nuitka_Cell_GET(outline_10_var___class__);
  Py_INCREF(tmp_assign_source_107);
  goto try_return_handler_36;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_36:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203);
  locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203 = NULL;
  goto try_return_handler_35;
  // Exception handler code:
  try_except_handler_36:;
  exception_keeper_type_34 = exception_type;
  exception_keeper_value_34 = exception_value;
  exception_keeper_tb_34 = exception_tb;
  exception_keeper_lineno_34 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203);
  locals_aiohttp$client_exceptions$$$class__11_UnixClientConnectorError_203 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_34;
  exception_value = exception_keeper_value_34;
  exception_tb = exception_keeper_tb_34;
  exception_lineno = exception_keeper_lineno_34;

  goto try_except_handler_35;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_35:;
  CHECK_OBJECT(outline_10_var___class__);
  Py_DECREF(outline_10_var___class__);
  outline_10_var___class__ = NULL;
  goto outline_result_11;
  // Exception handler code:
  try_except_handler_35:;
  exception_keeper_type_35 = exception_type;
  exception_keeper_value_35 = exception_value;
  exception_keeper_tb_35 = exception_tb;
  exception_keeper_lineno_35 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_35;
  exception_value = exception_keeper_value_35;
  exception_tb = exception_keeper_tb_35;
  exception_lineno = exception_keeper_lineno_35;

  goto outline_exception_11;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_11:;
  exception_lineno = 203;
  goto try_except_handler_34;
  outline_result_11:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_107);
 }
 goto try_end_14;
 // Exception handler code:
 try_except_handler_34:;
 exception_keeper_type_36 = exception_type;
 exception_keeper_value_36 = exception_value;
 exception_keeper_tb_36 = exception_tb;
 exception_keeper_lineno_36 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_11__bases_orig);
 tmp_class_creation_11__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_11__bases);
 tmp_class_creation_11__bases = NULL;
 Py_XDECREF(tmp_class_creation_11__class_decl_dict);
 tmp_class_creation_11__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_11__metaclass);
 tmp_class_creation_11__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_11__prepared);
 tmp_class_creation_11__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_36;
 exception_value = exception_keeper_value_36;
 exception_tb = exception_keeper_tb_36;
 exception_lineno = exception_keeper_lineno_36;

 goto frame_exception_exit_1;
 // End of try:
 try_end_14:;
 CHECK_OBJECT(tmp_class_creation_11__bases_orig);
 Py_DECREF(tmp_class_creation_11__bases_orig);
 tmp_class_creation_11__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_11__bases);
 Py_DECREF(tmp_class_creation_11__bases);
 tmp_class_creation_11__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_11__class_decl_dict);
 Py_DECREF(tmp_class_creation_11__class_decl_dict);
 tmp_class_creation_11__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_11__metaclass);
 Py_DECREF(tmp_class_creation_11__metaclass);
 tmp_class_creation_11__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_11__prepared);
 Py_DECREF(tmp_class_creation_11__prepared);
 tmp_class_creation_11__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_109;
  PyObject *tmp_tuple_element_47;
  tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[109]);

  if (unlikely(tmp_tuple_element_47 == NULL)) {
      tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[109]);
  }

  if (tmp_tuple_element_47 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  tmp_assign_source_109 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_109, 0, tmp_tuple_element_47);
  assert(tmp_class_creation_12__bases_orig == NULL);
  tmp_class_creation_12__bases_orig = tmp_assign_source_109;
 }
 {
  PyObject *tmp_assign_source_110;
  PyObject *tmp_dircall_arg1_12;
  CHECK_OBJECT(tmp_class_creation_12__bases_orig);
  tmp_dircall_arg1_12 = tmp_class_creation_12__bases_orig;
  Py_INCREF(tmp_dircall_arg1_12);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_12};
      tmp_assign_source_110 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_110 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  assert(tmp_class_creation_12__bases == NULL);
  tmp_class_creation_12__bases = tmp_assign_source_110;
 }
 {
  PyObject *tmp_assign_source_111;
  tmp_assign_source_111 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_12__class_decl_dict == NULL);
  tmp_class_creation_12__class_decl_dict = tmp_assign_source_111;
 }
 {
  PyObject *tmp_assign_source_112;
  PyObject *tmp_metaclass_value_12;
  nuitka_bool tmp_condition_result_52;
  int tmp_truth_name_12;
  PyObject *tmp_type_arg_23;
  PyObject *tmp_expression_value_78;
  PyObject *tmp_subscript_value_20;
  PyObject *tmp_bases_value_12;
  CHECK_OBJECT(tmp_class_creation_12__bases);
  tmp_truth_name_12 = CHECK_IF_TRUE(tmp_class_creation_12__bases);
  if (tmp_truth_name_12 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  tmp_condition_result_52 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_18;
  } else {
      goto condexpr_false_18;
  }
  condexpr_true_18:;
  CHECK_OBJECT(tmp_class_creation_12__bases);
  tmp_expression_value_78 = tmp_class_creation_12__bases;
  tmp_subscript_value_20 = mod_consts[8];
  tmp_type_arg_23 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_78, tmp_subscript_value_20, 0);
  if (tmp_type_arg_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  tmp_metaclass_value_12 = BUILTIN_TYPE1(tmp_type_arg_23);
  Py_DECREF(tmp_type_arg_23);
  if (tmp_metaclass_value_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  goto condexpr_end_18;
  condexpr_false_18:;
  tmp_metaclass_value_12 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_12);
  condexpr_end_18:;
  CHECK_OBJECT(tmp_class_creation_12__bases);
  tmp_bases_value_12 = tmp_class_creation_12__bases;
  tmp_assign_source_112 = SELECT_METACLASS(tstate, tmp_metaclass_value_12, tmp_bases_value_12);
  Py_DECREF(tmp_metaclass_value_12);
  if (tmp_assign_source_112 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  assert(tmp_class_creation_12__metaclass == NULL);
  tmp_class_creation_12__metaclass = tmp_assign_source_112;
 }
 {
  bool tmp_condition_result_53;
  PyObject *tmp_expression_value_79;
  CHECK_OBJECT(tmp_class_creation_12__metaclass);
  tmp_expression_value_79 = tmp_class_creation_12__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_79, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  tmp_condition_result_53 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_53 != false) {
      goto branch_yes_35;
  } else {
      goto branch_no_35;
  }
 }
 branch_yes_35:;
 {
  PyObject *tmp_assign_source_113;
  PyObject *tmp_called_value_36;
  PyObject *tmp_expression_value_80;
  PyObject *tmp_args_value_23;
  PyObject *tmp_tuple_element_48;
  PyObject *tmp_kwargs_value_23;
  CHECK_OBJECT(tmp_class_creation_12__metaclass);
  tmp_expression_value_80 = tmp_class_creation_12__metaclass;
  tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[75]);
  if (tmp_called_value_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  tmp_tuple_element_48 = mod_consts[136];
  tmp_args_value_23 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_23, 0, tmp_tuple_element_48);
  CHECK_OBJECT(tmp_class_creation_12__bases);
  tmp_tuple_element_48 = tmp_class_creation_12__bases;
  PyTuple_SET_ITEM0(tmp_args_value_23, 1, tmp_tuple_element_48);
  CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
  tmp_kwargs_value_23 = tmp_class_creation_12__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 226;
  tmp_assign_source_113 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_23, tmp_kwargs_value_23);
  Py_DECREF(tmp_called_value_36);
  Py_DECREF(tmp_args_value_23);
  if (tmp_assign_source_113 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  assert(tmp_class_creation_12__prepared == NULL);
  tmp_class_creation_12__prepared = tmp_assign_source_113;
 }
 {
  bool tmp_condition_result_54;
  PyObject *tmp_operand_value_12;
  PyObject *tmp_expression_value_81;
  CHECK_OBJECT(tmp_class_creation_12__prepared);
  tmp_expression_value_81 = tmp_class_creation_12__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_81, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  tmp_operand_value_12 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_12);
  assert(!(tmp_res == -1));
  tmp_condition_result_54 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_54 != false) {
      goto branch_yes_36;
  } else {
      goto branch_no_36;
  }
 }
 branch_yes_36:;
 {
  PyObject *tmp_raise_type_12;
  PyObject *tmp_raise_value_12;
  PyObject *tmp_mod_expr_left_12;
  PyObject *tmp_mod_expr_right_12;
  PyObject *tmp_tuple_element_49;
  PyObject *tmp_expression_value_82;
  PyObject *tmp_name_value_17;
  PyObject *tmp_default_value_12;
  tmp_raise_type_12 = PyExc_TypeError;
  tmp_mod_expr_left_12 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_12__metaclass);
  tmp_expression_value_82 = tmp_class_creation_12__metaclass;
  tmp_name_value_17 = mod_consts[20];
  tmp_default_value_12 = mod_consts[79];
  tmp_tuple_element_49 = BUILTIN_GETATTR(tstate, tmp_expression_value_82, tmp_name_value_17, tmp_default_value_12);
  if (tmp_tuple_element_49 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  tmp_mod_expr_right_12 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_83;
   PyObject *tmp_type_arg_24;
   PyTuple_SET_ITEM(tmp_mod_expr_right_12, 0, tmp_tuple_element_49);
   CHECK_OBJECT(tmp_class_creation_12__prepared);
   tmp_type_arg_24 = tmp_class_creation_12__prepared;
   tmp_expression_value_83 = BUILTIN_TYPE1(tmp_type_arg_24);
   assert(!(tmp_expression_value_83 == NULL));
   tmp_tuple_element_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[20]);
   Py_DECREF(tmp_expression_value_83);
   if (tmp_tuple_element_49 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 226;

       goto tuple_build_exception_12;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_12, 1, tmp_tuple_element_49);
  }
  goto tuple_build_noexception_12;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_12:;
  Py_DECREF(tmp_mod_expr_right_12);
  goto try_except_handler_37;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_12:;
  tmp_raise_value_12 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
  Py_DECREF(tmp_mod_expr_right_12);
  if (tmp_raise_value_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_37;
  }
  exception_type = tmp_raise_type_12;
  Py_INCREF(tmp_raise_type_12);
  exception_value = tmp_raise_value_12;
  exception_lineno = 226;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_37;
 }
 branch_no_36:;
 goto branch_end_35;
 branch_no_35:;
 {
  PyObject *tmp_assign_source_114;
  tmp_assign_source_114 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_12__prepared == NULL);
  tmp_class_creation_12__prepared = tmp_assign_source_114;
 }
 branch_end_35:;
 {
  PyObject *tmp_assign_source_115;
  {
   PyObject *tmp_set_locals_12;
   CHECK_OBJECT(tmp_class_creation_12__prepared);
   tmp_set_locals_12 = tmp_class_creation_12__prepared;
   locals_aiohttp$client_exceptions$$$class__12_ServerConnectionError_226 = tmp_set_locals_12;
   Py_INCREF(tmp_set_locals_12);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__12_ServerConnectionError_226, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_39;
  }
  tmp_dictset_value = mod_consts[137];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__12_ServerConnectionError_226, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_39;
  }
  tmp_dictset_value = mod_consts[136];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__12_ServerConnectionError_226, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_39;
  }
  {
   nuitka_bool tmp_condition_result_55;
   PyObject *tmp_cmp_expr_left_13;
   PyObject *tmp_cmp_expr_right_13;
   CHECK_OBJECT(tmp_class_creation_12__bases);
   tmp_cmp_expr_left_13 = tmp_class_creation_12__bases;
   CHECK_OBJECT(tmp_class_creation_12__bases_orig);
   tmp_cmp_expr_right_13 = tmp_class_creation_12__bases_orig;
   tmp_condition_result_55 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
   if (tmp_condition_result_55 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 226;

       goto try_except_handler_39;
   }
   if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
       goto branch_yes_37;
   } else {
       goto branch_no_37;
   }
  }
  branch_yes_37:;
  CHECK_OBJECT(tmp_class_creation_12__bases_orig);
  tmp_dictset_value = tmp_class_creation_12__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__12_ServerConnectionError_226, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;

      goto try_except_handler_39;
  }
  branch_no_37:;
  {
   PyObject *tmp_assign_source_116;
   PyObject *tmp_called_value_37;
   PyObject *tmp_args_value_24;
   PyObject *tmp_tuple_element_50;
   PyObject *tmp_kwargs_value_24;
   CHECK_OBJECT(tmp_class_creation_12__metaclass);
   tmp_called_value_37 = tmp_class_creation_12__metaclass;
   tmp_tuple_element_50 = mod_consts[136];
   tmp_args_value_24 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_24, 0, tmp_tuple_element_50);
   CHECK_OBJECT(tmp_class_creation_12__bases);
   tmp_tuple_element_50 = tmp_class_creation_12__bases;
   PyTuple_SET_ITEM0(tmp_args_value_24, 1, tmp_tuple_element_50);
   tmp_tuple_element_50 = locals_aiohttp$client_exceptions$$$class__12_ServerConnectionError_226;
   PyTuple_SET_ITEM0(tmp_args_value_24, 2, tmp_tuple_element_50);
   CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
   tmp_kwargs_value_24 = tmp_class_creation_12__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 226;
   tmp_assign_source_116 = CALL_FUNCTION(tstate, tmp_called_value_37, tmp_args_value_24, tmp_kwargs_value_24);
   Py_DECREF(tmp_args_value_24);
   if (tmp_assign_source_116 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 226;

       goto try_except_handler_39;
   }
   assert(outline_11_var___class__ == NULL);
   outline_11_var___class__ = tmp_assign_source_116;
  }
  CHECK_OBJECT(outline_11_var___class__);
  tmp_assign_source_115 = outline_11_var___class__;
  Py_INCREF(tmp_assign_source_115);
  goto try_return_handler_39;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_39:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__12_ServerConnectionError_226);
  locals_aiohttp$client_exceptions$$$class__12_ServerConnectionError_226 = NULL;
  goto try_return_handler_38;
  // Exception handler code:
  try_except_handler_39:;
  exception_keeper_type_37 = exception_type;
  exception_keeper_value_37 = exception_value;
  exception_keeper_tb_37 = exception_tb;
  exception_keeper_lineno_37 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__12_ServerConnectionError_226);
  locals_aiohttp$client_exceptions$$$class__12_ServerConnectionError_226 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_37;
  exception_value = exception_keeper_value_37;
  exception_tb = exception_keeper_tb_37;
  exception_lineno = exception_keeper_lineno_37;

  goto try_except_handler_38;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_38:;
  CHECK_OBJECT(outline_11_var___class__);
  Py_DECREF(outline_11_var___class__);
  outline_11_var___class__ = NULL;
  goto outline_result_12;
  // Exception handler code:
  try_except_handler_38:;
  exception_keeper_type_38 = exception_type;
  exception_keeper_value_38 = exception_value;
  exception_keeper_tb_38 = exception_tb;
  exception_keeper_lineno_38 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_38;
  exception_value = exception_keeper_value_38;
  exception_tb = exception_keeper_tb_38;
  exception_lineno = exception_keeper_lineno_38;

  goto outline_exception_12;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_12:;
  exception_lineno = 226;
  goto try_except_handler_37;
  outline_result_12:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_115);
 }
 goto try_end_15;
 // Exception handler code:
 try_except_handler_37:;
 exception_keeper_type_39 = exception_type;
 exception_keeper_value_39 = exception_value;
 exception_keeper_tb_39 = exception_tb;
 exception_keeper_lineno_39 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_12__bases_orig);
 tmp_class_creation_12__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_12__bases);
 tmp_class_creation_12__bases = NULL;
 Py_XDECREF(tmp_class_creation_12__class_decl_dict);
 tmp_class_creation_12__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_12__metaclass);
 tmp_class_creation_12__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_12__prepared);
 tmp_class_creation_12__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_39;
 exception_value = exception_keeper_value_39;
 exception_tb = exception_keeper_tb_39;
 exception_lineno = exception_keeper_lineno_39;

 goto frame_exception_exit_1;
 // End of try:
 try_end_15:;
 CHECK_OBJECT(tmp_class_creation_12__bases_orig);
 Py_DECREF(tmp_class_creation_12__bases_orig);
 tmp_class_creation_12__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_12__bases);
 Py_DECREF(tmp_class_creation_12__bases);
 tmp_class_creation_12__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_12__class_decl_dict);
 Py_DECREF(tmp_class_creation_12__class_decl_dict);
 tmp_class_creation_12__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_12__metaclass);
 Py_DECREF(tmp_class_creation_12__metaclass);
 tmp_class_creation_12__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_12__prepared);
 Py_DECREF(tmp_class_creation_12__prepared);
 tmp_class_creation_12__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_117;
  PyObject *tmp_tuple_element_51;
  tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[136]);

  if (unlikely(tmp_tuple_element_51 == NULL)) {
      tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
  }

  if (tmp_tuple_element_51 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  tmp_assign_source_117 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_117, 0, tmp_tuple_element_51);
  assert(tmp_class_creation_13__bases_orig == NULL);
  tmp_class_creation_13__bases_orig = tmp_assign_source_117;
 }
 {
  PyObject *tmp_assign_source_118;
  PyObject *tmp_dircall_arg1_13;
  CHECK_OBJECT(tmp_class_creation_13__bases_orig);
  tmp_dircall_arg1_13 = tmp_class_creation_13__bases_orig;
  Py_INCREF(tmp_dircall_arg1_13);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_13};
      tmp_assign_source_118 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_118 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  assert(tmp_class_creation_13__bases == NULL);
  tmp_class_creation_13__bases = tmp_assign_source_118;
 }
 {
  PyObject *tmp_assign_source_119;
  tmp_assign_source_119 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_13__class_decl_dict == NULL);
  tmp_class_creation_13__class_decl_dict = tmp_assign_source_119;
 }
 {
  PyObject *tmp_assign_source_120;
  PyObject *tmp_metaclass_value_13;
  nuitka_bool tmp_condition_result_56;
  int tmp_truth_name_13;
  PyObject *tmp_type_arg_25;
  PyObject *tmp_expression_value_84;
  PyObject *tmp_subscript_value_21;
  PyObject *tmp_bases_value_13;
  CHECK_OBJECT(tmp_class_creation_13__bases);
  tmp_truth_name_13 = CHECK_IF_TRUE(tmp_class_creation_13__bases);
  if (tmp_truth_name_13 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  tmp_condition_result_56 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_56 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_19;
  } else {
      goto condexpr_false_19;
  }
  condexpr_true_19:;
  CHECK_OBJECT(tmp_class_creation_13__bases);
  tmp_expression_value_84 = tmp_class_creation_13__bases;
  tmp_subscript_value_21 = mod_consts[8];
  tmp_type_arg_25 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_84, tmp_subscript_value_21, 0);
  if (tmp_type_arg_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  tmp_metaclass_value_13 = BUILTIN_TYPE1(tmp_type_arg_25);
  Py_DECREF(tmp_type_arg_25);
  if (tmp_metaclass_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  goto condexpr_end_19;
  condexpr_false_19:;
  tmp_metaclass_value_13 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_13);
  condexpr_end_19:;
  CHECK_OBJECT(tmp_class_creation_13__bases);
  tmp_bases_value_13 = tmp_class_creation_13__bases;
  tmp_assign_source_120 = SELECT_METACLASS(tstate, tmp_metaclass_value_13, tmp_bases_value_13);
  Py_DECREF(tmp_metaclass_value_13);
  if (tmp_assign_source_120 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  assert(tmp_class_creation_13__metaclass == NULL);
  tmp_class_creation_13__metaclass = tmp_assign_source_120;
 }
 {
  bool tmp_condition_result_57;
  PyObject *tmp_expression_value_85;
  CHECK_OBJECT(tmp_class_creation_13__metaclass);
  tmp_expression_value_85 = tmp_class_creation_13__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_85, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  tmp_condition_result_57 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_57 != false) {
      goto branch_yes_38;
  } else {
      goto branch_no_38;
  }
 }
 branch_yes_38:;
 {
  PyObject *tmp_assign_source_121;
  PyObject *tmp_called_value_38;
  PyObject *tmp_expression_value_86;
  PyObject *tmp_args_value_25;
  PyObject *tmp_tuple_element_52;
  PyObject *tmp_kwargs_value_25;
  CHECK_OBJECT(tmp_class_creation_13__metaclass);
  tmp_expression_value_86 = tmp_class_creation_13__metaclass;
  tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[75]);
  if (tmp_called_value_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  tmp_tuple_element_52 = mod_consts[138];
  tmp_args_value_25 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_25, 0, tmp_tuple_element_52);
  CHECK_OBJECT(tmp_class_creation_13__bases);
  tmp_tuple_element_52 = tmp_class_creation_13__bases;
  PyTuple_SET_ITEM0(tmp_args_value_25, 1, tmp_tuple_element_52);
  CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
  tmp_kwargs_value_25 = tmp_class_creation_13__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 230;
  tmp_assign_source_121 = CALL_FUNCTION(tstate, tmp_called_value_38, tmp_args_value_25, tmp_kwargs_value_25);
  Py_DECREF(tmp_called_value_38);
  Py_DECREF(tmp_args_value_25);
  if (tmp_assign_source_121 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  assert(tmp_class_creation_13__prepared == NULL);
  tmp_class_creation_13__prepared = tmp_assign_source_121;
 }
 {
  bool tmp_condition_result_58;
  PyObject *tmp_operand_value_13;
  PyObject *tmp_expression_value_87;
  CHECK_OBJECT(tmp_class_creation_13__prepared);
  tmp_expression_value_87 = tmp_class_creation_13__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_87, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  tmp_operand_value_13 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_13);
  assert(!(tmp_res == -1));
  tmp_condition_result_58 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_58 != false) {
      goto branch_yes_39;
  } else {
      goto branch_no_39;
  }
 }
 branch_yes_39:;
 {
  PyObject *tmp_raise_type_13;
  PyObject *tmp_raise_value_13;
  PyObject *tmp_mod_expr_left_13;
  PyObject *tmp_mod_expr_right_13;
  PyObject *tmp_tuple_element_53;
  PyObject *tmp_expression_value_88;
  PyObject *tmp_name_value_18;
  PyObject *tmp_default_value_13;
  tmp_raise_type_13 = PyExc_TypeError;
  tmp_mod_expr_left_13 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_13__metaclass);
  tmp_expression_value_88 = tmp_class_creation_13__metaclass;
  tmp_name_value_18 = mod_consts[20];
  tmp_default_value_13 = mod_consts[79];
  tmp_tuple_element_53 = BUILTIN_GETATTR(tstate, tmp_expression_value_88, tmp_name_value_18, tmp_default_value_13);
  if (tmp_tuple_element_53 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  tmp_mod_expr_right_13 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_89;
   PyObject *tmp_type_arg_26;
   PyTuple_SET_ITEM(tmp_mod_expr_right_13, 0, tmp_tuple_element_53);
   CHECK_OBJECT(tmp_class_creation_13__prepared);
   tmp_type_arg_26 = tmp_class_creation_13__prepared;
   tmp_expression_value_89 = BUILTIN_TYPE1(tmp_type_arg_26);
   assert(!(tmp_expression_value_89 == NULL));
   tmp_tuple_element_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[20]);
   Py_DECREF(tmp_expression_value_89);
   if (tmp_tuple_element_53 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 230;

       goto tuple_build_exception_13;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_13, 1, tmp_tuple_element_53);
  }
  goto tuple_build_noexception_13;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_13:;
  Py_DECREF(tmp_mod_expr_right_13);
  goto try_except_handler_40;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_13:;
  tmp_raise_value_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
  Py_DECREF(tmp_mod_expr_right_13);
  if (tmp_raise_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_40;
  }
  exception_type = tmp_raise_type_13;
  Py_INCREF(tmp_raise_type_13);
  exception_value = tmp_raise_value_13;
  exception_lineno = 230;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_40;
 }
 branch_no_39:;
 goto branch_end_38;
 branch_no_38:;
 {
  PyObject *tmp_assign_source_122;
  tmp_assign_source_122 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_13__prepared == NULL);
  tmp_class_creation_13__prepared = tmp_assign_source_122;
 }
 branch_end_38:;
 {
  PyObject *tmp_assign_source_123;
  {
   PyObject *tmp_set_locals_13;
   CHECK_OBJECT(tmp_class_creation_13__prepared);
   tmp_set_locals_13 = tmp_class_creation_13__prepared;
   locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230 = tmp_set_locals_13;
   Py_INCREF(tmp_set_locals_13);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_42;
  }
  tmp_dictset_value = mod_consts[139];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_42;
  }
  tmp_dictset_value = mod_consts[138];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_42;
  }
  frame_8f7a1653573b9e8930434ddfe169b1a2_5 = MAKE_CLASS_FRAME(tstate, codeobj_8f7a1653573b9e8930434ddfe169b1a2, module_aiohttp$client_exceptions, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_8f7a1653573b9e8930434ddfe169b1a2_5);
  assert(Py_REFCNT(frame_8f7a1653573b9e8930434ddfe169b1a2_5) == 2);

  // Framed code:
  {
   PyObject *tmp_defaults_1;
   PyObject *tmp_annotations_21;
   PyObject *tmp_dict_key_21;
   PyObject *tmp_dict_value_21;
   PyObject *tmp_expression_value_90;
   PyObject *tmp_subscript_value_22;
   PyObject *tmp_tuple_element_54;
   tmp_defaults_1 = mod_consts[140];
   tmp_dict_key_21 = mod_consts[9];
   tmp_expression_value_90 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230, mod_consts[60]);

   if (tmp_expression_value_90 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[60]);

     if (unlikely(tmp_expression_value_90 == NULL)) {
         tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[60]);
     }

     if (tmp_expression_value_90 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 233;
      type_description_2 = "o";
         goto frame_exception_exit_5;
     }
           Py_INCREF(tmp_expression_value_90);
       } else {
           goto frame_exception_exit_5;
       }
   }

   tmp_tuple_element_54 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230, mod_consts[64]);

   if (tmp_tuple_element_54 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[64]);

     if (unlikely(tmp_tuple_element_54 == NULL)) {
         tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
     }

     if (tmp_tuple_element_54 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_expression_value_90);

      exception_lineno = 233;
      type_description_2 = "o";
         goto frame_exception_exit_5;
     }
           Py_INCREF(tmp_tuple_element_54);
       } else {
           goto frame_exception_exit_5;
       }
   }

   tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_54);
   tmp_tuple_element_54 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230, mod_consts[90]);

   if (tmp_tuple_element_54 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_54 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_tuple_element_54);
       } else {
           goto frame_exception_exit_5;
       }
   }

   PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_54);
   tmp_tuple_element_54 = Py_None;
   PyTuple_SET_ITEM0(tmp_subscript_value_22, 2, tmp_tuple_element_54);
   tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_90, tmp_subscript_value_22);
   Py_DECREF(tmp_expression_value_90);
   Py_DECREF(tmp_subscript_value_22);
   if (tmp_dict_value_21 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 233;
    type_description_2 = "o";
       goto frame_exception_exit_5;
   }
   tmp_annotations_21 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
   Py_DECREF(tmp_dict_value_21);
   assert(!(tmp_res != 0));
   tmp_dict_key_21 = mod_consts[91];
   tmp_dict_value_21 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_21, tmp_dict_value_21);
   assert(!(tmp_res != 0));
   Py_INCREF(tmp_defaults_1);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__15___init__(tmp_defaults_1, tmp_annotations_21);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230, mod_consts[27], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 233;
    type_description_2 = "o";
       goto frame_exception_exit_5;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_4;
  frame_exception_exit_5:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_8f7a1653573b9e8930434ddfe169b1a2_5, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_8f7a1653573b9e8930434ddfe169b1a2_5->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_8f7a1653573b9e8930434ddfe169b1a2_5, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_8f7a1653573b9e8930434ddfe169b1a2_5,
      type_description_2,
      outline_12_var___class__
  );



  assertFrameObject(frame_8f7a1653573b9e8930434ddfe169b1a2_5);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_4;
  frame_no_exception_4:;
  goto skip_nested_handling_4;
  nested_frame_exit_4:;

  goto try_except_handler_42;
  skip_nested_handling_4:;
  {
   nuitka_bool tmp_condition_result_59;
   PyObject *tmp_cmp_expr_left_14;
   PyObject *tmp_cmp_expr_right_14;
   CHECK_OBJECT(tmp_class_creation_13__bases);
   tmp_cmp_expr_left_14 = tmp_class_creation_13__bases;
   CHECK_OBJECT(tmp_class_creation_13__bases_orig);
   tmp_cmp_expr_right_14 = tmp_class_creation_13__bases_orig;
   tmp_condition_result_59 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
   if (tmp_condition_result_59 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 230;

       goto try_except_handler_42;
   }
   if (tmp_condition_result_59 == NUITKA_BOOL_TRUE) {
       goto branch_yes_40;
   } else {
       goto branch_no_40;
   }
  }
  branch_yes_40:;
  CHECK_OBJECT(tmp_class_creation_13__bases_orig);
  tmp_dictset_value = tmp_class_creation_13__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;

      goto try_except_handler_42;
  }
  branch_no_40:;
  {
   PyObject *tmp_assign_source_124;
   PyObject *tmp_called_value_39;
   PyObject *tmp_args_value_26;
   PyObject *tmp_tuple_element_55;
   PyObject *tmp_kwargs_value_26;
   CHECK_OBJECT(tmp_class_creation_13__metaclass);
   tmp_called_value_39 = tmp_class_creation_13__metaclass;
   tmp_tuple_element_55 = mod_consts[138];
   tmp_args_value_26 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_26, 0, tmp_tuple_element_55);
   CHECK_OBJECT(tmp_class_creation_13__bases);
   tmp_tuple_element_55 = tmp_class_creation_13__bases;
   PyTuple_SET_ITEM0(tmp_args_value_26, 1, tmp_tuple_element_55);
   tmp_tuple_element_55 = locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230;
   PyTuple_SET_ITEM0(tmp_args_value_26, 2, tmp_tuple_element_55);
   CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
   tmp_kwargs_value_26 = tmp_class_creation_13__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 230;
   tmp_assign_source_124 = CALL_FUNCTION(tstate, tmp_called_value_39, tmp_args_value_26, tmp_kwargs_value_26);
   Py_DECREF(tmp_args_value_26);
   if (tmp_assign_source_124 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 230;

       goto try_except_handler_42;
   }
   assert(outline_12_var___class__ == NULL);
   outline_12_var___class__ = tmp_assign_source_124;
  }
  CHECK_OBJECT(outline_12_var___class__);
  tmp_assign_source_123 = outline_12_var___class__;
  Py_INCREF(tmp_assign_source_123);
  goto try_return_handler_42;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_42:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230);
  locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230 = NULL;
  goto try_return_handler_41;
  // Exception handler code:
  try_except_handler_42:;
  exception_keeper_type_40 = exception_type;
  exception_keeper_value_40 = exception_value;
  exception_keeper_tb_40 = exception_tb;
  exception_keeper_lineno_40 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230);
  locals_aiohttp$client_exceptions$$$class__13_ServerDisconnectedError_230 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_40;
  exception_value = exception_keeper_value_40;
  exception_tb = exception_keeper_tb_40;
  exception_lineno = exception_keeper_lineno_40;

  goto try_except_handler_41;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_41:;
  CHECK_OBJECT(outline_12_var___class__);
  Py_DECREF(outline_12_var___class__);
  outline_12_var___class__ = NULL;
  goto outline_result_13;
  // Exception handler code:
  try_except_handler_41:;
  exception_keeper_type_41 = exception_type;
  exception_keeper_value_41 = exception_value;
  exception_keeper_tb_41 = exception_tb;
  exception_keeper_lineno_41 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_41;
  exception_value = exception_keeper_value_41;
  exception_tb = exception_keeper_tb_41;
  exception_lineno = exception_keeper_lineno_41;

  goto outline_exception_13;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_13:;
  exception_lineno = 230;
  goto try_except_handler_40;
  outline_result_13:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_123);
 }
 goto try_end_16;
 // Exception handler code:
 try_except_handler_40:;
 exception_keeper_type_42 = exception_type;
 exception_keeper_value_42 = exception_value;
 exception_keeper_tb_42 = exception_tb;
 exception_keeper_lineno_42 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_13__bases_orig);
 tmp_class_creation_13__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_13__bases);
 tmp_class_creation_13__bases = NULL;
 Py_XDECREF(tmp_class_creation_13__class_decl_dict);
 tmp_class_creation_13__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_13__metaclass);
 tmp_class_creation_13__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_13__prepared);
 tmp_class_creation_13__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_42;
 exception_value = exception_keeper_value_42;
 exception_tb = exception_keeper_tb_42;
 exception_lineno = exception_keeper_lineno_42;

 goto frame_exception_exit_1;
 // End of try:
 try_end_16:;
 CHECK_OBJECT(tmp_class_creation_13__bases_orig);
 Py_DECREF(tmp_class_creation_13__bases_orig);
 tmp_class_creation_13__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_13__bases);
 Py_DECREF(tmp_class_creation_13__bases);
 tmp_class_creation_13__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_13__class_decl_dict);
 Py_DECREF(tmp_class_creation_13__class_decl_dict);
 tmp_class_creation_13__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_13__metaclass);
 Py_DECREF(tmp_class_creation_13__metaclass);
 tmp_class_creation_13__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_13__prepared);
 Py_DECREF(tmp_class_creation_13__prepared);
 tmp_class_creation_13__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_125;
  PyObject *tmp_tuple_element_56;
  tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[136]);

  if (unlikely(tmp_tuple_element_56 == NULL)) {
      tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
  }

  if (tmp_tuple_element_56 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  tmp_assign_source_125 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_91;
   PyTuple_SET_ITEM0(tmp_assign_source_125, 0, tmp_tuple_element_56);
   tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[55]);

   if (unlikely(tmp_expression_value_91 == NULL)) {
       tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
   }

   if (tmp_expression_value_91 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 241;

       goto tuple_build_exception_14;
   }
   tmp_tuple_element_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[142]);
   if (tmp_tuple_element_56 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 241;

       goto tuple_build_exception_14;
   }
   PyTuple_SET_ITEM(tmp_assign_source_125, 1, tmp_tuple_element_56);
  }
  goto tuple_build_noexception_14;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_14:;
  Py_DECREF(tmp_assign_source_125);
  goto try_except_handler_43;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_14:;
  assert(tmp_class_creation_14__bases_orig == NULL);
  tmp_class_creation_14__bases_orig = tmp_assign_source_125;
 }
 {
  PyObject *tmp_assign_source_126;
  PyObject *tmp_dircall_arg1_14;
  CHECK_OBJECT(tmp_class_creation_14__bases_orig);
  tmp_dircall_arg1_14 = tmp_class_creation_14__bases_orig;
  Py_INCREF(tmp_dircall_arg1_14);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_14};
      tmp_assign_source_126 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_126 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  assert(tmp_class_creation_14__bases == NULL);
  tmp_class_creation_14__bases = tmp_assign_source_126;
 }
 {
  PyObject *tmp_assign_source_127;
  tmp_assign_source_127 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_14__class_decl_dict == NULL);
  tmp_class_creation_14__class_decl_dict = tmp_assign_source_127;
 }
 {
  PyObject *tmp_assign_source_128;
  PyObject *tmp_metaclass_value_14;
  nuitka_bool tmp_condition_result_60;
  int tmp_truth_name_14;
  PyObject *tmp_type_arg_27;
  PyObject *tmp_expression_value_92;
  PyObject *tmp_subscript_value_23;
  PyObject *tmp_bases_value_14;
  CHECK_OBJECT(tmp_class_creation_14__bases);
  tmp_truth_name_14 = CHECK_IF_TRUE(tmp_class_creation_14__bases);
  if (tmp_truth_name_14 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  tmp_condition_result_60 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_60 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_20;
  } else {
      goto condexpr_false_20;
  }
  condexpr_true_20:;
  CHECK_OBJECT(tmp_class_creation_14__bases);
  tmp_expression_value_92 = tmp_class_creation_14__bases;
  tmp_subscript_value_23 = mod_consts[8];
  tmp_type_arg_27 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_92, tmp_subscript_value_23, 0);
  if (tmp_type_arg_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  tmp_metaclass_value_14 = BUILTIN_TYPE1(tmp_type_arg_27);
  Py_DECREF(tmp_type_arg_27);
  if (tmp_metaclass_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  goto condexpr_end_20;
  condexpr_false_20:;
  tmp_metaclass_value_14 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_14);
  condexpr_end_20:;
  CHECK_OBJECT(tmp_class_creation_14__bases);
  tmp_bases_value_14 = tmp_class_creation_14__bases;
  tmp_assign_source_128 = SELECT_METACLASS(tstate, tmp_metaclass_value_14, tmp_bases_value_14);
  Py_DECREF(tmp_metaclass_value_14);
  if (tmp_assign_source_128 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  assert(tmp_class_creation_14__metaclass == NULL);
  tmp_class_creation_14__metaclass = tmp_assign_source_128;
 }
 {
  bool tmp_condition_result_61;
  PyObject *tmp_expression_value_93;
  CHECK_OBJECT(tmp_class_creation_14__metaclass);
  tmp_expression_value_93 = tmp_class_creation_14__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_93, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  tmp_condition_result_61 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_61 != false) {
      goto branch_yes_41;
  } else {
      goto branch_no_41;
  }
 }
 branch_yes_41:;
 {
  PyObject *tmp_assign_source_129;
  PyObject *tmp_called_value_40;
  PyObject *tmp_expression_value_94;
  PyObject *tmp_args_value_27;
  PyObject *tmp_tuple_element_57;
  PyObject *tmp_kwargs_value_27;
  CHECK_OBJECT(tmp_class_creation_14__metaclass);
  tmp_expression_value_94 = tmp_class_creation_14__metaclass;
  tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[75]);
  if (tmp_called_value_40 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  tmp_tuple_element_57 = mod_consts[143];
  tmp_args_value_27 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_27, 0, tmp_tuple_element_57);
  CHECK_OBJECT(tmp_class_creation_14__bases);
  tmp_tuple_element_57 = tmp_class_creation_14__bases;
  PyTuple_SET_ITEM0(tmp_args_value_27, 1, tmp_tuple_element_57);
  CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
  tmp_kwargs_value_27 = tmp_class_creation_14__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 241;
  tmp_assign_source_129 = CALL_FUNCTION(tstate, tmp_called_value_40, tmp_args_value_27, tmp_kwargs_value_27);
  Py_DECREF(tmp_called_value_40);
  Py_DECREF(tmp_args_value_27);
  if (tmp_assign_source_129 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  assert(tmp_class_creation_14__prepared == NULL);
  tmp_class_creation_14__prepared = tmp_assign_source_129;
 }
 {
  bool tmp_condition_result_62;
  PyObject *tmp_operand_value_14;
  PyObject *tmp_expression_value_95;
  CHECK_OBJECT(tmp_class_creation_14__prepared);
  tmp_expression_value_95 = tmp_class_creation_14__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_95, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  tmp_operand_value_14 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_14);
  assert(!(tmp_res == -1));
  tmp_condition_result_62 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_62 != false) {
      goto branch_yes_42;
  } else {
      goto branch_no_42;
  }
 }
 branch_yes_42:;
 {
  PyObject *tmp_raise_type_14;
  PyObject *tmp_raise_value_14;
  PyObject *tmp_mod_expr_left_14;
  PyObject *tmp_mod_expr_right_14;
  PyObject *tmp_tuple_element_58;
  PyObject *tmp_expression_value_96;
  PyObject *tmp_name_value_19;
  PyObject *tmp_default_value_14;
  tmp_raise_type_14 = PyExc_TypeError;
  tmp_mod_expr_left_14 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_14__metaclass);
  tmp_expression_value_96 = tmp_class_creation_14__metaclass;
  tmp_name_value_19 = mod_consts[20];
  tmp_default_value_14 = mod_consts[79];
  tmp_tuple_element_58 = BUILTIN_GETATTR(tstate, tmp_expression_value_96, tmp_name_value_19, tmp_default_value_14);
  if (tmp_tuple_element_58 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  tmp_mod_expr_right_14 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_97;
   PyObject *tmp_type_arg_28;
   PyTuple_SET_ITEM(tmp_mod_expr_right_14, 0, tmp_tuple_element_58);
   CHECK_OBJECT(tmp_class_creation_14__prepared);
   tmp_type_arg_28 = tmp_class_creation_14__prepared;
   tmp_expression_value_97 = BUILTIN_TYPE1(tmp_type_arg_28);
   assert(!(tmp_expression_value_97 == NULL));
   tmp_tuple_element_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[20]);
   Py_DECREF(tmp_expression_value_97);
   if (tmp_tuple_element_58 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 241;

       goto tuple_build_exception_15;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_14, 1, tmp_tuple_element_58);
  }
  goto tuple_build_noexception_15;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_15:;
  Py_DECREF(tmp_mod_expr_right_14);
  goto try_except_handler_43;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_15:;
  tmp_raise_value_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
  Py_DECREF(tmp_mod_expr_right_14);
  if (tmp_raise_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_43;
  }
  exception_type = tmp_raise_type_14;
  Py_INCREF(tmp_raise_type_14);
  exception_value = tmp_raise_value_14;
  exception_lineno = 241;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_43;
 }
 branch_no_42:;
 goto branch_end_41;
 branch_no_41:;
 {
  PyObject *tmp_assign_source_130;
  tmp_assign_source_130 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_14__prepared == NULL);
  tmp_class_creation_14__prepared = tmp_assign_source_130;
 }
 branch_end_41:;
 {
  PyObject *tmp_assign_source_131;
  {
   PyObject *tmp_set_locals_14;
   CHECK_OBJECT(tmp_class_creation_14__prepared);
   tmp_set_locals_14 = tmp_class_creation_14__prepared;
   locals_aiohttp$client_exceptions$$$class__14_ServerTimeoutError_241 = tmp_set_locals_14;
   Py_INCREF(tmp_set_locals_14);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__14_ServerTimeoutError_241, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_45;
  }
  tmp_dictset_value = mod_consts[144];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__14_ServerTimeoutError_241, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_45;
  }
  tmp_dictset_value = mod_consts[143];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__14_ServerTimeoutError_241, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_45;
  }
  {
   nuitka_bool tmp_condition_result_63;
   PyObject *tmp_cmp_expr_left_15;
   PyObject *tmp_cmp_expr_right_15;
   CHECK_OBJECT(tmp_class_creation_14__bases);
   tmp_cmp_expr_left_15 = tmp_class_creation_14__bases;
   CHECK_OBJECT(tmp_class_creation_14__bases_orig);
   tmp_cmp_expr_right_15 = tmp_class_creation_14__bases_orig;
   tmp_condition_result_63 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
   if (tmp_condition_result_63 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 241;

       goto try_except_handler_45;
   }
   if (tmp_condition_result_63 == NUITKA_BOOL_TRUE) {
       goto branch_yes_43;
   } else {
       goto branch_no_43;
   }
  }
  branch_yes_43:;
  CHECK_OBJECT(tmp_class_creation_14__bases_orig);
  tmp_dictset_value = tmp_class_creation_14__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__14_ServerTimeoutError_241, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 241;

      goto try_except_handler_45;
  }
  branch_no_43:;
  {
   PyObject *tmp_assign_source_132;
   PyObject *tmp_called_value_41;
   PyObject *tmp_args_value_28;
   PyObject *tmp_tuple_element_59;
   PyObject *tmp_kwargs_value_28;
   CHECK_OBJECT(tmp_class_creation_14__metaclass);
   tmp_called_value_41 = tmp_class_creation_14__metaclass;
   tmp_tuple_element_59 = mod_consts[143];
   tmp_args_value_28 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_28, 0, tmp_tuple_element_59);
   CHECK_OBJECT(tmp_class_creation_14__bases);
   tmp_tuple_element_59 = tmp_class_creation_14__bases;
   PyTuple_SET_ITEM0(tmp_args_value_28, 1, tmp_tuple_element_59);
   tmp_tuple_element_59 = locals_aiohttp$client_exceptions$$$class__14_ServerTimeoutError_241;
   PyTuple_SET_ITEM0(tmp_args_value_28, 2, tmp_tuple_element_59);
   CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
   tmp_kwargs_value_28 = tmp_class_creation_14__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 241;
   tmp_assign_source_132 = CALL_FUNCTION(tstate, tmp_called_value_41, tmp_args_value_28, tmp_kwargs_value_28);
   Py_DECREF(tmp_args_value_28);
   if (tmp_assign_source_132 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 241;

       goto try_except_handler_45;
   }
   assert(outline_13_var___class__ == NULL);
   outline_13_var___class__ = tmp_assign_source_132;
  }
  CHECK_OBJECT(outline_13_var___class__);
  tmp_assign_source_131 = outline_13_var___class__;
  Py_INCREF(tmp_assign_source_131);
  goto try_return_handler_45;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_45:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__14_ServerTimeoutError_241);
  locals_aiohttp$client_exceptions$$$class__14_ServerTimeoutError_241 = NULL;
  goto try_return_handler_44;
  // Exception handler code:
  try_except_handler_45:;
  exception_keeper_type_43 = exception_type;
  exception_keeper_value_43 = exception_value;
  exception_keeper_tb_43 = exception_tb;
  exception_keeper_lineno_43 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__14_ServerTimeoutError_241);
  locals_aiohttp$client_exceptions$$$class__14_ServerTimeoutError_241 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_43;
  exception_value = exception_keeper_value_43;
  exception_tb = exception_keeper_tb_43;
  exception_lineno = exception_keeper_lineno_43;

  goto try_except_handler_44;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_44:;
  CHECK_OBJECT(outline_13_var___class__);
  Py_DECREF(outline_13_var___class__);
  outline_13_var___class__ = NULL;
  goto outline_result_14;
  // Exception handler code:
  try_except_handler_44:;
  exception_keeper_type_44 = exception_type;
  exception_keeper_value_44 = exception_value;
  exception_keeper_tb_44 = exception_tb;
  exception_keeper_lineno_44 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_44;
  exception_value = exception_keeper_value_44;
  exception_tb = exception_keeper_tb_44;
  exception_lineno = exception_keeper_lineno_44;

  goto outline_exception_14;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_14:;
  exception_lineno = 241;
  goto try_except_handler_43;
  outline_result_14:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_131);
 }
 goto try_end_17;
 // Exception handler code:
 try_except_handler_43:;
 exception_keeper_type_45 = exception_type;
 exception_keeper_value_45 = exception_value;
 exception_keeper_tb_45 = exception_tb;
 exception_keeper_lineno_45 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_14__bases_orig);
 tmp_class_creation_14__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_14__bases);
 tmp_class_creation_14__bases = NULL;
 Py_XDECREF(tmp_class_creation_14__class_decl_dict);
 tmp_class_creation_14__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_14__metaclass);
 tmp_class_creation_14__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_14__prepared);
 tmp_class_creation_14__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_45;
 exception_value = exception_keeper_value_45;
 exception_tb = exception_keeper_tb_45;
 exception_lineno = exception_keeper_lineno_45;

 goto frame_exception_exit_1;
 // End of try:
 try_end_17:;
 CHECK_OBJECT(tmp_class_creation_14__bases_orig);
 Py_DECREF(tmp_class_creation_14__bases_orig);
 tmp_class_creation_14__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_14__bases);
 Py_DECREF(tmp_class_creation_14__bases);
 tmp_class_creation_14__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_14__class_decl_dict);
 Py_DECREF(tmp_class_creation_14__class_decl_dict);
 tmp_class_creation_14__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_14__metaclass);
 Py_DECREF(tmp_class_creation_14__metaclass);
 tmp_class_creation_14__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_14__prepared);
 Py_DECREF(tmp_class_creation_14__prepared);
 tmp_class_creation_14__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_133;
  PyObject *tmp_tuple_element_60;
  tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[136]);

  if (unlikely(tmp_tuple_element_60 == NULL)) {
      tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
  }

  if (tmp_tuple_element_60 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  tmp_assign_source_133 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_133, 0, tmp_tuple_element_60);
  assert(tmp_class_creation_15__bases_orig == NULL);
  tmp_class_creation_15__bases_orig = tmp_assign_source_133;
 }
 {
  PyObject *tmp_assign_source_134;
  PyObject *tmp_dircall_arg1_15;
  CHECK_OBJECT(tmp_class_creation_15__bases_orig);
  tmp_dircall_arg1_15 = tmp_class_creation_15__bases_orig;
  Py_INCREF(tmp_dircall_arg1_15);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_15};
      tmp_assign_source_134 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_134 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  assert(tmp_class_creation_15__bases == NULL);
  tmp_class_creation_15__bases = tmp_assign_source_134;
 }
 {
  PyObject *tmp_assign_source_135;
  tmp_assign_source_135 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_15__class_decl_dict == NULL);
  tmp_class_creation_15__class_decl_dict = tmp_assign_source_135;
 }
 {
  PyObject *tmp_assign_source_136;
  PyObject *tmp_metaclass_value_15;
  nuitka_bool tmp_condition_result_64;
  int tmp_truth_name_15;
  PyObject *tmp_type_arg_29;
  PyObject *tmp_expression_value_98;
  PyObject *tmp_subscript_value_24;
  PyObject *tmp_bases_value_15;
  CHECK_OBJECT(tmp_class_creation_15__bases);
  tmp_truth_name_15 = CHECK_IF_TRUE(tmp_class_creation_15__bases);
  if (tmp_truth_name_15 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  tmp_condition_result_64 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_64 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_21;
  } else {
      goto condexpr_false_21;
  }
  condexpr_true_21:;
  CHECK_OBJECT(tmp_class_creation_15__bases);
  tmp_expression_value_98 = tmp_class_creation_15__bases;
  tmp_subscript_value_24 = mod_consts[8];
  tmp_type_arg_29 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_98, tmp_subscript_value_24, 0);
  if (tmp_type_arg_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  tmp_metaclass_value_15 = BUILTIN_TYPE1(tmp_type_arg_29);
  Py_DECREF(tmp_type_arg_29);
  if (tmp_metaclass_value_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  goto condexpr_end_21;
  condexpr_false_21:;
  tmp_metaclass_value_15 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_15);
  condexpr_end_21:;
  CHECK_OBJECT(tmp_class_creation_15__bases);
  tmp_bases_value_15 = tmp_class_creation_15__bases;
  tmp_assign_source_136 = SELECT_METACLASS(tstate, tmp_metaclass_value_15, tmp_bases_value_15);
  Py_DECREF(tmp_metaclass_value_15);
  if (tmp_assign_source_136 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  assert(tmp_class_creation_15__metaclass == NULL);
  tmp_class_creation_15__metaclass = tmp_assign_source_136;
 }
 {
  bool tmp_condition_result_65;
  PyObject *tmp_expression_value_99;
  CHECK_OBJECT(tmp_class_creation_15__metaclass);
  tmp_expression_value_99 = tmp_class_creation_15__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_99, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  tmp_condition_result_65 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_65 != false) {
      goto branch_yes_44;
  } else {
      goto branch_no_44;
  }
 }
 branch_yes_44:;
 {
  PyObject *tmp_assign_source_137;
  PyObject *tmp_called_value_42;
  PyObject *tmp_expression_value_100;
  PyObject *tmp_args_value_29;
  PyObject *tmp_tuple_element_61;
  PyObject *tmp_kwargs_value_29;
  CHECK_OBJECT(tmp_class_creation_15__metaclass);
  tmp_expression_value_100 = tmp_class_creation_15__metaclass;
  tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[75]);
  if (tmp_called_value_42 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  tmp_tuple_element_61 = mod_consts[145];
  tmp_args_value_29 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_29, 0, tmp_tuple_element_61);
  CHECK_OBJECT(tmp_class_creation_15__bases);
  tmp_tuple_element_61 = tmp_class_creation_15__bases;
  PyTuple_SET_ITEM0(tmp_args_value_29, 1, tmp_tuple_element_61);
  CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
  tmp_kwargs_value_29 = tmp_class_creation_15__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 245;
  tmp_assign_source_137 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_29, tmp_kwargs_value_29);
  Py_DECREF(tmp_called_value_42);
  Py_DECREF(tmp_args_value_29);
  if (tmp_assign_source_137 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  assert(tmp_class_creation_15__prepared == NULL);
  tmp_class_creation_15__prepared = tmp_assign_source_137;
 }
 {
  bool tmp_condition_result_66;
  PyObject *tmp_operand_value_15;
  PyObject *tmp_expression_value_101;
  CHECK_OBJECT(tmp_class_creation_15__prepared);
  tmp_expression_value_101 = tmp_class_creation_15__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_101, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  tmp_operand_value_15 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_15);
  assert(!(tmp_res == -1));
  tmp_condition_result_66 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_66 != false) {
      goto branch_yes_45;
  } else {
      goto branch_no_45;
  }
 }
 branch_yes_45:;
 {
  PyObject *tmp_raise_type_15;
  PyObject *tmp_raise_value_15;
  PyObject *tmp_mod_expr_left_15;
  PyObject *tmp_mod_expr_right_15;
  PyObject *tmp_tuple_element_62;
  PyObject *tmp_expression_value_102;
  PyObject *tmp_name_value_20;
  PyObject *tmp_default_value_15;
  tmp_raise_type_15 = PyExc_TypeError;
  tmp_mod_expr_left_15 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_15__metaclass);
  tmp_expression_value_102 = tmp_class_creation_15__metaclass;
  tmp_name_value_20 = mod_consts[20];
  tmp_default_value_15 = mod_consts[79];
  tmp_tuple_element_62 = BUILTIN_GETATTR(tstate, tmp_expression_value_102, tmp_name_value_20, tmp_default_value_15);
  if (tmp_tuple_element_62 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  tmp_mod_expr_right_15 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_103;
   PyObject *tmp_type_arg_30;
   PyTuple_SET_ITEM(tmp_mod_expr_right_15, 0, tmp_tuple_element_62);
   CHECK_OBJECT(tmp_class_creation_15__prepared);
   tmp_type_arg_30 = tmp_class_creation_15__prepared;
   tmp_expression_value_103 = BUILTIN_TYPE1(tmp_type_arg_30);
   assert(!(tmp_expression_value_103 == NULL));
   tmp_tuple_element_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[20]);
   Py_DECREF(tmp_expression_value_103);
   if (tmp_tuple_element_62 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 245;

       goto tuple_build_exception_16;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_15, 1, tmp_tuple_element_62);
  }
  goto tuple_build_noexception_16;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_16:;
  Py_DECREF(tmp_mod_expr_right_15);
  goto try_except_handler_46;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_16:;
  tmp_raise_value_15 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
  Py_DECREF(tmp_mod_expr_right_15);
  if (tmp_raise_value_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_46;
  }
  exception_type = tmp_raise_type_15;
  Py_INCREF(tmp_raise_type_15);
  exception_value = tmp_raise_value_15;
  exception_lineno = 245;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_46;
 }
 branch_no_45:;
 goto branch_end_44;
 branch_no_44:;
 {
  PyObject *tmp_assign_source_138;
  tmp_assign_source_138 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_15__prepared == NULL);
  tmp_class_creation_15__prepared = tmp_assign_source_138;
 }
 branch_end_44:;
 {
  PyObject *tmp_assign_source_139;
  {
   PyObject *tmp_set_locals_15;
   CHECK_OBJECT(tmp_class_creation_15__prepared);
   tmp_set_locals_15 = tmp_class_creation_15__prepared;
   locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245 = tmp_set_locals_15;
   Py_INCREF(tmp_set_locals_15);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_48;
  }
  tmp_dictset_value = mod_consts[146];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_48;
  }
  tmp_dictset_value = mod_consts[145];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_48;
  }
  frame_48739845754f316564ed7ef5fb25faf9_6 = MAKE_CLASS_FRAME(tstate, codeobj_48739845754f316564ed7ef5fb25faf9, module_aiohttp$client_exceptions, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_48739845754f316564ed7ef5fb25faf9_6);
  assert(Py_REFCNT(frame_48739845754f316564ed7ef5fb25faf9_6) == 2);

  // Framed code:
  {
   PyObject *tmp_annotations_22;
   PyObject *tmp_dict_key_22;
   PyObject *tmp_dict_value_22;
   tmp_dict_key_22 = mod_consts[38];
   tmp_dict_value_22 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245, mod_consts[147]);

   if (tmp_dict_value_22 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_22 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_22);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_annotations_22 = _PyDict_NewPresized( 5 );
   tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
   Py_DECREF(tmp_dict_value_22);
   assert(!(tmp_res != 0));
   tmp_dict_key_22 = mod_consts[39];
   tmp_dict_value_22 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245, mod_consts[147]);

   if (tmp_dict_value_22 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_22 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_22);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
   Py_DECREF(tmp_dict_value_22);
   assert(!(tmp_res != 0));
   tmp_dict_key_22 = mod_consts[30];
   tmp_dict_value_22 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245, mod_consts[90]);

   if (tmp_dict_value_22 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_22 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_22);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
   Py_DECREF(tmp_dict_value_22);
   assert(!(tmp_res != 0));
   tmp_dict_key_22 = mod_consts[31];
   tmp_dict_value_22 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245, mod_consts[89]);

   if (tmp_dict_value_22 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_22 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_dict_value_22);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
   Py_DECREF(tmp_dict_value_22);
   assert(!(tmp_res != 0));
   tmp_dict_key_22 = mod_consts[91];
   tmp_dict_value_22 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_22, tmp_dict_value_22);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__16___init__(tmp_annotations_22);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245, mod_consts[27], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 248;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
  }
  {
   PyObject *tmp_annotations_23;
   PyObject *tmp_dict_key_23;
   PyObject *tmp_dict_value_23;
   tmp_dict_key_23 = mod_consts[91];
   tmp_dict_value_23 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245, mod_consts[90]);

   if (tmp_dict_value_23 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_23 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_23);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_annotations_23 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_23, tmp_dict_value_23);
   Py_DECREF(tmp_dict_value_23);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__17___repr__(tmp_annotations_23);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245, mod_consts[95], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 255;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_5;
  frame_exception_exit_6:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_48739845754f316564ed7ef5fb25faf9_6, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_48739845754f316564ed7ef5fb25faf9_6->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_48739845754f316564ed7ef5fb25faf9_6, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_48739845754f316564ed7ef5fb25faf9_6,
      type_description_2,
      outline_14_var___class__
  );



  assertFrameObject(frame_48739845754f316564ed7ef5fb25faf9_6);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_5;
  frame_no_exception_5:;
  goto skip_nested_handling_5;
  nested_frame_exit_5:;

  goto try_except_handler_48;
  skip_nested_handling_5:;
  {
   nuitka_bool tmp_condition_result_67;
   PyObject *tmp_cmp_expr_left_16;
   PyObject *tmp_cmp_expr_right_16;
   CHECK_OBJECT(tmp_class_creation_15__bases);
   tmp_cmp_expr_left_16 = tmp_class_creation_15__bases;
   CHECK_OBJECT(tmp_class_creation_15__bases_orig);
   tmp_cmp_expr_right_16 = tmp_class_creation_15__bases_orig;
   tmp_condition_result_67 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
   if (tmp_condition_result_67 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 245;

       goto try_except_handler_48;
   }
   if (tmp_condition_result_67 == NUITKA_BOOL_TRUE) {
       goto branch_yes_46;
   } else {
       goto branch_no_46;
   }
  }
  branch_yes_46:;
  CHECK_OBJECT(tmp_class_creation_15__bases_orig);
  tmp_dictset_value = tmp_class_creation_15__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;

      goto try_except_handler_48;
  }
  branch_no_46:;
  {
   PyObject *tmp_assign_source_140;
   PyObject *tmp_called_value_43;
   PyObject *tmp_args_value_30;
   PyObject *tmp_tuple_element_63;
   PyObject *tmp_kwargs_value_30;
   CHECK_OBJECT(tmp_class_creation_15__metaclass);
   tmp_called_value_43 = tmp_class_creation_15__metaclass;
   tmp_tuple_element_63 = mod_consts[145];
   tmp_args_value_30 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_30, 0, tmp_tuple_element_63);
   CHECK_OBJECT(tmp_class_creation_15__bases);
   tmp_tuple_element_63 = tmp_class_creation_15__bases;
   PyTuple_SET_ITEM0(tmp_args_value_30, 1, tmp_tuple_element_63);
   tmp_tuple_element_63 = locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245;
   PyTuple_SET_ITEM0(tmp_args_value_30, 2, tmp_tuple_element_63);
   CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
   tmp_kwargs_value_30 = tmp_class_creation_15__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 245;
   tmp_assign_source_140 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_30, tmp_kwargs_value_30);
   Py_DECREF(tmp_args_value_30);
   if (tmp_assign_source_140 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 245;

       goto try_except_handler_48;
   }
   assert(outline_14_var___class__ == NULL);
   outline_14_var___class__ = tmp_assign_source_140;
  }
  CHECK_OBJECT(outline_14_var___class__);
  tmp_assign_source_139 = outline_14_var___class__;
  Py_INCREF(tmp_assign_source_139);
  goto try_return_handler_48;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_48:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245);
  locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245 = NULL;
  goto try_return_handler_47;
  // Exception handler code:
  try_except_handler_48:;
  exception_keeper_type_46 = exception_type;
  exception_keeper_value_46 = exception_value;
  exception_keeper_tb_46 = exception_tb;
  exception_keeper_lineno_46 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245);
  locals_aiohttp$client_exceptions$$$class__15_ServerFingerprintMismatch_245 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_46;
  exception_value = exception_keeper_value_46;
  exception_tb = exception_keeper_tb_46;
  exception_lineno = exception_keeper_lineno_46;

  goto try_except_handler_47;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_47:;
  CHECK_OBJECT(outline_14_var___class__);
  Py_DECREF(outline_14_var___class__);
  outline_14_var___class__ = NULL;
  goto outline_result_15;
  // Exception handler code:
  try_except_handler_47:;
  exception_keeper_type_47 = exception_type;
  exception_keeper_value_47 = exception_value;
  exception_keeper_tb_47 = exception_tb;
  exception_keeper_lineno_47 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_47;
  exception_value = exception_keeper_value_47;
  exception_tb = exception_keeper_tb_47;
  exception_lineno = exception_keeper_lineno_47;

  goto outline_exception_15;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_15:;
  exception_lineno = 245;
  goto try_except_handler_46;
  outline_result_15:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_139);
 }
 goto try_end_18;
 // Exception handler code:
 try_except_handler_46:;
 exception_keeper_type_48 = exception_type;
 exception_keeper_value_48 = exception_value;
 exception_keeper_tb_48 = exception_tb;
 exception_keeper_lineno_48 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_15__bases_orig);
 tmp_class_creation_15__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_15__bases);
 tmp_class_creation_15__bases = NULL;
 Py_XDECREF(tmp_class_creation_15__class_decl_dict);
 tmp_class_creation_15__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_15__metaclass);
 tmp_class_creation_15__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_15__prepared);
 tmp_class_creation_15__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_48;
 exception_value = exception_keeper_value_48;
 exception_tb = exception_keeper_tb_48;
 exception_lineno = exception_keeper_lineno_48;

 goto frame_exception_exit_1;
 // End of try:
 try_end_18:;
 CHECK_OBJECT(tmp_class_creation_15__bases_orig);
 Py_DECREF(tmp_class_creation_15__bases_orig);
 tmp_class_creation_15__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_15__bases);
 Py_DECREF(tmp_class_creation_15__bases);
 tmp_class_creation_15__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_15__class_decl_dict);
 Py_DECREF(tmp_class_creation_15__class_decl_dict);
 tmp_class_creation_15__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_15__metaclass);
 Py_DECREF(tmp_class_creation_15__metaclass);
 tmp_class_creation_15__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_15__prepared);
 Py_DECREF(tmp_class_creation_15__prepared);
 tmp_class_creation_15__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_141;
  PyObject *tmp_tuple_element_64;
  tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_tuple_element_64 == NULL)) {
      tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_tuple_element_64 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  tmp_assign_source_141 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_141, 0, tmp_tuple_element_64);
  assert(tmp_class_creation_16__bases_orig == NULL);
  tmp_class_creation_16__bases_orig = tmp_assign_source_141;
 }
 {
  PyObject *tmp_assign_source_142;
  PyObject *tmp_dircall_arg1_16;
  CHECK_OBJECT(tmp_class_creation_16__bases_orig);
  tmp_dircall_arg1_16 = tmp_class_creation_16__bases_orig;
  Py_INCREF(tmp_dircall_arg1_16);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_16};
      tmp_assign_source_142 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_142 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  assert(tmp_class_creation_16__bases == NULL);
  tmp_class_creation_16__bases = tmp_assign_source_142;
 }
 {
  PyObject *tmp_assign_source_143;
  tmp_assign_source_143 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_16__class_decl_dict == NULL);
  tmp_class_creation_16__class_decl_dict = tmp_assign_source_143;
 }
 {
  PyObject *tmp_assign_source_144;
  PyObject *tmp_metaclass_value_16;
  nuitka_bool tmp_condition_result_68;
  int tmp_truth_name_16;
  PyObject *tmp_type_arg_31;
  PyObject *tmp_expression_value_104;
  PyObject *tmp_subscript_value_25;
  PyObject *tmp_bases_value_16;
  CHECK_OBJECT(tmp_class_creation_16__bases);
  tmp_truth_name_16 = CHECK_IF_TRUE(tmp_class_creation_16__bases);
  if (tmp_truth_name_16 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  tmp_condition_result_68 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_68 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_22;
  } else {
      goto condexpr_false_22;
  }
  condexpr_true_22:;
  CHECK_OBJECT(tmp_class_creation_16__bases);
  tmp_expression_value_104 = tmp_class_creation_16__bases;
  tmp_subscript_value_25 = mod_consts[8];
  tmp_type_arg_31 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_104, tmp_subscript_value_25, 0);
  if (tmp_type_arg_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  tmp_metaclass_value_16 = BUILTIN_TYPE1(tmp_type_arg_31);
  Py_DECREF(tmp_type_arg_31);
  if (tmp_metaclass_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  goto condexpr_end_22;
  condexpr_false_22:;
  tmp_metaclass_value_16 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_16);
  condexpr_end_22:;
  CHECK_OBJECT(tmp_class_creation_16__bases);
  tmp_bases_value_16 = tmp_class_creation_16__bases;
  tmp_assign_source_144 = SELECT_METACLASS(tstate, tmp_metaclass_value_16, tmp_bases_value_16);
  Py_DECREF(tmp_metaclass_value_16);
  if (tmp_assign_source_144 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  assert(tmp_class_creation_16__metaclass == NULL);
  tmp_class_creation_16__metaclass = tmp_assign_source_144;
 }
 {
  bool tmp_condition_result_69;
  PyObject *tmp_expression_value_105;
  CHECK_OBJECT(tmp_class_creation_16__metaclass);
  tmp_expression_value_105 = tmp_class_creation_16__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_105, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  tmp_condition_result_69 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_69 != false) {
      goto branch_yes_47;
  } else {
      goto branch_no_47;
  }
 }
 branch_yes_47:;
 {
  PyObject *tmp_assign_source_145;
  PyObject *tmp_called_value_44;
  PyObject *tmp_expression_value_106;
  PyObject *tmp_args_value_31;
  PyObject *tmp_tuple_element_65;
  PyObject *tmp_kwargs_value_31;
  CHECK_OBJECT(tmp_class_creation_16__metaclass);
  tmp_expression_value_106 = tmp_class_creation_16__metaclass;
  tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[75]);
  if (tmp_called_value_44 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  tmp_tuple_element_65 = mod_consts[150];
  tmp_args_value_31 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_31, 0, tmp_tuple_element_65);
  CHECK_OBJECT(tmp_class_creation_16__bases);
  tmp_tuple_element_65 = tmp_class_creation_16__bases;
  PyTuple_SET_ITEM0(tmp_args_value_31, 1, tmp_tuple_element_65);
  CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
  tmp_kwargs_value_31 = tmp_class_creation_16__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 261;
  tmp_assign_source_145 = CALL_FUNCTION(tstate, tmp_called_value_44, tmp_args_value_31, tmp_kwargs_value_31);
  Py_DECREF(tmp_called_value_44);
  Py_DECREF(tmp_args_value_31);
  if (tmp_assign_source_145 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  assert(tmp_class_creation_16__prepared == NULL);
  tmp_class_creation_16__prepared = tmp_assign_source_145;
 }
 {
  bool tmp_condition_result_70;
  PyObject *tmp_operand_value_16;
  PyObject *tmp_expression_value_107;
  CHECK_OBJECT(tmp_class_creation_16__prepared);
  tmp_expression_value_107 = tmp_class_creation_16__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_107, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  tmp_operand_value_16 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_16);
  assert(!(tmp_res == -1));
  tmp_condition_result_70 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_70 != false) {
      goto branch_yes_48;
  } else {
      goto branch_no_48;
  }
 }
 branch_yes_48:;
 {
  PyObject *tmp_raise_type_16;
  PyObject *tmp_raise_value_16;
  PyObject *tmp_mod_expr_left_16;
  PyObject *tmp_mod_expr_right_16;
  PyObject *tmp_tuple_element_66;
  PyObject *tmp_expression_value_108;
  PyObject *tmp_name_value_21;
  PyObject *tmp_default_value_16;
  tmp_raise_type_16 = PyExc_TypeError;
  tmp_mod_expr_left_16 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_16__metaclass);
  tmp_expression_value_108 = tmp_class_creation_16__metaclass;
  tmp_name_value_21 = mod_consts[20];
  tmp_default_value_16 = mod_consts[79];
  tmp_tuple_element_66 = BUILTIN_GETATTR(tstate, tmp_expression_value_108, tmp_name_value_21, tmp_default_value_16);
  if (tmp_tuple_element_66 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  tmp_mod_expr_right_16 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_109;
   PyObject *tmp_type_arg_32;
   PyTuple_SET_ITEM(tmp_mod_expr_right_16, 0, tmp_tuple_element_66);
   CHECK_OBJECT(tmp_class_creation_16__prepared);
   tmp_type_arg_32 = tmp_class_creation_16__prepared;
   tmp_expression_value_109 = BUILTIN_TYPE1(tmp_type_arg_32);
   assert(!(tmp_expression_value_109 == NULL));
   tmp_tuple_element_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[20]);
   Py_DECREF(tmp_expression_value_109);
   if (tmp_tuple_element_66 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 261;

       goto tuple_build_exception_17;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_16, 1, tmp_tuple_element_66);
  }
  goto tuple_build_noexception_17;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_17:;
  Py_DECREF(tmp_mod_expr_right_16);
  goto try_except_handler_49;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_17:;
  tmp_raise_value_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
  Py_DECREF(tmp_mod_expr_right_16);
  if (tmp_raise_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_49;
  }
  exception_type = tmp_raise_type_16;
  Py_INCREF(tmp_raise_type_16);
  exception_value = tmp_raise_value_16;
  exception_lineno = 261;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_49;
 }
 branch_no_48:;
 goto branch_end_47;
 branch_no_47:;
 {
  PyObject *tmp_assign_source_146;
  tmp_assign_source_146 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_16__prepared == NULL);
  tmp_class_creation_16__prepared = tmp_assign_source_146;
 }
 branch_end_47:;
 {
  PyObject *tmp_assign_source_147;
  {
   PyObject *tmp_set_locals_16;
   CHECK_OBJECT(tmp_class_creation_16__prepared);
   tmp_set_locals_16 = tmp_class_creation_16__prepared;
   locals_aiohttp$client_exceptions$$$class__16_ClientPayloadError_261 = tmp_set_locals_16;
   Py_INCREF(tmp_set_locals_16);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__16_ClientPayloadError_261, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_51;
  }
  tmp_dictset_value = mod_consts[151];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__16_ClientPayloadError_261, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_51;
  }
  tmp_dictset_value = mod_consts[150];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__16_ClientPayloadError_261, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_51;
  }
  {
   nuitka_bool tmp_condition_result_71;
   PyObject *tmp_cmp_expr_left_17;
   PyObject *tmp_cmp_expr_right_17;
   CHECK_OBJECT(tmp_class_creation_16__bases);
   tmp_cmp_expr_left_17 = tmp_class_creation_16__bases;
   CHECK_OBJECT(tmp_class_creation_16__bases_orig);
   tmp_cmp_expr_right_17 = tmp_class_creation_16__bases_orig;
   tmp_condition_result_71 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
   if (tmp_condition_result_71 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 261;

       goto try_except_handler_51;
   }
   if (tmp_condition_result_71 == NUITKA_BOOL_TRUE) {
       goto branch_yes_49;
   } else {
       goto branch_no_49;
   }
  }
  branch_yes_49:;
  CHECK_OBJECT(tmp_class_creation_16__bases_orig);
  tmp_dictset_value = tmp_class_creation_16__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__16_ClientPayloadError_261, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;

      goto try_except_handler_51;
  }
  branch_no_49:;
  {
   PyObject *tmp_assign_source_148;
   PyObject *tmp_called_value_45;
   PyObject *tmp_args_value_32;
   PyObject *tmp_tuple_element_67;
   PyObject *tmp_kwargs_value_32;
   CHECK_OBJECT(tmp_class_creation_16__metaclass);
   tmp_called_value_45 = tmp_class_creation_16__metaclass;
   tmp_tuple_element_67 = mod_consts[150];
   tmp_args_value_32 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_32, 0, tmp_tuple_element_67);
   CHECK_OBJECT(tmp_class_creation_16__bases);
   tmp_tuple_element_67 = tmp_class_creation_16__bases;
   PyTuple_SET_ITEM0(tmp_args_value_32, 1, tmp_tuple_element_67);
   tmp_tuple_element_67 = locals_aiohttp$client_exceptions$$$class__16_ClientPayloadError_261;
   PyTuple_SET_ITEM0(tmp_args_value_32, 2, tmp_tuple_element_67);
   CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
   tmp_kwargs_value_32 = tmp_class_creation_16__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 261;
   tmp_assign_source_148 = CALL_FUNCTION(tstate, tmp_called_value_45, tmp_args_value_32, tmp_kwargs_value_32);
   Py_DECREF(tmp_args_value_32);
   if (tmp_assign_source_148 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 261;

       goto try_except_handler_51;
   }
   assert(outline_15_var___class__ == NULL);
   outline_15_var___class__ = tmp_assign_source_148;
  }
  CHECK_OBJECT(outline_15_var___class__);
  tmp_assign_source_147 = outline_15_var___class__;
  Py_INCREF(tmp_assign_source_147);
  goto try_return_handler_51;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_51:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__16_ClientPayloadError_261);
  locals_aiohttp$client_exceptions$$$class__16_ClientPayloadError_261 = NULL;
  goto try_return_handler_50;
  // Exception handler code:
  try_except_handler_51:;
  exception_keeper_type_49 = exception_type;
  exception_keeper_value_49 = exception_value;
  exception_keeper_tb_49 = exception_tb;
  exception_keeper_lineno_49 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__16_ClientPayloadError_261);
  locals_aiohttp$client_exceptions$$$class__16_ClientPayloadError_261 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_49;
  exception_value = exception_keeper_value_49;
  exception_tb = exception_keeper_tb_49;
  exception_lineno = exception_keeper_lineno_49;

  goto try_except_handler_50;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_50:;
  CHECK_OBJECT(outline_15_var___class__);
  Py_DECREF(outline_15_var___class__);
  outline_15_var___class__ = NULL;
  goto outline_result_16;
  // Exception handler code:
  try_except_handler_50:;
  exception_keeper_type_50 = exception_type;
  exception_keeper_value_50 = exception_value;
  exception_keeper_tb_50 = exception_tb;
  exception_keeper_lineno_50 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_50;
  exception_value = exception_keeper_value_50;
  exception_tb = exception_keeper_tb_50;
  exception_lineno = exception_keeper_lineno_50;

  goto outline_exception_16;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_16:;
  exception_lineno = 261;
  goto try_except_handler_49;
  outline_result_16:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_147);
 }
 goto try_end_19;
 // Exception handler code:
 try_except_handler_49:;
 exception_keeper_type_51 = exception_type;
 exception_keeper_value_51 = exception_value;
 exception_keeper_tb_51 = exception_tb;
 exception_keeper_lineno_51 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_16__bases_orig);
 tmp_class_creation_16__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_16__bases);
 tmp_class_creation_16__bases = NULL;
 Py_XDECREF(tmp_class_creation_16__class_decl_dict);
 tmp_class_creation_16__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_16__metaclass);
 tmp_class_creation_16__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_16__prepared);
 tmp_class_creation_16__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_51;
 exception_value = exception_keeper_value_51;
 exception_tb = exception_keeper_tb_51;
 exception_lineno = exception_keeper_lineno_51;

 goto frame_exception_exit_1;
 // End of try:
 try_end_19:;
 CHECK_OBJECT(tmp_class_creation_16__bases_orig);
 Py_DECREF(tmp_class_creation_16__bases_orig);
 tmp_class_creation_16__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_16__bases);
 Py_DECREF(tmp_class_creation_16__bases);
 tmp_class_creation_16__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_16__class_decl_dict);
 Py_DECREF(tmp_class_creation_16__class_decl_dict);
 tmp_class_creation_16__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_16__metaclass);
 Py_DECREF(tmp_class_creation_16__metaclass);
 tmp_class_creation_16__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_16__prepared);
 Py_DECREF(tmp_class_creation_16__prepared);
 tmp_class_creation_16__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_149;
  PyObject *tmp_tuple_element_68;
  tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_tuple_element_68 == NULL)) {
      tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_tuple_element_68 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  tmp_assign_source_149 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_assign_source_149, 0, tmp_tuple_element_68);
  tmp_tuple_element_68 = PyExc_ValueError;
  PyTuple_SET_ITEM0(tmp_assign_source_149, 1, tmp_tuple_element_68);
  assert(tmp_class_creation_17__bases_orig == NULL);
  tmp_class_creation_17__bases_orig = tmp_assign_source_149;
 }
 {
  PyObject *tmp_assign_source_150;
  PyObject *tmp_dircall_arg1_17;
  CHECK_OBJECT(tmp_class_creation_17__bases_orig);
  tmp_dircall_arg1_17 = tmp_class_creation_17__bases_orig;
  Py_INCREF(tmp_dircall_arg1_17);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_17};
      tmp_assign_source_150 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_150 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  assert(tmp_class_creation_17__bases == NULL);
  tmp_class_creation_17__bases = tmp_assign_source_150;
 }
 {
  PyObject *tmp_assign_source_151;
  tmp_assign_source_151 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_17__class_decl_dict == NULL);
  tmp_class_creation_17__class_decl_dict = tmp_assign_source_151;
 }
 {
  PyObject *tmp_assign_source_152;
  PyObject *tmp_metaclass_value_17;
  nuitka_bool tmp_condition_result_72;
  int tmp_truth_name_17;
  PyObject *tmp_type_arg_33;
  PyObject *tmp_expression_value_110;
  PyObject *tmp_subscript_value_26;
  PyObject *tmp_bases_value_17;
  CHECK_OBJECT(tmp_class_creation_17__bases);
  tmp_truth_name_17 = CHECK_IF_TRUE(tmp_class_creation_17__bases);
  if (tmp_truth_name_17 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  tmp_condition_result_72 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_72 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_23;
  } else {
      goto condexpr_false_23;
  }
  condexpr_true_23:;
  CHECK_OBJECT(tmp_class_creation_17__bases);
  tmp_expression_value_110 = tmp_class_creation_17__bases;
  tmp_subscript_value_26 = mod_consts[8];
  tmp_type_arg_33 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_110, tmp_subscript_value_26, 0);
  if (tmp_type_arg_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  tmp_metaclass_value_17 = BUILTIN_TYPE1(tmp_type_arg_33);
  Py_DECREF(tmp_type_arg_33);
  if (tmp_metaclass_value_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  goto condexpr_end_23;
  condexpr_false_23:;
  tmp_metaclass_value_17 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_17);
  condexpr_end_23:;
  CHECK_OBJECT(tmp_class_creation_17__bases);
  tmp_bases_value_17 = tmp_class_creation_17__bases;
  tmp_assign_source_152 = SELECT_METACLASS(tstate, tmp_metaclass_value_17, tmp_bases_value_17);
  Py_DECREF(tmp_metaclass_value_17);
  if (tmp_assign_source_152 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  assert(tmp_class_creation_17__metaclass == NULL);
  tmp_class_creation_17__metaclass = tmp_assign_source_152;
 }
 {
  bool tmp_condition_result_73;
  PyObject *tmp_expression_value_111;
  CHECK_OBJECT(tmp_class_creation_17__metaclass);
  tmp_expression_value_111 = tmp_class_creation_17__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_111, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  tmp_condition_result_73 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_73 != false) {
      goto branch_yes_50;
  } else {
      goto branch_no_50;
  }
 }
 branch_yes_50:;
 {
  PyObject *tmp_assign_source_153;
  PyObject *tmp_called_value_46;
  PyObject *tmp_expression_value_112;
  PyObject *tmp_args_value_33;
  PyObject *tmp_tuple_element_69;
  PyObject *tmp_kwargs_value_33;
  CHECK_OBJECT(tmp_class_creation_17__metaclass);
  tmp_expression_value_112 = tmp_class_creation_17__metaclass;
  tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[75]);
  if (tmp_called_value_46 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  tmp_tuple_element_69 = mod_consts[152];
  tmp_args_value_33 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_33, 0, tmp_tuple_element_69);
  CHECK_OBJECT(tmp_class_creation_17__bases);
  tmp_tuple_element_69 = tmp_class_creation_17__bases;
  PyTuple_SET_ITEM0(tmp_args_value_33, 1, tmp_tuple_element_69);
  CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
  tmp_kwargs_value_33 = tmp_class_creation_17__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 265;
  tmp_assign_source_153 = CALL_FUNCTION(tstate, tmp_called_value_46, tmp_args_value_33, tmp_kwargs_value_33);
  Py_DECREF(tmp_called_value_46);
  Py_DECREF(tmp_args_value_33);
  if (tmp_assign_source_153 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  assert(tmp_class_creation_17__prepared == NULL);
  tmp_class_creation_17__prepared = tmp_assign_source_153;
 }
 {
  bool tmp_condition_result_74;
  PyObject *tmp_operand_value_17;
  PyObject *tmp_expression_value_113;
  CHECK_OBJECT(tmp_class_creation_17__prepared);
  tmp_expression_value_113 = tmp_class_creation_17__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_113, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  tmp_operand_value_17 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_17);
  assert(!(tmp_res == -1));
  tmp_condition_result_74 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_74 != false) {
      goto branch_yes_51;
  } else {
      goto branch_no_51;
  }
 }
 branch_yes_51:;
 {
  PyObject *tmp_raise_type_17;
  PyObject *tmp_raise_value_17;
  PyObject *tmp_mod_expr_left_17;
  PyObject *tmp_mod_expr_right_17;
  PyObject *tmp_tuple_element_70;
  PyObject *tmp_expression_value_114;
  PyObject *tmp_name_value_22;
  PyObject *tmp_default_value_17;
  tmp_raise_type_17 = PyExc_TypeError;
  tmp_mod_expr_left_17 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_17__metaclass);
  tmp_expression_value_114 = tmp_class_creation_17__metaclass;
  tmp_name_value_22 = mod_consts[20];
  tmp_default_value_17 = mod_consts[79];
  tmp_tuple_element_70 = BUILTIN_GETATTR(tstate, tmp_expression_value_114, tmp_name_value_22, tmp_default_value_17);
  if (tmp_tuple_element_70 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  tmp_mod_expr_right_17 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_115;
   PyObject *tmp_type_arg_34;
   PyTuple_SET_ITEM(tmp_mod_expr_right_17, 0, tmp_tuple_element_70);
   CHECK_OBJECT(tmp_class_creation_17__prepared);
   tmp_type_arg_34 = tmp_class_creation_17__prepared;
   tmp_expression_value_115 = BUILTIN_TYPE1(tmp_type_arg_34);
   assert(!(tmp_expression_value_115 == NULL));
   tmp_tuple_element_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[20]);
   Py_DECREF(tmp_expression_value_115);
   if (tmp_tuple_element_70 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 265;

       goto tuple_build_exception_18;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_17, 1, tmp_tuple_element_70);
  }
  goto tuple_build_noexception_18;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_18:;
  Py_DECREF(tmp_mod_expr_right_17);
  goto try_except_handler_52;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_18:;
  tmp_raise_value_17 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
  Py_DECREF(tmp_mod_expr_right_17);
  if (tmp_raise_value_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_52;
  }
  exception_type = tmp_raise_type_17;
  Py_INCREF(tmp_raise_type_17);
  exception_value = tmp_raise_value_17;
  exception_lineno = 265;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_52;
 }
 branch_no_51:;
 goto branch_end_50;
 branch_no_50:;
 {
  PyObject *tmp_assign_source_154;
  tmp_assign_source_154 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_17__prepared == NULL);
  tmp_class_creation_17__prepared = tmp_assign_source_154;
 }
 branch_end_50:;
 {
  PyObject *tmp_assign_source_155;
  outline_16_var___class__ = Nuitka_Cell_NewEmpty();
  {
   PyObject *tmp_set_locals_17;
   CHECK_OBJECT(tmp_class_creation_17__prepared);
   tmp_set_locals_17 = tmp_class_creation_17__prepared;
   locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265 = tmp_set_locals_17;
   Py_INCREF(tmp_set_locals_17);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_54;
  }
  tmp_dictset_value = mod_consts[153];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_54;
  }
  tmp_dictset_value = mod_consts[152];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_54;
  }
  frame_452c1fe980929a16f2f3935e62e91405_7 = MAKE_CLASS_FRAME(tstate, codeobj_452c1fe980929a16f2f3935e62e91405, module_aiohttp$client_exceptions, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_452c1fe980929a16f2f3935e62e91405_7);
  assert(Py_REFCNT(frame_452c1fe980929a16f2f3935e62e91405_7) == 2);

  // Framed code:
  {
   PyObject *tmp_annotations_24;
   PyObject *tmp_dict_key_24;
   PyObject *tmp_dict_value_24;
   struct Nuitka_CellObject *tmp_closure_3[1];
   tmp_dict_key_24 = mod_consts[43];
   tmp_dict_value_24 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[57]);

   if (tmp_dict_value_24 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[57]);

     if (unlikely(tmp_dict_value_24 == NULL)) {
         tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
     }

     if (tmp_dict_value_24 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 274;
      type_description_2 = "c";
         goto frame_exception_exit_7;
     }
           Py_INCREF(tmp_dict_value_24);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_annotations_24 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
   Py_DECREF(tmp_dict_value_24);
   assert(!(tmp_res != 0));
   tmp_dict_key_24 = mod_consts[91];
   tmp_dict_value_24 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_24, tmp_dict_value_24);
   assert(!(tmp_res != 0));

   tmp_closure_3[0] = outline_16_var___class__;
   Py_INCREF(tmp_closure_3[0]);

   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__18___init__(tmp_annotations_24, tmp_closure_3);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[27], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 274;
    type_description_2 = "c";
       goto frame_exception_exit_7;
   }
  }
  {
   nuitka_bool tmp_condition_result_75;
   PyObject *tmp_called_value_47;
   PyObject *tmp_args_element_value_14;
   PyObject *tmp_annotations_25;
   PyObject *tmp_dict_key_25;
   PyObject *tmp_dict_value_25;
   PyObject *tmp_called_value_48;
   PyObject *tmp_args_element_value_15;
   PyObject *tmp_annotations_26;
   PyObject *tmp_dict_key_26;
   PyObject *tmp_dict_value_26;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[97]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 279;
    type_description_2 = "c";
       goto frame_exception_exit_7;
   }
   tmp_condition_result_75 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_75 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_24;
   } else {
       goto condexpr_false_24;
   }
   condexpr_true_24:;
   tmp_called_value_47 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[97]);

   if (unlikely(tmp_called_value_47 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[97], &exception_type, &exception_value);

    exception_lineno = 279;
    type_description_2 = "c";
       goto frame_exception_exit_7;
   }

   if (tmp_called_value_47 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 279;
    type_description_2 = "c";
       goto frame_exception_exit_7;
   }
   tmp_dict_key_25 = mod_consts[91];
   tmp_dict_value_25 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[57]);

   if (tmp_dict_value_25 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_25 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[57]);

     if (unlikely(tmp_dict_value_25 == NULL)) {
         tmp_dict_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
     }

     if (tmp_dict_value_25 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_47);

      exception_lineno = 280;
      type_description_2 = "c";
         goto frame_exception_exit_7;
     }
           Py_INCREF(tmp_dict_value_25);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_annotations_25 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_25, tmp_dict_value_25);
   Py_DECREF(tmp_dict_value_25);
   assert(!(tmp_res != 0));


   tmp_args_element_value_14 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__19_url(tmp_annotations_25);

   frame_452c1fe980929a16f2f3935e62e91405_7->m_frame.f_lineno = 279;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_14);
   Py_DECREF(tmp_called_value_47);
   Py_DECREF(tmp_args_element_value_14);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 279;
    type_description_2 = "c";
       goto frame_exception_exit_7;
   }
   goto condexpr_end_24;
   condexpr_false_24:;
   tmp_called_value_48 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_26 = mod_consts[91];
   tmp_dict_value_26 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[57]);

   if (tmp_dict_value_26 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_26 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[57]);

     if (unlikely(tmp_dict_value_26 == NULL)) {
         tmp_dict_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
     }

     if (tmp_dict_value_26 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 280;
      type_description_2 = "c";
         goto frame_exception_exit_7;
     }
           Py_INCREF(tmp_dict_value_26);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_annotations_26 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_26, tmp_dict_value_26);
   Py_DECREF(tmp_dict_value_26);
   assert(!(tmp_res != 0));


   tmp_args_element_value_15 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__19_url(tmp_annotations_26);

   frame_452c1fe980929a16f2f3935e62e91405_7->m_frame.f_lineno = 279;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_15);
   Py_DECREF(tmp_args_element_value_15);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 279;
    type_description_2 = "c";
       goto frame_exception_exit_7;
   }
   condexpr_end_24:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[43], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 280;
    type_description_2 = "c";
       goto frame_exception_exit_7;
   }
  }
  {
   PyObject *tmp_annotations_27;
   PyObject *tmp_dict_key_27;
   PyObject *tmp_dict_value_27;
   tmp_dict_key_27 = mod_consts[91];
   tmp_dict_value_27 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[90]);

   if (tmp_dict_value_27 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_27 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_27);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_annotations_27 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_27, tmp_dict_value_27);
   Py_DECREF(tmp_dict_value_27);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__20___repr__(tmp_annotations_27);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[95], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 283;
    type_description_2 = "c";
       goto frame_exception_exit_7;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_6;
  frame_exception_exit_7:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_452c1fe980929a16f2f3935e62e91405_7, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_452c1fe980929a16f2f3935e62e91405_7->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_452c1fe980929a16f2f3935e62e91405_7, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_452c1fe980929a16f2f3935e62e91405_7,
      type_description_2,
      outline_16_var___class__
  );



  assertFrameObject(frame_452c1fe980929a16f2f3935e62e91405_7);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_6;
  frame_no_exception_6:;
  goto skip_nested_handling_6;
  nested_frame_exit_6:;

  goto try_except_handler_54;
  skip_nested_handling_6:;
  {
   nuitka_bool tmp_condition_result_76;
   PyObject *tmp_cmp_expr_left_18;
   PyObject *tmp_cmp_expr_right_18;
   CHECK_OBJECT(tmp_class_creation_17__bases);
   tmp_cmp_expr_left_18 = tmp_class_creation_17__bases;
   CHECK_OBJECT(tmp_class_creation_17__bases_orig);
   tmp_cmp_expr_right_18 = tmp_class_creation_17__bases_orig;
   tmp_condition_result_76 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
   if (tmp_condition_result_76 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 265;

       goto try_except_handler_54;
   }
   if (tmp_condition_result_76 == NUITKA_BOOL_TRUE) {
       goto branch_yes_52;
   } else {
       goto branch_no_52;
   }
  }
  branch_yes_52:;
  CHECK_OBJECT(tmp_class_creation_17__bases_orig);
  tmp_dictset_value = tmp_class_creation_17__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;

      goto try_except_handler_54;
  }
  branch_no_52:;
  {
   PyObject *tmp_assign_source_156;
   PyObject *tmp_called_value_49;
   PyObject *tmp_args_value_34;
   PyObject *tmp_tuple_element_71;
   PyObject *tmp_kwargs_value_34;
   CHECK_OBJECT(tmp_class_creation_17__metaclass);
   tmp_called_value_49 = tmp_class_creation_17__metaclass;
   tmp_tuple_element_71 = mod_consts[152];
   tmp_args_value_34 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_34, 0, tmp_tuple_element_71);
   CHECK_OBJECT(tmp_class_creation_17__bases);
   tmp_tuple_element_71 = tmp_class_creation_17__bases;
   PyTuple_SET_ITEM0(tmp_args_value_34, 1, tmp_tuple_element_71);
   tmp_tuple_element_71 = locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265;
   PyTuple_SET_ITEM0(tmp_args_value_34, 2, tmp_tuple_element_71);
   CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
   tmp_kwargs_value_34 = tmp_class_creation_17__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 265;
   tmp_assign_source_156 = CALL_FUNCTION(tstate, tmp_called_value_49, tmp_args_value_34, tmp_kwargs_value_34);
   Py_DECREF(tmp_args_value_34);
   if (tmp_assign_source_156 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 265;

       goto try_except_handler_54;
   }
   assert(Nuitka_Cell_GET(outline_16_var___class__) == NULL);
   Nuitka_Cell_SET(outline_16_var___class__, tmp_assign_source_156);

  }
  CHECK_OBJECT(Nuitka_Cell_GET(outline_16_var___class__));
  tmp_assign_source_155 = Nuitka_Cell_GET(outline_16_var___class__);
  Py_INCREF(tmp_assign_source_155);
  goto try_return_handler_54;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_54:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265);
  locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265 = NULL;
  goto try_return_handler_53;
  // Exception handler code:
  try_except_handler_54:;
  exception_keeper_type_52 = exception_type;
  exception_keeper_value_52 = exception_value;
  exception_keeper_tb_52 = exception_tb;
  exception_keeper_lineno_52 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265);
  locals_aiohttp$client_exceptions$$$class__17_InvalidURL_265 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_52;
  exception_value = exception_keeper_value_52;
  exception_tb = exception_keeper_tb_52;
  exception_lineno = exception_keeper_lineno_52;

  goto try_except_handler_53;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_53:;
  CHECK_OBJECT(outline_16_var___class__);
  Py_DECREF(outline_16_var___class__);
  outline_16_var___class__ = NULL;
  goto outline_result_17;
  // Exception handler code:
  try_except_handler_53:;
  exception_keeper_type_53 = exception_type;
  exception_keeper_value_53 = exception_value;
  exception_keeper_tb_53 = exception_tb;
  exception_keeper_lineno_53 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_53;
  exception_value = exception_keeper_value_53;
  exception_tb = exception_keeper_tb_53;
  exception_lineno = exception_keeper_lineno_53;

  goto outline_exception_17;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_17:;
  exception_lineno = 265;
  goto try_except_handler_52;
  outline_result_17:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_155);
 }
 goto try_end_20;
 // Exception handler code:
 try_except_handler_52:;
 exception_keeper_type_54 = exception_type;
 exception_keeper_value_54 = exception_value;
 exception_keeper_tb_54 = exception_tb;
 exception_keeper_lineno_54 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_17__bases_orig);
 tmp_class_creation_17__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_17__bases);
 tmp_class_creation_17__bases = NULL;
 Py_XDECREF(tmp_class_creation_17__class_decl_dict);
 tmp_class_creation_17__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_17__metaclass);
 tmp_class_creation_17__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_17__prepared);
 tmp_class_creation_17__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_54;
 exception_value = exception_keeper_value_54;
 exception_tb = exception_keeper_tb_54;
 exception_lineno = exception_keeper_lineno_54;

 goto frame_exception_exit_1;
 // End of try:
 try_end_20:;
 CHECK_OBJECT(tmp_class_creation_17__bases_orig);
 Py_DECREF(tmp_class_creation_17__bases_orig);
 tmp_class_creation_17__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_17__bases);
 Py_DECREF(tmp_class_creation_17__bases);
 tmp_class_creation_17__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_17__class_decl_dict);
 Py_DECREF(tmp_class_creation_17__class_decl_dict);
 tmp_class_creation_17__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_17__metaclass);
 Py_DECREF(tmp_class_creation_17__metaclass);
 tmp_class_creation_17__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_17__prepared);
 Py_DECREF(tmp_class_creation_17__prepared);
 tmp_class_creation_17__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_157;
  PyObject *tmp_tuple_element_72;
  tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[113]);

  if (unlikely(tmp_tuple_element_72 == NULL)) {
      tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
  }

  if (tmp_tuple_element_72 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  tmp_assign_source_157 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_157, 0, tmp_tuple_element_72);
  assert(tmp_class_creation_18__bases_orig == NULL);
  tmp_class_creation_18__bases_orig = tmp_assign_source_157;
 }
 {
  PyObject *tmp_assign_source_158;
  PyObject *tmp_dircall_arg1_18;
  CHECK_OBJECT(tmp_class_creation_18__bases_orig);
  tmp_dircall_arg1_18 = tmp_class_creation_18__bases_orig;
  Py_INCREF(tmp_dircall_arg1_18);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_18};
      tmp_assign_source_158 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_158 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  assert(tmp_class_creation_18__bases == NULL);
  tmp_class_creation_18__bases = tmp_assign_source_158;
 }
 {
  PyObject *tmp_assign_source_159;
  tmp_assign_source_159 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_18__class_decl_dict == NULL);
  tmp_class_creation_18__class_decl_dict = tmp_assign_source_159;
 }
 {
  PyObject *tmp_assign_source_160;
  PyObject *tmp_metaclass_value_18;
  nuitka_bool tmp_condition_result_77;
  int tmp_truth_name_18;
  PyObject *tmp_type_arg_35;
  PyObject *tmp_expression_value_116;
  PyObject *tmp_subscript_value_27;
  PyObject *tmp_bases_value_18;
  CHECK_OBJECT(tmp_class_creation_18__bases);
  tmp_truth_name_18 = CHECK_IF_TRUE(tmp_class_creation_18__bases);
  if (tmp_truth_name_18 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  tmp_condition_result_77 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_77 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_25;
  } else {
      goto condexpr_false_25;
  }
  condexpr_true_25:;
  CHECK_OBJECT(tmp_class_creation_18__bases);
  tmp_expression_value_116 = tmp_class_creation_18__bases;
  tmp_subscript_value_27 = mod_consts[8];
  tmp_type_arg_35 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_116, tmp_subscript_value_27, 0);
  if (tmp_type_arg_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  tmp_metaclass_value_18 = BUILTIN_TYPE1(tmp_type_arg_35);
  Py_DECREF(tmp_type_arg_35);
  if (tmp_metaclass_value_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  goto condexpr_end_25;
  condexpr_false_25:;
  tmp_metaclass_value_18 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_18);
  condexpr_end_25:;
  CHECK_OBJECT(tmp_class_creation_18__bases);
  tmp_bases_value_18 = tmp_class_creation_18__bases;
  tmp_assign_source_160 = SELECT_METACLASS(tstate, tmp_metaclass_value_18, tmp_bases_value_18);
  Py_DECREF(tmp_metaclass_value_18);
  if (tmp_assign_source_160 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  assert(tmp_class_creation_18__metaclass == NULL);
  tmp_class_creation_18__metaclass = tmp_assign_source_160;
 }
 {
  bool tmp_condition_result_78;
  PyObject *tmp_expression_value_117;
  CHECK_OBJECT(tmp_class_creation_18__metaclass);
  tmp_expression_value_117 = tmp_class_creation_18__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_117, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  tmp_condition_result_78 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_78 != false) {
      goto branch_yes_53;
  } else {
      goto branch_no_53;
  }
 }
 branch_yes_53:;
 {
  PyObject *tmp_assign_source_161;
  PyObject *tmp_called_value_50;
  PyObject *tmp_expression_value_118;
  PyObject *tmp_args_value_35;
  PyObject *tmp_tuple_element_73;
  PyObject *tmp_kwargs_value_35;
  CHECK_OBJECT(tmp_class_creation_18__metaclass);
  tmp_expression_value_118 = tmp_class_creation_18__metaclass;
  tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[75]);
  if (tmp_called_value_50 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  tmp_tuple_element_73 = mod_consts[157];
  tmp_args_value_35 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_35, 0, tmp_tuple_element_73);
  CHECK_OBJECT(tmp_class_creation_18__bases);
  tmp_tuple_element_73 = tmp_class_creation_18__bases;
  PyTuple_SET_ITEM0(tmp_args_value_35, 1, tmp_tuple_element_73);
  CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
  tmp_kwargs_value_35 = tmp_class_creation_18__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 287;
  tmp_assign_source_161 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_35, tmp_kwargs_value_35);
  Py_DECREF(tmp_called_value_50);
  Py_DECREF(tmp_args_value_35);
  if (tmp_assign_source_161 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  assert(tmp_class_creation_18__prepared == NULL);
  tmp_class_creation_18__prepared = tmp_assign_source_161;
 }
 {
  bool tmp_condition_result_79;
  PyObject *tmp_operand_value_18;
  PyObject *tmp_expression_value_119;
  CHECK_OBJECT(tmp_class_creation_18__prepared);
  tmp_expression_value_119 = tmp_class_creation_18__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_119, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  tmp_operand_value_18 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_18);
  assert(!(tmp_res == -1));
  tmp_condition_result_79 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_79 != false) {
      goto branch_yes_54;
  } else {
      goto branch_no_54;
  }
 }
 branch_yes_54:;
 {
  PyObject *tmp_raise_type_18;
  PyObject *tmp_raise_value_18;
  PyObject *tmp_mod_expr_left_18;
  PyObject *tmp_mod_expr_right_18;
  PyObject *tmp_tuple_element_74;
  PyObject *tmp_expression_value_120;
  PyObject *tmp_name_value_23;
  PyObject *tmp_default_value_18;
  tmp_raise_type_18 = PyExc_TypeError;
  tmp_mod_expr_left_18 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_18__metaclass);
  tmp_expression_value_120 = tmp_class_creation_18__metaclass;
  tmp_name_value_23 = mod_consts[20];
  tmp_default_value_18 = mod_consts[79];
  tmp_tuple_element_74 = BUILTIN_GETATTR(tstate, tmp_expression_value_120, tmp_name_value_23, tmp_default_value_18);
  if (tmp_tuple_element_74 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  tmp_mod_expr_right_18 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_121;
   PyObject *tmp_type_arg_36;
   PyTuple_SET_ITEM(tmp_mod_expr_right_18, 0, tmp_tuple_element_74);
   CHECK_OBJECT(tmp_class_creation_18__prepared);
   tmp_type_arg_36 = tmp_class_creation_18__prepared;
   tmp_expression_value_121 = BUILTIN_TYPE1(tmp_type_arg_36);
   assert(!(tmp_expression_value_121 == NULL));
   tmp_tuple_element_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[20]);
   Py_DECREF(tmp_expression_value_121);
   if (tmp_tuple_element_74 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 287;

       goto tuple_build_exception_19;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_18, 1, tmp_tuple_element_74);
  }
  goto tuple_build_noexception_19;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_19:;
  Py_DECREF(tmp_mod_expr_right_18);
  goto try_except_handler_55;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_19:;
  tmp_raise_value_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
  Py_DECREF(tmp_mod_expr_right_18);
  if (tmp_raise_value_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_55;
  }
  exception_type = tmp_raise_type_18;
  Py_INCREF(tmp_raise_type_18);
  exception_value = tmp_raise_value_18;
  exception_lineno = 287;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_55;
 }
 branch_no_54:;
 goto branch_end_53;
 branch_no_53:;
 {
  PyObject *tmp_assign_source_162;
  tmp_assign_source_162 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_18__prepared == NULL);
  tmp_class_creation_18__prepared = tmp_assign_source_162;
 }
 branch_end_53:;
 {
  PyObject *tmp_assign_source_163;
  {
   PyObject *tmp_set_locals_18;
   CHECK_OBJECT(tmp_class_creation_18__prepared);
   tmp_set_locals_18 = tmp_class_creation_18__prepared;
   locals_aiohttp$client_exceptions$$$class__18_ClientSSLError_287 = tmp_set_locals_18;
   Py_INCREF(tmp_set_locals_18);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__18_ClientSSLError_287, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_57;
  }
  tmp_dictset_value = mod_consts[158];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__18_ClientSSLError_287, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_57;
  }
  tmp_dictset_value = mod_consts[157];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__18_ClientSSLError_287, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_57;
  }
  {
   nuitka_bool tmp_condition_result_80;
   PyObject *tmp_cmp_expr_left_19;
   PyObject *tmp_cmp_expr_right_19;
   CHECK_OBJECT(tmp_class_creation_18__bases);
   tmp_cmp_expr_left_19 = tmp_class_creation_18__bases;
   CHECK_OBJECT(tmp_class_creation_18__bases_orig);
   tmp_cmp_expr_right_19 = tmp_class_creation_18__bases_orig;
   tmp_condition_result_80 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
   if (tmp_condition_result_80 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 287;

       goto try_except_handler_57;
   }
   if (tmp_condition_result_80 == NUITKA_BOOL_TRUE) {
       goto branch_yes_55;
   } else {
       goto branch_no_55;
   }
  }
  branch_yes_55:;
  CHECK_OBJECT(tmp_class_creation_18__bases_orig);
  tmp_dictset_value = tmp_class_creation_18__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__18_ClientSSLError_287, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;

      goto try_except_handler_57;
  }
  branch_no_55:;
  {
   PyObject *tmp_assign_source_164;
   PyObject *tmp_called_value_51;
   PyObject *tmp_args_value_36;
   PyObject *tmp_tuple_element_75;
   PyObject *tmp_kwargs_value_36;
   CHECK_OBJECT(tmp_class_creation_18__metaclass);
   tmp_called_value_51 = tmp_class_creation_18__metaclass;
   tmp_tuple_element_75 = mod_consts[157];
   tmp_args_value_36 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_36, 0, tmp_tuple_element_75);
   CHECK_OBJECT(tmp_class_creation_18__bases);
   tmp_tuple_element_75 = tmp_class_creation_18__bases;
   PyTuple_SET_ITEM0(tmp_args_value_36, 1, tmp_tuple_element_75);
   tmp_tuple_element_75 = locals_aiohttp$client_exceptions$$$class__18_ClientSSLError_287;
   PyTuple_SET_ITEM0(tmp_args_value_36, 2, tmp_tuple_element_75);
   CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
   tmp_kwargs_value_36 = tmp_class_creation_18__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 287;
   tmp_assign_source_164 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_36, tmp_kwargs_value_36);
   Py_DECREF(tmp_args_value_36);
   if (tmp_assign_source_164 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 287;

       goto try_except_handler_57;
   }
   assert(outline_17_var___class__ == NULL);
   outline_17_var___class__ = tmp_assign_source_164;
  }
  CHECK_OBJECT(outline_17_var___class__);
  tmp_assign_source_163 = outline_17_var___class__;
  Py_INCREF(tmp_assign_source_163);
  goto try_return_handler_57;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_57:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__18_ClientSSLError_287);
  locals_aiohttp$client_exceptions$$$class__18_ClientSSLError_287 = NULL;
  goto try_return_handler_56;
  // Exception handler code:
  try_except_handler_57:;
  exception_keeper_type_55 = exception_type;
  exception_keeper_value_55 = exception_value;
  exception_keeper_tb_55 = exception_tb;
  exception_keeper_lineno_55 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__18_ClientSSLError_287);
  locals_aiohttp$client_exceptions$$$class__18_ClientSSLError_287 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_55;
  exception_value = exception_keeper_value_55;
  exception_tb = exception_keeper_tb_55;
  exception_lineno = exception_keeper_lineno_55;

  goto try_except_handler_56;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_56:;
  CHECK_OBJECT(outline_17_var___class__);
  Py_DECREF(outline_17_var___class__);
  outline_17_var___class__ = NULL;
  goto outline_result_18;
  // Exception handler code:
  try_except_handler_56:;
  exception_keeper_type_56 = exception_type;
  exception_keeper_value_56 = exception_value;
  exception_keeper_tb_56 = exception_tb;
  exception_keeper_lineno_56 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_56;
  exception_value = exception_keeper_value_56;
  exception_tb = exception_keeper_tb_56;
  exception_lineno = exception_keeper_lineno_56;

  goto outline_exception_18;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_18:;
  exception_lineno = 287;
  goto try_except_handler_55;
  outline_result_18:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_163);
 }
 goto try_end_21;
 // Exception handler code:
 try_except_handler_55:;
 exception_keeper_type_57 = exception_type;
 exception_keeper_value_57 = exception_value;
 exception_keeper_tb_57 = exception_tb;
 exception_keeper_lineno_57 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_18__bases_orig);
 tmp_class_creation_18__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_18__bases);
 tmp_class_creation_18__bases = NULL;
 Py_XDECREF(tmp_class_creation_18__class_decl_dict);
 tmp_class_creation_18__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_18__metaclass);
 tmp_class_creation_18__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_18__prepared);
 tmp_class_creation_18__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_57;
 exception_value = exception_keeper_value_57;
 exception_tb = exception_keeper_tb_57;
 exception_lineno = exception_keeper_lineno_57;

 goto frame_exception_exit_1;
 // End of try:
 try_end_21:;
 CHECK_OBJECT(tmp_class_creation_18__bases_orig);
 Py_DECREF(tmp_class_creation_18__bases_orig);
 tmp_class_creation_18__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_18__bases);
 Py_DECREF(tmp_class_creation_18__bases);
 tmp_class_creation_18__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_18__class_decl_dict);
 Py_DECREF(tmp_class_creation_18__class_decl_dict);
 tmp_class_creation_18__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_18__metaclass);
 Py_DECREF(tmp_class_creation_18__metaclass);
 tmp_class_creation_18__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_18__prepared);
 Py_DECREF(tmp_class_creation_18__prepared);
 tmp_class_creation_18__prepared = NULL;
 {
  bool tmp_condition_result_81;
  PyObject *tmp_cmp_expr_left_20;
  PyObject *tmp_cmp_expr_right_20;
  tmp_cmp_expr_left_20 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[32]);

  if (unlikely(tmp_cmp_expr_left_20 == NULL)) {
      tmp_cmp_expr_left_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
  }

  if (tmp_cmp_expr_left_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 291;

      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_20 = Py_None;
  tmp_condition_result_81 = (tmp_cmp_expr_left_20 != tmp_cmp_expr_right_20) ? true : false;
  if (tmp_condition_result_81 != false) {
      goto branch_yes_56;
  } else {
      goto branch_no_56;
  }
 }
 branch_yes_56:;
 {
  PyObject *tmp_assign_source_165;
  PyObject *tmp_tuple_element_76;
  PyObject *tmp_expression_value_122;
  tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[32]);

  if (unlikely(tmp_expression_value_122 == NULL)) {
      tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
  }

  if (tmp_expression_value_122 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 292;

      goto frame_exception_exit_1;
  }
  tmp_tuple_element_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[159]);
  if (tmp_tuple_element_76 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 292;

      goto frame_exception_exit_1;
  }
  tmp_assign_source_165 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM(tmp_assign_source_165, 0, tmp_tuple_element_76);
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_165);
 }
 {
  PyObject *tmp_assign_source_166;
  PyObject *tmp_tuple_element_77;
  tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[157]);

  if (unlikely(tmp_tuple_element_77 == NULL)) {
      tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
  }

  if (tmp_tuple_element_77 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 294;

      goto frame_exception_exit_1;
  }
  tmp_assign_source_166 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_123;
   PyTuple_SET_ITEM0(tmp_assign_source_166, 0, tmp_tuple_element_77);
   tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[32]);

   if (unlikely(tmp_expression_value_123 == NULL)) {
       tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
   }

   if (tmp_expression_value_123 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 295;

       goto tuple_build_exception_20;
   }
   tmp_tuple_element_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[159]);
   if (tmp_tuple_element_77 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 295;

       goto tuple_build_exception_20;
   }
   PyTuple_SET_ITEM(tmp_assign_source_166, 1, tmp_tuple_element_77);
  }
  goto tuple_build_noexception_20;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_20:;
  Py_DECREF(tmp_assign_source_166);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_20:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_166);
 }
 {
  PyObject *tmp_assign_source_167;
  PyObject *tmp_tuple_element_78;
  PyObject *tmp_expression_value_124;
  tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[32]);

  if (unlikely(tmp_expression_value_124 == NULL)) {
      tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
  }

  if (tmp_expression_value_124 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 298;

      goto frame_exception_exit_1;
  }
  tmp_tuple_element_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[162]);
  if (tmp_tuple_element_78 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 298;

      goto frame_exception_exit_1;
  }
  tmp_assign_source_167 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM(tmp_assign_source_167, 0, tmp_tuple_element_78);
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_167);
 }
 {
  PyObject *tmp_assign_source_168;
  PyObject *tmp_tuple_element_79;
  tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[157]);

  if (unlikely(tmp_tuple_element_79 == NULL)) {
      tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
  }

  if (tmp_tuple_element_79 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 299;

      goto frame_exception_exit_1;
  }
  tmp_assign_source_168 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_125;
   PyTuple_SET_ITEM0(tmp_assign_source_168, 0, tmp_tuple_element_79);
   tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[32]);

   if (unlikely(tmp_expression_value_125 == NULL)) {
       tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
   }

   if (tmp_expression_value_125 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 299;

       goto tuple_build_exception_21;
   }
   tmp_tuple_element_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[162]);
   if (tmp_tuple_element_79 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 299;

       goto tuple_build_exception_21;
   }
   PyTuple_SET_ITEM(tmp_assign_source_168, 1, tmp_tuple_element_79);
  }
  goto tuple_build_noexception_21;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_21:;
  Py_DECREF(tmp_assign_source_168);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_21:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_168);
 }
 goto branch_end_56;
 branch_no_56:;
 {
  PyObject *tmp_assign_source_169;
  tmp_assign_source_169 = const_tuple_empty;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_169);
 }
 {
  PyObject *tmp_assign_source_170;
  PyObject *tmp_tuple_element_80;
  tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[157]);

  if (unlikely(tmp_tuple_element_80 == NULL)) {
      tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
  }

  if (tmp_tuple_element_80 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 303;

      goto frame_exception_exit_1;
  }
  tmp_assign_source_170 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_assign_source_170, 0, tmp_tuple_element_80);
  tmp_tuple_element_80 = PyExc_ValueError;
  PyTuple_SET_ITEM0(tmp_assign_source_170, 1, tmp_tuple_element_80);
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_170);
 }
 {
  PyObject *tmp_assign_source_171;
  tmp_assign_source_171 = const_tuple_empty;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_171);
 }
 {
  PyObject *tmp_assign_source_172;
  PyObject *tmp_tuple_element_81;
  tmp_tuple_element_81 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[157]);

  if (unlikely(tmp_tuple_element_81 == NULL)) {
      tmp_tuple_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[157]);
  }

  if (tmp_tuple_element_81 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 308;

      goto frame_exception_exit_1;
  }
  tmp_assign_source_172 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_172, 0, tmp_tuple_element_81);
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_172);
 }
 branch_end_56:;
 // Tried code:
 {
  PyObject *tmp_assign_source_173;
  PyObject *tmp_tuple_arg_1;
  PyObject *tmp_dircall_arg1_19;
  PyObject *tmp_tuple_element_82;
  tmp_tuple_element_82 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[164]);

  if (unlikely(tmp_tuple_element_82 == NULL)) {
      tmp_tuple_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
  }

  assert(!(tmp_tuple_element_82 == NULL));
  tmp_dircall_arg1_19 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_dircall_arg1_19, 0, tmp_tuple_element_82);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_19};
      tmp_tuple_arg_1 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
  }
  if (tmp_tuple_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  tmp_assign_source_173 = PySequence_Tuple(tmp_tuple_arg_1);
  Py_DECREF(tmp_tuple_arg_1);
  if (tmp_assign_source_173 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  assert(tmp_class_creation_19__bases_orig == NULL);
  tmp_class_creation_19__bases_orig = tmp_assign_source_173;
 }
 {
  PyObject *tmp_assign_source_174;
  PyObject *tmp_dircall_arg1_20;
  CHECK_OBJECT(tmp_class_creation_19__bases_orig);
  tmp_dircall_arg1_20 = tmp_class_creation_19__bases_orig;
  Py_INCREF(tmp_dircall_arg1_20);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_20};
      tmp_assign_source_174 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_174 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  assert(tmp_class_creation_19__bases == NULL);
  tmp_class_creation_19__bases = tmp_assign_source_174;
 }
 {
  PyObject *tmp_assign_source_175;
  tmp_assign_source_175 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_19__class_decl_dict == NULL);
  tmp_class_creation_19__class_decl_dict = tmp_assign_source_175;
 }
 {
  PyObject *tmp_assign_source_176;
  PyObject *tmp_metaclass_value_19;
  nuitka_bool tmp_condition_result_82;
  int tmp_truth_name_19;
  PyObject *tmp_type_arg_37;
  PyObject *tmp_expression_value_126;
  PyObject *tmp_subscript_value_28;
  PyObject *tmp_bases_value_19;
  CHECK_OBJECT(tmp_class_creation_19__bases);
  tmp_truth_name_19 = CHECK_IF_TRUE(tmp_class_creation_19__bases);
  if (tmp_truth_name_19 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  tmp_condition_result_82 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_82 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_26;
  } else {
      goto condexpr_false_26;
  }
  condexpr_true_26:;
  CHECK_OBJECT(tmp_class_creation_19__bases);
  tmp_expression_value_126 = tmp_class_creation_19__bases;
  tmp_subscript_value_28 = mod_consts[8];
  tmp_type_arg_37 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_126, tmp_subscript_value_28, 0);
  if (tmp_type_arg_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  tmp_metaclass_value_19 = BUILTIN_TYPE1(tmp_type_arg_37);
  Py_DECREF(tmp_type_arg_37);
  if (tmp_metaclass_value_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  goto condexpr_end_26;
  condexpr_false_26:;
  tmp_metaclass_value_19 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_19);
  condexpr_end_26:;
  CHECK_OBJECT(tmp_class_creation_19__bases);
  tmp_bases_value_19 = tmp_class_creation_19__bases;
  tmp_assign_source_176 = SELECT_METACLASS(tstate, tmp_metaclass_value_19, tmp_bases_value_19);
  Py_DECREF(tmp_metaclass_value_19);
  if (tmp_assign_source_176 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  assert(tmp_class_creation_19__metaclass == NULL);
  tmp_class_creation_19__metaclass = tmp_assign_source_176;
 }
 {
  bool tmp_condition_result_83;
  PyObject *tmp_expression_value_127;
  CHECK_OBJECT(tmp_class_creation_19__metaclass);
  tmp_expression_value_127 = tmp_class_creation_19__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_127, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  tmp_condition_result_83 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_83 != false) {
      goto branch_yes_57;
  } else {
      goto branch_no_57;
  }
 }
 branch_yes_57:;
 {
  PyObject *tmp_assign_source_177;
  PyObject *tmp_called_value_52;
  PyObject *tmp_expression_value_128;
  PyObject *tmp_args_value_37;
  PyObject *tmp_tuple_element_83;
  PyObject *tmp_kwargs_value_37;
  CHECK_OBJECT(tmp_class_creation_19__metaclass);
  tmp_expression_value_128 = tmp_class_creation_19__metaclass;
  tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[75]);
  if (tmp_called_value_52 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  tmp_tuple_element_83 = mod_consts[165];
  tmp_args_value_37 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_37, 0, tmp_tuple_element_83);
  CHECK_OBJECT(tmp_class_creation_19__bases);
  tmp_tuple_element_83 = tmp_class_creation_19__bases;
  PyTuple_SET_ITEM0(tmp_args_value_37, 1, tmp_tuple_element_83);
  CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
  tmp_kwargs_value_37 = tmp_class_creation_19__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 311;
  tmp_assign_source_177 = CALL_FUNCTION(tstate, tmp_called_value_52, tmp_args_value_37, tmp_kwargs_value_37);
  Py_DECREF(tmp_called_value_52);
  Py_DECREF(tmp_args_value_37);
  if (tmp_assign_source_177 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  assert(tmp_class_creation_19__prepared == NULL);
  tmp_class_creation_19__prepared = tmp_assign_source_177;
 }
 {
  bool tmp_condition_result_84;
  PyObject *tmp_operand_value_19;
  PyObject *tmp_expression_value_129;
  CHECK_OBJECT(tmp_class_creation_19__prepared);
  tmp_expression_value_129 = tmp_class_creation_19__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_129, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  tmp_operand_value_19 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_19);
  assert(!(tmp_res == -1));
  tmp_condition_result_84 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_84 != false) {
      goto branch_yes_58;
  } else {
      goto branch_no_58;
  }
 }
 branch_yes_58:;
 {
  PyObject *tmp_raise_type_19;
  PyObject *tmp_raise_value_19;
  PyObject *tmp_mod_expr_left_19;
  PyObject *tmp_mod_expr_right_19;
  PyObject *tmp_tuple_element_84;
  PyObject *tmp_expression_value_130;
  PyObject *tmp_name_value_24;
  PyObject *tmp_default_value_19;
  tmp_raise_type_19 = PyExc_TypeError;
  tmp_mod_expr_left_19 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_19__metaclass);
  tmp_expression_value_130 = tmp_class_creation_19__metaclass;
  tmp_name_value_24 = mod_consts[20];
  tmp_default_value_19 = mod_consts[79];
  tmp_tuple_element_84 = BUILTIN_GETATTR(tstate, tmp_expression_value_130, tmp_name_value_24, tmp_default_value_19);
  if (tmp_tuple_element_84 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  tmp_mod_expr_right_19 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_131;
   PyObject *tmp_type_arg_38;
   PyTuple_SET_ITEM(tmp_mod_expr_right_19, 0, tmp_tuple_element_84);
   CHECK_OBJECT(tmp_class_creation_19__prepared);
   tmp_type_arg_38 = tmp_class_creation_19__prepared;
   tmp_expression_value_131 = BUILTIN_TYPE1(tmp_type_arg_38);
   assert(!(tmp_expression_value_131 == NULL));
   tmp_tuple_element_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[20]);
   Py_DECREF(tmp_expression_value_131);
   if (tmp_tuple_element_84 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 311;

       goto tuple_build_exception_22;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_19, 1, tmp_tuple_element_84);
  }
  goto tuple_build_noexception_22;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_22:;
  Py_DECREF(tmp_mod_expr_right_19);
  goto try_except_handler_58;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_22:;
  tmp_raise_value_19 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
  Py_DECREF(tmp_mod_expr_right_19);
  if (tmp_raise_value_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_58;
  }
  exception_type = tmp_raise_type_19;
  Py_INCREF(tmp_raise_type_19);
  exception_value = tmp_raise_value_19;
  exception_lineno = 311;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_58;
 }
 branch_no_58:;
 goto branch_end_57;
 branch_no_57:;
 {
  PyObject *tmp_assign_source_178;
  tmp_assign_source_178 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_19__prepared == NULL);
  tmp_class_creation_19__prepared = tmp_assign_source_178;
 }
 branch_end_57:;
 {
  PyObject *tmp_assign_source_179;
  {
   PyObject *tmp_set_locals_19;
   CHECK_OBJECT(tmp_class_creation_19__prepared);
   tmp_set_locals_19 = tmp_class_creation_19__prepared;
   locals_aiohttp$client_exceptions$$$class__19_ClientConnectorSSLError_311 = tmp_set_locals_19;
   Py_INCREF(tmp_set_locals_19);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__19_ClientConnectorSSLError_311, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_60;
  }
  tmp_dictset_value = mod_consts[166];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__19_ClientConnectorSSLError_311, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_60;
  }
  tmp_dictset_value = mod_consts[165];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__19_ClientConnectorSSLError_311, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_60;
  }
  {
   nuitka_bool tmp_condition_result_85;
   PyObject *tmp_cmp_expr_left_21;
   PyObject *tmp_cmp_expr_right_21;
   CHECK_OBJECT(tmp_class_creation_19__bases);
   tmp_cmp_expr_left_21 = tmp_class_creation_19__bases;
   CHECK_OBJECT(tmp_class_creation_19__bases_orig);
   tmp_cmp_expr_right_21 = tmp_class_creation_19__bases_orig;
   tmp_condition_result_85 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_21, tmp_cmp_expr_right_21);
   if (tmp_condition_result_85 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 311;

       goto try_except_handler_60;
   }
   if (tmp_condition_result_85 == NUITKA_BOOL_TRUE) {
       goto branch_yes_59;
   } else {
       goto branch_no_59;
   }
  }
  branch_yes_59:;
  CHECK_OBJECT(tmp_class_creation_19__bases_orig);
  tmp_dictset_value = tmp_class_creation_19__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__19_ClientConnectorSSLError_311, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;

      goto try_except_handler_60;
  }
  branch_no_59:;
  {
   PyObject *tmp_assign_source_180;
   PyObject *tmp_called_value_53;
   PyObject *tmp_args_value_38;
   PyObject *tmp_tuple_element_85;
   PyObject *tmp_kwargs_value_38;
   CHECK_OBJECT(tmp_class_creation_19__metaclass);
   tmp_called_value_53 = tmp_class_creation_19__metaclass;
   tmp_tuple_element_85 = mod_consts[165];
   tmp_args_value_38 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_38, 0, tmp_tuple_element_85);
   CHECK_OBJECT(tmp_class_creation_19__bases);
   tmp_tuple_element_85 = tmp_class_creation_19__bases;
   PyTuple_SET_ITEM0(tmp_args_value_38, 1, tmp_tuple_element_85);
   tmp_tuple_element_85 = locals_aiohttp$client_exceptions$$$class__19_ClientConnectorSSLError_311;
   PyTuple_SET_ITEM0(tmp_args_value_38, 2, tmp_tuple_element_85);
   CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
   tmp_kwargs_value_38 = tmp_class_creation_19__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 311;
   tmp_assign_source_180 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_38, tmp_kwargs_value_38);
   Py_DECREF(tmp_args_value_38);
   if (tmp_assign_source_180 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 311;

       goto try_except_handler_60;
   }
   assert(outline_18_var___class__ == NULL);
   outline_18_var___class__ = tmp_assign_source_180;
  }
  CHECK_OBJECT(outline_18_var___class__);
  tmp_assign_source_179 = outline_18_var___class__;
  Py_INCREF(tmp_assign_source_179);
  goto try_return_handler_60;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_60:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__19_ClientConnectorSSLError_311);
  locals_aiohttp$client_exceptions$$$class__19_ClientConnectorSSLError_311 = NULL;
  goto try_return_handler_59;
  // Exception handler code:
  try_except_handler_60:;
  exception_keeper_type_58 = exception_type;
  exception_keeper_value_58 = exception_value;
  exception_keeper_tb_58 = exception_tb;
  exception_keeper_lineno_58 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__19_ClientConnectorSSLError_311);
  locals_aiohttp$client_exceptions$$$class__19_ClientConnectorSSLError_311 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_58;
  exception_value = exception_keeper_value_58;
  exception_tb = exception_keeper_tb_58;
  exception_lineno = exception_keeper_lineno_58;

  goto try_except_handler_59;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_59:;
  CHECK_OBJECT(outline_18_var___class__);
  Py_DECREF(outline_18_var___class__);
  outline_18_var___class__ = NULL;
  goto outline_result_19;
  // Exception handler code:
  try_except_handler_59:;
  exception_keeper_type_59 = exception_type;
  exception_keeper_value_59 = exception_value;
  exception_keeper_tb_59 = exception_tb;
  exception_keeper_lineno_59 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_59;
  exception_value = exception_keeper_value_59;
  exception_tb = exception_keeper_tb_59;
  exception_lineno = exception_keeper_lineno_59;

  goto outline_exception_19;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_19:;
  exception_lineno = 311;
  goto try_except_handler_58;
  outline_result_19:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_179);
 }
 goto try_end_22;
 // Exception handler code:
 try_except_handler_58:;
 exception_keeper_type_60 = exception_type;
 exception_keeper_value_60 = exception_value;
 exception_keeper_tb_60 = exception_tb;
 exception_keeper_lineno_60 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_19__bases_orig);
 tmp_class_creation_19__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_19__bases);
 tmp_class_creation_19__bases = NULL;
 Py_XDECREF(tmp_class_creation_19__class_decl_dict);
 tmp_class_creation_19__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_19__metaclass);
 tmp_class_creation_19__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_19__prepared);
 tmp_class_creation_19__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_60;
 exception_value = exception_keeper_value_60;
 exception_tb = exception_keeper_tb_60;
 exception_lineno = exception_keeper_lineno_60;

 goto frame_exception_exit_1;
 // End of try:
 try_end_22:;
 CHECK_OBJECT(tmp_class_creation_19__bases_orig);
 Py_DECREF(tmp_class_creation_19__bases_orig);
 tmp_class_creation_19__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_19__bases);
 Py_DECREF(tmp_class_creation_19__bases);
 tmp_class_creation_19__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_19__class_decl_dict);
 Py_DECREF(tmp_class_creation_19__class_decl_dict);
 tmp_class_creation_19__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_19__metaclass);
 Py_DECREF(tmp_class_creation_19__metaclass);
 tmp_class_creation_19__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_19__prepared);
 Py_DECREF(tmp_class_creation_19__prepared);
 tmp_class_creation_19__prepared = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_181;
  PyObject *tmp_tuple_arg_2;
  PyObject *tmp_dircall_arg1_21;
  PyObject *tmp_tuple_element_86;
  tmp_tuple_element_86 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[161]);

  if (unlikely(tmp_tuple_element_86 == NULL)) {
      tmp_tuple_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[161]);
  }

  if (tmp_tuple_element_86 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  tmp_dircall_arg1_21 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_dircall_arg1_21, 0, tmp_tuple_element_86);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_21};
      tmp_tuple_arg_2 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
  }
  if (tmp_tuple_arg_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  tmp_assign_source_181 = PySequence_Tuple(tmp_tuple_arg_2);
  Py_DECREF(tmp_tuple_arg_2);
  if (tmp_assign_source_181 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  assert(tmp_class_creation_20__bases_orig == NULL);
  tmp_class_creation_20__bases_orig = tmp_assign_source_181;
 }
 {
  PyObject *tmp_assign_source_182;
  PyObject *tmp_dircall_arg1_22;
  CHECK_OBJECT(tmp_class_creation_20__bases_orig);
  tmp_dircall_arg1_22 = tmp_class_creation_20__bases_orig;
  Py_INCREF(tmp_dircall_arg1_22);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_22};
      tmp_assign_source_182 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_182 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  assert(tmp_class_creation_20__bases == NULL);
  tmp_class_creation_20__bases = tmp_assign_source_182;
 }
 {
  PyObject *tmp_assign_source_183;
  tmp_assign_source_183 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_20__class_decl_dict == NULL);
  tmp_class_creation_20__class_decl_dict = tmp_assign_source_183;
 }
 {
  PyObject *tmp_assign_source_184;
  PyObject *tmp_metaclass_value_20;
  nuitka_bool tmp_condition_result_86;
  int tmp_truth_name_20;
  PyObject *tmp_type_arg_39;
  PyObject *tmp_expression_value_132;
  PyObject *tmp_subscript_value_29;
  PyObject *tmp_bases_value_20;
  CHECK_OBJECT(tmp_class_creation_20__bases);
  tmp_truth_name_20 = CHECK_IF_TRUE(tmp_class_creation_20__bases);
  if (tmp_truth_name_20 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  tmp_condition_result_86 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_86 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_27;
  } else {
      goto condexpr_false_27;
  }
  condexpr_true_27:;
  CHECK_OBJECT(tmp_class_creation_20__bases);
  tmp_expression_value_132 = tmp_class_creation_20__bases;
  tmp_subscript_value_29 = mod_consts[8];
  tmp_type_arg_39 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_132, tmp_subscript_value_29, 0);
  if (tmp_type_arg_39 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  tmp_metaclass_value_20 = BUILTIN_TYPE1(tmp_type_arg_39);
  Py_DECREF(tmp_type_arg_39);
  if (tmp_metaclass_value_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  goto condexpr_end_27;
  condexpr_false_27:;
  tmp_metaclass_value_20 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_20);
  condexpr_end_27:;
  CHECK_OBJECT(tmp_class_creation_20__bases);
  tmp_bases_value_20 = tmp_class_creation_20__bases;
  tmp_assign_source_184 = SELECT_METACLASS(tstate, tmp_metaclass_value_20, tmp_bases_value_20);
  Py_DECREF(tmp_metaclass_value_20);
  if (tmp_assign_source_184 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  assert(tmp_class_creation_20__metaclass == NULL);
  tmp_class_creation_20__metaclass = tmp_assign_source_184;
 }
 {
  bool tmp_condition_result_87;
  PyObject *tmp_expression_value_133;
  CHECK_OBJECT(tmp_class_creation_20__metaclass);
  tmp_expression_value_133 = tmp_class_creation_20__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_133, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  tmp_condition_result_87 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_87 != false) {
      goto branch_yes_60;
  } else {
      goto branch_no_60;
  }
 }
 branch_yes_60:;
 {
  PyObject *tmp_assign_source_185;
  PyObject *tmp_called_value_54;
  PyObject *tmp_expression_value_134;
  PyObject *tmp_args_value_39;
  PyObject *tmp_tuple_element_87;
  PyObject *tmp_kwargs_value_39;
  CHECK_OBJECT(tmp_class_creation_20__metaclass);
  tmp_expression_value_134 = tmp_class_creation_20__metaclass;
  tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[75]);
  if (tmp_called_value_54 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  tmp_tuple_element_87 = mod_consts[167];
  tmp_args_value_39 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_39, 0, tmp_tuple_element_87);
  CHECK_OBJECT(tmp_class_creation_20__bases);
  tmp_tuple_element_87 = tmp_class_creation_20__bases;
  PyTuple_SET_ITEM0(tmp_args_value_39, 1, tmp_tuple_element_87);
  CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
  tmp_kwargs_value_39 = tmp_class_creation_20__class_decl_dict;
  frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 315;
  tmp_assign_source_185 = CALL_FUNCTION(tstate, tmp_called_value_54, tmp_args_value_39, tmp_kwargs_value_39);
  Py_DECREF(tmp_called_value_54);
  Py_DECREF(tmp_args_value_39);
  if (tmp_assign_source_185 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  assert(tmp_class_creation_20__prepared == NULL);
  tmp_class_creation_20__prepared = tmp_assign_source_185;
 }
 {
  bool tmp_condition_result_88;
  PyObject *tmp_operand_value_20;
  PyObject *tmp_expression_value_135;
  CHECK_OBJECT(tmp_class_creation_20__prepared);
  tmp_expression_value_135 = tmp_class_creation_20__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_135, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  tmp_operand_value_20 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_20);
  assert(!(tmp_res == -1));
  tmp_condition_result_88 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_88 != false) {
      goto branch_yes_61;
  } else {
      goto branch_no_61;
  }
 }
 branch_yes_61:;
 {
  PyObject *tmp_raise_type_20;
  PyObject *tmp_raise_value_20;
  PyObject *tmp_mod_expr_left_20;
  PyObject *tmp_mod_expr_right_20;
  PyObject *tmp_tuple_element_88;
  PyObject *tmp_expression_value_136;
  PyObject *tmp_name_value_25;
  PyObject *tmp_default_value_20;
  tmp_raise_type_20 = PyExc_TypeError;
  tmp_mod_expr_left_20 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_20__metaclass);
  tmp_expression_value_136 = tmp_class_creation_20__metaclass;
  tmp_name_value_25 = mod_consts[20];
  tmp_default_value_20 = mod_consts[79];
  tmp_tuple_element_88 = BUILTIN_GETATTR(tstate, tmp_expression_value_136, tmp_name_value_25, tmp_default_value_20);
  if (tmp_tuple_element_88 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  tmp_mod_expr_right_20 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_137;
   PyObject *tmp_type_arg_40;
   PyTuple_SET_ITEM(tmp_mod_expr_right_20, 0, tmp_tuple_element_88);
   CHECK_OBJECT(tmp_class_creation_20__prepared);
   tmp_type_arg_40 = tmp_class_creation_20__prepared;
   tmp_expression_value_137 = BUILTIN_TYPE1(tmp_type_arg_40);
   assert(!(tmp_expression_value_137 == NULL));
   tmp_tuple_element_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[20]);
   Py_DECREF(tmp_expression_value_137);
   if (tmp_tuple_element_88 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 315;

       goto tuple_build_exception_23;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_20, 1, tmp_tuple_element_88);
  }
  goto tuple_build_noexception_23;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_23:;
  Py_DECREF(tmp_mod_expr_right_20);
  goto try_except_handler_61;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_23:;
  tmp_raise_value_20 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
  Py_DECREF(tmp_mod_expr_right_20);
  if (tmp_raise_value_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_61;
  }
  exception_type = tmp_raise_type_20;
  Py_INCREF(tmp_raise_type_20);
  exception_value = tmp_raise_value_20;
  exception_lineno = 315;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_61;
 }
 branch_no_61:;
 goto branch_end_60;
 branch_no_60:;
 {
  PyObject *tmp_assign_source_186;
  tmp_assign_source_186 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_20__prepared == NULL);
  tmp_class_creation_20__prepared = tmp_assign_source_186;
 }
 branch_end_60:;
 {
  PyObject *tmp_assign_source_187;
  {
   PyObject *tmp_set_locals_20;
   CHECK_OBJECT(tmp_class_creation_20__prepared);
   tmp_set_locals_20 = tmp_class_creation_20__prepared;
   locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315 = tmp_set_locals_20;
   Py_INCREF(tmp_set_locals_20);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[80];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[81], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_63;
  }
  tmp_dictset_value = mod_consts[168];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[49], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_63;
  }
  tmp_dictset_value = mod_consts[167];
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_63;
  }
  frame_aead42c11667672579738e7480de8f06_8 = MAKE_CLASS_FRAME(tstate, codeobj_aead42c11667672579738e7480de8f06, module_aiohttp$client_exceptions, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_aead42c11667672579738e7480de8f06_8);
  assert(Py_REFCNT(frame_aead42c11667672579738e7480de8f06_8) == 2);

  // Framed code:
  {
   PyObject *tmp_annotations_28;
   PyObject *tmp_dict_key_28;
   PyObject *tmp_dict_value_28;
   tmp_dict_key_28 = mod_consts[115];
   tmp_dict_value_28 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[71]);

   if (tmp_dict_value_28 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_28 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[71]);

     if (unlikely(tmp_dict_value_28 == NULL)) {
         tmp_dict_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
     }

     if (tmp_dict_value_28 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 319;
      type_description_2 = "o";
         goto frame_exception_exit_8;
     }
           Py_INCREF(tmp_dict_value_28);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_annotations_28 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
   Py_DECREF(tmp_dict_value_28);
   assert(!(tmp_res != 0));
   tmp_dict_key_28 = mod_consts[169];
   tmp_dict_value_28 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[170]);

   if (tmp_dict_value_28 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_28 = PyExc_Exception;
           Py_INCREF(tmp_dict_value_28);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
   Py_DECREF(tmp_dict_value_28);
   assert(!(tmp_res != 0));
   tmp_dict_key_28 = mod_consts[91];
   tmp_dict_value_28 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_28, tmp_dict_value_28);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__21___init__(tmp_annotations_28);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[27], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 318;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
  }
  {
   nuitka_bool tmp_condition_result_89;
   PyObject *tmp_called_value_55;
   PyObject *tmp_args_element_value_16;
   PyObject *tmp_annotations_29;
   PyObject *tmp_dict_key_29;
   PyObject *tmp_dict_value_29;
   PyObject *tmp_called_value_56;
   PyObject *tmp_args_element_value_17;
   PyObject *tmp_annotations_30;
   PyObject *tmp_dict_key_30;
   PyObject *tmp_dict_value_30;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[97]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 325;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_condition_result_89 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_89 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_28;
   } else {
       goto condexpr_false_28;
   }
   condexpr_true_28:;
   tmp_called_value_55 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[97]);

   if (unlikely(tmp_called_value_55 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[97], &exception_type, &exception_value);

    exception_lineno = 325;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }

   if (tmp_called_value_55 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 325;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_dict_key_29 = mod_consts[91];
   tmp_dict_value_29 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[170]);

   if (tmp_dict_value_29 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_29 = PyExc_Exception;
           Py_INCREF(tmp_dict_value_29);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_annotations_29 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_29, tmp_dict_value_29);
   Py_DECREF(tmp_dict_value_29);
   assert(!(tmp_res != 0));


   tmp_args_element_value_16 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__22_certificate_error(tmp_annotations_29);

   frame_aead42c11667672579738e7480de8f06_8->m_frame.f_lineno = 325;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_55, tmp_args_element_value_16);
   Py_DECREF(tmp_called_value_55);
   Py_DECREF(tmp_args_element_value_16);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 325;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   goto condexpr_end_28;
   condexpr_false_28:;
   tmp_called_value_56 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_30 = mod_consts[91];
   tmp_dict_value_30 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[170]);

   if (tmp_dict_value_30 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_30 = PyExc_Exception;
           Py_INCREF(tmp_dict_value_30);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_annotations_30 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_30, tmp_dict_value_30);
   Py_DECREF(tmp_dict_value_30);
   assert(!(tmp_res != 0));


   tmp_args_element_value_17 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__22_certificate_error(tmp_annotations_30);

   frame_aead42c11667672579738e7480de8f06_8->m_frame.f_lineno = 325;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_17);
   Py_DECREF(tmp_args_element_value_17);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 325;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   condexpr_end_28:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[169], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 326;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
  }
  {
   nuitka_bool tmp_condition_result_90;
   PyObject *tmp_called_value_57;
   PyObject *tmp_args_element_value_18;
   PyObject *tmp_annotations_31;
   PyObject *tmp_dict_key_31;
   PyObject *tmp_dict_value_31;
   PyObject *tmp_called_value_58;
   PyObject *tmp_args_element_value_19;
   PyObject *tmp_annotations_32;
   PyObject *tmp_dict_key_32;
   PyObject *tmp_dict_value_32;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[97]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 329;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_condition_result_90 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_90 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_29;
   } else {
       goto condexpr_false_29;
   }
   condexpr_true_29:;
   tmp_called_value_57 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[97]);

   if (unlikely(tmp_called_value_57 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[97], &exception_type, &exception_value);

    exception_lineno = 329;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }

   if (tmp_called_value_57 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 329;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_dict_key_31 = mod_consts[91];
   tmp_dict_value_31 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[90]);

   if (tmp_dict_value_31 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_31 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_31);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_annotations_31 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_31, tmp_dict_key_31, tmp_dict_value_31);
   Py_DECREF(tmp_dict_value_31);
   assert(!(tmp_res != 0));


   tmp_args_element_value_18 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__23_host(tmp_annotations_31);

   frame_aead42c11667672579738e7480de8f06_8->m_frame.f_lineno = 329;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_57, tmp_args_element_value_18);
   Py_DECREF(tmp_called_value_57);
   Py_DECREF(tmp_args_element_value_18);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 329;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   goto condexpr_end_29;
   condexpr_false_29:;
   tmp_called_value_58 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_32 = mod_consts[91];
   tmp_dict_value_32 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[90]);

   if (tmp_dict_value_32 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_32 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_32);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_annotations_32 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_32, tmp_dict_value_32);
   Py_DECREF(tmp_dict_value_32);
   assert(!(tmp_res != 0));


   tmp_args_element_value_19 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__23_host(tmp_annotations_32);

   frame_aead42c11667672579738e7480de8f06_8->m_frame.f_lineno = 329;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_19);
   Py_DECREF(tmp_args_element_value_19);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 329;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   condexpr_end_29:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[30], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 330;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
  }
  {
   nuitka_bool tmp_condition_result_91;
   PyObject *tmp_called_value_59;
   PyObject *tmp_args_element_value_20;
   PyObject *tmp_annotations_33;
   PyObject *tmp_dict_key_33;
   PyObject *tmp_dict_value_33;
   PyObject *tmp_expression_value_138;
   PyObject *tmp_subscript_value_30;
   PyObject *tmp_called_value_60;
   PyObject *tmp_args_element_value_21;
   PyObject *tmp_annotations_34;
   PyObject *tmp_dict_key_34;
   PyObject *tmp_dict_value_34;
   PyObject *tmp_expression_value_139;
   PyObject *tmp_subscript_value_31;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[97]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 333;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_condition_result_91 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_91 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_30;
   } else {
       goto condexpr_false_30;
   }
   condexpr_true_30:;
   tmp_called_value_59 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[97]);

   if (unlikely(tmp_called_value_59 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[97], &exception_type, &exception_value);

    exception_lineno = 333;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }

   if (tmp_called_value_59 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 333;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_dict_key_33 = mod_consts[91];
   tmp_expression_value_138 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[58]);

   if (tmp_expression_value_138 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[58]);

     if (unlikely(tmp_expression_value_138 == NULL)) {
         tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
     }

     if (tmp_expression_value_138 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_59);

      exception_lineno = 334;
      type_description_2 = "o";
         goto frame_exception_exit_8;
     }
           Py_INCREF(tmp_expression_value_138);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_subscript_value_30 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[89]);

   if (tmp_subscript_value_30 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_30 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_subscript_value_30);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_dict_value_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_138, tmp_subscript_value_30);
   Py_DECREF(tmp_expression_value_138);
   Py_DECREF(tmp_subscript_value_30);
   if (tmp_dict_value_33 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_59);

    exception_lineno = 334;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_annotations_33 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_33, tmp_dict_key_33, tmp_dict_value_33);
   Py_DECREF(tmp_dict_value_33);
   assert(!(tmp_res != 0));


   tmp_args_element_value_20 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__24_port(tmp_annotations_33);

   frame_aead42c11667672579738e7480de8f06_8->m_frame.f_lineno = 333;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_59, tmp_args_element_value_20);
   Py_DECREF(tmp_called_value_59);
   Py_DECREF(tmp_args_element_value_20);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 333;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   goto condexpr_end_30;
   condexpr_false_30:;
   tmp_called_value_60 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_34 = mod_consts[91];
   tmp_expression_value_139 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[58]);

   if (tmp_expression_value_139 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[58]);

     if (unlikely(tmp_expression_value_139 == NULL)) {
         tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[58]);
     }

     if (tmp_expression_value_139 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 334;
      type_description_2 = "o";
         goto frame_exception_exit_8;
     }
           Py_INCREF(tmp_expression_value_139);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_subscript_value_31 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[89]);

   if (tmp_subscript_value_31 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_31 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_subscript_value_31);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_dict_value_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_139, tmp_subscript_value_31);
   Py_DECREF(tmp_expression_value_139);
   Py_DECREF(tmp_subscript_value_31);
   if (tmp_dict_value_34 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 334;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_annotations_34 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_34, tmp_dict_value_34);
   Py_DECREF(tmp_dict_value_34);
   assert(!(tmp_res != 0));


   tmp_args_element_value_21 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__24_port(tmp_annotations_34);

   frame_aead42c11667672579738e7480de8f06_8->m_frame.f_lineno = 333;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_21);
   Py_DECREF(tmp_args_element_value_21);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 333;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   condexpr_end_30:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[31], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 334;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
  }
  {
   nuitka_bool tmp_condition_result_92;
   PyObject *tmp_called_value_61;
   PyObject *tmp_args_element_value_22;
   PyObject *tmp_annotations_35;
   PyObject *tmp_dict_key_35;
   PyObject *tmp_dict_value_35;
   PyObject *tmp_called_value_62;
   PyObject *tmp_args_element_value_23;
   PyObject *tmp_annotations_36;
   PyObject *tmp_dict_key_36;
   PyObject *tmp_dict_value_36;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[97]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 337;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_condition_result_92 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_92 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_31;
   } else {
       goto condexpr_false_31;
   }
   condexpr_true_31:;
   tmp_called_value_61 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[97]);

   if (unlikely(tmp_called_value_61 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[97], &exception_type, &exception_value);

    exception_lineno = 337;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }

   if (tmp_called_value_61 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 337;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_dict_key_35 = mod_consts[91];
   tmp_dict_value_35 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[122]);

   if (tmp_dict_value_35 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_35 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_35);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_annotations_35 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_35, tmp_dict_value_35);
   Py_DECREF(tmp_dict_value_35);
   assert(!(tmp_res != 0));


   tmp_args_element_value_22 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__25_ssl(tmp_annotations_35);

   frame_aead42c11667672579738e7480de8f06_8->m_frame.f_lineno = 337;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_61, tmp_args_element_value_22);
   Py_DECREF(tmp_called_value_61);
   Py_DECREF(tmp_args_element_value_22);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 337;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   goto condexpr_end_31;
   condexpr_false_31:;
   tmp_called_value_62 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_36 = mod_consts[91];
   tmp_dict_value_36 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[122]);

   if (tmp_dict_value_36 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_36 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_36);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_annotations_36 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_36, tmp_dict_value_36);
   Py_DECREF(tmp_dict_value_36);
   assert(!(tmp_res != 0));


   tmp_args_element_value_23 = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__25_ssl(tmp_annotations_36);

   frame_aead42c11667672579738e7480de8f06_8->m_frame.f_lineno = 337;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_23);
   Py_DECREF(tmp_args_element_value_23);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 337;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   condexpr_end_31:;
   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[32], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 338;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
  }
  {
   PyObject *tmp_annotations_37;
   PyObject *tmp_dict_key_37;
   PyObject *tmp_dict_value_37;
   tmp_dict_key_37 = mod_consts[91];
   tmp_dict_value_37 = PyObject_GetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[90]);

   if (tmp_dict_value_37 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_37 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_37);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_annotations_37 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_37, tmp_dict_key_37, tmp_dict_value_37);
   Py_DECREF(tmp_dict_value_37);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_exceptions$$$function__26___str__(tmp_annotations_37);

   tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[93], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 341;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_7;
  frame_exception_exit_8:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_aead42c11667672579738e7480de8f06_8, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_aead42c11667672579738e7480de8f06_8->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_aead42c11667672579738e7480de8f06_8, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_aead42c11667672579738e7480de8f06_8,
      type_description_2,
      outline_19_var___class__
  );



  assertFrameObject(frame_aead42c11667672579738e7480de8f06_8);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_7;
  frame_no_exception_7:;
  goto skip_nested_handling_7;
  nested_frame_exit_7:;

  goto try_except_handler_63;
  skip_nested_handling_7:;
  {
   nuitka_bool tmp_condition_result_93;
   PyObject *tmp_cmp_expr_left_22;
   PyObject *tmp_cmp_expr_right_22;
   CHECK_OBJECT(tmp_class_creation_20__bases);
   tmp_cmp_expr_left_22 = tmp_class_creation_20__bases;
   CHECK_OBJECT(tmp_class_creation_20__bases_orig);
   tmp_cmp_expr_right_22 = tmp_class_creation_20__bases_orig;
   tmp_condition_result_93 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_22, tmp_cmp_expr_right_22);
   if (tmp_condition_result_93 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 315;

       goto try_except_handler_63;
   }
   if (tmp_condition_result_93 == NUITKA_BOOL_TRUE) {
       goto branch_yes_62;
   } else {
       goto branch_no_62;
   }
  }
  branch_yes_62:;
  CHECK_OBJECT(tmp_class_creation_20__bases_orig);
  tmp_dictset_value = tmp_class_creation_20__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315, mod_consts[84], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 315;

      goto try_except_handler_63;
  }
  branch_no_62:;
  {
   PyObject *tmp_assign_source_188;
   PyObject *tmp_called_value_63;
   PyObject *tmp_args_value_40;
   PyObject *tmp_tuple_element_89;
   PyObject *tmp_kwargs_value_40;
   CHECK_OBJECT(tmp_class_creation_20__metaclass);
   tmp_called_value_63 = tmp_class_creation_20__metaclass;
   tmp_tuple_element_89 = mod_consts[167];
   tmp_args_value_40 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_40, 0, tmp_tuple_element_89);
   CHECK_OBJECT(tmp_class_creation_20__bases);
   tmp_tuple_element_89 = tmp_class_creation_20__bases;
   PyTuple_SET_ITEM0(tmp_args_value_40, 1, tmp_tuple_element_89);
   tmp_tuple_element_89 = locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315;
   PyTuple_SET_ITEM0(tmp_args_value_40, 2, tmp_tuple_element_89);
   CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
   tmp_kwargs_value_40 = tmp_class_creation_20__class_decl_dict;
   frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame.f_lineno = 315;
   tmp_assign_source_188 = CALL_FUNCTION(tstate, tmp_called_value_63, tmp_args_value_40, tmp_kwargs_value_40);
   Py_DECREF(tmp_args_value_40);
   if (tmp_assign_source_188 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 315;

       goto try_except_handler_63;
   }
   assert(outline_19_var___class__ == NULL);
   outline_19_var___class__ = tmp_assign_source_188;
  }
  CHECK_OBJECT(outline_19_var___class__);
  tmp_assign_source_187 = outline_19_var___class__;
  Py_INCREF(tmp_assign_source_187);
  goto try_return_handler_63;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_63:;
  Py_DECREF(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315);
  locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315 = NULL;
  goto try_return_handler_62;
  // Exception handler code:
  try_except_handler_63:;
  exception_keeper_type_61 = exception_type;
  exception_keeper_value_61 = exception_value;
  exception_keeper_tb_61 = exception_tb;
  exception_keeper_lineno_61 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_DECREF(locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315);
  locals_aiohttp$client_exceptions$$$class__20_ClientConnectorCertificateError_315 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_61;
  exception_value = exception_keeper_value_61;
  exception_tb = exception_keeper_tb_61;
  exception_lineno = exception_keeper_lineno_61;

  goto try_except_handler_62;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_62:;
  CHECK_OBJECT(outline_19_var___class__);
  Py_DECREF(outline_19_var___class__);
  outline_19_var___class__ = NULL;
  goto outline_result_20;
  // Exception handler code:
  try_except_handler_62:;
  exception_keeper_type_62 = exception_type;
  exception_keeper_value_62 = exception_value;
  exception_keeper_tb_62 = exception_tb;
  exception_keeper_lineno_62 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Re-raise.
  exception_type = exception_keeper_type_62;
  exception_value = exception_keeper_value_62;
  exception_tb = exception_keeper_tb_62;
  exception_lineno = exception_keeper_lineno_62;

  goto outline_exception_20;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_20:;
  exception_lineno = 315;
  goto try_except_handler_61;
  outline_result_20:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_187);
 }
 goto try_end_23;
 // Exception handler code:
 try_except_handler_61:;
 exception_keeper_type_63 = exception_type;
 exception_keeper_value_63 = exception_value;
 exception_keeper_tb_63 = exception_tb;
 exception_keeper_lineno_63 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_class_creation_20__bases_orig);
 tmp_class_creation_20__bases_orig = NULL;
 Py_XDECREF(tmp_class_creation_20__bases);
 tmp_class_creation_20__bases = NULL;
 Py_XDECREF(tmp_class_creation_20__class_decl_dict);
 tmp_class_creation_20__class_decl_dict = NULL;
 Py_XDECREF(tmp_class_creation_20__metaclass);
 tmp_class_creation_20__metaclass = NULL;
 Py_XDECREF(tmp_class_creation_20__prepared);
 tmp_class_creation_20__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_63;
 exception_value = exception_keeper_value_63;
 exception_tb = exception_keeper_tb_63;
 exception_lineno = exception_keeper_lineno_63;

 goto frame_exception_exit_1;
 // End of try:
 try_end_23:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_8;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_31a9966f3d0c2a60e49a4ce5c2a51a84, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_31a9966f3d0c2a60e49a4ce5c2a51a84->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_31a9966f3d0c2a60e49a4ce5c2a51a84, exception_lineno);
 }



 assertFrameObject(frame_31a9966f3d0c2a60e49a4ce5c2a51a84);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto module_exception_exit;
 frame_no_exception_8:;
 CHECK_OBJECT(tmp_class_creation_20__bases_orig);
 Py_DECREF(tmp_class_creation_20__bases_orig);
 tmp_class_creation_20__bases_orig = NULL;
 CHECK_OBJECT(tmp_class_creation_20__bases);
 Py_DECREF(tmp_class_creation_20__bases);
 tmp_class_creation_20__bases = NULL;
 CHECK_OBJECT(tmp_class_creation_20__class_decl_dict);
 Py_DECREF(tmp_class_creation_20__class_decl_dict);
 tmp_class_creation_20__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_20__metaclass);
 Py_DECREF(tmp_class_creation_20__metaclass);
 tmp_class_creation_20__metaclass = NULL;
 CHECK_OBJECT(tmp_class_creation_20__prepared);
 Py_DECREF(tmp_class_creation_20__prepared);
 tmp_class_creation_20__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("aiohttp$client_exceptions", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.client_exceptions" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_aiohttp$client_exceptions);
    return module_aiohttp$client_exceptions;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_exceptions, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("aiohttp$client_exceptions", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
