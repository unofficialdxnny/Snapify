/* Generated code for Python module 'aiohttp$formdata'
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

/* The "module_aiohttp$formdata" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiohttp$formdata;
PyDictObject *moduledict_aiohttp$formdata;

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
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("aiohttp.formdata"));
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
void checkModuleConstants_aiohttp$formdata(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 122; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b373cc48be078b12da95149515055f34;
static PyCodeObject *codeobj_098f833b2b4bbee8374dea6e5237a6f0;
static PyCodeObject *codeobj_e80cb26cbe0d2487e3e1ece70ca04931;
static PyCodeObject *codeobj_aad7e29fbb77f294103beb791d6686d9;
static PyCodeObject *codeobj_7bba9bb564ac559258c64383e73c532a;
static PyCodeObject *codeobj_c2d7eea55668465ce74ee31eb6ef6e37;
static PyCodeObject *codeobj_ed766ef3f6d6a0ddbb076accd3f724ae;
static PyCodeObject *codeobj_5212a9da0ea4b19df62c1f33dda8364a;
static PyCodeObject *codeobj_eb66da34a79493a9d739aed067bbc131;

static void createModuleCodeObjects(void) {
 module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[113]); CHECK_OBJECT(module_filename_obj);
 codeobj_b373cc48be078b12da95149515055f34 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[114], mod_consts[114], NULL, NULL, 0, 0, 0);
 codeobj_098f833b2b4bbee8374dea6e5237a6f0 = MAKE_CODE_OBJECT(module_filename_obj, 15, 0, mod_consts[93], mod_consts[93], mod_consts[115], NULL, 0, 0, 0);
 codeobj_e80cb26cbe0d2487e3e1ece70ca04931 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[111], mod_consts[112], mod_consts[116], NULL, 1, 0, 0);
 codeobj_aad7e29fbb77f294103beb791d6686d9 = MAKE_CODE_OBJECT(module_filename_obj, 21, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[99], mod_consts[100], mod_consts[117], NULL, 4, 0, 0);
 codeobj_7bba9bb564ac559258c64383e73c532a = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[63], mod_consts[110], mod_consts[118], NULL, 1, 0, 0);
 codeobj_c2d7eea55668465ce74ee31eb6ef6e37 = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[64], mod_consts[109], mod_consts[119], NULL, 1, 0, 0);
 codeobj_ed766ef3f6d6a0ddbb076accd3f724ae = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[34], mod_consts[107], mod_consts[120], NULL, 3, 3, 0);
 codeobj_5212a9da0ea4b19df62c1f33dda8364a = MAKE_CODE_OBJECT(module_filename_obj, 99, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[11], mod_consts[108], mod_consts[121], NULL, 1, 0, 0);
 codeobj_eb66da34a79493a9d739aed067bbc131 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[102], mod_consts[103], mod_consts[116], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_star_list(PyThreadState *tstate, PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__1___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__2_is_multipart(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__3_add_field(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__4_add_fields(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__5__gen_form_urlencoded(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__6__gen_form_data(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__7___call__(PyObject *annotations);


// The module function definitions.
static PyObject *impl_aiohttp$formdata$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_fields = python_pars[1];
 PyObject *par_quote_fields = python_pars[2];
 PyObject *par_charset = python_pars[3];
 struct Nuitka_FrameObject *frame_aad7e29fbb77f294103beb791d6686d9;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 int tmp_res;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_frame_aad7e29fbb77f294103beb791d6686d9 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_aad7e29fbb77f294103beb791d6686d9)) {
     Py_XDECREF(cache_frame_aad7e29fbb77f294103beb791d6686d9);

#if _DEBUG_REFCOUNTS
     if (cache_frame_aad7e29fbb77f294103beb791d6686d9 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_aad7e29fbb77f294103beb791d6686d9 = MAKE_FUNCTION_FRAME(tstate, codeobj_aad7e29fbb77f294103beb791d6686d9, module_aiohttp$formdata, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_aad7e29fbb77f294103beb791d6686d9->m_type_description == NULL);
 frame_aad7e29fbb77f294103beb791d6686d9 = cache_frame_aad7e29fbb77f294103beb791d6686d9;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_aad7e29fbb77f294103beb791d6686d9);
 assert(Py_REFCNT(frame_aad7e29fbb77f294103beb791d6686d9) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_assattr_target_1;
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[0]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  frame_aad7e29fbb77f294103beb791d6686d9->m_frame.f_lineno = 27;
  tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
      tstate,
      tmp_called_instance_1,
      mod_consts[1],
      PyTuple_GET_ITEM(mod_consts[2], 0)
  );

  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 27;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = MAKE_LIST_EMPTY(tstate, 0);
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
  Py_DECREF(tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  tmp_assattr_value_3 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 29;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_assattr_target_4;
  tmp_assattr_value_4 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_4 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[6], tmp_assattr_value_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 30;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_5;
  PyObject *tmp_assattr_target_5;
  CHECK_OBJECT(par_quote_fields);
  tmp_assattr_value_5 = par_quote_fields;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_5 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[7], tmp_assattr_value_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 31;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_6;
  PyObject *tmp_assattr_target_6;
  CHECK_OBJECT(par_charset);
  tmp_assattr_value_6 = par_charset;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_6 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 32;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
 }
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_isinstance_inst_1;
  PyObject *tmp_isinstance_cls_1;
  CHECK_OBJECT(par_fields);
  tmp_isinstance_inst_1 = par_fields;
  tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 34;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_list_arg_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_fields);
  tmp_expression_value_1 = par_fields;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  frame_aad7e29fbb77f294103beb791d6686d9->m_frame.f_lineno = 35;
  tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
  Py_DECREF(tmp_called_value_1);
  if (tmp_list_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_1 = MAKE_LIST(tstate, tmp_list_arg_1);
  Py_DECREF(tmp_list_arg_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = par_fields;
      assert(old != NULL);
      par_fields = tmp_assign_source_1;
      Py_DECREF(old);
  }

 }
 goto branch_end_1;
 branch_no_1:;
 {
  bool tmp_condition_result_2;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_isinstance_inst_2;
  PyObject *tmp_isinstance_cls_2;
  CHECK_OBJECT(par_fields);
  tmp_isinstance_inst_2 = par_fields;
  tmp_isinstance_cls_2 = mod_consts[10];
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;
   type_description_1 = "oooo";
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
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_tuple_element_1;
  CHECK_OBJECT(par_fields);
  tmp_tuple_element_1 = par_fields;
  tmp_assign_source_2 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_2, 0, tmp_tuple_element_1);
  {
      PyObject *old = par_fields;
      assert(old != NULL);
      par_fields = tmp_assign_source_2;
      Py_DECREF(old);
  }

 }
 branch_no_2:;
 branch_end_1:;
 {
  PyObject *tmp_dircall_arg1_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_dircall_arg2_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[11]);
  if (tmp_dircall_arg1_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 38;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_fields);
  tmp_dircall_arg2_1 = par_fields;
  Py_INCREF(tmp_dircall_arg2_1);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
      tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_star_list(tstate, dir_call_args);
  }
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 38;
   type_description_1 = "oooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_aad7e29fbb77f294103beb791d6686d9, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_aad7e29fbb77f294103beb791d6686d9->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_aad7e29fbb77f294103beb791d6686d9, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_aad7e29fbb77f294103beb791d6686d9,
     type_description_1,
     par_self,
     par_fields,
     par_quote_fields,
     par_charset
 );


 // Release cached frame if used for exception.
 if (frame_aad7e29fbb77f294103beb791d6686d9 == cache_frame_aad7e29fbb77f294103beb791d6686d9) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_aad7e29fbb77f294103beb791d6686d9);
     cache_frame_aad7e29fbb77f294103beb791d6686d9 = NULL;
 }

 assertFrameObject(frame_aad7e29fbb77f294103beb791d6686d9);

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
 CHECK_OBJECT(par_fields);
 Py_DECREF(par_fields);
 par_fields = NULL;
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

 Py_XDECREF(par_fields);
 par_fields = NULL;
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
 CHECK_OBJECT(par_quote_fields);
 Py_DECREF(par_quote_fields);
 CHECK_OBJECT(par_charset);
 Py_DECREF(par_charset);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_quote_fields);
 Py_DECREF(par_quote_fields);
 CHECK_OBJECT(par_charset);
 Py_DECREF(par_charset);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$formdata$$$function__2_is_multipart(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_eb66da34a79493a9d739aed067bbc131;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_eb66da34a79493a9d739aed067bbc131 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_eb66da34a79493a9d739aed067bbc131)) {
     Py_XDECREF(cache_frame_eb66da34a79493a9d739aed067bbc131);

#if _DEBUG_REFCOUNTS
     if (cache_frame_eb66da34a79493a9d739aed067bbc131 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_eb66da34a79493a9d739aed067bbc131 = MAKE_FUNCTION_FRAME(tstate, codeobj_eb66da34a79493a9d739aed067bbc131, module_aiohttp$formdata, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_eb66da34a79493a9d739aed067bbc131->m_type_description == NULL);
 frame_eb66da34a79493a9d739aed067bbc131 = cache_frame_eb66da34a79493a9d739aed067bbc131;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_eb66da34a79493a9d739aed067bbc131);
 assert(Py_REFCNT(frame_eb66da34a79493a9d739aed067bbc131) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;
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
     exception_tb = MAKE_TRACEBACK(frame_eb66da34a79493a9d739aed067bbc131, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_eb66da34a79493a9d739aed067bbc131->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_eb66da34a79493a9d739aed067bbc131, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_eb66da34a79493a9d739aed067bbc131,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_eb66da34a79493a9d739aed067bbc131 == cache_frame_eb66da34a79493a9d739aed067bbc131) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_eb66da34a79493a9d739aed067bbc131);
     cache_frame_eb66da34a79493a9d739aed067bbc131 = NULL;
 }

 assertFrameObject(frame_eb66da34a79493a9d739aed067bbc131);

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


static PyObject *impl_aiohttp$formdata$$$function__3_add_field(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_name = python_pars[1];
 PyObject *par_value = python_pars[2];
 PyObject *par_content_type = python_pars[3];
 PyObject *par_filename = python_pars[4];
 PyObject *par_content_transfer_encoding = python_pars[5];
 PyObject *var_type_options = NULL;
 PyObject *var_headers = NULL;
 struct Nuitka_FrameObject *frame_ed766ef3f6d6a0ddbb076accd3f724ae;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 bool tmp_result;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *tmp_dictset_value;
 PyObject *tmp_dictset_dict;
 PyObject *tmp_dictset_key;
 static struct Nuitka_FrameObject *cache_frame_ed766ef3f6d6a0ddbb076accd3f724ae = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_ed766ef3f6d6a0ddbb076accd3f724ae)) {
     Py_XDECREF(cache_frame_ed766ef3f6d6a0ddbb076accd3f724ae);

#if _DEBUG_REFCOUNTS
     if (cache_frame_ed766ef3f6d6a0ddbb076accd3f724ae == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_ed766ef3f6d6a0ddbb076accd3f724ae = MAKE_FUNCTION_FRAME(tstate, codeobj_ed766ef3f6d6a0ddbb076accd3f724ae, module_aiohttp$formdata, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_ed766ef3f6d6a0ddbb076accd3f724ae->m_type_description == NULL);
 frame_ed766ef3f6d6a0ddbb076accd3f724ae = cache_frame_ed766ef3f6d6a0ddbb076accd3f724ae;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_ed766ef3f6d6a0ddbb076accd3f724ae);
 assert(Py_REFCNT(frame_ed766ef3f6d6a0ddbb076accd3f724ae) == 2);

 // Framed code:
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_isinstance_inst_1;
  PyObject *tmp_isinstance_cls_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_value);
  tmp_isinstance_inst_1 = par_value;
  tmp_expression_value_1 = IMPORT_HARD_IO();
  assert(!(tmp_expression_value_1 == NULL));
  tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
  if (tmp_isinstance_cls_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
  Py_DECREF(tmp_isinstance_cls_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_True;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 55;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
 }
 goto branch_end_1;
 branch_no_1:;
 {
  nuitka_bool tmp_condition_result_2;
  PyObject *tmp_isinstance_inst_2;
  PyObject *tmp_isinstance_cls_2;
  CHECK_OBJECT(par_value);
  tmp_isinstance_inst_2 = par_value;
  tmp_isinstance_cls_2 = mod_consts[13];
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;
   type_description_1 = "oooooooNo";
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
  bool tmp_condition_result_3;
  int tmp_and_left_truth_1;
  bool tmp_and_left_value_1;
  bool tmp_and_right_value_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  CHECK_OBJECT(par_filename);
  tmp_cmp_expr_left_1 = par_filename;
  tmp_cmp_expr_right_1 = Py_None;
  tmp_and_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
  tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  CHECK_OBJECT(par_content_transfer_encoding);
  tmp_cmp_expr_left_2 = par_content_transfer_encoding;
  tmp_cmp_expr_right_2 = Py_None;
  tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
  tmp_condition_result_3 = tmp_and_right_value_1;
  goto and_end_1;
  and_left_1:;
  tmp_condition_result_3 = tmp_and_left_value_1;
  and_end_1:;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[14]);

  if (unlikely(tmp_expression_value_2 == NULL)) {
      tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
  }

  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[15]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_1 = mod_consts[16];
  tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[17]);

  if (unlikely(tmp_args_element_value_2 == NULL)) {
      tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
  }

  if (tmp_args_element_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 62;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  frame_ed766ef3f6d6a0ddbb076accd3f724ae->m_frame.f_lineno = 62;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_called_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_assign_source_1;
  CHECK_OBJECT(par_name);
  tmp_assign_source_1 = par_name;
  {
      PyObject *old = par_filename;
      assert(old != NULL);
      par_filename = tmp_assign_source_1;
      Py_INCREF(par_filename);
      Py_DECREF(old);
  }

 }
 branch_no_3:;
 branch_no_2:;
 branch_end_1:;
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_value_2;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_dict_key_1;
  PyObject *tmp_dict_value_1;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[18]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 65;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_dict_key_1 = mod_consts[19];
  CHECK_OBJECT(par_name);
  tmp_dict_value_1 = par_name;
  tmp_args_element_value_3 = _PyDict_NewPresized( 1 );
  tmp_res = PyDict_SetItem(tmp_args_element_value_3, tmp_dict_key_1, tmp_dict_value_1);
  assert(!(tmp_res != 0));
  frame_ed766ef3f6d6a0ddbb076accd3f724ae->m_frame.f_lineno = 65;
  tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_3);
  Py_DECREF(tmp_args_element_value_3);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 65;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  assert(var_type_options == NULL);
  var_type_options = tmp_assign_source_2;
 }
 {
  bool tmp_condition_result_4;
  int tmp_and_left_truth_2;
  bool tmp_and_left_value_2;
  bool tmp_and_right_value_2;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_isinstance_inst_3;
  PyObject *tmp_isinstance_cls_3;
  CHECK_OBJECT(par_filename);
  tmp_cmp_expr_left_3 = par_filename;
  tmp_cmp_expr_right_3 = Py_None;
  tmp_and_left_value_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
  tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
  if (tmp_and_left_truth_2 == 1) {
      goto and_right_2;
  } else {
      goto and_left_2;
  }
  and_right_2:;
  CHECK_OBJECT(par_filename);
  tmp_isinstance_inst_3 = par_filename;
  tmp_isinstance_cls_3 = (PyObject *)&PyUnicode_Type;
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
  tmp_condition_result_4 = tmp_and_right_value_2;
  goto and_end_2;
  and_left_2:;
  tmp_condition_result_4 = tmp_and_left_value_2;
  and_end_2:;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_raise_type_1;
  PyObject *tmp_make_exception_arg_1;
  PyObject *tmp_mod_expr_left_1;
  PyObject *tmp_mod_expr_right_1;
  tmp_mod_expr_left_1 = mod_consts[20];
  CHECK_OBJECT(par_filename);
  tmp_mod_expr_right_1 = par_filename;
  tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
  if (tmp_make_exception_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  frame_ed766ef3f6d6a0ddbb076accd3f724ae->m_frame.f_lineno = 67;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
  Py_DECREF(tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  exception_type = tmp_raise_type_1;
  exception_lineno = 67;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "oooooooNo";
  goto frame_exception_exit_1;
 }
 branch_no_4:;
 {
  nuitka_bool tmp_condition_result_5;
  int tmp_and_left_truth_3;
  nuitka_bool tmp_and_left_value_3;
  nuitka_bool tmp_and_right_value_3;
  PyObject *tmp_cmp_expr_left_4;
  PyObject *tmp_cmp_expr_right_4;
  PyObject *tmp_isinstance_inst_4;
  PyObject *tmp_isinstance_cls_4;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(par_filename);
  tmp_cmp_expr_left_4 = par_filename;
  tmp_cmp_expr_right_4 = Py_None;
  tmp_and_left_value_3 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_3 == 1) {
      goto and_right_3;
  } else {
      goto and_left_3;
  }
  and_right_3:;
  CHECK_OBJECT(par_value);
  tmp_isinstance_inst_4 = par_value;
  tmp_expression_value_3 = IMPORT_HARD_IO();
  assert(!(tmp_expression_value_3 == NULL));
  tmp_isinstance_cls_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
  if (tmp_isinstance_cls_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
  Py_DECREF(tmp_isinstance_cls_4);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  tmp_condition_result_5 = tmp_and_right_value_3;
  goto and_end_3;
  and_left_3:;
  tmp_condition_result_5 = tmp_and_left_value_3;
  and_end_3:;
  if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_called_value_3;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_args_element_value_5;
  tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[21]);

  if (unlikely(tmp_called_value_3 == NULL)) {
      tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
  }

  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 71;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_value);
  tmp_args_element_value_4 = par_value;
  CHECK_OBJECT(par_name);
  tmp_args_element_value_5 = par_name;
  frame_ed766ef3f6d6a0ddbb076accd3f724ae->m_frame.f_lineno = 71;
  {
      PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
      tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
  }

  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 71;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = par_filename;
      assert(old != NULL);
      par_filename = tmp_assign_source_3;
      Py_DECREF(old);
  }

 }
 branch_no_5:;
 {
  bool tmp_condition_result_6;
  PyObject *tmp_cmp_expr_left_5;
  PyObject *tmp_cmp_expr_right_5;
  CHECK_OBJECT(par_filename);
  tmp_cmp_expr_left_5 = par_filename;
  tmp_cmp_expr_right_5 = Py_None;
  tmp_condition_result_6 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
  if (tmp_condition_result_6 != false) {
      goto branch_yes_6;
  } else {
      goto branch_no_6;
  }
 }
 branch_yes_6:;
 {
  PyObject *tmp_ass_subvalue_1;
  PyObject *tmp_ass_subscribed_1;
  PyObject *tmp_ass_subscript_1;
  CHECK_OBJECT(par_filename);
  tmp_ass_subvalue_1 = par_filename;
  CHECK_OBJECT(var_type_options);
  tmp_ass_subscribed_1 = var_type_options;
  tmp_ass_subscript_1 = mod_consts[22];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_True;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 74;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
 }
 branch_no_6:;
 {
  PyObject *tmp_assign_source_4;
  tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
  assert(var_headers == NULL);
  var_headers = tmp_assign_source_4;
 }
 {
  bool tmp_condition_result_7;
  PyObject *tmp_cmp_expr_left_6;
  PyObject *tmp_cmp_expr_right_6;
  CHECK_OBJECT(par_content_type);
  tmp_cmp_expr_left_6 = par_content_type;
  tmp_cmp_expr_right_6 = Py_None;
  tmp_condition_result_7 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? true : false;
  if (tmp_condition_result_7 != false) {
      goto branch_yes_7;
  } else {
      goto branch_no_7;
  }
 }
 branch_yes_7:;
 {
  bool tmp_condition_result_8;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_isinstance_inst_5;
  PyObject *tmp_isinstance_cls_5;
  CHECK_OBJECT(par_content_type);
  tmp_isinstance_inst_5 = par_content_type;
  tmp_isinstance_cls_5 = (PyObject *)&PyUnicode_Type;
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_8 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_8 != false) {
      goto branch_yes_8;
  } else {
      goto branch_no_8;
  }
 }
 branch_yes_8:;
 {
  PyObject *tmp_raise_type_2;
  PyObject *tmp_make_exception_arg_2;
  PyObject *tmp_mod_expr_left_2;
  PyObject *tmp_mod_expr_right_2;
  tmp_mod_expr_left_2 = mod_consts[23];
  CHECK_OBJECT(par_content_type);
  tmp_mod_expr_right_2 = par_content_type;
  tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
  if (tmp_make_exception_arg_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 80;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  frame_ed766ef3f6d6a0ddbb076accd3f724ae->m_frame.f_lineno = 79;
  tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
  Py_DECREF(tmp_make_exception_arg_2);
  assert(!(tmp_raise_type_2 == NULL));
  exception_type = tmp_raise_type_2;
  exception_lineno = 79;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "oooooooNo";
  goto frame_exception_exit_1;
 }
 branch_no_8:;
 {
  PyObject *tmp_expression_value_4;
  CHECK_OBJECT(par_content_type);
  tmp_dictset_value = par_content_type;
  CHECK_OBJECT(var_headers);
  tmp_dictset_dict = var_headers;
  tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[24]);

  if (unlikely(tmp_expression_value_4 == NULL)) {
      tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
  }

  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_dictset_key = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[25]);
  if (tmp_dictset_key == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  assert(PyDict_CheckExact(tmp_dictset_dict));
  tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

  Py_DECREF(tmp_dictset_key);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  tmp_assattr_value_3 = Py_True;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
 }
 branch_no_7:;
 {
  bool tmp_condition_result_9;
  PyObject *tmp_cmp_expr_left_7;
  PyObject *tmp_cmp_expr_right_7;
  CHECK_OBJECT(par_content_transfer_encoding);
  tmp_cmp_expr_left_7 = par_content_transfer_encoding;
  tmp_cmp_expr_right_7 = Py_None;
  tmp_condition_result_9 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
  if (tmp_condition_result_9 != false) {
      goto branch_yes_9;
  } else {
      goto branch_no_9;
  }
 }
 branch_yes_9:;
 {
  bool tmp_condition_result_10;
  PyObject *tmp_operand_value_3;
  PyObject *tmp_isinstance_inst_6;
  PyObject *tmp_isinstance_cls_6;
  CHECK_OBJECT(par_content_transfer_encoding);
  tmp_isinstance_inst_6 = par_content_transfer_encoding;
  tmp_isinstance_cls_6 = (PyObject *)&PyUnicode_Type;
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 85;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 85;
   type_description_1 = "oooooooNo";
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
  PyObject *tmp_raise_type_3;
  PyObject *tmp_make_exception_arg_3;
  PyObject *tmp_mod_expr_left_3;
  PyObject *tmp_mod_expr_right_3;
  tmp_mod_expr_left_3 = mod_consts[26];
  CHECK_OBJECT(par_content_transfer_encoding);
  tmp_mod_expr_right_3 = par_content_transfer_encoding;
  tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
  if (tmp_make_exception_arg_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  frame_ed766ef3f6d6a0ddbb076accd3f724ae->m_frame.f_lineno = 86;
  tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
  Py_DECREF(tmp_make_exception_arg_3);
  assert(!(tmp_raise_type_3 == NULL));
  exception_type = tmp_raise_type_3;
  exception_lineno = 86;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "oooooooNo";
  goto frame_exception_exit_1;
 }
 branch_no_10:;
 {
  PyObject *tmp_called_value_4;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_6;
  PyObject *tmp_args_element_value_7;
  tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[14]);

  if (unlikely(tmp_expression_value_5 == NULL)) {
      tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
  }

  if (tmp_expression_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[15]);
  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_6 = mod_consts[27];
  tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[17]);

  if (unlikely(tmp_args_element_value_7 == NULL)) {
      tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
  }

  if (tmp_args_element_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_4);

   exception_lineno = 94;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  frame_ed766ef3f6d6a0ddbb076accd3f724ae->m_frame.f_lineno = 94;
  {
      PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
      tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
  }

  Py_DECREF(tmp_called_value_4);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_assattr_target_4;
  tmp_assattr_value_4 = Py_True;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_4 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[5], tmp_assattr_value_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 95;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
 }
 branch_no_9:;
 {
  PyObject *tmp_called_value_5;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_call_result_3;
  PyObject *tmp_args_element_value_8;
  PyObject *tmp_tuple_element_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_7 = par_self;
  tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[4]);
  if (tmp_expression_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[28]);
  Py_DECREF(tmp_expression_value_6);
  if (tmp_called_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_type_options);
  tmp_tuple_element_1 = var_type_options;
  tmp_args_element_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
  PyTuple_SET_ITEM0(tmp_args_element_value_8, 0, tmp_tuple_element_1);
  CHECK_OBJECT(var_headers);
  tmp_tuple_element_1 = var_headers;
  PyTuple_SET_ITEM0(tmp_args_element_value_8, 1, tmp_tuple_element_1);
  CHECK_OBJECT(par_value);
  tmp_tuple_element_1 = par_value;
  PyTuple_SET_ITEM0(tmp_args_element_value_8, 2, tmp_tuple_element_1);
  frame_ed766ef3f6d6a0ddbb076accd3f724ae->m_frame.f_lineno = 97;
  tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_8);
  Py_DECREF(tmp_called_value_5);
  Py_DECREF(tmp_args_element_value_8);
  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;
   type_description_1 = "oooooooNo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_3);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_ed766ef3f6d6a0ddbb076accd3f724ae, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_ed766ef3f6d6a0ddbb076accd3f724ae->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_ed766ef3f6d6a0ddbb076accd3f724ae, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_ed766ef3f6d6a0ddbb076accd3f724ae,
     type_description_1,
     par_self,
     par_name,
     par_value,
     par_content_type,
     par_filename,
     par_content_transfer_encoding,
     var_type_options,
     NULL,
     var_headers
 );


 // Release cached frame if used for exception.
 if (frame_ed766ef3f6d6a0ddbb076accd3f724ae == cache_frame_ed766ef3f6d6a0ddbb076accd3f724ae) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_ed766ef3f6d6a0ddbb076accd3f724ae);
     cache_frame_ed766ef3f6d6a0ddbb076accd3f724ae = NULL;
 }

 assertFrameObject(frame_ed766ef3f6d6a0ddbb076accd3f724ae);

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
 CHECK_OBJECT(par_filename);
 Py_DECREF(par_filename);
 par_filename = NULL;
 CHECK_OBJECT(var_type_options);
 Py_DECREF(var_type_options);
 var_type_options = NULL;
 CHECK_OBJECT(var_headers);
 Py_DECREF(var_headers);
 var_headers = NULL;
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

 Py_XDECREF(par_filename);
 par_filename = NULL;
 Py_XDECREF(var_type_options);
 var_type_options = NULL;
 Py_XDECREF(var_headers);
 var_headers = NULL;
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
 CHECK_OBJECT(par_name);
 Py_DECREF(par_name);
 CHECK_OBJECT(par_value);
 Py_DECREF(par_value);
 CHECK_OBJECT(par_content_type);
 Py_DECREF(par_content_type);
 CHECK_OBJECT(par_content_transfer_encoding);
 Py_DECREF(par_content_transfer_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_name);
 Py_DECREF(par_name);
 CHECK_OBJECT(par_value);
 Py_DECREF(par_value);
 CHECK_OBJECT(par_content_type);
 Py_DECREF(par_content_type);
 CHECK_OBJECT(par_content_transfer_encoding);
 Py_DECREF(par_content_transfer_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$formdata$$$function__4_add_fields(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_fields = python_pars[1];
 PyObject *var_to_add = NULL;
 PyObject *var_rec = NULL;
 PyObject *var_k = NULL;
 PyObject *var_fp = NULL;
 PyObject *tmp_tuple_unpack_1__element_1 = NULL;
 PyObject *tmp_tuple_unpack_1__element_2 = NULL;
 PyObject *tmp_tuple_unpack_1__source_iter = NULL;
 struct Nuitka_FrameObject *frame_5212a9da0ea4b19df62c1f33dda8364a;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
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
 static struct Nuitka_FrameObject *cache_frame_5212a9da0ea4b19df62c1f33dda8364a = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_5212a9da0ea4b19df62c1f33dda8364a)) {
     Py_XDECREF(cache_frame_5212a9da0ea4b19df62c1f33dda8364a);

#if _DEBUG_REFCOUNTS
     if (cache_frame_5212a9da0ea4b19df62c1f33dda8364a == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_5212a9da0ea4b19df62c1f33dda8364a = MAKE_FUNCTION_FRAME(tstate, codeobj_5212a9da0ea4b19df62c1f33dda8364a, module_aiohttp$formdata, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_5212a9da0ea4b19df62c1f33dda8364a->m_type_description == NULL);
 frame_5212a9da0ea4b19df62c1f33dda8364a = cache_frame_5212a9da0ea4b19df62c1f33dda8364a;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_5212a9da0ea4b19df62c1f33dda8364a);
 assert(Py_REFCNT(frame_5212a9da0ea4b19df62c1f33dda8364a) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_list_arg_1;
  CHECK_OBJECT(par_fields);
  tmp_list_arg_1 = par_fields;
  tmp_assign_source_1 = MAKE_LIST(tstate, tmp_list_arg_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 100;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  assert(var_to_add == NULL);
  var_to_add = tmp_assign_source_1;
 }
 loop_start_1:;
 {
  bool tmp_condition_result_1;
  PyObject *tmp_operand_value_1;
  if (var_to_add == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 102;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }

  tmp_operand_value_1 = var_to_add;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;
   type_description_1 = "oooooo";
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
 goto loop_end_1;
 branch_no_1:;
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_1;
  if (var_to_add == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 103;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_1 = var_to_add;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  frame_5212a9da0ea4b19df62c1f33dda8364a->m_frame.f_lineno = 103;
  tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[31]);

  Py_DECREF(tmp_called_value_1);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = var_rec;
      var_rec = tmp_assign_source_2;
      Py_XDECREF(old);
  }

 }
 {
  nuitka_bool tmp_condition_result_2;
  PyObject *tmp_isinstance_inst_1;
  PyObject *tmp_isinstance_cls_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(var_rec);
  tmp_isinstance_inst_1 = var_rec;
  tmp_expression_value_2 = IMPORT_HARD_IO();
  assert(!(tmp_expression_value_2 == NULL));
  tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
  if (tmp_isinstance_cls_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
  Py_DECREF(tmp_isinstance_cls_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;
   type_description_1 = "oooooo";
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
  PyObject *tmp_assign_source_3;
  PyObject *tmp_called_value_2;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[21]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_rec);
  tmp_args_element_value_1 = var_rec;
  tmp_args_element_value_2 = mod_consts[32];
  frame_5212a9da0ea4b19df62c1f33dda8364a->m_frame.f_lineno = 106;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
  }

  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  {
      PyObject *old = var_k;
      var_k = tmp_assign_source_3;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_args_element_value_4;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 107;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }

  tmp_called_instance_1 = par_self;
  CHECK_OBJECT(var_k);
  tmp_args_element_value_3 = var_k;
  CHECK_OBJECT(var_rec);
  tmp_args_element_value_4 = var_rec;
  frame_5212a9da0ea4b19df62c1f33dda8364a->m_frame.f_lineno = 107;
  {
      PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
      tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
          tstate,
          tmp_called_instance_1,
          mod_consts[34],
          call_args
      );
  }

  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 goto branch_end_2;
 branch_no_2:;
 {
  nuitka_bool tmp_condition_result_3;
  PyObject *tmp_isinstance_inst_2;
  PyObject *tmp_isinstance_cls_2;
  PyObject *tmp_tuple_element_1;
  CHECK_OBJECT(var_rec);
  tmp_isinstance_inst_2 = var_rec;
  tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[35]);

  if (unlikely(tmp_tuple_element_1 == NULL)) {
      tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
  }

  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 109;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  tmp_isinstance_cls_2 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_isinstance_cls_2, 0, tmp_tuple_element_1);
  tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[18]);

  if (unlikely(tmp_tuple_element_1 == NULL)) {
      tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
  }

  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 109;
   type_description_1 = "oooooo";
      goto tuple_build_exception_1;
  }
  PyTuple_SET_ITEM0(tmp_isinstance_cls_2, 1, tmp_tuple_element_1);
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_isinstance_cls_2);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
  Py_DECREF(tmp_isinstance_cls_2);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 109;
   type_description_1 = "oooooo";
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
  PyObject *tmp_called_value_3;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_5;
  PyObject *tmp_called_value_4;
  PyObject *tmp_expression_value_4;
  if (var_to_add == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 110;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_3 = var_to_add;
  tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[36]);
  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 110;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_rec);
  tmp_expression_value_4 = var_rec;
  tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[9]);
  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_3);

   exception_lineno = 110;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  frame_5212a9da0ea4b19df62c1f33dda8364a->m_frame.f_lineno = 110;
  tmp_args_element_value_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
  Py_DECREF(tmp_called_value_4);
  if (tmp_args_element_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_3);

   exception_lineno = 110;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  frame_5212a9da0ea4b19df62c1f33dda8364a->m_frame.f_lineno = 110;
  tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
  Py_DECREF(tmp_called_value_3);
  Py_DECREF(tmp_args_element_value_5);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 110;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 goto branch_end_3;
 branch_no_3:;
 {
  nuitka_bool tmp_condition_result_4;
  int tmp_and_left_truth_1;
  nuitka_bool tmp_and_left_value_1;
  nuitka_bool tmp_and_right_value_1;
  PyObject *tmp_isinstance_inst_3;
  PyObject *tmp_isinstance_cls_3;
  PyObject *tmp_cmp_expr_left_1;
  nuitka_digit tmp_cmp_expr_right_1;
  PyObject *tmp_len_arg_1;
  bool tmp_tmp_and_right_value_1_cbool_1;
  CHECK_OBJECT(var_rec);
  tmp_isinstance_inst_3 = var_rec;
  tmp_isinstance_cls_3 = mod_consts[10];
  tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 112;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 112;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  CHECK_OBJECT(var_rec);
  tmp_len_arg_1 = var_rec;
  tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 112;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = 2;
  tmp_tmp_and_right_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  Py_DECREF(tmp_cmp_expr_left_1);
  tmp_and_right_value_1 = tmp_tmp_and_right_value_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  tmp_condition_result_4 = tmp_and_right_value_1;
  goto and_end_1;
  and_left_1:;
  tmp_condition_result_4 = tmp_and_left_value_1;
  and_end_1:;
  if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 // Tried code:
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_iter_arg_1;
  CHECK_OBJECT(var_rec);
  tmp_iter_arg_1 = var_rec;
  tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 113;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__source_iter;
      tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_unpack_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
  if (tmp_assign_source_5 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooo";
   exception_lineno = 113;
      goto try_except_handler_3;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_1;
      tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_unpack_2;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
  if (tmp_assign_source_6 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooo";
   exception_lineno = 113;
      goto try_except_handler_3;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_2;
      tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

     type_description_1 = "oooooo";
     exception_lineno = 113;
              goto try_except_handler_3;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[37];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "oooooo";
   exception_lineno = 113;
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
  PyObject *tmp_assign_source_7;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
  tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
  {
      PyObject *old = var_k;
      var_k = tmp_assign_source_7;
      Py_INCREF(var_k);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;

 {
  PyObject *tmp_assign_source_8;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
  tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
  {
      PyObject *old = var_fp;
      var_fp = tmp_assign_source_8;
      Py_INCREF(var_fp);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;

 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_call_result_3;
  PyObject *tmp_args_element_value_6;
  PyObject *tmp_args_element_value_7;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 114;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }

  tmp_called_instance_2 = par_self;
  CHECK_OBJECT(var_k);
  tmp_args_element_value_6 = var_k;
  CHECK_OBJECT(var_fp);
  tmp_args_element_value_7 = var_fp;
  frame_5212a9da0ea4b19df62c1f33dda8364a->m_frame.f_lineno = 114;
  {
      PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
      tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
          tstate,
          tmp_called_instance_2,
          mod_consts[34],
          call_args
      );
  }

  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 114;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_3);
 }
 goto branch_end_4;
 branch_no_4:;
 {
  PyObject *tmp_raise_type_1;
  PyObject *tmp_make_exception_arg_1;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_arg_value_1_1;
  tmp_kw_call_arg_value_0_1 = mod_consts[38];
  CHECK_OBJECT(var_rec);
  tmp_kw_call_arg_value_1_1 = var_rec;
  frame_5212a9da0ea4b19df62c1f33dda8364a->m_frame.f_lineno = 118;
  {
      PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
      tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
  }

  if (tmp_make_exception_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 118;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  frame_5212a9da0ea4b19df62c1f33dda8364a->m_frame.f_lineno = 117;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
  Py_DECREF(tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  exception_type = tmp_raise_type_1;
  exception_lineno = 117;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "oooooo";
  goto frame_exception_exit_1;
 }
 branch_end_4:;
 branch_end_3:;
 branch_end_2:;
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 102;
  type_description_1 = "oooooo";
     goto frame_exception_exit_1;
 }
 goto loop_start_1;
 loop_end_1:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_5212a9da0ea4b19df62c1f33dda8364a, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_5212a9da0ea4b19df62c1f33dda8364a->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_5212a9da0ea4b19df62c1f33dda8364a, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_5212a9da0ea4b19df62c1f33dda8364a,
     type_description_1,
     par_self,
     par_fields,
     var_to_add,
     var_rec,
     var_k,
     var_fp
 );


 // Release cached frame if used for exception.
 if (frame_5212a9da0ea4b19df62c1f33dda8364a == cache_frame_5212a9da0ea4b19df62c1f33dda8364a) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_5212a9da0ea4b19df62c1f33dda8364a);
     cache_frame_5212a9da0ea4b19df62c1f33dda8364a = NULL;
 }

 assertFrameObject(frame_5212a9da0ea4b19df62c1f33dda8364a);

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
 Py_XDECREF(var_to_add);
 var_to_add = NULL;
 Py_XDECREF(var_rec);
 var_rec = NULL;
 Py_XDECREF(var_k);
 var_k = NULL;
 Py_XDECREF(var_fp);
 var_fp = NULL;
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

 Py_XDECREF(var_to_add);
 var_to_add = NULL;
 Py_XDECREF(var_rec);
 var_rec = NULL;
 Py_XDECREF(var_k);
 var_k = NULL;
 Py_XDECREF(var_fp);
 var_fp = NULL;
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
 CHECK_OBJECT(par_fields);
 Py_DECREF(par_fields);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_fields);
 Py_DECREF(par_fields);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$formdata$$$function__5__gen_form_urlencoded(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *var_data = NULL;
 PyObject *var_type_options = NULL;
 PyObject *var__ = NULL;
 PyObject *var_value = NULL;
 PyObject *var_charset = NULL;
 PyObject *var_content_type = NULL;
 PyObject *tmp_for_loop_1__for_iterator = NULL;
 PyObject *tmp_for_loop_1__iter_value = NULL;
 PyObject *tmp_tuple_unpack_1__element_1 = NULL;
 PyObject *tmp_tuple_unpack_1__element_2 = NULL;
 PyObject *tmp_tuple_unpack_1__element_3 = NULL;
 PyObject *tmp_tuple_unpack_1__source_iter = NULL;
 struct Nuitka_FrameObject *frame_c2d7eea55668465ce74ee31eb6ef6e37;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
 bool tmp_result;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_c2d7eea55668465ce74ee31eb6ef6e37 = NULL;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = MAKE_LIST_EMPTY(tstate, 0);
  assert(var_data == NULL);
  var_data = tmp_assign_source_1;
 }
 // Tried code:
 if (isFrameUnusable(cache_frame_c2d7eea55668465ce74ee31eb6ef6e37)) {
     Py_XDECREF(cache_frame_c2d7eea55668465ce74ee31eb6ef6e37);

#if _DEBUG_REFCOUNTS
     if (cache_frame_c2d7eea55668465ce74ee31eb6ef6e37 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_c2d7eea55668465ce74ee31eb6ef6e37 = MAKE_FUNCTION_FRAME(tstate, codeobj_c2d7eea55668465ce74ee31eb6ef6e37, module_aiohttp$formdata, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_c2d7eea55668465ce74ee31eb6ef6e37->m_type_description == NULL);
 frame_c2d7eea55668465ce74ee31eb6ef6e37 = cache_frame_c2d7eea55668465ce74ee31eb6ef6e37;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_c2d7eea55668465ce74ee31eb6ef6e37);
 assert(Py_REFCNT(frame_c2d7eea55668465ce74ee31eb6ef6e37) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_iter_arg_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
  if (tmp_iter_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 126;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
  Py_DECREF(tmp_iter_arg_1);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 126;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  assert(tmp_for_loop_1__for_iterator == NULL);
  tmp_for_loop_1__for_iterator = tmp_assign_source_2;
 }
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_3;
  CHECK_OBJECT(tmp_for_loop_1__for_iterator);
  tmp_next_source_1 = tmp_for_loop_1__for_iterator;
  tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_3 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    type_description_1 = "ooooooo";
    exception_lineno = 126;
          goto try_except_handler_2;
      }
  }

  {
      PyObject *old = tmp_for_loop_1__iter_value;
      tmp_for_loop_1__iter_value = tmp_assign_source_3;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_iter_arg_2;
  CHECK_OBJECT(tmp_for_loop_1__iter_value);
  tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
  tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 126;
   type_description_1 = "ooooooo";
      goto try_except_handler_3;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__source_iter;
      tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_unpack_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 3);
  if (tmp_assign_source_5 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooo";
   exception_lineno = 126;
      goto try_except_handler_4;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_1;
      tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_unpack_2;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 3);
  if (tmp_assign_source_6 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooo";
   exception_lineno = 126;
      goto try_except_handler_4;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_2;
      tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_7;
  PyObject *tmp_unpack_3;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 3);
  if (tmp_assign_source_7 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "ooooooo";
   exception_lineno = 126;
      goto try_except_handler_4;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_3;
      tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
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

     type_description_1 = "ooooooo";
     exception_lineno = 126;
              goto try_except_handler_4;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[39];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "ooooooo";
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
  PyObject *tmp_assign_source_8;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
  tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
  {
      PyObject *old = var_type_options;
      var_type_options = tmp_assign_source_8;
      Py_INCREF(var_type_options);
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
      PyObject *old = var__;
      var__ = tmp_assign_source_9;
      Py_INCREF(var__);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;

 {
  PyObject *tmp_assign_source_10;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
  tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
  {
      PyObject *old = var_value;
      var_value = tmp_assign_source_10;
      Py_INCREF(var_value);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_3);
 tmp_tuple_unpack_1__element_3 = NULL;

 {
  PyObject *tmp_list_arg_value_1;
  PyObject *tmp_item_value_1;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_subscript_value_1;
  if (var_data == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 127;
   type_description_1 = "ooooooo";
      goto try_except_handler_2;
  }

  tmp_list_arg_value_1 = var_data;
  CHECK_OBJECT(var_type_options);
  tmp_expression_value_2 = var_type_options;
  tmp_subscript_value_1 = mod_consts[19];
  tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 127;
   type_description_1 = "ooooooo";
      goto try_except_handler_2;
  }
  tmp_item_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM(tmp_item_value_1, 0, tmp_tuple_element_1);
  CHECK_OBJECT(var_value);
  tmp_tuple_element_1 = var_value;
  PyTuple_SET_ITEM0(tmp_item_value_1, 1, tmp_tuple_element_1);
  tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
  assert(!(tmp_result == false));
 }
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 126;
  type_description_1 = "ooooooo";
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
  PyObject *tmp_assign_source_11;
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_expression_value_4;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[8]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 129;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_1);
  if (tmp_condition_result_1 != false) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_4 = par_self;
  tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[8]);
  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 129;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  tmp_assign_source_11 = mod_consts[41];
  Py_INCREF(tmp_assign_source_11);
  condexpr_end_1:;
  assert(var_charset == NULL);
  var_charset = tmp_assign_source_11;
 }
 {
  nuitka_bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  CHECK_OBJECT(var_charset);
  tmp_cmp_expr_left_2 = var_charset;
  tmp_cmp_expr_right_2 = mod_consts[41];
  tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 131;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_assign_source_12;
  tmp_assign_source_12 = mod_consts[42];
  assert(var_content_type == NULL);
  Py_INCREF(tmp_assign_source_12);
  var_content_type = tmp_assign_source_12;
 }
 goto branch_end_1;
 branch_no_1:;
 {
  PyObject *tmp_assign_source_13;
  PyObject *tmp_mod_expr_left_1;
  PyObject *tmp_mod_expr_right_1;
  tmp_mod_expr_left_1 = mod_consts[43];
  CHECK_OBJECT(var_charset);
  tmp_mod_expr_right_1 = var_charset;
  tmp_assign_source_13 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
  if (tmp_assign_source_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 134;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  assert(var_content_type == NULL);
  var_content_type = tmp_assign_source_13;
 }
 branch_end_1:;
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_called_value_3;
  PyObject *tmp_kw_call_arg_value_0_2;
  PyObject *tmp_kw_call_dict_value_0_1;
  PyObject *tmp_kw_call_dict_value_1_1;
  PyObject *tmp_kw_call_dict_value_0_2;
  tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[44]);

  if (unlikely(tmp_expression_value_5 == NULL)) {
      tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
  }

  if (tmp_expression_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[45]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[46]);

  if (unlikely(tmp_called_value_3 == NULL)) {
      tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[46]);
  }

  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 137;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  if (var_data == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 137;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }

  tmp_kw_call_arg_value_0_2 = var_data;
  tmp_kw_call_dict_value_0_1 = Py_True;
  CHECK_OBJECT(var_charset);
  tmp_kw_call_dict_value_1_1 = var_charset;
  frame_c2d7eea55668465ce74ee31eb6ef6e37->m_frame.f_lineno = 137;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_2};
      PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
      tmp_expression_value_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[47]);
  }

  if (tmp_expression_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 137;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[48]);
  Py_DECREF(tmp_expression_value_6);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 137;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  frame_c2d7eea55668465ce74ee31eb6ef6e37->m_frame.f_lineno = 137;
  tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
  Py_DECREF(tmp_called_value_2);
  if (tmp_kw_call_arg_value_0_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 137;
   type_description_1 = "ooooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(var_content_type);
  tmp_kw_call_dict_value_0_2 = var_content_type;
  frame_c2d7eea55668465ce74ee31eb6ef6e37->m_frame.f_lineno = 136;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_1};
      PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
      tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[49]);
  }

  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_kw_call_arg_value_0_1);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 136;
   type_description_1 = "ooooooo";
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
     exception_tb = MAKE_TRACEBACK(frame_c2d7eea55668465ce74ee31eb6ef6e37, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_c2d7eea55668465ce74ee31eb6ef6e37->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_c2d7eea55668465ce74ee31eb6ef6e37, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_c2d7eea55668465ce74ee31eb6ef6e37,
     type_description_1,
     par_self,
     var_data,
     var_type_options,
     var__,
     var_value,
     var_charset,
     var_content_type
 );


 // Release cached frame if used for exception.
 if (frame_c2d7eea55668465ce74ee31eb6ef6e37 == cache_frame_c2d7eea55668465ce74ee31eb6ef6e37) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_c2d7eea55668465ce74ee31eb6ef6e37);
     cache_frame_c2d7eea55668465ce74ee31eb6ef6e37 = NULL;
 }

 assertFrameObject(frame_c2d7eea55668465ce74ee31eb6ef6e37);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 Py_XDECREF(var_data);
 var_data = NULL;
 Py_XDECREF(var_type_options);
 var_type_options = NULL;
 Py_XDECREF(var__);
 var__ = NULL;
 Py_XDECREF(var_value);
 var_value = NULL;
 CHECK_OBJECT(var_charset);
 Py_DECREF(var_charset);
 var_charset = NULL;
 CHECK_OBJECT(var_content_type);
 Py_DECREF(var_content_type);
 var_content_type = NULL;
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

 Py_XDECREF(var_data);
 var_data = NULL;
 Py_XDECREF(var_type_options);
 var_type_options = NULL;
 Py_XDECREF(var__);
 var__ = NULL;
 Py_XDECREF(var_value);
 var_value = NULL;
 Py_XDECREF(var_charset);
 var_charset = NULL;
 Py_XDECREF(var_content_type);
 var_content_type = NULL;
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


static PyObject *impl_aiohttp$formdata$$$function__6__gen_form_data(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *var_dispparams = NULL;
 PyObject *var_headers = NULL;
 PyObject *var_value = NULL;
 PyObject *var_part = NULL;
 PyObject *var_exc = NULL;
 PyObject *tmp_for_loop_1__for_iterator = NULL;
 PyObject *tmp_for_loop_1__iter_value = NULL;
 PyObject *tmp_tuple_unpack_1__element_1 = NULL;
 PyObject *tmp_tuple_unpack_1__element_2 = NULL;
 PyObject *tmp_tuple_unpack_1__element_3 = NULL;
 PyObject *tmp_tuple_unpack_1__source_iter = NULL;
 struct Nuitka_FrameObject *frame_7bba9bb564ac559258c64383e73c532a;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 PyObject *tmp_iterator_attempt;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
 PyObject *exception_keeper_type_2;
 PyObject *exception_keeper_value_2;
 PyTracebackObject *exception_keeper_tb_2;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
 int tmp_res;
 PyObject *exception_keeper_type_3;
 PyObject *exception_keeper_value_3;
 PyTracebackObject *exception_keeper_tb_3;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
 PyObject *exception_keeper_type_4;
 PyObject *exception_keeper_value_4;
 PyTracebackObject *exception_keeper_tb_4;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
 bool tmp_result;
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_keeper_type_6;
 PyObject *exception_keeper_value_6;
 PyTracebackObject *exception_keeper_tb_6;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_7bba9bb564ac559258c64383e73c532a = NULL;
 PyObject *exception_keeper_type_7;
 PyObject *exception_keeper_value_7;
 PyTracebackObject *exception_keeper_tb_7;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_7bba9bb564ac559258c64383e73c532a)) {
     Py_XDECREF(cache_frame_7bba9bb564ac559258c64383e73c532a);

#if _DEBUG_REFCOUNTS
     if (cache_frame_7bba9bb564ac559258c64383e73c532a == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_7bba9bb564ac559258c64383e73c532a = MAKE_FUNCTION_FRAME(tstate, codeobj_7bba9bb564ac559258c64383e73c532a, module_aiohttp$formdata, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_7bba9bb564ac559258c64383e73c532a->m_type_description == NULL);
 frame_7bba9bb564ac559258c64383e73c532a = cache_frame_7bba9bb564ac559258c64383e73c532a;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_7bba9bb564ac559258c64383e73c532a);
 assert(Py_REFCNT(frame_7bba9bb564ac559258c64383e73c532a) == 2);

 // Framed code:
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_attribute_value_1;
  int tmp_truth_name_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
  if (tmp_attribute_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_1);

   exception_lineno = 143;
   type_description_1 = "oooooo";
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
 {
  PyObject *tmp_raise_type_1;
  PyObject *tmp_make_exception_arg_1;
  tmp_make_exception_arg_1 = mod_consts[50];
  frame_7bba9bb564ac559258c64383e73c532a->m_frame.f_lineno = 144;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  exception_type = tmp_raise_type_1;
  exception_lineno = 144;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "oooooo";
  goto frame_exception_exit_1;
 }
 branch_no_1:;
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_iter_arg_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
  if (tmp_iter_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
  Py_DECREF(tmp_iter_arg_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
  assert(tmp_for_loop_1__for_iterator == NULL);
  tmp_for_loop_1__for_iterator = tmp_assign_source_1;
 }
 // Tried code:
 loop_start_1:;
 {
  PyObject *tmp_next_source_1;
  PyObject *tmp_assign_source_2;
  CHECK_OBJECT(tmp_for_loop_1__for_iterator);
  tmp_next_source_1 = tmp_for_loop_1__for_iterator;
  tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
  if (tmp_assign_source_2 == NULL) {
      if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

          goto loop_end_1;
      } else {

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    type_description_1 = "oooooo";
    exception_lineno = 145;
          goto try_except_handler_2;
      }
  }

  {
      PyObject *old = tmp_for_loop_1__iter_value;
      tmp_for_loop_1__iter_value = tmp_assign_source_2;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_iter_arg_2;
  CHECK_OBJECT(tmp_for_loop_1__iter_value);
  tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
  tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;
   type_description_1 = "oooooo";
      goto try_except_handler_3;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__source_iter;
      tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
      Py_XDECREF(old);
  }

 }
 // Tried code:
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_unpack_1;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 3);
  if (tmp_assign_source_4 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooo";
   exception_lineno = 145;
      goto try_except_handler_4;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_1;
      tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_unpack_2;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 3);
  if (tmp_assign_source_5 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooo";
   exception_lineno = 145;
      goto try_except_handler_4;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_2;
      tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_unpack_3;
  CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
  tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
  tmp_assign_source_6 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 3);
  if (tmp_assign_source_6 == NULL) {
      if (!HAS_ERROR_OCCURRED(tstate)) {
          exception_type = PyExc_StopIteration;
          Py_INCREF(exception_type);
          exception_value = NULL;
          exception_tb = NULL;
      } else {
          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      }


   type_description_1 = "oooooo";
   exception_lineno = 145;
      goto try_except_handler_4;
  }
  {
      PyObject *old = tmp_tuple_unpack_1__element_3;
      tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
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

     type_description_1 = "oooooo";
     exception_lineno = 145;
              goto try_except_handler_4;
          }
      }
  } else {
      Py_DECREF(tmp_iterator_attempt);

      exception_type = PyExc_ValueError;
      Py_INCREF(PyExc_ValueError);
      exception_value = mod_consts[39];
      Py_INCREF(exception_value);
      exception_tb = NULL;

   type_description_1 = "oooooo";
   exception_lineno = 145;
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
  PyObject *tmp_assign_source_7;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
  tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
  {
      PyObject *old = var_dispparams;
      var_dispparams = tmp_assign_source_7;
      Py_INCREF(var_dispparams);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_1);
 tmp_tuple_unpack_1__element_1 = NULL;

 {
  PyObject *tmp_assign_source_8;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
  tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
  {
      PyObject *old = var_headers;
      var_headers = tmp_assign_source_8;
      Py_INCREF(var_headers);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_2);
 tmp_tuple_unpack_1__element_2 = NULL;

 {
  PyObject *tmp_assign_source_9;
  CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
  tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
  {
      PyObject *old = var_value;
      var_value = tmp_assign_source_9;
      Py_INCREF(var_value);
      Py_XDECREF(old);
  }

 }
 Py_XDECREF(tmp_tuple_unpack_1__element_3);
 tmp_tuple_unpack_1__element_3 = NULL;

 // Tried code:
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_3;
  tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[24]);

  if (unlikely(tmp_expression_value_3 == NULL)) {
      tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
  }

  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 147;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[25]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 147;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  CHECK_OBJECT(var_headers);
  tmp_cmp_expr_right_1 = var_headers;
  tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
  Py_DECREF(tmp_cmp_expr_left_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 147;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  tmp_condition_result_2 = (tmp_res == 1) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_assign_source_10;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_dict_value_0_1;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_subscript_value_1;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_kw_call_dict_value_1_1;
  PyObject *tmp_kw_call_dict_value_2_1;
  PyObject *tmp_expression_value_7;
  tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[44]);

  if (unlikely(tmp_expression_value_4 == NULL)) {
      tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
  }

  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 148;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[51]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 148;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  CHECK_OBJECT(var_value);
  tmp_kw_call_arg_value_0_1 = var_value;
  CHECK_OBJECT(var_headers);
  tmp_expression_value_5 = var_headers;
  tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[24]);

  if (unlikely(tmp_expression_value_6 == NULL)) {
      tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
  }

  if (tmp_expression_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 150;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[25]);
  if (tmp_subscript_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 150;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
  Py_DECREF(tmp_subscript_value_1);
  if (tmp_kw_call_dict_value_0_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 150;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  CHECK_OBJECT(var_headers);
  tmp_kw_call_dict_value_1_1 = var_headers;
  if (par_self == NULL) {
   Py_DECREF(tmp_called_value_1);
   Py_DECREF(tmp_kw_call_dict_value_0_1);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 152;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }

  tmp_expression_value_7 = par_self;
  tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[8]);
  if (tmp_kw_call_dict_value_2_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);
   Py_DECREF(tmp_kw_call_dict_value_0_1);

   exception_lineno = 152;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  frame_7bba9bb564ac559258c64383e73c532a->m_frame.f_lineno = 148;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_1};
      PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
      tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[52]);
  }

  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_kw_call_dict_value_0_1);
  Py_DECREF(tmp_kw_call_dict_value_2_1);
  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 148;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  {
      PyObject *old = var_part;
      var_part = tmp_assign_source_10;
      Py_XDECREF(old);
  }

 }
 goto branch_end_2;
 branch_no_2:;
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_kw_call_arg_value_0_2;
  PyObject *tmp_kw_call_dict_value_0_2;
  PyObject *tmp_kw_call_dict_value_1_2;
  PyObject *tmp_expression_value_9;
  tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[44]);

  if (unlikely(tmp_expression_value_8 == NULL)) {
      tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
  }

  if (tmp_expression_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 155;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[51]);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 155;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  CHECK_OBJECT(var_value);
  tmp_kw_call_arg_value_0_2 = var_value;
  CHECK_OBJECT(var_headers);
  tmp_kw_call_dict_value_0_2 = var_headers;
  if (par_self == NULL) {
   Py_DECREF(tmp_called_value_2);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 156;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }

  tmp_expression_value_9 = par_self;
  tmp_kw_call_dict_value_1_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[8]);
  if (tmp_kw_call_dict_value_1_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_2);

   exception_lineno = 156;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  frame_7bba9bb564ac559258c64383e73c532a->m_frame.f_lineno = 155;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_2};
      PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
      tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[53]);
  }

  Py_DECREF(tmp_called_value_2);
  Py_DECREF(tmp_kw_call_dict_value_1_2);
  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 155;
   type_description_1 = "oooooo";
      goto try_except_handler_5;
  }
  {
      PyObject *old = var_part;
      var_part = tmp_assign_source_11;
      Py_XDECREF(old);
  }

 }
 branch_end_2:;
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

 // Preserve existing published exception id 1.
 exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

 if (exception_keeper_tb_3 == NULL) {
     exception_keeper_tb_3 = MAKE_TRACEBACK(frame_7bba9bb564ac559258c64383e73c532a, exception_keeper_lineno_3);
 } else if (exception_keeper_lineno_3 != 0) {
     exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_7bba9bb564ac559258c64383e73c532a, exception_keeper_lineno_3);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
 // Tried code:
 {
  bool tmp_condition_result_3;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_2 = PyExc_Exception;
  tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  assert(!(tmp_res == -1));
  tmp_condition_result_3 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_assign_source_12;
  tmp_assign_source_12 = EXC_VALUE(PyThreadState_GET());
  assert(var_exc == NULL);
  Py_INCREF(tmp_assign_source_12);
  var_exc = tmp_assign_source_12;
 }
 // Tried code:
 {
  PyObject *tmp_raise_type_2;
  PyObject *tmp_make_exception_arg_2;
  PyObject *tmp_mod_expr_left_1;
  PyObject *tmp_mod_expr_right_1;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_type_arg_1;
  PyObject *tmp_raise_cause_1;
  tmp_mod_expr_left_1 = mod_consts[54];
  if (var_value == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 161;
   type_description_1 = "oooooo";
      goto try_except_handler_7;
  }

  tmp_type_arg_1 = var_value;
  tmp_tuple_element_1 = BUILTIN_TYPE1(tmp_type_arg_1);
  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 161;
   type_description_1 = "oooooo";
      goto try_except_handler_7;
  }
  tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
  PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
  if (var_headers == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 161;
   type_description_1 = "oooooo";
      goto tuple_build_exception_1;
  }

  tmp_tuple_element_1 = var_headers;
  PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
  if (var_value == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 161;
   type_description_1 = "oooooo";
      goto tuple_build_exception_1;
  }

  tmp_tuple_element_1 = var_value;
  PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_mod_expr_right_1);
  goto try_except_handler_7;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
  Py_DECREF(tmp_mod_expr_right_1);
  if (tmp_make_exception_arg_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 161;
   type_description_1 = "oooooo";
      goto try_except_handler_7;
  }
  frame_7bba9bb564ac559258c64383e73c532a->m_frame.f_lineno = 159;
  tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
  Py_DECREF(tmp_make_exception_arg_2);
  assert(!(tmp_raise_type_2 == NULL));
  CHECK_OBJECT(var_exc);
  tmp_raise_cause_1 = var_exc;
  exception_type = tmp_raise_type_2;
  exception_value = NULL;
  Py_INCREF(tmp_raise_cause_1);
  exception_lineno = 162;
  RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
  type_description_1 = "oooooo";
  goto try_except_handler_7;
 }
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
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

 Py_XDECREF(var_exc);
 var_exc = NULL;

 // Re-raise.
 exception_type = exception_keeper_type_4;
 exception_value = exception_keeper_value_4;
 exception_tb = exception_keeper_tb_4;
 exception_lineno = exception_keeper_lineno_4;

 goto try_except_handler_6;
 // End of try:
 goto branch_end_3;
 branch_no_3:;
 tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
 if (unlikely(tmp_result == false)) {
     exception_lineno = 146;
 }

 if (exception_tb && exception_tb->tb_frame == &frame_7bba9bb564ac559258c64383e73c532a->m_frame) frame_7bba9bb564ac559258c64383e73c532a->m_frame.f_lineno = exception_tb->tb_lineno;
 type_description_1 = "oooooo";
 goto try_except_handler_6;
 branch_end_3:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
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

 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

 // Re-raise.
 exception_type = exception_keeper_type_5;
 exception_value = exception_keeper_value_5;
 exception_tb = exception_keeper_tb_5;
 exception_lineno = exception_keeper_lineno_5;

 goto try_except_handler_2;
 // End of try:
 // End of try:
 try_end_3:;
 {
  nuitka_bool tmp_condition_result_4;
  int tmp_truth_name_2;
  CHECK_OBJECT(var_dispparams);
  tmp_truth_name_2 = CHECK_IF_TRUE(var_dispparams);
  if (tmp_truth_name_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 164;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
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
  PyObject *tmp_dircall_arg1_1;
  PyObject *tmp_expression_value_10;
  PyObject *tmp_dircall_arg2_1;
  PyObject *tmp_dircall_arg3_1;
  PyObject *tmp_dict_key_1;
  PyObject *tmp_dict_value_1;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_dircall_arg4_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(var_part);
  tmp_expression_value_10 = var_part;
  tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[57]);
  if (tmp_dircall_arg1_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 165;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  tmp_dircall_arg2_1 = mod_consts[2];
  tmp_dict_key_1 = mod_consts[58];
  if (par_self == NULL) {
   Py_DECREF(tmp_dircall_arg1_1);
   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 166;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_11 = par_self;
  tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[7]);
  if (tmp_dict_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_dircall_arg1_1);

   exception_lineno = 166;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
  tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
  Py_DECREF(tmp_dict_value_1);
  assert(!(tmp_res != 0));
  CHECK_OBJECT(var_dispparams);
  tmp_dircall_arg4_1 = var_dispparams;
  Py_INCREF(tmp_dircall_arg2_1);
  Py_INCREF(tmp_dircall_arg4_1);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
      tmp_call_result_1 = impl___main__$$$helper_function_complex_call_helper_pos_keywords_star_dict(tstate, dir_call_args);
  }
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 165;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  bool tmp_condition_result_5;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  PyObject *tmp_expression_value_12;
  CHECK_OBJECT(var_part);
  tmp_expression_value_12 = var_part;
  tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[56]);
  if (tmp_cmp_expr_left_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 170;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  tmp_cmp_expr_right_3 = Py_None;
  tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_3);
  if (tmp_condition_result_5 != false) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 {
  PyObject *tmp_raise_type_3;
  tmp_raise_type_3 = PyExc_AssertionError;
  exception_type = tmp_raise_type_3;
  Py_INCREF(tmp_raise_type_3);
  exception_lineno = 170;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
  type_description_1 = "oooooo";
  goto try_except_handler_2;
 }
 branch_no_5:;
 {
  PyObject *tmp_called_value_3;
  PyObject *tmp_expression_value_13;
  PyObject *tmp_expression_value_14;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_expression_value_15;
  PyObject *tmp_args_element_value_2;
  CHECK_OBJECT(var_part);
  tmp_expression_value_14 = var_part;
  tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[56]);
  if (tmp_expression_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 171;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[59]);
  Py_DECREF(tmp_expression_value_13);
  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 171;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[24]);

  if (unlikely(tmp_expression_value_15 == NULL)) {
      tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[24]);
  }

  if (tmp_expression_value_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_3);

   exception_lineno = 171;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[60]);
  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_3);

   exception_lineno = 171;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  tmp_args_element_value_2 = Py_None;
  frame_7bba9bb564ac559258c64383e73c532a->m_frame.f_lineno = 171;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
  }

  Py_DECREF(tmp_called_value_3);
  Py_DECREF(tmp_args_element_value_1);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 171;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_2);
 }
 branch_no_4:;
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_16;
  PyObject *tmp_call_result_3;
  PyObject *tmp_args_element_value_3;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 173;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_16 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[3]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 173;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  CHECK_OBJECT(var_part);
  tmp_args_element_value_3 = var_part;
  frame_7bba9bb564ac559258c64383e73c532a->m_frame.f_lineno = 173;
  tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[61], tmp_args_element_value_3);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 173;
   type_description_1 = "oooooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_3);
 }
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


  exception_lineno = 145;
  type_description_1 = "oooooo";
     goto try_except_handler_2;
 }
 goto loop_start_1;
 loop_end_1:;
 goto try_end_4;
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
 try_end_4:;
 Py_XDECREF(tmp_for_loop_1__iter_value);
 tmp_for_loop_1__iter_value = NULL;
 CHECK_OBJECT(tmp_for_loop_1__for_iterator);
 Py_DECREF(tmp_for_loop_1__for_iterator);
 tmp_for_loop_1__for_iterator = NULL;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_True;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 175;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }

  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 175;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_expression_value_17;
  if (par_self == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
   exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
   CHAIN_EXCEPTION(tstate, exception_value);

   exception_lineno = 176;
   type_description_1 = "oooooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_17 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[3]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 176;
   type_description_1 = "oooooo";
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
     exception_tb = MAKE_TRACEBACK(frame_7bba9bb564ac559258c64383e73c532a, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_7bba9bb564ac559258c64383e73c532a->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_7bba9bb564ac559258c64383e73c532a, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_7bba9bb564ac559258c64383e73c532a,
     type_description_1,
     par_self,
     var_dispparams,
     var_headers,
     var_value,
     var_part,
     var_exc
 );


 // Release cached frame if used for exception.
 if (frame_7bba9bb564ac559258c64383e73c532a == cache_frame_7bba9bb564ac559258c64383e73c532a) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_7bba9bb564ac559258c64383e73c532a);
     cache_frame_7bba9bb564ac559258c64383e73c532a = NULL;
 }

 assertFrameObject(frame_7bba9bb564ac559258c64383e73c532a);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 Py_XDECREF(var_dispparams);
 var_dispparams = NULL;
 Py_XDECREF(var_headers);
 var_headers = NULL;
 Py_XDECREF(var_value);
 var_value = NULL;
 Py_XDECREF(var_part);
 var_part = NULL;
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

 Py_XDECREF(var_dispparams);
 var_dispparams = NULL;
 Py_XDECREF(var_headers);
 var_headers = NULL;
 Py_XDECREF(var_value);
 var_value = NULL;
 Py_XDECREF(var_part);
 var_part = NULL;
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


static PyObject *impl_aiohttp$formdata$$$function__7___call__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_e80cb26cbe0d2487e3e1ece70ca04931;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_e80cb26cbe0d2487e3e1ece70ca04931 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_e80cb26cbe0d2487e3e1ece70ca04931)) {
     Py_XDECREF(cache_frame_e80cb26cbe0d2487e3e1ece70ca04931);

#if _DEBUG_REFCOUNTS
     if (cache_frame_e80cb26cbe0d2487e3e1ece70ca04931 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_e80cb26cbe0d2487e3e1ece70ca04931 = MAKE_FUNCTION_FRAME(tstate, codeobj_e80cb26cbe0d2487e3e1ece70ca04931, module_aiohttp$formdata, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_e80cb26cbe0d2487e3e1ece70ca04931->m_type_description == NULL);
 frame_e80cb26cbe0d2487e3e1ece70ca04931 = cache_frame_e80cb26cbe0d2487e3e1ece70ca04931;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_e80cb26cbe0d2487e3e1ece70ca04931);
 assert(Py_REFCNT(frame_e80cb26cbe0d2487e3e1ece70ca04931) == 2);

 // Framed code:
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_attribute_value_1;
  int tmp_truth_name_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
  if (tmp_attribute_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 179;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_attribute_value_1);

   exception_lineno = 179;
   type_description_1 = "o";
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
 {
  PyObject *tmp_called_instance_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  frame_e80cb26cbe0d2487e3e1ece70ca04931->m_frame.f_lineno = 180;
  tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[63]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 180;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  goto frame_return_exit_1;
 }
 goto branch_end_1;
 branch_no_1:;
 {
  PyObject *tmp_called_instance_2;
  CHECK_OBJECT(par_self);
  tmp_called_instance_2 = par_self;
  frame_e80cb26cbe0d2487e3e1ece70ca04931->m_frame.f_lineno = 182;
  tmp_return_value = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[64]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 182;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  goto frame_return_exit_1;
 }
 branch_end_1:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_return_exit_1:

 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto function_return_exit;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_e80cb26cbe0d2487e3e1ece70ca04931, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_e80cb26cbe0d2487e3e1ece70ca04931->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_e80cb26cbe0d2487e3e1ece70ca04931, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_e80cb26cbe0d2487e3e1ece70ca04931,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_e80cb26cbe0d2487e3e1ece70ca04931 == cache_frame_e80cb26cbe0d2487e3e1ece70ca04931) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_e80cb26cbe0d2487e3e1ece70ca04931);
     cache_frame_e80cb26cbe0d2487e3e1ece70ca04931 = NULL;
 }

 assertFrameObject(frame_e80cb26cbe0d2487e3e1ece70ca04931);

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



static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__1___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$formdata$$$function__1___init__,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_aad7e29fbb77f294103beb791d6686d9,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$formdata,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__2_is_multipart(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$formdata$$$function__2_is_multipart,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_eb66da34a79493a9d739aed067bbc131,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$formdata,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__3_add_field(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$formdata$$$function__3_add_field,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_ed766ef3f6d6a0ddbb076accd3f724ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$formdata,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__4_add_fields(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$formdata$$$function__4_add_fields,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[108],
#endif
        codeobj_5212a9da0ea4b19df62c1f33dda8364a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$formdata,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__5__gen_form_urlencoded(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$formdata$$$function__5__gen_form_urlencoded,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_c2d7eea55668465ce74ee31eb6ef6e37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$formdata,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__6__gen_form_data(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$formdata$$$function__6__gen_form_data,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        mod_consts[110],
#endif
        codeobj_7bba9bb564ac559258c64383e73c532a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$formdata,
        mod_consts[62],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$formdata$$$function__7___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$formdata$$$function__7___call__,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[112],
#endif
        codeobj_e80cb26cbe0d2487e3e1ece70ca04931,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$formdata,
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

static function_impl_code const function_table_aiohttp$formdata[] = {
 impl_aiohttp$formdata$$$function__1___init__,
 impl_aiohttp$formdata$$$function__2_is_multipart,
 impl_aiohttp$formdata$$$function__3_add_field,
 impl_aiohttp$formdata$$$function__4_add_fields,
 impl_aiohttp$formdata$$$function__5__gen_form_urlencoded,
 impl_aiohttp$formdata$$$function__6__gen_form_data,
 impl_aiohttp$formdata$$$function__7___call__,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_aiohttp$formdata);

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
        module_aiohttp$formdata,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_aiohttp$formdata,
        sizeof(function_table_aiohttp$formdata) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiohttp$formdata(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiohttp$formdata");

    // Store the module for future use.
    module_aiohttp$formdata = module;

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
        PRINT_STRING("aiohttp$formdata: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("aiohttp$formdata: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.formdata" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initaiohttp$formdata\n");

    moduledict_aiohttp$formdata = MODULE_DICT(module_aiohttp$formdata);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiohttp$formdata,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiohttp$formdata,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[81]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiohttp$formdata,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$formdata,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$formdata,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiohttp$formdata);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiohttp$formdata, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiohttp$formdata, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiohttp$formdata, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_aiohttp$formdata);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
 PyObject *outline_0_var___class__ = NULL;
 PyObject *tmp_class_creation_1__class_decl_dict = NULL;
 PyObject *tmp_class_creation_1__prepared = NULL;
 PyObject *tmp_import_from_1__module = NULL;
 PyObject *tmp_import_from_2__module = NULL;
 PyObject *tmp_import_from_3__module = NULL;
 struct Nuitka_FrameObject *frame_b373cc48be078b12da95149515055f34;
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
 PyObject *locals_aiohttp$formdata$$$class__1_FormData_15 = NULL;
 PyObject *tmp_dictset_value;
 struct Nuitka_FrameObject *frame_098f833b2b4bbee8374dea6e5237a6f0_2;
 NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
 int tmp_res;
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

    // Module init code if any


    // Module code.
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = module_filename_obj;
  UPDATE_STRING_DICT0(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_2);
 }
 frame_b373cc48be078b12da95149515055f34 = MAKE_MODULE_FRAME(codeobj_b373cc48be078b12da95149515055f34, module_aiohttp$formdata);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_b373cc48be078b12da95149515055f34);
 assert(Py_REFCNT(frame_b373cc48be078b12da95149515055f34) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = module_filename_obj;
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[67]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[68], tmp_assattr_value_1);
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
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[67]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[67]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[69], tmp_assattr_value_2);
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
  UPDATE_STRING_DICT0(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assign_source_4;
  tmp_assign_source_4 = IMPORT_HARD_IO();
  assert(!(tmp_assign_source_4 == NULL));
  UPDATE_STRING_DICT0(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[14];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp$formdata;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = Py_None;
  tmp_level_value_1 = mod_consts[72];
  frame_b373cc48be078b12da95149515055f34->m_frame.f_lineno = 2;
  tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_assign_source_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 2;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_5);
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
  PyObject *tmp_import_name_from_1;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_1 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_1)) {
      tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_1,
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[73],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[73]);
  }

  if (tmp_assign_source_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_7);
 }
 {
  PyObject *tmp_assign_source_8;
  PyObject *tmp_import_name_from_2;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_2 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_2)) {
      tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_2,
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[74],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[74]);
  }

  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_8);
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
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[75],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[75]);
  }

  if (tmp_assign_source_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_9);
 }
 {
  PyObject *tmp_assign_source_10;
  PyObject *tmp_import_name_from_4;
  CHECK_OBJECT(tmp_import_from_1__module);
  tmp_import_name_from_4 = tmp_import_from_1__module;
  if (PyModule_Check(tmp_import_name_from_4)) {
      tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_4,
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[76],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[76]);
  }

  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_10);
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
  PyObject *tmp_assign_source_11;
  PyObject *tmp_import_name_from_5;
  PyObject *tmp_name_value_2;
  PyObject *tmp_globals_arg_value_2;
  PyObject *tmp_locals_arg_value_2;
  PyObject *tmp_fromlist_value_2;
  PyObject *tmp_level_value_2;
  tmp_name_value_2 = mod_consts[77];
  tmp_globals_arg_value_2 = (PyObject *)moduledict_aiohttp$formdata;
  tmp_locals_arg_value_2 = Py_None;
  tmp_fromlist_value_2 = mod_consts[78];
  tmp_level_value_2 = mod_consts[72];
  frame_b373cc48be078b12da95149515055f34->m_frame.f_lineno = 4;
  tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
  if (tmp_import_name_from_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 4;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_5)) {
      tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_5,
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[46],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[46]);
  }

  Py_DECREF(tmp_import_name_from_5);
  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 4;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_11);
 }
 {
  PyObject *tmp_assign_source_12;
  PyObject *tmp_name_value_3;
  PyObject *tmp_globals_arg_value_3;
  PyObject *tmp_locals_arg_value_3;
  PyObject *tmp_fromlist_value_3;
  PyObject *tmp_level_value_3;
  tmp_name_value_3 = mod_consts[79];
  tmp_globals_arg_value_3 = (PyObject *)moduledict_aiohttp$formdata;
  tmp_locals_arg_value_3 = Py_None;
  tmp_fromlist_value_3 = mod_consts[80];
  tmp_level_value_3 = mod_consts[72];
  frame_b373cc48be078b12da95149515055f34->m_frame.f_lineno = 6;
  tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
  if (tmp_assign_source_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_2__module == NULL);
  tmp_import_from_2__module = tmp_assign_source_12;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_13;
  PyObject *tmp_import_name_from_6;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_6 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_6)) {
      tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_6,
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[18],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[18]);
  }

  if (tmp_assign_source_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_13);
 }
 {
  PyObject *tmp_assign_source_14;
  PyObject *tmp_import_name_from_7;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_7 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_7)) {
      tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_7,
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[35],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[35]);
  }

  if (tmp_assign_source_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_14);
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
  PyObject *tmp_assign_source_15;
  PyObject *tmp_name_value_4;
  PyObject *tmp_globals_arg_value_4;
  PyObject *tmp_locals_arg_value_4;
  PyObject *tmp_fromlist_value_4;
  PyObject *tmp_level_value_4;
  tmp_name_value_4 = mod_consts[81];
  tmp_globals_arg_value_4 = (PyObject *)moduledict_aiohttp$formdata;
  tmp_locals_arg_value_4 = Py_None;
  tmp_fromlist_value_4 = mod_consts[82];
  tmp_level_value_4 = mod_consts[83];
  frame_b373cc48be078b12da95149515055f34->m_frame.f_lineno = 8;
  tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
  if (tmp_assign_source_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_3__module == NULL);
  tmp_import_from_3__module = tmp_assign_source_15;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_16;
  PyObject *tmp_import_name_from_8;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_8 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_8)) {
      tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_8,
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[24],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[24]);
  }

  if (tmp_assign_source_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_16);
 }
 {
  PyObject *tmp_assign_source_17;
  PyObject *tmp_import_name_from_9;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_9 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_9)) {
      tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_9,
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[0],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[0]);
  }

  if (tmp_assign_source_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_17);
 }
 {
  PyObject *tmp_assign_source_18;
  PyObject *tmp_import_name_from_10;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_10 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_10)) {
      tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_10,
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[44],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[44]);
  }

  if (tmp_assign_source_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_18);
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
  PyObject *tmp_assign_source_19;
  PyObject *tmp_import_name_from_11;
  PyObject *tmp_name_value_5;
  PyObject *tmp_globals_arg_value_5;
  PyObject *tmp_locals_arg_value_5;
  PyObject *tmp_fromlist_value_5;
  PyObject *tmp_level_value_5;
  tmp_name_value_5 = mod_consts[84];
  tmp_globals_arg_value_5 = (PyObject *)moduledict_aiohttp$formdata;
  tmp_locals_arg_value_5 = Py_None;
  tmp_fromlist_value_5 = mod_consts[85];
  tmp_level_value_5 = mod_consts[83];
  frame_b373cc48be078b12da95149515055f34->m_frame.f_lineno = 9;
  tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
  if (tmp_import_name_from_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 9;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_11)) {
      tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_11,
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[21],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[21]);
  }

  Py_DECREF(tmp_import_name_from_11);
  if (tmp_assign_source_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 9;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_19);
 }
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_import_name_from_12;
  PyObject *tmp_name_value_6;
  PyObject *tmp_globals_arg_value_6;
  PyObject *tmp_locals_arg_value_6;
  PyObject *tmp_fromlist_value_6;
  PyObject *tmp_level_value_6;
  tmp_name_value_6 = mod_consts[44];
  tmp_globals_arg_value_6 = (PyObject *)moduledict_aiohttp$formdata;
  tmp_locals_arg_value_6 = Py_None;
  tmp_fromlist_value_6 = mod_consts[86];
  tmp_level_value_6 = mod_consts[83];
  frame_b373cc48be078b12da95149515055f34->m_frame.f_lineno = 10;
  tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
  if (tmp_import_name_from_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_12)) {
      tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_12,
          (PyObject *)moduledict_aiohttp$formdata,
          mod_consts[87],
          mod_consts[72]
      );
  } else {
      tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[87]);
  }

  Py_DECREF(tmp_import_name_from_12);
  if (tmp_assign_source_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_20);
 }
 {
  PyObject *tmp_assign_source_21;
  tmp_assign_source_21 = mod_consts[88];
  UPDATE_STRING_DICT0(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_21);
 }
 {
  PyObject *tmp_assign_source_22;
  tmp_assign_source_22 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__class_decl_dict == NULL);
  tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
 }
 {
  PyObject *tmp_assign_source_23;
  tmp_assign_source_23 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_23;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_24;
  {
   PyObject *tmp_set_locals_1;
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_set_locals_1 = tmp_class_creation_1__prepared;
   locals_aiohttp$formdata$$$class__1_FormData_15 = tmp_set_locals_1;
   Py_INCREF(tmp_set_locals_1);
  }
  tmp_dictset_value = mod_consts[90];
  tmp_result = DICT_SET_ITEM(locals_aiohttp$formdata$$$class__1_FormData_15, mod_consts[91], tmp_dictset_value);
  assert(!(tmp_result == false));
  tmp_dictset_value = mod_consts[92];
  tmp_result = DICT_SET_ITEM(locals_aiohttp$formdata$$$class__1_FormData_15, mod_consts[65], tmp_dictset_value);
  assert(!(tmp_result == false));
  tmp_dictset_value = mod_consts[93];
  tmp_result = DICT_SET_ITEM(locals_aiohttp$formdata$$$class__1_FormData_15, mod_consts[94], tmp_dictset_value);
  assert(!(tmp_result == false));
  // Tried code:
  // Tried code:
  frame_098f833b2b4bbee8374dea6e5237a6f0_2 = MAKE_CLASS_FRAME(tstate, codeobj_098f833b2b4bbee8374dea6e5237a6f0, module_aiohttp$formdata, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_098f833b2b4bbee8374dea6e5237a6f0_2);
  assert(Py_REFCNT(frame_098f833b2b4bbee8374dea6e5237a6f0_2) == 2);

  // Framed code:
  {
   PyObject *tmp_defaults_1;
   PyObject *tmp_annotations_1;
   PyObject *tmp_dict_key_1;
   PyObject *tmp_dict_value_1;
   PyObject *tmp_expression_value_1;
   PyObject *tmp_subscript_value_1;
   tmp_defaults_1 = mod_consts[95];
   tmp_dict_key_1 = mod_consts[96];
   tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[74]);

   if (unlikely(tmp_expression_value_1 == NULL)) {
       tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
   }

   if (tmp_expression_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[73]);

   if (unlikely(tmp_subscript_value_1 == NULL)) {
       tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
   }

   if (tmp_subscript_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
   if (tmp_dict_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 23;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_1 = _PyDict_NewPresized( 4 );
   {
    PyObject *tmp_expression_value_2;
    PyObject *tmp_subscript_value_2;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[58];
    tmp_dict_value_1 = (PyObject *)&PyBool_Type;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[97];
    tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[76]);

    if (unlikely(tmp_expression_value_2 == NULL)) {
        tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
    }

    if (tmp_expression_value_2 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 25;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
    tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 25;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[98];
    tmp_dict_value_1 = Py_None;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_1;
   // Exception handling pass through code for dict_build:
   dict_build_exception_1:;
   Py_DECREF(tmp_annotations_1);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_1:;
   Py_INCREF(tmp_defaults_1);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$formdata$$$function__1___init__(tmp_defaults_1, tmp_annotations_1);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$formdata$$$class__1_FormData_15, mod_consts[99], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 21;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_called_value_1;
   PyObject *tmp_args_element_value_1;
   PyObject *tmp_annotations_2;
   tmp_called_value_1 = (PyObject *)&PyProperty_Type;
   tmp_annotations_2 = DICT_COPY(tstate, mod_consts[101]);


   tmp_args_element_value_1 = MAKE_FUNCTION_aiohttp$formdata$$$function__2_is_multipart(tmp_annotations_2);

   frame_098f833b2b4bbee8374dea6e5237a6f0_2->m_frame.f_lineno = 40;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
   Py_DECREF(tmp_args_element_value_1);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 40;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_result = DICT_SET_ITEM(locals_aiohttp$formdata$$$class__1_FormData_15, mod_consts[102], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 41;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_kw_defaults_1;
   PyObject *tmp_annotations_3;
   PyObject *tmp_dict_key_2;
   PyObject *tmp_dict_value_2;
   tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts[104]);
   tmp_dict_key_2 = mod_consts[19];
   tmp_dict_value_2 = (PyObject *)&PyUnicode_Type;
   tmp_annotations_3 = _PyDict_NewPresized( 6 );
   {
    PyObject *tmp_expression_value_3;
    PyObject *tmp_subscript_value_3;
    PyObject *tmp_expression_value_4;
    PyObject *tmp_subscript_value_4;
    PyObject *tmp_expression_value_5;
    PyObject *tmp_subscript_value_5;
    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
    assert(!(tmp_res != 0));
    tmp_dict_key_2 = mod_consts[55];
    tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[73]);

    if (unlikely(tmp_dict_value_2 == NULL)) {
        tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
    }

    if (tmp_dict_value_2 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 47;
     type_description_2 = "o";
        goto dict_build_exception_2;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
    assert(!(tmp_res != 0));
    tmp_dict_key_2 = mod_consts[105];
    tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[76]);

    if (unlikely(tmp_expression_value_3 == NULL)) {
        tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
    }

    if (tmp_expression_value_3 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 49;
     type_description_2 = "o";
        goto dict_build_exception_2;
    }
    tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
    if (tmp_dict_value_2 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 49;
     type_description_2 = "o";
        goto dict_build_exception_2;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
    Py_DECREF(tmp_dict_value_2);
    assert(!(tmp_res != 0));
    tmp_dict_key_2 = mod_consts[22];
    tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[76]);

    if (unlikely(tmp_expression_value_4 == NULL)) {
        tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
    }

    if (tmp_expression_value_4 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 50;
     type_description_2 = "o";
        goto dict_build_exception_2;
    }
    tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
    if (tmp_dict_value_2 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 50;
     type_description_2 = "o";
        goto dict_build_exception_2;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
    Py_DECREF(tmp_dict_value_2);
    assert(!(tmp_res != 0));
    tmp_dict_key_2 = mod_consts[106];
    tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[76]);

    if (unlikely(tmp_expression_value_5 == NULL)) {
        tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
    }

    if (tmp_expression_value_5 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 51;
     type_description_2 = "o";
        goto dict_build_exception_2;
    }
    tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
    tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
    if (tmp_dict_value_2 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 51;
     type_description_2 = "o";
        goto dict_build_exception_2;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
    Py_DECREF(tmp_dict_value_2);
    assert(!(tmp_res != 0));
    tmp_dict_key_2 = mod_consts[98];
    tmp_dict_value_2 = Py_None;
    tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_2;
   // Exception handling pass through code for dict_build:
   dict_build_exception_2:;
   Py_DECREF(tmp_kw_defaults_1);
   Py_DECREF(tmp_annotations_3);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_2:;


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$formdata$$$function__3_add_field(tmp_kw_defaults_1, tmp_annotations_3);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$formdata$$$class__1_FormData_15, mod_consts[34], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 44;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_4;
   PyObject *tmp_dict_key_3;
   PyObject *tmp_dict_value_3;
   tmp_dict_key_3 = mod_consts[96];
   tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[73]);

   if (unlikely(tmp_dict_value_3 == NULL)) {
       tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
   }

   if (tmp_dict_value_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 99;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_4 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
   assert(!(tmp_res != 0));
   tmp_dict_key_3 = mod_consts[98];
   tmp_dict_value_3 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$formdata$$$function__4_add_fields(tmp_annotations_4);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$formdata$$$class__1_FormData_15, mod_consts[11], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 99;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_5;
   PyObject *tmp_dict_key_4;
   PyObject *tmp_dict_value_4;
   PyObject *tmp_expression_value_6;
   tmp_dict_key_4 = mod_consts[98];
   tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[44]);

   if (unlikely(tmp_expression_value_6 == NULL)) {
       tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
   }

   if (tmp_expression_value_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 123;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[45]);
   if (tmp_dict_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 123;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_5 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
   Py_DECREF(tmp_dict_value_4);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$formdata$$$function__5__gen_form_urlencoded(tmp_annotations_5);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$formdata$$$class__1_FormData_15, mod_consts[64], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 123;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_6;
   PyObject *tmp_dict_key_5;
   PyObject *tmp_dict_value_5;
   PyObject *tmp_expression_value_7;
   tmp_dict_key_5 = mod_consts[98];
   tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[0]);

   if (unlikely(tmp_expression_value_7 == NULL)) {
       tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
   }

   if (tmp_expression_value_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 141;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[1]);
   if (tmp_dict_value_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 141;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_6 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
   Py_DECREF(tmp_dict_value_5);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$formdata$$$function__6__gen_form_data(tmp_annotations_6);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$formdata$$$class__1_FormData_15, mod_consts[63], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 141;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_7;
   PyObject *tmp_dict_key_6;
   PyObject *tmp_dict_value_6;
   tmp_dict_key_6 = mod_consts[98];
   tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[87]);

   if (unlikely(tmp_dict_value_6 == NULL)) {
       tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
   }

   if (tmp_dict_value_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 178;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_7 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$formdata$$$function__7___call__(tmp_annotations_7);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$formdata$$$class__1_FormData_15, mod_consts[111], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 178;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_1;
  frame_exception_exit_2:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_098f833b2b4bbee8374dea6e5237a6f0_2, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_098f833b2b4bbee8374dea6e5237a6f0_2->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_098f833b2b4bbee8374dea6e5237a6f0_2, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_098f833b2b4bbee8374dea6e5237a6f0_2,
      type_description_2,
      outline_0_var___class__
  );



  assertFrameObject(frame_098f833b2b4bbee8374dea6e5237a6f0_2);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_1;
  frame_no_exception_1:;
  goto skip_nested_handling_1;
  nested_frame_exit_1:;

  goto try_except_handler_6;
  skip_nested_handling_1:;
  {
   PyObject *tmp_assign_source_25;
   PyObject *tmp_called_value_2;
   PyObject *tmp_args_value_1;
   PyObject *tmp_tuple_element_1;
   PyObject *tmp_kwargs_value_1;
   tmp_called_value_2 = (PyObject *)&PyType_Type;
   tmp_tuple_element_1 = mod_consts[93];
   tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
   tmp_tuple_element_1 = const_tuple_empty;
   PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
   tmp_tuple_element_1 = locals_aiohttp$formdata$$$class__1_FormData_15;
   PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
   CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
   tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
   frame_b373cc48be078b12da95149515055f34->m_frame.f_lineno = 15;
   tmp_assign_source_25 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
   Py_DECREF(tmp_args_value_1);
   if (tmp_assign_source_25 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 15;

       goto try_except_handler_6;
   }
   assert(outline_0_var___class__ == NULL);
   outline_0_var___class__ = tmp_assign_source_25;
  }
  CHECK_OBJECT(outline_0_var___class__);
  tmp_assign_source_24 = outline_0_var___class__;
  Py_INCREF(tmp_assign_source_24);
  goto try_return_handler_6;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_6:;
  Py_DECREF(locals_aiohttp$formdata$$$class__1_FormData_15);
  locals_aiohttp$formdata$$$class__1_FormData_15 = NULL;
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

  Py_DECREF(locals_aiohttp$formdata$$$class__1_FormData_15);
  locals_aiohttp$formdata$$$class__1_FormData_15 = NULL;
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
  exception_lineno = 15;
  goto try_except_handler_4;
  outline_result_1:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$formdata, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_24);
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

 CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
 Py_DECREF(tmp_class_creation_1__class_decl_dict);
 tmp_class_creation_1__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_1__prepared);
 Py_DECREF(tmp_class_creation_1__prepared);
 tmp_class_creation_1__prepared = NULL;
 // Re-raise.
 exception_type = exception_keeper_type_6;
 exception_value = exception_keeper_value_6;
 exception_tb = exception_keeper_tb_6;
 exception_lineno = exception_keeper_lineno_6;

 goto frame_exception_exit_1;
 // End of try:
 try_end_4:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_2;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_b373cc48be078b12da95149515055f34, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_b373cc48be078b12da95149515055f34->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_b373cc48be078b12da95149515055f34, exception_lineno);
 }



 assertFrameObject(frame_b373cc48be078b12da95149515055f34);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto module_exception_exit;
 frame_no_exception_2:;
 CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
 Py_DECREF(tmp_class_creation_1__class_decl_dict);
 tmp_class_creation_1__class_decl_dict = NULL;
 CHECK_OBJECT(tmp_class_creation_1__prepared);
 Py_DECREF(tmp_class_creation_1__prepared);
 tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("aiohttp$formdata", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.formdata" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_aiohttp$formdata);
    return module_aiohttp$formdata;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$formdata, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("aiohttp$formdata", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
