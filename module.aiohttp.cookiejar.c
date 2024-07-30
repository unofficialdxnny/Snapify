/* Generated code for Python module 'aiohttp$cookiejar'
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

/* The "module_aiohttp$cookiejar" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiohttp$cookiejar;
PyDictObject *moduledict_aiohttp$cookiejar;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[282];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[282];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("aiohttp.cookiejar"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 282; i++) {
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
void checkModuleConstants_aiohttp$cookiejar(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 282; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_99b5ef878b1958d6fbf1ac4765cd9c08;
static PyCodeObject *codeobj_493541182c7fa6a18fb271472f61f476;
static PyCodeObject *codeobj_65e8c6e6b3e76a3aa901c4a8a4041b08;
static PyCodeObject *codeobj_2be6246959b92382184da04a4650b024;
static PyCodeObject *codeobj_b28b7fc4030e83ed0cd0d74c20a4abb2;
static PyCodeObject *codeobj_5014fcd498cc40b5d577c201f169e806;
static PyCodeObject *codeobj_ed5344eeec190f52f19f760271e0df6f;
static PyCodeObject *codeobj_4d5eeea7681acd6e3318da8bbf828b5b;
static PyCodeObject *codeobj_41d16d85e09b2a56a6bc1b1c3afa268f;
static PyCodeObject *codeobj_f287e99f6dc5ba1247b1f83ab54b394e;
static PyCodeObject *codeobj_611650513e52a1e233872e335f979a77;
static PyCodeObject *codeobj_c8b381de9486f4a124ff05ac2f41868f;
static PyCodeObject *codeobj_41c1df449d170da566fa98172fe8d878;
static PyCodeObject *codeobj_8f8a6312087c9b45c4af44c1af4da130;
static PyCodeObject *codeobj_0792e69200354015fd83a5f0ad04de6a;
static PyCodeObject *codeobj_621149c3053c7ba1506c3a063038d0d8;
static PyCodeObject *codeobj_509d05b571111cce88f7b256139b2990;
static PyCodeObject *codeobj_f40bf84260fd560d9f6536dea7e4ca72;
static PyCodeObject *codeobj_d3b5cd8f6db59afd3ffb3c6e09a2f38b;
static PyCodeObject *codeobj_80c125e36b9662e114d0770a25a61708;
static PyCodeObject *codeobj_246fe956a49086788d7f06f88a6f4f8d;
static PyCodeObject *codeobj_40ecb74037c3ba2007dd1a3a8756dde8;
static PyCodeObject *codeobj_d84e92ce364be9ffe0ca8408a217f250;
static PyCodeObject *codeobj_db8cd76f42953ef8fd40d8682d937437;
static PyCodeObject *codeobj_c205457ae7fc40e052a3330c12eb672a;
static PyCodeObject *codeobj_df056008bbbb7cdfa4022771247188ff;
static PyCodeObject *codeobj_8fe11d9b7daf6daadb282d516079f29a;
static PyCodeObject *codeobj_74cb6ba5113f0f17517d8b79fd6f62ad;
static PyCodeObject *codeobj_4366881da94d07cb07fa41028888ff0f;

static void createModuleCodeObjects(void) {
 module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[257]); CHECK_OBJECT(module_filename_obj);
 codeobj_99b5ef878b1958d6fbf1ac4765cd9c08 = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[51], mod_consts[258], NULL, 1, 0, 0);
 codeobj_493541182c7fa6a18fb271472f61f476 = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[50], mod_consts[134], mod_consts[259], NULL, 1, 0, 0);
 codeobj_65e8c6e6b3e76a3aa901c4a8a4041b08 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[52], mod_consts[260], NULL, 1, 0, 0);
 codeobj_2be6246959b92382184da04a4650b024 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[44], mod_consts[261], mod_consts[262], 1, 0, 0);
 codeobj_b28b7fc4030e83ed0cd0d74c20a4abb2 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[43], mod_consts[81], mod_consts[263], NULL, 1, 0, 0);
 codeobj_5014fcd498cc40b5d577c201f169e806 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[264], mod_consts[264], NULL, NULL, 0, 0, 0);
 codeobj_ed5344eeec190f52f19f760271e0df6f = MAKE_CODE_OBJECT(module_filename_obj, 39, 0, mod_consts[178], mod_consts[178], mod_consts[265], NULL, 0, 0, 0);
 codeobj_4d5eeea7681acd6e3318da8bbf828b5b = MAKE_CODE_OBJECT(module_filename_obj, 392, 0, mod_consts[248], mod_consts[248], mod_consts[265], NULL, 0, 0, 0);
 codeobj_41d16d85e09b2a56a6bc1b1c3afa268f = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[215], mod_consts[266], mod_consts[265], 1, 4, 0);
 codeobj_f287e99f6dc5ba1247b1f83ab54b394e = MAKE_CODE_OBJECT(module_filename_obj, 399, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[1], mod_consts[251], mod_consts[267], mod_consts[265], 1, 1, 0);
 codeobj_611650513e52a1e233872e335f979a77 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[49], mod_consts[268], NULL, 1, 0, 0);
 codeobj_c8b381de9486f4a124ff05ac2f41868f = MAKE_CODE_OBJECT(module_filename_obj, 402, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[48], mod_consts[135], mod_consts[269], NULL, 1, 0, 0);
 codeobj_41c1df449d170da566fa98172fe8d878 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[226], mod_consts[227], mod_consts[269], NULL, 1, 0, 0);
 codeobj_8f8a6312087c9b45c4af44c1af4da130 = MAKE_CODE_OBJECT(module_filename_obj, 406, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[226], mod_consts[252], mod_consts[269], NULL, 1, 0, 0);
 codeobj_0792e69200354015fd83a5f0ad04de6a = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[47], mod_consts[229], mod_consts[269], NULL, 1, 0, 0);
 codeobj_621149c3053c7ba1506c3a063038d0d8 = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[70], mod_consts[233], mod_consts[270], NULL, 5, 0, 0);
 codeobj_509d05b571111cce88f7b256139b2990 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[241], mod_consts[271], NULL, 2, 0, 0);
 codeobj_f40bf84260fd560d9f6536dea7e4ca72 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[86], mod_consts[243], mod_consts[272], NULL, 2, 0, 0);
 codeobj_d3b5cd8f6db59afd3ffb3c6e09a2f38b = MAKE_CODE_OBJECT(module_filename_obj, 328, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[72], mod_consts[246], mod_consts[273], NULL, 2, 0, 0);
 codeobj_80c125e36b9662e114d0770a25a61708 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[29], mod_consts[221], mod_consts[274], NULL, 2, 0, 0);
 codeobj_246fe956a49086788d7f06f88a6f4f8d = MAKE_CODE_OBJECT(module_filename_obj, 409, 0, mod_consts[29], mod_consts[253], mod_consts[275], NULL, 2, 0, 0);
 codeobj_40ecb74037c3ba2007dd1a3a8756dde8 = MAKE_CODE_OBJECT(module_filename_obj, 147, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[223], mod_consts[224], mod_consts[276], NULL, 2, 0, 0);
 codeobj_d84e92ce364be9ffe0ca8408a217f250 = MAKE_CODE_OBJECT(module_filename_obj, 412, 0, mod_consts[223], mod_consts[254], mod_consts[276], NULL, 2, 0, 0);
 codeobj_db8cd76f42953ef8fd40d8682d937437 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[238], mod_consts[239], mod_consts[277], NULL, 2, 0, 0);
 codeobj_c205457ae7fc40e052a3330c12eb672a = MAKE_CODE_OBJECT(module_filename_obj, 418, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[238], mod_consts[256], mod_consts[278], NULL, 2, 0, 0);
 codeobj_df056008bbbb7cdfa4022771247188ff = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[28], mod_consts[219], mod_consts[279], NULL, 2, 0, 0);
 codeobj_8fe11d9b7daf6daadb282d516079f29a = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[217], mod_consts[218], mod_consts[279], NULL, 2, 0, 0);
 codeobj_74cb6ba5113f0f17517d8b79fd6f62ad = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[235], mod_consts[236], mod_consts[280], NULL, 3, 0, 0);
 codeobj_4366881da94d07cb07fa41028888ff0f = MAKE_CODE_OBJECT(module_filename_obj, 415, 0, mod_consts[235], mod_consts[255], mod_consts[281], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_aiohttp$cookiejar$$$function__6___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_aiohttp$cookiejar$$$function__7___len__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_aiohttp$cookiejar$$$function__14__parse_date$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_aiohttp$cookiejar$$$function__16___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__unpack_list(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__10_update_cookies(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__11_filter_cookies(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__11_filter_cookies$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__12__is_domain_match(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__13__is_path_match(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__14__parse_date(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__15___init__(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__16___iter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__17___len__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__18_clear(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__19_clear_domain(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__1___init__(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__20_update_cookies(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__21_filter_cookies(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__2_save(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__3_load(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__4_clear(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__5_clear_domain(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__5_clear_domain$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__6___iter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__7___len__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__8__do_expiration(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__8__do_expiration$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__9__expire_cookie(PyObject *annotations);


// The module function definitions.
static PyObject *impl_aiohttp$cookiejar$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_unsafe = python_pars[1];
 PyObject *par_quote_cookie = python_pars[2];
 PyObject *par_treat_as_secure_origin = python_pars[3];
 PyObject *par_loop = python_pars[4];
 PyObject *outline_0_var_url = NULL;
 PyObject *tmp_listcomp_1__$0 = NULL;
 PyObject *tmp_listcomp_1__contraction = NULL;
 PyObject *tmp_listcomp_1__iter_value_0 = NULL;
 struct Nuitka_FrameObject *frame_41d16d85e09b2a56a6bc1b1c3afa268f;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 int tmp_res;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
 static struct Nuitka_FrameObject *cache_frame_41d16d85e09b2a56a6bc1b1c3afa268f = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_41d16d85e09b2a56a6bc1b1c3afa268f)) {
     Py_XDECREF(cache_frame_41d16d85e09b2a56a6bc1b1c3afa268f);

#if _DEBUG_REFCOUNTS
     if (cache_frame_41d16d85e09b2a56a6bc1b1c3afa268f == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_41d16d85e09b2a56a6bc1b1c3afa268f = MAKE_FUNCTION_FRAME(tstate, codeobj_41d16d85e09b2a56a6bc1b1c3afa268f, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_type_description == NULL);
 frame_41d16d85e09b2a56a6bc1b1c3afa268f = cache_frame_41d16d85e09b2a56a6bc1b1c3afa268f;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_41d16d85e09b2a56a6bc1b1c3afa268f);
 assert(Py_REFCNT(frame_41d16d85e09b2a56a6bc1b1c3afa268f) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_type_arg_value_1;
  PyObject *tmp_object_arg_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_kw_call_value_0_1;
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 84;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_self);
  tmp_object_arg_value_1 = par_self;
  tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_aiohttp$cookiejar, tmp_type_arg_value_1, tmp_object_arg_value_1);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 84;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 84;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_loop);
  tmp_kw_call_value_0_1 = par_loop;
  frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_frame.f_lineno = 84;
  {
      PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

      tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[2]);
  }

  Py_DECREF(tmp_called_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 84;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_value_2;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[3]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 85;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[4]);

  if (unlikely(tmp_args_element_value_1 == NULL)) {
      tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
  }

  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_frame.f_lineno = 85;
  tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 85;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 85;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = PySet_New(NULL);
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
  Py_DECREF(tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  CHECK_OBJECT(par_unsafe);
  tmp_assattr_value_3 = par_unsafe;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[7], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_assattr_target_4;
  CHECK_OBJECT(par_quote_cookie);
  tmp_assattr_value_4 = par_quote_cookie;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_4 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[8], tmp_assattr_value_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 90;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(par_treat_as_secure_origin);
  tmp_cmp_expr_left_1 = par_treat_as_secure_origin;
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
  tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
  {
      PyObject *old = par_treat_as_secure_origin;
      assert(old != NULL);
      par_treat_as_secure_origin = tmp_assign_source_1;
      Py_DECREF(old);
  }

 }
 goto branch_end_1;
 branch_no_1:;
 {
  nuitka_bool tmp_condition_result_2;
  PyObject *tmp_isinstance_inst_1;
  PyObject *tmp_isinstance_cls_1;
  CHECK_OBJECT(par_treat_as_secure_origin);
  tmp_isinstance_inst_1 = par_treat_as_secure_origin;
  tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_isinstance_cls_1 == NULL)) {
      tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_isinstance_cls_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 93;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 93;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_list_element_1;
  PyObject *tmp_called_instance_1;
  CHECK_OBJECT(par_treat_as_secure_origin);
  tmp_called_instance_1 = par_treat_as_secure_origin;
  frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_frame.f_lineno = 94;
  tmp_list_element_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[10]);
  if (tmp_list_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_2 = MAKE_LIST_EMPTY(tstate, 1);
  PyList_SET_ITEM(tmp_assign_source_2, 0, tmp_list_element_1);
  {
      PyObject *old = par_treat_as_secure_origin;
      assert(old != NULL);
      par_treat_as_secure_origin = tmp_assign_source_2;
      Py_DECREF(old);
  }

 }
 goto branch_end_2;
 branch_no_2:;
 {
  nuitka_bool tmp_condition_result_3;
  PyObject *tmp_isinstance_inst_2;
  PyObject *tmp_isinstance_cls_2;
  CHECK_OBJECT(par_treat_as_secure_origin);
  tmp_isinstance_inst_2 = par_treat_as_secure_origin;
  tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 95;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_list_element_2;
  PyObject *tmp_called_instance_2;
  PyObject *tmp_called_value_3;
  PyObject *tmp_args_element_value_2;
  tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_3 == NULL)) {
      tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 96;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_treat_as_secure_origin);
  tmp_args_element_value_2 = par_treat_as_secure_origin;
  frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_frame.f_lineno = 96;
  tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 96;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_frame.f_lineno = 96;
  tmp_list_element_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[10]);
  Py_DECREF(tmp_called_instance_2);
  if (tmp_list_element_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 96;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 1);
  PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_2);
  {
      PyObject *old = par_treat_as_secure_origin;
      assert(old != NULL);
      par_treat_as_secure_origin = tmp_assign_source_3;
      Py_DECREF(old);
  }

 }
 goto branch_end_3;
 branch_no_3:;
 {
  PyObject *tmp_assign_source_4;
  // Tried code:
  {
   PyObject *tmp_assign_source_5;
   PyObject *tmp_iter_arg_1;
   CHECK_OBJECT(par_treat_as_secure_origin);
   tmp_iter_arg_1 = par_treat_as_secure_origin;
   tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
   if (tmp_assign_source_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 98;
    type_description_1 = "oooooc";
       goto try_except_handler_2;
   }
   assert(tmp_listcomp_1__$0 == NULL);
   tmp_listcomp_1__$0 = tmp_assign_source_5;
  }
  {
   PyObject *tmp_assign_source_6;
   tmp_assign_source_6 = MAKE_LIST_EMPTY(tstate, 0);
   assert(tmp_listcomp_1__contraction == NULL);
   tmp_listcomp_1__contraction = tmp_assign_source_6;
  }
  // Tried code:
  loop_start_1:;
  {
   PyObject *tmp_next_source_1;
   PyObject *tmp_assign_source_7;
   CHECK_OBJECT(tmp_listcomp_1__$0);
   tmp_next_source_1 = tmp_listcomp_1__$0;
   tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
   if (tmp_assign_source_7 == NULL) {
       if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

           goto loop_end_1;
       } else {

           FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
     type_description_1 = "oooooc";
     exception_lineno = 98;
           goto try_except_handler_3;
       }
   }

   {
       PyObject *old = tmp_listcomp_1__iter_value_0;
       tmp_listcomp_1__iter_value_0 = tmp_assign_source_7;
       Py_XDECREF(old);
   }

  }
  {
   PyObject *tmp_assign_source_8;
   CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
   tmp_assign_source_8 = tmp_listcomp_1__iter_value_0;
   {
       PyObject *old = outline_0_var_url;
       outline_0_var_url = tmp_assign_source_8;
       Py_INCREF(outline_0_var_url);
       Py_XDECREF(old);
   }

  }
  {
   PyObject *tmp_append_list_1;
   PyObject *tmp_append_value_1;
   nuitka_bool tmp_condition_result_4;
   PyObject *tmp_isinstance_inst_3;
   PyObject *tmp_isinstance_cls_3;
   PyObject *tmp_called_instance_3;
   PyObject *tmp_called_value_4;
   PyObject *tmp_args_element_value_3;
   PyObject *tmp_called_instance_4;
   CHECK_OBJECT(tmp_listcomp_1__contraction);
   tmp_append_list_1 = tmp_listcomp_1__contraction;
   CHECK_OBJECT(outline_0_var_url);
   tmp_isinstance_inst_3 = outline_0_var_url;
   tmp_isinstance_cls_3 = (PyObject *)&PyUnicode_Type;
   tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 99;
    type_description_1 = "oooooc";
       goto try_except_handler_3;
   }
   tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_1;
   } else {
       goto condexpr_false_1;
   }
   condexpr_true_1:;
   tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

   if (unlikely(tmp_called_value_4 == NULL)) {
       tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
   }

   if (tmp_called_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 99;
    type_description_1 = "oooooc";
       goto try_except_handler_3;
   }
   CHECK_OBJECT(outline_0_var_url);
   tmp_args_element_value_3 = outline_0_var_url;
   frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_frame.f_lineno = 99;
   tmp_called_instance_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
   if (tmp_called_instance_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 99;
    type_description_1 = "oooooc";
       goto try_except_handler_3;
   }
   frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_frame.f_lineno = 99;
   tmp_append_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[10]);
   Py_DECREF(tmp_called_instance_3);
   if (tmp_append_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 99;
    type_description_1 = "oooooc";
       goto try_except_handler_3;
   }
   goto condexpr_end_1;
   condexpr_false_1:;
   CHECK_OBJECT(outline_0_var_url);
   tmp_called_instance_4 = outline_0_var_url;
   frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_frame.f_lineno = 99;
   tmp_append_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[10]);
   if (tmp_append_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 99;
    type_description_1 = "oooooc";
       goto try_except_handler_3;
   }
   condexpr_end_1:;
   tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 98;
    type_description_1 = "oooooc";
       goto try_except_handler_3;
   }
  }
  if (CONSIDER_THREADING(tstate) == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 98;
   type_description_1 = "oooooc";
      goto try_except_handler_3;
  }
  goto loop_start_1;
  loop_end_1:;
  CHECK_OBJECT(tmp_listcomp_1__contraction);
  tmp_assign_source_4 = tmp_listcomp_1__contraction;
  Py_INCREF(tmp_assign_source_4);
  goto try_return_handler_3;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_3:;
  CHECK_OBJECT(tmp_listcomp_1__$0);
  Py_DECREF(tmp_listcomp_1__$0);
  tmp_listcomp_1__$0 = NULL;
  CHECK_OBJECT(tmp_listcomp_1__contraction);
  Py_DECREF(tmp_listcomp_1__contraction);
  tmp_listcomp_1__contraction = NULL;
  Py_XDECREF(tmp_listcomp_1__iter_value_0);
  tmp_listcomp_1__iter_value_0 = NULL;
  goto try_return_handler_2;
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

  CHECK_OBJECT(tmp_listcomp_1__$0);
  Py_DECREF(tmp_listcomp_1__$0);
  tmp_listcomp_1__$0 = NULL;
  CHECK_OBJECT(tmp_listcomp_1__contraction);
  Py_DECREF(tmp_listcomp_1__contraction);
  tmp_listcomp_1__contraction = NULL;
  Py_XDECREF(tmp_listcomp_1__iter_value_0);
  tmp_listcomp_1__iter_value_0 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_1;
  exception_value = exception_keeper_value_1;
  exception_tb = exception_keeper_tb_1;
  exception_lineno = exception_keeper_lineno_1;

  goto try_except_handler_2;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_2:;
  Py_XDECREF(outline_0_var_url);
  outline_0_var_url = NULL;
  goto outline_result_1;
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

  Py_XDECREF(outline_0_var_url);
  outline_0_var_url = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_2;
  exception_value = exception_keeper_value_2;
  exception_tb = exception_keeper_tb_2;
  exception_lineno = exception_keeper_lineno_2;

  goto outline_exception_1;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_1:;
  exception_lineno = 98;
  goto frame_exception_exit_1;
  outline_result_1:;
  {
      PyObject *old = par_treat_as_secure_origin;
      assert(old != NULL);
      par_treat_as_secure_origin = tmp_assign_source_4;
      Py_DECREF(old);
  }

 }
 branch_end_3:;
 branch_end_2:;
 branch_end_1:;
 {
  PyObject *tmp_assattr_value_5;
  PyObject *tmp_assattr_target_5;
  CHECK_OBJECT(par_treat_as_secure_origin);
  tmp_assattr_value_5 = par_treat_as_secure_origin;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_5 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[11], tmp_assattr_value_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_6;
  PyObject *tmp_called_value_5;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_called_instance_5;
  PyObject *tmp_assattr_target_6;
  tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[12]);

  if (unlikely(tmp_called_value_5 == NULL)) {
      tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
  }

  if (tmp_called_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_instance_5 == NULL)) {
      tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_instance_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_frame.f_lineno = 103;
  tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[13]);
  if (tmp_args_element_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_frame.f_lineno = 103;
  tmp_assattr_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_4);
  Py_DECREF(tmp_args_element_value_4);
  if (tmp_assattr_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_6 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[14], tmp_assattr_value_6);
  Py_DECREF(tmp_assattr_value_6);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_7;
  PyObject *tmp_assattr_target_7;
  tmp_assattr_value_7 = MAKE_DICT_EMPTY(tstate);
  CHECK_OBJECT(par_self);
  tmp_assattr_target_7 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[15], tmp_assattr_value_7);
  Py_DECREF(tmp_assattr_value_7);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 104;
   type_description_1 = "oooooc";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_41d16d85e09b2a56a6bc1b1c3afa268f, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_41d16d85e09b2a56a6bc1b1c3afa268f->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_41d16d85e09b2a56a6bc1b1c3afa268f, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_41d16d85e09b2a56a6bc1b1c3afa268f,
     type_description_1,
     par_self,
     par_unsafe,
     par_quote_cookie,
     par_treat_as_secure_origin,
     par_loop,
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_41d16d85e09b2a56a6bc1b1c3afa268f == cache_frame_41d16d85e09b2a56a6bc1b1c3afa268f) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_41d16d85e09b2a56a6bc1b1c3afa268f);
     cache_frame_41d16d85e09b2a56a6bc1b1c3afa268f = NULL;
 }

 assertFrameObject(frame_41d16d85e09b2a56a6bc1b1c3afa268f);

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
 CHECK_OBJECT(par_treat_as_secure_origin);
 Py_DECREF(par_treat_as_secure_origin);
 par_treat_as_secure_origin = NULL;
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

 Py_XDECREF(par_treat_as_secure_origin);
 par_treat_as_secure_origin = NULL;
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
 CHECK_OBJECT(par_unsafe);
 Py_DECREF(par_unsafe);
 CHECK_OBJECT(par_quote_cookie);
 Py_DECREF(par_quote_cookie);
 CHECK_OBJECT(par_loop);
 Py_DECREF(par_loop);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_unsafe);
 Py_DECREF(par_unsafe);
 CHECK_OBJECT(par_quote_cookie);
 Py_DECREF(par_quote_cookie);
 CHECK_OBJECT(par_loop);
 Py_DECREF(par_loop);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$cookiejar$$$function__2_save(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_file_path = python_pars[1];
 PyObject *var_f = NULL;
 PyObject *tmp_with_1__enter = NULL;
 PyObject *tmp_with_1__exit = NULL;
 nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
 PyObject *tmp_with_1__source = NULL;
 struct Nuitka_FrameObject *frame_8fe11d9b7daf6daadb282d516079f29a;
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
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
 static struct Nuitka_FrameObject *cache_frame_8fe11d9b7daf6daadb282d516079f29a = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_8fe11d9b7daf6daadb282d516079f29a)) {
     Py_XDECREF(cache_frame_8fe11d9b7daf6daadb282d516079f29a);

#if _DEBUG_REFCOUNTS
     if (cache_frame_8fe11d9b7daf6daadb282d516079f29a == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_8fe11d9b7daf6daadb282d516079f29a = MAKE_FUNCTION_FRAME(tstate, codeobj_8fe11d9b7daf6daadb282d516079f29a, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_8fe11d9b7daf6daadb282d516079f29a->m_type_description == NULL);
 frame_8fe11d9b7daf6daadb282d516079f29a = cache_frame_8fe11d9b7daf6daadb282d516079f29a;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_8fe11d9b7daf6daadb282d516079f29a);
 assert(Py_REFCNT(frame_8fe11d9b7daf6daadb282d516079f29a) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_args_element_value_1;
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[16]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_file_path);
  tmp_args_element_value_1 = par_file_path;
  frame_8fe11d9b7daf6daadb282d516079f29a->m_frame.f_lineno = 107;
  tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[17], tmp_args_element_value_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = par_file_path;
      assert(old != NULL);
      par_file_path = tmp_assign_source_1;
      Py_DECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_file_path);
  tmp_expression_value_1 = par_file_path;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  frame_8fe11d9b7daf6daadb282d516079f29a->m_frame.f_lineno = 108;
  tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[19], 0), mod_consts[20]);
  Py_DECREF(tmp_called_value_1);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__source == NULL);
  tmp_with_1__source = tmp_assign_source_2;
 }
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(tmp_with_1__source);
  tmp_expression_value_2 = tmp_with_1__source;
  tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[21]);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  frame_8fe11d9b7daf6daadb282d516079f29a->m_frame.f_lineno = 108;
  tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
  Py_DECREF(tmp_called_value_2);
  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__enter == NULL);
  tmp_with_1__enter = tmp_assign_source_3;
 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(tmp_with_1__source);
  tmp_expression_value_3 = tmp_with_1__source;
  tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, mod_consts[22]);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__exit == NULL);
  tmp_with_1__exit = tmp_assign_source_4;
 }
 {
  nuitka_bool tmp_assign_source_5;
  tmp_assign_source_5 = NUITKA_BOOL_TRUE;
  tmp_with_1__indicator = tmp_assign_source_5;
 }
 {
  PyObject *tmp_assign_source_6;
  CHECK_OBJECT(tmp_with_1__enter);
  tmp_assign_source_6 = tmp_with_1__enter;
  assert(var_f == NULL);
  Py_INCREF(tmp_assign_source_6);
  var_f = tmp_assign_source_6;
 }
 // Tried code:
 // Tried code:
 {
  PyObject *tmp_called_value_3;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_expression_value_6;
  tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[23]);

  if (unlikely(tmp_expression_value_4 == NULL)) {
      tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
  }

  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 109;
   type_description_1 = "ooo";
      goto try_except_handler_4;
  }
  tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[24]);
  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 109;
   type_description_1 = "ooo";
      goto try_except_handler_4;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_5 = par_self;
  tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[5]);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_3);

   exception_lineno = 109;
   type_description_1 = "ooo";
      goto try_except_handler_4;
  }
  CHECK_OBJECT(var_f);
  tmp_args_element_value_3 = var_f;
  tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[23]);

  if (unlikely(tmp_expression_value_6 == NULL)) {
      tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
  }

  if (tmp_expression_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_3);
   Py_DECREF(tmp_args_element_value_2);

   exception_lineno = 109;
   type_description_1 = "ooo";
      goto try_except_handler_4;
  }
  tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[25]);
  if (tmp_args_element_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_3);
   Py_DECREF(tmp_args_element_value_2);

   exception_lineno = 109;
   type_description_1 = "ooo";
      goto try_except_handler_4;
  }
  frame_8fe11d9b7daf6daadb282d516079f29a->m_frame.f_lineno = 109;
  {
      PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
      tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
  }

  Py_DECREF(tmp_called_value_3);
  Py_DECREF(tmp_args_element_value_2);
  Py_DECREF(tmp_args_element_value_4);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 109;
   type_description_1 = "ooo";
      goto try_except_handler_4;
  }
  Py_DECREF(tmp_call_result_1);
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
     exception_keeper_tb_1 = MAKE_TRACEBACK(frame_8fe11d9b7daf6daadb282d516079f29a, exception_keeper_lineno_1);
 } else if (exception_keeper_lineno_1 != 0) {
     exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_8fe11d9b7daf6daadb282d516079f29a, exception_keeper_lineno_1);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
 // Tried code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_1 = PyExc_BaseException;
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
  nuitka_bool tmp_assign_source_7;
  tmp_assign_source_7 = NUITKA_BOOL_FALSE;
  tmp_with_1__indicator = tmp_assign_source_7;
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_called_value_4;
  PyObject *tmp_args_element_value_5;
  PyObject *tmp_args_element_value_6;
  PyObject *tmp_args_element_value_7;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_4 = tmp_with_1__exit;
  tmp_args_element_value_5 = EXC_TYPE(PyThreadState_GET());
  tmp_args_element_value_6 = EXC_VALUE(PyThreadState_GET());
  tmp_args_element_value_7 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
  frame_8fe11d9b7daf6daadb282d516079f29a->m_frame.f_lineno = 108;
  {
      PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
      tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_4, call_args);
  }

  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;
   type_description_1 = "ooo";
      goto try_except_handler_5;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;
   type_description_1 = "ooo";
      goto try_except_handler_5;
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
     exception_lineno = 108;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_8fe11d9b7daf6daadb282d516079f29a->m_frame) frame_8fe11d9b7daf6daadb282d516079f29a->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "ooo";
 goto try_except_handler_5;
 branch_no_2:;
 goto branch_end_1;
 branch_no_1:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 108;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_8fe11d9b7daf6daadb282d516079f29a->m_frame) frame_8fe11d9b7daf6daadb282d516079f29a->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "ooo";
 goto try_except_handler_5;
 branch_end_1:;
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
  bool tmp_condition_result_3;
  nuitka_bool tmp_cmp_expr_left_2;
  nuitka_bool tmp_cmp_expr_right_2;
  assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_2 = tmp_with_1__indicator;
  tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
  tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_called_value_5;
  PyObject *tmp_call_result_2;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_5 = tmp_with_1__exit;
  frame_8fe11d9b7daf6daadb282d516079f29a->m_frame.f_lineno = 108;
  tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_5, mod_consts[26]);

  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

   Py_DECREF(exception_keeper_type_3);
   Py_XDECREF(exception_keeper_value_3);
   Py_XDECREF(exception_keeper_tb_3);

   exception_lineno = 108;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_2);
 }
 branch_no_3:;
 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto try_except_handler_2;
 // End of try:
 try_end_3:;
 {
  bool tmp_condition_result_4;
  nuitka_bool tmp_cmp_expr_left_3;
  nuitka_bool tmp_cmp_expr_right_3;
  assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_3 = tmp_with_1__indicator;
  tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
  tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_called_value_6;
  PyObject *tmp_call_result_3;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_6 = tmp_with_1__exit;
  frame_8fe11d9b7daf6daadb282d516079f29a->m_frame.f_lineno = 108;
  tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_6, mod_consts[26]);

  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_3);
 }
 branch_no_4:;
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


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_8fe11d9b7daf6daadb282d516079f29a, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_8fe11d9b7daf6daadb282d516079f29a->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_8fe11d9b7daf6daadb282d516079f29a, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_8fe11d9b7daf6daadb282d516079f29a,
     type_description_1,
     par_self,
     par_file_path,
     var_f
 );


 // Release cached frame if used for exception.
 if (frame_8fe11d9b7daf6daadb282d516079f29a == cache_frame_8fe11d9b7daf6daadb282d516079f29a) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_8fe11d9b7daf6daadb282d516079f29a);
     cache_frame_8fe11d9b7daf6daadb282d516079f29a = NULL;
 }

 assertFrameObject(frame_8fe11d9b7daf6daadb282d516079f29a);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 CHECK_OBJECT(tmp_with_1__source);
 Py_DECREF(tmp_with_1__source);
 tmp_with_1__source = NULL;
 CHECK_OBJECT(tmp_with_1__enter);
 Py_DECREF(tmp_with_1__enter);
 tmp_with_1__enter = NULL;
 CHECK_OBJECT(tmp_with_1__exit);
 Py_DECREF(tmp_with_1__exit);
 tmp_with_1__exit = NULL;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto try_return_handler_1;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(par_file_path);
 Py_DECREF(par_file_path);
 par_file_path = NULL;
 CHECK_OBJECT(var_f);
 Py_DECREF(var_f);
 var_f = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_5 = exception_type;
 exception_keeper_value_5 = exception_value;
 exception_keeper_tb_5 = exception_tb;
 exception_keeper_lineno_5 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(par_file_path);
 par_file_path = NULL;
 Py_XDECREF(var_f);
 var_f = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_5;
 exception_value = exception_keeper_value_5;
 exception_tb = exception_keeper_tb_5;
 exception_lineno = exception_keeper_lineno_5;

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


static PyObject *impl_aiohttp$cookiejar$$$function__3_load(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_file_path = python_pars[1];
 PyObject *var_f = NULL;
 PyObject *tmp_with_1__enter = NULL;
 PyObject *tmp_with_1__exit = NULL;
 nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
 PyObject *tmp_with_1__source = NULL;
 struct Nuitka_FrameObject *frame_df056008bbbb7cdfa4022771247188ff;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
 int tmp_res;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
 static struct Nuitka_FrameObject *cache_frame_df056008bbbb7cdfa4022771247188ff = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_df056008bbbb7cdfa4022771247188ff)) {
     Py_XDECREF(cache_frame_df056008bbbb7cdfa4022771247188ff);

#if _DEBUG_REFCOUNTS
     if (cache_frame_df056008bbbb7cdfa4022771247188ff == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_df056008bbbb7cdfa4022771247188ff = MAKE_FUNCTION_FRAME(tstate, codeobj_df056008bbbb7cdfa4022771247188ff, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_df056008bbbb7cdfa4022771247188ff->m_type_description == NULL);
 frame_df056008bbbb7cdfa4022771247188ff = cache_frame_df056008bbbb7cdfa4022771247188ff;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_df056008bbbb7cdfa4022771247188ff);
 assert(Py_REFCNT(frame_df056008bbbb7cdfa4022771247188ff) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_args_element_value_1;
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[16]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 112;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_file_path);
  tmp_args_element_value_1 = par_file_path;
  frame_df056008bbbb7cdfa4022771247188ff->m_frame.f_lineno = 112;
  tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[17], tmp_args_element_value_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 112;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = par_file_path;
      assert(old != NULL);
      par_file_path = tmp_assign_source_1;
      Py_DECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_file_path);
  tmp_expression_value_1 = par_file_path;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[18]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  frame_df056008bbbb7cdfa4022771247188ff->m_frame.f_lineno = 113;
  tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[27], 0), mod_consts[20]);
  Py_DECREF(tmp_called_value_1);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__source == NULL);
  tmp_with_1__source = tmp_assign_source_2;
 }
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(tmp_with_1__source);
  tmp_expression_value_2 = tmp_with_1__source;
  tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_2, mod_consts[21]);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  frame_df056008bbbb7cdfa4022771247188ff->m_frame.f_lineno = 113;
  tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
  Py_DECREF(tmp_called_value_2);
  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__enter == NULL);
  tmp_with_1__enter = tmp_assign_source_3;
 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(tmp_with_1__source);
  tmp_expression_value_3 = tmp_with_1__source;
  tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_3, mod_consts[22]);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__exit == NULL);
  tmp_with_1__exit = tmp_assign_source_4;
 }
 {
  nuitka_bool tmp_assign_source_5;
  tmp_assign_source_5 = NUITKA_BOOL_TRUE;
  tmp_with_1__indicator = tmp_assign_source_5;
 }
 {
  PyObject *tmp_assign_source_6;
  CHECK_OBJECT(tmp_with_1__enter);
  tmp_assign_source_6 = tmp_with_1__enter;
  assert(var_f == NULL);
  Py_INCREF(tmp_assign_source_6);
  var_f = tmp_assign_source_6;
 }
 // Tried code:
 // Tried code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_instance_2;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_assattr_target_1;
  tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[23]);

  if (unlikely(tmp_called_instance_2 == NULL)) {
      tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
  }

  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 114;
   type_description_1 = "ooo";
      goto try_except_handler_4;
  }
  CHECK_OBJECT(var_f);
  tmp_args_element_value_2 = var_f;
  frame_df056008bbbb7cdfa4022771247188ff->m_frame.f_lineno = 114;
  tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[28], tmp_args_element_value_2);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 114;
   type_description_1 = "ooo";
      goto try_except_handler_4;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 114;
   type_description_1 = "ooo";
      goto try_except_handler_4;
  }
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
     exception_keeper_tb_1 = MAKE_TRACEBACK(frame_df056008bbbb7cdfa4022771247188ff, exception_keeper_lineno_1);
 } else if (exception_keeper_lineno_1 != 0) {
     exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_df056008bbbb7cdfa4022771247188ff, exception_keeper_lineno_1);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
 // Tried code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_1 = PyExc_BaseException;
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
  nuitka_bool tmp_assign_source_7;
  tmp_assign_source_7 = NUITKA_BOOL_FALSE;
  tmp_with_1__indicator = tmp_assign_source_7;
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_called_value_3;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_args_element_value_5;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_3 = tmp_with_1__exit;
  tmp_args_element_value_3 = EXC_TYPE(PyThreadState_GET());
  tmp_args_element_value_4 = EXC_VALUE(PyThreadState_GET());
  tmp_args_element_value_5 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
  frame_df056008bbbb7cdfa4022771247188ff->m_frame.f_lineno = 113;
  {
      PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
      tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
  }

  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "ooo";
      goto try_except_handler_5;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "ooo";
      goto try_except_handler_5;
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
     exception_lineno = 113;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_df056008bbbb7cdfa4022771247188ff->m_frame) frame_df056008bbbb7cdfa4022771247188ff->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "ooo";
 goto try_except_handler_5;
 branch_no_2:;
 goto branch_end_1;
 branch_no_1:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 113;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_df056008bbbb7cdfa4022771247188ff->m_frame) frame_df056008bbbb7cdfa4022771247188ff->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "ooo";
 goto try_except_handler_5;
 branch_end_1:;
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
  bool tmp_condition_result_3;
  nuitka_bool tmp_cmp_expr_left_2;
  nuitka_bool tmp_cmp_expr_right_2;
  assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_2 = tmp_with_1__indicator;
  tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
  tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_called_value_4;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_4 = tmp_with_1__exit;
  frame_df056008bbbb7cdfa4022771247188ff->m_frame.f_lineno = 113;
  tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_4, mod_consts[26]);

  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

   Py_DECREF(exception_keeper_type_3);
   Py_XDECREF(exception_keeper_value_3);
   Py_XDECREF(exception_keeper_tb_3);

   exception_lineno = 113;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_1);
 }
 branch_no_3:;
 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto try_except_handler_2;
 // End of try:
 try_end_3:;
 {
  bool tmp_condition_result_4;
  nuitka_bool tmp_cmp_expr_left_3;
  nuitka_bool tmp_cmp_expr_right_3;
  assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_3 = tmp_with_1__indicator;
  tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
  tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_called_value_5;
  PyObject *tmp_call_result_2;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_5 = tmp_with_1__exit;
  frame_df056008bbbb7cdfa4022771247188ff->m_frame.f_lineno = 113;
  tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_5, mod_consts[26]);

  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_2);
 }
 branch_no_4:;
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


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_df056008bbbb7cdfa4022771247188ff, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_df056008bbbb7cdfa4022771247188ff->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_df056008bbbb7cdfa4022771247188ff, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_df056008bbbb7cdfa4022771247188ff,
     type_description_1,
     par_self,
     par_file_path,
     var_f
 );


 // Release cached frame if used for exception.
 if (frame_df056008bbbb7cdfa4022771247188ff == cache_frame_df056008bbbb7cdfa4022771247188ff) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_df056008bbbb7cdfa4022771247188ff);
     cache_frame_df056008bbbb7cdfa4022771247188ff = NULL;
 }

 assertFrameObject(frame_df056008bbbb7cdfa4022771247188ff);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 CHECK_OBJECT(tmp_with_1__source);
 Py_DECREF(tmp_with_1__source);
 tmp_with_1__source = NULL;
 CHECK_OBJECT(tmp_with_1__enter);
 Py_DECREF(tmp_with_1__enter);
 tmp_with_1__enter = NULL;
 CHECK_OBJECT(tmp_with_1__exit);
 Py_DECREF(tmp_with_1__exit);
 tmp_with_1__exit = NULL;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto try_return_handler_1;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(par_file_path);
 Py_DECREF(par_file_path);
 par_file_path = NULL;
 CHECK_OBJECT(var_f);
 Py_DECREF(var_f);
 var_f = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_5 = exception_type;
 exception_keeper_value_5 = exception_value;
 exception_keeper_tb_5 = exception_tb;
 exception_keeper_lineno_5 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(par_file_path);
 par_file_path = NULL;
 Py_XDECREF(var_f);
 var_f = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_5;
 exception_value = exception_keeper_value_5;
 exception_tb = exception_keeper_tb_5;
 exception_lineno = exception_keeper_lineno_5;

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


static PyObject *impl_aiohttp$cookiejar$$$function__4_clear(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_predicate = python_pars[1];
 PyObject *var_to_del = NULL;
 PyObject *var_now = NULL;
 PyObject *var_domain = NULL;
 PyObject *var_path = NULL;
 PyObject *var_cookie = NULL;
 PyObject *var_name = NULL;
 PyObject *var_morsel = NULL;
 PyObject *var_key = NULL;
 PyObject *tmp_for_loop_1__for_iterator = NULL;
 PyObject *tmp_for_loop_1__iter_value = NULL;
 PyObject *tmp_for_loop_2__for_iterator = NULL;
 PyObject *tmp_for_loop_2__iter_value = NULL;
 PyObject *tmp_for_loop_3__for_iterator = NULL;
 PyObject *tmp_for_loop_3__iter_value = NULL;
 PyObject *tmp_tuple_unpack_1__element_1 = NULL;
 PyObject *tmp_tuple_unpack_1__element_2 = NULL;
 PyObject *tmp_tuple_unpack_1__source_iter = NULL;
 PyObject *tmp_tuple_unpack_2__element_1 = NULL;
 PyObject *tmp_tuple_unpack_2__element_2 = NULL;
 PyObject *tmp_tuple_unpack_2__source_iter = NULL;
 PyObject *tmp_tuple_unpack_3__element_1 = NULL;
 PyObject *tmp_tuple_unpack_3__element_2 = NULL;
 PyObject *tmp_tuple_unpack_3__source_iter = NULL;
 PyObject *tmp_tuple_unpack_4__element_1 = NULL;
 PyObject *tmp_tuple_unpack_4__element_2 = NULL;
 PyObject *tmp_tuple_unpack_4__element_3 = NULL;
 PyObject *tmp_tuple_unpack_4__source_iter = NULL;
 struct Nuitka_FrameObject *frame_80c125e36b9662e114d0770a25a61708;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
 int tmp_res;
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
 static struct Nuitka_FrameObject *cache_frame_80c125e36b9662e114d0770a25a61708 = NULL;
 PyObject *exception_keeper_type_12;
 PyObject *exception_keeper_value_12;
 PyTracebackObject *exception_keeper_tb_12;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_80c125e36b9662e114d0770a25a61708)) {
     Py_XDECREF(cache_frame_80c125e36b9662e114d0770a25a61708);

#if _DEBUG_REFCOUNTS
     if (cache_frame_80c125e36b9662e114d0770a25a61708 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_80c125e36b9662e114d0770a25a61708 = MAKE_FUNCTION_FRAME(tstate, codeobj_80c125e36b9662e114d0770a25a61708, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_80c125e36b9662e114d0770a25a61708->m_type_description == NULL);
 frame_80c125e36b9662e114d0770a25a61708 = cache_frame_80c125e36b9662e114d0770a25a61708;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_80c125e36b9662e114d0770a25a61708);
 assert(Py_REFCNT(frame_80c125e36b9662e114d0770a25a61708) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(par_predicate);
  tmp_cmp_expr_left_1 = par_predicate;
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
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_assattr_target_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[12]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 118;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 118;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 118;
  tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[13]);
  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 118;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 118;
  tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_args_element_value_1);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 118;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 118;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 119;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 119;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 119;
  tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
  Py_DECREF(tmp_called_value_2);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 119;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_called_value_3;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_call_result_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_4 = par_self;
  tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[6]);
  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 120;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[29]);
  Py_DECREF(tmp_expression_value_3);
  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 120;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 120;
  tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
  Py_DECREF(tmp_called_value_3);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 120;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 {
  PyObject *tmp_called_value_4;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_call_result_3;
  CHECK_OBJECT(par_self);
  tmp_expression_value_6 = par_self;
  tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[15]);
  if (tmp_expression_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 121;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[29]);
  Py_DECREF(tmp_expression_value_5);
  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 121;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 121;
  tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
  Py_DECREF(tmp_called_value_4);
  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 121;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_3);
 }
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_1:;
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
  assert(var_to_del == NULL);
  var_to_del = tmp_assign_source_1;
 }
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_instance_2;
  tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_instance_2 == NULL)) {
      tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 125;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 125;
  tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[13]);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 125;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  assert(var_now == NULL);
  var_now = tmp_assign_source_2;
 }
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_iter_arg_1;
  PyObject *tmp_called_value_5;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_expression_value_8;
  CHECK_OBJECT(par_self);
  tmp_expression_value_8 = par_self;
  tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[5]);
  if (tmp_expression_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 126;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[30]);
  Py_DECREF(tmp_expression_value_7);
  if (tmp_called_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 126;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 126;
  tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
  Py_DECREF(tmp_called_value_5);
  if (tmp_iter_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 126;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
  Py_DECREF(tmp_iter_arg_1);
  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 126;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  assert(tmp_for_loop_1__for_iterator == NULL);
  tmp_for_loop_1__for_iterator = tmp_assign_source_3;
 }
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_4;
  CHECK_OBJECT(tmp_for_loop_1__for_iterator);
  tmp_next_source_1 = tmp_for_loop_1__for_iterator;
  tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_4 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    type_description_1 = "oooooooooo";
    exception_lineno = 126;
          goto try_except_handler_2;
      }
  }

  {
      PyObject *old = tmp_for_loop_1__iter_value;
      tmp_for_loop_1__iter_value = tmp_assign_source_4;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_iter_arg_2;
  CHECK_OBJECT(tmp_for_loop_1__iter_value);
  tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
  tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
  if (tmp_assign_source_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 126;
   type_description_1 = "oooooooooo";
      goto try_except_handler_3;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__source_iter;
      tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_unpack_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
  if (tmp_assign_source_6 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooooooo";
   exception_lineno = 126;
      goto try_except_handler_4;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_1;
      tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_7;
  PyObject *tmp_unpack_2;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
  if (tmp_assign_source_7 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooooooo";
   exception_lineno = 126;
      goto try_except_handler_4;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_2;
      tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
      Py_XDECREF(old);
  }

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

     type_description_1 = "oooooooooo";
     exception_lineno = 126;
              goto try_except_handler_4;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[31];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "oooooooooo";
   exception_lineno = 126;
      goto try_except_handler_4;
  }
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

 CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
 Py_DECREF(tmp_tuple_unpack_1__source_iter);
 tmp_tuple_unpack_1__source_iter = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_1;
 exception_value = exception_keeper_value_1;
 exception_tb = exception_keeper_tb_1;
 exception_lineno = exception_keeper_lineno_1;

 goto try_except_handler_3;
 // End of try:
 try_end_1:;
 CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
 Py_DECREF(tmp_tuple_unpack_1__source_iter);
 tmp_tuple_unpack_1__source_iter = NULL;
 // Tried code:
 {
  PyObject *tmp_assign_source_8;
  PyObject *tmp_iter_arg_3;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
  tmp_iter_arg_3 = tmp_tuple_unpack_1__element_1;
  tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 126;
   type_description_1 = "oooooooooo";
      goto try_except_handler_5;
  }
  {
      PyObject *old = tmp_tuple_unpack_2__source_iter;
      tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_9;
  PyObject *tmp_unpack_3;
  CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
  tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
  tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
  if (tmp_assign_source_9 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooooooo";
   exception_lineno = 126;
      goto try_except_handler_6;
  }
  {
      PyObject *old = tmp_tuple_unpack_2__element_1;
      tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_10;
  PyObject *tmp_unpack_4;
  CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
  tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
  tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
  if (tmp_assign_source_10 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooooooo";
   exception_lineno = 126;
      goto try_except_handler_6;
  }
  {
      PyObject *old = tmp_tuple_unpack_2__element_2;
      tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
      Py_XDECREF(old);
  }

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

     type_description_1 = "oooooooooo";
     exception_lineno = 126;
              goto try_except_handler_6;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[31];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "oooooooooo";
   exception_lineno = 126;
      goto try_except_handler_6;
  }
 }
 goto try_end_2;
 // Exception handler code:
 try_except_handler_6:;
 exception_keeper_type_2 = exception_type;
 exception_keeper_value_2 = exception_value;
 exception_keeper_tb_2 = exception_tb;
 exception_keeper_lineno_2 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
 Py_DECREF(tmp_tuple_unpack_2__source_iter);
 tmp_tuple_unpack_2__source_iter = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto try_except_handler_5;
 // End of try:
 try_end_2:;
 goto try_end_3;
 // Exception handler code:
 try_except_handler_5:;
 exception_keeper_type_3 = exception_type;
 exception_keeper_value_3 = exception_value;
 exception_keeper_tb_3 = exception_tb;
 exception_keeper_lineno_3 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_tuple_unpack_2__element_1);
 tmp_tuple_unpack_2__element_1 = NULL;
 Py_XDECREF(tmp_tuple_unpack_2__element_2);
 tmp_tuple_unpack_2__element_2 = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto try_except_handler_3;
 // End of try:
 try_end_3:;
 goto try_end_4;
 // Exception handler code:
 try_except_handler_3:;
 exception_keeper_type_4 = exception_type;
 exception_keeper_value_4 = exception_value;
 exception_keeper_tb_4 = exception_tb;
 exception_keeper_lineno_4 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_4;
 exception_value = exception_keeper_value_4;
 exception_tb = exception_keeper_tb_4;
 exception_lineno = exception_keeper_lineno_4;

 goto try_except_handler_2;
 // End of try:
 try_end_4:;
 CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
 Py_DECREF(tmp_tuple_unpack_2__source_iter);
 tmp_tuple_unpack_2__source_iter = NULL;
 {
  PyObject *tmp_assign_source_11;
  CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
  tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;
  {
      PyObject *old = var_domain;
      var_domain = tmp_assign_source_11;
      Py_INCREF(var_domain);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_2__element_1);
 tmp_tuple_unpack_2__element_1 = NULL;

 {
  PyObject *tmp_assign_source_12;
  CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
  tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;
  {
      PyObject *old = var_path;
      var_path = tmp_assign_source_12;
      Py_INCREF(var_path);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_2__element_2);
 tmp_tuple_unpack_2__element_2 = NULL;

 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;

 {
  PyObject *tmp_assign_source_13;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
  tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
  {
      PyObject *old = var_cookie;
      var_cookie = tmp_assign_source_13;
      Py_INCREF(var_cookie);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;

 {
  PyObject *tmp_assign_source_14;
  PyObject *tmp_iter_arg_4;
  PyObject *tmp_called_value_6;
  PyObject *tmp_expression_value_9;
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_9 = var_cookie;
  tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[30]);
  if (tmp_called_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 127;
   type_description_1 = "oooooooooo";
      goto try_except_handler_2;
  }
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 127;
  tmp_iter_arg_4 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
  Py_DECREF(tmp_called_value_6);
  if (tmp_iter_arg_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 127;
   type_description_1 = "oooooooooo";
      goto try_except_handler_2;
  }
  tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
  Py_DECREF(tmp_iter_arg_4);
  if (tmp_assign_source_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 127;
   type_description_1 = "oooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = tmp_for_loop_2__for_iterator;
      tmp_for_loop_2__for_iterator = tmp_assign_source_14;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 loop_start_2:;
 {
  PyObject *tmp_next_source_2;
  PyObject *tmp_assign_source_15;
  CHECK_OBJECT(tmp_for_loop_2__for_iterator);
  tmp_next_source_2 = tmp_for_loop_2__for_iterator;
  tmp_assign_source_15 = ITERATOR_NEXT(tmp_next_source_2);
  if (tmp_assign_source_15 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_2;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    type_description_1 = "oooooooooo";
    exception_lineno = 127;
          goto try_except_handler_7;
      }
  }

  {
      PyObject *old = tmp_for_loop_2__iter_value;
      tmp_for_loop_2__iter_value = tmp_assign_source_15;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_16;
  PyObject *tmp_iter_arg_5;
  CHECK_OBJECT(tmp_for_loop_2__iter_value);
  tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
  tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
  if (tmp_assign_source_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 127;
   type_description_1 = "oooooooooo";
      goto try_except_handler_8;
  }
  {
      PyObject *old = tmp_tuple_unpack_3__source_iter;
      tmp_tuple_unpack_3__source_iter = tmp_assign_source_16;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_17;
  PyObject *tmp_unpack_5;
  CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
  tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
  tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
  if (tmp_assign_source_17 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooooooo";
   exception_lineno = 127;
      goto try_except_handler_9;
  }
  {
      PyObject *old = tmp_tuple_unpack_3__element_1;
      tmp_tuple_unpack_3__element_1 = tmp_assign_source_17;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_18;
  PyObject *tmp_unpack_6;
  CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
  tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
  tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
  if (tmp_assign_source_18 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooooooo";
   exception_lineno = 127;
      goto try_except_handler_9;
  }
  {
      PyObject *old = tmp_tuple_unpack_3__element_2;
      tmp_tuple_unpack_3__element_2 = tmp_assign_source_18;
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

     type_description_1 = "oooooooooo";
     exception_lineno = 127;
              goto try_except_handler_9;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[31];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "oooooooooo";
   exception_lineno = 127;
      goto try_except_handler_9;
  }
 }
 goto try_end_5;
 // Exception handler code:
 try_except_handler_9:;
 exception_keeper_type_5 = exception_type;
 exception_keeper_value_5 = exception_value;
 exception_keeper_tb_5 = exception_tb;
 exception_keeper_lineno_5 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
 Py_DECREF(tmp_tuple_unpack_3__source_iter);
 tmp_tuple_unpack_3__source_iter = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_5;
 exception_value = exception_keeper_value_5;
 exception_tb = exception_keeper_tb_5;
 exception_lineno = exception_keeper_lineno_5;

 goto try_except_handler_8;
 // End of try:
 try_end_5:;
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

 Py_XDECREF(tmp_tuple_unpack_3__element_1);
 tmp_tuple_unpack_3__element_1 = NULL;
 Py_XDECREF(tmp_tuple_unpack_3__element_2);
 tmp_tuple_unpack_3__element_2 = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_6;
 exception_value = exception_keeper_value_6;
 exception_tb = exception_keeper_tb_6;
 exception_lineno = exception_keeper_lineno_6;

 goto try_except_handler_7;
 // End of try:
 try_end_6:;
 CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
 Py_DECREF(tmp_tuple_unpack_3__source_iter);
 tmp_tuple_unpack_3__source_iter = NULL;
 {
  PyObject *tmp_assign_source_19;
  CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
  tmp_assign_source_19 = tmp_tuple_unpack_3__element_1;
  {
      PyObject *old = var_name;
      var_name = tmp_assign_source_19;
      Py_INCREF(var_name);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_3__element_1);
 tmp_tuple_unpack_3__element_1 = NULL;

 {
  PyObject *tmp_assign_source_20;
  CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
  tmp_assign_source_20 = tmp_tuple_unpack_3__element_2;
  {
      PyObject *old = var_morsel;
      var_morsel = tmp_assign_source_20;
      Py_INCREF(var_morsel);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_3__element_2);
 tmp_tuple_unpack_3__element_2 = NULL;

 {
  PyObject *tmp_assign_source_21;
  PyObject *tmp_tuple_element_1;
  CHECK_OBJECT(var_domain);
  tmp_tuple_element_1 = var_domain;
  tmp_assign_source_21 = MAKE_TUPLE_EMPTY(tstate, 3);
  PyTuple_SET_ITEM0(tmp_assign_source_21, 0, tmp_tuple_element_1);
  CHECK_OBJECT(var_path);
  tmp_tuple_element_1 = var_path;
  PyTuple_SET_ITEM0(tmp_assign_source_21, 1, tmp_tuple_element_1);
  CHECK_OBJECT(var_name);
  tmp_tuple_element_1 = var_name;
  PyTuple_SET_ITEM0(tmp_assign_source_21, 2, tmp_tuple_element_1);
  {
      PyObject *old = var_key;
      var_key = tmp_assign_source_21;
      Py_XDECREF(old);
  }

 }
 {
  nuitka_bool tmp_condition_result_2;
  int tmp_or_left_truth_1;
  nuitka_bool tmp_or_left_value_1;
  nuitka_bool tmp_or_right_value_1;
  int tmp_and_left_truth_1;
  nuitka_bool tmp_and_left_value_1;
  nuitka_bool tmp_and_right_value_1;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  PyObject *tmp_expression_value_10;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_expression_value_12;
  PyObject *tmp_subscript_value_1;
  PyObject *tmp_called_value_7;
  PyObject *tmp_call_result_4;
  PyObject *tmp_args_element_value_2;
  int tmp_truth_name_1;
  CHECK_OBJECT(var_key);
  tmp_cmp_expr_left_2 = var_key;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 130;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }

  tmp_expression_value_10 = par_self;
  tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[15]);
  if (tmp_cmp_expr_right_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 130;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }
  tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
  Py_DECREF(tmp_cmp_expr_right_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 130;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }
  tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 130;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }

  tmp_expression_value_12 = par_self;
  tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[15]);
  if (tmp_expression_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 130;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }
  CHECK_OBJECT(var_key);
  tmp_subscript_value_1 = var_key;
  tmp_cmp_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_1);
  Py_DECREF(tmp_expression_value_11);
  if (tmp_cmp_expr_left_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 130;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }
  CHECK_OBJECT(var_now);
  tmp_cmp_expr_right_3 = var_now;
  tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
  Py_DECREF(tmp_cmp_expr_left_3);
  if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 130;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }
  tmp_or_left_value_1 = tmp_and_right_value_1;
  goto and_end_1;
  and_left_1:;
  tmp_or_left_value_1 = tmp_and_left_value_1;
  and_end_1:;
  tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_or_left_truth_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 130;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }
  if (tmp_or_left_truth_1 == 1) {
      goto or_left_1;
  } else {
      goto or_right_1;
  }
  or_right_1:;
  if (par_predicate == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 131;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }

  tmp_called_value_7 = par_predicate;
  CHECK_OBJECT(var_morsel);
  tmp_args_element_value_2 = var_morsel;
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 131;
  tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_2);
  if (tmp_call_result_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 131;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_4);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_call_result_4);

   exception_lineno = 131;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }
  tmp_or_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_call_result_4);
  tmp_condition_result_2 = tmp_or_right_value_1;
  goto or_end_1;
  or_left_1:;
  tmp_condition_result_2 = tmp_or_left_value_1;
  or_end_1:;
  if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_list_arg_value_1;
  PyObject *tmp_item_value_1;
  if (var_to_del == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 132;
   type_description_1 = "oooooooooo";
      goto try_except_handler_7;
  }

  tmp_list_arg_value_1 = var_to_del;
  CHECK_OBJECT(var_key);
  tmp_item_value_1 = var_key;
  tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
  assert(!(tmp_result == false));
 }
 branch_no_2:;
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 127;
  type_description_1 = "oooooooooo";
     goto try_except_handler_7;
 }
 goto loop_start_2;
 loop_end_2:;
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

 Py_XDECREF(tmp_for_loop_2__iter_value);
 tmp_for_loop_2__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_2__for_iterator);
 Py_DECREF(tmp_for_loop_2__for_iterator);
 tmp_for_loop_2__for_iterator = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_7;
 exception_value = exception_keeper_value_7;
 exception_tb = exception_keeper_tb_7;
 exception_lineno = exception_keeper_lineno_7;

 goto try_except_handler_2;
 // End of try:
 try_end_7:;
 Py_XDECREF(tmp_for_loop_2__iter_value);
 tmp_for_loop_2__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_2__for_iterator);
 Py_DECREF(tmp_for_loop_2__for_iterator);
 tmp_for_loop_2__for_iterator = NULL;
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 126;
  type_description_1 = "oooooooooo";
     goto try_except_handler_2;
 }
 goto loop_start_1;
 loop_end_1:;
 goto try_end_8;
 // Exception handler code:
 try_except_handler_2:;
 exception_keeper_type_8 = exception_type;
 exception_keeper_value_8 = exception_value;
 exception_keeper_tb_8 = exception_tb;
 exception_keeper_lineno_8 = exception_lineno;
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
 exception_type = exception_keeper_type_8;
 exception_value = exception_keeper_value_8;
 exception_tb = exception_keeper_tb_8;
 exception_lineno = exception_keeper_lineno_8;

 goto frame_exception_exit_1;
 // End of try:
 try_end_8:;
 Py_XDECREF(tmp_for_loop_1__iter_value);
 tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_1__for_iterator);
 Py_DECREF(tmp_for_loop_1__for_iterator);
 tmp_for_loop_1__for_iterator = NULL;
 {
  PyObject *tmp_assign_source_22;
  PyObject *tmp_iter_arg_6;
  if (var_to_del == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 134;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_iter_arg_6 = var_to_del;
  tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
  if (tmp_assign_source_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 134;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  assert(tmp_for_loop_3__for_iterator == NULL);
  tmp_for_loop_3__for_iterator = tmp_assign_source_22;
 }
 // Tried code:
 loop_start_3:;
 {
  PyObject *tmp_next_source_3;
  PyObject *tmp_assign_source_23;
  CHECK_OBJECT(tmp_for_loop_3__for_iterator);
  tmp_next_source_3 = tmp_for_loop_3__for_iterator;
  tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_3);
  if (tmp_assign_source_23 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_3;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    type_description_1 = "oooooooooo";
    exception_lineno = 134;
          goto try_except_handler_10;
      }
  }

  {
      PyObject *old = tmp_for_loop_3__iter_value;
      tmp_for_loop_3__iter_value = tmp_assign_source_23;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_24;
  PyObject *tmp_iter_arg_7;
  CHECK_OBJECT(tmp_for_loop_3__iter_value);
  tmp_iter_arg_7 = tmp_for_loop_3__iter_value;
  tmp_assign_source_24 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
  if (tmp_assign_source_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 134;
   type_description_1 = "oooooooooo";
      goto try_except_handler_11;
  }
  {
      PyObject *old = tmp_tuple_unpack_4__source_iter;
      tmp_tuple_unpack_4__source_iter = tmp_assign_source_24;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_25;
  PyObject *tmp_unpack_7;
  CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
  tmp_unpack_7 = tmp_tuple_unpack_4__source_iter;
  tmp_assign_source_25 = UNPACK_NEXT(tstate, tmp_unpack_7, 0, 3);
  if (tmp_assign_source_25 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooooooo";
   exception_lineno = 134;
      goto try_except_handler_12;
  }
  {
      PyObject *old = tmp_tuple_unpack_4__element_1;
      tmp_tuple_unpack_4__element_1 = tmp_assign_source_25;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_26;
  PyObject *tmp_unpack_8;
  CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
  tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
  tmp_assign_source_26 = UNPACK_NEXT(tstate, tmp_unpack_8, 1, 3);
  if (tmp_assign_source_26 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooooooo";
   exception_lineno = 134;
      goto try_except_handler_12;
  }
  {
      PyObject *old = tmp_tuple_unpack_4__element_2;
      tmp_tuple_unpack_4__element_2 = tmp_assign_source_26;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_27;
  PyObject *tmp_unpack_9;
  CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
  tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
  tmp_assign_source_27 = UNPACK_NEXT(tstate, tmp_unpack_9, 2, 3);
  if (tmp_assign_source_27 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooooooo";
   exception_lineno = 134;
      goto try_except_handler_12;
  }
  {
      PyObject *old = tmp_tuple_unpack_4__element_3;
      tmp_tuple_unpack_4__element_3 = tmp_assign_source_27;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_iterator_name_4;
  CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
  tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
  // Check if iterator has left-over elements.
  CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

  tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

  if (likely(tmp_iterator_attempt == NULL)) {
      PyObject *error = GET_ERROR_OCCURRED(tstate);

      if (error != NULL) {
          if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
              CLEAR_ERROR_OCCURRED(tstate);
          } else {
              FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

     type_description_1 = "oooooooooo";
     exception_lineno = 134;
              goto try_except_handler_12;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[35];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "oooooooooo";
   exception_lineno = 134;
      goto try_except_handler_12;
  }
 }
 goto try_end_9;
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

 CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
 Py_DECREF(tmp_tuple_unpack_4__source_iter);
 tmp_tuple_unpack_4__source_iter = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_9;
 exception_value = exception_keeper_value_9;
 exception_tb = exception_keeper_tb_9;
 exception_lineno = exception_keeper_lineno_9;

 goto try_except_handler_11;
 // End of try:
 try_end_9:;
 goto try_end_10;
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

 Py_XDECREF(tmp_tuple_unpack_4__element_1);
 tmp_tuple_unpack_4__element_1 = NULL;
 Py_XDECREF(tmp_tuple_unpack_4__element_2);
 tmp_tuple_unpack_4__element_2 = NULL;
 Py_XDECREF(tmp_tuple_unpack_4__element_3);
 tmp_tuple_unpack_4__element_3 = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_10;
 exception_value = exception_keeper_value_10;
 exception_tb = exception_keeper_tb_10;
 exception_lineno = exception_keeper_lineno_10;

 goto try_except_handler_10;
 // End of try:
 try_end_10:;
 CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
 Py_DECREF(tmp_tuple_unpack_4__source_iter);
 tmp_tuple_unpack_4__source_iter = NULL;
 {
  PyObject *tmp_assign_source_28;
  CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
  tmp_assign_source_28 = tmp_tuple_unpack_4__element_1;
  {
      PyObject *old = var_domain;
      var_domain = tmp_assign_source_28;
      Py_INCREF(var_domain);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_4__element_1);
 tmp_tuple_unpack_4__element_1 = NULL;

 {
  PyObject *tmp_assign_source_29;
  CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
  tmp_assign_source_29 = tmp_tuple_unpack_4__element_2;
  {
      PyObject *old = var_path;
      var_path = tmp_assign_source_29;
      Py_INCREF(var_path);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_4__element_2);
 tmp_tuple_unpack_4__element_2 = NULL;

 {
  PyObject *tmp_assign_source_30;
  CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
  tmp_assign_source_30 = tmp_tuple_unpack_4__element_3;
  {
      PyObject *old = var_name;
      var_name = tmp_assign_source_30;
      Py_INCREF(var_name);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_4__element_3);
 tmp_tuple_unpack_4__element_3 = NULL;

 {
  PyObject *tmp_called_instance_3;
  PyObject *tmp_expression_value_13;
  PyObject *tmp_call_result_5;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_tuple_element_2;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 135;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }

  tmp_expression_value_13 = par_self;
  tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[6]);
  if (tmp_called_instance_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 135;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }
  CHECK_OBJECT(var_domain);
  tmp_tuple_element_2 = var_domain;
  tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_2);
  CHECK_OBJECT(var_name);
  tmp_tuple_element_2 = var_name;
  PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_2);
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 135;
  tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[36], tmp_args_element_value_3);
  Py_DECREF(tmp_called_instance_3);
  Py_DECREF(tmp_args_element_value_3);
  if (tmp_call_result_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 135;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }
  Py_DECREF(tmp_call_result_5);
 }
 {
  PyObject *tmp_assign_source_31;
  PyObject *tmp_tuple_element_3;
  CHECK_OBJECT(var_domain);
  tmp_tuple_element_3 = var_domain;
  tmp_assign_source_31 = MAKE_TUPLE_EMPTY(tstate, 3);
  PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_3);
  CHECK_OBJECT(var_path);
  tmp_tuple_element_3 = var_path;
  PyTuple_SET_ITEM0(tmp_assign_source_31, 1, tmp_tuple_element_3);
  CHECK_OBJECT(var_name);
  tmp_tuple_element_3 = var_name;
  PyTuple_SET_ITEM0(tmp_assign_source_31, 2, tmp_tuple_element_3);
  {
      PyObject *old = var_key;
      var_key = tmp_assign_source_31;
      Py_XDECREF(old);
  }

 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_cmp_expr_left_4;
  PyObject *tmp_cmp_expr_right_4;
  PyObject *tmp_expression_value_14;
  CHECK_OBJECT(var_key);
  tmp_cmp_expr_left_4 = var_key;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 137;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }

  tmp_expression_value_14 = par_self;
  tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[15]);
  if (tmp_cmp_expr_right_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 137;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }
  tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
  Py_DECREF(tmp_cmp_expr_right_4);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 137;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }
  tmp_condition_result_3 = (tmp_res == 1) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_delsubscr_target_1;
  PyObject *tmp_expression_value_15;
  PyObject *tmp_delsubscr_subscript_1;
  PyObject *tmp_tuple_element_4;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 138;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }

  tmp_expression_value_15 = par_self;
  tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[15]);
  if (tmp_delsubscr_target_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 138;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }
  CHECK_OBJECT(var_domain);
  tmp_tuple_element_4 = var_domain;
  tmp_delsubscr_subscript_1 = MAKE_TUPLE_EMPTY(tstate, 3);
  PyTuple_SET_ITEM0(tmp_delsubscr_subscript_1, 0, tmp_tuple_element_4);
  CHECK_OBJECT(var_path);
  tmp_tuple_element_4 = var_path;
  PyTuple_SET_ITEM0(tmp_delsubscr_subscript_1, 1, tmp_tuple_element_4);
  CHECK_OBJECT(var_name);
  tmp_tuple_element_4 = var_name;
  PyTuple_SET_ITEM0(tmp_delsubscr_subscript_1, 2, tmp_tuple_element_4);
  tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
  Py_DECREF(tmp_delsubscr_target_1);
  Py_DECREF(tmp_delsubscr_subscript_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 138;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }
 }
 branch_no_3:;
 {
  PyObject *tmp_called_value_8;
  PyObject *tmp_expression_value_16;
  PyObject *tmp_expression_value_17;
  PyObject *tmp_expression_value_18;
  PyObject *tmp_subscript_value_2;
  PyObject *tmp_tuple_element_5;
  PyObject *tmp_call_result_6;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_args_element_value_5;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 139;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }

  tmp_expression_value_18 = par_self;
  tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[5]);
  if (tmp_expression_value_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 139;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }
  CHECK_OBJECT(var_domain);
  tmp_tuple_element_5 = var_domain;
  tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_5);
  CHECK_OBJECT(var_path);
  tmp_tuple_element_5 = var_path;
  PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_5);
  tmp_expression_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_2);
  Py_DECREF(tmp_expression_value_17);
  Py_DECREF(tmp_subscript_value_2);
  if (tmp_expression_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 139;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }
  tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[37]);
  Py_DECREF(tmp_expression_value_16);
  if (tmp_called_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 139;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }
  CHECK_OBJECT(var_name);
  tmp_args_element_value_4 = var_name;
  tmp_args_element_value_5 = Py_None;
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 139;
  {
      PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
      tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
  }

  Py_DECREF(tmp_called_value_8);
  if (tmp_call_result_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 139;
   type_description_1 = "oooooooooo";
      goto try_except_handler_10;
  }
  Py_DECREF(tmp_call_result_6);
 }
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 134;
  type_description_1 = "oooooooooo";
     goto try_except_handler_10;
 }
 goto loop_start_3;
 loop_end_3:;
 goto try_end_11;
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

 Py_XDECREF(tmp_for_loop_3__iter_value);
 tmp_for_loop_3__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_3__for_iterator);
 Py_DECREF(tmp_for_loop_3__for_iterator);
 tmp_for_loop_3__for_iterator = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_11;
 exception_value = exception_keeper_value_11;
 exception_tb = exception_keeper_tb_11;
 exception_lineno = exception_keeper_lineno_11;

 goto frame_exception_exit_1;
 // End of try:
 try_end_11:;
 Py_XDECREF(tmp_for_loop_3__iter_value);
 tmp_for_loop_3__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_3__for_iterator);
 Py_DECREF(tmp_for_loop_3__for_iterator);
 tmp_for_loop_3__for_iterator = NULL;
 {
  PyObject *tmp_assattr_value_2;
  nuitka_bool tmp_condition_result_4;
  PyObject *tmp_expression_value_19;
  PyObject *tmp_attribute_value_1;
  int tmp_truth_name_2;
  PyObject *tmp_add_expr_left_1;
  PyObject *tmp_add_expr_right_1;
  PyObject *tmp_dircall_arg1_1;
  PyObject *tmp_dircall_arg2_1;
  PyObject *tmp_dircall_arg1_2;
  PyObject *tmp_tuple_element_6;
  PyObject *tmp_called_value_9;
  PyObject *tmp_expression_value_20;
  PyObject *tmp_expression_value_21;
  PyObject *tmp_expression_value_23;
  PyObject *tmp_assattr_target_2;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 143;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_19 = par_self;
  tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[15]);
  if (tmp_attribute_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_1);
  if (tmp_truth_name_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_1);

   exception_lineno = 143;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_1);
  if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  tmp_dircall_arg1_1 = LOOKUP_BUILTIN(mod_consts[38]);
  assert(tmp_dircall_arg1_1 != NULL);
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 142;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_21 = par_self;
  tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[15]);
  if (tmp_expression_value_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 142;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[39]);
  Py_DECREF(tmp_expression_value_20);
  if (tmp_called_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 142;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  frame_80c125e36b9662e114d0770a25a61708->m_frame.f_lineno = 142;
  tmp_tuple_element_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
  Py_DECREF(tmp_called_value_9);
  if (tmp_tuple_element_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 142;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_dircall_arg1_2 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_tuple_element_7;
   PyObject *tmp_expression_value_22;
   PyTuple_SET_ITEM(tmp_dircall_arg1_2, 0, tmp_tuple_element_6);
   if (par_self == NULL) {

    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
    exception_tb = NULL;
    NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
    CHAIN_EXCEPTION(tstate, exception_value);

    exception_lineno = 142;
    type_description_1 = "oooooooooo";
       goto tuple_build_exception_1;
   }

   tmp_expression_value_22 = par_self;
   tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[40]);
   if (tmp_tuple_element_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 142;
    type_description_1 = "oooooooooo";
       goto tuple_build_exception_1;
   }
   tmp_tuple_element_6 = MAKE_TUPLE_EMPTY(tstate, 1);
   PyTuple_SET_ITEM(tmp_tuple_element_6, 0, tmp_tuple_element_7);
   PyTuple_SET_ITEM(tmp_dircall_arg1_2, 1, tmp_tuple_element_6);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_dircall_arg1_2);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
      tmp_dircall_arg2_1 = impl___main__$$$helper_function__unpack_list(tstate, dir_call_args);
  }
  if (tmp_dircall_arg2_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 142;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  Py_INCREF(tmp_dircall_arg1_1);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
      tmp_add_expr_left_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
  }
  if (tmp_add_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 142;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_1 = mod_consts[41];
  tmp_assattr_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
  Py_DECREF(tmp_add_expr_left_1);
  if (tmp_assattr_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 142;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 144;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_23 = par_self;
  tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[42]);
  if (tmp_assattr_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 144;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
  condexpr_end_1:;
  if (par_self == NULL) {
   Py_DECREF(tmp_assattr_value_2);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 141;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[14], tmp_assattr_value_2);
  Py_DECREF(tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 141;
   type_description_1 = "oooooooooo";
      goto frame_exception_exit_1;
  }
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
     exception_tb = MAKE_TRACEBACK(frame_80c125e36b9662e114d0770a25a61708, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_80c125e36b9662e114d0770a25a61708->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_80c125e36b9662e114d0770a25a61708, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_80c125e36b9662e114d0770a25a61708,
     type_description_1,
     par_self,
     par_predicate,
     var_to_del,
     var_now,
     var_domain,
     var_path,
     var_cookie,
     var_name,
     var_morsel,
     var_key
 );


 // Release cached frame if used for exception.
 if (frame_80c125e36b9662e114d0770a25a61708 == cache_frame_80c125e36b9662e114d0770a25a61708) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_80c125e36b9662e114d0770a25a61708);
     cache_frame_80c125e36b9662e114d0770a25a61708 = NULL;
 }

 assertFrameObject(frame_80c125e36b9662e114d0770a25a61708);

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
 Py_XDECREF(var_to_del);
 var_to_del = NULL;
 Py_XDECREF(var_now);
 var_now = NULL;
 Py_XDECREF(var_domain);
 var_domain = NULL;
 Py_XDECREF(var_path);
 var_path = NULL;
 Py_XDECREF(var_cookie);
 var_cookie = NULL;
 Py_XDECREF(var_name);
 var_name = NULL;
 Py_XDECREF(var_morsel);
 var_morsel = NULL;
 Py_XDECREF(var_key);
 var_key = NULL;
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

 Py_XDECREF(var_to_del);
 var_to_del = NULL;
 Py_XDECREF(var_now);
 var_now = NULL;
 Py_XDECREF(var_domain);
 var_domain = NULL;
 Py_XDECREF(var_path);
 var_path = NULL;
 Py_XDECREF(var_cookie);
 var_cookie = NULL;
 Py_XDECREF(var_name);
 var_name = NULL;
 Py_XDECREF(var_morsel);
 var_morsel = NULL;
 Py_XDECREF(var_key);
 var_key = NULL;
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
 CHECK_OBJECT(par_predicate);
 Py_DECREF(par_predicate);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_predicate);
 Py_DECREF(par_predicate);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$cookiejar$$$function__5_clear_domain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_domain = Nuitka_Cell_New1(python_pars[1]);
 struct Nuitka_FrameObject *frame_40ecb74037c3ba2007dd1a3a8756dde8;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_40ecb74037c3ba2007dd1a3a8756dde8 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_40ecb74037c3ba2007dd1a3a8756dde8)) {
     Py_XDECREF(cache_frame_40ecb74037c3ba2007dd1a3a8756dde8);

#if _DEBUG_REFCOUNTS
     if (cache_frame_40ecb74037c3ba2007dd1a3a8756dde8 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_40ecb74037c3ba2007dd1a3a8756dde8 = MAKE_FUNCTION_FRAME(tstate, codeobj_40ecb74037c3ba2007dd1a3a8756dde8, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_40ecb74037c3ba2007dd1a3a8756dde8->m_type_description == NULL);
 frame_40ecb74037c3ba2007dd1a3a8756dde8 = cache_frame_40ecb74037c3ba2007dd1a3a8756dde8;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_40ecb74037c3ba2007dd1a3a8756dde8);
 assert(Py_REFCNT(frame_40ecb74037c3ba2007dd1a3a8756dde8) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  struct Nuitka_CellObject *tmp_closure_1[2];
  CHECK_OBJECT(Nuitka_Cell_GET(par_self));
  tmp_expression_value_1 = Nuitka_Cell_GET(par_self);
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 148;
   type_description_1 = "cc";
      goto frame_exception_exit_1;
  }

  tmp_closure_1[0] = par_domain;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_self;
  Py_INCREF(tmp_closure_1[1]);

  tmp_args_element_value_1 = MAKE_FUNCTION_aiohttp$cookiejar$$$function__5_clear_domain$$$function__1_lambda(tmp_closure_1);

  frame_40ecb74037c3ba2007dd1a3a8756dde8->m_frame.f_lineno = 148;
  tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_element_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 148;
   type_description_1 = "cc";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_40ecb74037c3ba2007dd1a3a8756dde8, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_40ecb74037c3ba2007dd1a3a8756dde8->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_40ecb74037c3ba2007dd1a3a8756dde8, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_40ecb74037c3ba2007dd1a3a8756dde8,
     type_description_1,
     par_self,
     par_domain
 );


 // Release cached frame if used for exception.
 if (frame_40ecb74037c3ba2007dd1a3a8756dde8 == cache_frame_40ecb74037c3ba2007dd1a3a8756dde8) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_40ecb74037c3ba2007dd1a3a8756dde8);
     cache_frame_40ecb74037c3ba2007dd1a3a8756dde8 = NULL;
 }

 assertFrameObject(frame_40ecb74037c3ba2007dd1a3a8756dde8);

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
 CHECK_OBJECT(par_domain);
 Py_DECREF(par_domain);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_domain);
 Py_DECREF(par_domain);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$cookiejar$$$function__5_clear_domain$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_x = python_pars[0];
 struct Nuitka_FrameObject *frame_2be6246959b92382184da04a4650b024;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_2be6246959b92382184da04a4650b024 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_2be6246959b92382184da04a4650b024)) {
     Py_XDECREF(cache_frame_2be6246959b92382184da04a4650b024);

#if _DEBUG_REFCOUNTS
     if (cache_frame_2be6246959b92382184da04a4650b024 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_2be6246959b92382184da04a4650b024 = MAKE_FUNCTION_FRAME(tstate, codeobj_2be6246959b92382184da04a4650b024, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_2be6246959b92382184da04a4650b024->m_type_description == NULL);
 frame_2be6246959b92382184da04a4650b024 = cache_frame_2be6246959b92382184da04a4650b024;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_2be6246959b92382184da04a4650b024);
 assert(Py_REFCNT(frame_2be6246959b92382184da04a4650b024) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_subscript_value_1;
  if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 148;
   type_description_1 = "occ";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[45]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 148;
   type_description_1 = "occ";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[46]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 148;
   type_description_1 = "occ";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_x);
  tmp_expression_value_2 = par_x;
  tmp_subscript_value_1 = mod_consts[46];
  tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 148;
   type_description_1 = "occ";
      goto frame_exception_exit_1;
  }
  frame_2be6246959b92382184da04a4650b024->m_frame.f_lineno = 148;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_element_value_2);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 148;
   type_description_1 = "occ";
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
     exception_tb = MAKE_TRACEBACK(frame_2be6246959b92382184da04a4650b024, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_2be6246959b92382184da04a4650b024->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_2be6246959b92382184da04a4650b024, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_2be6246959b92382184da04a4650b024,
     type_description_1,
     par_x,
     self->m_closure[1],
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_2be6246959b92382184da04a4650b024 == cache_frame_2be6246959b92382184da04a4650b024) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_2be6246959b92382184da04a4650b024);
     cache_frame_2be6246959b92382184da04a4650b024 = NULL;
 }

 assertFrameObject(frame_2be6246959b92382184da04a4650b024);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto function_exception_exit;
 frame_no_exception_1:;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_x);
 Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_x);
 Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$cookiejar$$$function__6___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

  tmp_return_value = MAKE_GENERATOR_aiohttp$cookiejar$$$function__6___iter__$$$genobj__1___iter__(tmp_closure_1);

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
struct aiohttp$cookiejar$$$function__6___iter__$$$genobj__1___iter___locals {
 PyObject *var_val;
 PyObject *tmp_for_loop_1__for_iterator;
 PyObject *tmp_for_loop_1__iter_value;
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 char yield_tmps[1024];
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 int exception_keeper_lineno_1;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 int exception_keeper_lineno_2;
};
#endif

static PyObject *aiohttp$cookiejar$$$function__6___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$cookiejar$$$function__6___iter__$$$genobj__1___iter___locals *generator_heap = (struct aiohttp$cookiejar$$$function__6___iter__$$$genobj__1___iter___locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(generator->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 generator_heap->var_val = NULL;
 generator_heap->tmp_for_loop_1__for_iterator = NULL;
 generator_heap->tmp_for_loop_1__iter_value = NULL;
 generator_heap->type_description_1 = NULL;
 generator_heap->exception_type = NULL;
 generator_heap->exception_value = NULL;
 generator_heap->exception_tb = NULL;
 generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_611650513e52a1e233872e335f979a77, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_m_frame->m_type_description == NULL);
 generator->m_frame = cache_m_frame;
 // Mark the frame object as in use, ref count 1 will be up for reuse.
 Py_INCREF(generator->m_frame);
 assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

 Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

 assert(generator->m_frame->m_frame.f_back == NULL);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
 assert(Py_REFCNT(generator->m_frame) == 2);

 // Store currently existing exception as the one to publish again when we
 // yield or yield from.
 STORE_GENERATOR_EXCEPTION(tstate, generator);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
   generator_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

   generator_heap->exception_lineno = 151;
   generator_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }

  tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
  generator->m_frame->m_frame.f_lineno = 151;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[47]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


   generator_heap->exception_lineno = 151;
   generator_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_iter_arg_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
   generator_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

   generator_heap->exception_lineno = 152;
   generator_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


   generator_heap->exception_lineno = 152;
   generator_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[39]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


   generator_heap->exception_lineno = 152;
   generator_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  generator->m_frame->m_frame.f_lineno = 152;
  tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
  Py_DECREF(tmp_called_value_1);
  if (tmp_iter_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


   generator_heap->exception_lineno = 152;
   generator_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
  Py_DECREF(tmp_iter_arg_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


   generator_heap->exception_lineno = 152;
   generator_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
  generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
 }
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_2;
  CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
  tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
  tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_2 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    generator_heap->type_description_1 = "co";
    generator_heap->exception_lineno = 152;
          goto try_except_handler_2;
      }
  }

  {
      PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
      generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_3;
  CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
  tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
  {
      PyObject *old = generator_heap->var_val;
      generator_heap->var_val = tmp_assign_source_3;
      Py_INCREF(generator_heap->var_val);
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_expression_value_3;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_yieldfrom_result_1;
  CHECK_OBJECT(generator_heap->var_val);
  tmp_expression_value_4 = generator_heap->var_val;
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[39]);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


   generator_heap->exception_lineno = 153;
   generator_heap->type_description_1 = "co";
      goto try_except_handler_2;
  }
  generator->m_frame->m_frame.f_lineno = 153;
  tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
  Py_DECREF(tmp_called_value_2);
  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


   generator_heap->exception_lineno = 153;
   generator_heap->type_description_1 = "co";
      goto try_except_handler_2;
  }
  Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
  generator->m_yield_return_index = 1;
  generator->m_yield_from = tmp_expression_value_3;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), NULL);
  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


   generator_heap->exception_lineno = 153;
   generator_heap->type_description_1 = "co";
      goto try_except_handler_2;
  }
  tmp_yieldfrom_result_1 = yield_return_value;
  Py_DECREF(tmp_yieldfrom_result_1);
 }
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


  generator_heap->exception_lineno = 152;
  generator_heap->type_description_1 = "co";
     goto try_except_handler_2;
 }
 goto loop_start_1;
 loop_end_1:;
 goto try_end_1;
 // Exception handler code:
 try_except_handler_2:;
 generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
 generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
 generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
 generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
 generator_heap->exception_type = NULL;
 generator_heap->exception_value = NULL;
 generator_heap->exception_tb = NULL;
 generator_heap->exception_lineno = 0;

 Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
 generator_heap->tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
 Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
 generator_heap->tmp_for_loop_1__for_iterator = NULL;
 // Re-raise.
 generator_heap->exception_type = generator_heap->exception_keeper_type_1;
 generator_heap->exception_value = generator_heap->exception_keeper_value_1;
 generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
 generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

 goto frame_exception_exit_1;
 // End of try:
 try_end_1:;

 // Release exception attached to the frame
 DROP_GENERATOR_EXCEPTION(generator);



 goto frame_no_exception_1;
 frame_exception_exit_1:;

 // If it's not an exit exception, consider and create a traceback for it.
 if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
     if (generator_heap->exception_tb == NULL) {
         generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
     } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
         generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
     }

  Nuitka_Frame_AttachLocals(
      generator->m_frame,
      generator_heap->type_description_1,
      generator->m_closure[0],
      generator_heap->var_val
  );


     // Release cached frame if used for exception.
     if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
         count_active_frame_cache_instances -= 1;
         count_released_frame_cache_instances += 1;
#endif

         Py_DECREF(cache_m_frame);
         cache_m_frame = NULL;
     }

     assertFrameObject(generator->m_frame);
 }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
 Py_CLEAR(EXC_TYPE_F(generator));
#endif
 Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
 Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

 // Return the error.
 goto try_except_handler_1;

 frame_no_exception_1:;
 goto try_end_2;
 // Exception handler code:
 try_except_handler_1:;
 generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
 generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
 generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
 generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
 generator_heap->exception_type = NULL;
 generator_heap->exception_value = NULL;
 generator_heap->exception_tb = NULL;
 generator_heap->exception_lineno = 0;

 Py_XDECREF(generator_heap->var_val);
 generator_heap->var_val = NULL;
 // Re-raise.
 generator_heap->exception_type = generator_heap->exception_keeper_type_2;
 generator_heap->exception_value = generator_heap->exception_keeper_value_2;
 generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
 generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

 goto function_exception_exit;
 // End of try:
 try_end_2:;
 Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
 generator_heap->tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
 Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
 generator_heap->tmp_for_loop_1__for_iterator = NULL;
 Py_XDECREF(generator_heap->var_val);
 generator_heap->var_val = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_aiohttp$cookiejar$$$function__6___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        aiohttp$cookiejar$$$function__6___iter__$$$genobj__1___iter___context,
        module_aiohttp$cookiejar,
        mod_consts[48],
#if PYTHON_VERSION >= 0x350
        mod_consts[49],
#endif
        codeobj_611650513e52a1e233872e335f979a77,
        closure,
        1,
#if 1
        sizeof(struct aiohttp$cookiejar$$$function__6___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$cookiejar$$$function__7___len__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *tmp_genexpr_1__$0 = NULL;
 struct Nuitka_FrameObject *frame_41c1df449d170da566fa98172fe8d878;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_41c1df449d170da566fa98172fe8d878 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_41c1df449d170da566fa98172fe8d878)) {
     Py_XDECREF(cache_frame_41c1df449d170da566fa98172fe8d878);

#if _DEBUG_REFCOUNTS
     if (cache_frame_41c1df449d170da566fa98172fe8d878 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_41c1df449d170da566fa98172fe8d878 = MAKE_FUNCTION_FRAME(tstate, codeobj_41c1df449d170da566fa98172fe8d878, module_aiohttp$cookiejar, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_41c1df449d170da566fa98172fe8d878->m_type_description == NULL);
 frame_41c1df449d170da566fa98172fe8d878 = cache_frame_41c1df449d170da566fa98172fe8d878;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_41c1df449d170da566fa98172fe8d878);
 assert(Py_REFCNT(frame_41c1df449d170da566fa98172fe8d878) == 2);

 // Framed code:
 {
  PyObject *tmp_sum_sequence_1;
  {
   PyObject *tmp_assign_source_1;
   PyObject *tmp_iter_arg_1;
   CHECK_OBJECT(par_self);
   tmp_iter_arg_1 = par_self;
   tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
   if (tmp_assign_source_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 156;
    type_description_1 = "o";
       goto frame_exception_exit_1;
   }
   assert(tmp_genexpr_1__$0 == NULL);
   tmp_genexpr_1__$0 = tmp_assign_source_1;
  }
  // Tried code:
  {
   struct Nuitka_CellObject *tmp_closure_1[1];

   tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

   tmp_sum_sequence_1 = MAKE_GENERATOR_aiohttp$cookiejar$$$function__7___len__$$$genexpr__1_genexpr(tmp_closure_1);

   goto try_return_handler_1;
  }
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_1:;
  CHECK_OBJECT(tmp_genexpr_1__$0);
  Py_DECREF(tmp_genexpr_1__$0);
  tmp_genexpr_1__$0 = NULL;
  goto outline_result_1;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_result_1:;
  tmp_return_value = BUILTIN_SUM1(tstate, tmp_sum_sequence_1);
  Py_DECREF(tmp_sum_sequence_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 156;
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
     exception_tb = MAKE_TRACEBACK(frame_41c1df449d170da566fa98172fe8d878, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_41c1df449d170da566fa98172fe8d878->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_41c1df449d170da566fa98172fe8d878, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_41c1df449d170da566fa98172fe8d878,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_41c1df449d170da566fa98172fe8d878 == cache_frame_41c1df449d170da566fa98172fe8d878) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_41c1df449d170da566fa98172fe8d878);
     cache_frame_41c1df449d170da566fa98172fe8d878 = NULL;
 }

 assertFrameObject(frame_41c1df449d170da566fa98172fe8d878);

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



#if 1
struct aiohttp$cookiejar$$$function__7___len__$$$genexpr__1_genexpr_locals {
 PyObject *var_i;
 PyObject *tmp_iter_value_0;
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 int exception_keeper_lineno_1;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 int exception_keeper_lineno_2;
};
#endif

static PyObject *aiohttp$cookiejar$$$function__7___len__$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$cookiejar$$$function__7___len__$$$genexpr__1_genexpr_locals *generator_heap = (struct aiohttp$cookiejar$$$function__7___len__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(generator->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 generator_heap->var_i = NULL;
 generator_heap->tmp_iter_value_0 = NULL;
 generator_heap->type_description_1 = NULL;
 generator_heap->exception_type = NULL;
 generator_heap->exception_value = NULL;
 generator_heap->exception_tb = NULL;
 generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_99b5ef878b1958d6fbf1ac4765cd9c08, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_m_frame->m_type_description == NULL);
 generator->m_frame = cache_m_frame;
 // Mark the frame object as in use, ref count 1 will be up for reuse.
 Py_INCREF(generator->m_frame);
 assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

 Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

 assert(generator->m_frame->m_frame.f_back == NULL);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
 assert(Py_REFCNT(generator->m_frame) == 2);

 // Store currently existing exception as the one to publish again when we
 // yield or yield from.
 STORE_GENERATOR_EXCEPTION(tstate, generator);

 // Framed code:
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_1;
  CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
  tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
  tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_1 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    generator_heap->type_description_1 = "No";
    generator_heap->exception_lineno = 156;
          goto try_except_handler_2;
      }
  }

  {
      PyObject *old = generator_heap->tmp_iter_value_0;
      generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_2;
  CHECK_OBJECT(generator_heap->tmp_iter_value_0);
  tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
  {
      PyObject *old = generator_heap->var_i;
      generator_heap->var_i = tmp_assign_source_2;
      Py_INCREF(generator_heap->var_i);
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_expression_value_1;
  NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
  tmp_expression_value_1 = mod_consts[41];
  Py_INCREF(tmp_expression_value_1);
  generator->m_yield_return_index = 1;
  return tmp_expression_value_1;
  yield_return_1:
  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


   generator_heap->exception_lineno = 156;
   generator_heap->type_description_1 = "No";
      goto try_except_handler_2;
  }
  tmp_yield_result_1 = yield_return_value;
  Py_DECREF(tmp_yield_result_1);
 }
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


  generator_heap->exception_lineno = 156;
  generator_heap->type_description_1 = "No";
     goto try_except_handler_2;
 }
 goto loop_start_1;
 loop_end_1:;
 goto try_end_1;
 // Exception handler code:
 try_except_handler_2:;
 generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
 generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
 generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
 generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
 generator_heap->exception_type = NULL;
 generator_heap->exception_value = NULL;
 generator_heap->exception_tb = NULL;
 generator_heap->exception_lineno = 0;

 Py_XDECREF(generator_heap->tmp_iter_value_0);
 generator_heap->tmp_iter_value_0 = NULL;
 // Re-raise.
 generator_heap->exception_type = generator_heap->exception_keeper_type_1;
 generator_heap->exception_value = generator_heap->exception_keeper_value_1;
 generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
 generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

 goto frame_exception_exit_1;
 // End of try:
 try_end_1:;

 // Release exception attached to the frame
 DROP_GENERATOR_EXCEPTION(generator);



 goto frame_no_exception_1;
 frame_exception_exit_1:;

 // If it's not an exit exception, consider and create a traceback for it.
 if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
     if (generator_heap->exception_tb == NULL) {
         generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
     } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
         generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
     }

  Nuitka_Frame_AttachLocals(
      generator->m_frame,
      generator_heap->type_description_1,
      NULL,
      generator_heap->var_i
  );


     // Release cached frame if used for exception.
     if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
         count_active_frame_cache_instances -= 1;
         count_released_frame_cache_instances += 1;
#endif

         Py_DECREF(cache_m_frame);
         cache_m_frame = NULL;
     }

     assertFrameObject(generator->m_frame);
 }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
 Py_CLEAR(EXC_TYPE_F(generator));
#endif
 Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
 Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

 // Return the error.
 goto try_except_handler_1;

 frame_no_exception_1:;
 goto try_end_2;
 // Exception handler code:
 try_except_handler_1:;
 generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
 generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
 generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
 generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
 generator_heap->exception_type = NULL;
 generator_heap->exception_value = NULL;
 generator_heap->exception_tb = NULL;
 generator_heap->exception_lineno = 0;

 Py_XDECREF(generator_heap->var_i);
 generator_heap->var_i = NULL;
 // Re-raise.
 generator_heap->exception_type = generator_heap->exception_keeper_type_2;
 generator_heap->exception_value = generator_heap->exception_keeper_value_2;
 generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
 generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

 goto function_exception_exit;
 // End of try:
 try_end_2:;
 Py_XDECREF(generator_heap->tmp_iter_value_0);
 generator_heap->tmp_iter_value_0 = NULL;
 Py_XDECREF(generator_heap->var_i);
 generator_heap->var_i = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_aiohttp$cookiejar$$$function__7___len__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        aiohttp$cookiejar$$$function__7___len__$$$genexpr__1_genexpr_context,
        module_aiohttp$cookiejar,
        mod_consts[50],
#if PYTHON_VERSION >= 0x350
        mod_consts[51],
#endif
        codeobj_99b5ef878b1958d6fbf1ac4765cd9c08,
        closure,
        1,
#if 1
        sizeof(struct aiohttp$cookiejar$$$function__7___len__$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$cookiejar$$$function__8__do_expiration(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_0792e69200354015fd83a5f0ad04de6a;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_0792e69200354015fd83a5f0ad04de6a = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_0792e69200354015fd83a5f0ad04de6a)) {
     Py_XDECREF(cache_frame_0792e69200354015fd83a5f0ad04de6a);

#if _DEBUG_REFCOUNTS
     if (cache_frame_0792e69200354015fd83a5f0ad04de6a == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_0792e69200354015fd83a5f0ad04de6a = MAKE_FUNCTION_FRAME(tstate, codeobj_0792e69200354015fd83a5f0ad04de6a, module_aiohttp$cookiejar, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_0792e69200354015fd83a5f0ad04de6a->m_type_description == NULL);
 frame_0792e69200354015fd83a5f0ad04de6a = cache_frame_0792e69200354015fd83a5f0ad04de6a;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_0792e69200354015fd83a5f0ad04de6a);
 assert(Py_REFCNT(frame_0792e69200354015fd83a5f0ad04de6a) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[29]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 159;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }


  tmp_args_element_value_1 = MAKE_FUNCTION_aiohttp$cookiejar$$$function__8__do_expiration$$$function__1_lambda();

  frame_0792e69200354015fd83a5f0ad04de6a->m_frame.f_lineno = 159;
  tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_element_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 159;
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
     exception_tb = MAKE_TRACEBACK(frame_0792e69200354015fd83a5f0ad04de6a, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_0792e69200354015fd83a5f0ad04de6a->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_0792e69200354015fd83a5f0ad04de6a, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_0792e69200354015fd83a5f0ad04de6a,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_0792e69200354015fd83a5f0ad04de6a == cache_frame_0792e69200354015fd83a5f0ad04de6a) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_0792e69200354015fd83a5f0ad04de6a);
     cache_frame_0792e69200354015fd83a5f0ad04de6a = NULL;
 }

 assertFrameObject(frame_0792e69200354015fd83a5f0ad04de6a);

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


static PyObject *impl_aiohttp$cookiejar$$$function__9__expire_cookie(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_when = python_pars[1];
 PyObject *par_domain = python_pars[2];
 PyObject *par_path = python_pars[3];
 PyObject *par_name = python_pars[4];
 struct Nuitka_FrameObject *frame_621149c3053c7ba1506c3a063038d0d8;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_621149c3053c7ba1506c3a063038d0d8 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_621149c3053c7ba1506c3a063038d0d8)) {
     Py_XDECREF(cache_frame_621149c3053c7ba1506c3a063038d0d8);

#if _DEBUG_REFCOUNTS
     if (cache_frame_621149c3053c7ba1506c3a063038d0d8 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_621149c3053c7ba1506c3a063038d0d8 = MAKE_FUNCTION_FRAME(tstate, codeobj_621149c3053c7ba1506c3a063038d0d8, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_621149c3053c7ba1506c3a063038d0d8->m_type_description == NULL);
 frame_621149c3053c7ba1506c3a063038d0d8 = cache_frame_621149c3053c7ba1506c3a063038d0d8;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_621149c3053c7ba1506c3a063038d0d8);
 assert(Py_REFCNT(frame_621149c3053c7ba1506c3a063038d0d8) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_assattr_target_1;
  tmp_called_value_1 = LOOKUP_BUILTIN(mod_consts[38]);
  assert(tmp_called_value_1 != NULL);
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 162;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_when);
  tmp_args_element_value_2 = par_when;
  frame_621149c3053c7ba1506c3a063038d0d8->m_frame.f_lineno = 162;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_args_element_value_1);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 162;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 162;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_ass_subvalue_1;
  PyObject *tmp_ass_subscribed_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_ass_subscript_1;
  PyObject *tmp_tuple_element_1;
  CHECK_OBJECT(par_when);
  tmp_ass_subvalue_1 = par_when;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[15]);
  if (tmp_ass_subscribed_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 163;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_domain);
  tmp_tuple_element_1 = par_domain;
  tmp_ass_subscript_1 = MAKE_TUPLE_EMPTY(tstate, 3);
  PyTuple_SET_ITEM0(tmp_ass_subscript_1, 0, tmp_tuple_element_1);
  CHECK_OBJECT(par_path);
  tmp_tuple_element_1 = par_path;
  PyTuple_SET_ITEM0(tmp_ass_subscript_1, 1, tmp_tuple_element_1);
  CHECK_OBJECT(par_name);
  tmp_tuple_element_1 = par_name;
  PyTuple_SET_ITEM0(tmp_ass_subscript_1, 2, tmp_tuple_element_1);
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
  Py_DECREF(tmp_ass_subscribed_1);
  Py_DECREF(tmp_ass_subscript_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 163;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_621149c3053c7ba1506c3a063038d0d8, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_621149c3053c7ba1506c3a063038d0d8->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_621149c3053c7ba1506c3a063038d0d8, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_621149c3053c7ba1506c3a063038d0d8,
     type_description_1,
     par_self,
     par_when,
     par_domain,
     par_path,
     par_name
 );


 // Release cached frame if used for exception.
 if (frame_621149c3053c7ba1506c3a063038d0d8 == cache_frame_621149c3053c7ba1506c3a063038d0d8) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_621149c3053c7ba1506c3a063038d0d8);
     cache_frame_621149c3053c7ba1506c3a063038d0d8 = NULL;
 }

 assertFrameObject(frame_621149c3053c7ba1506c3a063038d0d8);

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
 CHECK_OBJECT(par_when);
 Py_DECREF(par_when);
 CHECK_OBJECT(par_domain);
 Py_DECREF(par_domain);
 CHECK_OBJECT(par_path);
 Py_DECREF(par_path);
 CHECK_OBJECT(par_name);
 Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_when);
 Py_DECREF(par_when);
 CHECK_OBJECT(par_domain);
 Py_DECREF(par_domain);
 CHECK_OBJECT(par_path);
 Py_DECREF(par_path);
 CHECK_OBJECT(par_name);
 Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$cookiejar$$$function__10_update_cookies(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_cookies = python_pars[1];
 PyObject *par_response_url = python_pars[2];
 PyObject *var_hostname = NULL;
 PyObject *var_name = NULL;
 PyObject *var_cookie = NULL;
 PyObject *var_tmp = NULL;
 PyObject *var_domain = NULL;
 PyObject *var_path = NULL;
 PyObject *var_max_age = NULL;
 PyObject *var_delta_seconds = NULL;
 PyObject *var_max_age_expiration = NULL;
 PyObject *var_expires = NULL;
 PyObject *var_expire_time = NULL;
 PyObject *tmp_assign_unpack_1__assign_source = NULL;
 PyObject *tmp_for_loop_1__for_iterator = NULL;
 PyObject *tmp_for_loop_1__iter_value = NULL;
 PyObject *tmp_tuple_unpack_1__element_1 = NULL;
 PyObject *tmp_tuple_unpack_1__element_2 = NULL;
 PyObject *tmp_tuple_unpack_1__source_iter = NULL;
 struct Nuitka_FrameObject *frame_74cb6ba5113f0f17517d8b79fd6f62ad;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
 PyObject *exception_keeper_type_6;
 PyObject *exception_keeper_value_6;
 PyTracebackObject *exception_keeper_tb_6;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
 static struct Nuitka_FrameObject *cache_frame_74cb6ba5113f0f17517d8b79fd6f62ad = NULL;
 PyObject *exception_keeper_type_7;
 PyObject *exception_keeper_value_7;
 PyTracebackObject *exception_keeper_tb_7;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_74cb6ba5113f0f17517d8b79fd6f62ad)) {
     Py_XDECREF(cache_frame_74cb6ba5113f0f17517d8b79fd6f62ad);

#if _DEBUG_REFCOUNTS
     if (cache_frame_74cb6ba5113f0f17517d8b79fd6f62ad == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_74cb6ba5113f0f17517d8b79fd6f62ad = MAKE_FUNCTION_FRAME(tstate, codeobj_74cb6ba5113f0f17517d8b79fd6f62ad, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_type_description == NULL);
 frame_74cb6ba5113f0f17517d8b79fd6f62ad = cache_frame_74cb6ba5113f0f17517d8b79fd6f62ad;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_74cb6ba5113f0f17517d8b79fd6f62ad);
 assert(Py_REFCNT(frame_74cb6ba5113f0f17517d8b79fd6f62ad) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_response_url);
  tmp_expression_value_1 = par_response_url;
  tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 167;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  assert(var_hostname == NULL);
  var_hostname = tmp_assign_source_1;
 }
 {
  nuitka_bool tmp_condition_result_1;
  int tmp_and_left_truth_1;
  nuitka_bool tmp_and_left_value_1;
  nuitka_bool tmp_and_right_value_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  int tmp_truth_name_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 169;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 169;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_and_left_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[54]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 169;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_hostname);
  tmp_args_element_value_1 = var_hostname;
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 169;
  tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 169;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_call_result_1);

   exception_lineno = 169;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_call_result_1);
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
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_1:;
 {
  nuitka_bool tmp_condition_result_2;
  PyObject *tmp_isinstance_inst_1;
  PyObject *tmp_isinstance_cls_1;
  CHECK_OBJECT(par_cookies);
  tmp_isinstance_inst_1 = par_cookies;
  tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[55]);

  if (unlikely(tmp_isinstance_cls_1 == NULL)) {
      tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
  }

  if (tmp_isinstance_cls_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 173;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 173;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(par_cookies);
  tmp_expression_value_3 = par_cookies;
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[30]);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 174;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 174;
  tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
  Py_DECREF(tmp_called_value_2);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 174;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = par_cookies;
      assert(old != NULL);
      par_cookies = tmp_assign_source_2;
      Py_DECREF(old);
  }

 }
 branch_no_2:;
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_iter_arg_1;
  CHECK_OBJECT(par_cookies);
  tmp_iter_arg_1 = par_cookies;
  tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 176;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  assert(tmp_for_loop_1__for_iterator == NULL);
  tmp_for_loop_1__for_iterator = tmp_assign_source_3;
 }
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_4;
  CHECK_OBJECT(tmp_for_loop_1__for_iterator);
  tmp_next_source_1 = tmp_for_loop_1__for_iterator;
  tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_4 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    type_description_1 = "oooooooooooooo";
    exception_lineno = 176;
          goto try_except_handler_2;
      }
  }

  {
      PyObject *old = tmp_for_loop_1__iter_value;
      tmp_for_loop_1__iter_value = tmp_assign_source_4;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_iter_arg_2;
  CHECK_OBJECT(tmp_for_loop_1__iter_value);
  tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
  tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
  if (tmp_assign_source_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 176;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_3;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__source_iter;
      tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_unpack_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
  if (tmp_assign_source_6 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooooooooooo";
   exception_lineno = 176;
      goto try_except_handler_4;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_1;
      tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_7;
  PyObject *tmp_unpack_2;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
  if (tmp_assign_source_7 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooooooooooo";
   exception_lineno = 176;
      goto try_except_handler_4;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_2;
      tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
      Py_XDECREF(old);
  }

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

     type_description_1 = "oooooooooooooo";
     exception_lineno = 176;
              goto try_except_handler_4;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[31];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "oooooooooooooo";
   exception_lineno = 176;
      goto try_except_handler_4;
  }
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

 CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
 Py_DECREF(tmp_tuple_unpack_1__source_iter);
 tmp_tuple_unpack_1__source_iter = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_1;
 exception_value = exception_keeper_value_1;
 exception_tb = exception_keeper_tb_1;
 exception_lineno = exception_keeper_lineno_1;

 goto try_except_handler_3;
 // End of try:
 try_end_1:;
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

 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto try_except_handler_2;
 // End of try:
 try_end_2:;
 CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
 Py_DECREF(tmp_tuple_unpack_1__source_iter);
 tmp_tuple_unpack_1__source_iter = NULL;
 {
  PyObject *tmp_assign_source_8;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
  tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
  {
      PyObject *old = var_name;
      var_name = tmp_assign_source_8;
      Py_INCREF(var_name);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;

 {
  PyObject *tmp_assign_source_9;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
  tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
  {
      PyObject *old = var_cookie;
      var_cookie = tmp_assign_source_9;
      Py_INCREF(var_cookie);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;

 {
  bool tmp_condition_result_3;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_isinstance_inst_2;
  PyObject *tmp_isinstance_cls_2;
  CHECK_OBJECT(var_cookie);
  tmp_isinstance_inst_2 = var_cookie;
  tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[56]);

  if (unlikely(tmp_isinstance_cls_2 == NULL)) {
      tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
  }

  if (tmp_isinstance_cls_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 177;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 177;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 177;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
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
  PyObject *tmp_assign_source_10;
  PyObject *tmp_called_value_3;
  tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[4]);

  if (unlikely(tmp_called_value_3 == NULL)) {
      tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
  }

  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 178;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 178;
  tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 178;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_tmp;
      var_tmp = tmp_assign_source_10;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_ass_subvalue_1;
  PyObject *tmp_ass_subscribed_1;
  PyObject *tmp_ass_subscript_1;
  CHECK_OBJECT(var_cookie);
  tmp_ass_subvalue_1 = var_cookie;
  CHECK_OBJECT(var_tmp);
  tmp_ass_subscribed_1 = var_tmp;
  CHECK_OBJECT(var_name);
  tmp_ass_subscript_1 = var_name;
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 179;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
 }
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_subscript_value_1;
  CHECK_OBJECT(var_tmp);
  tmp_expression_value_4 = var_tmp;
  CHECK_OBJECT(var_name);
  tmp_subscript_value_1 = var_name;
  tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 180;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_cookie;
      assert(old != NULL);
      var_cookie = tmp_assign_source_11;
      Py_DECREF(old);
  }

 }
 branch_no_3:;
 {
  PyObject *tmp_assign_source_12;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_subscript_value_2;
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_5 = var_cookie;
  tmp_subscript_value_2 = mod_consts[46];
  tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_2);
  if (tmp_assign_source_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 182;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_domain;
      var_domain = tmp_assign_source_12;
      Py_XDECREF(old);
  }

 }
 {
  nuitka_bool tmp_condition_result_4;
  PyObject *tmp_called_value_4;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_call_result_2;
  int tmp_truth_name_2;
  CHECK_OBJECT(var_domain);
  tmp_expression_value_6 = var_domain;
  tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[57]);
  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 185;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 185;
  tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[58]);

  Py_DECREF(tmp_called_value_4);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 185;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
  if (tmp_truth_name_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_call_result_2);

   exception_lineno = 185;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_call_result_2);
  if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_assign_source_13;
  tmp_assign_source_13 = mod_consts[59];
  {
      PyObject *old = var_domain;
      assert(old != NULL);
      var_domain = tmp_assign_source_13;
      Py_INCREF(var_domain);
      Py_DECREF(old);
  }

 }
 {
  PyObject *tmp_delsubscr_target_1;
  PyObject *tmp_delsubscr_subscript_1;
  CHECK_OBJECT(var_cookie);
  tmp_delsubscr_target_1 = var_cookie;
  tmp_delsubscr_subscript_1 = mod_consts[46];
  tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 187;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
 }
 branch_no_4:;
 {
  bool tmp_condition_result_5;
  int tmp_and_left_truth_2;
  bool tmp_and_left_value_2;
  bool tmp_and_right_value_2;
  PyObject *tmp_operand_value_3;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  if (var_domain == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 189;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_operand_value_3 = var_domain;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 189;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
  tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
  if (tmp_and_left_truth_2 == 1) {
      goto and_right_2;
  } else {
      goto and_left_2;
  }
  and_right_2:;
  if (var_hostname == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 189;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_cmp_expr_left_1 = var_hostname;
  tmp_cmp_expr_right_1 = Py_None;
  tmp_and_right_value_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
  tmp_condition_result_5 = tmp_and_right_value_2;
  goto and_end_2;
  and_left_2:;
  tmp_condition_result_5 = tmp_and_left_value_2;
  and_end_2:;
  if (tmp_condition_result_5 != false) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 {
  PyObject *tmp_called_value_5;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_call_result_3;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_tuple_element_1;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 192;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_8 = par_self;
  tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[6]);
  if (tmp_expression_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 192;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[61]);
  Py_DECREF(tmp_expression_value_7);
  if (tmp_called_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 192;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  if (var_hostname == NULL) {
   Py_DECREF(tmp_called_value_5);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 192;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_tuple_element_1 = var_hostname;
  tmp_args_element_value_2 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_element_value_2, 0, tmp_tuple_element_1);
  CHECK_OBJECT(var_name);
  tmp_tuple_element_1 = var_name;
  PyTuple_SET_ITEM0(tmp_args_element_value_2, 1, tmp_tuple_element_1);
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 192;
  tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
  Py_DECREF(tmp_called_value_5);
  Py_DECREF(tmp_args_element_value_2);
  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 192;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_3);
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_14;
  if (var_hostname == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 193;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_5;
  }

  tmp_assign_source_14 = var_hostname;
  {
      PyObject *old = tmp_assign_unpack_1__assign_source;
      tmp_assign_unpack_1__assign_source = tmp_assign_source_14;
      Py_INCREF(tmp_assign_unpack_1__assign_source);
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_15;
  CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
  tmp_assign_source_15 = tmp_assign_unpack_1__assign_source;
  {
      PyObject *old = var_domain;
      var_domain = tmp_assign_source_15;
      Py_INCREF(var_domain);
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_ass_subvalue_2;
  PyObject *tmp_ass_subscribed_2;
  PyObject *tmp_ass_subscript_2;
  CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
  tmp_ass_subvalue_2 = tmp_assign_unpack_1__assign_source;
  CHECK_OBJECT(var_cookie);
  tmp_ass_subscribed_2 = var_cookie;
  tmp_ass_subscript_2 = mod_consts[46];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 193;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_5;
  }
 }
 goto try_end_3;
 // Exception handler code:
 try_except_handler_5:;
 exception_keeper_type_3 = exception_type;
 exception_keeper_value_3 = exception_value;
 exception_keeper_tb_3 = exception_tb;
 exception_keeper_lineno_3 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(tmp_assign_unpack_1__assign_source);
 tmp_assign_unpack_1__assign_source = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto try_except_handler_2;
 // End of try:
 try_end_3:;
 CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
 Py_DECREF(tmp_assign_unpack_1__assign_source);
 tmp_assign_unpack_1__assign_source = NULL;
 branch_no_5:;
 {
  nuitka_bool tmp_condition_result_6;
  PyObject *tmp_called_value_6;
  PyObject *tmp_expression_value_9;
  PyObject *tmp_call_result_4;
  int tmp_truth_name_3;
  if (var_domain == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 195;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_9 = var_domain;
  tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[62]);
  if (tmp_called_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 195;
  tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[58]);

  Py_DECREF(tmp_called_value_6);
  if (tmp_call_result_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 195;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_4);
  if (tmp_truth_name_3 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_call_result_4);

   exception_lineno = 195;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_6 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_call_result_4);
  if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
      goto branch_yes_6;
  } else {
      goto branch_no_6;
  }
 }
 branch_yes_6:;
 {
  PyObject *tmp_assign_source_16;
  PyObject *tmp_expression_value_10;
  PyObject *tmp_subscript_value_3;
  if (var_domain == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 197;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_10 = var_domain;
  tmp_subscript_value_3 = mod_consts[63];
  tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_3);
  if (tmp_assign_source_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 197;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_domain;
      var_domain = tmp_assign_source_16;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_ass_subvalue_3;
  PyObject *tmp_ass_subscribed_3;
  PyObject *tmp_ass_subscript_3;
  CHECK_OBJECT(var_domain);
  tmp_ass_subvalue_3 = var_domain;
  CHECK_OBJECT(var_cookie);
  tmp_ass_subscribed_3 = var_cookie;
  tmp_ass_subscript_3 = mod_consts[46];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 198;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
 }
 branch_no_6:;
 {
  nuitka_bool tmp_condition_result_7;
  int tmp_and_left_truth_3;
  nuitka_bool tmp_and_left_value_3;
  nuitka_bool tmp_and_right_value_3;
  int tmp_truth_name_4;
  PyObject *tmp_operand_value_4;
  PyObject *tmp_called_value_7;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_args_element_value_4;
  if (var_hostname == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 200;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_truth_name_4 = CHECK_IF_TRUE(var_hostname);
  if (tmp_truth_name_4 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_and_left_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_3 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  if (tmp_and_left_truth_3 == 1) {
      goto and_right_3;
  } else {
      goto and_left_3;
  }
  and_right_3:;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 200;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_11 = par_self;
  tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[45]);
  if (tmp_called_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  if (var_domain == NULL) {
   Py_DECREF(tmp_called_value_7);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 200;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_args_element_value_3 = var_domain;
  if (var_hostname == NULL) {
   Py_DECREF(tmp_called_value_7);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 200;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_args_element_value_4 = var_hostname;
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 200;
  {
      PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
      tmp_operand_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
  }

  Py_DECREF(tmp_called_value_7);
  if (tmp_operand_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
  Py_DECREF(tmp_operand_value_4);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_and_right_value_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  tmp_condition_result_7 = tmp_and_right_value_3;
  goto and_end_3;
  and_left_3:;
  tmp_condition_result_7 = tmp_and_left_value_3;
  and_end_3:;
  if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
      goto branch_yes_7;
  } else {
      goto branch_no_7;
  }
 }
 branch_yes_7:;
 goto loop_start_1;
 branch_no_7:;
 {
  PyObject *tmp_assign_source_17;
  PyObject *tmp_expression_value_12;
  PyObject *tmp_subscript_value_4;
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_12 = var_cookie;
  tmp_subscript_value_4 = mod_consts[64];
  tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_4);
  if (tmp_assign_source_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 204;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_path;
      var_path = tmp_assign_source_17;
      Py_XDECREF(old);
  }

 }
 {
  bool tmp_condition_result_8;
  int tmp_or_left_truth_1;
  bool tmp_or_left_value_1;
  bool tmp_or_right_value_1;
  PyObject *tmp_operand_value_5;
  PyObject *tmp_operand_value_6;
  PyObject *tmp_called_value_8;
  PyObject *tmp_expression_value_13;
  CHECK_OBJECT(var_path);
  tmp_operand_value_5 = var_path;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 205;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_or_left_value_1 = (tmp_res == 0) ? true : false;
  tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
  if (tmp_or_left_truth_1 == 1) {
      goto or_left_1;
  } else {
      goto or_right_1;
  }
  or_right_1:;
  CHECK_OBJECT(var_path);
  tmp_expression_value_13 = var_path;
  tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[62]);
  if (tmp_called_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 205;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 205;
  tmp_operand_value_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[65]);

  Py_DECREF(tmp_called_value_8);
  if (tmp_operand_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 205;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
  Py_DECREF(tmp_operand_value_6);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 205;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_or_right_value_1 = (tmp_res == 0) ? true : false;
  tmp_condition_result_8 = tmp_or_right_value_1;
  goto or_end_1;
  or_left_1:;
  tmp_condition_result_8 = tmp_or_left_value_1;
  or_end_1:;
  if (tmp_condition_result_8 != false) {
      goto branch_yes_8;
  } else {
      goto branch_no_8;
  }
 }
 branch_yes_8:;
 {
  PyObject *tmp_assign_source_18;
  PyObject *tmp_expression_value_14;
  if (par_response_url == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 207;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_14 = par_response_url;
  tmp_assign_source_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[64]);
  if (tmp_assign_source_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 207;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_path;
      assert(old != NULL);
      var_path = tmp_assign_source_18;
      Py_DECREF(old);
  }

 }
 {
  bool tmp_condition_result_9;
  PyObject *tmp_operand_value_7;
  PyObject *tmp_called_value_9;
  PyObject *tmp_expression_value_15;
  CHECK_OBJECT(var_path);
  tmp_expression_value_15 = var_path;
  tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[62]);
  if (tmp_called_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 208;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 208;
  tmp_operand_value_7 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[65]);

  Py_DECREF(tmp_called_value_9);
  if (tmp_operand_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 208;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
  Py_DECREF(tmp_operand_value_7);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 208;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_9 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_9 != false) {
      goto branch_yes_9;
  } else {
      goto branch_no_9;
  }
 }
 branch_yes_9:;
 {
  PyObject *tmp_assign_source_19;
  tmp_assign_source_19 = mod_consts[67];
  {
      PyObject *old = var_path;
      assert(old != NULL);
      var_path = tmp_assign_source_19;
      Py_INCREF(var_path);
      Py_DECREF(old);
  }

 }
 goto branch_end_9;
 branch_no_9:;
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_add_expr_left_1;
  PyObject *tmp_add_expr_right_1;
  PyObject *tmp_expression_value_16;
  PyObject *tmp_subscript_value_5;
  PyObject *tmp_start_value_1;
  PyObject *tmp_stop_value_1;
  PyObject *tmp_called_value_10;
  PyObject *tmp_expression_value_17;
  tmp_add_expr_left_1 = mod_consts[67];
  CHECK_OBJECT(var_path);
  tmp_expression_value_16 = var_path;
  tmp_start_value_1 = mod_consts[41];
  CHECK_OBJECT(var_path);
  tmp_expression_value_17 = var_path;
  tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[68]);
  if (tmp_called_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 212;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 212;
  tmp_stop_value_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_10, mod_consts[65]);

  Py_DECREF(tmp_called_value_10);
  if (tmp_stop_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 212;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_subscript_value_5 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
  Py_DECREF(tmp_stop_value_1);
  assert(!(tmp_subscript_value_5 == NULL));
  tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_5);
  Py_DECREF(tmp_subscript_value_5);
  if (tmp_add_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 212;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
  Py_DECREF(tmp_add_expr_right_1);
  if (tmp_assign_source_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 212;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_path;
      assert(old != NULL);
      var_path = tmp_assign_source_20;
      Py_DECREF(old);
  }

 }
 branch_end_9:;
 {
  PyObject *tmp_ass_subvalue_4;
  PyObject *tmp_ass_subscribed_4;
  PyObject *tmp_ass_subscript_4;
  CHECK_OBJECT(var_path);
  tmp_ass_subvalue_4 = var_path;
  CHECK_OBJECT(var_cookie);
  tmp_ass_subscribed_4 = var_cookie;
  tmp_ass_subscript_4 = mod_consts[64];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 213;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
 }
 branch_no_8:;
 {
  PyObject *tmp_assign_source_21;
  PyObject *tmp_expression_value_18;
  PyObject *tmp_subscript_value_6;
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_18 = var_cookie;
  tmp_subscript_value_6 = mod_consts[69];
  tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_6);
  if (tmp_assign_source_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 215;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_max_age;
      var_max_age = tmp_assign_source_21;
      Py_XDECREF(old);
  }

 }
 {
  nuitka_bool tmp_condition_result_10;
  int tmp_truth_name_5;
  CHECK_OBJECT(var_max_age);
  tmp_truth_name_5 = CHECK_IF_TRUE(var_max_age);
  if (tmp_truth_name_5 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 216;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_10 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
      goto branch_yes_10;
  } else {
      goto branch_no_10;
  }
 }
 branch_yes_10:;
 // Tried code:
 {
  PyObject *tmp_assign_source_22;
  PyObject *tmp_int_arg_1;
  CHECK_OBJECT(var_max_age);
  tmp_int_arg_1 = var_max_age;
  tmp_assign_source_22 = PyNumber_Int(tmp_int_arg_1);
  if (tmp_assign_source_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 218;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }
  {
      PyObject *old = var_delta_seconds;
      var_delta_seconds = tmp_assign_source_22;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_23;
  PyObject *tmp_called_value_11;
  PyObject *tmp_args_element_value_5;
  PyObject *tmp_add_expr_left_2;
  PyObject *tmp_add_expr_right_2;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_args_element_value_6;
  PyObject *tmp_expression_value_19;
  tmp_called_value_11 = LOOKUP_BUILTIN(mod_consts[38]);
  assert(tmp_called_value_11 != NULL);
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 219;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 219;
  tmp_add_expr_left_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[13]);
  if (tmp_add_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 219;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }
  CHECK_OBJECT(var_delta_seconds);
  tmp_add_expr_right_2 = var_delta_seconds;
  tmp_args_element_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
  Py_DECREF(tmp_add_expr_left_2);
  if (tmp_args_element_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 219;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }
  if (par_self == NULL) {
   Py_DECREF(tmp_args_element_value_5);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 219;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }

  tmp_expression_value_19 = par_self;
  tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[42]);
  if (tmp_args_element_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_args_element_value_5);

   exception_lineno = 219;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 219;
  {
      PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
      tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
  }

  Py_DECREF(tmp_args_element_value_5);
  Py_DECREF(tmp_args_element_value_6);
  if (tmp_assign_source_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 219;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }
  {
      PyObject *old = var_max_age_expiration;
      var_max_age_expiration = tmp_assign_source_23;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_called_value_12;
  PyObject *tmp_expression_value_20;
  PyObject *tmp_call_result_5;
  PyObject *tmp_args_element_value_7;
  PyObject *tmp_args_element_value_8;
  PyObject *tmp_args_element_value_9;
  PyObject *tmp_args_element_value_10;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 220;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }

  tmp_expression_value_20 = par_self;
  tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[70]);
  if (tmp_called_value_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 220;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }
  CHECK_OBJECT(var_max_age_expiration);
  tmp_args_element_value_7 = var_max_age_expiration;
  if (var_domain == NULL) {
   Py_DECREF(tmp_called_value_12);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 220;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }

  tmp_args_element_value_8 = var_domain;
  if (var_path == NULL) {
   Py_DECREF(tmp_called_value_12);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 220;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }

  tmp_args_element_value_9 = var_path;
  CHECK_OBJECT(var_name);
  tmp_args_element_value_10 = var_name;
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 220;
  {
      PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
      tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_12, call_args);
  }

  Py_DECREF(tmp_called_value_12);
  if (tmp_call_result_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 220;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_6;
  }
  Py_DECREF(tmp_call_result_5);
 }
 goto try_end_4;
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

 // Preserve existing published exception id 1.
 exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_4 == NULL) {
     exception_keeper_tb_4 = MAKE_TRACEBACK(frame_74cb6ba5113f0f17517d8b79fd6f62ad, exception_keeper_lineno_4);
 } else if (exception_keeper_lineno_4 != 0) {
     exception_keeper_tb_4 = ADD_TRACEBACK(exception_keeper_tb_4, frame_74cb6ba5113f0f17517d8b79fd6f62ad, exception_keeper_lineno_4);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4);
 // Tried code:
 {
  bool tmp_condition_result_11;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_2 = PyExc_ValueError;
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  assert(!(tmp_res == -1));
  tmp_condition_result_11 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_11 != false) {
      goto branch_yes_11;
  } else {
      goto branch_no_11;
  }
 }
 branch_yes_11:;
 {
  PyObject *tmp_ass_subvalue_5;
  PyObject *tmp_ass_subscribed_5;
  PyObject *tmp_ass_subscript_5;
  tmp_ass_subvalue_5 = mod_consts[59];
  CHECK_OBJECT(var_cookie);
  tmp_ass_subscribed_5 = var_cookie;
  tmp_ass_subscript_5 = mod_consts[69];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 222;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_7;
  }
 }
 goto branch_end_11;
 branch_no_11:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 217;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame) frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "oooooooooooooo";
 goto try_except_handler_7;
 branch_end_11:;
 goto try_end_5;
 // Exception handler code:
 try_except_handler_7:;
 exception_keeper_type_5 = exception_type;
 exception_keeper_value_5 = exception_value;
 exception_keeper_tb_5 = exception_tb;
 exception_keeper_lineno_5 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 // Re-raise.
 exception_type = exception_keeper_type_5;
 exception_value = exception_keeper_value_5;
 exception_tb = exception_keeper_tb_5;
 exception_lineno = exception_keeper_lineno_5;

 goto try_except_handler_2;
 // End of try:
 try_end_5:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 goto try_end_4;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_4:;
 goto branch_end_10;
 branch_no_10:;
 {
  PyObject *tmp_assign_source_24;
  PyObject *tmp_expression_value_21;
  PyObject *tmp_subscript_value_7;
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_21 = var_cookie;
  tmp_subscript_value_7 = mod_consts[71];
  tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_7);
  if (tmp_assign_source_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 225;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_expires;
      var_expires = tmp_assign_source_24;
      Py_XDECREF(old);
  }

 }
 {
  nuitka_bool tmp_condition_result_12;
  int tmp_truth_name_6;
  CHECK_OBJECT(var_expires);
  tmp_truth_name_6 = CHECK_IF_TRUE(var_expires);
  if (tmp_truth_name_6 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 226;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_12 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
      goto branch_yes_12;
  } else {
      goto branch_no_12;
  }
 }
 branch_yes_12:;
 {
  PyObject *tmp_assign_source_25;
  PyObject *tmp_called_instance_2;
  PyObject *tmp_args_element_value_11;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 227;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_called_instance_2 = par_self;
  CHECK_OBJECT(var_expires);
  tmp_args_element_value_11 = var_expires;
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 227;
  tmp_assign_source_25 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[72], tmp_args_element_value_11);
  if (tmp_assign_source_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 227;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_expire_time;
      var_expire_time = tmp_assign_source_25;
      Py_XDECREF(old);
  }

 }
 {
  nuitka_bool tmp_condition_result_13;
  int tmp_truth_name_7;
  CHECK_OBJECT(var_expire_time);
  tmp_truth_name_7 = CHECK_IF_TRUE(var_expire_time);
  if (tmp_truth_name_7 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 228;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_13 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
      goto branch_yes_13;
  } else {
      goto branch_no_13;
  }
 }
 branch_yes_13:;
 {
  PyObject *tmp_called_value_13;
  PyObject *tmp_expression_value_22;
  PyObject *tmp_call_result_6;
  PyObject *tmp_args_element_value_12;
  PyObject *tmp_args_element_value_13;
  PyObject *tmp_args_element_value_14;
  PyObject *tmp_args_element_value_15;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 229;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_22 = par_self;
  tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[70]);
  if (tmp_called_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 229;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  CHECK_OBJECT(var_expire_time);
  tmp_args_element_value_12 = var_expire_time;
  if (var_domain == NULL) {
   Py_DECREF(tmp_called_value_13);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 229;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_args_element_value_13 = var_domain;
  if (var_path == NULL) {
   Py_DECREF(tmp_called_value_13);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 229;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_args_element_value_14 = var_path;
  CHECK_OBJECT(var_name);
  tmp_args_element_value_15 = var_name;
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 229;
  {
      PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
      tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_13, call_args);
  }

  Py_DECREF(tmp_called_value_13);
  if (tmp_call_result_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 229;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_6);
 }
 goto branch_end_13;
 branch_no_13:;
 {
  PyObject *tmp_ass_subvalue_6;
  PyObject *tmp_ass_subscribed_6;
  PyObject *tmp_ass_subscript_6;
  tmp_ass_subvalue_6 = mod_consts[59];
  CHECK_OBJECT(var_cookie);
  tmp_ass_subscribed_6 = var_cookie;
  tmp_ass_subscript_6 = mod_consts[71];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 231;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
 }
 branch_end_13:;
 branch_no_12:;
 branch_end_10:;
 {
  PyObject *tmp_ass_subvalue_7;
  PyObject *tmp_ass_subscribed_7;
  PyObject *tmp_expression_value_23;
  PyObject *tmp_expression_value_24;
  PyObject *tmp_subscript_value_8;
  PyObject *tmp_tuple_element_2;
  PyObject *tmp_ass_subscript_7;
  CHECK_OBJECT(var_cookie);
  tmp_ass_subvalue_7 = var_cookie;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 233;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_24 = par_self;
  tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[5]);
  if (tmp_expression_value_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 233;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  if (var_domain == NULL) {
   Py_DECREF(tmp_expression_value_23);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 233;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_tuple_element_2 = var_domain;
  tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_2);
  if (var_path == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 233;
   type_description_1 = "oooooooooooooo";
      goto tuple_build_exception_1;
  }

  tmp_tuple_element_2 = var_path;
  PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_2);
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_expression_value_23);
  Py_DECREF(tmp_subscript_value_8);
  goto try_except_handler_2;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_ass_subscribed_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_8);
  Py_DECREF(tmp_expression_value_23);
  Py_DECREF(tmp_subscript_value_8);
  if (tmp_ass_subscribed_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 233;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
  CHECK_OBJECT(var_name);
  tmp_ass_subscript_7 = var_name;
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
  Py_DECREF(tmp_ass_subscribed_7);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 233;
   type_description_1 = "oooooooooooooo";
      goto try_except_handler_2;
  }
 }
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 176;
  type_description_1 = "oooooooooooooo";
     goto try_except_handler_2;
 }
 goto loop_start_1;
 loop_end_1:;
 goto try_end_6;
 // Exception handler code:
 try_except_handler_2:;
 exception_keeper_type_6 = exception_type;
 exception_keeper_value_6 = exception_value;
 exception_keeper_tb_6 = exception_tb;
 exception_keeper_lineno_6 = exception_lineno;
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
 exception_type = exception_keeper_type_6;
 exception_value = exception_keeper_value_6;
 exception_tb = exception_keeper_tb_6;
 exception_lineno = exception_keeper_lineno_6;

 goto frame_exception_exit_1;
 // End of try:
 try_end_6:;
 Py_XDECREF(tmp_for_loop_1__iter_value);
 tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_1__for_iterator);
 Py_DECREF(tmp_for_loop_1__for_iterator);
 tmp_for_loop_1__for_iterator = NULL;
 {
  PyObject *tmp_called_instance_3;
  PyObject *tmp_call_result_7;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 235;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_called_instance_3 = par_self;
  frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame.f_lineno = 235;
  tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[47]);
  if (tmp_call_result_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 235;
   type_description_1 = "oooooooooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_7);
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
     exception_tb = MAKE_TRACEBACK(frame_74cb6ba5113f0f17517d8b79fd6f62ad, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_74cb6ba5113f0f17517d8b79fd6f62ad->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_74cb6ba5113f0f17517d8b79fd6f62ad, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_74cb6ba5113f0f17517d8b79fd6f62ad,
     type_description_1,
     par_self,
     par_cookies,
     par_response_url,
     var_hostname,
     var_name,
     var_cookie,
     var_tmp,
     var_domain,
     var_path,
     var_max_age,
     var_delta_seconds,
     var_max_age_expiration,
     var_expires,
     var_expire_time
 );


 // Release cached frame if used for exception.
 if (frame_74cb6ba5113f0f17517d8b79fd6f62ad == cache_frame_74cb6ba5113f0f17517d8b79fd6f62ad) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_74cb6ba5113f0f17517d8b79fd6f62ad);
     cache_frame_74cb6ba5113f0f17517d8b79fd6f62ad = NULL;
 }

 assertFrameObject(frame_74cb6ba5113f0f17517d8b79fd6f62ad);

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
 Py_XDECREF(par_cookies);
 par_cookies = NULL;
 Py_XDECREF(var_hostname);
 var_hostname = NULL;
 Py_XDECREF(var_name);
 var_name = NULL;
 Py_XDECREF(var_cookie);
 var_cookie = NULL;
 Py_XDECREF(var_tmp);
 var_tmp = NULL;
 Py_XDECREF(var_domain);
 var_domain = NULL;
 Py_XDECREF(var_path);
 var_path = NULL;
 Py_XDECREF(var_max_age);
 var_max_age = NULL;
 Py_XDECREF(var_delta_seconds);
 var_delta_seconds = NULL;
 Py_XDECREF(var_max_age_expiration);
 var_max_age_expiration = NULL;
 Py_XDECREF(var_expires);
 var_expires = NULL;
 Py_XDECREF(var_expire_time);
 var_expire_time = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_7 = exception_type;
 exception_keeper_value_7 = exception_value;
 exception_keeper_tb_7 = exception_tb;
 exception_keeper_lineno_7 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(par_cookies);
 par_cookies = NULL;
 Py_XDECREF(var_hostname);
 var_hostname = NULL;
 Py_XDECREF(var_name);
 var_name = NULL;
 Py_XDECREF(var_cookie);
 var_cookie = NULL;
 Py_XDECREF(var_tmp);
 var_tmp = NULL;
 Py_XDECREF(var_domain);
 var_domain = NULL;
 Py_XDECREF(var_path);
 var_path = NULL;
 Py_XDECREF(var_max_age);
 var_max_age = NULL;
 Py_XDECREF(var_delta_seconds);
 var_delta_seconds = NULL;
 Py_XDECREF(var_max_age_expiration);
 var_max_age_expiration = NULL;
 Py_XDECREF(var_expires);
 var_expires = NULL;
 Py_XDECREF(var_expire_time);
 var_expire_time = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_7;
 exception_value = exception_keeper_value_7;
 exception_tb = exception_keeper_tb_7;
 exception_lineno = exception_keeper_lineno_7;

 goto function_exception_exit;
 // End of try:

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_response_url);
 Py_DECREF(par_response_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_response_url);
 Py_DECREF(par_response_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$cookiejar$$$function__11_filter_cookies(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_request_url = python_pars[1];
 PyObject *var_filtered = NULL;
 PyObject *var_hostname = NULL;
 nuitka_bool var_is_not_secure = NUITKA_BOOL_UNASSIGNED;
 PyObject *var_request_origin = NULL;
 PyObject *var_cookie = NULL;
 PyObject *var_name = NULL;
 PyObject *var_domain = NULL;
 PyObject *var_mrsl_val = NULL;
 PyObject *tmp_for_loop_1__for_iterator = NULL;
 PyObject *tmp_for_loop_1__iter_value = NULL;
 PyObject *tmp_with_1__enter = NULL;
 PyObject *tmp_with_1__exit = NULL;
 nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
 PyObject *tmp_with_1__source = NULL;
 struct Nuitka_FrameObject *frame_db8cd76f42953ef8fd40d8682d937437;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 PyObject *tmp_return_value = NULL;
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
 static struct Nuitka_FrameObject *cache_frame_db8cd76f42953ef8fd40d8682d937437 = NULL;
 PyObject *exception_keeper_type_6;
 PyObject *exception_keeper_value_6;
 PyTracebackObject *exception_keeper_tb_6;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_db8cd76f42953ef8fd40d8682d937437)) {
     Py_XDECREF(cache_frame_db8cd76f42953ef8fd40d8682d937437);

#if _DEBUG_REFCOUNTS
     if (cache_frame_db8cd76f42953ef8fd40d8682d937437 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_db8cd76f42953ef8fd40d8682d937437 = MAKE_FUNCTION_FRAME(tstate, codeobj_db8cd76f42953ef8fd40d8682d937437, module_aiohttp$cookiejar, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_db8cd76f42953ef8fd40d8682d937437->m_type_description == NULL);
 frame_db8cd76f42953ef8fd40d8682d937437 = cache_frame_db8cd76f42953ef8fd40d8682d937437;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_db8cd76f42953ef8fd40d8682d937437);
 assert(Py_REFCNT(frame_db8cd76f42953ef8fd40d8682d937437) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_attribute_value_1;
  int tmp_truth_name_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_called_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
  if (tmp_attribute_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 240;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_1);

   exception_lineno = 240;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_1);
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[4]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 240;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 240;
  tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 240;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[74]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 240;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 240;
  tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 240;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  condexpr_end_1:;
  assert(var_filtered == NULL);
  var_filtered = tmp_assign_source_1;
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[5]);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 242;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 242;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_2 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 CHECK_OBJECT(var_filtered);
 tmp_return_value = var_filtered;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_1:;
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 245;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[47]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 245;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[5]);
  if (tmp_operand_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 246;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  Py_DECREF(tmp_operand_value_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 246;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_3 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 CHECK_OBJECT(var_filtered);
 tmp_return_value = var_filtered;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_2:;
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_value_3;
  PyObject *tmp_args_element_value_1;
  tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_3 == NULL)) {
      tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 249;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_request_url);
  tmp_args_element_value_1 = par_request_url;
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 249;
  tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 249;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = par_request_url;
      assert(old != NULL);
      par_request_url = tmp_assign_source_2;
      Py_DECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_3;
  int tmp_or_left_truth_1;
  PyObject *tmp_or_left_value_1;
  PyObject *tmp_or_right_value_1;
  PyObject *tmp_expression_value_4;
  CHECK_OBJECT(par_request_url);
  tmp_expression_value_4 = par_request_url;
  tmp_or_left_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[53]);
  if (tmp_or_left_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 250;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
  if (tmp_or_left_truth_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_or_left_value_1);

   exception_lineno = 250;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  if (tmp_or_left_truth_1 == 1) {
      goto or_left_1;
  } else {
      goto or_right_1;
  }
  or_right_1:;
  Py_DECREF(tmp_or_left_value_1);
  tmp_or_right_value_1 = mod_consts[59];
  Py_INCREF(tmp_or_right_value_1);
  tmp_assign_source_3 = tmp_or_right_value_1;
  goto or_end_1;
  or_left_1:;
  tmp_assign_source_3 = tmp_or_left_value_1;
  or_end_1:;
  assert(var_hostname == NULL);
  var_hostname = tmp_assign_source_3;
 }
 {
  nuitka_bool tmp_assign_source_4;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(par_request_url);
  tmp_expression_value_5 = par_request_url;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[75]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 252;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = mod_consts[76];
  tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
  Py_DECREF(tmp_cmp_expr_left_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 252;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_4 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  var_is_not_secure = tmp_assign_source_4;
 }
 {
  nuitka_bool tmp_condition_result_4;
  int tmp_and_left_truth_1;
  nuitka_bool tmp_and_left_value_1;
  nuitka_bool tmp_and_right_value_1;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_attribute_value_2;
  int tmp_truth_name_2;
  assert(var_is_not_secure != NUITKA_BOOL_UNASSIGNED);
  tmp_and_left_value_1 = var_is_not_secure;
  tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_6 = par_self;
  tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[11]);
  if (tmp_attribute_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 253;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
  if (tmp_truth_name_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_2);

   exception_lineno = 253;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_2);
  tmp_condition_result_4 = tmp_and_right_value_1;
  goto and_end_1;
  and_left_1:;
  tmp_condition_result_4 = tmp_and_left_value_1;
  and_end_1:;
  if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_called_value_4;
  tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

  if (unlikely(tmp_called_value_4 == NULL)) {
      tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
  }

  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 254;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 254;
  tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
  if (tmp_assign_source_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 254;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  assert(var_request_origin == NULL);
  var_request_origin = tmp_assign_source_5;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_called_instance_2;
  tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[77]);

  if (unlikely(tmp_called_instance_2 == NULL)) {
      tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[77]);
  }

  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 255;
   type_description_1 = "oooobooooo";
      goto try_except_handler_2;
  }
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 255;
  tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
      tstate,
      tmp_called_instance_2,
      mod_consts[78],
      PyTuple_GET_ITEM(mod_consts[79], 0)
  );

  if (tmp_assign_source_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 255;
   type_description_1 = "oooobooooo";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__source == NULL);
  tmp_with_1__source = tmp_assign_source_6;
 }
 {
  PyObject *tmp_assign_source_7;
  PyObject *tmp_called_value_5;
  PyObject *tmp_expression_value_7;
  CHECK_OBJECT(tmp_with_1__source);
  tmp_expression_value_7 = tmp_with_1__source;
  tmp_called_value_5 = LOOKUP_SPECIAL(tstate, tmp_expression_value_7, mod_consts[21]);
  if (tmp_called_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 255;
   type_description_1 = "oooobooooo";
      goto try_except_handler_2;
  }
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 255;
  tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
  Py_DECREF(tmp_called_value_5);
  if (tmp_assign_source_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 255;
   type_description_1 = "oooobooooo";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__enter == NULL);
  tmp_with_1__enter = tmp_assign_source_7;
 }
 {
  PyObject *tmp_assign_source_8;
  PyObject *tmp_expression_value_8;
  CHECK_OBJECT(tmp_with_1__source);
  tmp_expression_value_8 = tmp_with_1__source;
  tmp_assign_source_8 = LOOKUP_SPECIAL(tstate, tmp_expression_value_8, mod_consts[22]);
  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 255;
   type_description_1 = "oooobooooo";
      goto try_except_handler_2;
  }
  assert(tmp_with_1__exit == NULL);
  tmp_with_1__exit = tmp_assign_source_8;
 }
 {
  nuitka_bool tmp_assign_source_9;
  tmp_assign_source_9 = NUITKA_BOOL_TRUE;
  tmp_with_1__indicator = tmp_assign_source_9;
 }
 // Tried code:
 // Tried code:
 {
  PyObject *tmp_assign_source_10;
  PyObject *tmp_called_instance_3;
  CHECK_OBJECT(par_request_url);
  tmp_called_instance_3 = par_request_url;
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 256;
  tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[10]);
  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 256;
   type_description_1 = "oooobooooo";
      goto try_except_handler_4;
  }
  {
      PyObject *old = var_request_origin;
      assert(old != NULL);
      var_request_origin = tmp_assign_source_10;
      Py_DECREF(old);
  }

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
     exception_keeper_tb_1 = MAKE_TRACEBACK(frame_db8cd76f42953ef8fd40d8682d937437, exception_keeper_lineno_1);
 } else if (exception_keeper_lineno_1 != 0) {
     exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_db8cd76f42953ef8fd40d8682d937437, exception_keeper_lineno_1);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
 // Tried code:
 {
  bool tmp_condition_result_5;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_2 = PyExc_BaseException;
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  assert(!(tmp_res == -1));
  tmp_condition_result_5 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_5 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  nuitka_bool tmp_assign_source_11;
  tmp_assign_source_11 = NUITKA_BOOL_FALSE;
  tmp_with_1__indicator = tmp_assign_source_11;
 }
 {
  bool tmp_condition_result_6;
  PyObject *tmp_operand_value_3;
  PyObject *tmp_called_value_6;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_args_element_value_4;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_6 = tmp_with_1__exit;
  tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
  tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
  tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 255;
  {
      PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
      tmp_operand_value_3 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_6, call_args);
  }

  if (tmp_operand_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 255;
   type_description_1 = "oooobooooo";
      goto try_except_handler_5;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
  Py_DECREF(tmp_operand_value_3);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 255;
   type_description_1 = "oooobooooo";
      goto try_except_handler_5;
  }
  tmp_condition_result_6 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_6 != false) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 255;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_db8cd76f42953ef8fd40d8682d937437->m_frame) frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "oooobooooo";
 goto try_except_handler_5;
 branch_no_5:;
 goto branch_end_4;
 branch_no_4:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 255;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_db8cd76f42953ef8fd40d8682d937437->m_frame) frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "oooobooooo";
 goto try_except_handler_5;
 branch_end_4:;
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
  bool tmp_condition_result_7;
  nuitka_bool tmp_cmp_expr_left_3;
  nuitka_bool tmp_cmp_expr_right_3;
  assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_3 = tmp_with_1__indicator;
  tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
  tmp_condition_result_7 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
  if (tmp_condition_result_7 != false) {
      goto branch_yes_6;
  } else {
      goto branch_no_6;
  }
 }
 branch_yes_6:;
 {
  PyObject *tmp_called_value_7;
  PyObject *tmp_call_result_2;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_7 = tmp_with_1__exit;
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 255;
  tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_7, mod_consts[26]);

  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

   Py_DECREF(exception_keeper_type_3);
   Py_XDECREF(exception_keeper_value_3);
   Py_XDECREF(exception_keeper_tb_3);

   exception_lineno = 255;
   type_description_1 = "oooobooooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_2);
 }
 branch_no_6:;
 // Re-raise.
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto try_except_handler_2;
 // End of try:
 try_end_3:;
 {
  bool tmp_condition_result_8;
  nuitka_bool tmp_cmp_expr_left_4;
  nuitka_bool tmp_cmp_expr_right_4;
  assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_4 = tmp_with_1__indicator;
  tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
  tmp_condition_result_8 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
  if (tmp_condition_result_8 != false) {
      goto branch_yes_7;
  } else {
      goto branch_no_7;
  }
 }
 branch_yes_7:;
 {
  PyObject *tmp_called_value_8;
  PyObject *tmp_call_result_3;
  CHECK_OBJECT(tmp_with_1__exit);
  tmp_called_value_8 = tmp_with_1__exit;
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 255;
  tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_8, mod_consts[26]);

  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 255;
   type_description_1 = "oooobooooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_3);
 }
 branch_no_7:;
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
 {
  nuitka_bool tmp_assign_source_12;
  PyObject *tmp_cmp_expr_left_5;
  PyObject *tmp_cmp_expr_right_5;
  PyObject *tmp_expression_value_9;
  CHECK_OBJECT(var_request_origin);
  tmp_cmp_expr_left_5 = var_request_origin;
  CHECK_OBJECT(par_self);
  tmp_expression_value_9 = par_self;
  tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[11]);
  if (tmp_cmp_expr_right_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 257;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
  Py_DECREF(tmp_cmp_expr_right_5);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 257;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_12 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  var_is_not_secure = tmp_assign_source_12;
 }
 branch_no_3:;
 {
  PyObject *tmp_assign_source_13;
  PyObject *tmp_iter_arg_1;
  PyObject *tmp_called_value_9;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_dict_value_0_1;
  tmp_called_value_9 = LOOKUP_BUILTIN(mod_consts[80]);
  assert(tmp_called_value_9 != NULL);
  CHECK_OBJECT(par_self);
  tmp_kw_call_arg_value_0_1 = par_self;


  tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_aiohttp$cookiejar$$$function__11_filter_cookies$$$function__1_lambda();

  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 260;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_1};
      PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
      tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts[82]);
  }

  Py_DECREF(tmp_kw_call_dict_value_0_1);
  if (tmp_iter_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 260;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
  Py_DECREF(tmp_iter_arg_1);
  if (tmp_assign_source_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 260;
   type_description_1 = "oooobooooo";
      goto frame_exception_exit_1;
  }
  assert(tmp_for_loop_1__for_iterator == NULL);
  tmp_for_loop_1__for_iterator = tmp_assign_source_13;
 }
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_14;
  CHECK_OBJECT(tmp_for_loop_1__for_iterator);
  tmp_next_source_1 = tmp_for_loop_1__for_iterator;
  tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_14 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    type_description_1 = "oooobooooo";
    exception_lineno = 260;
          goto try_except_handler_6;
      }
  }

  {
      PyObject *old = tmp_for_loop_1__iter_value;
      tmp_for_loop_1__iter_value = tmp_assign_source_14;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_15;
  CHECK_OBJECT(tmp_for_loop_1__iter_value);
  tmp_assign_source_15 = tmp_for_loop_1__iter_value;
  {
      PyObject *old = var_cookie;
      var_cookie = tmp_assign_source_15;
      Py_INCREF(var_cookie);
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_16;
  PyObject *tmp_expression_value_10;
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_10 = var_cookie;
  tmp_assign_source_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[83]);
  if (tmp_assign_source_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 261;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  {
      PyObject *old = var_name;
      var_name = tmp_assign_source_16;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_17;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_subscript_value_1;
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_11 = var_cookie;
  tmp_subscript_value_1 = mod_consts[46];
  tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_1);
  if (tmp_assign_source_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 262;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  {
      PyObject *old = var_domain;
      var_domain = tmp_assign_source_17;
      Py_XDECREF(old);
  }

 }
 {
  bool tmp_condition_result_9;
  PyObject *tmp_operand_value_4;
  CHECK_OBJECT(var_domain);
  tmp_operand_value_4 = var_domain;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 265;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_condition_result_9 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_9 != false) {
      goto branch_yes_8;
  } else {
      goto branch_no_8;
  }
 }
 branch_yes_8:;
 {
  PyObject *tmp_ass_subvalue_1;
  PyObject *tmp_expression_value_12;
  PyObject *tmp_ass_subscribed_1;
  PyObject *tmp_ass_subscript_1;
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_12 = var_cookie;
  tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[84]);
  if (tmp_ass_subvalue_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 266;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  if (var_filtered == NULL) {
   Py_DECREF(tmp_ass_subvalue_1);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 266;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }

  tmp_ass_subscribed_1 = var_filtered;
  CHECK_OBJECT(var_name);
  tmp_ass_subscript_1 = var_name;
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
  Py_DECREF(tmp_ass_subvalue_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 266;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
 }
 goto loop_start_1;
 branch_no_8:;
 {
  nuitka_bool tmp_condition_result_10;
  int tmp_and_left_truth_2;
  nuitka_bool tmp_and_left_value_2;
  nuitka_bool tmp_and_right_value_2;
  PyObject *tmp_operand_value_5;
  PyObject *tmp_expression_value_13;
  PyObject *tmp_called_value_10;
  PyObject *tmp_call_result_4;
  PyObject *tmp_args_element_value_5;
  int tmp_truth_name_3;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 269;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }

  tmp_expression_value_13 = par_self;
  tmp_operand_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[7]);
  if (tmp_operand_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 269;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
  Py_DECREF(tmp_operand_value_5);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 269;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_and_left_value_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_2 == 1) {
      goto and_right_2;
  } else {
      goto and_left_2;
  }
  and_right_2:;
  tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[54]);

  if (unlikely(tmp_called_value_10 == NULL)) {
      tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
  }

  if (tmp_called_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 269;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  if (var_hostname == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 269;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }

  tmp_args_element_value_5 = var_hostname;
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 269;
  tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
  if (tmp_call_result_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 269;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_4);
  if (tmp_truth_name_3 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_call_result_4);

   exception_lineno = 269;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_and_right_value_2 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_call_result_4);
  tmp_condition_result_10 = tmp_and_right_value_2;
  goto and_end_2;
  and_left_2:;
  tmp_condition_result_10 = tmp_and_left_value_2;
  and_end_2:;
  if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
      goto branch_yes_9;
  } else {
      goto branch_no_9;
  }
 }
 branch_yes_9:;
 goto loop_start_1;
 branch_no_9:;
 {
  bool tmp_condition_result_11;
  PyObject *tmp_cmp_expr_left_6;
  PyObject *tmp_cmp_expr_right_6;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_expression_value_14;
  CHECK_OBJECT(var_domain);
  tmp_tuple_element_1 = var_domain;
  tmp_cmp_expr_left_6 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_cmp_expr_left_6, 0, tmp_tuple_element_1);
  CHECK_OBJECT(var_name);
  tmp_tuple_element_1 = var_name;
  PyTuple_SET_ITEM0(tmp_cmp_expr_left_6, 1, tmp_tuple_element_1);
  if (par_self == NULL) {
   Py_DECREF(tmp_cmp_expr_left_6);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 272;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }

  tmp_expression_value_14 = par_self;
  tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[6]);
  if (tmp_cmp_expr_right_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_cmp_expr_left_6);

   exception_lineno = 272;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
  Py_DECREF(tmp_cmp_expr_left_6);
  Py_DECREF(tmp_cmp_expr_right_6);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 272;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_condition_result_11 = (tmp_res == 1) ? true : false;
  if (tmp_condition_result_11 != false) {
      goto branch_yes_10;
  } else {
      goto branch_no_10;
  }
 }
 branch_yes_10:;
 {
  nuitka_bool tmp_condition_result_12;
  PyObject *tmp_cmp_expr_left_7;
  PyObject *tmp_cmp_expr_right_7;
  CHECK_OBJECT(var_domain);
  tmp_cmp_expr_left_7 = var_domain;
  if (var_hostname == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 273;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }

  tmp_cmp_expr_right_7 = var_hostname;
  tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
  if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 273;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
      goto branch_yes_11;
  } else {
      goto branch_no_11;
  }
 }
 branch_yes_11:;
 goto loop_start_1;
 branch_no_11:;
 goto branch_end_10;
 branch_no_10:;
 {
  bool tmp_condition_result_13;
  PyObject *tmp_operand_value_6;
  PyObject *tmp_called_value_11;
  PyObject *tmp_expression_value_15;
  PyObject *tmp_args_element_value_6;
  PyObject *tmp_args_element_value_7;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 275;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }

  tmp_expression_value_15 = par_self;
  tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[45]);
  if (tmp_called_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 275;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  CHECK_OBJECT(var_domain);
  tmp_args_element_value_6 = var_domain;
  if (var_hostname == NULL) {
   Py_DECREF(tmp_called_value_11);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 275;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }

  tmp_args_element_value_7 = var_hostname;
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 275;
  {
      PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
      tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_11, call_args);
  }

  Py_DECREF(tmp_called_value_11);
  if (tmp_operand_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 275;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
  Py_DECREF(tmp_operand_value_6);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 275;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_condition_result_13 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_13 != false) {
      goto branch_yes_12;
  } else {
      goto branch_no_12;
  }
 }
 branch_yes_12:;
 goto loop_start_1;
 branch_no_12:;
 branch_end_10:;
 {
  bool tmp_condition_result_14;
  PyObject *tmp_operand_value_7;
  PyObject *tmp_called_value_12;
  PyObject *tmp_expression_value_16;
  PyObject *tmp_args_element_value_8;
  PyObject *tmp_expression_value_17;
  PyObject *tmp_args_element_value_9;
  PyObject *tmp_expression_value_18;
  PyObject *tmp_subscript_value_2;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 278;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }

  tmp_expression_value_16 = par_self;
  tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[86]);
  if (tmp_called_value_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 278;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  if (par_request_url == NULL) {
   Py_DECREF(tmp_called_value_12);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 278;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }

  tmp_expression_value_17 = par_request_url;
  tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[64]);
  if (tmp_args_element_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_12);

   exception_lineno = 278;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_18 = var_cookie;
  tmp_subscript_value_2 = mod_consts[64];
  tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_2);
  if (tmp_args_element_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_12);
   Py_DECREF(tmp_args_element_value_8);

   exception_lineno = 278;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 278;
  {
      PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
      tmp_operand_value_7 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_12, call_args);
  }

  Py_DECREF(tmp_called_value_12);
  Py_DECREF(tmp_args_element_value_8);
  Py_DECREF(tmp_args_element_value_9);
  if (tmp_operand_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 278;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
  Py_DECREF(tmp_operand_value_7);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 278;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_condition_result_14 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_14 != false) {
      goto branch_yes_13;
  } else {
      goto branch_no_13;
  }
 }
 branch_yes_13:;
 goto loop_start_1;
 branch_no_13:;
 {
  nuitka_bool tmp_condition_result_15;
  int tmp_and_left_truth_3;
  nuitka_bool tmp_and_left_value_3;
  nuitka_bool tmp_and_right_value_3;
  PyObject *tmp_expression_value_19;
  PyObject *tmp_subscript_value_3;
  PyObject *tmp_subscript_result_1;
  int tmp_truth_name_4;
  assert(var_is_not_secure != NUITKA_BOOL_UNASSIGNED);
  tmp_and_left_value_3 = var_is_not_secure;
  tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_3 == 1) {
      goto and_right_3;
  } else {
      goto and_left_3;
  }
  and_right_3:;
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_19 = var_cookie;
  tmp_subscript_value_3 = mod_consts[88];
  tmp_subscript_result_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_3);
  if (tmp_subscript_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 281;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_truth_name_4 = CHECK_IF_TRUE(tmp_subscript_result_1);
  if (tmp_truth_name_4 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_subscript_result_1);

   exception_lineno = 281;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_and_right_value_3 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_subscript_result_1);
  tmp_condition_result_15 = tmp_and_right_value_3;
  goto and_end_3;
  and_left_3:;
  tmp_condition_result_15 = tmp_and_left_value_3;
  and_end_3:;
  if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
      goto branch_yes_14;
  } else {
      goto branch_no_14;
  }
 }
 branch_yes_14:;
 goto loop_start_1;
 branch_no_14:;
 {
  PyObject *tmp_assign_source_18;
  PyObject *tmp_called_value_13;
  PyObject *tmp_args_element_value_10;
  PyObject *tmp_args_element_value_11;
  PyObject *tmp_called_value_14;
  PyObject *tmp_expression_value_20;
  PyObject *tmp_args_element_value_12;
  PyObject *tmp_expression_value_21;
  PyObject *tmp_args_element_value_13;
  PyObject *tmp_called_value_15;
  tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[89]);

  if (unlikely(tmp_called_value_13 == NULL)) {
      tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
  }

  if (tmp_called_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 286;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_args_element_value_10 = mod_consts[90];
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_20 = var_cookie;
  tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[91]);
  if (tmp_called_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 286;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_21 = var_cookie;
  tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[83]);
  if (tmp_args_element_value_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_14);

   exception_lineno = 286;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[56]);

  if (unlikely(tmp_called_value_15 == NULL)) {
      tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
  }

  if (tmp_called_value_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_14);
   Py_DECREF(tmp_args_element_value_12);

   exception_lineno = 286;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 286;
  tmp_args_element_value_13 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
  if (tmp_args_element_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_14);
   Py_DECREF(tmp_args_element_value_12);

   exception_lineno = 286;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 286;
  {
      PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
      tmp_args_element_value_11 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_14, call_args);
  }

  Py_DECREF(tmp_called_value_14);
  Py_DECREF(tmp_args_element_value_12);
  Py_DECREF(tmp_args_element_value_13);
  if (tmp_args_element_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 286;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 286;
  {
      PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
      tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_13, call_args);
  }

  Py_DECREF(tmp_args_element_value_11);
  if (tmp_assign_source_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 286;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  {
      PyObject *old = var_mrsl_val;
      var_mrsl_val = tmp_assign_source_18;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_called_value_16;
  PyObject *tmp_expression_value_22;
  PyObject *tmp_call_result_5;
  PyObject *tmp_args_element_value_14;
  PyObject *tmp_expression_value_23;
  PyObject *tmp_args_element_value_15;
  PyObject *tmp_expression_value_24;
  PyObject *tmp_args_element_value_16;
  PyObject *tmp_expression_value_25;
  CHECK_OBJECT(var_mrsl_val);
  tmp_expression_value_22 = var_mrsl_val;
  tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[92]);
  if (tmp_called_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_23 = var_cookie;
  tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[83]);
  if (tmp_args_element_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_16);

   exception_lineno = 287;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_24 = var_cookie;
  tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[84]);
  if (tmp_args_element_value_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_16);
   Py_DECREF(tmp_args_element_value_14);

   exception_lineno = 287;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  CHECK_OBJECT(var_cookie);
  tmp_expression_value_25 = var_cookie;
  tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[93]);
  if (tmp_args_element_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_16);
   Py_DECREF(tmp_args_element_value_14);
   Py_DECREF(tmp_args_element_value_15);

   exception_lineno = 287;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  frame_db8cd76f42953ef8fd40d8682d937437->m_frame.f_lineno = 287;
  {
      PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
      tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_16, call_args);
  }

  Py_DECREF(tmp_called_value_16);
  Py_DECREF(tmp_args_element_value_14);
  Py_DECREF(tmp_args_element_value_15);
  Py_DECREF(tmp_args_element_value_16);
  if (tmp_call_result_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 287;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
  Py_DECREF(tmp_call_result_5);
 }
 {
  PyObject *tmp_ass_subvalue_2;
  PyObject *tmp_ass_subscribed_2;
  PyObject *tmp_ass_subscript_2;
  CHECK_OBJECT(var_mrsl_val);
  tmp_ass_subvalue_2 = var_mrsl_val;
  if (var_filtered == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 288;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }

  tmp_ass_subscribed_2 = var_filtered;
  CHECK_OBJECT(var_name);
  tmp_ass_subscript_2 = var_name;
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 288;
   type_description_1 = "oooobooooo";
      goto try_except_handler_6;
  }
 }
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 260;
  type_description_1 = "oooobooooo";
     goto try_except_handler_6;
 }
 goto loop_start_1;
 loop_end_1:;
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

 Py_XDECREF(tmp_for_loop_1__iter_value);
 tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_1__for_iterator);
 Py_DECREF(tmp_for_loop_1__for_iterator);
 tmp_for_loop_1__for_iterator = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_5;
 exception_value = exception_keeper_value_5;
 exception_tb = exception_keeper_tb_5;
 exception_lineno = exception_keeper_lineno_5;

 goto frame_exception_exit_1;
 // End of try:
 try_end_5:;
 Py_XDECREF(tmp_for_loop_1__iter_value);
 tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_1__for_iterator);
 Py_DECREF(tmp_for_loop_1__for_iterator);
 tmp_for_loop_1__for_iterator = NULL;
 if (var_filtered == NULL) {

  FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
  exception_tb = NULL;
  NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
  CHAIN_EXCEPTION(tstate, exception_value);

  exception_lineno = 290;
  type_description_1 = "oooobooooo";
     goto frame_exception_exit_1;
 }

 tmp_return_value = var_filtered;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_return_exit_1:

 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto try_return_handler_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_db8cd76f42953ef8fd40d8682d937437, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_db8cd76f42953ef8fd40d8682d937437->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_db8cd76f42953ef8fd40d8682d937437, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_db8cd76f42953ef8fd40d8682d937437,
     type_description_1,
     par_self,
     par_request_url,
     var_filtered,
     var_hostname,
     (int)var_is_not_secure,
     var_request_origin,
     var_cookie,
     var_name,
     var_domain,
     var_mrsl_val
 );


 // Release cached frame if used for exception.
 if (frame_db8cd76f42953ef8fd40d8682d937437 == cache_frame_db8cd76f42953ef8fd40d8682d937437) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_db8cd76f42953ef8fd40d8682d937437);
     cache_frame_db8cd76f42953ef8fd40d8682d937437 = NULL;
 }

 assertFrameObject(frame_db8cd76f42953ef8fd40d8682d937437);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 Py_XDECREF(par_request_url);
 par_request_url = NULL;
 Py_XDECREF(var_filtered);
 var_filtered = NULL;
 Py_XDECREF(var_hostname);
 var_hostname = NULL;
 var_is_not_secure = NUITKA_BOOL_UNASSIGNED;
 Py_XDECREF(var_request_origin);
 var_request_origin = NULL;
 Py_XDECREF(var_cookie);
 var_cookie = NULL;
 Py_XDECREF(var_name);
 var_name = NULL;
 Py_XDECREF(var_domain);
 var_domain = NULL;
 Py_XDECREF(var_mrsl_val);
 var_mrsl_val = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_6 = exception_type;
 exception_keeper_value_6 = exception_value;
 exception_keeper_tb_6 = exception_tb;
 exception_keeper_lineno_6 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(par_request_url);
 par_request_url = NULL;
 Py_XDECREF(var_filtered);
 var_filtered = NULL;
 Py_XDECREF(var_hostname);
 var_hostname = NULL;
 var_is_not_secure = NUITKA_BOOL_UNASSIGNED;
 Py_XDECREF(var_request_origin);
 var_request_origin = NULL;
 Py_XDECREF(var_cookie);
 var_cookie = NULL;
 Py_XDECREF(var_name);
 var_name = NULL;
 Py_XDECREF(var_domain);
 var_domain = NULL;
 Py_XDECREF(var_mrsl_val);
 var_mrsl_val = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_6;
 exception_value = exception_keeper_value_6;
 exception_tb = exception_keeper_tb_6;
 exception_lineno = exception_keeper_lineno_6;

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


static PyObject *impl_aiohttp$cookiejar$$$function__11_filter_cookies$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_c = python_pars[0];
 struct Nuitka_FrameObject *frame_b28b7fc4030e83ed0cd0d74c20a4abb2;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_b28b7fc4030e83ed0cd0d74c20a4abb2 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_b28b7fc4030e83ed0cd0d74c20a4abb2)) {
     Py_XDECREF(cache_frame_b28b7fc4030e83ed0cd0d74c20a4abb2);

#if _DEBUG_REFCOUNTS
     if (cache_frame_b28b7fc4030e83ed0cd0d74c20a4abb2 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_b28b7fc4030e83ed0cd0d74c20a4abb2 = MAKE_FUNCTION_FRAME(tstate, codeobj_b28b7fc4030e83ed0cd0d74c20a4abb2, module_aiohttp$cookiejar, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_b28b7fc4030e83ed0cd0d74c20a4abb2->m_type_description == NULL);
 frame_b28b7fc4030e83ed0cd0d74c20a4abb2 = cache_frame_b28b7fc4030e83ed0cd0d74c20a4abb2;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_b28b7fc4030e83ed0cd0d74c20a4abb2);
 assert(Py_REFCNT(frame_b28b7fc4030e83ed0cd0d74c20a4abb2) == 2);

 // Framed code:
 {
  PyObject *tmp_len_arg_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_subscript_value_1;
  CHECK_OBJECT(par_c);
  tmp_expression_value_1 = par_c;
  tmp_subscript_value_1 = mod_consts[64];
  tmp_len_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
  if (tmp_len_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 260;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_return_value = BUILTIN_LEN(tstate, tmp_len_arg_1);
  Py_DECREF(tmp_len_arg_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 260;
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
     exception_tb = MAKE_TRACEBACK(frame_b28b7fc4030e83ed0cd0d74c20a4abb2, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_b28b7fc4030e83ed0cd0d74c20a4abb2->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_b28b7fc4030e83ed0cd0d74c20a4abb2, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_b28b7fc4030e83ed0cd0d74c20a4abb2,
     type_description_1,
     par_c
 );


 // Release cached frame if used for exception.
 if (frame_b28b7fc4030e83ed0cd0d74c20a4abb2 == cache_frame_b28b7fc4030e83ed0cd0d74c20a4abb2) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_b28b7fc4030e83ed0cd0d74c20a4abb2);
     cache_frame_b28b7fc4030e83ed0cd0d74c20a4abb2 = NULL;
 }

 assertFrameObject(frame_b28b7fc4030e83ed0cd0d74c20a4abb2);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto function_exception_exit;
 frame_no_exception_1:;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_c);
 Py_DECREF(par_c);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_c);
 Py_DECREF(par_c);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$cookiejar$$$function__12__is_domain_match(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_domain = python_pars[0];
 PyObject *par_hostname = python_pars[1];
 PyObject *var_non_matching = NULL;
 struct Nuitka_FrameObject *frame_509d05b571111cce88f7b256139b2990;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 PyObject *tmp_return_value = NULL;
 int tmp_res;
 static struct Nuitka_FrameObject *cache_frame_509d05b571111cce88f7b256139b2990 = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_509d05b571111cce88f7b256139b2990)) {
     Py_XDECREF(cache_frame_509d05b571111cce88f7b256139b2990);

#if _DEBUG_REFCOUNTS
     if (cache_frame_509d05b571111cce88f7b256139b2990 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_509d05b571111cce88f7b256139b2990 = MAKE_FUNCTION_FRAME(tstate, codeobj_509d05b571111cce88f7b256139b2990, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_509d05b571111cce88f7b256139b2990->m_type_description == NULL);
 frame_509d05b571111cce88f7b256139b2990 = cache_frame_509d05b571111cce88f7b256139b2990;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_509d05b571111cce88f7b256139b2990);
 assert(Py_REFCNT(frame_509d05b571111cce88f7b256139b2990) == 2);

 // Framed code:
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(par_hostname);
  tmp_cmp_expr_left_1 = par_hostname;
  CHECK_OBJECT(par_domain);
  tmp_cmp_expr_right_1 = par_domain;
  tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 295;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
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
  bool tmp_condition_result_2;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_args_element_value_1;
  CHECK_OBJECT(par_hostname);
  tmp_expression_value_1 = par_hostname;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[57]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 298;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_domain);
  tmp_args_element_value_1 = par_domain;
  frame_509d05b571111cce88f7b256139b2990->m_frame.f_lineno = 298;
  tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 298;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 298;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_2 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 tmp_return_value = Py_False;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_2:;
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_subscript_value_1;
  PyObject *tmp_stop_value_1;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_len_arg_1;
  CHECK_OBJECT(par_hostname);
  tmp_expression_value_2 = par_hostname;
  CHECK_OBJECT(par_domain);
  tmp_len_arg_1 = par_domain;
  tmp_operand_value_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
  if (tmp_operand_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 301;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_stop_value_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
  Py_DECREF(tmp_operand_value_2);
  if (tmp_stop_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 301;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tstate, tmp_stop_value_1);
  Py_DECREF(tmp_stop_value_1);
  assert(!(tmp_subscript_value_1 == NULL));
  tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
  Py_DECREF(tmp_subscript_value_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 301;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  assert(var_non_matching == NULL);
  var_non_matching = tmp_assign_source_1;
 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_operand_value_3;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(var_non_matching);
  tmp_expression_value_3 = var_non_matching;
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[57]);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 303;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  frame_509d05b571111cce88f7b256139b2990->m_frame.f_lineno = 303;
  tmp_operand_value_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[58]);

  Py_DECREF(tmp_called_value_2);
  if (tmp_operand_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 303;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
  Py_DECREF(tmp_operand_value_3);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 303;
   type_description_1 = "ooo";
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
 tmp_return_value = Py_False;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_3:;
 {
  PyObject *tmp_operand_value_4;
  PyObject *tmp_called_value_3;
  PyObject *tmp_args_element_value_2;
  tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[54]);

  if (unlikely(tmp_called_value_3 == NULL)) {
      tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
  }

  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 306;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_hostname);
  tmp_args_element_value_2 = par_hostname;
  frame_509d05b571111cce88f7b256139b2990->m_frame.f_lineno = 306;
  tmp_operand_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
  if (tmp_operand_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 306;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
  Py_DECREF(tmp_operand_value_4);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 306;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
  Py_INCREF(tmp_return_value);
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
     exception_tb = MAKE_TRACEBACK(frame_509d05b571111cce88f7b256139b2990, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_509d05b571111cce88f7b256139b2990->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_509d05b571111cce88f7b256139b2990, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_509d05b571111cce88f7b256139b2990,
     type_description_1,
     par_domain,
     par_hostname,
     var_non_matching
 );


 // Release cached frame if used for exception.
 if (frame_509d05b571111cce88f7b256139b2990 == cache_frame_509d05b571111cce88f7b256139b2990) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_509d05b571111cce88f7b256139b2990);
     cache_frame_509d05b571111cce88f7b256139b2990 = NULL;
 }

 assertFrameObject(frame_509d05b571111cce88f7b256139b2990);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 Py_XDECREF(var_non_matching);
 var_non_matching = NULL;
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

 Py_XDECREF(var_non_matching);
 var_non_matching = NULL;
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
 CHECK_OBJECT(par_domain);
 Py_DECREF(par_domain);
 CHECK_OBJECT(par_hostname);
 Py_DECREF(par_hostname);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_domain);
 Py_DECREF(par_domain);
 CHECK_OBJECT(par_hostname);
 Py_DECREF(par_hostname);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$cookiejar$$$function__13__is_path_match(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_req_path = python_pars[0];
 PyObject *par_cookie_path = python_pars[1];
 PyObject *var_non_matching = NULL;
 struct Nuitka_FrameObject *frame_f40bf84260fd560d9f6536dea7e4ca72;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_f40bf84260fd560d9f6536dea7e4ca72 = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_f40bf84260fd560d9f6536dea7e4ca72)) {
     Py_XDECREF(cache_frame_f40bf84260fd560d9f6536dea7e4ca72);

#if _DEBUG_REFCOUNTS
     if (cache_frame_f40bf84260fd560d9f6536dea7e4ca72 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_f40bf84260fd560d9f6536dea7e4ca72 = MAKE_FUNCTION_FRAME(tstate, codeobj_f40bf84260fd560d9f6536dea7e4ca72, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_f40bf84260fd560d9f6536dea7e4ca72->m_type_description == NULL);
 frame_f40bf84260fd560d9f6536dea7e4ca72 = cache_frame_f40bf84260fd560d9f6536dea7e4ca72;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_f40bf84260fd560d9f6536dea7e4ca72);
 assert(Py_REFCNT(frame_f40bf84260fd560d9f6536dea7e4ca72) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_req_path);
  tmp_expression_value_1 = par_req_path;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[62]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  frame_f40bf84260fd560d9f6536dea7e4ca72->m_frame.f_lineno = 311;
  tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[65]);

  Py_DECREF(tmp_called_value_1);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 311;
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
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = mod_consts[67];
  {
      PyObject *old = par_req_path;
      assert(old != NULL);
      par_req_path = tmp_assign_source_1;
      Py_INCREF(par_req_path);
      Py_DECREF(old);
  }

 }
 branch_no_1:;
 {
  nuitka_bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  if (par_req_path == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 314;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }

  tmp_cmp_expr_left_1 = par_req_path;
  CHECK_OBJECT(par_cookie_path);
  tmp_cmp_expr_right_1 = par_cookie_path;
  tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 314;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 tmp_return_value = Py_True;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_2:;
 {
  bool tmp_condition_result_3;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_args_element_value_1;
  if (par_req_path == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 317;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_2 = par_req_path;
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[62]);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 317;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_cookie_path);
  tmp_args_element_value_1 = par_cookie_path;
  frame_f40bf84260fd560d9f6536dea7e4ca72->m_frame.f_lineno = 317;
  tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_2);
  if (tmp_operand_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 317;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  Py_DECREF(tmp_operand_value_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 317;
   type_description_1 = "ooo";
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
 tmp_return_value = Py_False;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_3:;
 {
  nuitka_bool tmp_condition_result_4;
  PyObject *tmp_called_value_3;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_call_result_1;
  int tmp_truth_name_1;
  CHECK_OBJECT(par_cookie_path);
  tmp_expression_value_3 = par_cookie_path;
  tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[57]);
  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 320;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  frame_f40bf84260fd560d9f6536dea7e4ca72->m_frame.f_lineno = 320;
  tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[65]);

  Py_DECREF(tmp_called_value_3);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 320;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_call_result_1);

   exception_lineno = 320;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_call_result_1);
  if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 tmp_return_value = Py_True;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_4:;
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_subscript_value_1;
  PyObject *tmp_start_value_1;
  PyObject *tmp_len_arg_1;
  PyObject *tmp_stop_value_1;
  if (par_req_path == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[96]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 323;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_4 = par_req_path;
  CHECK_OBJECT(par_cookie_path);
  tmp_len_arg_1 = par_cookie_path;
  tmp_start_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
  if (tmp_start_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 323;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_stop_value_1 = Py_None;
  tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tstate, tmp_start_value_1, tmp_stop_value_1);
  Py_DECREF(tmp_start_value_1);
  assert(!(tmp_subscript_value_1 == NULL));
  tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_1);
  Py_DECREF(tmp_subscript_value_1);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 323;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  assert(var_non_matching == NULL);
  var_non_matching = tmp_assign_source_2;
 }
 {
  PyObject *tmp_called_value_4;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(var_non_matching);
  tmp_expression_value_5 = var_non_matching;
  tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[62]);
  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 325;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  frame_f40bf84260fd560d9f6536dea7e4ca72->m_frame.f_lineno = 325;
  tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[65]);

  Py_DECREF(tmp_called_value_4);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 325;
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

 goto try_return_handler_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_f40bf84260fd560d9f6536dea7e4ca72, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_f40bf84260fd560d9f6536dea7e4ca72->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_f40bf84260fd560d9f6536dea7e4ca72, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_f40bf84260fd560d9f6536dea7e4ca72,
     type_description_1,
     par_req_path,
     par_cookie_path,
     var_non_matching
 );


 // Release cached frame if used for exception.
 if (frame_f40bf84260fd560d9f6536dea7e4ca72 == cache_frame_f40bf84260fd560d9f6536dea7e4ca72) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_f40bf84260fd560d9f6536dea7e4ca72);
     cache_frame_f40bf84260fd560d9f6536dea7e4ca72 = NULL;
 }

 assertFrameObject(frame_f40bf84260fd560d9f6536dea7e4ca72);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 Py_XDECREF(par_req_path);
 par_req_path = NULL;
 Py_XDECREF(var_non_matching);
 var_non_matching = NULL;
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

 Py_XDECREF(par_req_path);
 par_req_path = NULL;
 Py_XDECREF(var_non_matching);
 var_non_matching = NULL;
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
 CHECK_OBJECT(par_cookie_path);
 Py_DECREF(par_cookie_path);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_cookie_path);
 Py_DECREF(par_cookie_path);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$cookiejar$$$function__14__parse_date(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_cls = python_pars[0];
 PyObject *par_date_str = python_pars[1];
 nuitka_bool var_found_time = NUITKA_BOOL_UNASSIGNED;
 nuitka_bool var_found_day = NUITKA_BOOL_UNASSIGNED;
 nuitka_bool var_found_month = NUITKA_BOOL_UNASSIGNED;
 PyObject *var_found_year = NULL;
 PyObject *var_hour = NULL;
 PyObject *var_minute = NULL;
 PyObject *var_second = NULL;
 PyObject *var_day = NULL;
 PyObject *var_month = NULL;
 PyObject *var_year = NULL;
 PyObject *var_token_match = NULL;
 PyObject *var_token = NULL;
 PyObject *var_time_match = NULL;
 PyObject *var_day_match = NULL;
 PyObject *var_month_match = NULL;
 PyObject *var_year_match = NULL;
 PyObject *tmp_comparison_chain_1__comparison_result = NULL;
 PyObject *tmp_comparison_chain_1__operand_2 = NULL;
 PyObject *tmp_comparison_chain_2__comparison_result = NULL;
 PyObject *tmp_comparison_chain_2__operand_2 = NULL;
 PyObject *tmp_comparison_chain_3__comparison_result = NULL;
 PyObject *tmp_comparison_chain_3__operand_2 = NULL;
 PyObject *tmp_for_loop_1__for_iterator = NULL;
 PyObject *tmp_for_loop_1__iter_value = NULL;
 PyObject *tmp_genexpr_1__$0 = NULL;
 PyObject *tmp_tuple_unpack_1__element_1 = NULL;
 PyObject *tmp_tuple_unpack_1__element_2 = NULL;
 PyObject *tmp_tuple_unpack_1__element_3 = NULL;
 PyObject *tmp_tuple_unpack_1__source_iter = NULL;
 struct Nuitka_FrameObject *frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 int tmp_res;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
 bool tmp_result;
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
 PyObject *exception_keeper_type_6;
 PyObject *exception_keeper_value_6;
 PyTracebackObject *exception_keeper_tb_6;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
 static struct Nuitka_FrameObject *cache_frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b = NULL;
 PyObject *exception_keeper_type_7;
 PyObject *exception_keeper_value_7;
 PyTracebackObject *exception_keeper_tb_7;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b)) {
     Py_XDECREF(cache_frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b);

#if _DEBUG_REFCOUNTS
     if (cache_frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b = MAKE_FUNCTION_FRAME(tstate, codeobj_d3b5cd8f6db59afd3ffb3c6e09a2f38b, module_aiohttp$cookiejar, sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_type_description == NULL);
 frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b = cache_frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b);
 assert(Py_REFCNT(frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_operand_value_1;
  CHECK_OBJECT(par_date_str);
  tmp_operand_value_1 = par_date_str;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 330;
   type_description_1 = "oobbbooooooooooooo";
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
  nuitka_bool tmp_assign_source_1;
  tmp_assign_source_1 = NUITKA_BOOL_FALSE;
  var_found_time = tmp_assign_source_1;
 }
 {
  nuitka_bool tmp_assign_source_2;
  tmp_assign_source_2 = NUITKA_BOOL_FALSE;
  var_found_day = tmp_assign_source_2;
 }
 {
  nuitka_bool tmp_assign_source_3;
  tmp_assign_source_3 = NUITKA_BOOL_FALSE;
  var_found_month = tmp_assign_source_3;
 }
 {
  PyObject *tmp_assign_source_4;
  tmp_assign_source_4 = Py_False;
  assert(var_found_year == NULL);
  Py_INCREF(tmp_assign_source_4);
  var_found_year = tmp_assign_source_4;
 }
 {
  PyObject *tmp_assign_source_5;
  tmp_assign_source_5 = mod_consts[98];
  assert(var_hour == NULL);
  Py_INCREF(tmp_assign_source_5);
  var_hour = tmp_assign_source_5;
 }
 {
  PyObject *tmp_assign_source_6;
  tmp_assign_source_6 = mod_consts[98];
  assert(var_minute == NULL);
  Py_INCREF(tmp_assign_source_6);
  var_minute = tmp_assign_source_6;
 }
 {
  PyObject *tmp_assign_source_7;
  tmp_assign_source_7 = mod_consts[98];
  assert(var_second == NULL);
  Py_INCREF(tmp_assign_source_7);
  var_second = tmp_assign_source_7;
 }
 {
  PyObject *tmp_assign_source_8;
  tmp_assign_source_8 = mod_consts[98];
  assert(var_day == NULL);
  Py_INCREF(tmp_assign_source_8);
  var_day = tmp_assign_source_8;
 }
 {
  PyObject *tmp_assign_source_9;
  tmp_assign_source_9 = mod_consts[98];
  assert(var_month == NULL);
  Py_INCREF(tmp_assign_source_9);
  var_month = tmp_assign_source_9;
 }
 {
  PyObject *tmp_assign_source_10;
  tmp_assign_source_10 = mod_consts[98];
  assert(var_year == NULL);
  Py_INCREF(tmp_assign_source_10);
  var_year = tmp_assign_source_10;
 }
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_iter_arg_1;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_args_element_value_1;
  CHECK_OBJECT(par_cls);
  tmp_expression_value_1 = par_cls;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[99]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 343;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_date_str);
  tmp_args_element_value_1 = par_date_str;
  frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_frame.f_lineno = 343;
  tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[100], tmp_args_element_value_1);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_iter_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 343;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_11 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
  Py_DECREF(tmp_iter_arg_1);
  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 343;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  assert(tmp_for_loop_1__for_iterator == NULL);
  tmp_for_loop_1__for_iterator = tmp_assign_source_11;
 }
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_12;
  CHECK_OBJECT(tmp_for_loop_1__for_iterator);
  tmp_next_source_1 = tmp_for_loop_1__for_iterator;
  tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_12 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    type_description_1 = "oobbbooooooooooooo";
    exception_lineno = 343;
          goto try_except_handler_2;
      }
  }

  {
      PyObject *old = tmp_for_loop_1__iter_value;
      tmp_for_loop_1__iter_value = tmp_assign_source_12;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_13;
  CHECK_OBJECT(tmp_for_loop_1__iter_value);
  tmp_assign_source_13 = tmp_for_loop_1__iter_value;
  {
      PyObject *old = var_token_match;
      var_token_match = tmp_assign_source_13;
      Py_INCREF(var_token_match);
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_14;
  PyObject *tmp_called_instance_2;
  CHECK_OBJECT(var_token_match);
  tmp_called_instance_2 = var_token_match;
  frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_frame.f_lineno = 345;
  tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(
      tstate,
      tmp_called_instance_2,
      mod_consts[101],
      PyTuple_GET_ITEM(mod_consts[102], 0)
  );

  if (tmp_assign_source_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 345;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_token;
      var_token = tmp_assign_source_14;
      Py_XDECREF(old);
  }

 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_operand_value_2;
  if (var_found_time == NUITKA_BOOL_UNASSIGNED) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[103]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 347;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_operand_value_2 = (var_found_time == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 347;
   type_description_1 = "oobbbooooooooooooo";
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
 {
  PyObject *tmp_assign_source_15;
  PyObject *tmp_called_instance_3;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_args_element_value_2;
  if (par_cls == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 348;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_2 = par_cls;
  tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[105]);
  if (tmp_called_instance_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 348;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  CHECK_OBJECT(var_token);
  tmp_args_element_value_2 = var_token;
  frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_frame.f_lineno = 348;
  tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[106], tmp_args_element_value_2);
  Py_DECREF(tmp_called_instance_3);
  if (tmp_assign_source_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 348;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_time_match;
      var_time_match = tmp_assign_source_15;
      Py_XDECREF(old);
  }

 }
 {
  nuitka_bool tmp_condition_result_3;
  int tmp_truth_name_1;
  CHECK_OBJECT(var_time_match);
  tmp_truth_name_1 = CHECK_IF_TRUE(var_time_match);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 349;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
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
  nuitka_bool tmp_assign_source_16;
  tmp_assign_source_16 = NUITKA_BOOL_TRUE;
  var_found_time = tmp_assign_source_16;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_17;
  PyObject *tmp_iter_arg_2;
  {
   PyObject *tmp_assign_source_18;
   PyObject *tmp_iter_arg_3;
   PyObject *tmp_called_instance_4;
   CHECK_OBJECT(var_time_match);
   tmp_called_instance_4 = var_time_match;
   frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_frame.f_lineno = 351;
   tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[107]);
   if (tmp_iter_arg_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 351;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_3;
   }
   tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
   Py_DECREF(tmp_iter_arg_3);
   if (tmp_assign_source_18 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 351;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_3;
   }
   {
       PyObject *old = tmp_genexpr_1__$0;
       tmp_genexpr_1__$0 = tmp_assign_source_18;
       Py_XDECREF(old);
   }

  }
  // Tried code:
  {
   struct Nuitka_CellObject *tmp_closure_1[1];

   tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

   tmp_iter_arg_2 = MAKE_GENERATOR_aiohttp$cookiejar$$$function__14__parse_date$$$genexpr__1_genexpr(tmp_closure_1);

   goto try_return_handler_4;
  }
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_4:;
  CHECK_OBJECT(tmp_genexpr_1__$0);
  Py_DECREF(tmp_genexpr_1__$0);
  tmp_genexpr_1__$0 = NULL;
  goto outline_result_1;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_result_1:;
  tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
  Py_DECREF(tmp_iter_arg_2);
  if (tmp_assign_source_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 351;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_3;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__source_iter;
      tmp_tuple_unpack_1__source_iter = tmp_assign_source_17;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_19;
  PyObject *tmp_unpack_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_19 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 3);
  if (tmp_assign_source_19 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oobbbooooooooooooo";
   exception_lineno = 351;
      goto try_except_handler_5;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_1;
      tmp_tuple_unpack_1__element_1 = tmp_assign_source_19;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_unpack_2;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_20 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 3);
  if (tmp_assign_source_20 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oobbbooooooooooooo";
   exception_lineno = 351;
      goto try_except_handler_5;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_2;
      tmp_tuple_unpack_1__element_2 = tmp_assign_source_20;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_21;
  PyObject *tmp_unpack_3;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_21 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 3);
  if (tmp_assign_source_21 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oobbbooooooooooooo";
   exception_lineno = 351;
      goto try_except_handler_5;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_3;
      tmp_tuple_unpack_1__element_3 = tmp_assign_source_21;
      Py_XDECREF(old);
  }

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

     type_description_1 = "oobbbooooooooooooo";
     exception_lineno = 351;
              goto try_except_handler_5;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[35];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "oobbbooooooooooooo";
   exception_lineno = 351;
      goto try_except_handler_5;
  }
 }
 goto try_end_1;
 // Exception handler code:
 try_except_handler_5:;
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

 goto try_except_handler_3;
 // End of try:
 try_end_1:;
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

 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;
 Py_XDECREF(tmp_tuple_unpack_1__element_3);
 tmp_tuple_unpack_1__element_3 = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_2;
 exception_value = exception_keeper_value_2;
 exception_tb = exception_keeper_tb_2;
 exception_lineno = exception_keeper_lineno_2;

 goto try_except_handler_2;
 // End of try:
 try_end_2:;
 CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
 Py_DECREF(tmp_tuple_unpack_1__source_iter);
 tmp_tuple_unpack_1__source_iter = NULL;
 {
  PyObject *tmp_assign_source_22;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
  tmp_assign_source_22 = tmp_tuple_unpack_1__element_1;
  {
      PyObject *old = var_hour;
      var_hour = tmp_assign_source_22;
      Py_INCREF(var_hour);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;

 {
  PyObject *tmp_assign_source_23;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
  tmp_assign_source_23 = tmp_tuple_unpack_1__element_2;
  {
      PyObject *old = var_minute;
      var_minute = tmp_assign_source_23;
      Py_INCREF(var_minute);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;

 {
  PyObject *tmp_assign_source_24;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
  tmp_assign_source_24 = tmp_tuple_unpack_1__element_3;
  {
      PyObject *old = var_second;
      var_second = tmp_assign_source_24;
      Py_INCREF(var_second);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_3);
 tmp_tuple_unpack_1__element_3 = NULL;

 goto loop_start_1;
 branch_no_3:;
 branch_no_2:;
 {
  bool tmp_condition_result_4;
  PyObject *tmp_operand_value_3;
  if (var_found_day == NUITKA_BOOL_UNASSIGNED) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 354;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_operand_value_3 = (var_found_day == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 354;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_4 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_assign_source_25;
  PyObject *tmp_called_instance_5;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_args_element_value_3;
  if (par_cls == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 355;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_3 = par_cls;
  tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[109]);
  if (tmp_called_instance_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 355;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  CHECK_OBJECT(var_token);
  tmp_args_element_value_3 = var_token;
  frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_frame.f_lineno = 355;
  tmp_assign_source_25 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[106], tmp_args_element_value_3);
  Py_DECREF(tmp_called_instance_5);
  if (tmp_assign_source_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 355;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_day_match;
      var_day_match = tmp_assign_source_25;
      Py_XDECREF(old);
  }

 }
 {
  nuitka_bool tmp_condition_result_5;
  int tmp_truth_name_2;
  CHECK_OBJECT(var_day_match);
  tmp_truth_name_2 = CHECK_IF_TRUE(var_day_match);
  if (tmp_truth_name_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 356;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 {
  nuitka_bool tmp_assign_source_26;
  tmp_assign_source_26 = NUITKA_BOOL_TRUE;
  var_found_day = tmp_assign_source_26;
 }
 {
  PyObject *tmp_assign_source_27;
  PyObject *tmp_int_arg_1;
  PyObject *tmp_called_instance_6;
  CHECK_OBJECT(var_day_match);
  tmp_called_instance_6 = var_day_match;
  frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_frame.f_lineno = 358;
  tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[101]);
  if (tmp_int_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 358;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_assign_source_27 = PyNumber_Int(tmp_int_arg_1);
  Py_DECREF(tmp_int_arg_1);
  if (tmp_assign_source_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 358;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_day;
      var_day = tmp_assign_source_27;
      Py_XDECREF(old);
  }

 }
 goto loop_start_1;
 branch_no_5:;
 branch_no_4:;
 {
  bool tmp_condition_result_6;
  PyObject *tmp_operand_value_4;
  if (var_found_month == NUITKA_BOOL_UNASSIGNED) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 361;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_operand_value_4 = (var_found_month == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 361;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_6 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_6 != false) {
      goto branch_yes_6;
  } else {
      goto branch_no_6;
  }
 }
 branch_yes_6:;
 {
  PyObject *tmp_assign_source_28;
  PyObject *tmp_called_instance_7;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_args_element_value_4;
  if (par_cls == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 362;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_4 = par_cls;
  tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[111]);
  if (tmp_called_instance_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 362;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  CHECK_OBJECT(var_token);
  tmp_args_element_value_4 = var_token;
  frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_frame.f_lineno = 362;
  tmp_assign_source_28 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[106], tmp_args_element_value_4);
  Py_DECREF(tmp_called_instance_7);
  if (tmp_assign_source_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 362;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_month_match;
      var_month_match = tmp_assign_source_28;
      Py_XDECREF(old);
  }

 }
 {
  nuitka_bool tmp_condition_result_7;
  int tmp_truth_name_3;
  CHECK_OBJECT(var_month_match);
  tmp_truth_name_3 = CHECK_IF_TRUE(var_month_match);
  if (tmp_truth_name_3 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 363;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_7 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
      goto branch_yes_7;
  } else {
      goto branch_no_7;
  }
 }
 branch_yes_7:;
 {
  nuitka_bool tmp_assign_source_29;
  tmp_assign_source_29 = NUITKA_BOOL_TRUE;
  var_found_month = tmp_assign_source_29;
 }
 {
  bool tmp_condition_result_8;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(var_month_match);
  tmp_expression_value_5 = var_month_match;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[112]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 365;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_8 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_1);
  if (tmp_condition_result_8 != false) {
      goto branch_yes_8;
  } else {
      goto branch_no_8;
  }
 }
 branch_yes_8:;
 {
  PyObject *tmp_raise_type_1;
  tmp_raise_type_1 = PyExc_AssertionError;
  exception_type = tmp_raise_type_1;
  Py_INCREF(tmp_raise_type_1);
  exception_lineno = 365;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "oobbbooooooooooooo";
  goto try_except_handler_2;
 }
 branch_no_8:;
 {
  PyObject *tmp_assign_source_30;
  PyObject *tmp_expression_value_6;
  CHECK_OBJECT(var_month_match);
  tmp_expression_value_6 = var_month_match;
  tmp_assign_source_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[112]);
  if (tmp_assign_source_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 366;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_month;
      var_month = tmp_assign_source_30;
      Py_XDECREF(old);
  }

 }
 goto loop_start_1;
 branch_no_7:;
 branch_no_6:;
 {
  bool tmp_condition_result_9;
  PyObject *tmp_operand_value_5;
  if (var_found_year == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 369;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_operand_value_5 = var_found_year;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 369;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_9 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_9 != false) {
      goto branch_yes_9;
  } else {
      goto branch_no_9;
  }
 }
 branch_yes_9:;
 {
  PyObject *tmp_assign_source_31;
  PyObject *tmp_called_instance_8;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_args_element_value_5;
  if (par_cls == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 370;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_7 = par_cls;
  tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[114]);
  if (tmp_called_instance_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 370;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  CHECK_OBJECT(var_token);
  tmp_args_element_value_5 = var_token;
  frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_frame.f_lineno = 370;
  tmp_assign_source_31 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_8, mod_consts[106], tmp_args_element_value_5);
  Py_DECREF(tmp_called_instance_8);
  if (tmp_assign_source_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 370;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_year_match;
      var_year_match = tmp_assign_source_31;
      Py_XDECREF(old);
  }

 }
 {
  nuitka_bool tmp_condition_result_10;
  int tmp_truth_name_4;
  CHECK_OBJECT(var_year_match);
  tmp_truth_name_4 = CHECK_IF_TRUE(var_year_match);
  if (tmp_truth_name_4 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 371;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
      goto branch_yes_10;
  } else {
      goto branch_no_10;
  }
 }
 branch_yes_10:;
 {
  PyObject *tmp_assign_source_32;
  tmp_assign_source_32 = Py_True;
  {
      PyObject *old = var_found_year;
      var_found_year = tmp_assign_source_32;
      Py_INCREF(var_found_year);
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_33;
  PyObject *tmp_int_arg_2;
  PyObject *tmp_called_instance_9;
  CHECK_OBJECT(var_year_match);
  tmp_called_instance_9 = var_year_match;
  frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_frame.f_lineno = 373;
  tmp_int_arg_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_9, mod_consts[101]);
  if (tmp_int_arg_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 373;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  tmp_assign_source_33 = PyNumber_Int(tmp_int_arg_2);
  Py_DECREF(tmp_int_arg_2);
  if (tmp_assign_source_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 373;
   type_description_1 = "oobbbooooooooooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = var_year;
      var_year = tmp_assign_source_33;
      Py_XDECREF(old);
  }

 }
 branch_no_10:;
 branch_no_9:;
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 343;
  type_description_1 = "oobbbooooooooooooo";
     goto try_except_handler_2;
 }
 goto loop_start_1;
 loop_end_1:;
 goto try_end_3;
 // Exception handler code:
 try_except_handler_2:;
 exception_keeper_type_3 = exception_type;
 exception_keeper_value_3 = exception_value;
 exception_keeper_tb_3 = exception_tb;
 exception_keeper_lineno_3 = exception_lineno;
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
 exception_type = exception_keeper_type_3;
 exception_value = exception_keeper_value_3;
 exception_tb = exception_keeper_tb_3;
 exception_lineno = exception_keeper_lineno_3;

 goto frame_exception_exit_1;
 // End of try:
 try_end_3:;
 Py_XDECREF(tmp_for_loop_1__iter_value);
 tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_1__for_iterator);
 Py_DECREF(tmp_for_loop_1__for_iterator);
 tmp_for_loop_1__for_iterator = NULL;
 {
  nuitka_bool tmp_condition_result_11;
  PyObject *tmp_outline_return_value_1;
  int tmp_truth_name_5;
  // Tried code:
  {
   PyObject *tmp_assign_source_34;
   if (var_year == NULL) {

    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
    exception_tb = NULL;
    NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
    CHAIN_EXCEPTION(tstate, exception_value);

    exception_lineno = 375;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_6;
   }

   tmp_assign_source_34 = var_year;
   assert(tmp_comparison_chain_1__operand_2 == NULL);
   Py_INCREF(tmp_assign_source_34);
   tmp_comparison_chain_1__operand_2 = tmp_assign_source_34;
  }
  {
   PyObject *tmp_assign_source_35;
   PyObject *tmp_cmp_expr_left_2;
   PyObject *tmp_cmp_expr_right_2;
   tmp_cmp_expr_left_2 = mod_consts[116];
   CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
   tmp_cmp_expr_right_2 = tmp_comparison_chain_1__operand_2;
   tmp_assign_source_35 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
   if (tmp_assign_source_35 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 375;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_6;
   }
   assert(tmp_comparison_chain_1__comparison_result == NULL);
   tmp_comparison_chain_1__comparison_result = tmp_assign_source_35;
  }
  {
   bool tmp_condition_result_12;
   PyObject *tmp_operand_value_6;
   CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
   tmp_operand_value_6 = tmp_comparison_chain_1__comparison_result;
   tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 375;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_6;
   }
   tmp_condition_result_12 = (tmp_res == 0) ? true : false;
   if (tmp_condition_result_12 != false) {
       goto branch_yes_12;
   } else {
       goto branch_no_12;
   }
  }
  branch_yes_12:;
  CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
  tmp_outline_return_value_1 = tmp_comparison_chain_1__comparison_result;
  Py_INCREF(tmp_outline_return_value_1);
  goto try_return_handler_6;
  branch_no_12:;
  {
   PyObject *tmp_cmp_expr_left_3;
   PyObject *tmp_cmp_expr_right_3;
   CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
   tmp_cmp_expr_left_3 = tmp_comparison_chain_1__operand_2;
   tmp_cmp_expr_right_3 = mod_consts[117];
   tmp_outline_return_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
   if (tmp_outline_return_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 375;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_6;
   }
   goto try_return_handler_6;
  }
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_6:;
  CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
  Py_DECREF(tmp_comparison_chain_1__operand_2);
  tmp_comparison_chain_1__operand_2 = NULL;
  CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
  Py_DECREF(tmp_comparison_chain_1__comparison_result);
  tmp_comparison_chain_1__comparison_result = NULL;
  goto outline_result_2;
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

  Py_XDECREF(tmp_comparison_chain_1__operand_2);
  tmp_comparison_chain_1__operand_2 = NULL;
  Py_XDECREF(tmp_comparison_chain_1__comparison_result);
  tmp_comparison_chain_1__comparison_result = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_4;
  exception_value = exception_keeper_value_4;
  exception_tb = exception_keeper_tb_4;
  exception_lineno = exception_keeper_lineno_4;

  goto frame_exception_exit_1;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_result_2:;
  tmp_truth_name_5 = CHECK_IF_TRUE(tmp_outline_return_value_1);
  if (tmp_truth_name_5 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_outline_return_value_1);

   exception_lineno = 375;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_11 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_outline_return_value_1);
  if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
      goto branch_yes_11;
  } else {
      goto branch_no_11;
  }
 }
 branch_yes_11:;
 {
  PyObject *tmp_assign_source_36;
  PyObject *tmp_iadd_expr_left_1;
  PyObject *tmp_iadd_expr_right_1;
  if (var_year == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 376;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_iadd_expr_left_1 = var_year;
  tmp_iadd_expr_right_1 = mod_consts[118];
  tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 376;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_36 = tmp_iadd_expr_left_1;
  var_year = tmp_assign_source_36;

 }
 goto branch_end_11;
 branch_no_11:;
 {
  nuitka_bool tmp_condition_result_13;
  PyObject *tmp_outline_return_value_2;
  int tmp_truth_name_6;
  // Tried code:
  {
   PyObject *tmp_assign_source_37;
   if (var_year == NULL) {

    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
    exception_tb = NULL;
    NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
    CHAIN_EXCEPTION(tstate, exception_value);

    exception_lineno = 377;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_7;
   }

   tmp_assign_source_37 = var_year;
   assert(tmp_comparison_chain_2__operand_2 == NULL);
   Py_INCREF(tmp_assign_source_37);
   tmp_comparison_chain_2__operand_2 = tmp_assign_source_37;
  }
  {
   PyObject *tmp_assign_source_38;
   PyObject *tmp_cmp_expr_left_4;
   PyObject *tmp_cmp_expr_right_4;
   tmp_cmp_expr_left_4 = mod_consts[98];
   CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
   tmp_cmp_expr_right_4 = tmp_comparison_chain_2__operand_2;
   tmp_assign_source_38 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
   if (tmp_assign_source_38 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 377;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_7;
   }
   assert(tmp_comparison_chain_2__comparison_result == NULL);
   tmp_comparison_chain_2__comparison_result = tmp_assign_source_38;
  }
  {
   bool tmp_condition_result_14;
   PyObject *tmp_operand_value_7;
   CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
   tmp_operand_value_7 = tmp_comparison_chain_2__comparison_result;
   tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 377;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_7;
   }
   tmp_condition_result_14 = (tmp_res == 0) ? true : false;
   if (tmp_condition_result_14 != false) {
       goto branch_yes_14;
   } else {
       goto branch_no_14;
   }
  }
  branch_yes_14:;
  CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
  tmp_outline_return_value_2 = tmp_comparison_chain_2__comparison_result;
  Py_INCREF(tmp_outline_return_value_2);
  goto try_return_handler_7;
  branch_no_14:;
  {
   PyObject *tmp_cmp_expr_left_5;
   PyObject *tmp_cmp_expr_right_5;
   CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
   tmp_cmp_expr_left_5 = tmp_comparison_chain_2__operand_2;
   tmp_cmp_expr_right_5 = mod_consts[119];
   tmp_outline_return_value_2 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
   if (tmp_outline_return_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 377;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_7;
   }
   goto try_return_handler_7;
  }
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_7:;
  CHECK_OBJECT(tmp_comparison_chain_2__operand_2);
  Py_DECREF(tmp_comparison_chain_2__operand_2);
  tmp_comparison_chain_2__operand_2 = NULL;
  CHECK_OBJECT(tmp_comparison_chain_2__comparison_result);
  Py_DECREF(tmp_comparison_chain_2__comparison_result);
  tmp_comparison_chain_2__comparison_result = NULL;
  goto outline_result_3;
  // Exception handler code:
  try_except_handler_7:;
  exception_keeper_type_5 = exception_type;
  exception_keeper_value_5 = exception_value;
  exception_keeper_tb_5 = exception_tb;
  exception_keeper_lineno_5 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  Py_XDECREF(tmp_comparison_chain_2__operand_2);
  tmp_comparison_chain_2__operand_2 = NULL;
  Py_XDECREF(tmp_comparison_chain_2__comparison_result);
  tmp_comparison_chain_2__comparison_result = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_5;
  exception_value = exception_keeper_value_5;
  exception_tb = exception_keeper_tb_5;
  exception_lineno = exception_keeper_lineno_5;

  goto frame_exception_exit_1;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_result_3:;
  tmp_truth_name_6 = CHECK_IF_TRUE(tmp_outline_return_value_2);
  if (tmp_truth_name_6 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_outline_return_value_2);

   exception_lineno = 377;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_13 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_outline_return_value_2);
  if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
      goto branch_yes_13;
  } else {
      goto branch_no_13;
  }
 }
 branch_yes_13:;
 {
  PyObject *tmp_assign_source_39;
  PyObject *tmp_iadd_expr_left_2;
  PyObject *tmp_iadd_expr_right_2;
  if (var_year == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 378;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_iadd_expr_left_2 = var_year;
  tmp_iadd_expr_right_2 = mod_consts[120];
  tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 378;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_39 = tmp_iadd_expr_left_2;
  var_year = tmp_assign_source_39;

 }
 branch_no_13:;
 branch_end_11:;
 {
  bool tmp_condition_result_15;
  PyObject *tmp_cmp_expr_left_6;
  PyObject *tmp_cmp_expr_right_6;
  PyObject *tmp_tuple_element_1;
  tmp_cmp_expr_left_6 = Py_False;
  if (var_found_day == NUITKA_BOOL_UNASSIGNED) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 380;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_tuple_element_1 = (var_found_day == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
  tmp_cmp_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 4);
  PyTuple_SET_ITEM0(tmp_cmp_expr_right_6, 0, tmp_tuple_element_1);
  if (var_found_month == NUITKA_BOOL_UNASSIGNED) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[110]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 380;
   type_description_1 = "oobbbooooooooooooo";
      goto tuple_build_exception_1;
  }

  tmp_tuple_element_1 = (var_found_month == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
  PyTuple_SET_ITEM0(tmp_cmp_expr_right_6, 1, tmp_tuple_element_1);
  if (var_found_year == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 380;
   type_description_1 = "oobbbooooooooooooo";
      goto tuple_build_exception_1;
  }

  tmp_tuple_element_1 = var_found_year;
  PyTuple_SET_ITEM0(tmp_cmp_expr_right_6, 2, tmp_tuple_element_1);
  if (var_found_time == NUITKA_BOOL_UNASSIGNED) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[103]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 380;
   type_description_1 = "oobbbooooooooooooo";
      goto tuple_build_exception_1;
  }

  tmp_tuple_element_1 = (var_found_time == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
  PyTuple_SET_ITEM0(tmp_cmp_expr_right_6, 3, tmp_tuple_element_1);
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_cmp_expr_right_6);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
  Py_DECREF(tmp_cmp_expr_right_6);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 380;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_15 = (tmp_res == 1) ? true : false;
  if (tmp_condition_result_15 != false) {
      goto branch_yes_15;
  } else {
      goto branch_no_15;
  }
 }
 branch_yes_15:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_15:;
 {
  bool tmp_condition_result_16;
  PyObject *tmp_operand_value_8;
  // Tried code:
  {
   PyObject *tmp_assign_source_40;
   if (var_day == NULL) {

    FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
    exception_tb = NULL;
    NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
    CHAIN_EXCEPTION(tstate, exception_value);

    exception_lineno = 383;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_8;
   }

   tmp_assign_source_40 = var_day;
   assert(tmp_comparison_chain_3__operand_2 == NULL);
   Py_INCREF(tmp_assign_source_40);
   tmp_comparison_chain_3__operand_2 = tmp_assign_source_40;
  }
  {
   PyObject *tmp_assign_source_41;
   PyObject *tmp_cmp_expr_left_7;
   PyObject *tmp_cmp_expr_right_7;
   tmp_cmp_expr_left_7 = mod_consts[41];
   CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
   tmp_cmp_expr_right_7 = tmp_comparison_chain_3__operand_2;
   tmp_assign_source_41 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
   if (tmp_assign_source_41 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 383;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_8;
   }
   assert(tmp_comparison_chain_3__comparison_result == NULL);
   tmp_comparison_chain_3__comparison_result = tmp_assign_source_41;
  }
  {
   bool tmp_condition_result_17;
   PyObject *tmp_operand_value_9;
   CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
   tmp_operand_value_9 = tmp_comparison_chain_3__comparison_result;
   tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 383;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_8;
   }
   tmp_condition_result_17 = (tmp_res == 0) ? true : false;
   if (tmp_condition_result_17 != false) {
       goto branch_yes_17;
   } else {
       goto branch_no_17;
   }
  }
  branch_yes_17:;
  CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
  tmp_operand_value_8 = tmp_comparison_chain_3__comparison_result;
  Py_INCREF(tmp_operand_value_8);
  goto try_return_handler_8;
  branch_no_17:;
  {
   PyObject *tmp_cmp_expr_left_8;
   PyObject *tmp_cmp_expr_right_8;
   CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
   tmp_cmp_expr_left_8 = tmp_comparison_chain_3__operand_2;
   tmp_cmp_expr_right_8 = mod_consts[122];
   tmp_operand_value_8 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
   if (tmp_operand_value_8 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 383;
    type_description_1 = "oobbbooooooooooooo";
       goto try_except_handler_8;
   }
   goto try_return_handler_8;
  }
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_8:;
  CHECK_OBJECT(tmp_comparison_chain_3__operand_2);
  Py_DECREF(tmp_comparison_chain_3__operand_2);
  tmp_comparison_chain_3__operand_2 = NULL;
  CHECK_OBJECT(tmp_comparison_chain_3__comparison_result);
  Py_DECREF(tmp_comparison_chain_3__comparison_result);
  tmp_comparison_chain_3__comparison_result = NULL;
  goto outline_result_4;
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

  Py_XDECREF(tmp_comparison_chain_3__operand_2);
  tmp_comparison_chain_3__operand_2 = NULL;
  Py_XDECREF(tmp_comparison_chain_3__comparison_result);
  tmp_comparison_chain_3__comparison_result = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_6;
  exception_value = exception_keeper_value_6;
  exception_tb = exception_keeper_tb_6;
  exception_lineno = exception_keeper_lineno_6;

  goto frame_exception_exit_1;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_result_4:;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
  Py_DECREF(tmp_operand_value_8);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 383;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_16 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_16 != false) {
      goto branch_yes_16;
  } else {
      goto branch_no_16;
  }
 }
 branch_yes_16:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_16:;
 {
  nuitka_bool tmp_condition_result_18;
  int tmp_or_left_truth_1;
  nuitka_bool tmp_or_left_value_1;
  nuitka_bool tmp_or_right_value_1;
  PyObject *tmp_cmp_expr_left_9;
  PyObject *tmp_cmp_expr_right_9;
  int tmp_or_left_truth_2;
  nuitka_bool tmp_or_left_value_2;
  nuitka_bool tmp_or_right_value_2;
  PyObject *tmp_cmp_expr_left_10;
  PyObject *tmp_cmp_expr_right_10;
  int tmp_or_left_truth_3;
  nuitka_bool tmp_or_left_value_3;
  nuitka_bool tmp_or_right_value_3;
  PyObject *tmp_cmp_expr_left_11;
  PyObject *tmp_cmp_expr_right_11;
  PyObject *tmp_cmp_expr_left_12;
  PyObject *tmp_cmp_expr_right_12;
  if (var_year == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 386;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_cmp_expr_left_9 = var_year;
  tmp_cmp_expr_right_9 = mod_consts[123];
  tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
  if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 386;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_or_left_truth_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 386;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  if (tmp_or_left_truth_1 == 1) {
      goto or_left_1;
  } else {
      goto or_right_1;
  }
  or_right_1:;
  if (var_hour == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[124]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 386;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_cmp_expr_left_10 = var_hour;
  tmp_cmp_expr_right_10 = mod_consts[125];
  tmp_or_left_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
  if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 386;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_or_left_truth_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 386;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  if (tmp_or_left_truth_2 == 1) {
      goto or_left_2;
  } else {
      goto or_right_2;
  }
  or_right_2:;
  if (var_minute == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[126]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 386;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_cmp_expr_left_11 = var_minute;
  tmp_cmp_expr_right_11 = mod_consts[127];
  tmp_or_left_value_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
  if (tmp_or_left_value_3 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 386;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_or_left_truth_3 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 386;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  if (tmp_or_left_truth_3 == 1) {
      goto or_left_3;
  } else {
      goto or_right_3;
  }
  or_right_3:;
  if (var_second == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[128]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 386;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_cmp_expr_left_12 = var_second;
  tmp_cmp_expr_right_12 = mod_consts[127];
  tmp_or_right_value_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
  if (tmp_or_right_value_3 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 386;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_or_right_value_2 = tmp_or_right_value_3;
  goto or_end_3;
  or_left_3:;
  tmp_or_right_value_2 = tmp_or_left_value_3;
  or_end_3:;
  tmp_or_right_value_1 = tmp_or_right_value_2;
  goto or_end_2;
  or_left_2:;
  tmp_or_right_value_1 = tmp_or_left_value_2;
  or_end_2:;
  tmp_condition_result_18 = tmp_or_right_value_1;
  goto or_end_1;
  or_left_1:;
  tmp_condition_result_18 = tmp_or_left_value_1;
  or_end_1:;
  if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
      goto branch_yes_18;
  } else {
      goto branch_no_18;
  }
 }
 branch_yes_18:;
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_18:;
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_args_element_value_6;
  PyObject *tmp_tuple_element_2;
  tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[129]);

  if (unlikely(tmp_expression_value_8 == NULL)) {
      tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
  }

  if (tmp_expression_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 389;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[130]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 389;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }
  if (var_year == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 389;
   type_description_1 = "oobbbooooooooooooo";
      goto frame_exception_exit_1;
  }

  tmp_tuple_element_2 = var_year;
  tmp_args_element_value_6 = MAKE_TUPLE_EMPTY(tstate, 9);
  PyTuple_SET_ITEM0(tmp_args_element_value_6, 0, tmp_tuple_element_2);
  if (var_month == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[131]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 389;
   type_description_1 = "oobbbooooooooooooo";
      goto tuple_build_exception_2;
  }

  tmp_tuple_element_2 = var_month;
  PyTuple_SET_ITEM0(tmp_args_element_value_6, 1, tmp_tuple_element_2);
  if (var_day == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 389;
   type_description_1 = "oobbbooooooooooooo";
      goto tuple_build_exception_2;
  }

  tmp_tuple_element_2 = var_day;
  PyTuple_SET_ITEM0(tmp_args_element_value_6, 2, tmp_tuple_element_2);
  if (var_hour == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[124]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 389;
   type_description_1 = "oobbbooooooooooooo";
      goto tuple_build_exception_2;
  }

  tmp_tuple_element_2 = var_hour;
  PyTuple_SET_ITEM0(tmp_args_element_value_6, 3, tmp_tuple_element_2);
  if (var_minute == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[126]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 389;
   type_description_1 = "oobbbooooooooooooo";
      goto tuple_build_exception_2;
  }

  tmp_tuple_element_2 = var_minute;
  PyTuple_SET_ITEM0(tmp_args_element_value_6, 4, tmp_tuple_element_2);
  if (var_second == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[128]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 389;
   type_description_1 = "oobbbooooooooooooo";
      goto tuple_build_exception_2;
  }

  tmp_tuple_element_2 = var_second;
  PyTuple_SET_ITEM0(tmp_args_element_value_6, 5, tmp_tuple_element_2);
  tmp_tuple_element_2 = mod_consts[132];
  PyTuple_SET_ITEM0(tmp_args_element_value_6, 6, tmp_tuple_element_2);
  tmp_tuple_element_2 = mod_consts[132];
  PyTuple_SET_ITEM0(tmp_args_element_value_6, 7, tmp_tuple_element_2);
  tmp_tuple_element_2 = mod_consts[132];
  PyTuple_SET_ITEM0(tmp_args_element_value_6, 8, tmp_tuple_element_2);
  goto tuple_build_noexception_2;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_2:;
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_element_value_6);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_2:;
  frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_frame.f_lineno = 389;
  tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_6);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_element_value_6);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 389;
   type_description_1 = "oobbbooooooooooooo";
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
     exception_tb = MAKE_TRACEBACK(frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b,
     type_description_1,
     par_cls,
     par_date_str,
     (int)var_found_time,
     (int)var_found_day,
     (int)var_found_month,
     var_found_year,
     var_hour,
     var_minute,
     var_second,
     var_day,
     var_month,
     var_year,
     var_token_match,
     var_token,
     var_time_match,
     var_day_match,
     var_month_match,
     var_year_match
 );


 // Release cached frame if used for exception.
 if (frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b == cache_frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b);
     cache_frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b = NULL;
 }

 assertFrameObject(frame_d3b5cd8f6db59afd3ffb3c6e09a2f38b);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 var_found_time = NUITKA_BOOL_UNASSIGNED;
 var_found_day = NUITKA_BOOL_UNASSIGNED;
 var_found_month = NUITKA_BOOL_UNASSIGNED;
 Py_XDECREF(var_found_year);
 var_found_year = NULL;
 Py_XDECREF(var_hour);
 var_hour = NULL;
 Py_XDECREF(var_minute);
 var_minute = NULL;
 Py_XDECREF(var_second);
 var_second = NULL;
 Py_XDECREF(var_day);
 var_day = NULL;
 Py_XDECREF(var_month);
 var_month = NULL;
 Py_XDECREF(var_year);
 var_year = NULL;
 Py_XDECREF(var_token_match);
 var_token_match = NULL;
 Py_XDECREF(var_token);
 var_token = NULL;
 Py_XDECREF(var_time_match);
 var_time_match = NULL;
 Py_XDECREF(var_day_match);
 var_day_match = NULL;
 Py_XDECREF(var_month_match);
 var_month_match = NULL;
 Py_XDECREF(var_year_match);
 var_year_match = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_7 = exception_type;
 exception_keeper_value_7 = exception_value;
 exception_keeper_tb_7 = exception_tb;
 exception_keeper_lineno_7 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 var_found_time = NUITKA_BOOL_UNASSIGNED;
 var_found_day = NUITKA_BOOL_UNASSIGNED;
 var_found_month = NUITKA_BOOL_UNASSIGNED;
 Py_XDECREF(var_found_year);
 var_found_year = NULL;
 Py_XDECREF(var_hour);
 var_hour = NULL;
 Py_XDECREF(var_minute);
 var_minute = NULL;
 Py_XDECREF(var_second);
 var_second = NULL;
 Py_XDECREF(var_day);
 var_day = NULL;
 Py_XDECREF(var_month);
 var_month = NULL;
 Py_XDECREF(var_year);
 var_year = NULL;
 Py_XDECREF(var_token_match);
 var_token_match = NULL;
 Py_XDECREF(var_token);
 var_token = NULL;
 Py_XDECREF(var_time_match);
 var_time_match = NULL;
 Py_XDECREF(var_day_match);
 var_day_match = NULL;
 Py_XDECREF(var_month_match);
 var_month_match = NULL;
 Py_XDECREF(var_year_match);
 var_year_match = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_7;
 exception_value = exception_keeper_value_7;
 exception_tb = exception_keeper_tb_7;
 exception_lineno = exception_keeper_lineno_7;

 goto function_exception_exit;
 // End of try:

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_cls);
 Py_DECREF(par_cls);
 CHECK_OBJECT(par_date_str);
 Py_DECREF(par_date_str);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_cls);
 Py_DECREF(par_cls);
 CHECK_OBJECT(par_date_str);
 Py_DECREF(par_date_str);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$cookiejar$$$function__14__parse_date$$$genexpr__1_genexpr_locals {
 PyObject *var_s;
 PyObject *tmp_iter_value_0;
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 char yield_tmps[1024];
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 int exception_keeper_lineno_1;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 int exception_keeper_lineno_2;
};
#endif

static PyObject *aiohttp$cookiejar$$$function__14__parse_date$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$cookiejar$$$function__14__parse_date$$$genexpr__1_genexpr_locals *generator_heap = (struct aiohttp$cookiejar$$$function__14__parse_date$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(generator->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 generator_heap->var_s = NULL;
 generator_heap->tmp_iter_value_0 = NULL;
 generator_heap->type_description_1 = NULL;
 generator_heap->exception_type = NULL;
 generator_heap->exception_value = NULL;
 generator_heap->exception_tb = NULL;
 generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_493541182c7fa6a18fb271472f61f476, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_m_frame->m_type_description == NULL);
 generator->m_frame = cache_m_frame;
 // Mark the frame object as in use, ref count 1 will be up for reuse.
 Py_INCREF(generator->m_frame);
 assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

 Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

 assert(generator->m_frame->m_frame.f_back == NULL);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
 assert(Py_REFCNT(generator->m_frame) == 2);

 // Store currently existing exception as the one to publish again when we
 // yield or yield from.
 STORE_GENERATOR_EXCEPTION(tstate, generator);

 // Framed code:
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_1;
  CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
  tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
  tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_1 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    generator_heap->type_description_1 = "No";
    generator_heap->exception_lineno = 351;
          goto try_except_handler_2;
      }
  }

  {
      PyObject *old = generator_heap->tmp_iter_value_0;
      generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_2;
  CHECK_OBJECT(generator_heap->tmp_iter_value_0);
  tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
  {
      PyObject *old = generator_heap->var_s;
      generator_heap->var_s = tmp_assign_source_2;
      Py_INCREF(generator_heap->var_s);
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_int_arg_1;
  NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
  CHECK_OBJECT(generator_heap->var_s);
  tmp_int_arg_1 = generator_heap->var_s;
  tmp_expression_value_1 = PyNumber_Int(tmp_int_arg_1);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


   generator_heap->exception_lineno = 351;
   generator_heap->type_description_1 = "No";
      goto try_except_handler_2;
  }
  Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_int_arg_1, sizeof(PyObject *), NULL);
  generator->m_yield_return_index = 1;
  return tmp_expression_value_1;
  yield_return_1:
  Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_int_arg_1, sizeof(PyObject *), NULL);
  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


   generator_heap->exception_lineno = 351;
   generator_heap->type_description_1 = "No";
      goto try_except_handler_2;
  }
  tmp_yield_result_1 = yield_return_value;
  Py_DECREF(tmp_yield_result_1);
 }
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


  generator_heap->exception_lineno = 351;
  generator_heap->type_description_1 = "No";
     goto try_except_handler_2;
 }
 goto loop_start_1;
 loop_end_1:;
 goto try_end_1;
 // Exception handler code:
 try_except_handler_2:;
 generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
 generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
 generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
 generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
 generator_heap->exception_type = NULL;
 generator_heap->exception_value = NULL;
 generator_heap->exception_tb = NULL;
 generator_heap->exception_lineno = 0;

 Py_XDECREF(generator_heap->tmp_iter_value_0);
 generator_heap->tmp_iter_value_0 = NULL;
 // Re-raise.
 generator_heap->exception_type = generator_heap->exception_keeper_type_1;
 generator_heap->exception_value = generator_heap->exception_keeper_value_1;
 generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
 generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

 goto frame_exception_exit_1;
 // End of try:
 try_end_1:;

 // Release exception attached to the frame
 DROP_GENERATOR_EXCEPTION(generator);



 goto frame_no_exception_1;
 frame_exception_exit_1:;

 // If it's not an exit exception, consider and create a traceback for it.
 if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
     if (generator_heap->exception_tb == NULL) {
         generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
     } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
         generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
     }

  Nuitka_Frame_AttachLocals(
      generator->m_frame,
      generator_heap->type_description_1,
      NULL,
      generator_heap->var_s
  );


     // Release cached frame if used for exception.
     if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
         count_active_frame_cache_instances -= 1;
         count_released_frame_cache_instances += 1;
#endif

         Py_DECREF(cache_m_frame);
         cache_m_frame = NULL;
     }

     assertFrameObject(generator->m_frame);
 }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
 Py_CLEAR(EXC_TYPE_F(generator));
#endif
 Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
 Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

 // Return the error.
 goto try_except_handler_1;

 frame_no_exception_1:;
 goto try_end_2;
 // Exception handler code:
 try_except_handler_1:;
 generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
 generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
 generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
 generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
 generator_heap->exception_type = NULL;
 generator_heap->exception_value = NULL;
 generator_heap->exception_tb = NULL;
 generator_heap->exception_lineno = 0;

 Py_XDECREF(generator_heap->var_s);
 generator_heap->var_s = NULL;
 // Re-raise.
 generator_heap->exception_type = generator_heap->exception_keeper_type_2;
 generator_heap->exception_value = generator_heap->exception_keeper_value_2;
 generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
 generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

 goto function_exception_exit;
 // End of try:
 try_end_2:;
 Py_XDECREF(generator_heap->tmp_iter_value_0);
 generator_heap->tmp_iter_value_0 = NULL;
 Py_XDECREF(generator_heap->var_s);
 generator_heap->var_s = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_aiohttp$cookiejar$$$function__14__parse_date$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        aiohttp$cookiejar$$$function__14__parse_date$$$genexpr__1_genexpr_context,
        module_aiohttp$cookiejar,
        mod_consts[50],
#if PYTHON_VERSION >= 0x350
        mod_consts[134],
#endif
        codeobj_493541182c7fa6a18fb271472f61f476,
        closure,
        1,
#if 1
        sizeof(struct aiohttp$cookiejar$$$function__14__parse_date$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$cookiejar$$$function__15___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_loop = python_pars[1];
 struct Nuitka_FrameObject *frame_f287e99f6dc5ba1247b1f83ab54b394e;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_f287e99f6dc5ba1247b1f83ab54b394e = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_f287e99f6dc5ba1247b1f83ab54b394e)) {
     Py_XDECREF(cache_frame_f287e99f6dc5ba1247b1f83ab54b394e);

#if _DEBUG_REFCOUNTS
     if (cache_frame_f287e99f6dc5ba1247b1f83ab54b394e == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_f287e99f6dc5ba1247b1f83ab54b394e = MAKE_FUNCTION_FRAME(tstate, codeobj_f287e99f6dc5ba1247b1f83ab54b394e, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_f287e99f6dc5ba1247b1f83ab54b394e->m_type_description == NULL);
 frame_f287e99f6dc5ba1247b1f83ab54b394e = cache_frame_f287e99f6dc5ba1247b1f83ab54b394e;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_f287e99f6dc5ba1247b1f83ab54b394e);
 assert(Py_REFCNT(frame_f287e99f6dc5ba1247b1f83ab54b394e) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_type_arg_value_1;
  PyObject *tmp_object_arg_value_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_kw_call_value_0_1;
  if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 400;
   type_description_1 = "ooc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
  CHECK_OBJECT(par_self);
  tmp_object_arg_value_1 = par_self;
  tmp_expression_value_1 = BUILTIN_SUPER0(tstate, moduledict_aiohttp$cookiejar, tmp_type_arg_value_1, tmp_object_arg_value_1);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 400;
   type_description_1 = "ooc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 400;
   type_description_1 = "ooc";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_loop);
  tmp_kw_call_value_0_1 = par_loop;
  frame_f287e99f6dc5ba1247b1f83ab54b394e->m_frame.f_lineno = 400;
  {
      PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

      tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[2]);
  }

  Py_DECREF(tmp_called_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 400;
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
     exception_tb = MAKE_TRACEBACK(frame_f287e99f6dc5ba1247b1f83ab54b394e, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_f287e99f6dc5ba1247b1f83ab54b394e->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_f287e99f6dc5ba1247b1f83ab54b394e, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_f287e99f6dc5ba1247b1f83ab54b394e,
     type_description_1,
     par_self,
     par_loop,
     self->m_closure[0]
 );


 // Release cached frame if used for exception.
 if (frame_f287e99f6dc5ba1247b1f83ab54b394e == cache_frame_f287e99f6dc5ba1247b1f83ab54b394e) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_f287e99f6dc5ba1247b1f83ab54b394e);
     cache_frame_f287e99f6dc5ba1247b1f83ab54b394e = NULL;
 }

 assertFrameObject(frame_f287e99f6dc5ba1247b1f83ab54b394e);

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


static PyObject *impl_aiohttp$cookiejar$$$function__16___iter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[1];

  tmp_closure_1[0] = Nuitka_Cell_New0(par_self);

  tmp_return_value = Nuitka_Generator_NewEmpty(
      module_aiohttp$cookiejar,
      mod_consts[48],
#if PYTHON_VERSION >= 0x350
      mod_consts[135],
#endif
      codeobj_c8b381de9486f4a124ff05ac2f41868f,
      tmp_closure_1,
      1
  );

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



#if 0
struct aiohttp$cookiejar$$$function__16___iter__$$$genobj__1___iter___locals {

};
#endif

static PyObject *aiohttp$cookiejar$$$function__16___iter__$$$genobj__1___iter___context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 0
    // Heap access.

#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization


    // Actual generator function body.


    // Return statement need not be present.

    return NULL;

}

static PyObject *MAKE_GENERATOR_aiohttp$cookiejar$$$function__16___iter__$$$genobj__1___iter__(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        aiohttp$cookiejar$$$function__16___iter__$$$genobj__1___iter___context,
        module_aiohttp$cookiejar,
        mod_consts[48],
#if PYTHON_VERSION >= 0x350
        mod_consts[135],
#endif
        codeobj_c8b381de9486f4a124ff05ac2f41868f,
        closure,
        1,
#if 0
        sizeof(struct aiohttp$cookiejar$$$function__16___iter__$$$genobj__1___iter___locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$cookiejar$$$function__21_filter_cookies(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_request_url = python_pars[1];
 struct Nuitka_FrameObject *frame_c205457ae7fc40e052a3330c12eb672a;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_c205457ae7fc40e052a3330c12eb672a = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_c205457ae7fc40e052a3330c12eb672a)) {
     Py_XDECREF(cache_frame_c205457ae7fc40e052a3330c12eb672a);

#if _DEBUG_REFCOUNTS
     if (cache_frame_c205457ae7fc40e052a3330c12eb672a == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_c205457ae7fc40e052a3330c12eb672a = MAKE_FUNCTION_FRAME(tstate, codeobj_c205457ae7fc40e052a3330c12eb672a, module_aiohttp$cookiejar, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_c205457ae7fc40e052a3330c12eb672a->m_type_description == NULL);
 frame_c205457ae7fc40e052a3330c12eb672a = cache_frame_c205457ae7fc40e052a3330c12eb672a;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_c205457ae7fc40e052a3330c12eb672a);
 assert(Py_REFCNT(frame_c205457ae7fc40e052a3330c12eb672a) == 2);

 // Framed code:
 {
  PyObject *tmp_called_value_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[4]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 419;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  frame_c205457ae7fc40e052a3330c12eb672a->m_frame.f_lineno = 419;
  tmp_return_value = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 419;
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
     exception_tb = MAKE_TRACEBACK(frame_c205457ae7fc40e052a3330c12eb672a, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_c205457ae7fc40e052a3330c12eb672a->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_c205457ae7fc40e052a3330c12eb672a, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_c205457ae7fc40e052a3330c12eb672a,
     type_description_1,
     par_self,
     par_request_url
 );


 // Release cached frame if used for exception.
 if (frame_c205457ae7fc40e052a3330c12eb672a == cache_frame_c205457ae7fc40e052a3330c12eb672a) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_c205457ae7fc40e052a3330c12eb672a);
     cache_frame_c205457ae7fc40e052a3330c12eb672a = NULL;
 }

 assertFrameObject(frame_c205457ae7fc40e052a3330c12eb672a);

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
 CHECK_OBJECT(par_request_url);
 Py_DECREF(par_request_url);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_request_url);
 Py_DECREF(par_request_url);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__10_update_cookies(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__10_update_cookies,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        codeobj_74cb6ba5113f0f17517d8b79fd6f62ad,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__11_filter_cookies(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__11_filter_cookies,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_db8cd76f42953ef8fd40d8682d937437,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        mod_consts[94],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__11_filter_cookies$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__11_filter_cookies$$$function__1_lambda,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_b28b7fc4030e83ed0cd0d74c20a4abb2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__12__is_domain_match(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__12__is_domain_match,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[241],
#endif
        codeobj_509d05b571111cce88f7b256139b2990,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__13__is_path_match(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__13__is_path_match,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[243],
#endif
        codeobj_f40bf84260fd560d9f6536dea7e4ca72,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        mod_consts[97],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__14__parse_date(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__14__parse_date,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[246],
#endif
        codeobj_d3b5cd8f6db59afd3ffb3c6e09a2f38b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        mod_consts[133],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__15___init__(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__15___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[251],
#endif
        codeobj_f287e99f6dc5ba1247b1f83ab54b394e,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__16___iter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__16___iter__,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[135],
#endif
        codeobj_c8b381de9486f4a124ff05ac2f41868f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__17___len__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        mod_consts[252],
#endif
        codeobj_8f8a6312087c9b45c4af44c1af4da130,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );
 Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[98]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__18_clear(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_246fe956a49086788d7f06f88a6f4f8d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__19_clear_domain(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        mod_consts[254],
#endif
        codeobj_d84e92ce364be9ffe0ca8408a217f250,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__1___init__(PyObject *kw_defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__1___init__,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        mod_consts[215],
#endif
        codeobj_41d16d85e09b2a56a6bc1b1c3afa268f,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__20_update_cookies(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[235],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_4366881da94d07cb07fa41028888ff0f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__21_filter_cookies(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__21_filter_cookies,
        mod_consts[238],
#if PYTHON_VERSION >= 0x300
        mod_consts[256],
#endif
        codeobj_c205457ae7fc40e052a3330c12eb672a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__2_save(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__2_save,
        mod_consts[217],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        codeobj_8fe11d9b7daf6daadb282d516079f29a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__3_load(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__3_load,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[219],
#endif
        codeobj_df056008bbbb7cdfa4022771247188ff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__4_clear(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__4_clear,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[221],
#endif
        codeobj_80c125e36b9662e114d0770a25a61708,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__5_clear_domain(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__5_clear_domain,
        mod_consts[223],
#if PYTHON_VERSION >= 0x300
        mod_consts[224],
#endif
        codeobj_40ecb74037c3ba2007dd1a3a8756dde8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__5_clear_domain$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__5_clear_domain$$$function__1_lambda,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[44],
#endif
        codeobj_2be6246959b92382184da04a4650b024,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_aiohttp$cookiejar,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__6___iter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__6___iter__,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        mod_consts[49],
#endif
        codeobj_611650513e52a1e233872e335f979a77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__7___len__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__7___len__,
        mod_consts[226],
#if PYTHON_VERSION >= 0x300
        mod_consts[227],
#endif
        codeobj_41c1df449d170da566fa98172fe8d878,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__8__do_expiration(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__8__do_expiration,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[229],
#endif
        codeobj_0792e69200354015fd83a5f0ad04de6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__8__do_expiration$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[52],
#endif
        codeobj_65e8c6e6b3e76a3aa901c4a8a4041b08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_aiohttp$cookiejar,
        NULL,
        NULL,
        0
    );
 Nuitka_Function_EnableConstReturnFalse(result);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$cookiejar$$$function__9__expire_cookie(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$cookiejar$$$function__9__expire_cookie,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[233],
#endif
        codeobj_621149c3053c7ba1506c3a063038d0d8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$cookiejar,
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

static function_impl_code const function_table_aiohttp$cookiejar[] = {
 impl_aiohttp$cookiejar$$$function__5_clear_domain$$$function__1_lambda,
 impl_aiohttp$cookiejar$$$function__11_filter_cookies$$$function__1_lambda,
 impl_aiohttp$cookiejar$$$function__1___init__,
 impl_aiohttp$cookiejar$$$function__2_save,
 impl_aiohttp$cookiejar$$$function__3_load,
 impl_aiohttp$cookiejar$$$function__4_clear,
 impl_aiohttp$cookiejar$$$function__5_clear_domain,
 impl_aiohttp$cookiejar$$$function__6___iter__,
 impl_aiohttp$cookiejar$$$function__7___len__,
 impl_aiohttp$cookiejar$$$function__8__do_expiration,
 impl_aiohttp$cookiejar$$$function__9__expire_cookie,
 impl_aiohttp$cookiejar$$$function__10_update_cookies,
 impl_aiohttp$cookiejar$$$function__11_filter_cookies,
 impl_aiohttp$cookiejar$$$function__12__is_domain_match,
 impl_aiohttp$cookiejar$$$function__13__is_path_match,
 impl_aiohttp$cookiejar$$$function__14__parse_date,
 impl_aiohttp$cookiejar$$$function__15___init__,
 impl_aiohttp$cookiejar$$$function__16___iter__,
 impl_aiohttp$cookiejar$$$function__21_filter_cookies,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_aiohttp$cookiejar);

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
        module_aiohttp$cookiejar,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_aiohttp$cookiejar,
        sizeof(function_table_aiohttp$cookiejar) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiohttp$cookiejar(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiohttp$cookiejar");

    // Store the module for future use.
    module_aiohttp$cookiejar = module;

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
        PRINT_STRING("aiohttp$cookiejar: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("aiohttp$cookiejar: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.cookiejar" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initaiohttp$cookiejar\n");

    moduledict_aiohttp$cookiejar = MODULE_DICT(module_aiohttp$cookiejar);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiohttp$cookiejar,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiohttp$cookiejar,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[59]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiohttp$cookiejar,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$cookiejar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$cookiejar,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiohttp$cookiejar);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_aiohttp$cookiejar);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
 struct Nuitka_CellObject *outline_0_var___class__ = NULL;
 struct Nuitka_CellObject *outline_1_var___class__ = NULL;
 PyObject *tmp_class_creation_1__bases = NULL;
 PyObject *tmp_class_creation_1__bases_orig = NULL;
 PyObject *tmp_class_creation_1__class_decl_dict = NULL;
 PyObject *tmp_class_creation_1__metaclass = NULL;
 PyObject *tmp_class_creation_1__prepared = NULL;
 PyObject *tmp_class_creation_2__bases = NULL;
 PyObject *tmp_class_creation_2__bases_orig = NULL;
 PyObject *tmp_class_creation_2__class_decl_dict = NULL;
 PyObject *tmp_class_creation_2__metaclass = NULL;
 PyObject *tmp_class_creation_2__prepared = NULL;
 PyObject *tmp_import_from_1__module = NULL;
 PyObject *tmp_import_from_2__module = NULL;
 PyObject *tmp_import_from_3__module = NULL;
 PyObject *tmp_import_from_4__module = NULL;
 struct Nuitka_FrameObject *frame_5014fcd498cc40b5d577c201f169e806;
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
 int tmp_res;
 PyObject *locals_aiohttp$cookiejar$$$class__1_CookieJar_39 = NULL;
 PyObject *tmp_dictset_value;
 struct Nuitka_FrameObject *frame_ed5344eeec190f52f19f760271e0df6f_2;
 NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
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
 PyObject *exception_keeper_type_9;
 PyObject *exception_keeper_value_9;
 PyTracebackObject *exception_keeper_tb_9;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
 PyObject *locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392 = NULL;
 struct Nuitka_FrameObject *frame_4d5eeea7681acd6e3318da8bbf828b5b_3;
 NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module init code if any


    // Module code.
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = module_filename_obj;
  UPDATE_STRING_DICT0(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_2);
 }
 frame_5014fcd498cc40b5d577c201f169e806 = MAKE_MODULE_FRAME(codeobj_5014fcd498cc40b5d577c201f169e806, module_aiohttp$cookiejar);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_5014fcd498cc40b5d577c201f169e806);
 assert(Py_REFCNT(frame_5014fcd498cc40b5d577c201f169e806) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = module_filename_obj;
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[138]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[10], tmp_assattr_value_1);
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
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[138]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[138]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[139], tmp_assattr_value_2);
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
  UPDATE_STRING_DICT0(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[141];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = Py_None;
  tmp_level_value_1 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 1;
  tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_name_value_2;
  PyObject *tmp_globals_arg_value_2;
  PyObject *tmp_locals_arg_value_2;
  PyObject *tmp_fromlist_value_2;
  PyObject *tmp_level_value_2;
  tmp_name_value_2 = mod_consts[129];
  tmp_globals_arg_value_2 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_2 = Py_None;
  tmp_fromlist_value_2 = Py_None;
  tmp_level_value_2 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 2;
  tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
  if (tmp_assign_source_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 2;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_5);
 }
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_name_value_3;
  PyObject *tmp_globals_arg_value_3;
  PyObject *tmp_locals_arg_value_3;
  PyObject *tmp_fromlist_value_3;
  PyObject *tmp_level_value_3;
  tmp_name_value_3 = mod_consts[77];
  tmp_globals_arg_value_3 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_3 = Py_None;
  tmp_fromlist_value_3 = Py_None;
  tmp_level_value_3 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 3;
  tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
  if (tmp_assign_source_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_6);
 }
 {
  PyObject *tmp_assign_source_7;
  PyObject *tmp_name_value_4;
  PyObject *tmp_globals_arg_value_4;
  PyObject *tmp_locals_arg_value_4;
  PyObject *tmp_fromlist_value_4;
  PyObject *tmp_level_value_4;
  tmp_name_value_4 = mod_consts[142];
  tmp_globals_arg_value_4 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_4 = Py_None;
  tmp_fromlist_value_4 = Py_None;
  tmp_level_value_4 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 4;
  tmp_assign_source_7 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
  if (tmp_assign_source_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 4;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_7);
 }
 {
  PyObject *tmp_assign_source_8;
  tmp_assign_source_8 = IMPORT_HARD_OS();
  assert(!(tmp_assign_source_8 == NULL));
  UPDATE_STRING_DICT0(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_8);
 }
 {
  PyObject *tmp_assign_source_9;
  PyObject *tmp_name_value_5;
  PyObject *tmp_globals_arg_value_5;
  PyObject *tmp_locals_arg_value_5;
  PyObject *tmp_fromlist_value_5;
  PyObject *tmp_level_value_5;
  tmp_name_value_5 = mod_consts[16];
  tmp_globals_arg_value_5 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_5 = Py_None;
  tmp_fromlist_value_5 = Py_None;
  tmp_level_value_5 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 6;
  tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
  if (tmp_assign_source_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_9);
 }
 {
  PyObject *tmp_assign_source_10;
  PyObject *tmp_name_value_6;
  PyObject *tmp_globals_arg_value_6;
  PyObject *tmp_locals_arg_value_6;
  PyObject *tmp_fromlist_value_6;
  PyObject *tmp_level_value_6;
  tmp_name_value_6 = mod_consts[23];
  tmp_globals_arg_value_6 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_6 = Py_None;
  tmp_fromlist_value_6 = Py_None;
  tmp_level_value_6 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 7;
  tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_10);
 }
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_name_value_7;
  PyObject *tmp_globals_arg_value_7;
  PyObject *tmp_locals_arg_value_7;
  PyObject *tmp_fromlist_value_7;
  PyObject *tmp_level_value_7;
  tmp_name_value_7 = mod_consts[144];
  tmp_globals_arg_value_7 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_7 = Py_None;
  tmp_fromlist_value_7 = Py_None;
  tmp_level_value_7 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 8;
  tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_11);
 }
 {
  PyObject *tmp_assign_source_12;
  PyObject *tmp_name_value_8;
  PyObject *tmp_globals_arg_value_8;
  PyObject *tmp_locals_arg_value_8;
  PyObject *tmp_fromlist_value_8;
  PyObject *tmp_level_value_8;
  tmp_name_value_8 = mod_consts[13];
  tmp_globals_arg_value_8 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_8 = Py_None;
  tmp_fromlist_value_8 = Py_None;
  tmp_level_value_8 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 9;
  tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
  if (tmp_assign_source_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 9;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_12);
 }
 {
  PyObject *tmp_assign_source_13;
  PyObject *tmp_import_name_from_1;
  PyObject *tmp_name_value_9;
  PyObject *tmp_globals_arg_value_9;
  PyObject *tmp_locals_arg_value_9;
  PyObject *tmp_fromlist_value_9;
  PyObject *tmp_level_value_9;
  tmp_name_value_9 = mod_consts[145];
  tmp_globals_arg_value_9 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_9 = Py_None;
  tmp_fromlist_value_9 = mod_consts[146];
  tmp_level_value_9 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 10;
  tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
  if (tmp_import_name_from_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_1)) {
      tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_1,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[3],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[3]);
  }

  Py_DECREF(tmp_import_name_from_1);
  if (tmp_assign_source_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_13);
 }
 {
  PyObject *tmp_assign_source_14;
  PyObject *tmp_name_value_10;
  PyObject *tmp_globals_arg_value_10;
  PyObject *tmp_locals_arg_value_10;
  PyObject *tmp_fromlist_value_10;
  PyObject *tmp_level_value_10;
  tmp_name_value_10 = mod_consts[147];
  tmp_globals_arg_value_10 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_10 = Py_None;
  tmp_fromlist_value_10 = mod_consts[148];
  tmp_level_value_10 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 11;
  tmp_assign_source_14 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
  if (tmp_assign_source_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 11;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_1__module == NULL);
  tmp_import_from_1__module = tmp_assign_source_14;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_15;
  PyObject *tmp_import_name_from_2;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_2 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_2)) {
      tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_2,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[74],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[74]);
  }

  if (tmp_assign_source_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 11;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_15);
 }
 {
  PyObject *tmp_assign_source_16;
  PyObject *tmp_import_name_from_3;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_3 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_3)) {
      tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_3,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[56],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[56]);
  }

  if (tmp_assign_source_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 11;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_16);
 }
 {
  PyObject *tmp_assign_source_17;
  PyObject *tmp_import_name_from_4;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_4 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_4)) {
      tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_4,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[4],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[4]);
  }

  if (tmp_assign_source_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 11;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_17);
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
  PyObject *tmp_assign_source_18;
  PyObject *tmp_import_name_from_5;
  PyObject *tmp_name_value_11;
  PyObject *tmp_globals_arg_value_11;
  PyObject *tmp_locals_arg_value_11;
  PyObject *tmp_fromlist_value_11;
  PyObject *tmp_level_value_11;
  tmp_name_value_11 = mod_consts[149];
  tmp_globals_arg_value_11 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_11 = Py_None;
  tmp_fromlist_value_11 = mod_consts[150];
  tmp_level_value_11 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 12;
  tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
  if (tmp_import_name_from_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 12;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_5)) {
      tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_5,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[12],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[12]);
  }

  Py_DECREF(tmp_import_name_from_5);
  if (tmp_assign_source_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 12;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_18);
 }
 {
  PyObject *tmp_assign_source_19;
  tmp_assign_source_19 = IMPORT_HARD_TYPING();
  assert(!(tmp_assign_source_19 == NULL));
  assert(tmp_import_from_2__module == NULL);
  Py_INCREF(tmp_assign_source_19);
  tmp_import_from_2__module = tmp_assign_source_19;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_import_name_from_6;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_6 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_6)) {
      tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_6,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[151],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[151]);
  }

  if (tmp_assign_source_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_20);
 }
 {
  PyObject *tmp_assign_source_21;
  PyObject *tmp_import_name_from_7;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_7 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_7)) {
      tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_7,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[152],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[152]);
  }

  if (tmp_assign_source_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_21);
 }
 {
  PyObject *tmp_assign_source_22;
  PyObject *tmp_import_name_from_8;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_8 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_8)) {
      tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_8,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[153],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[153]);
  }

  if (tmp_assign_source_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_22);
 }
 {
  PyObject *tmp_assign_source_23;
  PyObject *tmp_import_name_from_9;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_9 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_9)) {
      tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_9,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[154],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[154]);
  }

  if (tmp_assign_source_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_23);
 }
 {
  PyObject *tmp_assign_source_24;
  PyObject *tmp_import_name_from_10;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_10 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_10)) {
      tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_10,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[155],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[155]);
  }

  if (tmp_assign_source_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_24);
 }
 {
  PyObject *tmp_assign_source_25;
  PyObject *tmp_import_name_from_11;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_11 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_11)) {
      tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_11,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[55],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[55]);
  }

  if (tmp_assign_source_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_25);
 }
 {
  PyObject *tmp_assign_source_26;
  PyObject *tmp_import_name_from_12;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_12 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_12)) {
      tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_12,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[156],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[156]);
  }

  if (tmp_assign_source_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_26);
 }
 {
  PyObject *tmp_assign_source_27;
  PyObject *tmp_import_name_from_13;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_13 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_13)) {
      tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_13,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[157],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[157]);
  }

  if (tmp_assign_source_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_27);
 }
 {
  PyObject *tmp_assign_source_28;
  PyObject *tmp_import_name_from_14;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_14 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_14)) {
      tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_14,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[158],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[158]);
  }

  if (tmp_assign_source_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_28);
 }
 {
  PyObject *tmp_assign_source_29;
  PyObject *tmp_import_name_from_15;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_15 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_15)) {
      tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_15,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[159],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[159]);
  }

  if (tmp_assign_source_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_29);
 }
 {
  PyObject *tmp_assign_source_30;
  PyObject *tmp_import_name_from_16;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_16 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_16)) {
      tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_16,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[89],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[89]);
  }

  if (tmp_assign_source_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_30);
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
  PyObject *tmp_assign_source_31;
  PyObject *tmp_import_name_from_17;
  PyObject *tmp_name_value_12;
  PyObject *tmp_globals_arg_value_12;
  PyObject *tmp_locals_arg_value_12;
  PyObject *tmp_fromlist_value_12;
  PyObject *tmp_level_value_12;
  tmp_name_value_12 = mod_consts[160];
  tmp_globals_arg_value_12 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_12 = Py_None;
  tmp_fromlist_value_12 = mod_consts[161];
  tmp_level_value_12 = mod_consts[98];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 27;
  tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
  if (tmp_import_name_from_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_17)) {
      tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_17,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[9],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[9]);
  }

  Py_DECREF(tmp_import_name_from_17);
  if (tmp_assign_source_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_31);
 }
 {
  PyObject *tmp_assign_source_32;
  PyObject *tmp_name_value_13;
  PyObject *tmp_globals_arg_value_13;
  PyObject *tmp_locals_arg_value_13;
  PyObject *tmp_fromlist_value_13;
  PyObject *tmp_level_value_13;
  tmp_name_value_13 = mod_consts[162];
  tmp_globals_arg_value_13 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_13 = Py_None;
  tmp_fromlist_value_13 = mod_consts[163];
  tmp_level_value_13 = mod_consts[41];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 29;
  tmp_assign_source_32 = IMPORT_MODULE5(tstate, tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
  if (tmp_assign_source_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 29;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_3__module == NULL);
  tmp_import_from_3__module = tmp_assign_source_32;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_33;
  PyObject *tmp_import_name_from_18;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_18 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_18)) {
      tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_18,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[164],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[164]);
  }

  if (tmp_assign_source_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 29;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_33);
 }
 {
  PyObject *tmp_assign_source_34;
  PyObject *tmp_import_name_from_19;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_19 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_19)) {
      tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_19,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[165],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[165]);
  }

  if (tmp_assign_source_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 29;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_34);
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
  PyObject *tmp_assign_source_35;
  PyObject *tmp_import_name_from_20;
  PyObject *tmp_name_value_14;
  PyObject *tmp_globals_arg_value_14;
  PyObject *tmp_locals_arg_value_14;
  PyObject *tmp_fromlist_value_14;
  PyObject *tmp_level_value_14;
  tmp_name_value_14 = mod_consts[166];
  tmp_globals_arg_value_14 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_14 = Py_None;
  tmp_fromlist_value_14 = mod_consts[167];
  tmp_level_value_14 = mod_consts[41];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 30;
  tmp_import_name_from_20 = IMPORT_MODULE5(tstate, tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
  if (tmp_import_name_from_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 30;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_20)) {
      tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_20,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[54],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[54]);
  }

  Py_DECREF(tmp_import_name_from_20);
  if (tmp_assign_source_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 30;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_35);
 }
 {
  PyObject *tmp_assign_source_36;
  PyObject *tmp_name_value_15;
  PyObject *tmp_globals_arg_value_15;
  PyObject *tmp_locals_arg_value_15;
  PyObject *tmp_fromlist_value_15;
  PyObject *tmp_level_value_15;
  tmp_name_value_15 = mod_consts[168];
  tmp_globals_arg_value_15 = (PyObject *)moduledict_aiohttp$cookiejar;
  tmp_locals_arg_value_15 = Py_None;
  tmp_fromlist_value_15 = mod_consts[169];
  tmp_level_value_15 = mod_consts[41];
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 31;
  tmp_assign_source_36 = IMPORT_MODULE5(tstate, tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
  if (tmp_assign_source_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 31;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_4__module == NULL);
  tmp_import_from_4__module = tmp_assign_source_36;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_37;
  PyObject *tmp_import_name_from_21;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_21 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_21)) {
      tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_21,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[170],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[170]);
  }

  if (tmp_assign_source_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 31;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_37);
 }
 {
  PyObject *tmp_assign_source_38;
  PyObject *tmp_import_name_from_22;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_22 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_22)) {
      tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_22,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[171],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[171]);
  }

  if (tmp_assign_source_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 31;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_38);
 }
 {
  PyObject *tmp_assign_source_39;
  PyObject *tmp_import_name_from_23;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_23 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_23)) {
      tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_23,
          (PyObject *)moduledict_aiohttp$cookiejar,
          mod_consts[172],
          mod_consts[98]
      );
  } else {
      tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[172]);
  }

  if (tmp_assign_source_39 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 31;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_39);
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
  PyObject *tmp_assign_source_40;
  tmp_assign_source_40 = mod_consts[173];
  UPDATE_STRING_DICT0(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_40);
 }
 {
  PyObject *tmp_assign_source_41;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_subscript_value_1;
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[159]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[159]);
  }

  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_1 = mod_consts[175];
  tmp_assign_source_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
  if (tmp_assign_source_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_41);
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_42;
  PyObject *tmp_tuple_element_1;
  tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[164]);

  if (unlikely(tmp_tuple_element_1 == NULL)) {
      tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
  }

  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
  }
  tmp_assign_source_42 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_42, 0, tmp_tuple_element_1);
  assert(tmp_class_creation_1__bases_orig == NULL);
  tmp_class_creation_1__bases_orig = tmp_assign_source_42;
 }
 {
  PyObject *tmp_assign_source_43;
  PyObject *tmp_dircall_arg1_1;
  CHECK_OBJECT(tmp_class_creation_1__bases_orig);
  tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
  Py_INCREF(tmp_dircall_arg1_1);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
      tmp_assign_source_43 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
  }
  assert(tmp_class_creation_1__bases == NULL);
  tmp_class_creation_1__bases = tmp_assign_source_43;
 }
 {
  PyObject *tmp_assign_source_44;
  tmp_assign_source_44 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__class_decl_dict == NULL);
  tmp_class_creation_1__class_decl_dict = tmp_assign_source_44;
 }
 {
  PyObject *tmp_assign_source_45;
  PyObject *tmp_metaclass_value_1;
  nuitka_bool tmp_condition_result_1;
  int tmp_truth_name_1;
  PyObject *tmp_type_arg_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_subscript_value_2;
  PyObject *tmp_bases_value_1;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
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
  tmp_subscript_value_2 = mod_consts[98];
  tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 0);
  if (tmp_type_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
  }
  tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
  Py_DECREF(tmp_type_arg_1);
  if (tmp_metaclass_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_1);
  condexpr_end_1:;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_bases_value_1 = tmp_class_creation_1__bases;
  tmp_assign_source_45 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
  Py_DECREF(tmp_metaclass_value_1);
  if (tmp_assign_source_45 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
  }
  assert(tmp_class_creation_1__metaclass == NULL);
  tmp_class_creation_1__metaclass = tmp_assign_source_45;
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_3 = tmp_class_creation_1__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_3, mod_consts[177]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
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
  PyObject *tmp_assign_source_46;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_args_value_1;
  PyObject *tmp_tuple_element_2;
  PyObject *tmp_kwargs_value_1;
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_4 = tmp_class_creation_1__metaclass;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[177]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
  }
  tmp_tuple_element_2 = mod_consts[178];
  tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_tuple_element_2 = tmp_class_creation_1__bases;
  PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
  CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
  tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 39;
  tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_value_1);
  if (tmp_assign_source_46 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
  }
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_46;
 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(tmp_class_creation_1__prepared);
  tmp_expression_value_5 = tmp_class_creation_1__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_5, mod_consts[179]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
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
  PyObject *tmp_name_value_16;
  PyObject *tmp_default_value_1;
  tmp_raise_type_1 = PyExc_TypeError;
  tmp_mod_expr_left_1 = mod_consts[180];
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_6 = tmp_class_creation_1__metaclass;
  tmp_name_value_16 = mod_consts[181];
  tmp_default_value_1 = mod_consts[182];
  tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_6, tmp_name_value_16, tmp_default_value_1);
  if (tmp_tuple_element_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
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
   tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[181]);
   Py_DECREF(tmp_expression_value_7);
   if (tmp_tuple_element_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 39;

       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_mod_expr_right_1);
  goto try_except_handler_5;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
  Py_DECREF(tmp_mod_expr_right_1);
  if (tmp_raise_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_5;
  }
  exception_type = tmp_raise_type_1;
  Py_INCREF(tmp_raise_type_1);
  exception_value = tmp_raise_value_1;
  exception_lineno = 39;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_5;
 }
 branch_no_2:;
 goto branch_end_1;
 branch_no_1:;
 {
  PyObject *tmp_assign_source_47;
  tmp_assign_source_47 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_47;
 }
 branch_end_1:;
 {
  PyObject *tmp_assign_source_48;
  outline_0_var___class__ = Nuitka_Cell_NewEmpty();
  {
   PyObject *tmp_set_locals_1;
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_set_locals_1 = tmp_class_creation_1__prepared;
   locals_aiohttp$cookiejar$$$class__1_CookieJar_39 = tmp_set_locals_1;
   Py_INCREF(tmp_set_locals_1);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[183];
  tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[184], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_7;
  }
  tmp_dictset_value = mod_consts[185];
  tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[136], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_7;
  }
  tmp_dictset_value = mod_consts[178];
  tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[186], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_7;
  }
  frame_ed5344eeec190f52f19f760271e0df6f_2 = MAKE_CLASS_FRAME(tstate, codeobj_ed5344eeec190f52f19f760271e0df6f, module_aiohttp$cookiejar, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_ed5344eeec190f52f19f760271e0df6f_2);
  assert(Py_REFCNT(frame_ed5344eeec190f52f19f760271e0df6f_2) == 2);

  // Framed code:
  {
   PyObject *tmp_called_instance_1;
   tmp_called_instance_1 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[144]);

   if (tmp_called_instance_1 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[144]);

     if (unlikely(tmp_called_instance_1 == NULL)) {
         tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
     }

     if (tmp_called_instance_1 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 42;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_called_instance_1);
       } else {
           goto frame_exception_exit_2;
       }
   }

   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 42;
   tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
       tstate,
       tmp_called_instance_1,
       mod_consts[187],
       PyTuple_GET_ITEM(mod_consts[188], 0)
   );

   Py_DECREF(tmp_called_instance_1);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 42;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[99], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 42;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_called_instance_2;
   tmp_called_instance_2 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[144]);

   if (tmp_called_instance_2 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[144]);

     if (unlikely(tmp_called_instance_2 == NULL)) {
         tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
     }

     if (tmp_called_instance_2 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 47;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_called_instance_2);
       } else {
           goto frame_exception_exit_2;
       }
   }

   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 47;
   tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
       tstate,
       tmp_called_instance_2,
       mod_consts[187],
       PyTuple_GET_ITEM(mod_consts[189], 0)
   );

   Py_DECREF(tmp_called_instance_2);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 47;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[105], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 47;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_called_instance_3;
   tmp_called_instance_3 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[144]);

   if (tmp_called_instance_3 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[144]);

     if (unlikely(tmp_called_instance_3 == NULL)) {
         tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
     }

     if (tmp_called_instance_3 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 49;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_called_instance_3);
       } else {
           goto frame_exception_exit_2;
       }
   }

   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 49;
   tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
       tstate,
       tmp_called_instance_3,
       mod_consts[187],
       PyTuple_GET_ITEM(mod_consts[190], 0)
   );

   Py_DECREF(tmp_called_instance_3);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 49;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[109], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 49;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_called_value_2;
   PyObject *tmp_expression_value_8;
   PyObject *tmp_args_element_value_1;
   PyObject *tmp_args_element_value_2;
   PyObject *tmp_expression_value_9;
   tmp_expression_value_8 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[144]);

   if (tmp_expression_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[144]);

     if (unlikely(tmp_expression_value_8 == NULL)) {
         tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
     }

     if (tmp_expression_value_8 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 51;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_8);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[187]);
   Py_DECREF(tmp_expression_value_8);
   if (tmp_called_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 51;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_args_element_value_1 = mod_consts[191];
   tmp_expression_value_9 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[144]);

   if (tmp_expression_value_9 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[144]);

     if (unlikely(tmp_expression_value_9 == NULL)) {
         tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
     }

     if (tmp_expression_value_9 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_2);

      exception_lineno = 53;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_9);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[192]);
   Py_DECREF(tmp_expression_value_9);
   if (tmp_args_element_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_2);

    exception_lineno = 53;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 51;
   {
       PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
       tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
   }

   Py_DECREF(tmp_called_value_2);
   Py_DECREF(tmp_args_element_value_2);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 51;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[111], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 51;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_called_instance_4;
   tmp_called_instance_4 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[144]);

   if (tmp_called_instance_4 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[144]);

     if (unlikely(tmp_called_instance_4 == NULL)) {
         tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
     }

     if (tmp_called_instance_4 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 56;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_called_instance_4);
       } else {
           goto frame_exception_exit_2;
       }
   }

   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 56;
   tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
       tstate,
       tmp_called_instance_4,
       mod_consts[187],
       PyTuple_GET_ITEM(mod_consts[193], 0)
   );

   Py_DECREF(tmp_called_instance_4);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 56;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[114], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 56;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_sub_expr_left_1;
   PyObject *tmp_sub_expr_right_1;
   nuitka_bool tmp_condition_result_4;
   PyObject *tmp_called_value_3;
   PyObject *tmp_args_element_value_3;
   PyObject *tmp_called_instance_5;
   PyObject *tmp_called_value_4;
   PyObject *tmp_expression_value_10;
   PyObject *tmp_expression_value_11;
   PyObject *tmp_expression_value_12;
   PyObject *tmp_kw_call_value_0_1;
   PyObject *tmp_expression_value_13;
   PyObject *tmp_expression_value_14;
   PyObject *tmp_int_arg_1;
   PyObject *tmp_called_instance_6;
   PyObject *tmp_called_value_5;
   PyObject *tmp_expression_value_15;
   PyObject *tmp_expression_value_16;
   PyObject *tmp_expression_value_17;
   PyObject *tmp_kw_call_value_0_2;
   PyObject *tmp_expression_value_18;
   PyObject *tmp_expression_value_19;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[194]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
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
   tmp_called_value_3 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[194]);

   if (unlikely(tmp_called_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[194], &exception_type, &exception_value);

    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }

   if (tmp_called_value_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_expression_value_12 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[142]);

   if (tmp_expression_value_12 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[142]);

     if (unlikely(tmp_expression_value_12 == NULL)) {
         tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
     }

     if (tmp_expression_value_12 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_3);

      exception_lineno = 61;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_12);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[142]);
   Py_DECREF(tmp_expression_value_12);
   if (tmp_expression_value_11 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_3);

    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[195]);
   Py_DECREF(tmp_expression_value_11);
   if (tmp_expression_value_10 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_3);

    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[196]);
   Py_DECREF(tmp_expression_value_10);
   if (tmp_called_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_3);

    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_expression_value_14 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[142]);

   if (tmp_expression_value_14 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[142]);

     if (unlikely(tmp_expression_value_14 == NULL)) {
         tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
     }

     if (tmp_expression_value_14 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_3);
      Py_DECREF(tmp_called_value_4);

      exception_lineno = 61;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_14);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[197]);
   Py_DECREF(tmp_expression_value_14);
   if (tmp_expression_value_13 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_3);
    Py_DECREF(tmp_called_value_4);

    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[198]);
   Py_DECREF(tmp_expression_value_13);
   if (tmp_kw_call_value_0_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_3);
    Py_DECREF(tmp_called_value_4);

    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 61;
   {
       PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

       tmp_called_instance_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[199]);
   }

   Py_DECREF(tmp_called_value_4);
   Py_DECREF(tmp_kw_call_value_0_1);
   if (tmp_called_instance_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_3);

    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 61;
   tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[200]);
   Py_DECREF(tmp_called_instance_5);
   if (tmp_args_element_value_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_3);

    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 61;
   tmp_sub_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
   Py_DECREF(tmp_called_value_3);
   Py_DECREF(tmp_args_element_value_3);
   if (tmp_sub_expr_left_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   goto condexpr_end_2;
   condexpr_false_2:;
   tmp_expression_value_17 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[142]);

   if (tmp_expression_value_17 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[142]);

     if (unlikely(tmp_expression_value_17 == NULL)) {
         tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
     }

     if (tmp_expression_value_17 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 61;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_17);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[142]);
   Py_DECREF(tmp_expression_value_17);
   if (tmp_expression_value_16 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[195]);
   Py_DECREF(tmp_expression_value_16);
   if (tmp_expression_value_15 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[196]);
   Py_DECREF(tmp_expression_value_15);
   if (tmp_called_value_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_expression_value_19 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[142]);

   if (tmp_expression_value_19 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[142]);

     if (unlikely(tmp_expression_value_19 == NULL)) {
         tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
     }

     if (tmp_expression_value_19 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_5);

      exception_lineno = 61;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_19);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[197]);
   Py_DECREF(tmp_expression_value_19);
   if (tmp_expression_value_18 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_5);

    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[198]);
   Py_DECREF(tmp_expression_value_18);
   if (tmp_kw_call_value_0_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_5);

    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 61;
   {
       PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

       tmp_called_instance_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[199]);
   }

   Py_DECREF(tmp_called_value_5);
   Py_DECREF(tmp_kw_call_value_0_2);
   if (tmp_called_instance_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 61;
   tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[200]);
   Py_DECREF(tmp_called_instance_6);
   if (tmp_int_arg_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_sub_expr_left_1 = PyNumber_Int(tmp_int_arg_1);
   Py_DECREF(tmp_int_arg_1);
   if (tmp_sub_expr_left_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   condexpr_end_2:;
   tmp_sub_expr_right_1 = mod_consts[41];
   tmp_dictset_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
   Py_DECREF(tmp_sub_expr_left_1);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[42], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 60;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  // Tried code:
  {
   PyObject *tmp_called_value_6;
   PyObject *tmp_expression_value_20;
   PyObject *tmp_call_result_1;
   PyObject *tmp_args_element_value_4;
   PyObject *tmp_called_value_7;
   PyObject *tmp_expression_value_21;
   PyObject *tmp_args_element_value_5;
   tmp_expression_value_20 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[129]);

   if (tmp_expression_value_20 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[129]);

     if (unlikely(tmp_expression_value_20 == NULL)) {
         tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
     }

     if (tmp_expression_value_20 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 64;
      type_description_2 = "c";
         goto try_except_handler_8;
     }
           Py_INCREF(tmp_expression_value_20);
       } else {
           goto try_except_handler_8;
       }
   }

   tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[130]);
   Py_DECREF(tmp_expression_value_20);
   if (tmp_called_value_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 64;
    type_description_2 = "c";
       goto try_except_handler_8;
   }
   tmp_expression_value_21 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[13]);

   if (tmp_expression_value_21 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[13]);

     if (unlikely(tmp_expression_value_21 == NULL)) {
         tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
     }

     if (tmp_expression_value_21 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_6);

      exception_lineno = 64;
      type_description_2 = "c";
         goto try_except_handler_8;
     }
           Py_INCREF(tmp_expression_value_21);
       } else {
           goto try_except_handler_8;
       }
   }

   tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[201]);
   Py_DECREF(tmp_expression_value_21);
   if (tmp_called_value_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_6);

    exception_lineno = 64;
    type_description_2 = "c";
       goto try_except_handler_8;
   }
   tmp_args_element_value_5 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[42]);

   if (unlikely(tmp_args_element_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
    Py_DECREF(tmp_called_value_6);
    Py_DECREF(tmp_called_value_7);
   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[42], &exception_type, &exception_value);

    exception_lineno = 64;
    type_description_2 = "c";
       goto try_except_handler_8;
   }

   if (tmp_args_element_value_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_6);
    Py_DECREF(tmp_called_value_7);

    exception_lineno = 64;
    type_description_2 = "c";
       goto try_except_handler_8;
   }
   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 64;
   tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
   Py_DECREF(tmp_called_value_7);
   Py_DECREF(tmp_args_element_value_5);
   if (tmp_args_element_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_6);

    exception_lineno = 64;
    type_description_2 = "c";
       goto try_except_handler_8;
   }
   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 64;
   tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_4);
   Py_DECREF(tmp_called_value_6);
   Py_DECREF(tmp_args_element_value_4);
   if (tmp_call_result_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 64;
    type_description_2 = "c";
       goto try_except_handler_8;
   }
   Py_DECREF(tmp_call_result_1);
  }
  goto try_end_5;
  // Exception handler code:
  try_except_handler_8:;
  exception_keeper_type_5 = exception_type;
  exception_keeper_value_5 = exception_value;
  exception_keeper_tb_5 = exception_tb;
  exception_keeper_lineno_5 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Preserve existing published exception id 1.
  exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

  if (exception_keeper_tb_5 == NULL) {
      exception_keeper_tb_5 = MAKE_TRACEBACK(frame_ed5344eeec190f52f19f760271e0df6f_2, exception_keeper_lineno_5);
  } else if (exception_keeper_lineno_5 != 0) {
      exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_ed5344eeec190f52f19f760271e0df6f_2, exception_keeper_lineno_5);
  }

  PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
  // Tried code:
  {
   bool tmp_condition_result_5;
   PyObject *tmp_cmp_expr_left_1;
   PyObject *tmp_cmp_expr_right_1;
   PyObject *tmp_tuple_element_4;
   tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
   tmp_tuple_element_4 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[202]);

   if (tmp_tuple_element_4 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_4 = PyExc_OSError;
           Py_INCREF(tmp_tuple_element_4);
       } else {
           goto try_except_handler_9;
       }
   }

   tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
   PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_4);
   tmp_tuple_element_4 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[203]);

   if (tmp_tuple_element_4 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_4 = PyExc_ValueError;
           Py_INCREF(tmp_tuple_element_4);
       } else {
           goto try_except_handler_9;
       }
   }

   PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_4);
   tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
   Py_DECREF(tmp_cmp_expr_right_1);
   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 65;
    type_description_2 = "c";
       goto try_except_handler_9;
   }
   tmp_condition_result_5 = (tmp_res != 0) ? true : false;
   if (tmp_condition_result_5 != false) {
       goto branch_yes_3;
   } else {
       goto branch_no_3;
   }
  }
  branch_yes_3:;
  {
   PyObject *tmp_called_instance_7;
   tmp_called_instance_7 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[129]);

   if (tmp_called_instance_7 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[129]);

     if (unlikely(tmp_called_instance_7 == NULL)) {
         tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
     }

     if (tmp_called_instance_7 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 69;
      type_description_2 = "c";
         goto try_except_handler_9;
     }
           Py_INCREF(tmp_called_instance_7);
       } else {
           goto try_except_handler_9;
       }
   }

   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 69;
   tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
       tstate,
       tmp_called_instance_7,
       mod_consts[130],
       PyTuple_GET_ITEM(mod_consts[204], 0)
   );

   Py_DECREF(tmp_called_instance_7);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 69;
    type_description_2 = "c";
       goto try_except_handler_9;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[42], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 69;
    type_description_2 = "c";
       goto try_except_handler_9;
   }
  }
  goto branch_end_3;
  branch_no_3:;
  {
   bool tmp_condition_result_6;
   PyObject *tmp_cmp_expr_left_2;
   PyObject *tmp_cmp_expr_right_2;
   tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
   tmp_cmp_expr_right_2 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[205]);

   if (tmp_cmp_expr_right_2 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_cmp_expr_right_2 = PyExc_OverflowError;
           Py_INCREF(tmp_cmp_expr_right_2);
       } else {
           goto try_except_handler_9;
       }
   }

   tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
   Py_DECREF(tmp_cmp_expr_right_2);
   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 70;
    type_description_2 = "c";
       goto try_except_handler_9;
   }
   tmp_condition_result_6 = (tmp_res != 0) ? true : false;
   if (tmp_condition_result_6 != false) {
       goto branch_yes_4;
   } else {
       goto branch_no_4;
   }
  }
  branch_yes_4:;
  tmp_dictset_value = mod_consts[206];
  tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[42], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 72;
   type_description_2 = "c";
      goto try_except_handler_9;
  }
  goto branch_end_4;
  branch_no_4:;
  tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
  if (unlikely(tmp_result == false)) {
      exception_lineno = 63;
  }

  if (exception_tb && exception_tb->tb_frame == &frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame) frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = exception_tb->tb_lineno;
  type_description_2 = "c";
  goto try_except_handler_9;
  branch_end_4:;
  branch_end_3:;
  goto try_end_6;
  // Exception handler code:
  try_except_handler_9:;
  exception_keeper_type_6 = exception_type;
  exception_keeper_value_6 = exception_value;
  exception_keeper_tb_6 = exception_tb;
  exception_keeper_lineno_6 = exception_lineno;
  exception_type = NULL;
  exception_value = NULL;
  exception_tb = NULL;
  exception_lineno = 0;

  // Restore previous exception id 1.
  SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

  // Re-raise.
  exception_type = exception_keeper_type_6;
  exception_value = exception_keeper_value_6;
  exception_tb = exception_keeper_tb_6;
  exception_lineno = exception_keeper_lineno_6;

  goto frame_exception_exit_2;
  // End of try:
  try_end_6:;
  // Restore previous exception id 1.
  SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

  goto try_end_5;
  NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
  return NULL;
  // End of try:
  try_end_5:;
  {
   PyObject *tmp_sub_expr_left_2;
   PyObject *tmp_sub_expr_right_2;
   tmp_sub_expr_left_2 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[42]);

   if (unlikely(tmp_sub_expr_left_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[42], &exception_type, &exception_value);

    exception_lineno = 74;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }

   if (tmp_sub_expr_left_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 74;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_sub_expr_right_2 = mod_consts[41];
   tmp_dictset_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
   Py_DECREF(tmp_sub_expr_left_2);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 74;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[40], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 74;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_kw_defaults_1;
   PyObject *tmp_annotations_1;
   PyObject *tmp_dict_key_1;
   PyObject *tmp_dict_value_1;
   struct Nuitka_CellObject *tmp_closure_1[1];
   tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts[207]);
   tmp_dict_key_1 = mod_consts[208];
   tmp_dict_value_1 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[209]);

   if (tmp_dict_value_1 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_1 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_1);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_1 = _PyDict_NewPresized( 5 );
   {
    PyObject *tmp_expression_value_22;
    PyObject *tmp_subscript_value_3;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_expression_value_24;
    PyObject *tmp_subscript_value_5;
    PyObject *tmp_expression_value_25;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[210];
    tmp_dict_value_1 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[209]);

    if (tmp_dict_value_1 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_1 = (PyObject *)&PyBool_Type;
            Py_INCREF(tmp_dict_value_1);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[211];
    tmp_expression_value_22 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[159]);

    if (tmp_expression_value_22 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[159]);

      if (unlikely(tmp_expression_value_22 == NULL)) {
          tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[159]);
      }

      if (tmp_expression_value_22 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 81;
       type_description_2 = "c";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_expression_value_22);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_tuple_element_5 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[172]);

    if (tmp_tuple_element_5 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[172]);

      if (unlikely(tmp_tuple_element_5 == NULL)) {
          tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
      }

      if (tmp_tuple_element_5 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_22);

       exception_lineno = 81;
       type_description_2 = "c";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_tuple_element_5);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 3);
    {
     PyObject *tmp_expression_value_23;
     PyObject *tmp_subscript_value_4;
     PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_5);
     tmp_expression_value_23 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[155]);

     if (tmp_expression_value_23 == NULL) {
         if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
       tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[155]);

       if (unlikely(tmp_expression_value_23 == NULL)) {
           tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[155]);
       }

       if (tmp_expression_value_23 == NULL) {
           assert(HAS_ERROR_OCCURRED(tstate));

           FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 81;
        type_description_2 = "c";
           goto tuple_build_exception_2;
       }
             Py_INCREF(tmp_expression_value_23);
         } else {
             goto tuple_build_exception_2;
         }
     }

     tmp_subscript_value_4 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[172]);

     if (tmp_subscript_value_4 == NULL) {
         if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
       tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[172]);

       if (unlikely(tmp_subscript_value_4 == NULL)) {
           tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[172]);
       }

       if (tmp_subscript_value_4 == NULL) {
           assert(HAS_ERROR_OCCURRED(tstate));

           FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
        Py_DECREF(tmp_expression_value_23);

        exception_lineno = 81;
        type_description_2 = "c";
           goto tuple_build_exception_2;
       }
             Py_INCREF(tmp_subscript_value_4);
         } else {
             goto tuple_build_exception_2;
         }
     }

     tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_4);
     Py_DECREF(tmp_expression_value_23);
     Py_DECREF(tmp_subscript_value_4);
     if (tmp_tuple_element_5 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 81;
      type_description_2 = "c";
         goto tuple_build_exception_2;
     }
     PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_5);
     tmp_tuple_element_5 = Py_None;
     PyTuple_SET_ITEM0(tmp_subscript_value_3, 2, tmp_tuple_element_5);
    }
    goto tuple_build_noexception_2;
    // Exception handling pass through code for tuple_build:
    tuple_build_exception_2:;
    Py_DECREF(tmp_expression_value_22);
    Py_DECREF(tmp_subscript_value_3);
    goto dict_build_exception_1;
    // Finished with no exception for tuple_build:
    tuple_build_noexception_2:;
    tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_3);
    Py_DECREF(tmp_expression_value_22);
    Py_DECREF(tmp_subscript_value_3);
    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 81;
     type_description_2 = "c";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[212];
    tmp_expression_value_24 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[156]);

    if (tmp_expression_value_24 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[156]);

      if (unlikely(tmp_expression_value_24 == NULL)) {
          tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
      }

      if (tmp_expression_value_24 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 82;
       type_description_2 = "c";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_expression_value_24);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_expression_value_25 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[141]);

    if (tmp_expression_value_25 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[141]);

      if (unlikely(tmp_expression_value_25 == NULL)) {
          tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
      }

      if (tmp_expression_value_25 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_24);

       exception_lineno = 82;
       type_description_2 = "c";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_expression_value_25);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_subscript_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[213]);
    Py_DECREF(tmp_expression_value_25);
    if (tmp_subscript_value_5 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
     Py_DECREF(tmp_expression_value_24);

     exception_lineno = 82;
     type_description_2 = "c";
        goto dict_build_exception_1;
    }
    tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_5);
    Py_DECREF(tmp_expression_value_24);
    Py_DECREF(tmp_subscript_value_5);
    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 82;
     type_description_2 = "c";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[214];
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

   tmp_closure_1[0] = outline_0_var___class__;
   Py_INCREF(tmp_closure_1[0]);

   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__1___init__(tmp_kw_defaults_1, tmp_annotations_1, tmp_closure_1);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[1], tmp_dictset_value);
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
   PyObject *tmp_annotations_2;
   PyObject *tmp_dict_key_2;
   PyObject *tmp_dict_value_2;
   tmp_dict_key_2 = mod_consts[216];
   tmp_dict_value_2 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[171]);

   if (tmp_dict_value_2 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[171]);

     if (unlikely(tmp_dict_value_2 == NULL)) {
         tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
     }

     if (tmp_dict_value_2 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 106;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_dict_value_2);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_2 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
   Py_DECREF(tmp_dict_value_2);
   assert(!(tmp_res != 0));
   tmp_dict_key_2 = mod_consts[214];
   tmp_dict_value_2 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__2_save(tmp_annotations_2);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[217], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 106;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_3;
   PyObject *tmp_dict_key_3;
   PyObject *tmp_dict_value_3;
   tmp_dict_key_3 = mod_consts[216];
   tmp_dict_value_3 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[171]);

   if (tmp_dict_value_3 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[171]);

     if (unlikely(tmp_dict_value_3 == NULL)) {
         tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[171]);
     }

     if (tmp_dict_value_3 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 111;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_dict_value_3);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_3 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
   Py_DECREF(tmp_dict_value_3);
   assert(!(tmp_res != 0));
   tmp_dict_key_3 = mod_consts[214];
   tmp_dict_value_3 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__3_load(tmp_annotations_3);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[28], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 111;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_defaults_1;
   PyObject *tmp_annotations_4;
   PyObject *tmp_dict_key_4;
   PyObject *tmp_dict_value_4;
   PyObject *tmp_expression_value_26;
   PyObject *tmp_subscript_value_6;
   tmp_defaults_1 = mod_consts[220];
   tmp_dict_key_4 = mod_consts[33];
   tmp_expression_value_26 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[156]);

   if (tmp_expression_value_26 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[156]);

     if (unlikely(tmp_expression_value_26 == NULL)) {
         tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
     }

     if (tmp_expression_value_26 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 116;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_expression_value_26);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_subscript_value_6 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[165]);

   if (tmp_subscript_value_6 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[165]);

     if (unlikely(tmp_subscript_value_6 == NULL)) {
         tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
     }

     if (tmp_subscript_value_6 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_expression_value_26);

      exception_lineno = 116;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_subscript_value_6);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_6);
   Py_DECREF(tmp_expression_value_26);
   Py_DECREF(tmp_subscript_value_6);
   if (tmp_dict_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 116;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_annotations_4 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
   Py_DECREF(tmp_dict_value_4);
   assert(!(tmp_res != 0));
   tmp_dict_key_4 = mod_consts[214];
   tmp_dict_value_4 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
   assert(!(tmp_res != 0));
   Py_INCREF(tmp_defaults_1);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__4_clear(tmp_defaults_1, tmp_annotations_4);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[29], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 116;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_5;
   PyObject *tmp_dict_key_5;
   PyObject *tmp_dict_value_5;
   tmp_dict_key_5 = mod_consts[46];
   tmp_dict_value_5 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_5 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_5 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_5);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_5 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
   Py_DECREF(tmp_dict_value_5);
   assert(!(tmp_res != 0));
   tmp_dict_key_5 = mod_consts[214];
   tmp_dict_value_5 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__5_clear_domain(tmp_annotations_5);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[223], tmp_dictset_value);
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
   PyObject *tmp_annotations_6;
   tmp_annotations_6 = DICT_COPY(tstate, mod_consts[225]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__6___iter__(tmp_annotations_6);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[48], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 150;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_7;
   PyObject *tmp_dict_key_6;
   PyObject *tmp_dict_value_6;
   tmp_dict_key_6 = mod_consts[214];
   tmp_dict_value_6 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[194]);

   if (tmp_dict_value_6 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_6 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_dict_value_6);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_7 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
   Py_DECREF(tmp_dict_value_6);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__7___len__(tmp_annotations_7);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[226], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 155;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_8;
   tmp_annotations_8 = DICT_COPY(tstate, mod_consts[228]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__8__do_expiration(tmp_annotations_8);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[47], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 158;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_9;
   PyObject *tmp_dict_key_7;
   PyObject *tmp_dict_value_7;
   tmp_dict_key_7 = mod_consts[230];
   tmp_dict_value_7 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[231]);

   if (tmp_dict_value_7 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_7 = (PyObject *)&PyFloat_Type;
           Py_INCREF(tmp_dict_value_7);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_9 = _PyDict_NewPresized( 5 );
   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
   Py_DECREF(tmp_dict_value_7);
   assert(!(tmp_res != 0));
   tmp_dict_key_7 = mod_consts[46];
   tmp_dict_value_7 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_7 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_7);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
   Py_DECREF(tmp_dict_value_7);
   assert(!(tmp_res != 0));
   tmp_dict_key_7 = mod_consts[64];
   tmp_dict_value_7 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_7 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_7);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
   Py_DECREF(tmp_dict_value_7);
   assert(!(tmp_res != 0));
   tmp_dict_key_7 = mod_consts[232];
   tmp_dict_value_7 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_7 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_7 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_7);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
   Py_DECREF(tmp_dict_value_7);
   assert(!(tmp_res != 0));
   tmp_dict_key_7 = mod_consts[214];
   tmp_dict_value_7 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__9__expire_cookie(tmp_annotations_9);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[70], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 161;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_defaults_2;
   PyObject *tmp_tuple_element_6;
   PyObject *tmp_called_value_8;
   PyObject *tmp_annotations_10;
   PyObject *tmp_dict_key_8;
   PyObject *tmp_dict_value_8;
   tmp_called_value_8 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[9]);

   if (tmp_called_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

     if (unlikely(tmp_called_value_8 == NULL)) {
         tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
     }

     if (tmp_called_value_8 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 165;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_called_value_8);
       } else {
           goto frame_exception_exit_2;
       }
   }

   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 165;
   tmp_tuple_element_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
   Py_DECREF(tmp_called_value_8);
   if (tmp_tuple_element_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 165;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 1);
   PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_6);
   tmp_dict_key_8 = mod_consts[234];
   tmp_dict_value_8 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[170]);

   if (tmp_dict_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[170]);

     if (unlikely(tmp_dict_value_8 == NULL)) {
         tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
     }

     if (tmp_dict_value_8 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_defaults_2);

      exception_lineno = 165;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_dict_value_8);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_10 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
   Py_DECREF(tmp_dict_value_8);
   assert(!(tmp_res != 0));
   tmp_dict_key_8 = mod_consts[66];
   tmp_dict_value_8 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[9]);

   if (tmp_dict_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

     if (unlikely(tmp_dict_value_8 == NULL)) {
         tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
     }

     if (tmp_dict_value_8 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 165;
      type_description_2 = "c";
         goto dict_build_exception_2;
     }
           Py_INCREF(tmp_dict_value_8);
       } else {
           goto dict_build_exception_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
   Py_DECREF(tmp_dict_value_8);
   assert(!(tmp_res != 0));
   tmp_dict_key_8 = mod_consts[214];
   tmp_dict_value_8 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
   assert(!(tmp_res != 0));
   goto dict_build_noexception_2;
   // Exception handling pass through code for dict_build:
   dict_build_exception_2:;
   Py_DECREF(tmp_defaults_2);
   Py_DECREF(tmp_annotations_10);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_2:;


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__10_update_cookies(tmp_defaults_2, tmp_annotations_10);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[235], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 165;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_defaults_3;
   PyObject *tmp_tuple_element_7;
   PyObject *tmp_called_value_9;
   PyObject *tmp_annotations_11;
   PyObject *tmp_dict_key_9;
   PyObject *tmp_dict_value_9;
   tmp_called_value_9 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[9]);

   if (tmp_called_value_9 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

     if (unlikely(tmp_called_value_9 == NULL)) {
         tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
     }

     if (tmp_called_value_9 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 237;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_called_value_9);
       } else {
           goto frame_exception_exit_2;
       }
   }

   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 237;
   tmp_tuple_element_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_9);
   Py_DECREF(tmp_called_value_9);
   if (tmp_tuple_element_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 237;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_defaults_3 = MAKE_TUPLE_EMPTY(tstate, 1);
   PyTuple_SET_ITEM(tmp_defaults_3, 0, tmp_tuple_element_7);
   tmp_dict_key_9 = mod_consts[87];
   tmp_dict_value_9 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[9]);

   if (tmp_dict_value_9 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

     if (unlikely(tmp_dict_value_9 == NULL)) {
         tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
     }

     if (tmp_dict_value_9 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_defaults_3);

      exception_lineno = 237;
      type_description_2 = "c";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_dict_value_9);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_11 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
   Py_DECREF(tmp_dict_value_9);
   assert(!(tmp_res != 0));
   tmp_dict_key_9 = mod_consts[214];
   tmp_dict_value_9 = mod_consts[237];
   tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__11_filter_cookies(tmp_defaults_3, tmp_annotations_11);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[238], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 237;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   nuitka_bool tmp_condition_result_7;
   PyObject *tmp_called_value_10;
   PyObject *tmp_args_element_value_6;
   PyObject *tmp_annotations_12;
   PyObject *tmp_dict_key_10;
   PyObject *tmp_dict_value_10;
   PyObject *tmp_staticmethod_arg_1;
   PyObject *tmp_annotations_13;
   PyObject *tmp_dict_key_11;
   PyObject *tmp_dict_value_11;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[240]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 292;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_condition_result_7 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_3;
   } else {
       goto condexpr_false_3;
   }
   condexpr_true_3:;
   tmp_called_value_10 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[240]);

   if (unlikely(tmp_called_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[240], &exception_type, &exception_value);

    exception_lineno = 292;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }

   if (tmp_called_value_10 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 292;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_dict_key_10 = mod_consts[46];
   tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_10 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_10 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_10);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_12 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
   Py_DECREF(tmp_dict_value_10);
   assert(!(tmp_res != 0));
   tmp_dict_key_10 = mod_consts[60];
   tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_10 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_10 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_10);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
   Py_DECREF(tmp_dict_value_10);
   assert(!(tmp_res != 0));
   tmp_dict_key_10 = mod_consts[214];
   tmp_dict_value_10 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[209]);

   if (tmp_dict_value_10 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_10 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_10);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
   Py_DECREF(tmp_dict_value_10);
   assert(!(tmp_res != 0));


   tmp_args_element_value_6 = MAKE_FUNCTION_aiohttp$cookiejar$$$function__12__is_domain_match(tmp_annotations_12);

   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 292;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_6);
   Py_DECREF(tmp_called_value_10);
   Py_DECREF(tmp_args_element_value_6);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 292;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   goto condexpr_end_3;
   condexpr_false_3:;
   tmp_dict_key_11 = mod_consts[46];
   tmp_dict_value_11 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_11 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_11);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_13 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
   Py_DECREF(tmp_dict_value_11);
   assert(!(tmp_res != 0));
   tmp_dict_key_11 = mod_consts[60];
   tmp_dict_value_11 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_11 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_11 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_11);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
   Py_DECREF(tmp_dict_value_11);
   assert(!(tmp_res != 0));
   tmp_dict_key_11 = mod_consts[214];
   tmp_dict_value_11 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[209]);

   if (tmp_dict_value_11 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_11 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_11);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
   Py_DECREF(tmp_dict_value_11);
   assert(!(tmp_res != 0));


   tmp_staticmethod_arg_1 = MAKE_FUNCTION_aiohttp$cookiejar$$$function__12__is_domain_match(tmp_annotations_13);

   tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_1);
   Py_DECREF(tmp_staticmethod_arg_1);
   assert(!(tmp_dictset_value == NULL));
   condexpr_end_3:;
   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[45], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 293;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   nuitka_bool tmp_condition_result_8;
   PyObject *tmp_called_value_11;
   PyObject *tmp_args_element_value_7;
   PyObject *tmp_annotations_14;
   PyObject *tmp_dict_key_12;
   PyObject *tmp_dict_value_12;
   PyObject *tmp_staticmethod_arg_2;
   PyObject *tmp_annotations_15;
   PyObject *tmp_dict_key_13;
   PyObject *tmp_dict_value_13;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[240]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 308;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_4;
   } else {
       goto condexpr_false_4;
   }
   condexpr_true_4:;
   tmp_called_value_11 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[240]);

   if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[240], &exception_type, &exception_value);

    exception_lineno = 308;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }

   if (tmp_called_value_11 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 308;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_dict_key_12 = mod_consts[96];
   tmp_dict_value_12 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_12 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_12);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_14 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_12, tmp_dict_value_12);
   Py_DECREF(tmp_dict_value_12);
   assert(!(tmp_res != 0));
   tmp_dict_key_12 = mod_consts[242];
   tmp_dict_value_12 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_12 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_12);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_12, tmp_dict_value_12);
   Py_DECREF(tmp_dict_value_12);
   assert(!(tmp_res != 0));
   tmp_dict_key_12 = mod_consts[214];
   tmp_dict_value_12 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[209]);

   if (tmp_dict_value_12 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_12 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_12);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_12, tmp_dict_value_12);
   Py_DECREF(tmp_dict_value_12);
   assert(!(tmp_res != 0));


   tmp_args_element_value_7 = MAKE_FUNCTION_aiohttp$cookiejar$$$function__13__is_path_match(tmp_annotations_14);

   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 308;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_7);
   Py_DECREF(tmp_called_value_11);
   Py_DECREF(tmp_args_element_value_7);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 308;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   goto condexpr_end_4;
   condexpr_false_4:;
   tmp_dict_key_13 = mod_consts[96];
   tmp_dict_value_13 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_13 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_13 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_13);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_15 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
   Py_DECREF(tmp_dict_value_13);
   assert(!(tmp_res != 0));
   tmp_dict_key_13 = mod_consts[242];
   tmp_dict_value_13 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_13 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_13 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_13);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
   Py_DECREF(tmp_dict_value_13);
   assert(!(tmp_res != 0));
   tmp_dict_key_13 = mod_consts[214];
   tmp_dict_value_13 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[209]);

   if (tmp_dict_value_13 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_13 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_13);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
   Py_DECREF(tmp_dict_value_13);
   assert(!(tmp_res != 0));


   tmp_staticmethod_arg_2 = MAKE_FUNCTION_aiohttp$cookiejar$$$function__13__is_path_match(tmp_annotations_15);

   tmp_dictset_value = BUILTIN_STATICMETHOD(tstate, tmp_staticmethod_arg_2);
   Py_DECREF(tmp_staticmethod_arg_2);
   assert(!(tmp_dictset_value == NULL));
   condexpr_end_4:;
   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[86], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 309;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }
  {
   nuitka_bool tmp_condition_result_9;
   PyObject *tmp_called_value_12;
   PyObject *tmp_args_element_value_8;
   PyObject *tmp_annotations_16;
   PyObject *tmp_dict_key_14;
   PyObject *tmp_dict_value_14;
   PyObject *tmp_classmethod_arg_1;
   PyObject *tmp_annotations_17;
   PyObject *tmp_dict_key_15;
   PyObject *tmp_dict_value_15;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[244]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 327;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_5;
   } else {
       goto condexpr_false_5;
   }
   condexpr_true_5:;
   tmp_called_value_12 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[244]);

   if (unlikely(tmp_called_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[244], &exception_type, &exception_value);

    exception_lineno = 327;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }

   if (tmp_called_value_12 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 327;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   tmp_dict_key_14 = mod_consts[245];
   tmp_dict_value_14 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_14 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_14 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_14);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_16 = _PyDict_NewPresized( 2 );
   {
    PyObject *tmp_expression_value_27;
    PyObject *tmp_subscript_value_7;
    tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_14, tmp_dict_value_14);
    Py_DECREF(tmp_dict_value_14);
    assert(!(tmp_res != 0));
    tmp_dict_key_14 = mod_consts[214];
    tmp_expression_value_27 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[156]);

    if (tmp_expression_value_27 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[156]);

      if (unlikely(tmp_expression_value_27 == NULL)) {
          tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
      }

      if (tmp_expression_value_27 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 328;
       type_description_2 = "c";
          goto dict_build_exception_3;
      }
            Py_INCREF(tmp_expression_value_27);
        } else {
            goto dict_build_exception_3;
        }
    }

    tmp_subscript_value_7 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[194]);

    if (tmp_subscript_value_7 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_7 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_subscript_value_7);
        } else {
            goto dict_build_exception_3;
        }
    }

    tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_7);
    Py_DECREF(tmp_expression_value_27);
    Py_DECREF(tmp_subscript_value_7);
    if (tmp_dict_value_14 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 328;
     type_description_2 = "c";
        goto dict_build_exception_3;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_14, tmp_dict_value_14);
    Py_DECREF(tmp_dict_value_14);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_3;
   // Exception handling pass through code for dict_build:
   dict_build_exception_3:;
   Py_DECREF(tmp_called_value_12);
   Py_DECREF(tmp_annotations_16);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_3:;


   tmp_args_element_value_8 = MAKE_FUNCTION_aiohttp$cookiejar$$$function__14__parse_date(tmp_annotations_16);

   frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame.f_lineno = 327;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_8);
   Py_DECREF(tmp_called_value_12);
   Py_DECREF(tmp_args_element_value_8);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 327;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   goto condexpr_end_5;
   condexpr_false_5:;
   tmp_dict_key_15 = mod_consts[245];
   tmp_dict_value_15 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[222]);

   if (tmp_dict_value_15 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_15 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_15);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_17 = _PyDict_NewPresized( 2 );
   {
    PyObject *tmp_expression_value_28;
    PyObject *tmp_subscript_value_8;
    tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_15, tmp_dict_value_15);
    Py_DECREF(tmp_dict_value_15);
    assert(!(tmp_res != 0));
    tmp_dict_key_15 = mod_consts[214];
    tmp_expression_value_28 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[156]);

    if (tmp_expression_value_28 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[156]);

      if (unlikely(tmp_expression_value_28 == NULL)) {
          tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
      }

      if (tmp_expression_value_28 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 328;
       type_description_2 = "c";
          goto dict_build_exception_4;
      }
            Py_INCREF(tmp_expression_value_28);
        } else {
            goto dict_build_exception_4;
        }
    }

    tmp_subscript_value_8 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[194]);

    if (tmp_subscript_value_8 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_8 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_subscript_value_8);
        } else {
            goto dict_build_exception_4;
        }
    }

    tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_8);
    Py_DECREF(tmp_expression_value_28);
    Py_DECREF(tmp_subscript_value_8);
    if (tmp_dict_value_15 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 328;
     type_description_2 = "c";
        goto dict_build_exception_4;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_15, tmp_dict_value_15);
    Py_DECREF(tmp_dict_value_15);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_4;
   // Exception handling pass through code for dict_build:
   dict_build_exception_4:;
   Py_DECREF(tmp_annotations_17);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_4:;


   tmp_classmethod_arg_1 = MAKE_FUNCTION_aiohttp$cookiejar$$$function__14__parse_date(tmp_annotations_17);

   tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
   Py_DECREF(tmp_classmethod_arg_1);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 327;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
   condexpr_end_5:;
   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[72], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 328;
    type_description_2 = "c";
       goto frame_exception_exit_2;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_1;
  frame_exception_exit_2:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_ed5344eeec190f52f19f760271e0df6f_2, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_ed5344eeec190f52f19f760271e0df6f_2->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_ed5344eeec190f52f19f760271e0df6f_2, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_ed5344eeec190f52f19f760271e0df6f_2,
      type_description_2,
      outline_0_var___class__
  );



  assertFrameObject(frame_ed5344eeec190f52f19f760271e0df6f_2);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_1;
  frame_no_exception_1:;
  goto skip_nested_handling_1;
  nested_frame_exit_1:;

  goto try_except_handler_7;
  skip_nested_handling_1:;
  {
   nuitka_bool tmp_condition_result_10;
   PyObject *tmp_cmp_expr_left_3;
   PyObject *tmp_cmp_expr_right_3;
   CHECK_OBJECT(tmp_class_creation_1__bases);
   tmp_cmp_expr_left_3 = tmp_class_creation_1__bases;
   CHECK_OBJECT(tmp_class_creation_1__bases_orig);
   tmp_cmp_expr_right_3 = tmp_class_creation_1__bases_orig;
   tmp_condition_result_10 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
   if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 39;

       goto try_except_handler_7;
   }
   if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
       goto branch_yes_5;
   } else {
       goto branch_no_5;
   }
  }
  branch_yes_5:;
  CHECK_OBJECT(tmp_class_creation_1__bases_orig);
  tmp_dictset_value = tmp_class_creation_1__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__1_CookieJar_39, mod_consts[247], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_7;
  }
  branch_no_5:;
  {
   PyObject *tmp_assign_source_49;
   PyObject *tmp_called_value_13;
   PyObject *tmp_args_value_2;
   PyObject *tmp_tuple_element_8;
   PyObject *tmp_kwargs_value_2;
   CHECK_OBJECT(tmp_class_creation_1__metaclass);
   tmp_called_value_13 = tmp_class_creation_1__metaclass;
   tmp_tuple_element_8 = mod_consts[178];
   tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_8);
   CHECK_OBJECT(tmp_class_creation_1__bases);
   tmp_tuple_element_8 = tmp_class_creation_1__bases;
   PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_8);
   tmp_tuple_element_8 = locals_aiohttp$cookiejar$$$class__1_CookieJar_39;
   PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_8);
   CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
   tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
   frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 39;
   tmp_assign_source_49 = CALL_FUNCTION(tstate, tmp_called_value_13, tmp_args_value_2, tmp_kwargs_value_2);
   Py_DECREF(tmp_args_value_2);
   if (tmp_assign_source_49 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 39;

       goto try_except_handler_7;
   }
   assert(Nuitka_Cell_GET(outline_0_var___class__) == NULL);
   Nuitka_Cell_SET(outline_0_var___class__, tmp_assign_source_49);

  }
  CHECK_OBJECT(Nuitka_Cell_GET(outline_0_var___class__));
  tmp_assign_source_48 = Nuitka_Cell_GET(outline_0_var___class__);
  Py_INCREF(tmp_assign_source_48);
  goto try_return_handler_7;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_7:;
  Py_DECREF(locals_aiohttp$cookiejar$$$class__1_CookieJar_39);
  locals_aiohttp$cookiejar$$$class__1_CookieJar_39 = NULL;
  goto try_return_handler_6;
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

  Py_DECREF(locals_aiohttp$cookiejar$$$class__1_CookieJar_39);
  locals_aiohttp$cookiejar$$$class__1_CookieJar_39 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_7;
  exception_value = exception_keeper_value_7;
  exception_tb = exception_keeper_tb_7;
  exception_lineno = exception_keeper_lineno_7;

  goto try_except_handler_6;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_6:;
  CHECK_OBJECT(outline_0_var___class__);
  Py_DECREF(outline_0_var___class__);
  outline_0_var___class__ = NULL;
  goto outline_result_1;
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

  // Re-raise.
  exception_type = exception_keeper_type_8;
  exception_value = exception_keeper_value_8;
  exception_tb = exception_keeper_tb_8;
  exception_lineno = exception_keeper_lineno_8;

  goto outline_exception_1;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_1:;
  exception_lineno = 39;
  goto try_except_handler_5;
  outline_result_1:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_48);
 }
 goto try_end_7;
 // Exception handler code:
 try_except_handler_5:;
 exception_keeper_type_9 = exception_type;
 exception_keeper_value_9 = exception_value;
 exception_keeper_tb_9 = exception_tb;
 exception_keeper_lineno_9 = exception_lineno;
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
 exception_type = exception_keeper_type_9;
 exception_value = exception_keeper_value_9;
 exception_tb = exception_keeper_tb_9;
 exception_lineno = exception_keeper_lineno_9;

 goto frame_exception_exit_1;
 // End of try:
 try_end_7:;
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
 // Tried code:
 {
  PyObject *tmp_assign_source_50;
  PyObject *tmp_tuple_element_9;
  tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[164]);

  if (unlikely(tmp_tuple_element_9 == NULL)) {
      tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[164]);
  }

  if (tmp_tuple_element_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  tmp_assign_source_50 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_50, 0, tmp_tuple_element_9);
  assert(tmp_class_creation_2__bases_orig == NULL);
  tmp_class_creation_2__bases_orig = tmp_assign_source_50;
 }
 {
  PyObject *tmp_assign_source_51;
  PyObject *tmp_dircall_arg1_2;
  CHECK_OBJECT(tmp_class_creation_2__bases_orig);
  tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
  Py_INCREF(tmp_dircall_arg1_2);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
      tmp_assign_source_51 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_51 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  assert(tmp_class_creation_2__bases == NULL);
  tmp_class_creation_2__bases = tmp_assign_source_51;
 }
 {
  PyObject *tmp_assign_source_52;
  tmp_assign_source_52 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_2__class_decl_dict == NULL);
  tmp_class_creation_2__class_decl_dict = tmp_assign_source_52;
 }
 {
  PyObject *tmp_assign_source_53;
  PyObject *tmp_metaclass_value_2;
  nuitka_bool tmp_condition_result_11;
  int tmp_truth_name_2;
  PyObject *tmp_type_arg_3;
  PyObject *tmp_expression_value_29;
  PyObject *tmp_subscript_value_9;
  PyObject *tmp_bases_value_2;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
  if (tmp_truth_name_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  tmp_condition_result_11 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_6;
  } else {
      goto condexpr_false_6;
  }
  condexpr_true_6:;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_expression_value_29 = tmp_class_creation_2__bases;
  tmp_subscript_value_9 = mod_consts[98];
  tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_29, tmp_subscript_value_9, 0);
  if (tmp_type_arg_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
  Py_DECREF(tmp_type_arg_3);
  if (tmp_metaclass_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  goto condexpr_end_6;
  condexpr_false_6:;
  tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_2);
  condexpr_end_6:;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_bases_value_2 = tmp_class_creation_2__bases;
  tmp_assign_source_53 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
  Py_DECREF(tmp_metaclass_value_2);
  if (tmp_assign_source_53 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  assert(tmp_class_creation_2__metaclass == NULL);
  tmp_class_creation_2__metaclass = tmp_assign_source_53;
 }
 {
  bool tmp_condition_result_12;
  PyObject *tmp_expression_value_30;
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_30 = tmp_class_creation_2__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_30, mod_consts[177]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  tmp_condition_result_12 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_12 != false) {
      goto branch_yes_6;
  } else {
      goto branch_no_6;
  }
 }
 branch_yes_6:;
 {
  PyObject *tmp_assign_source_54;
  PyObject *tmp_called_value_14;
  PyObject *tmp_expression_value_31;
  PyObject *tmp_args_value_3;
  PyObject *tmp_tuple_element_10;
  PyObject *tmp_kwargs_value_3;
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_31 = tmp_class_creation_2__metaclass;
  tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[177]);
  if (tmp_called_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  tmp_tuple_element_10 = mod_consts[248];
  tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_10);
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_tuple_element_10 = tmp_class_creation_2__bases;
  PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_10);
  CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
  tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
  frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 392;
  tmp_assign_source_54 = CALL_FUNCTION(tstate, tmp_called_value_14, tmp_args_value_3, tmp_kwargs_value_3);
  Py_DECREF(tmp_called_value_14);
  Py_DECREF(tmp_args_value_3);
  if (tmp_assign_source_54 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  assert(tmp_class_creation_2__prepared == NULL);
  tmp_class_creation_2__prepared = tmp_assign_source_54;
 }
 {
  bool tmp_condition_result_13;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_expression_value_32;
  CHECK_OBJECT(tmp_class_creation_2__prepared);
  tmp_expression_value_32 = tmp_class_creation_2__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[179]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  assert(!(tmp_res == -1));
  tmp_condition_result_13 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_13 != false) {
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
  PyObject *tmp_expression_value_33;
  PyObject *tmp_name_value_17;
  PyObject *tmp_default_value_2;
  tmp_raise_type_2 = PyExc_TypeError;
  tmp_mod_expr_left_2 = mod_consts[180];
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_33 = tmp_class_creation_2__metaclass;
  tmp_name_value_17 = mod_consts[181];
  tmp_default_value_2 = mod_consts[182];
  tmp_tuple_element_11 = BUILTIN_GETATTR(tstate, tmp_expression_value_33, tmp_name_value_17, tmp_default_value_2);
  if (tmp_tuple_element_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_34;
   PyObject *tmp_type_arg_4;
   PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_11);
   CHECK_OBJECT(tmp_class_creation_2__prepared);
   tmp_type_arg_4 = tmp_class_creation_2__prepared;
   tmp_expression_value_34 = BUILTIN_TYPE1(tmp_type_arg_4);
   assert(!(tmp_expression_value_34 == NULL));
   tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[181]);
   Py_DECREF(tmp_expression_value_34);
   if (tmp_tuple_element_11 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 392;

       goto tuple_build_exception_3;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_11);
  }
  goto tuple_build_noexception_3;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_3:;
  Py_DECREF(tmp_mod_expr_right_2);
  goto try_except_handler_10;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_3:;
  tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
  Py_DECREF(tmp_mod_expr_right_2);
  if (tmp_raise_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_10;
  }
  exception_type = tmp_raise_type_2;
  Py_INCREF(tmp_raise_type_2);
  exception_value = tmp_raise_value_2;
  exception_lineno = 392;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_10;
 }
 branch_no_7:;
 goto branch_end_6;
 branch_no_6:;
 {
  PyObject *tmp_assign_source_55;
  tmp_assign_source_55 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_2__prepared == NULL);
  tmp_class_creation_2__prepared = tmp_assign_source_55;
 }
 branch_end_6:;
 {
  PyObject *tmp_assign_source_56;
  outline_1_var___class__ = Nuitka_Cell_NewEmpty();
  {
   PyObject *tmp_set_locals_2;
   CHECK_OBJECT(tmp_class_creation_2__prepared);
   tmp_set_locals_2 = tmp_class_creation_2__prepared;
   locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392 = tmp_set_locals_2;
   Py_INCREF(tmp_set_locals_2);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[183];
  tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[184], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_12;
  }
  tmp_dictset_value = mod_consts[249];
  tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[136], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_12;
  }
  tmp_dictset_value = mod_consts[248];
  tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[186], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_12;
  }
  frame_4d5eeea7681acd6e3318da8bbf828b5b_3 = MAKE_CLASS_FRAME(tstate, codeobj_4d5eeea7681acd6e3318da8bbf828b5b, module_aiohttp$cookiejar, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_4d5eeea7681acd6e3318da8bbf828b5b_3);
  assert(Py_REFCNT(frame_4d5eeea7681acd6e3318da8bbf828b5b_3) == 2);

  // Framed code:
  {
   PyObject *tmp_kw_defaults_2;
   PyObject *tmp_annotations_18;
   PyObject *tmp_dict_key_16;
   PyObject *tmp_dict_value_16;
   PyObject *tmp_expression_value_35;
   PyObject *tmp_subscript_value_10;
   PyObject *tmp_expression_value_36;
   struct Nuitka_CellObject *tmp_closure_2[1];
   tmp_kw_defaults_2 = DICT_COPY(tstate, mod_consts[250]);
   tmp_dict_key_16 = mod_consts[212];
   tmp_expression_value_35 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[156]);

   if (tmp_expression_value_35 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[156]);

     if (unlikely(tmp_expression_value_35 == NULL)) {
         tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
     }

     if (tmp_expression_value_35 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_kw_defaults_2);

      exception_lineno = 399;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_35);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_expression_value_36 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[141]);

   if (tmp_expression_value_36 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[141]);

     if (unlikely(tmp_expression_value_36 == NULL)) {
         tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[141]);
     }

     if (tmp_expression_value_36 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_kw_defaults_2);
      Py_DECREF(tmp_expression_value_35);

      exception_lineno = 399;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_36);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[213]);
   Py_DECREF(tmp_expression_value_36);
   if (tmp_subscript_value_10 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_kw_defaults_2);
    Py_DECREF(tmp_expression_value_35);

    exception_lineno = 399;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_10);
   Py_DECREF(tmp_expression_value_35);
   Py_DECREF(tmp_subscript_value_10);
   if (tmp_dict_value_16 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_kw_defaults_2);

    exception_lineno = 399;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_annotations_18 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_16, tmp_dict_value_16);
   Py_DECREF(tmp_dict_value_16);
   assert(!(tmp_res != 0));
   tmp_dict_key_16 = mod_consts[214];
   tmp_dict_value_16 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_16, tmp_dict_value_16);
   assert(!(tmp_res != 0));

   tmp_closure_2[0] = outline_1_var___class__;
   Py_INCREF(tmp_closure_2[0]);

   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__15___init__(tmp_kw_defaults_2, tmp_annotations_18, tmp_closure_2);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[1], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 399;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_annotations_19;
   tmp_annotations_19 = DICT_COPY(tstate, mod_consts[225]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__16___iter__(tmp_annotations_19);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[48], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 402;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_annotations_20;
   PyObject *tmp_dict_key_17;
   PyObject *tmp_dict_value_17;
   tmp_dict_key_17 = mod_consts[214];
   tmp_dict_value_17 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[194]);

   if (tmp_dict_value_17 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_17 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_dict_value_17);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_20 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_17, tmp_dict_value_17);
   Py_DECREF(tmp_dict_value_17);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__17___len__(tmp_annotations_20);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[226], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 406;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_defaults_4;
   PyObject *tmp_annotations_21;
   PyObject *tmp_dict_key_18;
   PyObject *tmp_dict_value_18;
   PyObject *tmp_expression_value_37;
   PyObject *tmp_subscript_value_11;
   tmp_defaults_4 = mod_consts[220];
   tmp_dict_key_18 = mod_consts[33];
   tmp_expression_value_37 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[156]);

   if (tmp_expression_value_37 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[156]);

     if (unlikely(tmp_expression_value_37 == NULL)) {
         tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[156]);
     }

     if (tmp_expression_value_37 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 409;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_37);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_11 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[165]);

   if (tmp_subscript_value_11 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[165]);

     if (unlikely(tmp_subscript_value_11 == NULL)) {
         tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[165]);
     }

     if (tmp_subscript_value_11 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_expression_value_37);

      exception_lineno = 409;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_subscript_value_11);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_11);
   Py_DECREF(tmp_expression_value_37);
   Py_DECREF(tmp_subscript_value_11);
   if (tmp_dict_value_18 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 409;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_annotations_21 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
   Py_DECREF(tmp_dict_value_18);
   assert(!(tmp_res != 0));
   tmp_dict_key_18 = mod_consts[214];
   tmp_dict_value_18 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
   assert(!(tmp_res != 0));
   Py_INCREF(tmp_defaults_4);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__18_clear(tmp_defaults_4, tmp_annotations_21);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[29], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 409;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_annotations_22;
   PyObject *tmp_dict_key_19;
   PyObject *tmp_dict_value_19;
   tmp_dict_key_19 = mod_consts[46];
   tmp_dict_value_19 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[222]);

   if (tmp_dict_value_19 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_19 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_19);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_22 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
   Py_DECREF(tmp_dict_value_19);
   assert(!(tmp_res != 0));
   tmp_dict_key_19 = mod_consts[214];
   tmp_dict_value_19 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__19_clear_domain(tmp_annotations_22);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[223], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 412;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_defaults_5;
   PyObject *tmp_tuple_element_12;
   PyObject *tmp_called_value_15;
   PyObject *tmp_annotations_23;
   PyObject *tmp_dict_key_20;
   PyObject *tmp_dict_value_20;
   tmp_called_value_15 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[9]);

   if (tmp_called_value_15 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

     if (unlikely(tmp_called_value_15 == NULL)) {
         tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
     }

     if (tmp_called_value_15 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 415;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_15);
       } else {
           goto frame_exception_exit_3;
       }
   }

   frame_4d5eeea7681acd6e3318da8bbf828b5b_3->m_frame.f_lineno = 415;
   tmp_tuple_element_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_15);
   Py_DECREF(tmp_called_value_15);
   if (tmp_tuple_element_12 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 415;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
   tmp_defaults_5 = MAKE_TUPLE_EMPTY(tstate, 1);
   PyTuple_SET_ITEM(tmp_defaults_5, 0, tmp_tuple_element_12);
   tmp_dict_key_20 = mod_consts[234];
   tmp_dict_value_20 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[170]);

   if (tmp_dict_value_20 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[170]);

     if (unlikely(tmp_dict_value_20 == NULL)) {
         tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[170]);
     }

     if (tmp_dict_value_20 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_defaults_5);

      exception_lineno = 415;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_dict_value_20);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_23 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
   Py_DECREF(tmp_dict_value_20);
   assert(!(tmp_res != 0));
   tmp_dict_key_20 = mod_consts[66];
   tmp_dict_value_20 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[9]);

   if (tmp_dict_value_20 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

     if (unlikely(tmp_dict_value_20 == NULL)) {
         tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
     }

     if (tmp_dict_value_20 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 415;
      type_description_2 = "c";
         goto dict_build_exception_5;
     }
           Py_INCREF(tmp_dict_value_20);
       } else {
           goto dict_build_exception_5;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
   Py_DECREF(tmp_dict_value_20);
   assert(!(tmp_res != 0));
   tmp_dict_key_20 = mod_consts[214];
   tmp_dict_value_20 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_20, tmp_dict_value_20);
   assert(!(tmp_res != 0));
   goto dict_build_noexception_5;
   // Exception handling pass through code for dict_build:
   dict_build_exception_5:;
   Py_DECREF(tmp_defaults_5);
   Py_DECREF(tmp_annotations_23);
   goto frame_exception_exit_3;
   // Finished with no exception for dict_build:
   dict_build_noexception_5:;


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__20_update_cookies(tmp_defaults_5, tmp_annotations_23);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[235], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 415;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_annotations_24;
   PyObject *tmp_dict_key_21;
   PyObject *tmp_dict_value_21;
   tmp_dict_key_21 = mod_consts[87];
   tmp_dict_value_21 = PyObject_GetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[9]);

   if (tmp_dict_value_21 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[9]);

     if (unlikely(tmp_dict_value_21 == NULL)) {
         tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
     }

     if (tmp_dict_value_21 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 418;
      type_description_2 = "c";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_dict_value_21);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_24 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_21, tmp_dict_value_21);
   Py_DECREF(tmp_dict_value_21);
   assert(!(tmp_res != 0));
   tmp_dict_key_21 = mod_consts[214];
   tmp_dict_value_21 = mod_consts[237];
   tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_21, tmp_dict_value_21);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$cookiejar$$$function__21_filter_cookies(tmp_annotations_24);

   tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[238], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 418;
    type_description_2 = "c";
       goto frame_exception_exit_3;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_2;
  frame_exception_exit_3:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_4d5eeea7681acd6e3318da8bbf828b5b_3, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_4d5eeea7681acd6e3318da8bbf828b5b_3->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_4d5eeea7681acd6e3318da8bbf828b5b_3, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_4d5eeea7681acd6e3318da8bbf828b5b_3,
      type_description_2,
      outline_1_var___class__
  );



  assertFrameObject(frame_4d5eeea7681acd6e3318da8bbf828b5b_3);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_2;
  frame_no_exception_2:;
  goto skip_nested_handling_2;
  nested_frame_exit_2:;

  goto try_except_handler_12;
  skip_nested_handling_2:;
  {
   nuitka_bool tmp_condition_result_14;
   PyObject *tmp_cmp_expr_left_4;
   PyObject *tmp_cmp_expr_right_4;
   CHECK_OBJECT(tmp_class_creation_2__bases);
   tmp_cmp_expr_left_4 = tmp_class_creation_2__bases;
   CHECK_OBJECT(tmp_class_creation_2__bases_orig);
   tmp_cmp_expr_right_4 = tmp_class_creation_2__bases_orig;
   tmp_condition_result_14 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
   if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 392;

       goto try_except_handler_12;
   }
   if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
       goto branch_yes_8;
   } else {
       goto branch_no_8;
   }
  }
  branch_yes_8:;
  CHECK_OBJECT(tmp_class_creation_2__bases_orig);
  tmp_dictset_value = tmp_class_creation_2__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392, mod_consts[247], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 392;

      goto try_except_handler_12;
  }
  branch_no_8:;
  {
   PyObject *tmp_assign_source_57;
   PyObject *tmp_called_value_16;
   PyObject *tmp_args_value_4;
   PyObject *tmp_tuple_element_13;
   PyObject *tmp_kwargs_value_4;
   CHECK_OBJECT(tmp_class_creation_2__metaclass);
   tmp_called_value_16 = tmp_class_creation_2__metaclass;
   tmp_tuple_element_13 = mod_consts[248];
   tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_13);
   CHECK_OBJECT(tmp_class_creation_2__bases);
   tmp_tuple_element_13 = tmp_class_creation_2__bases;
   PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_13);
   tmp_tuple_element_13 = locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392;
   PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_13);
   CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
   tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
   frame_5014fcd498cc40b5d577c201f169e806->m_frame.f_lineno = 392;
   tmp_assign_source_57 = CALL_FUNCTION(tstate, tmp_called_value_16, tmp_args_value_4, tmp_kwargs_value_4);
   Py_DECREF(tmp_args_value_4);
   if (tmp_assign_source_57 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 392;

       goto try_except_handler_12;
   }
   assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
   Nuitka_Cell_SET(outline_1_var___class__, tmp_assign_source_57);

  }
  CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
  tmp_assign_source_56 = Nuitka_Cell_GET(outline_1_var___class__);
  Py_INCREF(tmp_assign_source_56);
  goto try_return_handler_12;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_12:;
  Py_DECREF(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392);
  locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392 = NULL;
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

  Py_DECREF(locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392);
  locals_aiohttp$cookiejar$$$class__2_DummyCookieJar_392 = NULL;
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
  CHECK_OBJECT(outline_1_var___class__);
  Py_DECREF(outline_1_var___class__);
  outline_1_var___class__ = NULL;
  goto outline_result_2;
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

  goto outline_exception_2;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_2:;
  exception_lineno = 392;
  goto try_except_handler_10;
  outline_result_2:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)mod_consts[248], tmp_assign_source_56);
 }
 goto try_end_8;
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
 exception_type = exception_keeper_type_12;
 exception_value = exception_keeper_value_12;
 exception_tb = exception_keeper_tb_12;
 exception_lineno = exception_keeper_lineno_12;

 goto frame_exception_exit_1;
 // End of try:
 try_end_8:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_3;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_5014fcd498cc40b5d577c201f169e806, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_5014fcd498cc40b5d577c201f169e806->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_5014fcd498cc40b5d577c201f169e806, exception_lineno);
 }



 assertFrameObject(frame_5014fcd498cc40b5d577c201f169e806);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto module_exception_exit;
 frame_no_exception_3:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("aiohttp$cookiejar", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.cookiejar" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_aiohttp$cookiejar);
    return module_aiohttp$cookiejar;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$cookiejar, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("aiohttp$cookiejar", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
