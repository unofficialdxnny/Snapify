/* Generated code for Python module 'aiohttp'
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

/* The "module_aiohttp" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiohttp;
PyDictObject *moduledict_aiohttp;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[150];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[150];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("aiohttp"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 150; i++) {
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
void checkModuleConstants_aiohttp(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 150; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_45840e98dda664bc07531b3ec82182cc;
static PyCodeObject *codeobj_6e01b18cb2f86334b9846341d486d518;
static PyCodeObject *codeobj_3c5b5a225ebca3fae847675fb550c466;

static void createModuleCodeObjects(void) {
 module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[147]); CHECK_OBJECT(module_filename_obj);
 codeobj_45840e98dda664bc07531b3ec82182cc = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[148], mod_consts[148], NULL, NULL, 0, 0, 0);
 codeobj_6e01b18cb2f86334b9846341d486d518 = MAKE_CODE_OBJECT(module_filename_obj, 222, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[144], mod_consts[144], NULL, NULL, 0, 0, 0);
 codeobj_3c5b5a225ebca3fae847675fb550c466 = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[146], mod_consts[146], mod_consts[149], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_aiohttp$$$function__1___dir__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$$$function__2___getattr__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_aiohttp$$$function__1___dir__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_FrameObject *frame_6e01b18cb2f86334b9846341d486d518;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_6e01b18cb2f86334b9846341d486d518 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_6e01b18cb2f86334b9846341d486d518)) {
     Py_XDECREF(cache_frame_6e01b18cb2f86334b9846341d486d518);

#if _DEBUG_REFCOUNTS
     if (cache_frame_6e01b18cb2f86334b9846341d486d518 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_6e01b18cb2f86334b9846341d486d518 = MAKE_FUNCTION_FRAME(tstate, codeobj_6e01b18cb2f86334b9846341d486d518, module_aiohttp, 0);
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_6e01b18cb2f86334b9846341d486d518->m_type_description == NULL);
 frame_6e01b18cb2f86334b9846341d486d518 = cache_frame_6e01b18cb2f86334b9846341d486d518;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_6e01b18cb2f86334b9846341d486d518);
 assert(Py_REFCNT(frame_6e01b18cb2f86334b9846341d486d518) == 2);

 // Framed code:
 {
  PyObject *tmp_add_expr_left_1;
  PyObject *tmp_add_expr_right_1;
  tmp_add_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[0]);

  if (unlikely(tmp_add_expr_left_1 == NULL)) {
      tmp_add_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
  }

  if (tmp_add_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 223;

      goto frame_exception_exit_1;
  }
  tmp_add_expr_right_1 = mod_consts[1];
  tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_TUPLE(tmp_add_expr_left_1, tmp_add_expr_right_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 223;

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
     exception_tb = MAKE_TRACEBACK(frame_6e01b18cb2f86334b9846341d486d518, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_6e01b18cb2f86334b9846341d486d518->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_6e01b18cb2f86334b9846341d486d518, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_6e01b18cb2f86334b9846341d486d518,
     type_description_1
 );


 // Release cached frame if used for exception.
 if (frame_6e01b18cb2f86334b9846341d486d518 == cache_frame_6e01b18cb2f86334b9846341d486d518) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_6e01b18cb2f86334b9846341d486d518);
     cache_frame_6e01b18cb2f86334b9846341d486d518 = NULL;
 }

 assertFrameObject(frame_6e01b18cb2f86334b9846341d486d518);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto function_exception_exit;
 frame_no_exception_1:;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$$$function__2___getattr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_name = python_pars[0];
 PyObject *var_guv = NULL;
 PyObject *var_gw = NULL;
 PyObject *tmp_import_from_1__module = NULL;
 struct Nuitka_FrameObject *frame_3c5b5a225ebca3fae847675fb550c466;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 int tmp_res;
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
 PyObject *tmp_return_value = NULL;
 bool tmp_result;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 static struct Nuitka_FrameObject *cache_frame_3c5b5a225ebca3fae847675fb550c466 = NULL;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_3c5b5a225ebca3fae847675fb550c466)) {
     Py_XDECREF(cache_frame_3c5b5a225ebca3fae847675fb550c466);

#if _DEBUG_REFCOUNTS
     if (cache_frame_3c5b5a225ebca3fae847675fb550c466 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_3c5b5a225ebca3fae847675fb550c466 = MAKE_FUNCTION_FRAME(tstate, codeobj_3c5b5a225ebca3fae847675fb550c466, module_aiohttp, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_3c5b5a225ebca3fae847675fb550c466->m_type_description == NULL);
 frame_3c5b5a225ebca3fae847675fb550c466 = cache_frame_3c5b5a225ebca3fae847675fb550c466;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_3c5b5a225ebca3fae847675fb550c466);
 assert(Py_REFCNT(frame_3c5b5a225ebca3fae847675fb550c466) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(par_name);
  tmp_cmp_expr_left_1 = par_name;
  tmp_cmp_expr_right_1 = mod_consts[2];
  tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 230;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = (tmp_res == 1) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 // Tried code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[3];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = mod_consts[2];
  tmp_level_value_1 = mod_consts[4];
  frame_3c5b5a225ebca3fae847675fb550c466->m_frame.f_lineno = 232;
  tmp_assign_source_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 232;
   type_description_1 = "ooo";
      goto try_except_handler_2;
  }
  assert(tmp_import_from_1__module == NULL);
  tmp_import_from_1__module = tmp_assign_source_1;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_import_name_from_1;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_1 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_1)) {
      tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_1,
          (PyObject *)moduledict_aiohttp,
          mod_consts[5],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_2 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[5]);
  }

  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 232;
   type_description_1 = "ooo";
      goto try_except_handler_3;
  }
  assert(var_guv == NULL);
  var_guv = tmp_assign_source_2;
 }
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_import_name_from_2;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_2 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_2)) {
      tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_2,
          (PyObject *)moduledict_aiohttp,
          mod_consts[7],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[7]);
  }

  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 232;
   type_description_1 = "ooo";
      goto try_except_handler_3;
  }
  assert(var_gw == NULL);
  var_gw = tmp_assign_source_3;
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

 CHECK_OBJECT(tmp_import_from_1__module);
 Py_DECREF(tmp_import_from_1__module);
 tmp_import_from_1__module = NULL;
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

 // Preserve existing published exception id 1.
 exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_2 == NULL) {
     exception_keeper_tb_2 = MAKE_TRACEBACK(frame_3c5b5a225ebca3fae847675fb550c466, exception_keeper_lineno_2);
 } else if (exception_keeper_lineno_2 != 0) {
     exception_keeper_tb_2 = ADD_TRACEBACK(exception_keeper_tb_2, frame_3c5b5a225ebca3fae847675fb550c466, exception_keeper_lineno_2);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2);
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
 tmp_return_value = Py_None;
 Py_INCREF(tmp_return_value);
 goto try_return_handler_4;
 goto branch_end_2;
 branch_no_2:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 231;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_3c5b5a225ebca3fae847675fb550c466->m_frame) frame_3c5b5a225ebca3fae847675fb550c466->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "ooo";
 goto try_except_handler_4;
 branch_end_2:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_4:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 goto frame_return_exit_1;
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

 goto frame_exception_exit_1;
 // End of try:
 // End of try:
 try_end_2:;
 CHECK_OBJECT(tmp_import_from_1__module);
 Py_DECREF(tmp_import_from_1__module);
 tmp_import_from_1__module = NULL;
 {
  PyObject *tmp_assign_source_4;
  CHECK_OBJECT(var_guv);
  tmp_assign_source_4 = var_guv;
  UPDATE_STRING_DICT0(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  CHECK_OBJECT(var_gw);
  tmp_assign_source_5 = var_gw;
  UPDATE_STRING_DICT0(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
 }
 {
  nuitka_bool tmp_condition_result_3;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  CHECK_OBJECT(par_name);
  tmp_cmp_expr_left_3 = par_name;
  tmp_cmp_expr_right_3 = mod_consts[5];
  tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
  if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 238;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  CHECK_OBJECT(var_guv);
  tmp_return_value = var_guv;
  goto condexpr_end_1;
  condexpr_false_1:;
  CHECK_OBJECT(var_gw);
  tmp_return_value = var_gw;
  condexpr_end_1:;
  Py_INCREF(tmp_return_value);
  goto frame_return_exit_1;
 }
 branch_no_1:;
 {
  PyObject *tmp_raise_type_1;
  PyObject *tmp_make_exception_arg_1;
  PyObject *tmp_string_concat_values_1;
  PyObject *tmp_tuple_element_1;
  tmp_tuple_element_1 = mod_consts[8];
  tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_format_value_1;
   PyObject *tmp_format_spec_1;
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
   CHECK_OBJECT(par_name);
   tmp_format_value_1 = par_name;
   tmp_format_spec_1 = mod_consts[9];
   tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 240;
    type_description_1 = "ooo";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_string_concat_values_1);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_1);
  Py_DECREF(tmp_string_concat_values_1);
  if (tmp_make_exception_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 240;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
  frame_3c5b5a225ebca3fae847675fb550c466->m_frame.f_lineno = 240;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_AttributeError, tmp_make_exception_arg_1);
  Py_DECREF(tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  exception_type = tmp_raise_type_1;
  exception_lineno = 240;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "ooo";
  goto frame_exception_exit_1;
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
     exception_tb = MAKE_TRACEBACK(frame_3c5b5a225ebca3fae847675fb550c466, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_3c5b5a225ebca3fae847675fb550c466->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_3c5b5a225ebca3fae847675fb550c466, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_3c5b5a225ebca3fae847675fb550c466,
     type_description_1,
     par_name,
     var_guv,
     var_gw
 );


 // Release cached frame if used for exception.
 if (frame_3c5b5a225ebca3fae847675fb550c466 == cache_frame_3c5b5a225ebca3fae847675fb550c466) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_3c5b5a225ebca3fae847675fb550c466);
     cache_frame_3c5b5a225ebca3fae847675fb550c466 = NULL;
 }

 assertFrameObject(frame_3c5b5a225ebca3fae847675fb550c466);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 Py_XDECREF(var_guv);
 var_guv = NULL;
 Py_XDECREF(var_gw);
 var_gw = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 exception_keeper_type_4 = exception_type;
 exception_keeper_value_4 = exception_value;
 exception_keeper_tb_4 = exception_tb;
 exception_keeper_lineno_4 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 Py_XDECREF(var_guv);
 var_guv = NULL;
 Py_XDECREF(var_gw);
 var_gw = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_4;
 exception_value = exception_keeper_value_4;
 exception_tb = exception_keeper_tb_4;
 exception_lineno = exception_keeper_lineno_4;

 goto function_exception_exit;
 // End of try:

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;

function_exception_exit:
 CHECK_OBJECT(par_name);
 Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_name);
 Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_aiohttp$$$function__1___dir__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$$$function__1___dir__,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6e01b18cb2f86334b9846341d486d518,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$$$function__2___getattr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$$$function__2___getattr__,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3c5b5a225ebca3fae847675fb550c466,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp,
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

static function_impl_code const function_table_aiohttp[] = {
 impl_aiohttp$$$function__1___dir__,
 impl_aiohttp$$$function__2___getattr__,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_aiohttp);

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
        module_aiohttp,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_aiohttp,
        sizeof(function_table_aiohttp) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiohttp(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiohttp");

    // Store the module for future use.
    module_aiohttp = module;

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
        PRINT_STRING("aiohttp: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("aiohttp: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initaiohttp\n");

    moduledict_aiohttp = MODULE_DICT(module_aiohttp);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiohttp,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiohttp,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[9]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiohttp,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiohttp);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiohttp, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiohttp, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiohttp, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_aiohttp);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
 PyObject *tmp_import_from_10__module = NULL;
 PyObject *tmp_import_from_1__module = NULL;
 PyObject *tmp_import_from_2__module = NULL;
 PyObject *tmp_import_from_3__module = NULL;
 PyObject *tmp_import_from_4__module = NULL;
 PyObject *tmp_import_from_5__module = NULL;
 PyObject *tmp_import_from_6__module = NULL;
 PyObject *tmp_import_from_7__module = NULL;
 PyObject *tmp_import_from_8__module = NULL;
 PyObject *tmp_import_from_9__module = NULL;
 struct Nuitka_FrameObject *frame_45840e98dda664bc07531b3ec82182cc;
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
 int tmp_res;

    // Module init code if any


    // Module code.
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = module_filename_obj;
  UPDATE_STRING_DICT0(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_2);
 }
 frame_45840e98dda664bc07531b3ec82182cc = MAKE_MODULE_FRAME(codeobj_45840e98dda664bc07531b3ec82182cc, module_aiohttp);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_45840e98dda664bc07531b3ec82182cc);
 assert(Py_REFCNT(frame_45840e98dda664bc07531b3ec82182cc) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_list_element_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_args_element_value_1;
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 1;
  {
      PyObject *hard_module = IMPORT_HARD_OS();
      if (likely(hard_module != NULL)) {
          tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[12]);


      } else {
          tmp_expression_value_1 = NULL;
      }
  }
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
  tmp_args_element_value_1 = module_filename_obj;
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 1;
  tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  if (tmp_list_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
  tmp_assign_source_3 = MAKE_LIST_EMPTY(tstate, 2);
  {
   PyObject *tmp_called_value_2;
   PyObject *tmp_expression_value_2;
   PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
   frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 1;
   {
       PyObject *hard_module = IMPORT_HARD_OS();
       if (likely(hard_module != NULL)) {
           tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[14]);


       } else {
           tmp_expression_value_2 = NULL;
       }
   }
   if (tmp_expression_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 1;

       goto list_build_exception_1;
   }
   tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[15]);
   Py_DECREF(tmp_expression_value_2);
   if (tmp_called_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 1;

       goto list_build_exception_1;
   }
   frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 1;
   tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[16]);

   Py_DECREF(tmp_called_value_2);
   if (tmp_list_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 1;

       goto list_build_exception_1;
   }
   PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
  }
  goto list_build_noexception_1;
  // Exception handling pass through code for list_build:
  list_build_exception_1:;
  Py_DECREF(tmp_assign_source_3);
  goto frame_exception_exit_1;
  // Finished with no exception for list_build:
  list_build_noexception_1:;
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = module_filename_obj;
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[18]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
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
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[18]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[20], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[17]);

  if (unlikely(tmp_assattr_value_3 == NULL)) {
      tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
  }

  if (tmp_assattr_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
  tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[18]);

  if (unlikely(tmp_assattr_target_3 == NULL)) {
      tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
  }

  assert(!(tmp_assattr_target_3 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[21], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_4;
  tmp_assign_source_4 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_5);
 }
 {
  PyObject *tmp_assign_source_6;
  tmp_assign_source_6 = mod_consts[24];
  UPDATE_STRING_DICT0(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_6);
 }
 {
  PyObject *tmp_assign_source_7;
  tmp_assign_source_7 = IMPORT_HARD_TYPING();
  assert(!(tmp_assign_source_7 == NULL));
  assert(tmp_import_from_1__module == NULL);
  Py_INCREF(tmp_assign_source_7);
  tmp_import_from_1__module = tmp_assign_source_7;
 }
 {
  PyObject *tmp_assign_source_8;
  tmp_assign_source_8 = Py_False;
  UPDATE_STRING_DICT0(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_8);
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_9;
  PyObject *tmp_import_name_from_1;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_1 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_1)) {
      tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_1,
          (PyObject *)moduledict_aiohttp,
          mod_consts[27],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[27]);
  }

  if (tmp_assign_source_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_9);
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
  PyObject *tmp_import_name_from_2;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[9];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = mod_consts[28];
  tmp_level_value_1 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 5;
  tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_import_name_from_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_2)) {
      tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_2,
          (PyObject *)moduledict_aiohttp,
          mod_consts[29],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[29]);
  }

  Py_DECREF(tmp_import_name_from_2);
  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_10);
 }
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_name_value_2;
  PyObject *tmp_globals_arg_value_2;
  PyObject *tmp_locals_arg_value_2;
  PyObject *tmp_fromlist_value_2;
  PyObject *tmp_level_value_2;
  tmp_name_value_2 = mod_consts[30];
  tmp_globals_arg_value_2 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_2 = Py_None;
  tmp_fromlist_value_2 = mod_consts[31];
  tmp_level_value_2 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 6;
  tmp_assign_source_11 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
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
  PyObject *tmp_import_name_from_3;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_3 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_3)) {
      tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_3,
          (PyObject *)moduledict_aiohttp,
          mod_consts[32],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[32]);
  }

  if (tmp_assign_source_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_12);
 }
 {
  PyObject *tmp_assign_source_13;
  PyObject *tmp_import_name_from_4;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_4 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_4)) {
      tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_4,
          (PyObject *)moduledict_aiohttp,
          mod_consts[33],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[33]);
  }

  if (tmp_assign_source_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_13);
 }
 {
  PyObject *tmp_assign_source_14;
  PyObject *tmp_import_name_from_5;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_5 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_5)) {
      tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_5,
          (PyObject *)moduledict_aiohttp,
          mod_consts[34],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[34]);
  }

  if (tmp_assign_source_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_14);
 }
 {
  PyObject *tmp_assign_source_15;
  PyObject *tmp_import_name_from_6;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_6 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_6)) {
      tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_6,
          (PyObject *)moduledict_aiohttp,
          mod_consts[35],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[35]);
  }

  if (tmp_assign_source_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_15);
 }
 {
  PyObject *tmp_assign_source_16;
  PyObject *tmp_import_name_from_7;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_7 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_7)) {
      tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_7,
          (PyObject *)moduledict_aiohttp,
          mod_consts[36],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[36]);
  }

  if (tmp_assign_source_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_16);
 }
 {
  PyObject *tmp_assign_source_17;
  PyObject *tmp_import_name_from_8;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_8 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_8)) {
      tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_8,
          (PyObject *)moduledict_aiohttp,
          mod_consts[37],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[37]);
  }

  if (tmp_assign_source_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_17);
 }
 {
  PyObject *tmp_assign_source_18;
  PyObject *tmp_import_name_from_9;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_9 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_9)) {
      tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_9,
          (PyObject *)moduledict_aiohttp,
          mod_consts[38],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[38]);
  }

  if (tmp_assign_source_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_18);
 }
 {
  PyObject *tmp_assign_source_19;
  PyObject *tmp_import_name_from_10;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_10 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_10)) {
      tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_10,
          (PyObject *)moduledict_aiohttp,
          mod_consts[39],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[39]);
  }

  if (tmp_assign_source_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_19);
 }
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_import_name_from_11;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_11 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_11)) {
      tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_11,
          (PyObject *)moduledict_aiohttp,
          mod_consts[40],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[40]);
  }

  if (tmp_assign_source_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_20);
 }
 {
  PyObject *tmp_assign_source_21;
  PyObject *tmp_import_name_from_12;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_12 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_12)) {
      tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_12,
          (PyObject *)moduledict_aiohttp,
          mod_consts[41],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[41]);
  }

  if (tmp_assign_source_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_21);
 }
 {
  PyObject *tmp_assign_source_22;
  PyObject *tmp_import_name_from_13;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_13 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_13)) {
      tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_13,
          (PyObject *)moduledict_aiohttp,
          mod_consts[42],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[42]);
  }

  if (tmp_assign_source_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_22);
 }
 {
  PyObject *tmp_assign_source_23;
  PyObject *tmp_import_name_from_14;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_14 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_14)) {
      tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_14,
          (PyObject *)moduledict_aiohttp,
          mod_consts[43],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[43]);
  }

  if (tmp_assign_source_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_23);
 }
 {
  PyObject *tmp_assign_source_24;
  PyObject *tmp_import_name_from_15;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_15 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_15)) {
      tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_15,
          (PyObject *)moduledict_aiohttp,
          mod_consts[44],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[44]);
  }

  if (tmp_assign_source_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_24);
 }
 {
  PyObject *tmp_assign_source_25;
  PyObject *tmp_import_name_from_16;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_16 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_16)) {
      tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_16,
          (PyObject *)moduledict_aiohttp,
          mod_consts[45],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[45]);
  }

  if (tmp_assign_source_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_25);
 }
 {
  PyObject *tmp_assign_source_26;
  PyObject *tmp_import_name_from_17;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_17 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_17)) {
      tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_17,
          (PyObject *)moduledict_aiohttp,
          mod_consts[46],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[46]);
  }

  if (tmp_assign_source_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_26);
 }
 {
  PyObject *tmp_assign_source_27;
  PyObject *tmp_import_name_from_18;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_18 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_18)) {
      tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_18,
          (PyObject *)moduledict_aiohttp,
          mod_consts[47],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[47]);
  }

  if (tmp_assign_source_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_27);
 }
 {
  PyObject *tmp_assign_source_28;
  PyObject *tmp_import_name_from_19;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_19 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_19)) {
      tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_19,
          (PyObject *)moduledict_aiohttp,
          mod_consts[48],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[48]);
  }

  if (tmp_assign_source_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_28);
 }
 {
  PyObject *tmp_assign_source_29;
  PyObject *tmp_import_name_from_20;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_20 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_20)) {
      tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_20,
          (PyObject *)moduledict_aiohttp,
          mod_consts[49],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[49]);
  }

  if (tmp_assign_source_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_29);
 }
 {
  PyObject *tmp_assign_source_30;
  PyObject *tmp_import_name_from_21;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_21 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_21)) {
      tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_21,
          (PyObject *)moduledict_aiohttp,
          mod_consts[50],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[50]);
  }

  if (tmp_assign_source_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_30);
 }
 {
  PyObject *tmp_assign_source_31;
  PyObject *tmp_import_name_from_22;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_22 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_22)) {
      tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_22,
          (PyObject *)moduledict_aiohttp,
          mod_consts[51],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_31 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[51]);
  }

  if (tmp_assign_source_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_31);
 }
 {
  PyObject *tmp_assign_source_32;
  PyObject *tmp_import_name_from_23;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_23 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_23)) {
      tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_23,
          (PyObject *)moduledict_aiohttp,
          mod_consts[52],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[52]);
  }

  if (tmp_assign_source_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_32);
 }
 {
  PyObject *tmp_assign_source_33;
  PyObject *tmp_import_name_from_24;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_24 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_24)) {
      tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_24,
          (PyObject *)moduledict_aiohttp,
          mod_consts[53],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[53]);
  }

  if (tmp_assign_source_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_33);
 }
 {
  PyObject *tmp_assign_source_34;
  PyObject *tmp_import_name_from_25;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_25 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_25)) {
      tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_25,
          (PyObject *)moduledict_aiohttp,
          mod_consts[54],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[54]);
  }

  if (tmp_assign_source_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_34);
 }
 {
  PyObject *tmp_assign_source_35;
  PyObject *tmp_import_name_from_26;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_26 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_26)) {
      tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_26,
          (PyObject *)moduledict_aiohttp,
          mod_consts[55],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[55]);
  }

  if (tmp_assign_source_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_35);
 }
 {
  PyObject *tmp_assign_source_36;
  PyObject *tmp_import_name_from_27;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_27 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_27)) {
      tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_27,
          (PyObject *)moduledict_aiohttp,
          mod_consts[56],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_36 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_27, mod_consts[56]);
  }

  if (tmp_assign_source_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_36);
 }
 {
  PyObject *tmp_assign_source_37;
  PyObject *tmp_import_name_from_28;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_28 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_28)) {
      tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_28,
          (PyObject *)moduledict_aiohttp,
          mod_consts[57],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_37 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_28, mod_consts[57]);
  }

  if (tmp_assign_source_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_37);
 }
 {
  PyObject *tmp_assign_source_38;
  PyObject *tmp_import_name_from_29;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_29 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_29)) {
      tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_29,
          (PyObject *)moduledict_aiohttp,
          mod_consts[58],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_38 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_29, mod_consts[58]);
  }

  if (tmp_assign_source_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_38);
 }
 {
  PyObject *tmp_assign_source_39;
  PyObject *tmp_import_name_from_30;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_30 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_30)) {
      tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_30,
          (PyObject *)moduledict_aiohttp,
          mod_consts[59],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_39 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_30, mod_consts[59]);
  }

  if (tmp_assign_source_39 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_39);
 }
 {
  PyObject *tmp_assign_source_40;
  PyObject *tmp_import_name_from_31;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_31 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_31)) {
      tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_31,
          (PyObject *)moduledict_aiohttp,
          mod_consts[60],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_40 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_31, mod_consts[60]);
  }

  if (tmp_assign_source_40 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_40);
 }
 {
  PyObject *tmp_assign_source_41;
  PyObject *tmp_import_name_from_32;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_32 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_32)) {
      tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_32,
          (PyObject *)moduledict_aiohttp,
          mod_consts[61],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_41 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_32, mod_consts[61]);
  }

  if (tmp_assign_source_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_41);
 }
 {
  PyObject *tmp_assign_source_42;
  PyObject *tmp_import_name_from_33;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_33 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_33)) {
      tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_33,
          (PyObject *)moduledict_aiohttp,
          mod_consts[62],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_42 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_33, mod_consts[62]);
  }

  if (tmp_assign_source_42 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_42);
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
  PyObject *tmp_assign_source_43;
  PyObject *tmp_name_value_3;
  PyObject *tmp_globals_arg_value_3;
  PyObject *tmp_locals_arg_value_3;
  PyObject *tmp_fromlist_value_3;
  PyObject *tmp_level_value_3;
  tmp_name_value_3 = mod_consts[63];
  tmp_globals_arg_value_3 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_3 = Py_None;
  tmp_fromlist_value_3 = mod_consts[64];
  tmp_level_value_3 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 39;
  tmp_assign_source_43 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
  if (tmp_assign_source_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_3__module == NULL);
  tmp_import_from_3__module = tmp_assign_source_43;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_44;
  PyObject *tmp_import_name_from_34;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_34 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_34)) {
      tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_34,
          (PyObject *)moduledict_aiohttp,
          mod_consts[65],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_44 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_34, mod_consts[65]);
  }

  if (tmp_assign_source_44 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_44);
 }
 {
  PyObject *tmp_assign_source_45;
  PyObject *tmp_import_name_from_35;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_35 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_35)) {
      tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_35,
          (PyObject *)moduledict_aiohttp,
          mod_consts[66],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_45 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_35, mod_consts[66]);
  }

  if (tmp_assign_source_45 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_45);
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
  PyObject *tmp_assign_source_46;
  PyObject *tmp_import_name_from_36;
  PyObject *tmp_name_value_4;
  PyObject *tmp_globals_arg_value_4;
  PyObject *tmp_locals_arg_value_4;
  PyObject *tmp_fromlist_value_4;
  PyObject *tmp_level_value_4;
  tmp_name_value_4 = mod_consts[67];
  tmp_globals_arg_value_4 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_4 = Py_None;
  tmp_fromlist_value_4 = mod_consts[68];
  tmp_level_value_4 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 40;
  tmp_import_name_from_36 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
  if (tmp_import_name_from_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 40;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_36)) {
      tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_36,
          (PyObject *)moduledict_aiohttp,
          mod_consts[69],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_46 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_36, mod_consts[69]);
  }

  Py_DECREF(tmp_import_name_from_36);
  if (tmp_assign_source_46 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 40;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_46);
 }
 {
  PyObject *tmp_assign_source_47;
  PyObject *tmp_name_value_5;
  PyObject *tmp_globals_arg_value_5;
  PyObject *tmp_locals_arg_value_5;
  PyObject *tmp_fromlist_value_5;
  PyObject *tmp_level_value_5;
  tmp_name_value_5 = mod_consts[70];
  tmp_globals_arg_value_5 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_5 = Py_None;
  tmp_fromlist_value_5 = mod_consts[71];
  tmp_level_value_5 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 41;
  tmp_assign_source_47 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
  if (tmp_assign_source_47 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_4__module == NULL);
  tmp_import_from_4__module = tmp_assign_source_47;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_48;
  PyObject *tmp_import_name_from_37;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_37 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_37)) {
      tmp_assign_source_48 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_37,
          (PyObject *)moduledict_aiohttp,
          mod_consts[72],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_48 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_37, mod_consts[72]);
  }

  if (tmp_assign_source_48 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_48);
 }
 {
  PyObject *tmp_assign_source_49;
  PyObject *tmp_import_name_from_38;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_38 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_38)) {
      tmp_assign_source_49 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_38,
          (PyObject *)moduledict_aiohttp,
          mod_consts[73],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_49 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_38, mod_consts[73]);
  }

  if (tmp_assign_source_49 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_49);
 }
 {
  PyObject *tmp_assign_source_50;
  PyObject *tmp_import_name_from_39;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_39 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_39)) {
      tmp_assign_source_50 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_39,
          (PyObject *)moduledict_aiohttp,
          mod_consts[74],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_50 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_39, mod_consts[74]);
  }

  if (tmp_assign_source_50 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_50);
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
  PyObject *tmp_assign_source_51;
  PyObject *tmp_name_value_6;
  PyObject *tmp_globals_arg_value_6;
  PyObject *tmp_locals_arg_value_6;
  PyObject *tmp_fromlist_value_6;
  PyObject *tmp_level_value_6;
  tmp_name_value_6 = mod_consts[75];
  tmp_globals_arg_value_6 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_6 = Py_None;
  tmp_fromlist_value_6 = mod_consts[76];
  tmp_level_value_6 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 42;
  tmp_assign_source_51 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
  if (tmp_assign_source_51 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_5__module == NULL);
  tmp_import_from_5__module = tmp_assign_source_51;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_52;
  PyObject *tmp_import_name_from_40;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_40 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_40)) {
      tmp_assign_source_52 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_40,
          (PyObject *)moduledict_aiohttp,
          mod_consts[77],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_52 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_40, mod_consts[77]);
  }

  if (tmp_assign_source_52 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_52);
 }
 {
  PyObject *tmp_assign_source_53;
  PyObject *tmp_import_name_from_41;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_41 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_41)) {
      tmp_assign_source_53 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_41,
          (PyObject *)moduledict_aiohttp,
          mod_consts[78],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_53 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_41, mod_consts[78]);
  }

  if (tmp_assign_source_53 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_53);
 }
 {
  PyObject *tmp_assign_source_54;
  PyObject *tmp_import_name_from_42;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_42 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_42)) {
      tmp_assign_source_54 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_42,
          (PyObject *)moduledict_aiohttp,
          mod_consts[79],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_54 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_42, mod_consts[79]);
  }

  if (tmp_assign_source_54 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_54);
 }
 {
  PyObject *tmp_assign_source_55;
  PyObject *tmp_import_name_from_43;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_43 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_43)) {
      tmp_assign_source_55 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_43,
          (PyObject *)moduledict_aiohttp,
          mod_consts[80],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_55 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_43, mod_consts[80]);
  }

  if (tmp_assign_source_55 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_55);
 }
 {
  PyObject *tmp_assign_source_56;
  PyObject *tmp_import_name_from_44;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_44 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_44)) {
      tmp_assign_source_56 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_44,
          (PyObject *)moduledict_aiohttp,
          mod_consts[81],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_56 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_44, mod_consts[81]);
  }

  if (tmp_assign_source_56 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_56);
 }
 {
  PyObject *tmp_assign_source_57;
  PyObject *tmp_import_name_from_45;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_45 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_45)) {
      tmp_assign_source_57 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_45,
          (PyObject *)moduledict_aiohttp,
          mod_consts[82],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_57 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_45, mod_consts[82]);
  }

  if (tmp_assign_source_57 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_57);
 }
 {
  PyObject *tmp_assign_source_58;
  PyObject *tmp_import_name_from_46;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_46 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_46)) {
      tmp_assign_source_58 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_46,
          (PyObject *)moduledict_aiohttp,
          mod_consts[83],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_58 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_46, mod_consts[83]);
  }

  if (tmp_assign_source_58 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_58);
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
 {
  PyObject *tmp_assign_source_59;
  PyObject *tmp_name_value_7;
  PyObject *tmp_globals_arg_value_7;
  PyObject *tmp_locals_arg_value_7;
  PyObject *tmp_fromlist_value_7;
  PyObject *tmp_level_value_7;
  tmp_name_value_7 = mod_consts[84];
  tmp_globals_arg_value_7 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_7 = Py_None;
  tmp_fromlist_value_7 = mod_consts[85];
  tmp_level_value_7 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 51;
  tmp_assign_source_59 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
  if (tmp_assign_source_59 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_6__module == NULL);
  tmp_import_from_6__module = tmp_assign_source_59;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_60;
  PyObject *tmp_import_name_from_47;
  CHECK_OBJECT(tmp_import_from_6__module);
  tmp_import_name_from_47 = tmp_import_from_6__module;
  if (PyModule_Check(tmp_import_name_from_47)) {
      tmp_assign_source_60 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_47,
          (PyObject *)moduledict_aiohttp,
          mod_consts[86],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_60 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_47, mod_consts[86]);
  }

  if (tmp_assign_source_60 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto try_except_handler_6;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_60);
 }
 {
  PyObject *tmp_assign_source_61;
  PyObject *tmp_import_name_from_48;
  CHECK_OBJECT(tmp_import_from_6__module);
  tmp_import_name_from_48 = tmp_import_from_6__module;
  if (PyModule_Check(tmp_import_name_from_48)) {
      tmp_assign_source_61 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_48,
          (PyObject *)moduledict_aiohttp,
          mod_consts[87],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_61 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_48, mod_consts[87]);
  }

  if (tmp_assign_source_61 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto try_except_handler_6;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_61);
 }
 {
  PyObject *tmp_assign_source_62;
  PyObject *tmp_import_name_from_49;
  CHECK_OBJECT(tmp_import_from_6__module);
  tmp_import_name_from_49 = tmp_import_from_6__module;
  if (PyModule_Check(tmp_import_name_from_49)) {
      tmp_assign_source_62 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_49,
          (PyObject *)moduledict_aiohttp,
          mod_consts[88],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_62 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_49, mod_consts[88]);
  }

  if (tmp_assign_source_62 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto try_except_handler_6;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_62);
 }
 {
  PyObject *tmp_assign_source_63;
  PyObject *tmp_import_name_from_50;
  CHECK_OBJECT(tmp_import_from_6__module);
  tmp_import_name_from_50 = tmp_import_from_6__module;
  if (PyModule_Check(tmp_import_name_from_50)) {
      tmp_assign_source_63 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_50,
          (PyObject *)moduledict_aiohttp,
          mod_consts[89],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_63 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_50, mod_consts[89]);
  }

  if (tmp_assign_source_63 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto try_except_handler_6;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_63);
 }
 {
  PyObject *tmp_assign_source_64;
  PyObject *tmp_import_name_from_51;
  CHECK_OBJECT(tmp_import_from_6__module);
  tmp_import_name_from_51 = tmp_import_from_6__module;
  if (PyModule_Check(tmp_import_name_from_51)) {
      tmp_assign_source_64 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_51,
          (PyObject *)moduledict_aiohttp,
          mod_consts[90],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_64 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_51, mod_consts[90]);
  }

  if (tmp_assign_source_64 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto try_except_handler_6;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_64);
 }
 {
  PyObject *tmp_assign_source_65;
  PyObject *tmp_import_name_from_52;
  CHECK_OBJECT(tmp_import_from_6__module);
  tmp_import_name_from_52 = tmp_import_from_6__module;
  if (PyModule_Check(tmp_import_name_from_52)) {
      tmp_assign_source_65 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_52,
          (PyObject *)moduledict_aiohttp,
          mod_consts[91],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_65 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_52, mod_consts[91]);
  }

  if (tmp_assign_source_65 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto try_except_handler_6;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_65);
 }
 {
  PyObject *tmp_assign_source_66;
  PyObject *tmp_import_name_from_53;
  CHECK_OBJECT(tmp_import_from_6__module);
  tmp_import_name_from_53 = tmp_import_from_6__module;
  if (PyModule_Check(tmp_import_name_from_53)) {
      tmp_assign_source_66 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_53,
          (PyObject *)moduledict_aiohttp,
          mod_consts[92],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_66 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_53, mod_consts[92]);
  }

  if (tmp_assign_source_66 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto try_except_handler_6;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_66);
 }
 goto try_end_6;
 // Exception handler code:
 try_except_handler_6:;
 exception_keeper_type_6 = exception_type;
 exception_keeper_value_6 = exception_value;
 exception_keeper_tb_6 = exception_tb;
 exception_keeper_lineno_6 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_import_from_6__module);
 Py_DECREF(tmp_import_from_6__module);
 tmp_import_from_6__module = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_6;
 exception_value = exception_keeper_value_6;
 exception_tb = exception_keeper_tb_6;
 exception_lineno = exception_keeper_lineno_6;

 goto frame_exception_exit_1;
 // End of try:
 try_end_6:;
 CHECK_OBJECT(tmp_import_from_6__module);
 Py_DECREF(tmp_import_from_6__module);
 tmp_import_from_6__module = NULL;
 {
  PyObject *tmp_assign_source_67;
  PyObject *tmp_name_value_8;
  PyObject *tmp_globals_arg_value_8;
  PyObject *tmp_locals_arg_value_8;
  PyObject *tmp_fromlist_value_8;
  PyObject *tmp_level_value_8;
  tmp_name_value_8 = mod_consts[93];
  tmp_globals_arg_value_8 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_8 = Py_None;
  tmp_fromlist_value_8 = mod_consts[94];
  tmp_level_value_8 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 60;
  tmp_assign_source_67 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
  if (tmp_assign_source_67 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_7__module == NULL);
  tmp_import_from_7__module = tmp_assign_source_67;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_68;
  PyObject *tmp_import_name_from_54;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_54 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_54)) {
      tmp_assign_source_68 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_54,
          (PyObject *)moduledict_aiohttp,
          mod_consts[95],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_68 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_54, mod_consts[95]);
  }

  if (tmp_assign_source_68 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_68);
 }
 {
  PyObject *tmp_assign_source_69;
  PyObject *tmp_import_name_from_55;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_55 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_55)) {
      tmp_assign_source_69 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_55,
          (PyObject *)moduledict_aiohttp,
          mod_consts[96],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_69 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_55, mod_consts[96]);
  }

  if (tmp_assign_source_69 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_69);
 }
 {
  PyObject *tmp_assign_source_70;
  PyObject *tmp_import_name_from_56;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_56 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_56)) {
      tmp_assign_source_70 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_56,
          (PyObject *)moduledict_aiohttp,
          mod_consts[97],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_70 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_56, mod_consts[97]);
  }

  if (tmp_assign_source_70 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_70);
 }
 {
  PyObject *tmp_assign_source_71;
  PyObject *tmp_import_name_from_57;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_57 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_57)) {
      tmp_assign_source_71 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_57,
          (PyObject *)moduledict_aiohttp,
          mod_consts[98],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_71 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_57, mod_consts[98]);
  }

  if (tmp_assign_source_71 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_71);
 }
 {
  PyObject *tmp_assign_source_72;
  PyObject *tmp_import_name_from_58;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_58 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_58)) {
      tmp_assign_source_72 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_58,
          (PyObject *)moduledict_aiohttp,
          mod_consts[99],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_72 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_58, mod_consts[99]);
  }

  if (tmp_assign_source_72 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_72);
 }
 {
  PyObject *tmp_assign_source_73;
  PyObject *tmp_import_name_from_59;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_59 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_59)) {
      tmp_assign_source_73 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_59,
          (PyObject *)moduledict_aiohttp,
          mod_consts[100],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_73 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_59, mod_consts[100]);
  }

  if (tmp_assign_source_73 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_73);
 }
 {
  PyObject *tmp_assign_source_74;
  PyObject *tmp_import_name_from_60;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_60 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_60)) {
      tmp_assign_source_74 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_60,
          (PyObject *)moduledict_aiohttp,
          mod_consts[101],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_74 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_60, mod_consts[101]);
  }

  if (tmp_assign_source_74 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_74);
 }
 {
  PyObject *tmp_assign_source_75;
  PyObject *tmp_import_name_from_61;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_61 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_61)) {
      tmp_assign_source_75 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_61,
          (PyObject *)moduledict_aiohttp,
          mod_consts[102],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_75 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_61, mod_consts[102]);
  }

  if (tmp_assign_source_75 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_75);
 }
 {
  PyObject *tmp_assign_source_76;
  PyObject *tmp_import_name_from_62;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_62 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_62)) {
      tmp_assign_source_76 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_62,
          (PyObject *)moduledict_aiohttp,
          mod_consts[103],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_76 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_62, mod_consts[103]);
  }

  if (tmp_assign_source_76 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_76);
 }
 {
  PyObject *tmp_assign_source_77;
  PyObject *tmp_import_name_from_63;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_63 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_63)) {
      tmp_assign_source_77 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_63,
          (PyObject *)moduledict_aiohttp,
          mod_consts[104],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_77 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_63, mod_consts[104]);
  }

  if (tmp_assign_source_77 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_77);
 }
 {
  PyObject *tmp_assign_source_78;
  PyObject *tmp_import_name_from_64;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_64 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_64)) {
      tmp_assign_source_78 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_64,
          (PyObject *)moduledict_aiohttp,
          mod_consts[105],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_78 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_64, mod_consts[105]);
  }

  if (tmp_assign_source_78 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_78);
 }
 {
  PyObject *tmp_assign_source_79;
  PyObject *tmp_import_name_from_65;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_65 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_65)) {
      tmp_assign_source_79 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_65,
          (PyObject *)moduledict_aiohttp,
          mod_consts[106],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_79 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_65, mod_consts[106]);
  }

  if (tmp_assign_source_79 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_79);
 }
 {
  PyObject *tmp_assign_source_80;
  PyObject *tmp_import_name_from_66;
  CHECK_OBJECT(tmp_import_from_7__module);
  tmp_import_name_from_66 = tmp_import_from_7__module;
  if (PyModule_Check(tmp_import_name_from_66)) {
      tmp_assign_source_80 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_66,
          (PyObject *)moduledict_aiohttp,
          mod_consts[107],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_80 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_66, mod_consts[107]);
  }

  if (tmp_assign_source_80 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_80);
 }
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

 CHECK_OBJECT(tmp_import_from_7__module);
 Py_DECREF(tmp_import_from_7__module);
 tmp_import_from_7__module = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_7;
 exception_value = exception_keeper_value_7;
 exception_tb = exception_keeper_tb_7;
 exception_lineno = exception_keeper_lineno_7;

 goto frame_exception_exit_1;
 // End of try:
 try_end_7:;
 CHECK_OBJECT(tmp_import_from_7__module);
 Py_DECREF(tmp_import_from_7__module);
 tmp_import_from_7__module = NULL;
 {
  PyObject *tmp_assign_source_81;
  PyObject *tmp_import_name_from_67;
  PyObject *tmp_name_value_9;
  PyObject *tmp_globals_arg_value_9;
  PyObject *tmp_locals_arg_value_9;
  PyObject *tmp_fromlist_value_9;
  PyObject *tmp_level_value_9;
  tmp_name_value_9 = mod_consts[108];
  tmp_globals_arg_value_9 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_9 = Py_None;
  tmp_fromlist_value_9 = mod_consts[109];
  tmp_level_value_9 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 75;
  tmp_import_name_from_67 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
  if (tmp_import_name_from_67 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_67)) {
      tmp_assign_source_81 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_67,
          (PyObject *)moduledict_aiohttp,
          mod_consts[110],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_81 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_67, mod_consts[110]);
  }

  Py_DECREF(tmp_import_name_from_67);
  if (tmp_assign_source_81 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_81);
 }
 {
  PyObject *tmp_assign_source_82;
  PyObject *tmp_name_value_10;
  PyObject *tmp_globals_arg_value_10;
  PyObject *tmp_locals_arg_value_10;
  PyObject *tmp_fromlist_value_10;
  PyObject *tmp_level_value_10;
  tmp_name_value_10 = mod_consts[111];
  tmp_globals_arg_value_10 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_10 = Py_None;
  tmp_fromlist_value_10 = mod_consts[112];
  tmp_level_value_10 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 76;
  tmp_assign_source_82 = IMPORT_MODULE5(tstate, tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
  if (tmp_assign_source_82 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_8__module == NULL);
  tmp_import_from_8__module = tmp_assign_source_82;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_83;
  PyObject *tmp_import_name_from_68;
  CHECK_OBJECT(tmp_import_from_8__module);
  tmp_import_name_from_68 = tmp_import_from_8__module;
  if (PyModule_Check(tmp_import_name_from_68)) {
      tmp_assign_source_83 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_68,
          (PyObject *)moduledict_aiohttp,
          mod_consts[113],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_83 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_68, mod_consts[113]);
  }

  if (tmp_assign_source_83 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;

      goto try_except_handler_8;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_83);
 }
 {
  PyObject *tmp_assign_source_84;
  PyObject *tmp_import_name_from_69;
  CHECK_OBJECT(tmp_import_from_8__module);
  tmp_import_name_from_69 = tmp_import_from_8__module;
  if (PyModule_Check(tmp_import_name_from_69)) {
      tmp_assign_source_84 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_69,
          (PyObject *)moduledict_aiohttp,
          mod_consts[114],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_84 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_69, mod_consts[114]);
  }

  if (tmp_assign_source_84 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;

      goto try_except_handler_8;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_84);
 }
 {
  PyObject *tmp_assign_source_85;
  PyObject *tmp_import_name_from_70;
  CHECK_OBJECT(tmp_import_from_8__module);
  tmp_import_name_from_70 = tmp_import_from_8__module;
  if (PyModule_Check(tmp_import_name_from_70)) {
      tmp_assign_source_85 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_70,
          (PyObject *)moduledict_aiohttp,
          mod_consts[115],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_85 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_70, mod_consts[115]);
  }

  if (tmp_assign_source_85 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;

      goto try_except_handler_8;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_85);
 }
 goto try_end_8;
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

 CHECK_OBJECT(tmp_import_from_8__module);
 Py_DECREF(tmp_import_from_8__module);
 tmp_import_from_8__module = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_8;
 exception_value = exception_keeper_value_8;
 exception_tb = exception_keeper_tb_8;
 exception_lineno = exception_keeper_lineno_8;

 goto frame_exception_exit_1;
 // End of try:
 try_end_8:;
 CHECK_OBJECT(tmp_import_from_8__module);
 Py_DECREF(tmp_import_from_8__module);
 tmp_import_from_8__module = NULL;
 {
  PyObject *tmp_assign_source_86;
  PyObject *tmp_name_value_11;
  PyObject *tmp_globals_arg_value_11;
  PyObject *tmp_locals_arg_value_11;
  PyObject *tmp_fromlist_value_11;
  PyObject *tmp_level_value_11;
  tmp_name_value_11 = mod_consts[116];
  tmp_globals_arg_value_11 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_11 = Py_None;
  tmp_fromlist_value_11 = mod_consts[117];
  tmp_level_value_11 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 81;
  tmp_assign_source_86 = IMPORT_MODULE5(tstate, tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
  if (tmp_assign_source_86 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_9__module == NULL);
  tmp_import_from_9__module = tmp_assign_source_86;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_87;
  PyObject *tmp_import_name_from_71;
  CHECK_OBJECT(tmp_import_from_9__module);
  tmp_import_name_from_71 = tmp_import_from_9__module;
  if (PyModule_Check(tmp_import_name_from_71)) {
      tmp_assign_source_87 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_71,
          (PyObject *)moduledict_aiohttp,
          mod_consts[118],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_87 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_71, mod_consts[118]);
  }

  if (tmp_assign_source_87 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto try_except_handler_9;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_87);
 }
 {
  PyObject *tmp_assign_source_88;
  PyObject *tmp_import_name_from_72;
  CHECK_OBJECT(tmp_import_from_9__module);
  tmp_import_name_from_72 = tmp_import_from_9__module;
  if (PyModule_Check(tmp_import_name_from_72)) {
      tmp_assign_source_88 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_72,
          (PyObject *)moduledict_aiohttp,
          mod_consts[119],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_88 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_72, mod_consts[119]);
  }

  if (tmp_assign_source_88 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto try_except_handler_9;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_88);
 }
 {
  PyObject *tmp_assign_source_89;
  PyObject *tmp_import_name_from_73;
  CHECK_OBJECT(tmp_import_from_9__module);
  tmp_import_name_from_73 = tmp_import_from_9__module;
  if (PyModule_Check(tmp_import_name_from_73)) {
      tmp_assign_source_89 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_73,
          (PyObject *)moduledict_aiohttp,
          mod_consts[120],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_89 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_73, mod_consts[120]);
  }

  if (tmp_assign_source_89 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto try_except_handler_9;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_89);
 }
 {
  PyObject *tmp_assign_source_90;
  PyObject *tmp_import_name_from_74;
  CHECK_OBJECT(tmp_import_from_9__module);
  tmp_import_name_from_74 = tmp_import_from_9__module;
  if (PyModule_Check(tmp_import_name_from_74)) {
      tmp_assign_source_90 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_74,
          (PyObject *)moduledict_aiohttp,
          mod_consts[121],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_90 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_74, mod_consts[121]);
  }

  if (tmp_assign_source_90 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto try_except_handler_9;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_90);
 }
 {
  PyObject *tmp_assign_source_91;
  PyObject *tmp_import_name_from_75;
  CHECK_OBJECT(tmp_import_from_9__module);
  tmp_import_name_from_75 = tmp_import_from_9__module;
  if (PyModule_Check(tmp_import_name_from_75)) {
      tmp_assign_source_91 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_75,
          (PyObject *)moduledict_aiohttp,
          mod_consts[122],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_91 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_75, mod_consts[122]);
  }

  if (tmp_assign_source_91 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto try_except_handler_9;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_91);
 }
 goto try_end_9;
 // Exception handler code:
 try_except_handler_9:;
 exception_keeper_type_9 = exception_type;
 exception_keeper_value_9 = exception_value;
 exception_keeper_tb_9 = exception_tb;
 exception_keeper_lineno_9 = exception_lineno;
 exception_type = NULL;
 exception_value = NULL;
 exception_tb = NULL;
 exception_lineno = 0;

 CHECK_OBJECT(tmp_import_from_9__module);
 Py_DECREF(tmp_import_from_9__module);
 tmp_import_from_9__module = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_9;
 exception_value = exception_keeper_value_9;
 exception_tb = exception_keeper_tb_9;
 exception_lineno = exception_keeper_lineno_9;

 goto frame_exception_exit_1;
 // End of try:
 try_end_9:;
 CHECK_OBJECT(tmp_import_from_9__module);
 Py_DECREF(tmp_import_from_9__module);
 tmp_import_from_9__module = NULL;
 {
  PyObject *tmp_assign_source_92;
  PyObject *tmp_name_value_12;
  PyObject *tmp_globals_arg_value_12;
  PyObject *tmp_locals_arg_value_12;
  PyObject *tmp_fromlist_value_12;
  PyObject *tmp_level_value_12;
  tmp_name_value_12 = mod_consts[123];
  tmp_globals_arg_value_12 = (PyObject *)moduledict_aiohttp;
  tmp_locals_arg_value_12 = Py_None;
  tmp_fromlist_value_12 = mod_consts[124];
  tmp_level_value_12 = mod_consts[4];
  frame_45840e98dda664bc07531b3ec82182cc->m_frame.f_lineno = 88;
  tmp_assign_source_92 = IMPORT_MODULE5(tstate, tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
  if (tmp_assign_source_92 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_10__module == NULL);
  tmp_import_from_10__module = tmp_assign_source_92;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_93;
  PyObject *tmp_import_name_from_76;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_76 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_76)) {
      tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_76,
          (PyObject *)moduledict_aiohttp,
          mod_consts[125],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_93 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_76, mod_consts[125]);
  }

  if (tmp_assign_source_93 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_93);
 }
 {
  PyObject *tmp_assign_source_94;
  PyObject *tmp_import_name_from_77;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_77 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_77)) {
      tmp_assign_source_94 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_77,
          (PyObject *)moduledict_aiohttp,
          mod_consts[126],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_94 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_77, mod_consts[126]);
  }

  if (tmp_assign_source_94 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_94);
 }
 {
  PyObject *tmp_assign_source_95;
  PyObject *tmp_import_name_from_78;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_78 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_78)) {
      tmp_assign_source_95 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_78,
          (PyObject *)moduledict_aiohttp,
          mod_consts[127],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_95 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_78, mod_consts[127]);
  }

  if (tmp_assign_source_95 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_95);
 }
 {
  PyObject *tmp_assign_source_96;
  PyObject *tmp_import_name_from_79;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_79 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_79)) {
      tmp_assign_source_96 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_79,
          (PyObject *)moduledict_aiohttp,
          mod_consts[128],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_96 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_79, mod_consts[128]);
  }

  if (tmp_assign_source_96 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_96);
 }
 {
  PyObject *tmp_assign_source_97;
  PyObject *tmp_import_name_from_80;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_80 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_80)) {
      tmp_assign_source_97 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_80,
          (PyObject *)moduledict_aiohttp,
          mod_consts[129],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_97 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_80, mod_consts[129]);
  }

  if (tmp_assign_source_97 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_97);
 }
 {
  PyObject *tmp_assign_source_98;
  PyObject *tmp_import_name_from_81;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_81 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_81)) {
      tmp_assign_source_98 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_81,
          (PyObject *)moduledict_aiohttp,
          mod_consts[130],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_98 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_81, mod_consts[130]);
  }

  if (tmp_assign_source_98 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_98);
 }
 {
  PyObject *tmp_assign_source_99;
  PyObject *tmp_import_name_from_82;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_82 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_82)) {
      tmp_assign_source_99 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_82,
          (PyObject *)moduledict_aiohttp,
          mod_consts[131],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_99 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_82, mod_consts[131]);
  }

  if (tmp_assign_source_99 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_99);
 }
 {
  PyObject *tmp_assign_source_100;
  PyObject *tmp_import_name_from_83;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_83 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_83)) {
      tmp_assign_source_100 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_83,
          (PyObject *)moduledict_aiohttp,
          mod_consts[132],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_100 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_83, mod_consts[132]);
  }

  if (tmp_assign_source_100 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_100);
 }
 {
  PyObject *tmp_assign_source_101;
  PyObject *tmp_import_name_from_84;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_84 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_84)) {
      tmp_assign_source_101 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_84,
          (PyObject *)moduledict_aiohttp,
          mod_consts[133],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_101 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_84, mod_consts[133]);
  }

  if (tmp_assign_source_101 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_101);
 }
 {
  PyObject *tmp_assign_source_102;
  PyObject *tmp_import_name_from_85;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_85 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_85)) {
      tmp_assign_source_102 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_85,
          (PyObject *)moduledict_aiohttp,
          mod_consts[134],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_102 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_85, mod_consts[134]);
  }

  if (tmp_assign_source_102 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_102);
 }
 {
  PyObject *tmp_assign_source_103;
  PyObject *tmp_import_name_from_86;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_86 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_86)) {
      tmp_assign_source_103 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_86,
          (PyObject *)moduledict_aiohttp,
          mod_consts[135],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_103 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_86, mod_consts[135]);
  }

  if (tmp_assign_source_103 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_103);
 }
 {
  PyObject *tmp_assign_source_104;
  PyObject *tmp_import_name_from_87;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_87 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_87)) {
      tmp_assign_source_104 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_87,
          (PyObject *)moduledict_aiohttp,
          mod_consts[136],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_104 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_87, mod_consts[136]);
  }

  if (tmp_assign_source_104 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_104);
 }
 {
  PyObject *tmp_assign_source_105;
  PyObject *tmp_import_name_from_88;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_88 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_88)) {
      tmp_assign_source_105 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_88,
          (PyObject *)moduledict_aiohttp,
          mod_consts[137],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_105 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_88, mod_consts[137]);
  }

  if (tmp_assign_source_105 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_105);
 }
 {
  PyObject *tmp_assign_source_106;
  PyObject *tmp_import_name_from_89;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_89 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_89)) {
      tmp_assign_source_106 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_89,
          (PyObject *)moduledict_aiohttp,
          mod_consts[138],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_106 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_89, mod_consts[138]);
  }

  if (tmp_assign_source_106 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_106);
 }
 {
  PyObject *tmp_assign_source_107;
  PyObject *tmp_import_name_from_90;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_90 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_90)) {
      tmp_assign_source_107 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_90,
          (PyObject *)moduledict_aiohttp,
          mod_consts[139],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_107 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_90, mod_consts[139]);
  }

  if (tmp_assign_source_107 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_107);
 }
 {
  PyObject *tmp_assign_source_108;
  PyObject *tmp_import_name_from_91;
  CHECK_OBJECT(tmp_import_from_10__module);
  tmp_import_name_from_91 = tmp_import_from_10__module;
  if (PyModule_Check(tmp_import_name_from_91)) {
      tmp_assign_source_108 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_91,
          (PyObject *)moduledict_aiohttp,
          mod_consts[140],
          mod_consts[6]
      );
  } else {
      tmp_assign_source_108 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_91, mod_consts[140]);
  }

  if (tmp_assign_source_108 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto try_except_handler_10;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_108);
 }
 goto try_end_10;
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

 CHECK_OBJECT(tmp_import_from_10__module);
 Py_DECREF(tmp_import_from_10__module);
 tmp_import_from_10__module = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_10;
 exception_value = exception_keeper_value_10;
 exception_tb = exception_keeper_tb_10;
 exception_lineno = exception_keeper_lineno_10;

 goto frame_exception_exit_1;
 // End of try:
 try_end_10:;
 CHECK_OBJECT(tmp_import_from_10__module);
 Py_DECREF(tmp_import_from_10__module);
 tmp_import_from_10__module = NULL;
 {
  PyObject *tmp_assign_source_109;
  tmp_assign_source_109 = mod_consts[141];
  UPDATE_STRING_DICT0(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_109);
 }
 {
  PyObject *tmp_ass_subvalue_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_subscript_value_1;
  PyObject *tmp_ass_subscribed_1;
  PyObject *tmp_ass_subscript_1;
  tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[27]);

  if (unlikely(tmp_expression_value_3 == NULL)) {
      tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
  }

  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 114;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_1 = mod_consts[142];
  tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
  if (tmp_ass_subvalue_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 114;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[23]);

  if (unlikely(tmp_ass_subscribed_1 == NULL)) {
      tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
  }

  if (tmp_ass_subscribed_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_1);

   exception_lineno = 114;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_1 = mod_consts[0];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
  Py_DECREF(tmp_ass_subvalue_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 114;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_110;
  PyObject *tmp_annotations_1;
  PyObject *tmp_dict_key_1;
  PyObject *tmp_dict_value_1;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_subscript_value_2;
  tmp_dict_key_1 = mod_consts[143];
  tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[27]);

  if (unlikely(tmp_expression_value_4 == NULL)) {
      tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
  }

  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 222;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_2 = mod_consts[142];
  tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_2);
  if (tmp_dict_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 222;

      goto frame_exception_exit_1;
  }
  tmp_annotations_1 = _PyDict_NewPresized( 1 );
  tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
  Py_DECREF(tmp_dict_value_1);
  assert(!(tmp_res != 0));


  tmp_assign_source_110 = MAKE_FUNCTION_aiohttp$$$function__1___dir__(tmp_annotations_1);

  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_110);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_45840e98dda664bc07531b3ec82182cc, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_45840e98dda664bc07531b3ec82182cc->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_45840e98dda664bc07531b3ec82182cc, exception_lineno);
 }



 assertFrameObject(frame_45840e98dda664bc07531b3ec82182cc);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto module_exception_exit;
 frame_no_exception_1:;
 {
  PyObject *tmp_assign_source_111;
  PyObject *tmp_annotations_2;
  tmp_annotations_2 = DICT_COPY(tstate, mod_consts[145]);


  tmp_assign_source_111 = MAKE_FUNCTION_aiohttp$$$function__2___getattr__(tmp_annotations_2);

  UPDATE_STRING_DICT1(moduledict_aiohttp, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_111);
 }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("aiohttp", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_aiohttp);
    return module_aiohttp;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("aiohttp", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
