/* Generated code for Python module 'aiohttp$http'
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

/* The "module_aiohttp$http" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiohttp$http;
PyDictObject *moduledict_aiohttp$http;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[60];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[60];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("aiohttp.http"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 60; i++) {
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
void checkModuleConstants_aiohttp$http(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 60; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_94a00466a3ae944dbfcabc84ae94ac7b;

static void createModuleCodeObjects(void) {
 module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[58]); CHECK_OBJECT(module_filename_obj);
 codeobj_94a00466a3ae944dbfcabc84ae94ac7b = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[59], mod_consts[59], NULL, NULL, 0, 0, 0);
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

static function_impl_code const function_table_aiohttp$http[] = {

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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_aiohttp$http);

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
        module_aiohttp$http,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_aiohttp$http,
        sizeof(function_table_aiohttp$http) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiohttp$http(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiohttp$http");

    // Store the module for future use.
    module_aiohttp$http = module;

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
        PRINT_STRING("aiohttp$http: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("aiohttp$http: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.http" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initaiohttp$http\n");

    moduledict_aiohttp$http = MODULE_DICT(module_aiohttp$http);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiohttp$http,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiohttp$http,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[14]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiohttp$http,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$http,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$http,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiohttp$http);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiohttp$http, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiohttp$http, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiohttp$http, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_aiohttp$http);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
 PyObject *outline_0_var_v = NULL;
 PyObject *tmp_dictcontraction_1__$0 = NULL;
 PyObject *tmp_dictcontraction_1__contraction = NULL;
 PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
 PyObject *tmp_import_from_1__module = NULL;
 PyObject *tmp_import_from_2__module = NULL;
 PyObject *tmp_import_from_3__module = NULL;
 PyObject *tmp_import_from_4__module = NULL;
 struct Nuitka_FrameObject *frame_94a00466a3ae944dbfcabc84ae94ac7b;
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
  UPDATE_STRING_DICT0(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = module_filename_obj;
  UPDATE_STRING_DICT0(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_2);
 }
 frame_94a00466a3ae944dbfcabc84ae94ac7b = MAKE_MODULE_FRAME(codeobj_94a00466a3ae944dbfcabc84ae94ac7b, module_aiohttp$http);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_94a00466a3ae944dbfcabc84ae94ac7b);
 assert(Py_REFCNT(frame_94a00466a3ae944dbfcabc84ae94ac7b) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = module_filename_obj;
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[2]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[3], tmp_assattr_value_1);
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
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[2]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[4], tmp_assattr_value_2);
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
  UPDATE_STRING_DICT0(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assign_source_4;
  tmp_assign_source_4 = MAKE_DICT_EMPTY(tstate);
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  tmp_assign_source_5 = IMPORT_HARD_SYS();
  assert(!(tmp_assign_source_5 == NULL));
  UPDATE_STRING_DICT0(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_5);
 }
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_import_name_from_1;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[8];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp$http;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = mod_consts[9];
  tmp_level_value_1 = mod_consts[10];
  frame_94a00466a3ae944dbfcabc84ae94ac7b->m_frame.f_lineno = 2;
  tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_import_name_from_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 2;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_1)) {
      tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_1,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[11],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[11]);
  }

  Py_DECREF(tmp_import_name_from_1);
  if (tmp_assign_source_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 2;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
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
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[12],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[12]);
  }

  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_8);
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
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[13],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[13]);
  }

  if (tmp_assign_source_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_9);
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
  PyObject *tmp_import_name_from_4;
  PyObject *tmp_name_value_2;
  PyObject *tmp_globals_arg_value_2;
  PyObject *tmp_locals_arg_value_2;
  PyObject *tmp_fromlist_value_2;
  PyObject *tmp_level_value_2;
  tmp_name_value_2 = mod_consts[14];
  tmp_globals_arg_value_2 = (PyObject *)moduledict_aiohttp$http;
  tmp_locals_arg_value_2 = Py_None;
  tmp_fromlist_value_2 = mod_consts[15];
  tmp_level_value_2 = mod_consts[16];
  frame_94a00466a3ae944dbfcabc84ae94ac7b->m_frame.f_lineno = 5;
  tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
  if (tmp_import_name_from_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_4)) {
      tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_4,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[17],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[17]);
  }

  Py_DECREF(tmp_import_name_from_4);
  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_10);
 }
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_import_name_from_5;
  PyObject *tmp_name_value_3;
  PyObject *tmp_globals_arg_value_3;
  PyObject *tmp_locals_arg_value_3;
  PyObject *tmp_fromlist_value_3;
  PyObject *tmp_level_value_3;
  tmp_name_value_3 = mod_consts[18];
  tmp_globals_arg_value_3 = (PyObject *)moduledict_aiohttp$http;
  tmp_locals_arg_value_3 = Py_None;
  tmp_fromlist_value_3 = mod_consts[19];
  tmp_level_value_3 = mod_consts[16];
  frame_94a00466a3ae944dbfcabc84ae94ac7b->m_frame.f_lineno = 6;
  tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
  if (tmp_import_name_from_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_5)) {
      tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_5,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[20],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[20]);
  }

  Py_DECREF(tmp_import_name_from_5);
  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_11);
 }
 {
  PyObject *tmp_assign_source_12;
  PyObject *tmp_name_value_4;
  PyObject *tmp_globals_arg_value_4;
  PyObject *tmp_locals_arg_value_4;
  PyObject *tmp_fromlist_value_4;
  PyObject *tmp_level_value_4;
  tmp_name_value_4 = mod_consts[21];
  tmp_globals_arg_value_4 = (PyObject *)moduledict_aiohttp$http;
  tmp_locals_arg_value_4 = Py_None;
  tmp_fromlist_value_4 = mod_consts[22];
  tmp_level_value_4 = mod_consts[16];
  frame_94a00466a3ae944dbfcabc84ae94ac7b->m_frame.f_lineno = 7;
  tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
  if (tmp_assign_source_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

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
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[23],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[23]);
  }

  if (tmp_assign_source_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
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
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[24],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[24]);
  }

  if (tmp_assign_source_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_14);
 }
 {
  PyObject *tmp_assign_source_15;
  PyObject *tmp_import_name_from_8;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_8 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_8)) {
      tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_8,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[25],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[25]);
  }

  if (tmp_assign_source_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_15);
 }
 {
  PyObject *tmp_assign_source_16;
  PyObject *tmp_import_name_from_9;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_9 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_9)) {
      tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_9,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[26],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[26]);
  }

  if (tmp_assign_source_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_16);
 }
 {
  PyObject *tmp_assign_source_17;
  PyObject *tmp_import_name_from_10;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_10 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_10)) {
      tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_10,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[27],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[27]);
  }

  if (tmp_assign_source_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_17);
 }
 {
  PyObject *tmp_assign_source_18;
  PyObject *tmp_import_name_from_11;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_11 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_11)) {
      tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_11,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[28],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[28]);
  }

  if (tmp_assign_source_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_18);
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
  PyObject *tmp_assign_source_19;
  PyObject *tmp_name_value_5;
  PyObject *tmp_globals_arg_value_5;
  PyObject *tmp_locals_arg_value_5;
  PyObject *tmp_fromlist_value_5;
  PyObject *tmp_level_value_5;
  tmp_name_value_5 = mod_consts[29];
  tmp_globals_arg_value_5 = (PyObject *)moduledict_aiohttp$http;
  tmp_locals_arg_value_5 = Py_None;
  tmp_fromlist_value_5 = mod_consts[30];
  tmp_level_value_5 = mod_consts[16];
  frame_94a00466a3ae944dbfcabc84ae94ac7b->m_frame.f_lineno = 15;
  tmp_assign_source_19 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
  if (tmp_assign_source_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_3__module == NULL);
  tmp_import_from_3__module = tmp_assign_source_19;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_import_name_from_12;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_12 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_12)) {
      tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_12,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[31],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[31]);
  }

  if (tmp_assign_source_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_20);
 }
 {
  PyObject *tmp_assign_source_21;
  PyObject *tmp_import_name_from_13;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_13 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_13)) {
      tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_13,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[32],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[32]);
  }

  if (tmp_assign_source_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_21);
 }
 {
  PyObject *tmp_assign_source_22;
  PyObject *tmp_import_name_from_14;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_14 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_14)) {
      tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_14,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[33],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[33]);
  }

  if (tmp_assign_source_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_22);
 }
 {
  PyObject *tmp_assign_source_23;
  PyObject *tmp_import_name_from_15;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_15 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_15)) {
      tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_15,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[34],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[34]);
  }

  if (tmp_assign_source_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_23);
 }
 {
  PyObject *tmp_assign_source_24;
  PyObject *tmp_import_name_from_16;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_16 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_16)) {
      tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_16,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[35],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[35]);
  }

  if (tmp_assign_source_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_24);
 }
 {
  PyObject *tmp_assign_source_25;
  PyObject *tmp_import_name_from_17;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_17 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_17)) {
      tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_17,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[36],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[36]);
  }

  if (tmp_assign_source_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_25);
 }
 {
  PyObject *tmp_assign_source_26;
  PyObject *tmp_import_name_from_18;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_18 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_18)) {
      tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_18,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[37],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[37]);
  }

  if (tmp_assign_source_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_26);
 }
 {
  PyObject *tmp_assign_source_27;
  PyObject *tmp_import_name_from_19;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_19 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_19)) {
      tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_19,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[38],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[38]);
  }

  if (tmp_assign_source_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_27);
 }
 {
  PyObject *tmp_assign_source_28;
  PyObject *tmp_import_name_from_20;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_20 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_20)) {
      tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_20,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[39],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[39]);
  }

  if (tmp_assign_source_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_28);
 }
 {
  PyObject *tmp_assign_source_29;
  PyObject *tmp_import_name_from_21;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_21 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_21)) {
      tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_21,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[40],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_21, mod_consts[40]);
  }

  if (tmp_assign_source_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_29);
 }
 {
  PyObject *tmp_assign_source_30;
  PyObject *tmp_import_name_from_22;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_22 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_22)) {
      tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_22,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[41],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_22, mod_consts[41]);
  }

  if (tmp_assign_source_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 15;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_30);
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
  PyObject *tmp_assign_source_31;
  PyObject *tmp_name_value_6;
  PyObject *tmp_globals_arg_value_6;
  PyObject *tmp_locals_arg_value_6;
  PyObject *tmp_fromlist_value_6;
  PyObject *tmp_level_value_6;
  tmp_name_value_6 = mod_consts[42];
  tmp_globals_arg_value_6 = (PyObject *)moduledict_aiohttp$http;
  tmp_locals_arg_value_6 = Py_None;
  tmp_fromlist_value_6 = mod_consts[43];
  tmp_level_value_6 = mod_consts[16];
  frame_94a00466a3ae944dbfcabc84ae94ac7b->m_frame.f_lineno = 28;
  tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
  if (tmp_assign_source_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_4__module == NULL);
  tmp_import_from_4__module = tmp_assign_source_31;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_32;
  PyObject *tmp_import_name_from_23;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_23 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_23)) {
      tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_23,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[44],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_32 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_23, mod_consts[44]);
  }

  if (tmp_assign_source_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_32);
 }
 {
  PyObject *tmp_assign_source_33;
  PyObject *tmp_import_name_from_24;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_24 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_24)) {
      tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_24,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[45],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_33 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_24, mod_consts[45]);
  }

  if (tmp_assign_source_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_33);
 }
 {
  PyObject *tmp_assign_source_34;
  PyObject *tmp_import_name_from_25;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_25 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_25)) {
      tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_25,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[46],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_34 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_25, mod_consts[46]);
  }

  if (tmp_assign_source_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_34);
 }
 {
  PyObject *tmp_assign_source_35;
  PyObject *tmp_import_name_from_26;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_26 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_26)) {
      tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_26,
          (PyObject *)moduledict_aiohttp$http,
          mod_consts[47],
          mod_consts[10]
      );
  } else {
      tmp_assign_source_35 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_26, mod_consts[47]);
  }

  if (tmp_assign_source_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_35);
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
  PyObject *tmp_assign_source_36;
  tmp_assign_source_36 = mod_consts[48];
  UPDATE_STRING_DICT0(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_36);
 }
 {
  PyObject *tmp_assign_source_37;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_arg_value_1_1;
  PyObject *tmp_kw_call_arg_value_2_1;
  tmp_kw_call_arg_value_0_1 = mod_consts[50];
  tmp_kw_call_arg_value_1_1 = Nuitka_SysGetObject("version_info");
  assert(!(tmp_kw_call_arg_value_1_1 == NULL));
  tmp_kw_call_arg_value_2_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[17]);

  if (unlikely(tmp_kw_call_arg_value_2_1 == NULL)) {
      tmp_kw_call_arg_value_2_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
  }

  if (tmp_kw_call_arg_value_2_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 67;

      goto frame_exception_exit_1;
  }
  frame_94a00466a3ae944dbfcabc84ae94ac7b->m_frame.f_lineno = 66;
  {
      PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
      tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3(tstate, unicode_builtin_format, call_args);
  }

  if (tmp_assign_source_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_37);
 }
 {
  PyObject *tmp_ass_subvalue_1;
  PyObject *tmp_ass_subscribed_1;
  PyObject *tmp_ass_subscript_1;
  tmp_ass_subvalue_1 = (PyObject *)&PyUnicode_Type;
  tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[6]);

  if (unlikely(tmp_ass_subscribed_1 == NULL)) {
      tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
  }

  if (tmp_ass_subscribed_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_1 = mod_consts[51];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;

      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assign_source_38;
  // Tried code:
  {
   PyObject *tmp_assign_source_39;
   PyObject *tmp_iter_arg_1;
   PyObject *tmp_called_value_1;
   PyObject *tmp_expression_value_1;
   PyObject *tmp_expression_value_2;
   tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[11]);

   if (unlikely(tmp_expression_value_2 == NULL)) {
       tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
   }

   if (tmp_expression_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 71;

       goto try_except_handler_5;
   }
   tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[52]);
   if (tmp_expression_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 71;

       goto try_except_handler_5;
   }
   tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[53]);
   Py_DECREF(tmp_expression_value_1);
   if (tmp_called_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 71;

       goto try_except_handler_5;
   }
   frame_94a00466a3ae944dbfcabc84ae94ac7b->m_frame.f_lineno = 71;
   tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
   Py_DECREF(tmp_called_value_1);
   if (tmp_iter_arg_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 71;

       goto try_except_handler_5;
   }
   tmp_assign_source_39 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
   Py_DECREF(tmp_iter_arg_1);
   if (tmp_assign_source_39 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 70;

       goto try_except_handler_5;
   }
   assert(tmp_dictcontraction_1__$0 == NULL);
   tmp_dictcontraction_1__$0 = tmp_assign_source_39;
  }
  {
   PyObject *tmp_assign_source_40;
   tmp_assign_source_40 = MAKE_DICT_EMPTY(tstate);
   assert(tmp_dictcontraction_1__contraction == NULL);
   tmp_dictcontraction_1__contraction = tmp_assign_source_40;
  }
  // Tried code:
  loop_start_1:;
  {
   PyObject *tmp_next_source_1;
   PyObject *tmp_assign_source_41;
   CHECK_OBJECT(tmp_dictcontraction_1__$0);
   tmp_next_source_1 = tmp_dictcontraction_1__$0;
   tmp_assign_source_41 = ITERATOR_NEXT(tmp_next_source_1);
   if (tmp_assign_source_41 == NULL) {
       if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

           goto loop_end_1;
       } else {

           FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

     exception_lineno = 70;
           goto try_except_handler_6;
       }
   }

   {
       PyObject *old = tmp_dictcontraction_1__iter_value_0;
       tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_41;
       Py_XDECREF(old);
   }

  }
  {
   PyObject *tmp_assign_source_42;
   CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
   tmp_assign_source_42 = tmp_dictcontraction_1__iter_value_0;
   {
       PyObject *old = outline_0_var_v;
       outline_0_var_v = tmp_assign_source_42;
       Py_INCREF(outline_0_var_v);
       Py_XDECREF(old);
   }

  }
  {
   PyObject *tmp_dictset38_key_1;
   PyObject *tmp_dictset38_value_1;
   PyObject *tmp_tuple_element_1;
   PyObject *tmp_expression_value_3;
   PyObject *tmp_dictset38_dict_1;
   CHECK_OBJECT(outline_0_var_v);
   tmp_dictset38_key_1 = outline_0_var_v;
   CHECK_OBJECT(outline_0_var_v);
   tmp_expression_value_3 = outline_0_var_v;
   tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[54]);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 71;

       goto try_except_handler_6;
   }
   tmp_dictset38_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
   {
    PyObject *tmp_expression_value_4;
    PyTuple_SET_ITEM(tmp_dictset38_value_1, 0, tmp_tuple_element_1);
    CHECK_OBJECT(outline_0_var_v);
    tmp_expression_value_4 = outline_0_var_v;
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[55]);
    if (tmp_tuple_element_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 71;

        goto tuple_build_exception_1;
    }
    PyTuple_SET_ITEM(tmp_dictset38_value_1, 1, tmp_tuple_element_1);
   }
   goto tuple_build_noexception_1;
   // Exception handling pass through code for tuple_build:
   tuple_build_exception_1:;
   Py_DECREF(tmp_dictset38_value_1);
   goto try_except_handler_6;
   // Finished with no exception for tuple_build:
   tuple_build_noexception_1:;
   CHECK_OBJECT(tmp_dictcontraction_1__contraction);
   tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
   assert(PyDict_CheckExact(tmp_dictset38_dict_1));
   tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

   Py_DECREF(tmp_dictset38_value_1);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 70;

       goto try_except_handler_6;
   }
  }
  if (CONSIDER_THREADING(tstate) == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;

      goto try_except_handler_6;
  }
  goto loop_start_1;
  loop_end_1:;
  CHECK_OBJECT(tmp_dictcontraction_1__contraction);
  tmp_assign_source_38 = tmp_dictcontraction_1__contraction;
  Py_INCREF(tmp_assign_source_38);
  goto try_return_handler_6;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_6:;
  CHECK_OBJECT(tmp_dictcontraction_1__$0);
  Py_DECREF(tmp_dictcontraction_1__$0);
  tmp_dictcontraction_1__$0 = NULL;
  CHECK_OBJECT(tmp_dictcontraction_1__contraction);
  Py_DECREF(tmp_dictcontraction_1__contraction);
  tmp_dictcontraction_1__contraction = NULL;
  Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
  tmp_dictcontraction_1__iter_value_0 = NULL;
  goto try_return_handler_5;
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

  CHECK_OBJECT(tmp_dictcontraction_1__$0);
  Py_DECREF(tmp_dictcontraction_1__$0);
  tmp_dictcontraction_1__$0 = NULL;
  CHECK_OBJECT(tmp_dictcontraction_1__contraction);
  Py_DECREF(tmp_dictcontraction_1__contraction);
  tmp_dictcontraction_1__contraction = NULL;
  Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
  tmp_dictcontraction_1__iter_value_0 = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_5;
  exception_value = exception_keeper_value_5;
  exception_tb = exception_keeper_tb_5;
  exception_lineno = exception_keeper_lineno_5;

  goto try_except_handler_5;
  // End of try:
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_5:;
  Py_XDECREF(outline_0_var_v);
  outline_0_var_v = NULL;
  goto outline_result_1;
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

  Py_XDECREF(outline_0_var_v);
  outline_0_var_v = NULL;
  // Re-raise.
  exception_type = exception_keeper_type_6;
  exception_value = exception_keeper_value_6;
  exception_tb = exception_keeper_tb_6;
  exception_lineno = exception_keeper_lineno_6;

  goto outline_exception_1;
  // End of try:
  NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
  return NULL;
  outline_exception_1:;
  exception_lineno = 70;
  goto frame_exception_exit_1;
  outline_result_1:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_38);
 }
 {
  PyObject *tmp_ass_subvalue_2;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_subscript_value_1;
  PyObject *tmp_tuple_element_2;
  PyObject *tmp_ass_subscribed_2;
  PyObject *tmp_ass_subscript_2;
  tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[12]);

  if (unlikely(tmp_expression_value_5 == NULL)) {
      tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
  }

  if (tmp_expression_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;

      goto frame_exception_exit_1;
  }
  tmp_tuple_element_2 = (PyObject *)&PyLong_Type;
  tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_6;
   PyObject *tmp_subscript_value_2;
   PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_2);
   tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[13]);

   if (unlikely(tmp_expression_value_6 == NULL)) {
       tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
   }

   if (tmp_expression_value_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 70;

       goto tuple_build_exception_2;
   }
   tmp_subscript_value_2 = mod_consts[57];
   tmp_tuple_element_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
   if (tmp_tuple_element_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 70;

       goto tuple_build_exception_2;
   }
   PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_2);
  }
  goto tuple_build_noexception_2;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_2:;
  Py_DECREF(tmp_subscript_value_1);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_2:;
  tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
  Py_DECREF(tmp_subscript_value_1);
  if (tmp_ass_subvalue_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)mod_consts[6]);

  if (unlikely(tmp_ass_subscribed_2 == NULL)) {
      tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
  }

  if (tmp_ass_subscribed_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_ass_subvalue_2);

   exception_lineno = 70;

      goto frame_exception_exit_1;
  }
  tmp_ass_subscript_2 = mod_consts[56];
  tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
  Py_DECREF(tmp_ass_subvalue_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;

      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_94a00466a3ae944dbfcabc84ae94ac7b, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_94a00466a3ae944dbfcabc84ae94ac7b->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_94a00466a3ae944dbfcabc84ae94ac7b, exception_lineno);
 }



 assertFrameObject(frame_94a00466a3ae944dbfcabc84ae94ac7b);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto module_exception_exit;
 frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("aiohttp$http", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.http" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_aiohttp$http);
    return module_aiohttp$http;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$http, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("aiohttp$http", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
