/* Generated code for Python module 'aiohttp$hdrs'
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

/* The "module_aiohttp$hdrs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiohttp$hdrs;
PyDictObject *moduledict_aiohttp$hdrs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[192];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[192];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("aiohttp.hdrs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 192; i++) {
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
void checkModuleConstants_aiohttp$hdrs(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 192; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_61adfc6cddc3fa5cc1518f823d3c4668;

static void createModuleCodeObjects(void) {
 module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[189]); CHECK_OBJECT(module_filename_obj);
 codeobj_61adfc6cddc3fa5cc1518f823d3c4668 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[190], mod_consts[190], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


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

static function_impl_code const function_table_aiohttp$hdrs[] = {

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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_aiohttp$hdrs);

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
        module_aiohttp$hdrs,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_aiohttp$hdrs,
        sizeof(function_table_aiohttp$hdrs) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiohttp$hdrs(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiohttp$hdrs");

    // Store the module for future use.
    module_aiohttp$hdrs = module;

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
        PRINT_STRING("aiohttp$hdrs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("aiohttp$hdrs: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.hdrs" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initaiohttp$hdrs\n");

    moduledict_aiohttp$hdrs = MODULE_DICT(module_aiohttp$hdrs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiohttp$hdrs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiohttp$hdrs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[191]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiohttp$hdrs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$hdrs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$hdrs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiohttp$hdrs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_aiohttp$hdrs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
 PyObject *tmp_import_from_1__module = NULL;
 struct Nuitka_FrameObject *frame_61adfc6cddc3fa5cc1518f823d3c4668;
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

    // Module init code if any


    // Module code.
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = mod_consts[0];
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = module_filename_obj;
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
 }
 frame_61adfc6cddc3fa5cc1518f823d3c4668 = MAKE_MODULE_FRAME(codeobj_61adfc6cddc3fa5cc1518f823d3c4668, module_aiohttp$hdrs);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_61adfc6cddc3fa5cc1518f823d3c4668);
 assert(Py_REFCNT(frame_61adfc6cddc3fa5cc1518f823d3c4668) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = module_filename_obj;
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[3]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
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
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[3]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
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
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assign_source_4;
  tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_4);
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
          (PyObject *)moduledict_aiohttp$hdrs,
          mod_consts[8],
          mod_consts[9]
      );
  } else {
      tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[8]);
  }

  if (tmp_assign_source_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_6);
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
          (PyObject *)moduledict_aiohttp$hdrs,
          mod_consts[10],
          mod_consts[9]
      );
  } else {
      tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[10]);
  }

  if (tmp_assign_source_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_7);
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
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[11];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp$hdrs;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = mod_consts[12];
  tmp_level_value_1 = mod_consts[9];
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 7;
  tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_import_name_from_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_3)) {
      tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_3,
          (PyObject *)moduledict_aiohttp$hdrs,
          mod_consts[13],
          mod_consts[9]
      );
  } else {
      tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[13]);
  }

  Py_DECREF(tmp_import_name_from_3);
  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
 }
 {
  PyObject *tmp_assign_source_9;
  tmp_assign_source_9 = mod_consts[14];
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_9);
 }
 {
  PyObject *tmp_ass_subvalue_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_subscript_value_1;
  PyObject *tmp_ass_subscribed_1;
  PyObject *tmp_ass_subscript_1;
  tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_1 == NULL)) {
      tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 9;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
  tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
  if (tmp_ass_subvalue_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 9;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_1 == NULL)) {
      tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_1);

   exception_lineno = 9;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_1 = mod_consts[15];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
  Py_DECREF(tmp_ass_subvalue_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 9;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_10;
  tmp_assign_source_10 = mod_consts[16];
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_10);
 }
 {
  PyObject *tmp_ass_subvalue_2;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_subscript_value_2;
  PyObject *tmp_ass_subscribed_2;
  PyObject *tmp_ass_subscript_2;
  tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_2 == NULL)) {
      tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
  tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
  if (tmp_ass_subvalue_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_2 == NULL)) {
      tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_2);

   exception_lineno = 10;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_2 = mod_consts[17];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
  Py_DECREF(tmp_ass_subvalue_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_11;
  tmp_assign_source_11 = mod_consts[18];
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_11);
 }
 {
  PyObject *tmp_ass_subvalue_3;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_subscript_value_3;
  PyObject *tmp_ass_subscribed_3;
  PyObject *tmp_ass_subscript_3;
  tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_3 == NULL)) {
      tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 11;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_3 = (PyObject *)&PyUnicode_Type;
  tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
  if (tmp_ass_subvalue_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 11;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_3 == NULL)) {
      tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_3);

   exception_lineno = 11;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_3 = mod_consts[19];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
  Py_DECREF(tmp_ass_subvalue_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 11;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_12;
  tmp_assign_source_12 = mod_consts[20];
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_12);
 }
 {
  PyObject *tmp_ass_subvalue_4;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_subscript_value_4;
  PyObject *tmp_ass_subscribed_4;
  PyObject *tmp_ass_subscript_4;
  tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_4 == NULL)) {
      tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 12;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_4 = (PyObject *)&PyUnicode_Type;
  tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
  if (tmp_ass_subvalue_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 12;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_4 == NULL)) {
      tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_4);

   exception_lineno = 12;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_4 = mod_consts[21];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
  Py_DECREF(tmp_ass_subvalue_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 12;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_13;
  tmp_assign_source_13 = mod_consts[22];
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
 }
 {
  PyObject *tmp_ass_subvalue_5;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_subscript_value_5;
  PyObject *tmp_ass_subscribed_5;
  PyObject *tmp_ass_subscript_5;
  tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_5 == NULL)) {
      tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
  tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
  if (tmp_ass_subvalue_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_5 == NULL)) {
      tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_5);

   exception_lineno = 13;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_5 = mod_consts[23];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
  Py_DECREF(tmp_ass_subvalue_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 13;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_14;
  tmp_assign_source_14 = mod_consts[24];
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_14);
 }
 {
  PyObject *tmp_ass_subvalue_6;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_subscript_value_6;
  PyObject *tmp_ass_subscribed_6;
  PyObject *tmp_ass_subscript_6;
  tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_6 == NULL)) {
      tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 14;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_6 = (PyObject *)&PyUnicode_Type;
  tmp_ass_subvalue_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
  if (tmp_ass_subvalue_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 14;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_6 == NULL)) {
      tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_6);

   exception_lineno = 14;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_6 = mod_consts[25];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
  Py_DECREF(tmp_ass_subvalue_6);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 14;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_15;
  tmp_assign_source_15 = mod_consts[26];
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_15);
 }
 {
  PyObject *tmp_ass_subvalue_7;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_subscript_value_7;
  PyObject *tmp_ass_subscribed_7;
  PyObject *tmp_ass_subscript_7;
  tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_7 == NULL)) {
      tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_7 = (PyObject *)&PyUnicode_Type;
  tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_7);
  if (tmp_ass_subvalue_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_7 == NULL)) {
      tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_7);

   exception_lineno = 15;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_7 = mod_consts[27];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
  Py_DECREF(tmp_ass_subvalue_7);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_16;
  tmp_assign_source_16 = mod_consts[28];
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_16);
 }
 {
  PyObject *tmp_ass_subvalue_8;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_subscript_value_8;
  PyObject *tmp_ass_subscribed_8;
  PyObject *tmp_ass_subscript_8;
  tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_8 == NULL)) {
      tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 16;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_8 = (PyObject *)&PyUnicode_Type;
  tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_8);
  if (tmp_ass_subvalue_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 16;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_8 == NULL)) {
      tmp_ass_subscribed_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_8);

   exception_lineno = 16;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_8 = mod_consts[29];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
  Py_DECREF(tmp_ass_subvalue_8);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 16;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_17;
  tmp_assign_source_17 = mod_consts[30];
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_17);
 }
 {
  PyObject *tmp_ass_subvalue_9;
  PyObject *tmp_expression_value_9;
  PyObject *tmp_subscript_value_9;
  PyObject *tmp_ass_subscribed_9;
  PyObject *tmp_ass_subscript_9;
  tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_9 == NULL)) {
      tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 17;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_9 = (PyObject *)&PyUnicode_Type;
  tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_9);
  if (tmp_ass_subvalue_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 17;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_9 == NULL)) {
      tmp_ass_subscribed_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_9);

   exception_lineno = 17;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_9 = mod_consts[31];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
  Py_DECREF(tmp_ass_subvalue_9);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 17;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_18;
  tmp_assign_source_18 = mod_consts[32];
  UPDATE_STRING_DICT0(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_18);
 }
 {
  PyObject *tmp_ass_subvalue_10;
  PyObject *tmp_expression_value_10;
  PyObject *tmp_subscript_value_10;
  PyObject *tmp_ass_subscribed_10;
  PyObject *tmp_ass_subscript_10;
  tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_10 == NULL)) {
      tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 18;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_10 = (PyObject *)&PyUnicode_Type;
  tmp_ass_subvalue_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_10);
  if (tmp_ass_subvalue_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 18;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_10 == NULL)) {
      tmp_ass_subscribed_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_10);

   exception_lineno = 18;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_10 = mod_consts[33];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
  Py_DECREF(tmp_ass_subvalue_10);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 18;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_19;
  PyObject *tmp_set_element_1;
  tmp_set_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[17]);

  if (unlikely(tmp_set_element_1 == NULL)) {
      tmp_set_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
  }

  if (tmp_set_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 21;

      goto frame_exception_exit_1;
  }
  tmp_assign_source_19 = PySet_New(NULL);
  assert(tmp_assign_source_19);
  tmp_res = PySet_Add(tmp_assign_source_19, tmp_set_element_1);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 21;

      goto frame_exception_exit_1;
  }
  tmp_set_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[19]);

  if (unlikely(tmp_set_element_1 == NULL)) {
      tmp_set_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
  }

  if (tmp_set_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 22;

      goto frame_exception_exit_1;
  }
  tmp_res = PySet_Add(tmp_assign_source_19, tmp_set_element_1);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 22;

      goto frame_exception_exit_1;
  }
  tmp_set_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[21]);

  if (unlikely(tmp_set_element_1 == NULL)) {
      tmp_set_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
  }

  if (tmp_set_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 23;

      goto frame_exception_exit_1;
  }
  tmp_res = PySet_Add(tmp_assign_source_19, tmp_set_element_1);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 23;

      goto frame_exception_exit_1;
  }
  tmp_set_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[23]);

  if (unlikely(tmp_set_element_1 == NULL)) {
      tmp_set_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[23]);
  }

  if (tmp_set_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 24;

      goto frame_exception_exit_1;
  }
  tmp_res = PySet_Add(tmp_assign_source_19, tmp_set_element_1);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 24;

      goto frame_exception_exit_1;
  }
  tmp_set_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[25]);

  if (unlikely(tmp_set_element_1 == NULL)) {
      tmp_set_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
  }

  if (tmp_set_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 25;

      goto frame_exception_exit_1;
  }
  tmp_res = PySet_Add(tmp_assign_source_19, tmp_set_element_1);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 25;

      goto frame_exception_exit_1;
  }
  tmp_set_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[27]);

  if (unlikely(tmp_set_element_1 == NULL)) {
      tmp_set_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
  }

  if (tmp_set_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 26;

      goto frame_exception_exit_1;
  }
  tmp_res = PySet_Add(tmp_assign_source_19, tmp_set_element_1);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 26;

      goto frame_exception_exit_1;
  }
  tmp_set_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[29]);

  if (unlikely(tmp_set_element_1 == NULL)) {
      tmp_set_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
  }

  if (tmp_set_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 27;

      goto frame_exception_exit_1;
  }
  tmp_res = PySet_Add(tmp_assign_source_19, tmp_set_element_1);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 27;

      goto frame_exception_exit_1;
  }
  tmp_set_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[31]);

  if (unlikely(tmp_set_element_1 == NULL)) {
      tmp_set_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
  }

  if (tmp_set_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 28;

      goto frame_exception_exit_1;
  }
  tmp_res = PySet_Add(tmp_assign_source_19, tmp_set_element_1);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 28;

      goto frame_exception_exit_1;
  }
  tmp_set_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[33]);

  if (unlikely(tmp_set_element_1 == NULL)) {
      tmp_set_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[33]);
  }

  if (tmp_set_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 29;

      goto frame_exception_exit_1;
  }
  tmp_res = PySet_Add(tmp_assign_source_19, tmp_set_element_1);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_assign_source_19);

   exception_lineno = 29;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_19);
 }
 {
  PyObject *tmp_ass_subvalue_11;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_subscript_value_11;
  PyObject *tmp_expression_value_12;
  PyObject *tmp_subscript_value_12;
  PyObject *tmp_ass_subscribed_11;
  PyObject *tmp_ass_subscript_11;
  tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_11 == NULL)) {
      tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[10]);

  if (unlikely(tmp_expression_value_12 == NULL)) {
      tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
  }

  if (tmp_expression_value_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_12 = (PyObject *)&PyUnicode_Type;
  tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_12);
  if (tmp_subscript_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_11);
  Py_DECREF(tmp_subscript_value_11);
  if (tmp_ass_subvalue_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_11 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_11 == NULL)) {
      tmp_ass_subscribed_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_11);

   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_11 = mod_consts[34];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
  Py_DECREF(tmp_ass_subvalue_11);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_called_value_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 32;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 32;
  tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[35]);

  if (tmp_assign_source_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 32;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_20);
 }
 {
  PyObject *tmp_ass_subvalue_12;
  PyObject *tmp_expression_value_13;
  PyObject *tmp_subscript_value_13;
  PyObject *tmp_ass_subscribed_12;
  PyObject *tmp_ass_subscript_12;
  tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_13 == NULL)) {
      tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 32;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_13 == NULL)) {
      tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 32;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_13);
  if (tmp_ass_subvalue_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 32;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_12 == NULL)) {
      tmp_ass_subscribed_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_12);

   exception_lineno = 32;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_12 = mod_consts[36];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
  Py_DECREF(tmp_ass_subvalue_12);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 32;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_21;
  PyObject *tmp_called_value_2;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 33;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 33;
  tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_2, mod_consts[37]);

  if (tmp_assign_source_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 33;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_21);
 }
 {
  PyObject *tmp_ass_subvalue_13;
  PyObject *tmp_expression_value_14;
  PyObject *tmp_subscript_value_14;
  PyObject *tmp_ass_subscribed_13;
  PyObject *tmp_ass_subscript_13;
  tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_14 == NULL)) {
      tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 33;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_14 == NULL)) {
      tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 33;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_14);
  if (tmp_ass_subvalue_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 33;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_13 == NULL)) {
      tmp_ass_subscribed_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_13);

   exception_lineno = 33;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_13 = mod_consts[38];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
  Py_DECREF(tmp_ass_subvalue_13);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 33;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_22;
  PyObject *tmp_called_value_3;
  tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_3 == NULL)) {
      tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 34;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 34;
  tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[39]);

  if (tmp_assign_source_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 34;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_22);
 }
 {
  PyObject *tmp_ass_subvalue_14;
  PyObject *tmp_expression_value_15;
  PyObject *tmp_subscript_value_15;
  PyObject *tmp_ass_subscribed_14;
  PyObject *tmp_ass_subscript_14;
  tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_15 == NULL)) {
      tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 34;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_15 == NULL)) {
      tmp_subscript_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 34;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_15);
  if (tmp_ass_subvalue_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 34;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_14 == NULL)) {
      tmp_ass_subscribed_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_14);

   exception_lineno = 34;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_14 = mod_consts[40];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
  Py_DECREF(tmp_ass_subvalue_14);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 34;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_23;
  PyObject *tmp_called_value_4;
  tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_4 == NULL)) {
      tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 35;
  tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[41]);

  if (tmp_assign_source_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_23);
 }
 {
  PyObject *tmp_ass_subvalue_15;
  PyObject *tmp_expression_value_16;
  PyObject *tmp_subscript_value_16;
  PyObject *tmp_ass_subscribed_15;
  PyObject *tmp_ass_subscript_15;
  tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_16 == NULL)) {
      tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_16 == NULL)) {
      tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_16);
  if (tmp_ass_subvalue_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_15 == NULL)) {
      tmp_ass_subscribed_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_15);

   exception_lineno = 35;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_15 = mod_consts[42];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
  Py_DECREF(tmp_ass_subvalue_15);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_24;
  PyObject *tmp_called_value_5;
  tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_5 == NULL)) {
      tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 36;
  tmp_assign_source_24 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[43]);

  if (tmp_assign_source_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_24);
 }
 {
  PyObject *tmp_ass_subvalue_16;
  PyObject *tmp_expression_value_17;
  PyObject *tmp_subscript_value_17;
  PyObject *tmp_ass_subscribed_16;
  PyObject *tmp_ass_subscript_16;
  tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_17 == NULL)) {
      tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_17 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_17 == NULL)) {
      tmp_subscript_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_17);
  if (tmp_ass_subvalue_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_16 == NULL)) {
      tmp_ass_subscribed_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_16);

   exception_lineno = 36;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_16 = mod_consts[44];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
  Py_DECREF(tmp_ass_subvalue_16);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 36;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_25;
  PyObject *tmp_called_value_6;
  tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_6 == NULL)) {
      tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 37;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 37;
  tmp_assign_source_25 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[45]);

  if (tmp_assign_source_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 37;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_25);
 }
 {
  PyObject *tmp_ass_subvalue_17;
  PyObject *tmp_expression_value_18;
  PyObject *tmp_subscript_value_18;
  PyObject *tmp_ass_subscribed_17;
  PyObject *tmp_ass_subscript_17;
  tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_18 == NULL)) {
      tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 37;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_18 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_18 == NULL)) {
      tmp_subscript_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 37;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_18);
  if (tmp_ass_subvalue_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 37;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_17 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_17 == NULL)) {
      tmp_ass_subscribed_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_17);

   exception_lineno = 37;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_17 = mod_consts[46];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
  Py_DECREF(tmp_ass_subvalue_17);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 37;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_26;
  PyObject *tmp_called_value_7;
  tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_7 == NULL)) {
      tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 38;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 38;
  tmp_assign_source_26 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[47]);

  if (tmp_assign_source_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 38;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_26);
 }
 {
  PyObject *tmp_ass_subvalue_18;
  PyObject *tmp_expression_value_19;
  PyObject *tmp_subscript_value_19;
  PyObject *tmp_ass_subscribed_18;
  PyObject *tmp_ass_subscript_18;
  tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_19 == NULL)) {
      tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 38;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_19 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_19 == NULL)) {
      tmp_subscript_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 38;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_19);
  if (tmp_ass_subvalue_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 38;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_18 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_18 == NULL)) {
      tmp_ass_subscribed_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_18);

   exception_lineno = 38;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_18 = mod_consts[48];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
  Py_DECREF(tmp_ass_subvalue_18);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 38;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_27;
  PyObject *tmp_called_value_8;
  tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_8 == NULL)) {
      tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 39;
  tmp_assign_source_27 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[49]);

  if (tmp_assign_source_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_27);
 }
 {
  PyObject *tmp_ass_subvalue_19;
  PyObject *tmp_expression_value_20;
  PyObject *tmp_subscript_value_20;
  PyObject *tmp_ass_subscribed_19;
  PyObject *tmp_ass_subscript_19;
  tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_20 == NULL)) {
      tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_20 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_20 == NULL)) {
      tmp_subscript_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_20);
  if (tmp_ass_subvalue_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_19 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_19 == NULL)) {
      tmp_ass_subscribed_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_19);

   exception_lineno = 39;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_19 = mod_consts[50];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
  Py_DECREF(tmp_ass_subvalue_19);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 39;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_28;
  PyObject *tmp_called_value_9;
  tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_9 == NULL)) {
      tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 40;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 40;
  tmp_assign_source_28 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[51]);

  if (tmp_assign_source_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 40;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_28);
 }
 {
  PyObject *tmp_ass_subvalue_20;
  PyObject *tmp_expression_value_21;
  PyObject *tmp_subscript_value_21;
  PyObject *tmp_ass_subscribed_20;
  PyObject *tmp_ass_subscript_20;
  tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_21 == NULL)) {
      tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 40;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_21 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_21 == NULL)) {
      tmp_subscript_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 40;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_21);
  if (tmp_ass_subvalue_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 40;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_20 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_20 == NULL)) {
      tmp_ass_subscribed_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_20);

   exception_lineno = 40;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_20 = mod_consts[52];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
  Py_DECREF(tmp_ass_subvalue_20);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 40;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_29;
  PyObject *tmp_called_value_10;
  tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_10 == NULL)) {
      tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 41;
  tmp_assign_source_29 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_10, mod_consts[53]);

  if (tmp_assign_source_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_29);
 }
 {
  PyObject *tmp_ass_subvalue_21;
  PyObject *tmp_expression_value_22;
  PyObject *tmp_subscript_value_22;
  PyObject *tmp_ass_subscribed_21;
  PyObject *tmp_ass_subscript_21;
  tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_22 == NULL)) {
      tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_22 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_22 == NULL)) {
      tmp_subscript_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_22);
  if (tmp_ass_subvalue_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_21 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_21 == NULL)) {
      tmp_ass_subscribed_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_21);

   exception_lineno = 41;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_21 = mod_consts[54];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
  Py_DECREF(tmp_ass_subvalue_21);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 41;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_30;
  PyObject *tmp_called_value_11;
  tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_11 == NULL)) {
      tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 42;
  tmp_assign_source_30 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[55]);

  if (tmp_assign_source_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_30);
 }
 {
  PyObject *tmp_ass_subvalue_22;
  PyObject *tmp_expression_value_23;
  PyObject *tmp_subscript_value_23;
  PyObject *tmp_ass_subscribed_22;
  PyObject *tmp_ass_subscript_22;
  tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_23 == NULL)) {
      tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_23 == NULL)) {
      tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_23);
  if (tmp_ass_subvalue_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_22 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_22 == NULL)) {
      tmp_ass_subscribed_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_22);

   exception_lineno = 42;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_22 = mod_consts[56];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
  Py_DECREF(tmp_ass_subvalue_22);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 42;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_31;
  PyObject *tmp_called_value_12;
  tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_12 == NULL)) {
      tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 43;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 43;
  tmp_assign_source_31 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[57]);

  if (tmp_assign_source_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 43;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_31);
 }
 {
  PyObject *tmp_ass_subvalue_23;
  PyObject *tmp_expression_value_24;
  PyObject *tmp_subscript_value_24;
  PyObject *tmp_ass_subscribed_23;
  PyObject *tmp_ass_subscript_23;
  tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_24 == NULL)) {
      tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 43;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_24 == NULL)) {
      tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 43;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_23 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_24);
  if (tmp_ass_subvalue_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 43;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_23 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_23 == NULL)) {
      tmp_ass_subscribed_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_23);

   exception_lineno = 43;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_23 = mod_consts[58];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
  Py_DECREF(tmp_ass_subvalue_23);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 43;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_32;
  PyObject *tmp_called_value_13;
  tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_13 == NULL)) {
      tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 44;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 44;
  tmp_assign_source_32 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[59]);

  if (tmp_assign_source_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 44;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_32);
 }
 {
  PyObject *tmp_ass_subvalue_24;
  PyObject *tmp_expression_value_25;
  PyObject *tmp_subscript_value_25;
  PyObject *tmp_ass_subscribed_24;
  PyObject *tmp_ass_subscript_24;
  tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_25 == NULL)) {
      tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 44;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_25 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_25 == NULL)) {
      tmp_subscript_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 44;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_25);
  if (tmp_ass_subvalue_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 44;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_24 == NULL)) {
      tmp_ass_subscribed_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_24);

   exception_lineno = 44;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_24 = mod_consts[60];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
  Py_DECREF(tmp_ass_subvalue_24);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 44;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_33;
  PyObject *tmp_called_value_14;
  tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_14 == NULL)) {
      tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 45;
  tmp_assign_source_33 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_14, mod_consts[61]);

  if (tmp_assign_source_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_33);
 }
 {
  PyObject *tmp_ass_subvalue_25;
  PyObject *tmp_expression_value_26;
  PyObject *tmp_subscript_value_26;
  PyObject *tmp_ass_subscribed_25;
  PyObject *tmp_ass_subscript_25;
  tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_26 == NULL)) {
      tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_26 == NULL)) {
      tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_25 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_26);
  if (tmp_ass_subvalue_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_25 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_25 == NULL)) {
      tmp_ass_subscribed_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_25);

   exception_lineno = 45;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_25 = mod_consts[62];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
  Py_DECREF(tmp_ass_subvalue_25);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 45;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_34;
  PyObject *tmp_called_value_15;
  tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_15 == NULL)) {
      tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 46;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 46;
  tmp_assign_source_34 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_15, mod_consts[63]);

  if (tmp_assign_source_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 46;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_34);
 }
 {
  PyObject *tmp_ass_subvalue_26;
  PyObject *tmp_expression_value_27;
  PyObject *tmp_subscript_value_27;
  PyObject *tmp_ass_subscribed_26;
  PyObject *tmp_ass_subscript_26;
  tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_27 == NULL)) {
      tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 46;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_27 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_27 == NULL)) {
      tmp_subscript_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 46;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_27);
  if (tmp_ass_subvalue_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 46;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_26 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_26 == NULL)) {
      tmp_ass_subscribed_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_26);

   exception_lineno = 46;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_26 = mod_consts[64];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
  Py_DECREF(tmp_ass_subvalue_26);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 46;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_35;
  PyObject *tmp_called_value_16;
  tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_16 == NULL)) {
      tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 47;
  tmp_assign_source_35 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_16, mod_consts[65]);

  if (tmp_assign_source_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_35);
 }
 {
  PyObject *tmp_ass_subvalue_27;
  PyObject *tmp_expression_value_28;
  PyObject *tmp_subscript_value_28;
  PyObject *tmp_ass_subscribed_27;
  PyObject *tmp_ass_subscript_27;
  tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_28 == NULL)) {
      tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_28 == NULL)) {
      tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_28);
  if (tmp_ass_subvalue_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_27 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_27 == NULL)) {
      tmp_ass_subscribed_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_27);

   exception_lineno = 47;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_27 = mod_consts[66];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
  Py_DECREF(tmp_ass_subvalue_27);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 47;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_36;
  PyObject *tmp_called_value_17;
  tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_17 == NULL)) {
      tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 48;
  tmp_assign_source_36 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[67]);

  if (tmp_assign_source_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_36);
 }
 {
  PyObject *tmp_ass_subvalue_28;
  PyObject *tmp_expression_value_29;
  PyObject *tmp_subscript_value_29;
  PyObject *tmp_ass_subscribed_28;
  PyObject *tmp_ass_subscript_28;
  tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_29 == NULL)) {
      tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_29 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_29 == NULL)) {
      tmp_subscript_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_28 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_29);
  if (tmp_ass_subvalue_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_28 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_28 == NULL)) {
      tmp_ass_subscribed_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_28);

   exception_lineno = 48;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_28 = mod_consts[68];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
  Py_DECREF(tmp_ass_subvalue_28);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 48;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_37;
  PyObject *tmp_called_value_18;
  tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_18 == NULL)) {
      tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 49;
  tmp_assign_source_37 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_18, mod_consts[69]);

  if (tmp_assign_source_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_37);
 }
 {
  PyObject *tmp_ass_subvalue_29;
  PyObject *tmp_expression_value_30;
  PyObject *tmp_subscript_value_30;
  PyObject *tmp_ass_subscribed_29;
  PyObject *tmp_ass_subscript_29;
  tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_30 == NULL)) {
      tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_30 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_30 == NULL)) {
      tmp_subscript_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_30, tmp_subscript_value_30);
  if (tmp_ass_subvalue_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_29 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_29 == NULL)) {
      tmp_ass_subscribed_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_29);

   exception_lineno = 49;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_29 = mod_consts[70];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
  Py_DECREF(tmp_ass_subvalue_29);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 49;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_38;
  PyObject *tmp_called_value_19;
  tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_19 == NULL)) {
      tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 50;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 50;
  tmp_assign_source_38 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_19, mod_consts[71]);

  if (tmp_assign_source_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 50;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_38);
 }
 {
  PyObject *tmp_ass_subvalue_30;
  PyObject *tmp_expression_value_31;
  PyObject *tmp_subscript_value_31;
  PyObject *tmp_ass_subscribed_30;
  PyObject *tmp_ass_subscript_30;
  tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_31 == NULL)) {
      tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 50;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_31 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_31 == NULL)) {
      tmp_subscript_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 50;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_31);
  if (tmp_ass_subvalue_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 50;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_30 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_30 == NULL)) {
      tmp_ass_subscribed_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_30);

   exception_lineno = 50;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_30 = mod_consts[72];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
  Py_DECREF(tmp_ass_subvalue_30);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 50;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_39;
  PyObject *tmp_called_value_20;
  tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_20 == NULL)) {
      tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 51;
  tmp_assign_source_39 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_20, mod_consts[73]);

  if (tmp_assign_source_39 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_39);
 }
 {
  PyObject *tmp_ass_subvalue_31;
  PyObject *tmp_expression_value_32;
  PyObject *tmp_subscript_value_32;
  PyObject *tmp_ass_subscribed_31;
  PyObject *tmp_ass_subscript_31;
  tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_32 == NULL)) {
      tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_32 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_32 == NULL)) {
      tmp_subscript_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_31 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_32, tmp_subscript_value_32);
  if (tmp_ass_subvalue_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_31 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_31 == NULL)) {
      tmp_ass_subscribed_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_31);

   exception_lineno = 51;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_31 = mod_consts[74];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
  Py_DECREF(tmp_ass_subvalue_31);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_40;
  PyObject *tmp_called_value_21;
  tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_21 == NULL)) {
      tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 52;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 52;
  tmp_assign_source_40 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_21, mod_consts[75]);

  if (tmp_assign_source_40 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 52;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_40);
 }
 {
  PyObject *tmp_ass_subvalue_32;
  PyObject *tmp_expression_value_33;
  PyObject *tmp_subscript_value_33;
  PyObject *tmp_ass_subscribed_32;
  PyObject *tmp_ass_subscript_32;
  tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_33 == NULL)) {
      tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 52;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_33 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_33 == NULL)) {
      tmp_subscript_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 52;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_33);
  if (tmp_ass_subvalue_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 52;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_32 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_32 == NULL)) {
      tmp_ass_subscribed_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_32);

   exception_lineno = 52;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_32 = mod_consts[76];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
  Py_DECREF(tmp_ass_subvalue_32);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 52;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_41;
  PyObject *tmp_called_value_22;
  tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_22 == NULL)) {
      tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 53;
  tmp_assign_source_41 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_22, mod_consts[77]);

  if (tmp_assign_source_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_41);
 }
 {
  PyObject *tmp_ass_subvalue_33;
  PyObject *tmp_expression_value_34;
  PyObject *tmp_subscript_value_34;
  PyObject *tmp_ass_subscribed_33;
  PyObject *tmp_ass_subscript_33;
  tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_34 == NULL)) {
      tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_34 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_34 == NULL)) {
      tmp_subscript_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_33 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_34);
  if (tmp_ass_subvalue_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_33 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_33 == NULL)) {
      tmp_ass_subscribed_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_33);

   exception_lineno = 53;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_33 = mod_consts[78];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
  Py_DECREF(tmp_ass_subvalue_33);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_42;
  PyObject *tmp_called_value_23;
  tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_23 == NULL)) {
      tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 54;
  tmp_assign_source_42 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_23, mod_consts[79]);

  if (tmp_assign_source_42 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_42);
 }
 {
  PyObject *tmp_ass_subvalue_34;
  PyObject *tmp_expression_value_35;
  PyObject *tmp_subscript_value_35;
  PyObject *tmp_ass_subscribed_34;
  PyObject *tmp_ass_subscript_34;
  tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_35 == NULL)) {
      tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_35 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_35 == NULL)) {
      tmp_subscript_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_34 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_35, tmp_subscript_value_35);
  if (tmp_ass_subvalue_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_34 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_34 == NULL)) {
      tmp_ass_subscribed_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_34);

   exception_lineno = 54;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_34 = mod_consts[80];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
  Py_DECREF(tmp_ass_subvalue_34);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_43;
  PyObject *tmp_called_value_24;
  tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_24 == NULL)) {
      tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 55;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 55;
  tmp_assign_source_43 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_24, mod_consts[81]);

  if (tmp_assign_source_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 55;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_43);
 }
 {
  PyObject *tmp_ass_subvalue_35;
  PyObject *tmp_expression_value_36;
  PyObject *tmp_subscript_value_36;
  PyObject *tmp_ass_subscribed_35;
  PyObject *tmp_ass_subscript_35;
  tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_36 == NULL)) {
      tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 55;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_36 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_36 == NULL)) {
      tmp_subscript_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 55;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_36);
  if (tmp_ass_subvalue_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 55;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_35 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_35 == NULL)) {
      tmp_ass_subscribed_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_35);

   exception_lineno = 55;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_35 = mod_consts[82];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
  Py_DECREF(tmp_ass_subvalue_35);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 55;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_44;
  PyObject *tmp_called_value_25;
  tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_25 == NULL)) {
      tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 56;
  tmp_assign_source_44 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_25, mod_consts[83]);

  if (tmp_assign_source_44 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_44);
 }
 {
  PyObject *tmp_ass_subvalue_36;
  PyObject *tmp_expression_value_37;
  PyObject *tmp_subscript_value_37;
  PyObject *tmp_ass_subscribed_36;
  PyObject *tmp_ass_subscript_36;
  tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_37 == NULL)) {
      tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_37 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_37 == NULL)) {
      tmp_subscript_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_36 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_37);
  if (tmp_ass_subvalue_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_36 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_36 == NULL)) {
      tmp_ass_subscribed_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_36);

   exception_lineno = 56;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_36 = mod_consts[84];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
  Py_DECREF(tmp_ass_subvalue_36);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_45;
  PyObject *tmp_called_value_26;
  tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_26 == NULL)) {
      tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 57;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 57;
  tmp_assign_source_45 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_26, mod_consts[85]);

  if (tmp_assign_source_45 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 57;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_45);
 }
 {
  PyObject *tmp_ass_subvalue_37;
  PyObject *tmp_expression_value_38;
  PyObject *tmp_subscript_value_38;
  PyObject *tmp_ass_subscribed_37;
  PyObject *tmp_ass_subscript_37;
  tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_38 == NULL)) {
      tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 57;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_38 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_38 == NULL)) {
      tmp_subscript_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 57;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_37 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_38, tmp_subscript_value_38);
  if (tmp_ass_subvalue_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 57;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_37 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_37 == NULL)) {
      tmp_ass_subscribed_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_37);

   exception_lineno = 57;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_37 = mod_consts[86];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
  Py_DECREF(tmp_ass_subvalue_37);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 57;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_46;
  PyObject *tmp_called_value_27;
  tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_27 == NULL)) {
      tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 58;
  tmp_assign_source_46 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_27, mod_consts[87]);

  if (tmp_assign_source_46 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_46);
 }
 {
  PyObject *tmp_ass_subvalue_38;
  PyObject *tmp_expression_value_39;
  PyObject *tmp_subscript_value_39;
  PyObject *tmp_ass_subscribed_38;
  PyObject *tmp_ass_subscript_38;
  tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_39 == NULL)) {
      tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_39 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_39 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_39 == NULL)) {
      tmp_subscript_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_39 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_39);
  if (tmp_ass_subvalue_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_38 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_38 == NULL)) {
      tmp_ass_subscribed_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_38);

   exception_lineno = 58;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_38 = mod_consts[88];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
  Py_DECREF(tmp_ass_subvalue_38);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_47;
  PyObject *tmp_called_value_28;
  tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_28 == NULL)) {
      tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 59;
  tmp_assign_source_47 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_28, mod_consts[89]);

  if (tmp_assign_source_47 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_47);
 }
 {
  PyObject *tmp_ass_subvalue_39;
  PyObject *tmp_expression_value_40;
  PyObject *tmp_subscript_value_40;
  PyObject *tmp_ass_subscribed_39;
  PyObject *tmp_ass_subscript_39;
  tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_40 == NULL)) {
      tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_40 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_40 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_40 == NULL)) {
      tmp_subscript_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_40 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_39 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_40);
  if (tmp_ass_subvalue_39 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_39 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_39 == NULL)) {
      tmp_ass_subscribed_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_39 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_39);

   exception_lineno = 59;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_39 = mod_consts[90];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
  Py_DECREF(tmp_ass_subvalue_39);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_48;
  PyObject *tmp_called_value_29;
  tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_29 == NULL)) {
      tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 60;
  tmp_assign_source_48 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_29, mod_consts[91]);

  if (tmp_assign_source_48 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_48);
 }
 {
  PyObject *tmp_ass_subvalue_40;
  PyObject *tmp_expression_value_41;
  PyObject *tmp_subscript_value_41;
  PyObject *tmp_ass_subscribed_40;
  PyObject *tmp_ass_subscript_40;
  tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_41 == NULL)) {
      tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_41 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_41 == NULL)) {
      tmp_subscript_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_41);
  if (tmp_ass_subvalue_40 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_40 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_40 == NULL)) {
      tmp_ass_subscribed_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_40 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_40);

   exception_lineno = 60;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_40 = mod_consts[92];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
  Py_DECREF(tmp_ass_subvalue_40);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_49;
  PyObject *tmp_called_value_30;
  tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_30 == NULL)) {
      tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 61;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 61;
  tmp_assign_source_49 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_30, mod_consts[93]);

  if (tmp_assign_source_49 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 61;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_49);
 }
 {
  PyObject *tmp_ass_subvalue_41;
  PyObject *tmp_expression_value_42;
  PyObject *tmp_subscript_value_42;
  PyObject *tmp_ass_subscribed_41;
  PyObject *tmp_ass_subscript_41;
  tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_42 == NULL)) {
      tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_42 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 61;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_42 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_42 == NULL)) {
      tmp_subscript_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_42 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 61;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_41 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_42);
  if (tmp_ass_subvalue_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 61;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_41 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_41 == NULL)) {
      tmp_ass_subscribed_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_41);

   exception_lineno = 61;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_41 = mod_consts[94];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
  Py_DECREF(tmp_ass_subvalue_41);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 61;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_50;
  PyObject *tmp_called_value_31;
  tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_31 == NULL)) {
      tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 62;
  tmp_assign_source_50 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_31, mod_consts[95]);

  if (tmp_assign_source_50 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_50);
 }
 {
  PyObject *tmp_ass_subvalue_42;
  PyObject *tmp_expression_value_43;
  PyObject *tmp_subscript_value_43;
  PyObject *tmp_ass_subscribed_42;
  PyObject *tmp_ass_subscript_42;
  tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_43 == NULL)) {
      tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_43 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_43 == NULL)) {
      tmp_subscript_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_42 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_43);
  if (tmp_ass_subvalue_42 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_42 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_42 == NULL)) {
      tmp_ass_subscribed_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_42 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_42);

   exception_lineno = 62;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_42 = mod_consts[96];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
  Py_DECREF(tmp_ass_subvalue_42);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_51;
  PyObject *tmp_called_value_32;
  tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_32 == NULL)) {
      tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 63;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 63;
  tmp_assign_source_51 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_32, mod_consts[97]);

  if (tmp_assign_source_51 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 63;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_51);
 }
 {
  PyObject *tmp_ass_subvalue_43;
  PyObject *tmp_expression_value_44;
  PyObject *tmp_subscript_value_44;
  PyObject *tmp_ass_subscribed_43;
  PyObject *tmp_ass_subscript_43;
  tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_44 == NULL)) {
      tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_44 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 63;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_44 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_44 == NULL)) {
      tmp_subscript_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_44 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 63;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_44);
  if (tmp_ass_subvalue_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 63;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_43 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_43 == NULL)) {
      tmp_ass_subscribed_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_43);

   exception_lineno = 63;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_43 = mod_consts[98];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
  Py_DECREF(tmp_ass_subvalue_43);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 63;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_52;
  PyObject *tmp_called_value_33;
  tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_33 == NULL)) {
      tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 64;
  tmp_assign_source_52 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_33, mod_consts[99]);

  if (tmp_assign_source_52 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_52);
 }
 {
  PyObject *tmp_ass_subvalue_44;
  PyObject *tmp_expression_value_45;
  PyObject *tmp_subscript_value_45;
  PyObject *tmp_ass_subscribed_44;
  PyObject *tmp_ass_subscript_44;
  tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_45 == NULL)) {
      tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_45 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_45 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_45 == NULL)) {
      tmp_subscript_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_45 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_45);
  if (tmp_ass_subvalue_44 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_44 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_44 == NULL)) {
      tmp_ass_subscribed_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_44 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_44);

   exception_lineno = 64;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_44 = mod_consts[100];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
  Py_DECREF(tmp_ass_subvalue_44);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_53;
  PyObject *tmp_called_value_34;
  tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_34 == NULL)) {
      tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 65;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 65;
  tmp_assign_source_53 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_34, mod_consts[101]);

  if (tmp_assign_source_53 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 65;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_53);
 }
 {
  PyObject *tmp_ass_subvalue_45;
  PyObject *tmp_expression_value_46;
  PyObject *tmp_subscript_value_46;
  PyObject *tmp_ass_subscribed_45;
  PyObject *tmp_ass_subscript_45;
  tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_46 == NULL)) {
      tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_46 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 65;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_46 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_46 == NULL)) {
      tmp_subscript_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_46 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 65;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_46);
  if (tmp_ass_subvalue_45 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 65;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_45 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_45 == NULL)) {
      tmp_ass_subscribed_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_45 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_45);

   exception_lineno = 65;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_45 = mod_consts[102];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
  Py_DECREF(tmp_ass_subvalue_45);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 65;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_54;
  PyObject *tmp_called_value_35;
  tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_35 == NULL)) {
      tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 66;
  tmp_assign_source_54 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_35, mod_consts[103]);

  if (tmp_assign_source_54 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_54);
 }
 {
  PyObject *tmp_ass_subvalue_46;
  PyObject *tmp_expression_value_47;
  PyObject *tmp_subscript_value_47;
  PyObject *tmp_ass_subscribed_46;
  PyObject *tmp_ass_subscript_46;
  tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_47 == NULL)) {
      tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_47 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_47 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_47 == NULL)) {
      tmp_subscript_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_47 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_47);
  if (tmp_ass_subvalue_46 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_46 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_46 == NULL)) {
      tmp_ass_subscribed_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_46 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_46);

   exception_lineno = 66;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_46 = mod_consts[104];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
  Py_DECREF(tmp_ass_subvalue_46);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_55;
  PyObject *tmp_called_value_36;
  tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_36 == NULL)) {
      tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 67;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 67;
  tmp_assign_source_55 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_36, mod_consts[105]);

  if (tmp_assign_source_55 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 67;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_55);
 }
 {
  PyObject *tmp_ass_subvalue_47;
  PyObject *tmp_expression_value_48;
  PyObject *tmp_subscript_value_48;
  PyObject *tmp_ass_subscribed_47;
  PyObject *tmp_ass_subscript_47;
  tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_48 == NULL)) {
      tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_48 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 67;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_48 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_48 == NULL)) {
      tmp_subscript_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_48 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 67;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_47 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_48);
  if (tmp_ass_subvalue_47 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 67;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_47 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_47 == NULL)) {
      tmp_ass_subscribed_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_47 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_47);

   exception_lineno = 67;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_47 = mod_consts[106];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
  Py_DECREF(tmp_ass_subvalue_47);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 67;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_56;
  PyObject *tmp_called_value_37;
  tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_37 == NULL)) {
      tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 68;
  tmp_assign_source_56 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_37, mod_consts[107]);

  if (tmp_assign_source_56 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_56);
 }
 {
  PyObject *tmp_ass_subvalue_48;
  PyObject *tmp_expression_value_49;
  PyObject *tmp_subscript_value_49;
  PyObject *tmp_ass_subscribed_48;
  PyObject *tmp_ass_subscript_48;
  tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_49 == NULL)) {
      tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_49 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_49 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_49 == NULL)) {
      tmp_subscript_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_49 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_48 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_49);
  if (tmp_ass_subvalue_48 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_48 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_48 == NULL)) {
      tmp_ass_subscribed_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_48 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_48);

   exception_lineno = 68;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_48 = mod_consts[108];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
  Py_DECREF(tmp_ass_subvalue_48);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_57;
  PyObject *tmp_called_value_38;
  tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_38 == NULL)) {
      tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 69;
  tmp_assign_source_57 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_38, mod_consts[109]);

  if (tmp_assign_source_57 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_57);
 }
 {
  PyObject *tmp_ass_subvalue_49;
  PyObject *tmp_expression_value_50;
  PyObject *tmp_subscript_value_50;
  PyObject *tmp_ass_subscribed_49;
  PyObject *tmp_ass_subscript_49;
  tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_50 == NULL)) {
      tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_50 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_50 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_50 == NULL)) {
      tmp_subscript_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_50 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_50);
  if (tmp_ass_subvalue_49 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_49 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_49 == NULL)) {
      tmp_ass_subscribed_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_49 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_49);

   exception_lineno = 69;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_49 = mod_consts[110];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
  Py_DECREF(tmp_ass_subvalue_49);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_58;
  PyObject *tmp_called_value_39;
  tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_39 == NULL)) {
      tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_39 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 70;
  tmp_assign_source_58 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_39, mod_consts[111]);

  if (tmp_assign_source_58 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_58);
 }
 {
  PyObject *tmp_ass_subvalue_50;
  PyObject *tmp_expression_value_51;
  PyObject *tmp_subscript_value_51;
  PyObject *tmp_ass_subscribed_50;
  PyObject *tmp_ass_subscript_50;
  tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_51 == NULL)) {
      tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_51 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_51 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_51 == NULL)) {
      tmp_subscript_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_51 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_51);
  if (tmp_ass_subvalue_50 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_50 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_50 == NULL)) {
      tmp_ass_subscribed_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_50 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_50);

   exception_lineno = 70;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_50 = mod_consts[112];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
  Py_DECREF(tmp_ass_subvalue_50);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_59;
  PyObject *tmp_called_value_40;
  tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_40 == NULL)) {
      tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_40 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 71;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 71;
  tmp_assign_source_59 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_40, mod_consts[113]);

  if (tmp_assign_source_59 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 71;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_59);
 }
 {
  PyObject *tmp_ass_subvalue_51;
  PyObject *tmp_expression_value_52;
  PyObject *tmp_subscript_value_52;
  PyObject *tmp_ass_subscribed_51;
  PyObject *tmp_ass_subscript_51;
  tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_52 == NULL)) {
      tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_52 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 71;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_52 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_52 == NULL)) {
      tmp_subscript_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_52 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 71;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_51 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_52);
  if (tmp_ass_subvalue_51 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 71;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_51 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_51 == NULL)) {
      tmp_ass_subscribed_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_51 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_51);

   exception_lineno = 71;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_51 = mod_consts[114];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
  Py_DECREF(tmp_ass_subvalue_51);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 71;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_60;
  PyObject *tmp_called_value_41;
  tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_41 == NULL)) {
      tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 72;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 72;
  tmp_assign_source_60 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_41, mod_consts[115]);

  if (tmp_assign_source_60 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 72;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_60);
 }
 {
  PyObject *tmp_ass_subvalue_52;
  PyObject *tmp_expression_value_53;
  PyObject *tmp_subscript_value_53;
  PyObject *tmp_ass_subscribed_52;
  PyObject *tmp_ass_subscript_52;
  tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_53 == NULL)) {
      tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_53 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 72;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_53 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_53 == NULL)) {
      tmp_subscript_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_53 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 72;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_52 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_53);
  if (tmp_ass_subvalue_52 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 72;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_52 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_52 == NULL)) {
      tmp_ass_subscribed_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_52 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_52);

   exception_lineno = 72;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_52 = mod_consts[116];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
  Py_DECREF(tmp_ass_subvalue_52);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 72;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_61;
  PyObject *tmp_called_value_42;
  tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_42 == NULL)) {
      tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_42 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 73;
  tmp_assign_source_61 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_42, mod_consts[117]);

  if (tmp_assign_source_61 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_61);
 }
 {
  PyObject *tmp_ass_subvalue_53;
  PyObject *tmp_expression_value_54;
  PyObject *tmp_subscript_value_54;
  PyObject *tmp_ass_subscribed_53;
  PyObject *tmp_ass_subscript_53;
  tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_54 == NULL)) {
      tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_54 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_54 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_54 == NULL)) {
      tmp_subscript_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_54 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_54);
  if (tmp_ass_subvalue_53 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_53 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_53 == NULL)) {
      tmp_ass_subscribed_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_53 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_53);

   exception_lineno = 73;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_53 = mod_consts[118];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
  Py_DECREF(tmp_ass_subvalue_53);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 73;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_62;
  PyObject *tmp_called_value_43;
  tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_43 == NULL)) {
      tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 74;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 74;
  tmp_assign_source_62 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_43, mod_consts[119]);

  if (tmp_assign_source_62 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 74;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_62);
 }
 {
  PyObject *tmp_ass_subvalue_54;
  PyObject *tmp_expression_value_55;
  PyObject *tmp_subscript_value_55;
  PyObject *tmp_ass_subscribed_54;
  PyObject *tmp_ass_subscript_54;
  tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_55 == NULL)) {
      tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_55 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 74;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_55 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_55 == NULL)) {
      tmp_subscript_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_55 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 74;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_54 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_55);
  if (tmp_ass_subvalue_54 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 74;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_54 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_54 == NULL)) {
      tmp_ass_subscribed_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_54 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_54);

   exception_lineno = 74;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_54 = mod_consts[120];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
  Py_DECREF(tmp_ass_subvalue_54);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 74;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_63;
  PyObject *tmp_called_value_44;
  tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_44 == NULL)) {
      tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_44 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 75;
  tmp_assign_source_63 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_44, mod_consts[121]);

  if (tmp_assign_source_63 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_63);
 }
 {
  PyObject *tmp_ass_subvalue_55;
  PyObject *tmp_expression_value_56;
  PyObject *tmp_subscript_value_56;
  PyObject *tmp_ass_subscribed_55;
  PyObject *tmp_ass_subscript_55;
  tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_56 == NULL)) {
      tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_56 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_56 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_56 == NULL)) {
      tmp_subscript_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_56 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_55 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_56);
  if (tmp_ass_subvalue_55 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_55 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_55 == NULL)) {
      tmp_ass_subscribed_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_55 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_55);

   exception_lineno = 75;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_55 = mod_consts[122];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55);
  Py_DECREF(tmp_ass_subvalue_55);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 75;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_64;
  PyObject *tmp_called_value_45;
  tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_45 == NULL)) {
      tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_45 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 76;
  tmp_assign_source_64 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_45, mod_consts[123]);

  if (tmp_assign_source_64 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_64);
 }
 {
  PyObject *tmp_ass_subvalue_56;
  PyObject *tmp_expression_value_57;
  PyObject *tmp_subscript_value_57;
  PyObject *tmp_ass_subscribed_56;
  PyObject *tmp_ass_subscript_56;
  tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_57 == NULL)) {
      tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_57 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_57 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_57 == NULL)) {
      tmp_subscript_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_57 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_56 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_57);
  if (tmp_ass_subvalue_56 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_56 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_56 == NULL)) {
      tmp_ass_subscribed_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_56 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_56);

   exception_lineno = 76;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_56 = mod_consts[124];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56);
  Py_DECREF(tmp_ass_subvalue_56);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 76;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_65;
  PyObject *tmp_called_value_46;
  tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_46 == NULL)) {
      tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_46 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 77;
  tmp_assign_source_65 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_46, mod_consts[125]);

  if (tmp_assign_source_65 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_65);
 }
 {
  PyObject *tmp_ass_subvalue_57;
  PyObject *tmp_expression_value_58;
  PyObject *tmp_subscript_value_58;
  PyObject *tmp_ass_subscribed_57;
  PyObject *tmp_ass_subscript_57;
  tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_58 == NULL)) {
      tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_58 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_58 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_58 == NULL)) {
      tmp_subscript_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_58 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_57 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_58);
  if (tmp_ass_subvalue_57 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_57 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_57 == NULL)) {
      tmp_ass_subscribed_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_57 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_57);

   exception_lineno = 77;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_57 = mod_consts[126];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57);
  Py_DECREF(tmp_ass_subvalue_57);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_66;
  PyObject *tmp_called_value_47;
  tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_47 == NULL)) {
      tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_47 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 78;
  tmp_assign_source_66 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_47, mod_consts[127]);

  if (tmp_assign_source_66 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_66);
 }
 {
  PyObject *tmp_ass_subvalue_58;
  PyObject *tmp_expression_value_59;
  PyObject *tmp_subscript_value_59;
  PyObject *tmp_ass_subscribed_58;
  PyObject *tmp_ass_subscript_58;
  tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_59 == NULL)) {
      tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_59 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_59 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_59 == NULL)) {
      tmp_subscript_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_59 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_58 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_59);
  if (tmp_ass_subvalue_58 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_58 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_58 == NULL)) {
      tmp_ass_subscribed_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_58 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_58);

   exception_lineno = 78;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_58 = mod_consts[128];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58);
  Py_DECREF(tmp_ass_subvalue_58);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_67;
  PyObject *tmp_called_value_48;
  tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_48 == NULL)) {
      tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_48 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 79;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 79;
  tmp_assign_source_67 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_48, mod_consts[129]);

  if (tmp_assign_source_67 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 79;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_67);
 }
 {
  PyObject *tmp_ass_subvalue_59;
  PyObject *tmp_expression_value_60;
  PyObject *tmp_subscript_value_60;
  PyObject *tmp_ass_subscribed_59;
  PyObject *tmp_ass_subscript_59;
  tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_60 == NULL)) {
      tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_60 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 79;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_60 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_60 == NULL)) {
      tmp_subscript_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_60 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 79;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_59 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_60);
  if (tmp_ass_subvalue_59 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 79;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_59 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_59 == NULL)) {
      tmp_ass_subscribed_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_59 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_59);

   exception_lineno = 79;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_59 = mod_consts[130];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59);
  Py_DECREF(tmp_ass_subvalue_59);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 79;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_68;
  PyObject *tmp_called_value_49;
  tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_49 == NULL)) {
      tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_49 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 80;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 80;
  tmp_assign_source_68 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_49, mod_consts[131]);

  if (tmp_assign_source_68 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 80;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_68);
 }
 {
  PyObject *tmp_ass_subvalue_60;
  PyObject *tmp_expression_value_61;
  PyObject *tmp_subscript_value_61;
  PyObject *tmp_ass_subscribed_60;
  PyObject *tmp_ass_subscript_60;
  tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_61 == NULL)) {
      tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_61 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 80;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_61 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_61 == NULL)) {
      tmp_subscript_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_61 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 80;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_60 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_61);
  if (tmp_ass_subvalue_60 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 80;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_60 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_60 == NULL)) {
      tmp_ass_subscribed_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_60 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_60);

   exception_lineno = 80;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_60 = mod_consts[132];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60);
  Py_DECREF(tmp_ass_subvalue_60);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 80;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_69;
  PyObject *tmp_called_value_50;
  tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_50 == NULL)) {
      tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_50 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 81;
  tmp_assign_source_69 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_50, mod_consts[133]);

  if (tmp_assign_source_69 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_69);
 }
 {
  PyObject *tmp_ass_subvalue_61;
  PyObject *tmp_expression_value_62;
  PyObject *tmp_subscript_value_62;
  PyObject *tmp_ass_subscribed_61;
  PyObject *tmp_ass_subscript_61;
  tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_62 == NULL)) {
      tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_62 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_62 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_62 == NULL)) {
      tmp_subscript_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_62 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_62);
  if (tmp_ass_subvalue_61 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_61 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_61 == NULL)) {
      tmp_ass_subscribed_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_61 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_61);

   exception_lineno = 81;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_61 = mod_consts[134];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61);
  Py_DECREF(tmp_ass_subvalue_61);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_70;
  PyObject *tmp_called_value_51;
  tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_51 == NULL)) {
      tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_51 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 82;
  tmp_assign_source_70 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_51, mod_consts[135]);

  if (tmp_assign_source_70 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_70);
 }
 {
  PyObject *tmp_ass_subvalue_62;
  PyObject *tmp_expression_value_63;
  PyObject *tmp_subscript_value_63;
  PyObject *tmp_ass_subscribed_62;
  PyObject *tmp_ass_subscript_62;
  tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_63 == NULL)) {
      tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_63 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_63 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_63 == NULL)) {
      tmp_subscript_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_63 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_62 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_63);
  if (tmp_ass_subvalue_62 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_62 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_62 == NULL)) {
      tmp_ass_subscribed_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_62 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_62);

   exception_lineno = 82;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_62 = mod_consts[136];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62);
  Py_DECREF(tmp_ass_subvalue_62);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_71;
  PyObject *tmp_called_value_52;
  tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_52 == NULL)) {
      tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_52 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 83;
  tmp_assign_source_71 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_52, mod_consts[137]);

  if (tmp_assign_source_71 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_71);
 }
 {
  PyObject *tmp_ass_subvalue_63;
  PyObject *tmp_expression_value_64;
  PyObject *tmp_subscript_value_64;
  PyObject *tmp_ass_subscribed_63;
  PyObject *tmp_ass_subscript_63;
  tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_64 == NULL)) {
      tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_64 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_64 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_64 == NULL)) {
      tmp_subscript_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_64 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_63 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_64);
  if (tmp_ass_subvalue_63 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_63 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_63 == NULL)) {
      tmp_ass_subscribed_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_63 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_63);

   exception_lineno = 83;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_63 = mod_consts[138];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63);
  Py_DECREF(tmp_ass_subvalue_63);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 83;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_72;
  PyObject *tmp_called_value_53;
  tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_53 == NULL)) {
      tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_53 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 84;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 84;
  tmp_assign_source_72 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_53, mod_consts[139]);

  if (tmp_assign_source_72 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 84;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_72);
 }
 {
  PyObject *tmp_ass_subvalue_64;
  PyObject *tmp_expression_value_65;
  PyObject *tmp_subscript_value_65;
  PyObject *tmp_ass_subscribed_64;
  PyObject *tmp_ass_subscript_64;
  tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_65 == NULL)) {
      tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_65 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 84;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_65 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_65 == NULL)) {
      tmp_subscript_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_65 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 84;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_64 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_65);
  if (tmp_ass_subvalue_64 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 84;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_64 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_64 == NULL)) {
      tmp_ass_subscribed_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_64 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_64);

   exception_lineno = 84;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_64 = mod_consts[140];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64);
  Py_DECREF(tmp_ass_subvalue_64);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 84;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_73;
  PyObject *tmp_called_value_54;
  tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_54 == NULL)) {
      tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_54 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 85;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 85;
  tmp_assign_source_73 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_54, mod_consts[141]);

  if (tmp_assign_source_73 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 85;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_73);
 }
 {
  PyObject *tmp_ass_subvalue_65;
  PyObject *tmp_expression_value_66;
  PyObject *tmp_subscript_value_66;
  PyObject *tmp_ass_subscribed_65;
  PyObject *tmp_ass_subscript_65;
  tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_66 == NULL)) {
      tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_66 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 85;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_66 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_66 == NULL)) {
      tmp_subscript_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_66 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 85;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_65 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_66);
  if (tmp_ass_subvalue_65 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 85;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_65 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_65 == NULL)) {
      tmp_ass_subscribed_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_65 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_65);

   exception_lineno = 85;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_65 = mod_consts[142];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65);
  Py_DECREF(tmp_ass_subvalue_65);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 85;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_74;
  PyObject *tmp_called_value_55;
  tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_55 == NULL)) {
      tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_55 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 86;
  tmp_assign_source_74 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_55, mod_consts[143]);

  if (tmp_assign_source_74 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_74);
 }
 {
  PyObject *tmp_ass_subvalue_66;
  PyObject *tmp_expression_value_67;
  PyObject *tmp_subscript_value_67;
  PyObject *tmp_ass_subscribed_66;
  PyObject *tmp_ass_subscript_66;
  tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_67 == NULL)) {
      tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_67 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_67 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_67 == NULL)) {
      tmp_subscript_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_67 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_66 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_67);
  if (tmp_ass_subvalue_66 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_66 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_66 == NULL)) {
      tmp_ass_subscribed_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_66 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_66);

   exception_lineno = 86;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_66 = mod_consts[144];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66);
  Py_DECREF(tmp_ass_subvalue_66);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_75;
  PyObject *tmp_called_value_56;
  tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_56 == NULL)) {
      tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_56 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 87;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 87;
  tmp_assign_source_75 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_56, mod_consts[145]);

  if (tmp_assign_source_75 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 87;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_75);
 }
 {
  PyObject *tmp_ass_subvalue_67;
  PyObject *tmp_expression_value_68;
  PyObject *tmp_subscript_value_68;
  PyObject *tmp_ass_subscribed_67;
  PyObject *tmp_ass_subscript_67;
  tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_68 == NULL)) {
      tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_68 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 87;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_68 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_68 == NULL)) {
      tmp_subscript_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_68 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 87;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_67 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_68);
  if (tmp_ass_subvalue_67 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 87;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_67 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_67 == NULL)) {
      tmp_ass_subscribed_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_67 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_67);

   exception_lineno = 87;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_67 = mod_consts[146];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_67, tmp_ass_subscript_67, tmp_ass_subvalue_67);
  Py_DECREF(tmp_ass_subvalue_67);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 87;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_76;
  PyObject *tmp_called_value_57;
  tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_57 == NULL)) {
      tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_57 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 88;
  tmp_assign_source_76 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_57, mod_consts[147]);

  if (tmp_assign_source_76 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_76);
 }
 {
  PyObject *tmp_ass_subvalue_68;
  PyObject *tmp_expression_value_69;
  PyObject *tmp_subscript_value_69;
  PyObject *tmp_ass_subscribed_68;
  PyObject *tmp_ass_subscript_68;
  tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_69 == NULL)) {
      tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_69 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_69 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_69 == NULL)) {
      tmp_subscript_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_69 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_68 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_69, tmp_subscript_value_69);
  if (tmp_ass_subvalue_68 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_68 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_68 == NULL)) {
      tmp_ass_subscribed_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_68 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_68);

   exception_lineno = 88;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_68 = mod_consts[148];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_68, tmp_ass_subscript_68, tmp_ass_subvalue_68);
  Py_DECREF(tmp_ass_subvalue_68);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_77;
  PyObject *tmp_called_value_58;
  tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_58 == NULL)) {
      tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_58 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 89;
  tmp_assign_source_77 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_58, mod_consts[149]);

  if (tmp_assign_source_77 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_77);
 }
 {
  PyObject *tmp_ass_subvalue_69;
  PyObject *tmp_expression_value_70;
  PyObject *tmp_subscript_value_70;
  PyObject *tmp_ass_subscribed_69;
  PyObject *tmp_ass_subscript_69;
  tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_70 == NULL)) {
      tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_70 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_70 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_70 == NULL)) {
      tmp_subscript_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_70 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_69 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_70, tmp_subscript_value_70);
  if (tmp_ass_subvalue_69 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_69 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_69 == NULL)) {
      tmp_ass_subscribed_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_69 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_69);

   exception_lineno = 89;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_69 = mod_consts[150];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_69, tmp_ass_subscript_69, tmp_ass_subvalue_69);
  Py_DECREF(tmp_ass_subvalue_69);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_78;
  PyObject *tmp_called_value_59;
  tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_59 == NULL)) {
      tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_59 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 90;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 90;
  tmp_assign_source_78 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_59, mod_consts[151]);

  if (tmp_assign_source_78 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 90;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_78);
 }
 {
  PyObject *tmp_ass_subvalue_70;
  PyObject *tmp_expression_value_71;
  PyObject *tmp_subscript_value_71;
  PyObject *tmp_ass_subscribed_70;
  PyObject *tmp_ass_subscript_70;
  tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_71 == NULL)) {
      tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_71 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 90;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_71 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_71 == NULL)) {
      tmp_subscript_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_71 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 90;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_70 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_71, tmp_subscript_value_71);
  if (tmp_ass_subvalue_70 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 90;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_70 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_70 == NULL)) {
      tmp_ass_subscribed_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_70 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_70);

   exception_lineno = 90;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_70 = mod_consts[152];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_70, tmp_ass_subscript_70, tmp_ass_subvalue_70);
  Py_DECREF(tmp_ass_subvalue_70);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 90;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_79;
  PyObject *tmp_called_value_60;
  tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_60 == NULL)) {
      tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_60 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 91;
  tmp_assign_source_79 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_60, mod_consts[153]);

  if (tmp_assign_source_79 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_79);
 }
 {
  PyObject *tmp_ass_subvalue_71;
  PyObject *tmp_expression_value_72;
  PyObject *tmp_subscript_value_72;
  PyObject *tmp_ass_subscribed_71;
  PyObject *tmp_ass_subscript_71;
  tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_72 == NULL)) {
      tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_72 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_72 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_72 == NULL)) {
      tmp_subscript_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_72 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_71 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_72, tmp_subscript_value_72);
  if (tmp_ass_subvalue_71 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_71 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_71 == NULL)) {
      tmp_ass_subscribed_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_71 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_71);

   exception_lineno = 91;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_71 = mod_consts[154];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_71, tmp_ass_subscript_71, tmp_ass_subvalue_71);
  Py_DECREF(tmp_ass_subvalue_71);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 91;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_80;
  PyObject *tmp_called_value_61;
  tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_61 == NULL)) {
      tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_61 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 92;
  tmp_assign_source_80 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_61, mod_consts[155]);

  if (tmp_assign_source_80 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_80);
 }
 {
  PyObject *tmp_ass_subvalue_72;
  PyObject *tmp_expression_value_73;
  PyObject *tmp_subscript_value_73;
  PyObject *tmp_ass_subscribed_72;
  PyObject *tmp_ass_subscript_72;
  tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_73 == NULL)) {
      tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_73 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_73 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_73 == NULL)) {
      tmp_subscript_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_73 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_72 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_73, tmp_subscript_value_73);
  if (tmp_ass_subvalue_72 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_72 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_72 == NULL)) {
      tmp_ass_subscribed_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_72 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_72);

   exception_lineno = 92;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_72 = mod_consts[156];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_72, tmp_ass_subscript_72, tmp_ass_subvalue_72);
  Py_DECREF(tmp_ass_subvalue_72);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 92;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_81;
  PyObject *tmp_called_value_62;
  tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_62 == NULL)) {
      tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_62 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 93;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 93;
  tmp_assign_source_81 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_62, mod_consts[157]);

  if (tmp_assign_source_81 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 93;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_81);
 }
 {
  PyObject *tmp_ass_subvalue_73;
  PyObject *tmp_expression_value_74;
  PyObject *tmp_subscript_value_74;
  PyObject *tmp_ass_subscribed_73;
  PyObject *tmp_ass_subscript_73;
  tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_74 == NULL)) {
      tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_74 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 93;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_74 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_74 == NULL)) {
      tmp_subscript_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_74 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 93;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_73 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_74, tmp_subscript_value_74);
  if (tmp_ass_subvalue_73 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 93;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_73 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_73 == NULL)) {
      tmp_ass_subscribed_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_73 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_73);

   exception_lineno = 93;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_73 = mod_consts[158];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_73, tmp_ass_subscript_73, tmp_ass_subvalue_73);
  Py_DECREF(tmp_ass_subvalue_73);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 93;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_82;
  PyObject *tmp_called_value_63;
  tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_63 == NULL)) {
      tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_63 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 94;
  tmp_assign_source_82 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_63, mod_consts[159]);

  if (tmp_assign_source_82 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_82);
 }
 {
  PyObject *tmp_ass_subvalue_74;
  PyObject *tmp_expression_value_75;
  PyObject *tmp_subscript_value_75;
  PyObject *tmp_ass_subscribed_74;
  PyObject *tmp_ass_subscript_74;
  tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_75 == NULL)) {
      tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_75 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_75 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_75 == NULL)) {
      tmp_subscript_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_75 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_74 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_75, tmp_subscript_value_75);
  if (tmp_ass_subvalue_74 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_74 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_74 == NULL)) {
      tmp_ass_subscribed_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_74 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_74);

   exception_lineno = 94;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_74 = mod_consts[160];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_74, tmp_ass_subscript_74, tmp_ass_subvalue_74);
  Py_DECREF(tmp_ass_subvalue_74);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 94;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_83;
  PyObject *tmp_called_value_64;
  tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_64 == NULL)) {
      tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_64 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 95;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 95;
  tmp_assign_source_83 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_64, mod_consts[161]);

  if (tmp_assign_source_83 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 95;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_83);
 }
 {
  PyObject *tmp_ass_subvalue_75;
  PyObject *tmp_expression_value_76;
  PyObject *tmp_subscript_value_76;
  PyObject *tmp_ass_subscribed_75;
  PyObject *tmp_ass_subscript_75;
  tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_76 == NULL)) {
      tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_76 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 95;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_76 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_76 == NULL)) {
      tmp_subscript_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_76 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 95;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_75 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_76, tmp_subscript_value_76);
  if (tmp_ass_subvalue_75 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 95;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_75 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_75 == NULL)) {
      tmp_ass_subscribed_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_75 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_75);

   exception_lineno = 95;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_75 = mod_consts[162];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_75, tmp_ass_subscript_75, tmp_ass_subvalue_75);
  Py_DECREF(tmp_ass_subvalue_75);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 95;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_84;
  PyObject *tmp_called_value_65;
  tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_65 == NULL)) {
      tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_65 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 96;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 96;
  tmp_assign_source_84 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_65, mod_consts[163]);

  if (tmp_assign_source_84 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 96;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_84);
 }
 {
  PyObject *tmp_ass_subvalue_76;
  PyObject *tmp_expression_value_77;
  PyObject *tmp_subscript_value_77;
  PyObject *tmp_ass_subscribed_76;
  PyObject *tmp_ass_subscript_76;
  tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_77 == NULL)) {
      tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_77 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 96;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_77 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_77 == NULL)) {
      tmp_subscript_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_77 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 96;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_76 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_77, tmp_subscript_value_77);
  if (tmp_ass_subvalue_76 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 96;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_76 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_76 == NULL)) {
      tmp_ass_subscribed_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_76 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_76);

   exception_lineno = 96;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_76 = mod_consts[164];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_76, tmp_ass_subscript_76, tmp_ass_subvalue_76);
  Py_DECREF(tmp_ass_subvalue_76);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 96;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_85;
  PyObject *tmp_called_value_66;
  tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_66 == NULL)) {
      tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_66 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 97;
  tmp_assign_source_85 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_66, mod_consts[165]);

  if (tmp_assign_source_85 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_85);
 }
 {
  PyObject *tmp_ass_subvalue_77;
  PyObject *tmp_expression_value_78;
  PyObject *tmp_subscript_value_78;
  PyObject *tmp_ass_subscribed_77;
  PyObject *tmp_ass_subscript_77;
  tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_78 == NULL)) {
      tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_78 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_78 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_78 == NULL)) {
      tmp_subscript_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_78 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_77 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_78, tmp_subscript_value_78);
  if (tmp_ass_subvalue_77 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_77 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_77 == NULL)) {
      tmp_ass_subscribed_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_77 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_77);

   exception_lineno = 97;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_77 = mod_consts[166];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_77, tmp_ass_subscript_77, tmp_ass_subvalue_77);
  Py_DECREF(tmp_ass_subvalue_77);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 97;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_86;
  PyObject *tmp_called_value_67;
  tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_67 == NULL)) {
      tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_67 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 98;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 98;
  tmp_assign_source_86 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_67, mod_consts[167]);

  if (tmp_assign_source_86 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 98;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_86);
 }
 {
  PyObject *tmp_ass_subvalue_78;
  PyObject *tmp_expression_value_79;
  PyObject *tmp_subscript_value_79;
  PyObject *tmp_ass_subscribed_78;
  PyObject *tmp_ass_subscript_78;
  tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_79 == NULL)) {
      tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_79 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 98;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_79 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_79 == NULL)) {
      tmp_subscript_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_79 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 98;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_78 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_79);
  if (tmp_ass_subvalue_78 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 98;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_78 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_78 == NULL)) {
      tmp_ass_subscribed_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_78 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_78);

   exception_lineno = 98;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_78 = mod_consts[168];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_78, tmp_ass_subscript_78, tmp_ass_subvalue_78);
  Py_DECREF(tmp_ass_subvalue_78);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 98;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_87;
  PyObject *tmp_called_value_68;
  tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_68 == NULL)) {
      tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_68 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 99;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 99;
  tmp_assign_source_87 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_68, mod_consts[169]);

  if (tmp_assign_source_87 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 99;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_87);
 }
 {
  PyObject *tmp_ass_subvalue_79;
  PyObject *tmp_expression_value_80;
  PyObject *tmp_subscript_value_80;
  PyObject *tmp_ass_subscribed_79;
  PyObject *tmp_ass_subscript_79;
  tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_80 == NULL)) {
      tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_80 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 99;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_80 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_80 == NULL)) {
      tmp_subscript_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_80 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 99;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_79 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_80);
  if (tmp_ass_subvalue_79 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 99;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_79 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_79 == NULL)) {
      tmp_ass_subscribed_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_79 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_79);

   exception_lineno = 99;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_79 = mod_consts[170];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_79, tmp_ass_subscript_79, tmp_ass_subvalue_79);
  Py_DECREF(tmp_ass_subvalue_79);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 99;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_88;
  PyObject *tmp_called_value_69;
  tmp_called_value_69 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_69 == NULL)) {
      tmp_called_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_69 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 100;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 100;
  tmp_assign_source_88 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_69, mod_consts[171]);

  if (tmp_assign_source_88 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 100;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_88);
 }
 {
  PyObject *tmp_ass_subvalue_80;
  PyObject *tmp_expression_value_81;
  PyObject *tmp_subscript_value_81;
  PyObject *tmp_ass_subscribed_80;
  PyObject *tmp_ass_subscript_80;
  tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_81 == NULL)) {
      tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_81 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 100;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_81 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_81 == NULL)) {
      tmp_subscript_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_81 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 100;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_80 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_81);
  if (tmp_ass_subvalue_80 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 100;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_80 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_80 == NULL)) {
      tmp_ass_subscribed_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_80 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_80);

   exception_lineno = 100;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_80 = mod_consts[172];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_80, tmp_ass_subscript_80, tmp_ass_subvalue_80);
  Py_DECREF(tmp_ass_subvalue_80);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 100;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_89;
  PyObject *tmp_called_value_70;
  tmp_called_value_70 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_70 == NULL)) {
      tmp_called_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_70 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 101;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 101;
  tmp_assign_source_89 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_70, mod_consts[173]);

  if (tmp_assign_source_89 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 101;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_89);
 }
 {
  PyObject *tmp_ass_subvalue_81;
  PyObject *tmp_expression_value_82;
  PyObject *tmp_subscript_value_82;
  PyObject *tmp_ass_subscribed_81;
  PyObject *tmp_ass_subscript_81;
  tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_82 == NULL)) {
      tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_82 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 101;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_82 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_82 == NULL)) {
      tmp_subscript_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_82 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 101;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_81 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_82);
  if (tmp_ass_subvalue_81 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 101;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_81 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_81 == NULL)) {
      tmp_ass_subscribed_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_81 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_81);

   exception_lineno = 101;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_81 = mod_consts[174];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_81, tmp_ass_subscript_81, tmp_ass_subvalue_81);
  Py_DECREF(tmp_ass_subvalue_81);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 101;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_90;
  PyObject *tmp_called_value_71;
  tmp_called_value_71 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_71 == NULL)) {
      tmp_called_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_71 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 102;
  tmp_assign_source_90 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_71, mod_consts[175]);

  if (tmp_assign_source_90 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_90);
 }
 {
  PyObject *tmp_ass_subvalue_82;
  PyObject *tmp_expression_value_83;
  PyObject *tmp_subscript_value_83;
  PyObject *tmp_ass_subscribed_82;
  PyObject *tmp_ass_subscript_82;
  tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_83 == NULL)) {
      tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_83 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_83 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_83 == NULL)) {
      tmp_subscript_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_83 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_82 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_83);
  if (tmp_ass_subvalue_82 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_82 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_82 == NULL)) {
      tmp_ass_subscribed_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_82 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_82);

   exception_lineno = 102;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_82 = mod_consts[176];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_82, tmp_ass_subscript_82, tmp_ass_subvalue_82);
  Py_DECREF(tmp_ass_subvalue_82);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 102;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_91;
  PyObject *tmp_called_value_72;
  tmp_called_value_72 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_72 == NULL)) {
      tmp_called_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_72 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 103;
  tmp_assign_source_91 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_72, mod_consts[177]);

  if (tmp_assign_source_91 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_91);
 }
 {
  PyObject *tmp_ass_subvalue_83;
  PyObject *tmp_expression_value_84;
  PyObject *tmp_subscript_value_84;
  PyObject *tmp_ass_subscribed_83;
  PyObject *tmp_ass_subscript_83;
  tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_84 == NULL)) {
      tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_84 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_84 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_84 == NULL)) {
      tmp_subscript_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_84 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_83 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_84, tmp_subscript_value_84);
  if (tmp_ass_subvalue_83 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_83 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_83 == NULL)) {
      tmp_ass_subscribed_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_83 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_83);

   exception_lineno = 103;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_83 = mod_consts[178];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_83, tmp_ass_subscript_83, tmp_ass_subvalue_83);
  Py_DECREF(tmp_ass_subvalue_83);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_92;
  PyObject *tmp_called_value_73;
  tmp_called_value_73 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_73 == NULL)) {
      tmp_called_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_73 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 104;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 104;
  tmp_assign_source_92 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_73, mod_consts[179]);

  if (tmp_assign_source_92 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 104;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_92);
 }
 {
  PyObject *tmp_ass_subvalue_84;
  PyObject *tmp_expression_value_85;
  PyObject *tmp_subscript_value_85;
  PyObject *tmp_ass_subscribed_84;
  PyObject *tmp_ass_subscript_84;
  tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_85 == NULL)) {
      tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_85 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 104;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_85 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_85 == NULL)) {
      tmp_subscript_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_85 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 104;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_84 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_85, tmp_subscript_value_85);
  if (tmp_ass_subvalue_84 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 104;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_84 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_84 == NULL)) {
      tmp_ass_subscribed_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_84 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_84);

   exception_lineno = 104;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_84 = mod_consts[180];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_84, tmp_ass_subscript_84, tmp_ass_subvalue_84);
  Py_DECREF(tmp_ass_subvalue_84);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 104;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_93;
  PyObject *tmp_called_value_74;
  tmp_called_value_74 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_74 == NULL)) {
      tmp_called_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_74 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 105;
  tmp_assign_source_93 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_74, mod_consts[181]);

  if (tmp_assign_source_93 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_93);
 }
 {
  PyObject *tmp_ass_subvalue_85;
  PyObject *tmp_expression_value_86;
  PyObject *tmp_subscript_value_86;
  PyObject *tmp_ass_subscribed_85;
  PyObject *tmp_ass_subscript_85;
  tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_86 == NULL)) {
      tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_86 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_86 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_86 == NULL)) {
      tmp_subscript_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_86 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_85 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_86, tmp_subscript_value_86);
  if (tmp_ass_subvalue_85 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_85 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_85 == NULL)) {
      tmp_ass_subscribed_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_85 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_85);

   exception_lineno = 105;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_85 = mod_consts[182];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_85, tmp_ass_subscript_85, tmp_ass_subvalue_85);
  Py_DECREF(tmp_ass_subvalue_85);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_94;
  PyObject *tmp_called_value_75;
  tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_75 == NULL)) {
      tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_75 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 106;
  tmp_assign_source_94 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_75, mod_consts[183]);

  if (tmp_assign_source_94 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_94);
 }
 {
  PyObject *tmp_ass_subvalue_86;
  PyObject *tmp_expression_value_87;
  PyObject *tmp_subscript_value_87;
  PyObject *tmp_ass_subscribed_86;
  PyObject *tmp_ass_subscript_86;
  tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_87 == NULL)) {
      tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_87 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_87 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_87 == NULL)) {
      tmp_subscript_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_87 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_86 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_87, tmp_subscript_value_87);
  if (tmp_ass_subvalue_86 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_86 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_86 == NULL)) {
      tmp_ass_subscribed_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_86 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_86);

   exception_lineno = 106;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_86 = mod_consts[184];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_86, tmp_ass_subscript_86, tmp_ass_subvalue_86);
  Py_DECREF(tmp_ass_subvalue_86);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_95;
  PyObject *tmp_called_value_76;
  tmp_called_value_76 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_76 == NULL)) {
      tmp_called_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_76 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 107;
  tmp_assign_source_95 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_76, mod_consts[185]);

  if (tmp_assign_source_95 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_95);
 }
 {
  PyObject *tmp_ass_subvalue_87;
  PyObject *tmp_expression_value_88;
  PyObject *tmp_subscript_value_88;
  PyObject *tmp_ass_subscribed_87;
  PyObject *tmp_ass_subscript_87;
  tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_88 == NULL)) {
      tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_88 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_88 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_88 == NULL)) {
      tmp_subscript_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_88 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_87 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_88, tmp_subscript_value_88);
  if (tmp_ass_subvalue_87 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_87 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_87 == NULL)) {
      tmp_ass_subscribed_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_87 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_87);

   exception_lineno = 107;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_87 = mod_consts[186];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_87, tmp_ass_subscript_87, tmp_ass_subvalue_87);
  Py_DECREF(tmp_ass_subvalue_87);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_96;
  PyObject *tmp_called_value_77;
  tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_called_value_77 == NULL)) {
      tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_called_value_77 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;

      goto frame_exception_exit_1;
  }
  frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame.f_lineno = 108;
  tmp_assign_source_96 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_77, mod_consts[187]);

  if (tmp_assign_source_96 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_96);
 }
 {
  PyObject *tmp_ass_subvalue_88;
  PyObject *tmp_expression_value_89;
  PyObject *tmp_subscript_value_89;
  PyObject *tmp_ass_subscribed_88;
  PyObject *tmp_ass_subscript_88;
  tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[8]);

  if (unlikely(tmp_expression_value_89 == NULL)) {
      tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
  }

  if (tmp_expression_value_89 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_89 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[13]);

  if (unlikely(tmp_subscript_value_89 == NULL)) {
      tmp_subscript_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
  }

  if (tmp_subscript_value_89 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;

      goto frame_exception_exit_1;
  }
  tmp_ass_subvalue_88 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_89, tmp_subscript_value_89);
  if (tmp_ass_subvalue_88 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_88 = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)mod_consts[7]);

  if (unlikely(tmp_ass_subscribed_88 == NULL)) {
      tmp_ass_subscribed_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
  }

  if (tmp_ass_subscribed_88 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_88);

   exception_lineno = 108;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_88 = mod_consts[188];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_88, tmp_ass_subscript_88, tmp_ass_subvalue_88);
  Py_DECREF(tmp_ass_subvalue_88);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;

      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_61adfc6cddc3fa5cc1518f823d3c4668, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_61adfc6cddc3fa5cc1518f823d3c4668->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_61adfc6cddc3fa5cc1518f823d3c4668, exception_lineno);
 }



 assertFrameObject(frame_61adfc6cddc3fa5cc1518f823d3c4668);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto module_exception_exit;
 frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("aiohttp$hdrs", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.hdrs" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_aiohttp$hdrs);
    return module_aiohttp$hdrs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$hdrs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("aiohttp$hdrs", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
