/* Generated code for Python module 'aiohttp$client_ws'
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

/* The "module_aiohttp$client_ws" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiohttp$client_ws;
PyDictObject *moduledict_aiohttp$client_ws;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[208];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[208];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("aiohttp.client_ws"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 208; i++) {
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
void checkModuleConstants_aiohttp$client_ws(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 208; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_46f947833674cfb4be795fc22f987f03;
static PyCodeObject *codeobj_59fcf74ea325bd532fe3190ff0f20ba1;
static PyCodeObject *codeobj_2cb9f6540a48db8a61729a38d2377f6f;
static PyCodeObject *codeobj_d63d6fd2e2b2e2852ba3a8630b7d5a48;
static PyCodeObject *codeobj_c74c933524b9607d587ba846ec0f51c2;
static PyCodeObject *codeobj_285c192a11db2cdf86c0e74bb6c054e4;
static PyCodeObject *codeobj_b4db00200dfdf867f7115d8559575165;
static PyCodeObject *codeobj_587ec8bf350ca58227e762c26dc63056;
static PyCodeObject *codeobj_d1f55eeda1fa9e3721e9d10289cbdb7e;
static PyCodeObject *codeobj_316059c2ee2a68ae3c2d303cd0688269;
static PyCodeObject *codeobj_cde7d06babcc68aa1229a41014a785d1;
static PyCodeObject *codeobj_53a63ce382413c33a26035c04b2e95b1;
static PyCodeObject *codeobj_9a50ce01b0c879a90fee26e42f80734b;
static PyCodeObject *codeobj_6e694254516375b8f0d08a42c0749207;
static PyCodeObject *codeobj_adb505d2da6fa5a00c07cd9be6561b49;
static PyCodeObject *codeobj_b104518cfb0fac5c96e5b3495ffde9d8;
static PyCodeObject *codeobj_106bfef1e0d82b56867471d8947924ac;
static PyCodeObject *codeobj_724f0768c36cd89922fe10e7c8033dc8;
static PyCodeObject *codeobj_9246ab0ba9bc855c66074ca21d4f5336;
static PyCodeObject *codeobj_3ef9e2d2e0f6b9f1f48fe3ce5b9e1451;
static PyCodeObject *codeobj_0e7bd60064fbcc1e217a805404eac5e5;
static PyCodeObject *codeobj_a36569d95727bd1dd71facd25476600a;
static PyCodeObject *codeobj_074812b66a1af475f9455dc2d721d173;
static PyCodeObject *codeobj_3e5804e4842183cbc88acd943c353785;
static PyCodeObject *codeobj_015cf1d1c464c5ece04592549cedf14c;
static PyCodeObject *codeobj_3b6e3568b61e34d91e6f43a24c346338;

static void createModuleCodeObjects(void) {
 module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[194]); CHECK_OBJECT(module_filename_obj);
 codeobj_46f947833674cfb4be795fc22f987f03 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[195], mod_consts[195], NULL, NULL, 0, 0, 0);
 codeobj_59fcf74ea325bd532fe3190ff0f20ba1 = MAKE_CODE_OBJECT(module_filename_obj, 33, 0, mod_consts[148], mod_consts[148], mod_consts[196], NULL, 0, 0, 0);
 codeobj_2cb9f6540a48db8a61729a38d2377f6f = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[192], mod_consts[193], mod_consts[197], NULL, 1, 0, 0);
 codeobj_d63d6fd2e2b2e2852ba3a8630b7d5a48 = MAKE_CODE_OBJECT(module_filename_obj, 311, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[112], mod_consts[113], mod_consts[198], NULL, 1, 0, 0);
 codeobj_c74c933524b9607d587ba846ec0f51c2 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[164], mod_consts[165], mod_consts[199], NULL, 9, 4, 0);
 codeobj_285c192a11db2cdf86c0e74bb6c054e4 = MAKE_CODE_OBJECT(module_filename_obj, 76, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[25], mod_consts[167], mod_consts[197], NULL, 1, 0, 0);
 codeobj_b4db00200dfdf867f7115d8559575165 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[34], mod_consts[170], mod_consts[197], NULL, 1, 0, 0);
 codeobj_587ec8bf350ca58227e762c26dc63056 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[23], mod_consts[168], mod_consts[197], NULL, 1, 0, 0);
 codeobj_d1f55eeda1fa9e3721e9d10289cbdb7e = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[27], mod_consts[169], mod_consts[197], NULL, 1, 0, 0);
 codeobj_316059c2ee2a68ae3c2d303cd0688269 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[162], mod_consts[179], mod_consts[197], NULL, 1, 0, 0);
 codeobj_cde7d06babcc68aa1229a41014a785d1 = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[39], mod_consts[78], mod_consts[200], NULL, 1, 2, 0);
 codeobj_53a63ce382413c33a26035c04b2e95b1 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[174], mod_consts[175], mod_consts[197], NULL, 1, 0, 0);
 codeobj_9a50ce01b0c879a90fee26e42f80734b = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[172], mod_consts[173], mod_consts[197], NULL, 1, 0, 0);
 codeobj_6e694254516375b8f0d08a42c0749207 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[51], mod_consts[178], mod_consts[197], NULL, 1, 0, 0);
 codeobj_adb505d2da6fa5a00c07cd9be6561b49 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[184], mod_consts[185], mod_consts[197], NULL, 1, 0, 0);
 codeobj_b104518cfb0fac5c96e5b3495ffde9d8 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[41], mod_consts[183], mod_consts[201], NULL, 3, 0, 0);
 codeobj_106bfef1e0d82b56867471d8947924ac = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[33], mod_consts[45], mod_consts[202], NULL, 2, 0, 0);
 codeobj_724f0768c36cd89922fe10e7c8033dc8 = MAKE_CODE_OBJECT(module_filename_obj, 159, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[46], mod_consts[47], mod_consts[202], NULL, 2, 0, 0);
 codeobj_9246ab0ba9bc855c66074ca21d4f5336 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[154], mod_consts[176], mod_consts[197], NULL, 1, 0, 0);
 codeobj_3ef9e2d2e0f6b9f1f48fe3ce5b9e1451 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[94], mod_consts[95], mod_consts[203], NULL, 2, 0, 0);
 codeobj_0e7bd60064fbcc1e217a805404eac5e5 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[106], mod_consts[107], mod_consts[204], NULL, 1, 1, 0);
 codeobj_a36569d95727bd1dd71facd25476600a = MAKE_CODE_OBJECT(module_filename_obj, 299, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[110], mod_consts[111], mod_consts[205], NULL, 1, 2, 0);
 codeobj_074812b66a1af475f9455dc2d721d173 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[102], mod_consts[103], mod_consts[204], NULL, 1, 1, 0);
 codeobj_3e5804e4842183cbc88acd943c353785 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[57], mod_consts[58], mod_consts[206], NULL, 3, 0, 0);
 codeobj_015cf1d1c464c5ece04592549cedf14c = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[61], mod_consts[62], mod_consts[207], NULL, 3, 1, 0);
 codeobj_3b6e3568b61e34d91e6f43a24c346338 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_COROUTINE | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[53], mod_consts[54], mod_consts[206], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__13_ping$$$coroutine__1_ping(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__14_pong$$$coroutine__1_pong(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__15_send_str$$$coroutine__1_send_str(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__16_send_bytes$$$coroutine__1_send_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__17_send_json$$$coroutine__1_send_json(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__18_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__19_receive$$$coroutine__1_receive(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__20_receive_str$$$coroutine__1_receive_str(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__21_receive_bytes$$$coroutine__1_receive_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__22_receive_json$$$coroutine__1_receive_json(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__24___anext__$$$coroutine__1___anext__(PyThreadState *tstate, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__10_client_notakeover(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__11_get_extra_info(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__12_exception(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__13_ping(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__14_pong(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__15_send_str(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__16_send_bytes(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__17_send_json(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__18_close(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__19_receive(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__1___init__(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__20_receive_str(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__21_receive_bytes(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__22_receive_json(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__23___aiter__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__24___anext__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__2__cancel_heartbeat(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__3__reset_heartbeat(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__4__send_heartbeat(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__5__pong_not_received(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__6_closed(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__7_close_code(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__8_protocol(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__9_compress(PyObject *annotations);


// The module function definitions.
static PyObject *impl_aiohttp$client_ws$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_reader = python_pars[1];
 PyObject *par_writer = python_pars[2];
 PyObject *par_protocol = python_pars[3];
 PyObject *par_response = python_pars[4];
 PyObject *par_timeout = python_pars[5];
 PyObject *par_autoclose = python_pars[6];
 PyObject *par_autoping = python_pars[7];
 PyObject *par_loop = python_pars[8];
 PyObject *par_receive_timeout = python_pars[9];
 PyObject *par_heartbeat = python_pars[10];
 PyObject *par_compress = python_pars[11];
 PyObject *par_client_notakeover = python_pars[12];
 struct Nuitka_FrameObject *frame_c74c933524b9607d587ba846ec0f51c2;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_frame_c74c933524b9607d587ba846ec0f51c2 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_c74c933524b9607d587ba846ec0f51c2)) {
     Py_XDECREF(cache_frame_c74c933524b9607d587ba846ec0f51c2);

#if _DEBUG_REFCOUNTS
     if (cache_frame_c74c933524b9607d587ba846ec0f51c2 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_c74c933524b9607d587ba846ec0f51c2 = MAKE_FUNCTION_FRAME(tstate, codeobj_c74c933524b9607d587ba846ec0f51c2, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_c74c933524b9607d587ba846ec0f51c2->m_type_description == NULL);
 frame_c74c933524b9607d587ba846ec0f51c2 = cache_frame_c74c933524b9607d587ba846ec0f51c2;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_c74c933524b9607d587ba846ec0f51c2);
 assert(Py_REFCNT(frame_c74c933524b9607d587ba846ec0f51c2) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_response);
  tmp_assattr_value_1 = par_response;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 50;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_assattr_target_2;
  CHECK_OBJECT(par_response);
  tmp_expression_value_1 = par_response;
  tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
  if (tmp_assattr_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[2], tmp_assattr_value_2);
  Py_DECREF(tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 51;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  CHECK_OBJECT(par_writer);
  tmp_assattr_value_3 = par_writer;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[3], tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_assattr_target_4;
  CHECK_OBJECT(par_reader);
  tmp_assattr_value_4 = par_reader;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_4 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[4], tmp_assattr_value_4);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 54;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_5;
  PyObject *tmp_assattr_target_5;
  CHECK_OBJECT(par_protocol);
  tmp_assattr_value_5 = par_protocol;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_5 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[5], tmp_assattr_value_5);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 55;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_6;
  PyObject *tmp_assattr_target_6;
  tmp_assattr_value_6 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_6 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[6], tmp_assattr_value_6);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 56;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_7;
  PyObject *tmp_assattr_target_7;
  tmp_assattr_value_7 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_7 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[7], tmp_assattr_value_7);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 57;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_8;
  PyObject *tmp_assattr_target_8;
  tmp_assattr_value_8 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_8 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[8], tmp_assattr_value_8);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 58;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_9;
  PyObject *tmp_assattr_target_9;
  CHECK_OBJECT(par_timeout);
  tmp_assattr_value_9 = par_timeout;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_9 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[9], tmp_assattr_value_9);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 59;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_10;
  PyObject *tmp_assattr_target_10;
  CHECK_OBJECT(par_receive_timeout);
  tmp_assattr_value_10 = par_receive_timeout;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_10 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[10], tmp_assattr_value_10);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_11;
  PyObject *tmp_assattr_target_11;
  CHECK_OBJECT(par_autoclose);
  tmp_assattr_value_11 = par_autoclose;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_11 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[11], tmp_assattr_value_11);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 61;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_12;
  PyObject *tmp_assattr_target_12;
  CHECK_OBJECT(par_autoping);
  tmp_assattr_value_12 = par_autoping;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_12 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[12], tmp_assattr_value_12);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 62;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_13;
  PyObject *tmp_assattr_target_13;
  CHECK_OBJECT(par_heartbeat);
  tmp_assattr_value_13 = par_heartbeat;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_13 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[13], tmp_assattr_value_13);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 63;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_14;
  PyObject *tmp_assattr_target_14;
  tmp_assattr_value_14 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_14 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[14], tmp_assattr_value_14);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 64;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(par_heartbeat);
  tmp_cmp_expr_left_1 = par_heartbeat;
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
  PyObject *tmp_assattr_value_15;
  PyObject *tmp_truediv_expr_left_1;
  PyObject *tmp_truediv_expr_right_1;
  PyObject *tmp_assattr_target_15;
  CHECK_OBJECT(par_heartbeat);
  tmp_truediv_expr_left_1 = par_heartbeat;
  tmp_truediv_expr_right_1 = mod_consts[15];
  tmp_assattr_value_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
  if (tmp_assattr_value_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_15 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_15, mod_consts[16], tmp_assattr_value_15);
  Py_DECREF(tmp_assattr_value_15);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 66;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 branch_no_1:;
 {
  PyObject *tmp_assattr_value_16;
  PyObject *tmp_assattr_target_16;
  tmp_assattr_value_16 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_16 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_16, mod_consts[17], tmp_assattr_value_16);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 67;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_17;
  PyObject *tmp_assattr_target_17;
  CHECK_OBJECT(par_loop);
  tmp_assattr_value_17 = par_loop;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_17 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_17, mod_consts[18], tmp_assattr_value_17);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 68;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_18;
  PyObject *tmp_assattr_target_18;
  tmp_assattr_value_18 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_18 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_18, mod_consts[19], tmp_assattr_value_18);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 69;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_19;
  PyObject *tmp_assattr_target_19;
  tmp_assattr_value_19 = Py_None;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_19 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_19, mod_consts[20], tmp_assattr_value_19);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 70;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_20;
  PyObject *tmp_assattr_target_20;
  CHECK_OBJECT(par_compress);
  tmp_assattr_value_20 = par_compress;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_20 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_20, mod_consts[21], tmp_assattr_value_20);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 71;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_21;
  PyObject *tmp_assattr_target_21;
  CHECK_OBJECT(par_client_notakeover);
  tmp_assattr_value_21 = par_client_notakeover;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_21 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_21, mod_consts[22], tmp_assattr_value_21);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 72;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  frame_c74c933524b9607d587ba846ec0f51c2->m_frame.f_lineno = 74;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[23]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 74;
   type_description_1 = "ooooooooooooo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_c74c933524b9607d587ba846ec0f51c2, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_c74c933524b9607d587ba846ec0f51c2->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_c74c933524b9607d587ba846ec0f51c2, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_c74c933524b9607d587ba846ec0f51c2,
     type_description_1,
     par_self,
     par_reader,
     par_writer,
     par_protocol,
     par_response,
     par_timeout,
     par_autoclose,
     par_autoping,
     par_loop,
     par_receive_timeout,
     par_heartbeat,
     par_compress,
     par_client_notakeover
 );


 // Release cached frame if used for exception.
 if (frame_c74c933524b9607d587ba846ec0f51c2 == cache_frame_c74c933524b9607d587ba846ec0f51c2) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_c74c933524b9607d587ba846ec0f51c2);
     cache_frame_c74c933524b9607d587ba846ec0f51c2 = NULL;
 }

 assertFrameObject(frame_c74c933524b9607d587ba846ec0f51c2);

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
 CHECK_OBJECT(par_reader);
 Py_DECREF(par_reader);
 CHECK_OBJECT(par_writer);
 Py_DECREF(par_writer);
 CHECK_OBJECT(par_protocol);
 Py_DECREF(par_protocol);
 CHECK_OBJECT(par_response);
 Py_DECREF(par_response);
 CHECK_OBJECT(par_timeout);
 Py_DECREF(par_timeout);
 CHECK_OBJECT(par_autoclose);
 Py_DECREF(par_autoclose);
 CHECK_OBJECT(par_autoping);
 Py_DECREF(par_autoping);
 CHECK_OBJECT(par_loop);
 Py_DECREF(par_loop);
 CHECK_OBJECT(par_receive_timeout);
 Py_DECREF(par_receive_timeout);
 CHECK_OBJECT(par_heartbeat);
 Py_DECREF(par_heartbeat);
 CHECK_OBJECT(par_compress);
 Py_DECREF(par_compress);
 CHECK_OBJECT(par_client_notakeover);
 Py_DECREF(par_client_notakeover);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_reader);
 Py_DECREF(par_reader);
 CHECK_OBJECT(par_writer);
 Py_DECREF(par_writer);
 CHECK_OBJECT(par_protocol);
 Py_DECREF(par_protocol);
 CHECK_OBJECT(par_response);
 Py_DECREF(par_response);
 CHECK_OBJECT(par_timeout);
 Py_DECREF(par_timeout);
 CHECK_OBJECT(par_autoclose);
 Py_DECREF(par_autoclose);
 CHECK_OBJECT(par_autoping);
 Py_DECREF(par_autoping);
 CHECK_OBJECT(par_loop);
 Py_DECREF(par_loop);
 CHECK_OBJECT(par_receive_timeout);
 Py_DECREF(par_receive_timeout);
 CHECK_OBJECT(par_heartbeat);
 Py_DECREF(par_heartbeat);
 CHECK_OBJECT(par_compress);
 Py_DECREF(par_compress);
 CHECK_OBJECT(par_client_notakeover);
 Py_DECREF(par_client_notakeover);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_ws$$$function__2__cancel_heartbeat(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_285c192a11db2cdf86c0e74bb6c054e4;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_285c192a11db2cdf86c0e74bb6c054e4 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_285c192a11db2cdf86c0e74bb6c054e4)) {
     Py_XDECREF(cache_frame_285c192a11db2cdf86c0e74bb6c054e4);

#if _DEBUG_REFCOUNTS
     if (cache_frame_285c192a11db2cdf86c0e74bb6c054e4 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_285c192a11db2cdf86c0e74bb6c054e4 = MAKE_FUNCTION_FRAME(tstate, codeobj_285c192a11db2cdf86c0e74bb6c054e4, module_aiohttp$client_ws, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_285c192a11db2cdf86c0e74bb6c054e4->m_type_description == NULL);
 frame_285c192a11db2cdf86c0e74bb6c054e4 = cache_frame_285c192a11db2cdf86c0e74bb6c054e4;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_285c192a11db2cdf86c0e74bb6c054e4);
 assert(Py_REFCNT(frame_285c192a11db2cdf86c0e74bb6c054e4) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[17]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 77;
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
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[17]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_285c192a11db2cdf86c0e74bb6c054e4->m_frame.f_lineno = 78;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[24]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 78;
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
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 79;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }
 branch_no_1:;
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[14]);
  if (tmp_cmp_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 81;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_2 = Py_None;
  tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_2);
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_call_result_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_4 = par_self;
  tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[14]);
  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_285c192a11db2cdf86c0e74bb6c054e4->m_frame.f_lineno = 82;
  tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[24]);
  Py_DECREF(tmp_called_instance_2);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 82;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
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


   exception_lineno = 83;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }
 branch_no_2:;


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_285c192a11db2cdf86c0e74bb6c054e4, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_285c192a11db2cdf86c0e74bb6c054e4->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_285c192a11db2cdf86c0e74bb6c054e4, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_285c192a11db2cdf86c0e74bb6c054e4,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_285c192a11db2cdf86c0e74bb6c054e4 == cache_frame_285c192a11db2cdf86c0e74bb6c054e4) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_285c192a11db2cdf86c0e74bb6c054e4);
     cache_frame_285c192a11db2cdf86c0e74bb6c054e4 = NULL;
 }

 assertFrameObject(frame_285c192a11db2cdf86c0e74bb6c054e4);

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


static PyObject *impl_aiohttp$client_ws$$$function__3__reset_heartbeat(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_587ec8bf350ca58227e762c26dc63056;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_587ec8bf350ca58227e762c26dc63056 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_587ec8bf350ca58227e762c26dc63056)) {
     Py_XDECREF(cache_frame_587ec8bf350ca58227e762c26dc63056);

#if _DEBUG_REFCOUNTS
     if (cache_frame_587ec8bf350ca58227e762c26dc63056 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_587ec8bf350ca58227e762c26dc63056 = MAKE_FUNCTION_FRAME(tstate, codeobj_587ec8bf350ca58227e762c26dc63056, module_aiohttp$client_ws, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_587ec8bf350ca58227e762c26dc63056->m_type_description == NULL);
 frame_587ec8bf350ca58227e762c26dc63056 = cache_frame_587ec8bf350ca58227e762c26dc63056;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_587ec8bf350ca58227e762c26dc63056);
 assert(Py_REFCNT(frame_587ec8bf350ca58227e762c26dc63056) == 2);

 // Framed code:
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_called_instance_1 = par_self;
  frame_587ec8bf350ca58227e762c26dc63056->m_frame.f_lineno = 86;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[25]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 86;
   type_description_1 = "o";
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
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 88;
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
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_kw_call_arg_value_1_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_kw_call_arg_value_2_1;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_kw_call_dict_value_0_1;
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_assattr_target_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[26]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[27]);
  if (tmp_kw_call_arg_value_0_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 90;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[13]);
  if (tmp_kw_call_arg_value_1_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);

   exception_lineno = 91;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_4 = par_self;
  tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[18]);
  if (tmp_kw_call_arg_value_2_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);
   Py_DECREF(tmp_kw_call_arg_value_1_1);

   exception_lineno = 92;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_5 = par_self;
  tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[2]);
  if (tmp_cmp_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 94;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_2 = Py_None;
  tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_2);
  if (tmp_condition_result_2 != false) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_8 = par_self;
  tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[2]);
  if (tmp_expression_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 93;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[28]);
  Py_DECREF(tmp_expression_value_7);
  if (tmp_expression_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 93;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[29]);
  Py_DECREF(tmp_expression_value_6);
  if (tmp_kw_call_dict_value_0_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 93;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  tmp_kw_call_dict_value_0_1 = mod_consts[30];
  Py_INCREF(tmp_kw_call_dict_value_0_1);
  condexpr_end_1:;
  frame_587ec8bf350ca58227e762c26dc63056->m_frame.f_lineno = 89;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
      PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
      tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[31]);
  }

  Py_DECREF(tmp_kw_call_arg_value_0_1);
  Py_DECREF(tmp_kw_call_arg_value_1_1);
  Py_DECREF(tmp_kw_call_arg_value_2_1);
  Py_DECREF(tmp_kw_call_dict_value_0_1);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 89;
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
     exception_tb = MAKE_TRACEBACK(frame_587ec8bf350ca58227e762c26dc63056, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_587ec8bf350ca58227e762c26dc63056->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_587ec8bf350ca58227e762c26dc63056, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_587ec8bf350ca58227e762c26dc63056,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_587ec8bf350ca58227e762c26dc63056 == cache_frame_587ec8bf350ca58227e762c26dc63056) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_587ec8bf350ca58227e762c26dc63056);
     cache_frame_587ec8bf350ca58227e762c26dc63056 = NULL;
 }

 assertFrameObject(frame_587ec8bf350ca58227e762c26dc63056);

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


static PyObject *impl_aiohttp$client_ws$$$function__4__send_heartbeat(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_d1f55eeda1fa9e3721e9d10289cbdb7e;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_d1f55eeda1fa9e3721e9d10289cbdb7e = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_d1f55eeda1fa9e3721e9d10289cbdb7e)) {
     Py_XDECREF(cache_frame_d1f55eeda1fa9e3721e9d10289cbdb7e);

#if _DEBUG_REFCOUNTS
     if (cache_frame_d1f55eeda1fa9e3721e9d10289cbdb7e == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_d1f55eeda1fa9e3721e9d10289cbdb7e = MAKE_FUNCTION_FRAME(tstate, codeobj_d1f55eeda1fa9e3721e9d10289cbdb7e, module_aiohttp$client_ws, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_d1f55eeda1fa9e3721e9d10289cbdb7e->m_type_description == NULL);
 frame_d1f55eeda1fa9e3721e9d10289cbdb7e = cache_frame_d1f55eeda1fa9e3721e9d10289cbdb7e;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_d1f55eeda1fa9e3721e9d10289cbdb7e);
 assert(Py_REFCNT(frame_d1f55eeda1fa9e3721e9d10289cbdb7e) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  int tmp_and_left_truth_1;
  bool tmp_and_left_value_1;
  bool tmp_and_right_value_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[13]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 99;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_1);
  tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 99;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 99;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
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
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(par_self);
  tmp_expression_value_4 = par_self;
  tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[18]);
  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[32]);
  Py_DECREF(tmp_expression_value_3);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_5 = par_self;
  tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[3]);
  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 103;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_d1f55eeda1fa9e3721e9d10289cbdb7e->m_frame.f_lineno = 103;
  tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[33]);
  Py_DECREF(tmp_called_instance_1);
  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_called_value_1);

   exception_lineno = 103;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_d1f55eeda1fa9e3721e9d10289cbdb7e->m_frame.f_lineno = 103;
  tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_element_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 103;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  PyObject *tmp_expression_value_6;
  CHECK_OBJECT(par_self);
  tmp_expression_value_6 = par_self;
  tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[17]);
  if (tmp_cmp_expr_left_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 105;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_2 = Py_None;
  tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_2);
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_call_result_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_7 = par_self;
  tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[17]);
  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_d1f55eeda1fa9e3721e9d10289cbdb7e->m_frame.f_lineno = 106;
  tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[24]);
  Py_DECREF(tmp_called_instance_2);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 branch_no_2:;
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_value_2;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_expression_value_8;
  PyObject *tmp_kw_call_arg_value_1_1;
  PyObject *tmp_expression_value_9;
  PyObject *tmp_kw_call_arg_value_2_1;
  PyObject *tmp_expression_value_10;
  PyObject *tmp_kw_call_dict_value_0_1;
  bool tmp_condition_result_3;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_expression_value_12;
  PyObject *tmp_expression_value_13;
  PyObject *tmp_expression_value_14;
  PyObject *tmp_assattr_target_1;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[26]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[26]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_8 = par_self;
  tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[34]);
  if (tmp_kw_call_arg_value_0_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 108;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_9 = par_self;
  tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[16]);
  if (tmp_kw_call_arg_value_1_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);

   exception_lineno = 109;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_10 = par_self;
  tmp_kw_call_arg_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[18]);
  if (tmp_kw_call_arg_value_2_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);
   Py_DECREF(tmp_kw_call_arg_value_1_1);

   exception_lineno = 110;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_expression_value_11 = par_self;
  tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[2]);
  if (tmp_cmp_expr_left_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 112;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_3 = Py_None;
  tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_3);
  if (tmp_condition_result_3 != false) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  CHECK_OBJECT(par_self);
  tmp_expression_value_14 = par_self;
  tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[2]);
  if (tmp_expression_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 111;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[28]);
  Py_DECREF(tmp_expression_value_13);
  if (tmp_expression_value_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 111;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[29]);
  Py_DECREF(tmp_expression_value_12);
  if (tmp_kw_call_dict_value_0_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
   Py_DECREF(tmp_kw_call_arg_value_0_1);
   Py_DECREF(tmp_kw_call_arg_value_1_1);
   Py_DECREF(tmp_kw_call_arg_value_2_1);

   exception_lineno = 111;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  tmp_kw_call_dict_value_0_1 = mod_consts[30];
  Py_INCREF(tmp_kw_call_dict_value_0_1);
  condexpr_end_1:;
  frame_d1f55eeda1fa9e3721e9d10289cbdb7e->m_frame.f_lineno = 107;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
      PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
      tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_2, args, kw_values, mod_consts[31]);
  }

  Py_DECREF(tmp_kw_call_arg_value_0_1);
  Py_DECREF(tmp_kw_call_arg_value_1_1);
  Py_DECREF(tmp_kw_call_arg_value_2_1);
  Py_DECREF(tmp_kw_call_dict_value_0_1);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[17], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 107;
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
     exception_tb = MAKE_TRACEBACK(frame_d1f55eeda1fa9e3721e9d10289cbdb7e, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_d1f55eeda1fa9e3721e9d10289cbdb7e->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_d1f55eeda1fa9e3721e9d10289cbdb7e, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_d1f55eeda1fa9e3721e9d10289cbdb7e,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_d1f55eeda1fa9e3721e9d10289cbdb7e == cache_frame_d1f55eeda1fa9e3721e9d10289cbdb7e) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_d1f55eeda1fa9e3721e9d10289cbdb7e);
     cache_frame_d1f55eeda1fa9e3721e9d10289cbdb7e = NULL;
 }

 assertFrameObject(frame_d1f55eeda1fa9e3721e9d10289cbdb7e);

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


static PyObject *impl_aiohttp$client_ws$$$function__5__pong_not_received(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_b4db00200dfdf867f7115d8559575165;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 int tmp_res;
 bool tmp_result;
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_frame_b4db00200dfdf867f7115d8559575165 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_b4db00200dfdf867f7115d8559575165)) {
     Py_XDECREF(cache_frame_b4db00200dfdf867f7115d8559575165);

#if _DEBUG_REFCOUNTS
     if (cache_frame_b4db00200dfdf867f7115d8559575165 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_b4db00200dfdf867f7115d8559575165 = MAKE_FUNCTION_FRAME(tstate, codeobj_b4db00200dfdf867f7115d8559575165, module_aiohttp$client_ws, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_b4db00200dfdf867f7115d8559575165->m_type_description == NULL);
 frame_b4db00200dfdf867f7115d8559575165 = cache_frame_b4db00200dfdf867f7115d8559575165;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_b4db00200dfdf867f7115d8559575165);
 assert(Py_REFCNT(frame_b4db00200dfdf867f7115d8559575165) == 2);

 // Framed code:
 {
  bool tmp_condition_result_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 117;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 117;
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
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_True;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 118;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[35]);

  if (unlikely(tmp_expression_value_2 == NULL)) {
      tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
  }

  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 119;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  tmp_assattr_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[36]);
  if (tmp_assattr_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 119;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[8], tmp_assattr_value_2);
  Py_DECREF(tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 119;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_assattr_target_3;
  tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[37]);

  if (unlikely(tmp_called_instance_1 == NULL)) {
      tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
  }

  if (tmp_called_instance_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 120;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_b4db00200dfdf867f7115d8559575165->m_frame.f_lineno = 120;
  tmp_assattr_value_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[38]);
  if (tmp_assattr_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 120;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_3 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[20], tmp_assattr_value_3);
  Py_DECREF(tmp_assattr_value_3);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 120;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_call_result_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_3 = par_self;
  tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[0]);
  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 121;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
  frame_b4db00200dfdf867f7115d8559575165->m_frame.f_lineno = 121;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[39]);
  Py_DECREF(tmp_called_instance_2);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 121;
   type_description_1 = "o";
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
     exception_tb = MAKE_TRACEBACK(frame_b4db00200dfdf867f7115d8559575165, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_b4db00200dfdf867f7115d8559575165->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_b4db00200dfdf867f7115d8559575165, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_b4db00200dfdf867f7115d8559575165,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_b4db00200dfdf867f7115d8559575165 == cache_frame_b4db00200dfdf867f7115d8559575165) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_b4db00200dfdf867f7115d8559575165);
     cache_frame_b4db00200dfdf867f7115d8559575165 = NULL;
 }

 assertFrameObject(frame_b4db00200dfdf867f7115d8559575165);

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


static PyObject *impl_aiohttp$client_ws$$$function__6_closed(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_9a50ce01b0c879a90fee26e42f80734b;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_9a50ce01b0c879a90fee26e42f80734b = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_9a50ce01b0c879a90fee26e42f80734b)) {
     Py_XDECREF(cache_frame_9a50ce01b0c879a90fee26e42f80734b);

#if _DEBUG_REFCOUNTS
     if (cache_frame_9a50ce01b0c879a90fee26e42f80734b == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_9a50ce01b0c879a90fee26e42f80734b = MAKE_FUNCTION_FRAME(tstate, codeobj_9a50ce01b0c879a90fee26e42f80734b, module_aiohttp$client_ws, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_9a50ce01b0c879a90fee26e42f80734b->m_type_description == NULL);
 frame_9a50ce01b0c879a90fee26e42f80734b = cache_frame_9a50ce01b0c879a90fee26e42f80734b;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_9a50ce01b0c879a90fee26e42f80734b);
 assert(Py_REFCNT(frame_9a50ce01b0c879a90fee26e42f80734b) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 125;
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
     exception_tb = MAKE_TRACEBACK(frame_9a50ce01b0c879a90fee26e42f80734b, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_9a50ce01b0c879a90fee26e42f80734b->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_9a50ce01b0c879a90fee26e42f80734b, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_9a50ce01b0c879a90fee26e42f80734b,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_9a50ce01b0c879a90fee26e42f80734b == cache_frame_9a50ce01b0c879a90fee26e42f80734b) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_9a50ce01b0c879a90fee26e42f80734b);
     cache_frame_9a50ce01b0c879a90fee26e42f80734b = NULL;
 }

 assertFrameObject(frame_9a50ce01b0c879a90fee26e42f80734b);

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


static PyObject *impl_aiohttp$client_ws$$$function__7_close_code(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_53a63ce382413c33a26035c04b2e95b1;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_53a63ce382413c33a26035c04b2e95b1 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_53a63ce382413c33a26035c04b2e95b1)) {
     Py_XDECREF(cache_frame_53a63ce382413c33a26035c04b2e95b1);

#if _DEBUG_REFCOUNTS
     if (cache_frame_53a63ce382413c33a26035c04b2e95b1 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_53a63ce382413c33a26035c04b2e95b1 = MAKE_FUNCTION_FRAME(tstate, codeobj_53a63ce382413c33a26035c04b2e95b1, module_aiohttp$client_ws, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_53a63ce382413c33a26035c04b2e95b1->m_type_description == NULL);
 frame_53a63ce382413c33a26035c04b2e95b1 = cache_frame_53a63ce382413c33a26035c04b2e95b1;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_53a63ce382413c33a26035c04b2e95b1);
 assert(Py_REFCNT(frame_53a63ce382413c33a26035c04b2e95b1) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[8]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 129;
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
     exception_tb = MAKE_TRACEBACK(frame_53a63ce382413c33a26035c04b2e95b1, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_53a63ce382413c33a26035c04b2e95b1->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_53a63ce382413c33a26035c04b2e95b1, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_53a63ce382413c33a26035c04b2e95b1,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_53a63ce382413c33a26035c04b2e95b1 == cache_frame_53a63ce382413c33a26035c04b2e95b1) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_53a63ce382413c33a26035c04b2e95b1);
     cache_frame_53a63ce382413c33a26035c04b2e95b1 = NULL;
 }

 assertFrameObject(frame_53a63ce382413c33a26035c04b2e95b1);

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


static PyObject *impl_aiohttp$client_ws$$$function__8_protocol(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_9246ab0ba9bc855c66074ca21d4f5336;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_9246ab0ba9bc855c66074ca21d4f5336 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_9246ab0ba9bc855c66074ca21d4f5336)) {
     Py_XDECREF(cache_frame_9246ab0ba9bc855c66074ca21d4f5336);

#if _DEBUG_REFCOUNTS
     if (cache_frame_9246ab0ba9bc855c66074ca21d4f5336 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_9246ab0ba9bc855c66074ca21d4f5336 = MAKE_FUNCTION_FRAME(tstate, codeobj_9246ab0ba9bc855c66074ca21d4f5336, module_aiohttp$client_ws, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_9246ab0ba9bc855c66074ca21d4f5336->m_type_description == NULL);
 frame_9246ab0ba9bc855c66074ca21d4f5336 = cache_frame_9246ab0ba9bc855c66074ca21d4f5336;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_9246ab0ba9bc855c66074ca21d4f5336);
 assert(Py_REFCNT(frame_9246ab0ba9bc855c66074ca21d4f5336) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 133;
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
     exception_tb = MAKE_TRACEBACK(frame_9246ab0ba9bc855c66074ca21d4f5336, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_9246ab0ba9bc855c66074ca21d4f5336->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_9246ab0ba9bc855c66074ca21d4f5336, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_9246ab0ba9bc855c66074ca21d4f5336,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_9246ab0ba9bc855c66074ca21d4f5336 == cache_frame_9246ab0ba9bc855c66074ca21d4f5336) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_9246ab0ba9bc855c66074ca21d4f5336);
     cache_frame_9246ab0ba9bc855c66074ca21d4f5336 = NULL;
 }

 assertFrameObject(frame_9246ab0ba9bc855c66074ca21d4f5336);

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


static PyObject *impl_aiohttp$client_ws$$$function__9_compress(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_6e694254516375b8f0d08a42c0749207;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_6e694254516375b8f0d08a42c0749207 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_6e694254516375b8f0d08a42c0749207)) {
     Py_XDECREF(cache_frame_6e694254516375b8f0d08a42c0749207);

#if _DEBUG_REFCOUNTS
     if (cache_frame_6e694254516375b8f0d08a42c0749207 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_6e694254516375b8f0d08a42c0749207 = MAKE_FUNCTION_FRAME(tstate, codeobj_6e694254516375b8f0d08a42c0749207, module_aiohttp$client_ws, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_6e694254516375b8f0d08a42c0749207->m_type_description == NULL);
 frame_6e694254516375b8f0d08a42c0749207 = cache_frame_6e694254516375b8f0d08a42c0749207;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_6e694254516375b8f0d08a42c0749207);
 assert(Py_REFCNT(frame_6e694254516375b8f0d08a42c0749207) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 137;
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
     exception_tb = MAKE_TRACEBACK(frame_6e694254516375b8f0d08a42c0749207, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_6e694254516375b8f0d08a42c0749207->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_6e694254516375b8f0d08a42c0749207, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_6e694254516375b8f0d08a42c0749207,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_6e694254516375b8f0d08a42c0749207 == cache_frame_6e694254516375b8f0d08a42c0749207) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_6e694254516375b8f0d08a42c0749207);
     cache_frame_6e694254516375b8f0d08a42c0749207 = NULL;
 }

 assertFrameObject(frame_6e694254516375b8f0d08a42c0749207);

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


static PyObject *impl_aiohttp$client_ws$$$function__10_client_notakeover(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_316059c2ee2a68ae3c2d303cd0688269;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_316059c2ee2a68ae3c2d303cd0688269 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_316059c2ee2a68ae3c2d303cd0688269)) {
     Py_XDECREF(cache_frame_316059c2ee2a68ae3c2d303cd0688269);

#if _DEBUG_REFCOUNTS
     if (cache_frame_316059c2ee2a68ae3c2d303cd0688269 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_316059c2ee2a68ae3c2d303cd0688269 = MAKE_FUNCTION_FRAME(tstate, codeobj_316059c2ee2a68ae3c2d303cd0688269, module_aiohttp$client_ws, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_316059c2ee2a68ae3c2d303cd0688269->m_type_description == NULL);
 frame_316059c2ee2a68ae3c2d303cd0688269 = cache_frame_316059c2ee2a68ae3c2d303cd0688269;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_316059c2ee2a68ae3c2d303cd0688269);
 assert(Py_REFCNT(frame_316059c2ee2a68ae3c2d303cd0688269) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[22]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 141;
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
     exception_tb = MAKE_TRACEBACK(frame_316059c2ee2a68ae3c2d303cd0688269, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_316059c2ee2a68ae3c2d303cd0688269->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_316059c2ee2a68ae3c2d303cd0688269, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_316059c2ee2a68ae3c2d303cd0688269,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_316059c2ee2a68ae3c2d303cd0688269 == cache_frame_316059c2ee2a68ae3c2d303cd0688269) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_316059c2ee2a68ae3c2d303cd0688269);
     cache_frame_316059c2ee2a68ae3c2d303cd0688269 = NULL;
 }

 assertFrameObject(frame_316059c2ee2a68ae3c2d303cd0688269);

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


static PyObject *impl_aiohttp$client_ws$$$function__11_get_extra_info(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_name = python_pars[1];
 PyObject *par_default = python_pars[2];
 PyObject *var_conn = NULL;
 PyObject *var_transport = NULL;
 struct Nuitka_FrameObject *frame_b104518cfb0fac5c96e5b3495ffde9d8;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 PyObject *tmp_return_value = NULL;
 static struct Nuitka_FrameObject *cache_frame_b104518cfb0fac5c96e5b3495ffde9d8 = NULL;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
 // Tried code:
 if (isFrameUnusable(cache_frame_b104518cfb0fac5c96e5b3495ffde9d8)) {
     Py_XDECREF(cache_frame_b104518cfb0fac5c96e5b3495ffde9d8);

#if _DEBUG_REFCOUNTS
     if (cache_frame_b104518cfb0fac5c96e5b3495ffde9d8 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_b104518cfb0fac5c96e5b3495ffde9d8 = MAKE_FUNCTION_FRAME(tstate, codeobj_b104518cfb0fac5c96e5b3495ffde9d8, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_b104518cfb0fac5c96e5b3495ffde9d8->m_type_description == NULL);
 frame_b104518cfb0fac5c96e5b3495ffde9d8 = cache_frame_b104518cfb0fac5c96e5b3495ffde9d8;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_b104518cfb0fac5c96e5b3495ffde9d8);
 assert(Py_REFCNT(frame_b104518cfb0fac5c96e5b3495ffde9d8) == 2);

 // Framed code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(par_self);
  tmp_expression_value_2 = par_self;
  tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[0]);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
  Py_DECREF(tmp_expression_value_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 145;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  assert(var_conn == NULL);
  var_conn = tmp_assign_source_1;
 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  CHECK_OBJECT(var_conn);
  tmp_cmp_expr_left_1 = var_conn;
  tmp_cmp_expr_right_1 = Py_None;
  tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 CHECK_OBJECT(par_default);
 tmp_return_value = par_default;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_1:;
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_expression_value_3;
  CHECK_OBJECT(var_conn);
  tmp_expression_value_3 = var_conn;
  tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[40]);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 148;
   type_description_1 = "ooooo";
      goto frame_exception_exit_1;
  }
  assert(var_transport == NULL);
  var_transport = tmp_assign_source_2;
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  CHECK_OBJECT(var_transport);
  tmp_cmp_expr_left_2 = var_transport;
  tmp_cmp_expr_right_2 = Py_None;
  tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
  if (tmp_condition_result_2 != false) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 CHECK_OBJECT(par_default);
 tmp_return_value = par_default;
 Py_INCREF(tmp_return_value);
 goto frame_return_exit_1;
 branch_no_2:;
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  CHECK_OBJECT(var_transport);
  tmp_called_instance_1 = var_transport;
  CHECK_OBJECT(par_name);
  tmp_args_element_value_1 = par_name;
  CHECK_OBJECT(par_default);
  tmp_args_element_value_2 = par_default;
  frame_b104518cfb0fac5c96e5b3495ffde9d8->m_frame.f_lineno = 151;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_return_value = CALL_METHOD_WITH_ARGS2(
          tstate,
          tmp_called_instance_1,
          mod_consts[41],
          call_args
      );
  }

  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 151;
   type_description_1 = "ooooo";
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
     exception_tb = MAKE_TRACEBACK(frame_b104518cfb0fac5c96e5b3495ffde9d8, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_b104518cfb0fac5c96e5b3495ffde9d8->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_b104518cfb0fac5c96e5b3495ffde9d8, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_b104518cfb0fac5c96e5b3495ffde9d8,
     type_description_1,
     par_self,
     par_name,
     par_default,
     var_conn,
     var_transport
 );


 // Release cached frame if used for exception.
 if (frame_b104518cfb0fac5c96e5b3495ffde9d8 == cache_frame_b104518cfb0fac5c96e5b3495ffde9d8) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_b104518cfb0fac5c96e5b3495ffde9d8);
     cache_frame_b104518cfb0fac5c96e5b3495ffde9d8 = NULL;
 }

 assertFrameObject(frame_b104518cfb0fac5c96e5b3495ffde9d8);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto try_except_handler_1;
 frame_no_exception_1:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(var_conn);
 Py_DECREF(var_conn);
 var_conn = NULL;
 Py_XDECREF(var_transport);
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

 Py_XDECREF(var_conn);
 var_conn = NULL;
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
 CHECK_OBJECT(par_name);
 Py_DECREF(par_name);
 CHECK_OBJECT(par_default);
 Py_DECREF(par_default);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_name);
 Py_DECREF(par_name);
 CHECK_OBJECT(par_default);
 Py_DECREF(par_default);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$client_ws$$$function__12_exception(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_adb505d2da6fa5a00c07cd9be6561b49;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_adb505d2da6fa5a00c07cd9be6561b49 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_adb505d2da6fa5a00c07cd9be6561b49)) {
     Py_XDECREF(cache_frame_adb505d2da6fa5a00c07cd9be6561b49);

#if _DEBUG_REFCOUNTS
     if (cache_frame_adb505d2da6fa5a00c07cd9be6561b49 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_adb505d2da6fa5a00c07cd9be6561b49 = MAKE_FUNCTION_FRAME(tstate, codeobj_adb505d2da6fa5a00c07cd9be6561b49, module_aiohttp$client_ws, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_adb505d2da6fa5a00c07cd9be6561b49->m_type_description == NULL);
 frame_adb505d2da6fa5a00c07cd9be6561b49 = cache_frame_adb505d2da6fa5a00c07cd9be6561b49;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_adb505d2da6fa5a00c07cd9be6561b49);
 assert(Py_REFCNT(frame_adb505d2da6fa5a00c07cd9be6561b49) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[20]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 154;
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
     exception_tb = MAKE_TRACEBACK(frame_adb505d2da6fa5a00c07cd9be6561b49, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_adb505d2da6fa5a00c07cd9be6561b49->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_adb505d2da6fa5a00c07cd9be6561b49, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_adb505d2da6fa5a00c07cd9be6561b49,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_adb505d2da6fa5a00c07cd9be6561b49 == cache_frame_adb505d2da6fa5a00c07cd9be6561b49) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_adb505d2da6fa5a00c07cd9be6561b49);
     cache_frame_adb505d2da6fa5a00c07cd9be6561b49 = NULL;
 }

 assertFrameObject(frame_adb505d2da6fa5a00c07cd9be6561b49);

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


static PyObject *impl_aiohttp$client_ws$$$function__13_ping(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_message = Nuitka_Cell_New1(python_pars[1]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[2];

  tmp_closure_1[0] = par_message;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_self;
  Py_INCREF(tmp_closure_1[1]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$client_ws$$$function__13_ping$$$coroutine__1_ping(tstate, tmp_closure_1);

  goto function_return_exit;
 }

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_message);
 Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$client_ws$$$function__13_ping$$$coroutine__1_ping_locals {
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 char yield_tmps[1024];
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$client_ws$$$function__13_ping$$$coroutine__1_ping_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$client_ws$$$function__13_ping$$$coroutine__1_ping_locals *coroutine_heap = (struct aiohttp$client_ws$$$function__13_ping$$$coroutine__1_ping_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_106bfef1e0d82b56867471d8947924ac, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *));
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
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_await_result_1;
  coroutine->m_frame->m_frame.f_lineno = 157;
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 157;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[3]);
  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 157;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[33]);
  Py_DECREF(tmp_expression_value_3);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 157;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[44]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 157;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 157;
  tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 157;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
  Py_DECREF(tmp_expression_value_2);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 157;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_1;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 157;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }
  tmp_await_result_1 = yield_return_value;
  Py_DECREF(tmp_await_result_1);
 }

 // Release exception attached to the frame
 DROP_COROUTINE_EXCEPTION(coroutine);



 goto frame_no_exception_1;
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

static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__13_ping$$$coroutine__1_ping(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$client_ws$$$function__13_ping$$$coroutine__1_ping_context,
        module_aiohttp$client_ws,
        mod_consts[33],
        mod_consts[45],
        codeobj_106bfef1e0d82b56867471d8947924ac,
        closure,
        2,
#if 1
        sizeof(struct aiohttp$client_ws$$$function__13_ping$$$coroutine__1_ping_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$client_ws$$$function__14_pong(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_message = Nuitka_Cell_New1(python_pars[1]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[2];

  tmp_closure_1[0] = par_message;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_self;
  Py_INCREF(tmp_closure_1[1]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$client_ws$$$function__14_pong$$$coroutine__1_pong(tstate, tmp_closure_1);

  goto function_return_exit;
 }

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_message);
 Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$client_ws$$$function__14_pong$$$coroutine__1_pong_locals {
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 char yield_tmps[1024];
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$client_ws$$$function__14_pong$$$coroutine__1_pong_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$client_ws$$$function__14_pong$$$coroutine__1_pong_locals *coroutine_heap = (struct aiohttp$client_ws$$$function__14_pong$$$coroutine__1_pong_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_724f0768c36cd89922fe10e7c8033dc8, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *));
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
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_await_result_1;
  coroutine->m_frame->m_frame.f_lineno = 160;
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 160;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[3]);
  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 160;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[46]);
  Py_DECREF(tmp_expression_value_3);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 160;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[44]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 160;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 160;
  tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 160;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
  Py_DECREF(tmp_expression_value_2);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 160;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_1;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 160;
   coroutine_heap->type_description_1 = "cc";
      goto frame_exception_exit_1;
  }
  tmp_await_result_1 = yield_return_value;
  Py_DECREF(tmp_await_result_1);
 }

 // Release exception attached to the frame
 DROP_COROUTINE_EXCEPTION(coroutine);



 goto frame_no_exception_1;
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

static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__14_pong$$$coroutine__1_pong(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$client_ws$$$function__14_pong$$$coroutine__1_pong_context,
        module_aiohttp$client_ws,
        mod_consts[46],
        mod_consts[47],
        codeobj_724f0768c36cd89922fe10e7c8033dc8,
        closure,
        2,
#if 1
        sizeof(struct aiohttp$client_ws$$$function__14_pong$$$coroutine__1_pong_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$client_ws$$$function__15_send_str(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[1]);
 struct Nuitka_CellObject *par_compress = Nuitka_Cell_New1(python_pars[2]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[3];

  tmp_closure_1[0] = par_compress;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_data;
  Py_INCREF(tmp_closure_1[1]);
  tmp_closure_1[2] = par_self;
  Py_INCREF(tmp_closure_1[2]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$client_ws$$$function__15_send_str$$$coroutine__1_send_str(tstate, tmp_closure_1);

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
 CHECK_OBJECT(par_compress);
 Py_DECREF(par_compress);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$client_ws$$$function__15_send_str$$$coroutine__1_send_str_locals {
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 int tmp_res;
 char yield_tmps[1024];
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$client_ws$$$function__15_send_str$$$coroutine__1_send_str_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$client_ws$$$function__15_send_str$$$coroutine__1_send_str_locals *coroutine_heap = (struct aiohttp$client_ws$$$function__15_send_str$$$coroutine__1_send_str_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_3b6e3568b61e34d91e6f43a24c346338, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
  PyObject *tmp_isinstance_inst_1;
  PyObject *tmp_isinstance_cls_1;
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[48]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 163;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_isinstance_inst_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
  coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 163;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_operand_value_1 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
  coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 163;
   coroutine_heap->type_description_1 = "ccc";
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
  PyObject *tmp_mod_expr_left_1;
  PyObject *tmp_mod_expr_right_1;
  PyObject *tmp_type_arg_1;
  tmp_mod_expr_left_1 = mod_consts[49];
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[48]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 164;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_mod_expr_right_1 = BUILTIN_TYPE1(tmp_type_arg_1);
  if (tmp_mod_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 164;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
  Py_DECREF(tmp_mod_expr_right_1);
  if (tmp_make_exception_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 164;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 164;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
  Py_DECREF(tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  coroutine_heap->exception_type = tmp_raise_type_1;
  coroutine_heap->exception_lineno = 164;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
  coroutine_heap->type_description_1 = "ccc";
  goto frame_exception_exit_1;
 }
 branch_no_1:;
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_dict_value_0_1;
  PyObject *tmp_kw_call_dict_value_1_1;
  PyObject *tmp_await_result_1;
  coroutine->m_frame->m_frame.f_lineno = 165;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 165;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[3]);
  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 165;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[50]);
  Py_DECREF(tmp_expression_value_3);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 165;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[48]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 165;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_kw_call_dict_value_0_1 = Py_False;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[51]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 165;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 165;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_1};
      PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
      tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[52]);
  }

  Py_DECREF(tmp_called_value_1);
  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 165;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
  Py_DECREF(tmp_expression_value_2);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 165;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_1;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 165;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_await_result_1 = yield_return_value;
  Py_DECREF(tmp_await_result_1);
 }

 // Release exception attached to the frame
 DROP_COROUTINE_EXCEPTION(coroutine);



 goto frame_no_exception_1;
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

static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__15_send_str$$$coroutine__1_send_str(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$client_ws$$$function__15_send_str$$$coroutine__1_send_str_context,
        module_aiohttp$client_ws,
        mod_consts[53],
        mod_consts[54],
        codeobj_3b6e3568b61e34d91e6f43a24c346338,
        closure,
        3,
#if 1
        sizeof(struct aiohttp$client_ws$$$function__15_send_str$$$coroutine__1_send_str_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$client_ws$$$function__16_send_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[1]);
 struct Nuitka_CellObject *par_compress = Nuitka_Cell_New1(python_pars[2]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[3];

  tmp_closure_1[0] = par_compress;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_data;
  Py_INCREF(tmp_closure_1[1]);
  tmp_closure_1[2] = par_self;
  Py_INCREF(tmp_closure_1[2]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$client_ws$$$function__16_send_bytes$$$coroutine__1_send_bytes(tstate, tmp_closure_1);

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
 CHECK_OBJECT(par_compress);
 Py_DECREF(par_compress);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$client_ws$$$function__16_send_bytes$$$coroutine__1_send_bytes_locals {
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 int tmp_res;
 char yield_tmps[1024];
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$client_ws$$$function__16_send_bytes$$$coroutine__1_send_bytes_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$client_ws$$$function__16_send_bytes$$$coroutine__1_send_bytes_locals *coroutine_heap = (struct aiohttp$client_ws$$$function__16_send_bytes$$$coroutine__1_send_bytes_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_3e5804e4842183cbc88acd943c353785, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
  PyObject *tmp_isinstance_inst_1;
  PyObject *tmp_isinstance_cls_1;
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[48]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 168;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_isinstance_inst_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_isinstance_cls_1 = mod_consts[55];
  coroutine_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 168;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_operand_value_1 = (coroutine_heap->tmp_res != 0) ? Py_True : Py_False;
  coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 168;
   coroutine_heap->type_description_1 = "ccc";
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
  PyObject *tmp_mod_expr_left_1;
  PyObject *tmp_mod_expr_right_1;
  PyObject *tmp_type_arg_1;
  tmp_mod_expr_left_1 = mod_consts[56];
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[48]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 169;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_type_arg_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_mod_expr_right_1 = BUILTIN_TYPE1(tmp_type_arg_1);
  if (tmp_mod_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 169;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
  Py_DECREF(tmp_mod_expr_right_1);
  if (tmp_make_exception_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 169;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 169;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
  Py_DECREF(tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  coroutine_heap->exception_type = tmp_raise_type_1;
  coroutine_heap->exception_lineno = 169;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
  coroutine_heap->type_description_1 = "ccc";
  goto frame_exception_exit_1;
 }
 branch_no_1:;
 {
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_kw_call_dict_value_0_1;
  PyObject *tmp_kw_call_dict_value_1_1;
  PyObject *tmp_await_result_1;
  coroutine->m_frame->m_frame.f_lineno = 170;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 170;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[3]);
  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 170;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[50]);
  Py_DECREF(tmp_expression_value_3);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 170;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[48]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 170;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_kw_call_dict_value_0_1 = Py_True;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[51]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 170;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }

  tmp_kw_call_dict_value_1_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 170;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_1};
      PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
      tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[52]);
  }

  Py_DECREF(tmp_called_value_1);
  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 170;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
  Py_DECREF(tmp_expression_value_2);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 170;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_1;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), &tmp_kw_call_dict_value_1_1, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 170;
   coroutine_heap->type_description_1 = "ccc";
      goto frame_exception_exit_1;
  }
  tmp_await_result_1 = yield_return_value;
  Py_DECREF(tmp_await_result_1);
 }

 // Release exception attached to the frame
 DROP_COROUTINE_EXCEPTION(coroutine);



 goto frame_no_exception_1;
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

static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__16_send_bytes$$$coroutine__1_send_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$client_ws$$$function__16_send_bytes$$$coroutine__1_send_bytes_context,
        module_aiohttp$client_ws,
        mod_consts[57],
        mod_consts[58],
        codeobj_3e5804e4842183cbc88acd943c353785,
        closure,
        3,
#if 1
        sizeof(struct aiohttp$client_ws$$$function__16_send_bytes$$$coroutine__1_send_bytes_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$client_ws$$$function__17_send_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[1]);
 struct Nuitka_CellObject *par_compress = Nuitka_Cell_New1(python_pars[2]);
 struct Nuitka_CellObject *par_dumps = Nuitka_Cell_New1(python_pars[3]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[4];

  tmp_closure_1[0] = par_compress;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_data;
  Py_INCREF(tmp_closure_1[1]);
  tmp_closure_1[2] = par_dumps;
  Py_INCREF(tmp_closure_1[2]);
  tmp_closure_1[3] = par_self;
  Py_INCREF(tmp_closure_1[3]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$client_ws$$$function__17_send_json$$$coroutine__1_send_json(tstate, tmp_closure_1);

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
 CHECK_OBJECT(par_compress);
 Py_DECREF(par_compress);
 CHECK_OBJECT(par_dumps);
 Py_DECREF(par_dumps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$client_ws$$$function__17_send_json$$$coroutine__1_send_json_locals {
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 char yield_tmps[1024];
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$client_ws$$$function__17_send_json$$$coroutine__1_send_json_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$client_ws$$$function__17_send_json$$$coroutine__1_send_json_locals *coroutine_heap = (struct aiohttp$client_ws$$$function__17_send_json$$$coroutine__1_send_json_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_015cf1d1c464c5ece04592549cedf14c, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_kw_call_arg_value_0_1;
  PyObject *tmp_called_value_2;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_kw_call_dict_value_0_1;
  PyObject *tmp_await_result_1;
  coroutine->m_frame->m_frame.f_lineno = 179;
  if (Nuitka_Cell_GET(coroutine->m_closure[3]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 179;
   coroutine_heap->type_description_1 = "cccc";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[3]);
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[53]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 179;
   coroutine_heap->type_description_1 = "cccc";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[59]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 179;
   coroutine_heap->type_description_1 = "cccc";
      goto frame_exception_exit_1;
  }

  tmp_called_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[48]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 179;
   coroutine_heap->type_description_1 = "cccc";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  coroutine->m_frame->m_frame.f_lineno = 179;
  tmp_kw_call_arg_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
  if (tmp_kw_call_arg_value_0_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_called_value_1);

   coroutine_heap->exception_lineno = 179;
   coroutine_heap->type_description_1 = "cccc";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   Py_DECREF(tmp_kw_call_arg_value_0_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[51]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 179;
   coroutine_heap->type_description_1 = "cccc";
      goto frame_exception_exit_1;
  }

  tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 179;
  {
      PyObject *args[] = {tmp_kw_call_arg_value_0_1};
      PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
      tmp_expression_value_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[60]);
  }

  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_kw_call_arg_value_0_1);
  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 179;
   coroutine_heap->type_description_1 = "cccc";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
  Py_DECREF(tmp_expression_value_2);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 179;
   coroutine_heap->type_description_1 = "cccc";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_1;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_arg_value_0_1, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), &tmp_kw_call_dict_value_0_1, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 179;
   coroutine_heap->type_description_1 = "cccc";
      goto frame_exception_exit_1;
  }
  tmp_await_result_1 = yield_return_value;
  Py_DECREF(tmp_await_result_1);
 }

 // Release exception attached to the frame
 DROP_COROUTINE_EXCEPTION(coroutine);



 goto frame_no_exception_1;
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
      coroutine->m_closure[3],
      coroutine->m_closure[1],
      coroutine->m_closure[0],
      coroutine->m_closure[2]
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

static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__17_send_json$$$coroutine__1_send_json(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$client_ws$$$function__17_send_json$$$coroutine__1_send_json_context,
        module_aiohttp$client_ws,
        mod_consts[61],
        mod_consts[62],
        codeobj_015cf1d1c464c5ece04592549cedf14c,
        closure,
        4,
#if 1
        sizeof(struct aiohttp$client_ws$$$function__17_send_json$$$coroutine__1_send_json_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$client_ws$$$function__18_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_code = Nuitka_Cell_New1(python_pars[1]);
 struct Nuitka_CellObject *par_message = Nuitka_Cell_New1(python_pars[2]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[3];

  tmp_closure_1[0] = par_code;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_message;
  Py_INCREF(tmp_closure_1[1]);
  tmp_closure_1[2] = par_self;
  Py_INCREF(tmp_closure_1[2]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$client_ws$$$function__18_close$$$coroutine__1_close(tstate, tmp_closure_1);

  goto function_return_exit;
 }

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_code);
 Py_DECREF(par_code);
 CHECK_OBJECT(par_message);
 Py_DECREF(par_message);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$client_ws$$$function__18_close$$$coroutine__1_close_locals {
 PyObject *var_exc;
 PyObject *var_msg;
 PyObject *tmp_with_1__enter;
 PyObject *tmp_with_1__exit;
 nuitka_bool tmp_with_1__indicator;
 PyObject *tmp_with_1__source;
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 int tmp_res;
 bool tmp_result;
 char yield_tmps[1024];
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 int exception_keeper_lineno_1;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
 PyObject *tmp_return_value;
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
 struct Nuitka_ExceptionStackItem exception_preserved_2;
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 int exception_keeper_lineno_5;
 PyObject *exception_keeper_type_6;
 PyObject *exception_keeper_value_6;
 PyTracebackObject *exception_keeper_tb_6;
 int exception_keeper_lineno_6;
 PyObject *exception_keeper_type_7;
 PyObject *exception_keeper_value_7;
 PyTracebackObject *exception_keeper_tb_7;
 int exception_keeper_lineno_7;
 PyObject *exception_keeper_type_8;
 PyObject *exception_keeper_value_8;
 PyTracebackObject *exception_keeper_tb_8;
 int exception_keeper_lineno_8;
 struct Nuitka_ExceptionStackItem exception_preserved_3;
 PyObject *exception_keeper_type_9;
 PyObject *exception_keeper_value_9;
 PyTracebackObject *exception_keeper_tb_9;
 int exception_keeper_lineno_9;
 PyObject *exception_keeper_type_10;
 PyObject *exception_keeper_value_10;
 PyTracebackObject *exception_keeper_tb_10;
 int exception_keeper_lineno_10;
 PyObject *exception_keeper_type_11;
 PyObject *exception_keeper_value_11;
 PyTracebackObject *exception_keeper_tb_11;
 int exception_keeper_lineno_11;
};
#endif

static PyObject *aiohttp$client_ws$$$function__18_close$$$coroutine__1_close_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$client_ws$$$function__18_close$$$coroutine__1_close_locals *coroutine_heap = (struct aiohttp$client_ws$$$function__18_close$$$coroutine__1_close_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 7: goto yield_return_7;
 case 6: goto yield_return_6;
 case 5: goto yield_return_5;
 case 4: goto yield_return_4;
 case 3: goto yield_return_3;
 case 2: goto yield_return_2;
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 coroutine_heap->var_exc = NULL;
 coroutine_heap->var_msg = NULL;
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_cde7d06babcc68aa1229a41014a785d1, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
  int tmp_and_left_truth_1;
  bool tmp_and_left_value_1;
  bool tmp_and_right_value_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_2;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 184;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 184;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = Py_None;
  tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
  Py_DECREF(tmp_cmp_expr_left_1);
  tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 184;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
  if (tmp_operand_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 184;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 184;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_1 = (coroutine_heap->tmp_res == 0) ? true : false;
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
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_True;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 185;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[7], tmp_assattr_value_1);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 185;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_call_result_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_args_element_value_2;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 186;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[4]);
  if (tmp_expression_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 186;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[63]);
  Py_DECREF(tmp_expression_value_3);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 186;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[64]);

  if (unlikely(tmp_args_element_value_1 == NULL)) {
      tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[64]);
  }

  if (tmp_args_element_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_called_value_1);

   coroutine_heap->exception_lineno = 186;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_2 = mod_consts[65];
  coroutine->m_frame->m_frame.f_lineno = 186;
  {
      PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
      tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
  }

  Py_DECREF(tmp_called_value_1);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 186;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_1);
 }
 {
  PyObject *tmp_expression_value_5;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_await_result_1;
  coroutine->m_frame->m_frame.f_lineno = 187;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 187;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[19]);
  if (tmp_expression_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 187;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_5 = ASYNC_AWAIT(tstate, tmp_expression_value_6, await_normal);
  Py_DECREF(tmp_expression_value_6);
  if (tmp_expression_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 187;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_5;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_6, sizeof(PyObject *), &tmp_expression_value_7, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 187;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_await_result_1 = yield_return_value;
  Py_DECREF(tmp_await_result_1);
 }
 branch_no_1:;
 {
  bool tmp_condition_result_2;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_expression_value_8;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 189;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[6]);
  if (tmp_operand_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 189;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  Py_DECREF(tmp_operand_value_2);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 189;
   coroutine_heap->type_description_1 = "cccoo";
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
 {
  PyObject *tmp_called_instance_1;
  PyObject *tmp_call_result_2;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 190;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  coroutine->m_frame->m_frame.f_lineno = 190;
  tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[25]);
  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 190;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_2);
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_True;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 191;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_assattr_target_2 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[6], tmp_assattr_value_2);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 191;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
 }
 // Tried code:
 {
  PyObject *tmp_expression_value_9;
  PyObject *tmp_expression_value_10;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_expression_value_12;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_args_element_value_4;
  PyObject *tmp_await_result_2;
  coroutine->m_frame->m_frame.f_lineno = 193;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 193;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_2;
  }

  tmp_expression_value_12 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[3]);
  if (tmp_expression_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 193;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_2;
  }
  tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[39]);
  Py_DECREF(tmp_expression_value_11);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 193;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_2;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_2);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[66]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 193;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_2;
  }

  tmp_args_element_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_called_value_2);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[44]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 193;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_2;
  }

  tmp_args_element_value_4 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  coroutine->m_frame->m_frame.f_lineno = 193;
  {
      PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
      tmp_expression_value_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
  }

  Py_DECREF(tmp_called_value_2);
  if (tmp_expression_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 193;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_2;
  }
  tmp_expression_value_9 = ASYNC_AWAIT(tstate, tmp_expression_value_10, await_normal);
  Py_DECREF(tmp_expression_value_10);
  if (tmp_expression_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 193;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_2;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 2;
  coroutine->m_yield_from = tmp_expression_value_9;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_2:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_10, sizeof(PyObject *), &tmp_called_value_2, sizeof(PyObject *), &tmp_expression_value_11, sizeof(PyObject *), &tmp_expression_value_12, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 193;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_2;
  }
  tmp_await_result_2 = yield_return_value;
  Py_DECREF(tmp_await_result_2);
 }
 goto try_end_1;
 // Exception handler code:
 try_except_handler_2:;
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
  bool tmp_condition_result_3;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  PyObject *tmp_expression_value_13;
  tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
  tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[37]);

  if (unlikely(tmp_expression_value_13 == NULL)) {
      tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
  }

  if (tmp_expression_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 194;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_3;
  }
  tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[67]);
  if (tmp_cmp_expr_right_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 194;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_3;
  }
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  Py_DECREF(tmp_cmp_expr_right_2);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 194;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_3;
  }
  tmp_condition_result_3 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_3 != false) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_expression_value_14;
  PyObject *tmp_assattr_target_3;
  tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[35]);

  if (unlikely(tmp_expression_value_14 == NULL)) {
      tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
  }

  if (tmp_expression_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 195;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_3;
  }
  tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[36]);
  if (tmp_assattr_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 195;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_3;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
   Py_DECREF(tmp_assattr_value_3);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 195;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_3;
  }

  tmp_assattr_target_3 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[8], tmp_assattr_value_3);
  Py_DECREF(tmp_assattr_value_3);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 195;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_3;
  }
 }
 {
  PyObject *tmp_called_instance_2;
  PyObject *tmp_expression_value_15;
  PyObject *tmp_call_result_3;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 196;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_3;
  }

  tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[0]);
  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 196;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_3;
  }
  coroutine->m_frame->m_frame.f_lineno = 196;
  tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[39]);
  Py_DECREF(tmp_called_instance_2);
  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 196;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_3;
  }
  Py_DECREF(tmp_call_result_3);
 }
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 197;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "cccoo";
 goto try_except_handler_3;
 goto branch_end_3;
 branch_no_3:;
 {
  bool tmp_condition_result_4;
  PyObject *tmp_cmp_expr_left_3;
  PyObject *tmp_cmp_expr_right_3;
  tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_3 = PyExc_Exception;
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
  assert(!(coroutine_heap->tmp_res == -1));
  tmp_condition_result_4 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
  assert(coroutine_heap->var_exc == NULL);
  Py_INCREF(tmp_assign_source_1);
  coroutine_heap->var_exc = tmp_assign_source_1;
 }
 // Tried code:
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_expression_value_16;
  PyObject *tmp_assattr_target_4;
  tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[35]);

  if (unlikely(tmp_expression_value_16 == NULL)) {
      tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
  }

  if (tmp_expression_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 199;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_4;
  }
  tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[36]);
  if (tmp_assattr_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 199;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_4;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
   Py_DECREF(tmp_assattr_value_4);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 199;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_4;
  }

  tmp_assattr_target_4 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[8], tmp_assattr_value_4);
  Py_DECREF(tmp_assattr_value_4);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 199;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_4;
  }
 }
 {
  PyObject *tmp_assattr_value_5;
  PyObject *tmp_assattr_target_5;
  CHECK_OBJECT(coroutine_heap->var_exc);
  tmp_assattr_value_5 = coroutine_heap->var_exc;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 200;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_4;
  }

  tmp_assattr_target_5 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[20], tmp_assattr_value_5);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 200;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_4;
  }
 }
 {
  PyObject *tmp_called_instance_3;
  PyObject *tmp_expression_value_17;
  PyObject *tmp_call_result_4;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 201;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_4;
  }

  tmp_expression_value_17 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[0]);
  if (tmp_called_instance_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 201;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_4;
  }
  coroutine->m_frame->m_frame.f_lineno = 201;
  tmp_call_result_4 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[39]);
  Py_DECREF(tmp_called_instance_3);
  if (tmp_call_result_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 201;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_4;
  }
  Py_DECREF(tmp_call_result_4);
 }
 coroutine_heap->tmp_return_value = Py_True;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto try_return_handler_4;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_4:;
 Py_XDECREF(coroutine_heap->var_exc);
 coroutine_heap->var_exc = NULL;

 goto try_return_handler_3;
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

 Py_XDECREF(coroutine_heap->var_exc);
 coroutine_heap->var_exc = NULL;

 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_2;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_2;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_2;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_2;

 goto try_except_handler_3;
 // End of try:
 goto branch_end_4;
 branch_no_4:;
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 192;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "cccoo";
 goto try_except_handler_3;
 branch_end_4:;
 branch_end_3:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_3:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

 goto frame_return_exit_1;
 // Exception handler code:
 try_except_handler_3:;
 coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

 goto frame_exception_exit_1;
 // End of try:
 // End of try:
 try_end_1:;
 {
  nuitka_bool tmp_condition_result_5;
  PyObject *tmp_expression_value_18;
  PyObject *tmp_attribute_value_1;
  int tmp_truth_name_1;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 204;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_18 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[8]);
  if (tmp_attribute_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 204;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_attribute_value_1);

   coroutine_heap->exception_lineno = 204;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_1);
  if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 {
  PyObject *tmp_called_instance_4;
  PyObject *tmp_expression_value_19;
  PyObject *tmp_call_result_5;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 205;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_19 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[0]);
  if (tmp_called_instance_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 205;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 205;
  tmp_call_result_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[39]);
  Py_DECREF(tmp_called_instance_4);
  if (tmp_call_result_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 205;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_5);
 }
 coroutine_heap->tmp_return_value = Py_True;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto frame_return_exit_1;
 branch_no_5:;
 loop_start_1:;
 // Tried code:
 // Tried code:
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_value_3;
  PyObject *tmp_expression_value_20;
  PyObject *tmp_args_element_value_5;
  PyObject *tmp_expression_value_21;
  tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[68]);

  if (unlikely(tmp_expression_value_20 == NULL)) {
      tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
  }

  if (tmp_expression_value_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[69]);
  if (tmp_called_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
   Py_DECREF(tmp_called_value_3);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }

  tmp_expression_value_21 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[9]);
  if (tmp_args_element_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_called_value_3);

   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  coroutine->m_frame->m_frame.f_lineno = 210;
  tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_5);
  Py_DECREF(tmp_called_value_3);
  Py_DECREF(tmp_args_element_value_5);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  {
      PyObject *old = coroutine_heap->tmp_with_1__source;
      coroutine_heap->tmp_with_1__source = tmp_assign_source_2;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_called_value_4;
  PyObject *tmp_expression_value_22;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
  tmp_expression_value_22 = coroutine_heap->tmp_with_1__source;
  tmp_called_value_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_22, mod_consts[70]);
  if (tmp_called_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  coroutine->m_frame->m_frame.f_lineno = 210;
  tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
  Py_DECREF(tmp_called_value_4);
  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  {
      PyObject *old = coroutine_heap->tmp_with_1__enter;
      coroutine_heap->tmp_with_1__enter = tmp_assign_source_3;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_expression_value_23;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
  tmp_expression_value_23 = coroutine_heap->tmp_with_1__source;
  tmp_assign_source_4 = LOOKUP_SPECIAL(tstate, tmp_expression_value_23, mod_consts[71]);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  {
      PyObject *old = coroutine_heap->tmp_with_1__exit;
      coroutine_heap->tmp_with_1__exit = tmp_assign_source_4;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_expression_value_24;
  PyObject *tmp_expression_value_25;
  coroutine->m_frame->m_frame.f_lineno = 210;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
  tmp_expression_value_25 = coroutine_heap->tmp_with_1__enter;
  tmp_expression_value_24 = ASYNC_AWAIT(tstate, tmp_expression_value_25, await_enter);
  if (tmp_expression_value_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_25, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 3;
  coroutine->m_yield_from = tmp_expression_value_24;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_3:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_25, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  tmp_assign_source_5 = yield_return_value;
  {
      PyObject *old = coroutine_heap->tmp_with_1__enter;
      assert(old != NULL);
      coroutine_heap->tmp_with_1__enter = tmp_assign_source_5;
      Py_DECREF(old);
  }

 }
 {
  nuitka_bool tmp_assign_source_6;
  tmp_assign_source_6 = NUITKA_BOOL_TRUE;
  coroutine_heap->tmp_with_1__indicator = tmp_assign_source_6;
 }
 // Tried code:
 // Tried code:
 {
  PyObject *tmp_assign_source_7;
  PyObject *tmp_expression_value_26;
  PyObject *tmp_expression_value_27;
  PyObject *tmp_called_instance_5;
  PyObject *tmp_expression_value_28;
  coroutine->m_frame->m_frame.f_lineno = 211;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 211;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_8;
  }

  tmp_expression_value_28 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[4]);
  if (tmp_called_instance_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 211;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_8;
  }
  coroutine->m_frame->m_frame.f_lineno = 211;
  tmp_expression_value_27 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[72]);
  Py_DECREF(tmp_called_instance_5);
  if (tmp_expression_value_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 211;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_8;
  }
  tmp_expression_value_26 = ASYNC_AWAIT(tstate, tmp_expression_value_27, await_normal);
  Py_DECREF(tmp_expression_value_27);
  if (tmp_expression_value_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 211;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_8;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_27, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), &tmp_expression_value_28, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 4;
  coroutine->m_yield_from = tmp_expression_value_26;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_4:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_27, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), &tmp_expression_value_28, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 211;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_8;
  }
  tmp_assign_source_7 = yield_return_value;
  {
      PyObject *old = coroutine_heap->var_msg;
      coroutine_heap->var_msg = tmp_assign_source_7;
      Py_XDECREF(old);
  }

 }
 goto try_end_2;
 // Exception handler code:
 try_except_handler_8:;
 coroutine_heap->exception_keeper_type_4 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_4 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_4 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_4 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 // Preserve existing published exception id 2.
 coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

 if (coroutine_heap->exception_keeper_tb_4 == NULL) {
     coroutine_heap->exception_keeper_tb_4 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
 } else if (coroutine_heap->exception_keeper_lineno_4 != 0) {
     coroutine_heap->exception_keeper_tb_4 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_4, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_4);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_type_4, &coroutine_heap->exception_keeper_value_4, &coroutine_heap->exception_keeper_tb_4);
 // Tried code:
 {
  bool tmp_condition_result_6;
  PyObject *tmp_cmp_expr_left_4;
  PyObject *tmp_cmp_expr_right_4;
  tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_4 = PyExc_BaseException;
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
  assert(!(coroutine_heap->tmp_res == -1));
  tmp_condition_result_6 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_6 != false) {
      goto branch_yes_6;
  } else {
      goto branch_no_6;
  }
 }
 branch_yes_6:;
 {
  nuitka_bool tmp_assign_source_8;
  tmp_assign_source_8 = NUITKA_BOOL_FALSE;
  coroutine_heap->tmp_with_1__indicator = tmp_assign_source_8;
 }
 {
  bool tmp_condition_result_7;
  PyObject *tmp_operand_value_3;
  PyObject *tmp_expression_value_29;
  PyObject *tmp_expression_value_30;
  PyObject *tmp_called_value_5;
  PyObject *tmp_args_element_value_6;
  PyObject *tmp_args_element_value_7;
  PyObject *tmp_args_element_value_8;
  coroutine->m_frame->m_frame.f_lineno = 210;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
  tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
  tmp_args_element_value_6 = EXC_TYPE(PyThreadState_GET());
  tmp_args_element_value_7 = EXC_VALUE(PyThreadState_GET());
  tmp_args_element_value_8 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
  coroutine->m_frame->m_frame.f_lineno = 210;
  {
      PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
      tmp_expression_value_30 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_5, call_args);
  }

  if (tmp_expression_value_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_9;
  }
  tmp_expression_value_29 = ASYNC_AWAIT(tstate, tmp_expression_value_30, await_exit);
  Py_DECREF(tmp_expression_value_30);
  if (tmp_expression_value_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_9;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_7, sizeof(bool), &tmp_expression_value_30, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), NULL);
  SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
  coroutine->m_yield_return_index = 5;
  coroutine->m_yield_from = tmp_expression_value_29;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_5:
  RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_7, sizeof(bool), &tmp_expression_value_30, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), &tmp_args_element_value_6, sizeof(PyObject *), &tmp_args_element_value_7, sizeof(PyObject *), &tmp_args_element_value_8, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_9;
  }
  tmp_operand_value_3 = yield_return_value;
  coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
  Py_DECREF(tmp_operand_value_3);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_9;
  }
  tmp_condition_result_7 = (coroutine_heap->tmp_res == 0) ? true : false;
  if (tmp_condition_result_7 != false) {
      goto branch_yes_7;
  } else {
      goto branch_no_7;
  }
 }
 branch_yes_7:;
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 210;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "cccoo";
 goto try_except_handler_9;
 branch_no_7:;
 goto branch_end_6;
 branch_no_6:;
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 210;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "cccoo";
 goto try_except_handler_9;
 branch_end_6:;
 goto try_end_3;
 // Exception handler code:
 try_except_handler_9:;
 coroutine_heap->exception_keeper_type_5 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_5 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_5 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 // Restore previous exception id 2.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_5;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_5;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_5;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_5;

 goto try_except_handler_7;
 // End of try:
 try_end_3:;
 // Restore previous exception id 2.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

 goto try_end_2;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_2:;
 goto try_end_4;
 // Exception handler code:
 try_except_handler_7:;
 coroutine_heap->exception_keeper_type_6 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_6 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_6 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 {
  bool tmp_condition_result_8;
  nuitka_bool tmp_cmp_expr_left_5;
  nuitka_bool tmp_cmp_expr_right_5;
  assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_5 = coroutine_heap->tmp_with_1__indicator;
  tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
  tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
  if (tmp_condition_result_8 != false) {
      goto branch_yes_8;
  } else {
      goto branch_no_8;
  }
 }
 branch_yes_8:;
 {
  PyObject *tmp_expression_value_31;
  PyObject *tmp_expression_value_32;
  PyObject *tmp_called_value_6;
  PyObject *tmp_await_result_3;
  coroutine->m_frame->m_frame.f_lineno = 210;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
  tmp_called_value_6 = coroutine_heap->tmp_with_1__exit;
  coroutine->m_frame->m_frame.f_lineno = 210;
  tmp_expression_value_32 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_6, mod_consts[73]);

  if (tmp_expression_value_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

   Py_DECREF(coroutine_heap->exception_keeper_type_6);
   Py_XDECREF(coroutine_heap->exception_keeper_value_6);
   Py_XDECREF(coroutine_heap->exception_keeper_tb_6);

   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  tmp_expression_value_31 = ASYNC_AWAIT(tstate, tmp_expression_value_32, await_exit);
  Py_DECREF(tmp_expression_value_32);
  if (tmp_expression_value_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

   Py_DECREF(coroutine_heap->exception_keeper_type_6);
   Py_XDECREF(coroutine_heap->exception_keeper_value_6);
   Py_XDECREF(coroutine_heap->exception_keeper_tb_6);

   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), NULL);
  SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
  coroutine->m_yield_return_index = 6;
  coroutine->m_yield_from = tmp_expression_value_31;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_6:
  RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_32, sizeof(PyObject *), &tmp_called_value_6, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

   Py_DECREF(coroutine_heap->exception_keeper_type_6);
   Py_XDECREF(coroutine_heap->exception_keeper_value_6);
   Py_XDECREF(coroutine_heap->exception_keeper_tb_6);

   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  tmp_await_result_3 = yield_return_value;
  Py_DECREF(tmp_await_result_3);
 }
 branch_no_8:;
 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_6;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_6;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_6;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

 goto try_except_handler_6;
 // End of try:
 try_end_4:;
 {
  bool tmp_condition_result_9;
  nuitka_bool tmp_cmp_expr_left_6;
  nuitka_bool tmp_cmp_expr_right_6;
  assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_6 = coroutine_heap->tmp_with_1__indicator;
  tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
  tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
  if (tmp_condition_result_9 != false) {
      goto branch_yes_9;
  } else {
      goto branch_no_9;
  }
 }
 branch_yes_9:;
 {
  PyObject *tmp_expression_value_33;
  PyObject *tmp_expression_value_34;
  PyObject *tmp_called_value_7;
  PyObject *tmp_await_result_4;
  coroutine->m_frame->m_frame.f_lineno = 210;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
  tmp_called_value_7 = coroutine_heap->tmp_with_1__exit;
  coroutine->m_frame->m_frame.f_lineno = 210;
  tmp_expression_value_34 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_7, mod_consts[73]);

  if (tmp_expression_value_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  tmp_expression_value_33 = ASYNC_AWAIT(tstate, tmp_expression_value_34, await_exit);
  Py_DECREF(tmp_expression_value_34);
  if (tmp_expression_value_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_34, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 7;
  coroutine->m_yield_from = tmp_expression_value_33;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_7:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_34, sizeof(PyObject *), &tmp_called_value_7, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 210;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_6;
  }
  tmp_await_result_4 = yield_return_value;
  Py_DECREF(tmp_await_result_4);
 }
 branch_no_9:;
 goto try_end_5;
 // Exception handler code:
 try_except_handler_6:;
 coroutine_heap->exception_keeper_type_7 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_7 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_7 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
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
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_7;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_7;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_7;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_7;

 goto try_except_handler_5;
 // End of try:
 try_end_5:;
 goto try_end_6;
 // Exception handler code:
 try_except_handler_5:;
 coroutine_heap->exception_keeper_type_8 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_8 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_8 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 // Preserve existing published exception id 3.
 coroutine_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

 if (coroutine_heap->exception_keeper_tb_8 == NULL) {
     coroutine_heap->exception_keeper_tb_8 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_8);
 } else if (coroutine_heap->exception_keeper_lineno_8 != 0) {
     coroutine_heap->exception_keeper_tb_8 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_8, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_8);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_type_8, &coroutine_heap->exception_keeper_value_8, &coroutine_heap->exception_keeper_tb_8);
 // Tried code:
 {
  bool tmp_condition_result_10;
  PyObject *tmp_cmp_expr_left_7;
  PyObject *tmp_cmp_expr_right_7;
  PyObject *tmp_expression_value_35;
  tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
  tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[37]);

  if (unlikely(tmp_expression_value_35 == NULL)) {
      tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
  }

  if (tmp_expression_value_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 212;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_10;
  }
  tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[67]);
  if (tmp_cmp_expr_right_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 212;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_10;
  }
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
  Py_DECREF(tmp_cmp_expr_right_7);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 212;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_10;
  }
  tmp_condition_result_10 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_10 != false) {
      goto branch_yes_10;
  } else {
      goto branch_no_10;
  }
 }
 branch_yes_10:;
 {
  PyObject *tmp_assattr_value_6;
  PyObject *tmp_expression_value_36;
  PyObject *tmp_assattr_target_6;
  tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[35]);

  if (unlikely(tmp_expression_value_36 == NULL)) {
      tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
  }

  if (tmp_expression_value_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 213;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_10;
  }
  tmp_assattr_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[36]);
  if (tmp_assattr_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 213;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_10;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
   Py_DECREF(tmp_assattr_value_6);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 213;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_10;
  }

  tmp_assattr_target_6 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[8], tmp_assattr_value_6);
  Py_DECREF(tmp_assattr_value_6);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 213;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_10;
  }
 }
 {
  PyObject *tmp_called_instance_6;
  PyObject *tmp_expression_value_37;
  PyObject *tmp_call_result_6;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 214;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_10;
  }

  tmp_expression_value_37 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[0]);
  if (tmp_called_instance_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 214;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_10;
  }
  coroutine->m_frame->m_frame.f_lineno = 214;
  tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[39]);
  Py_DECREF(tmp_called_instance_6);
  if (tmp_call_result_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 214;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_10;
  }
  Py_DECREF(tmp_call_result_6);
 }
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 215;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "cccoo";
 goto try_except_handler_10;
 goto branch_end_10;
 branch_no_10:;
 {
  bool tmp_condition_result_11;
  PyObject *tmp_cmp_expr_left_8;
  PyObject *tmp_cmp_expr_right_8;
  tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_8 = PyExc_Exception;
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
  assert(!(coroutine_heap->tmp_res == -1));
  tmp_condition_result_11 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_11 != false) {
      goto branch_yes_11;
  } else {
      goto branch_no_11;
  }
 }
 branch_yes_11:;
 {
  PyObject *tmp_assign_source_9;
  tmp_assign_source_9 = EXC_VALUE(PyThreadState_GET());
  assert(coroutine_heap->var_exc == NULL);
  Py_INCREF(tmp_assign_source_9);
  coroutine_heap->var_exc = tmp_assign_source_9;
 }
 // Tried code:
 {
  PyObject *tmp_assattr_value_7;
  PyObject *tmp_expression_value_38;
  PyObject *tmp_assattr_target_7;
  tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[35]);

  if (unlikely(tmp_expression_value_38 == NULL)) {
      tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
  }

  if (tmp_expression_value_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 217;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_11;
  }
  tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[36]);
  if (tmp_assattr_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 217;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_11;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
   Py_DECREF(tmp_assattr_value_7);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 217;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_11;
  }

  tmp_assattr_target_7 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[8], tmp_assattr_value_7);
  Py_DECREF(tmp_assattr_value_7);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 217;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_11;
  }
 }
 {
  PyObject *tmp_assattr_value_8;
  PyObject *tmp_assattr_target_8;
  CHECK_OBJECT(coroutine_heap->var_exc);
  tmp_assattr_value_8 = coroutine_heap->var_exc;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 218;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_11;
  }

  tmp_assattr_target_8 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[20], tmp_assattr_value_8);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 218;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_11;
  }
 }
 {
  PyObject *tmp_called_instance_7;
  PyObject *tmp_expression_value_39;
  PyObject *tmp_call_result_7;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 219;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_11;
  }

  tmp_expression_value_39 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[0]);
  if (tmp_called_instance_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 219;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_11;
  }
  coroutine->m_frame->m_frame.f_lineno = 219;
  tmp_call_result_7 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[39]);
  Py_DECREF(tmp_called_instance_7);
  if (tmp_call_result_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 219;
   coroutine_heap->type_description_1 = "cccoo";
      goto try_except_handler_11;
  }
  Py_DECREF(tmp_call_result_7);
 }
 coroutine_heap->tmp_return_value = Py_True;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto try_return_handler_11;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_11:;
 Py_XDECREF(coroutine_heap->var_exc);
 coroutine_heap->var_exc = NULL;

 goto try_return_handler_10;
 // Exception handler code:
 try_except_handler_11:;
 coroutine_heap->exception_keeper_type_9 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_9 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_9 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 Py_XDECREF(coroutine_heap->var_exc);
 coroutine_heap->var_exc = NULL;

 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_9;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_9;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_9;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_9;

 goto try_except_handler_10;
 // End of try:
 goto branch_end_11;
 branch_no_11:;
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 209;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "cccoo";
 goto try_except_handler_10;
 branch_end_11:;
 branch_end_10:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_10:;
 // Restore previous exception id 3.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

 goto frame_return_exit_1;
 // Exception handler code:
 try_except_handler_10:;
 coroutine_heap->exception_keeper_type_10 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_10 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_10 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_10 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 // Restore previous exception id 3.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_10;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_10;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_10;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_10;

 goto frame_exception_exit_1;
 // End of try:
 // End of try:
 try_end_6:;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
 Py_DECREF(coroutine_heap->tmp_with_1__source);
 coroutine_heap->tmp_with_1__source = NULL;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
 Py_DECREF(coroutine_heap->tmp_with_1__enter);
 coroutine_heap->tmp_with_1__enter = NULL;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
 Py_DECREF(coroutine_heap->tmp_with_1__exit);
 coroutine_heap->tmp_with_1__exit = NULL;
 {
  nuitka_bool tmp_condition_result_12;
  PyObject *tmp_cmp_expr_left_9;
  PyObject *tmp_cmp_expr_right_9;
  PyObject *tmp_expression_value_40;
  PyObject *tmp_expression_value_41;
  if (coroutine_heap->var_msg == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 222;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_40 = coroutine_heap->var_msg;
  tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[75]);
  if (tmp_cmp_expr_left_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 222;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_expression_value_41 == NULL)) {
      tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_expression_value_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_9);

   coroutine_heap->exception_lineno = 222;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[77]);
  if (tmp_cmp_expr_right_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_9);

   coroutine_heap->exception_lineno = 222;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
  Py_DECREF(tmp_cmp_expr_left_9);
  Py_DECREF(tmp_cmp_expr_right_9);
  if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 222;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
      goto branch_yes_12;
  } else {
      goto branch_no_12;
  }
 }
 branch_yes_12:;
 {
  PyObject *tmp_assattr_value_9;
  PyObject *tmp_expression_value_42;
  PyObject *tmp_assattr_target_9;
  if (coroutine_heap->var_msg == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 223;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_42 = coroutine_heap->var_msg;
  tmp_assattr_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[48]);
  if (tmp_assattr_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 223;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
   Py_DECREF(tmp_assattr_value_9);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 223;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_assattr_target_9 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[8], tmp_assattr_value_9);
  Py_DECREF(tmp_assattr_value_9);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 223;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_called_instance_8;
  PyObject *tmp_expression_value_43;
  PyObject *tmp_call_result_8;
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 224;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_43 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[0]);
  if (tmp_called_instance_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 224;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 224;
  tmp_call_result_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[39]);
  Py_DECREF(tmp_called_instance_8);
  if (tmp_call_result_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 224;
   coroutine_heap->type_description_1 = "cccoo";
      goto frame_exception_exit_1;
  }
  Py_DECREF(tmp_call_result_8);
 }
 coroutine_heap->tmp_return_value = Py_True;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto frame_return_exit_1;
 branch_no_12:;
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


  coroutine_heap->exception_lineno = 208;
  coroutine_heap->type_description_1 = "cccoo";
     goto frame_exception_exit_1;
 }
 goto loop_start_1;
 goto branch_end_2;
 branch_no_2:;
 coroutine_heap->tmp_return_value = Py_False;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto frame_return_exit_1;
 branch_end_2:;

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
      coroutine->m_closure[2],
      coroutine->m_closure[0],
      coroutine->m_closure[1],
      coroutine_heap->var_exc,
      coroutine_heap->var_msg
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
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 Py_XDECREF(coroutine_heap->var_msg);
 coroutine_heap->var_msg = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 coroutine_heap->exception_keeper_type_11 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_11 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_11 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_11 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 Py_XDECREF(coroutine_heap->var_msg);
 coroutine_heap->var_msg = NULL;
 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_11;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_11;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_11;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_11;

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

static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__18_close$$$coroutine__1_close(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$client_ws$$$function__18_close$$$coroutine__1_close_context,
        module_aiohttp$client_ws,
        mod_consts[39],
        mod_consts[78],
        codeobj_cde7d06babcc68aa1229a41014a785d1,
        closure,
        3,
#if 1
        sizeof(struct aiohttp$client_ws$$$function__18_close$$$coroutine__1_close_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$client_ws$$$function__19_receive(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[1]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[2];

  tmp_closure_1[0] = par_self;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_timeout;
  Py_INCREF(tmp_closure_1[1]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$client_ws$$$function__19_receive$$$coroutine__1_receive(tstate, tmp_closure_1);

  goto function_return_exit;
 }

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_timeout);
 Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$client_ws$$$function__19_receive$$$coroutine__1_receive_locals {
 PyObject *var_msg;
 PyObject *var_waiter;
 PyObject *var_exc;
 PyObject *tmp_with_1__enter;
 PyObject *tmp_with_1__exit;
 nuitka_bool tmp_with_1__indicator;
 PyObject *tmp_with_1__source;
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 PyObject *tmp_return_value;
 char yield_tmps[1024];
 bool tmp_result;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 int exception_keeper_lineno_1;
 struct Nuitka_ExceptionStackItem exception_preserved_1;
 int tmp_res;
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
 PyObject *exception_keeper_type_5;
 PyObject *exception_keeper_value_5;
 PyTracebackObject *exception_keeper_tb_5;
 int exception_keeper_lineno_5;
 struct Nuitka_ExceptionStackItem exception_preserved_2;
 PyObject *exception_keeper_type_6;
 PyObject *exception_keeper_value_6;
 PyTracebackObject *exception_keeper_tb_6;
 int exception_keeper_lineno_6;
 PyObject *exception_keeper_type_7;
 PyObject *exception_keeper_value_7;
 PyTracebackObject *exception_keeper_tb_7;
 int exception_keeper_lineno_7;
 struct Nuitka_ExceptionStackItem exception_preserved_3;
 PyObject *exception_keeper_type_8;
 PyObject *exception_keeper_value_8;
 PyTracebackObject *exception_keeper_tb_8;
 int exception_keeper_lineno_8;
 PyObject *exception_keeper_type_9;
 PyObject *exception_keeper_value_9;
 PyTracebackObject *exception_keeper_tb_9;
 int exception_keeper_lineno_9;
 PyObject *exception_keeper_type_10;
 PyObject *exception_keeper_value_10;
 PyTracebackObject *exception_keeper_tb_10;
 int exception_keeper_lineno_10;
 PyObject *exception_keeper_type_11;
 PyObject *exception_keeper_value_11;
 PyTracebackObject *exception_keeper_tb_11;
 int exception_keeper_lineno_11;
};
#endif

static PyObject *aiohttp$client_ws$$$function__19_receive$$$coroutine__1_receive_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$client_ws$$$function__19_receive$$$coroutine__1_receive_locals *coroutine_heap = (struct aiohttp$client_ws$$$function__19_receive$$$coroutine__1_receive_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 11: goto yield_return_11;
 case 10: goto yield_return_10;
 case 9: goto yield_return_9;
 case 8: goto yield_return_8;
 case 7: goto yield_return_7;
 case 6: goto yield_return_6;
 case 5: goto yield_return_5;
 case 4: goto yield_return_4;
 case 3: goto yield_return_3;
 case 2: goto yield_return_2;
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 coroutine_heap->var_msg = NULL;
 coroutine_heap->var_waiter = NULL;
 coroutine_heap->var_exc = NULL;
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_3ef9e2d2e0f6b9f1f48fe3ce5b9e1451, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
 loop_start_1:;
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_1;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 231;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[19]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 231;
   coroutine_heap->type_description_1 = "ccooo";
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
  PyObject *tmp_raise_type_1;
  PyObject *tmp_make_exception_arg_1;
  tmp_make_exception_arg_1 = mod_consts[79];
  coroutine->m_frame->m_frame.f_lineno = 232;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_RuntimeError, tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  coroutine_heap->exception_type = tmp_raise_type_1;
  coroutine_heap->exception_lineno = 232;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
  coroutine_heap->type_description_1 = "ccooo";
  goto frame_exception_exit_1;
 }
 branch_no_1:;
 {
  nuitka_bool tmp_condition_result_2;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_attribute_value_1;
  int tmp_truth_name_1;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 234;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
  if (tmp_attribute_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 234;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_attribute_value_1);

   coroutine_heap->exception_lineno = 234;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_1);
  if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
      goto branch_yes_2;
  } else {
      goto branch_no_2;
  }
 }
 branch_yes_2:;
 coroutine_heap->tmp_return_value = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[80]);

 if (unlikely(coroutine_heap->tmp_return_value == NULL)) {
     coroutine_heap->tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
 }

 if (coroutine_heap->tmp_return_value == NULL) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


  coroutine_heap->exception_lineno = 235;
  coroutine_heap->type_description_1 = "ccooo";
     goto frame_exception_exit_1;
 }
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto frame_return_exit_1;
 goto branch_end_2;
 branch_no_2:;
 {
  nuitka_bool tmp_condition_result_3;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_attribute_value_2;
  int tmp_truth_name_2;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 236;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[7]);
  if (tmp_attribute_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 236;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
  if (tmp_truth_name_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_attribute_value_2);

   coroutine_heap->exception_lineno = 236;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_2);
  if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
      goto branch_yes_3;
  } else {
      goto branch_no_3;
  }
 }
 branch_yes_3:;
 {
  PyObject *tmp_expression_value_4;
  PyObject *tmp_expression_value_5;
  PyObject *tmp_called_instance_1;
  PyObject *tmp_await_result_1;
  coroutine->m_frame->m_frame.f_lineno = 237;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 237;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 237;
  tmp_expression_value_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[39]);
  if (tmp_expression_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 237;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_4 = ASYNC_AWAIT(tstate, tmp_expression_value_5, await_normal);
  Py_DECREF(tmp_expression_value_5);
  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 237;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_4;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_5, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 237;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_await_result_1 = yield_return_value;
  Py_DECREF(tmp_await_result_1);
 }
 coroutine_heap->tmp_return_value = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[80]);

 if (unlikely(coroutine_heap->tmp_return_value == NULL)) {
     coroutine_heap->tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
 }

 if (coroutine_heap->tmp_return_value == NULL) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


  coroutine_heap->exception_lineno = 238;
  coroutine_heap->type_description_1 = "ccooo";
     goto frame_exception_exit_1;
 }
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto frame_return_exit_1;
 branch_no_3:;
 branch_end_2:;
 // Tried code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_instance_2;
  PyObject *tmp_expression_value_6;
  PyObject *tmp_assattr_target_1;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 241;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[18]);
  if (tmp_called_instance_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 241;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_2;
  }
  coroutine->m_frame->m_frame.f_lineno = 241;
  tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[81]);
  Py_DECREF(tmp_called_instance_2);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 241;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_2;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_assattr_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 241;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_2;
  }

  tmp_assattr_target_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[19], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 241;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_2;
  }
 }
 // Tried code:
 // Tried code:
 {
  PyObject *tmp_assign_source_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_args_element_value_1;
  int tmp_or_left_truth_1;
  PyObject *tmp_or_left_value_1;
  PyObject *tmp_or_right_value_1;
  PyObject *tmp_expression_value_8;
  tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[68]);

  if (unlikely(tmp_expression_value_7 == NULL)) {
      tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[68]);
  }

  if (tmp_expression_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[69]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }

  tmp_or_left_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
  if (tmp_or_left_truth_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_called_value_1);

   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  if (tmp_or_left_truth_1 == 1) {
      goto or_left_1;
  } else {
      goto or_right_1;
  }
  or_right_1:;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }

  tmp_expression_value_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_or_right_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[10]);
  if (tmp_or_right_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_called_value_1);

   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  tmp_args_element_value_1 = tmp_or_right_value_1;
  goto or_end_1;
  or_left_1:;
  Py_INCREF(tmp_or_left_value_1);
  tmp_args_element_value_1 = tmp_or_left_value_1;
  or_end_1:;
  coroutine->m_frame->m_frame.f_lineno = 243;
  tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_element_value_1);
  if (tmp_assign_source_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  {
      PyObject *old = coroutine_heap->tmp_with_1__source;
      coroutine_heap->tmp_with_1__source = tmp_assign_source_1;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_2;
  PyObject *tmp_called_value_2;
  PyObject *tmp_expression_value_9;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
  tmp_expression_value_9 = coroutine_heap->tmp_with_1__source;
  tmp_called_value_2 = LOOKUP_SPECIAL(tstate, tmp_expression_value_9, mod_consts[70]);
  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  coroutine->m_frame->m_frame.f_lineno = 243;
  tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
  Py_DECREF(tmp_called_value_2);
  if (tmp_assign_source_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  {
      PyObject *old = coroutine_heap->tmp_with_1__enter;
      coroutine_heap->tmp_with_1__enter = tmp_assign_source_2;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_3;
  PyObject *tmp_expression_value_10;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
  tmp_expression_value_10 = coroutine_heap->tmp_with_1__source;
  tmp_assign_source_3 = LOOKUP_SPECIAL(tstate, tmp_expression_value_10, mod_consts[71]);
  if (tmp_assign_source_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  {
      PyObject *old = coroutine_heap->tmp_with_1__exit;
      coroutine_heap->tmp_with_1__exit = tmp_assign_source_3;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_expression_value_12;
  coroutine->m_frame->m_frame.f_lineno = 243;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
  tmp_expression_value_12 = coroutine_heap->tmp_with_1__enter;
  tmp_expression_value_11 = ASYNC_AWAIT(tstate, tmp_expression_value_12, await_enter);
  if (tmp_expression_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 2;
  coroutine->m_yield_from = tmp_expression_value_11;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_2:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_12, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
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
  PyObject *tmp_assign_source_6;
  PyObject *tmp_expression_value_13;
  PyObject *tmp_expression_value_14;
  PyObject *tmp_called_instance_3;
  PyObject *tmp_expression_value_15;
  coroutine->m_frame->m_frame.f_lineno = 244;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 244;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_6;
  }

  tmp_expression_value_15 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[4]);
  if (tmp_called_instance_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 244;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_6;
  }
  coroutine->m_frame->m_frame.f_lineno = 244;
  tmp_expression_value_14 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[72]);
  Py_DECREF(tmp_called_instance_3);
  if (tmp_expression_value_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 244;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_6;
  }
  tmp_expression_value_13 = ASYNC_AWAIT(tstate, tmp_expression_value_14, await_normal);
  Py_DECREF(tmp_expression_value_14);
  if (tmp_expression_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 244;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_6;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 3;
  coroutine->m_yield_from = tmp_expression_value_13;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_3:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_14, sizeof(PyObject *), &tmp_called_instance_3, sizeof(PyObject *), &tmp_expression_value_15, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 244;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_6;
  }
  tmp_assign_source_6 = yield_return_value;
  {
      PyObject *old = coroutine_heap->var_msg;
      coroutine_heap->var_msg = tmp_assign_source_6;
      Py_XDECREF(old);
  }

 }
 goto try_end_1;
 // Exception handler code:
 try_except_handler_6:;
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
  bool tmp_condition_result_4;
  PyObject *tmp_cmp_expr_left_2;
  PyObject *tmp_cmp_expr_right_2;
  tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_2 = PyExc_BaseException;
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
  assert(!(coroutine_heap->tmp_res == -1));
  tmp_condition_result_4 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_4 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  nuitka_bool tmp_assign_source_7;
  tmp_assign_source_7 = NUITKA_BOOL_FALSE;
  coroutine_heap->tmp_with_1__indicator = tmp_assign_source_7;
 }
 {
  bool tmp_condition_result_5;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_16;
  PyObject *tmp_expression_value_17;
  PyObject *tmp_called_value_3;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_args_element_value_4;
  coroutine->m_frame->m_frame.f_lineno = 243;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
  tmp_called_value_3 = coroutine_heap->tmp_with_1__exit;
  tmp_args_element_value_2 = EXC_TYPE(PyThreadState_GET());
  tmp_args_element_value_3 = EXC_VALUE(PyThreadState_GET());
  tmp_args_element_value_4 = (PyObject *)GET_EXCEPTION_TRACEBACK(EXC_VALUE(PyThreadState_GET()));
  coroutine->m_frame->m_frame.f_lineno = 243;
  {
      PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
      tmp_expression_value_17 = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_3, call_args);
  }

  if (tmp_expression_value_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_7;
  }
  tmp_expression_value_16 = ASYNC_AWAIT(tstate, tmp_expression_value_17, await_exit);
  Py_DECREF(tmp_expression_value_17);
  if (tmp_expression_value_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_7;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_condition_result_5, sizeof(bool), &tmp_expression_value_17, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
  SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
  coroutine->m_yield_return_index = 4;
  coroutine->m_yield_from = tmp_expression_value_16;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_4:
  RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_condition_result_5, sizeof(bool), &tmp_expression_value_17, sizeof(PyObject *), &tmp_called_value_3, sizeof(PyObject *), &tmp_args_element_value_2, sizeof(PyObject *), &tmp_args_element_value_3, sizeof(PyObject *), &tmp_args_element_value_4, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_7;
  }
  tmp_operand_value_1 = yield_return_value;
  coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
  Py_DECREF(tmp_operand_value_1);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_7;
  }
  tmp_condition_result_5 = (coroutine_heap->tmp_res == 0) ? true : false;
  if (tmp_condition_result_5 != false) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 243;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "ccooo";
 goto try_except_handler_7;
 branch_no_5:;
 goto branch_end_4;
 branch_no_4:;
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 243;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "ccooo";
 goto try_except_handler_7;
 branch_end_4:;
 goto try_end_2;
 // Exception handler code:
 try_except_handler_7:;
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

 goto try_except_handler_5;
 // End of try:
 try_end_2:;
 // Restore previous exception id 1.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_1);

 goto try_end_1;
 NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
 return NULL;
 // End of try:
 try_end_1:;
 goto try_end_3;
 // Exception handler code:
 try_except_handler_5:;
 coroutine_heap->exception_keeper_type_3 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_3 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_3 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_3 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 {
  bool tmp_condition_result_6;
  nuitka_bool tmp_cmp_expr_left_3;
  nuitka_bool tmp_cmp_expr_right_3;
  assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_3 = coroutine_heap->tmp_with_1__indicator;
  tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
  tmp_condition_result_6 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
  if (tmp_condition_result_6 != false) {
      goto branch_yes_6;
  } else {
      goto branch_no_6;
  }
 }
 branch_yes_6:;
 {
  PyObject *tmp_expression_value_18;
  PyObject *tmp_expression_value_19;
  PyObject *tmp_called_value_4;
  PyObject *tmp_await_result_2;
  coroutine->m_frame->m_frame.f_lineno = 243;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
  tmp_called_value_4 = coroutine_heap->tmp_with_1__exit;
  coroutine->m_frame->m_frame.f_lineno = 243;
  tmp_expression_value_19 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_4, mod_consts[73]);

  if (tmp_expression_value_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

   Py_DECREF(coroutine_heap->exception_keeper_type_3);
   Py_XDECREF(coroutine_heap->exception_keeper_value_3);
   Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  tmp_expression_value_18 = ASYNC_AWAIT(tstate, tmp_expression_value_19, await_exit);
  Py_DECREF(tmp_expression_value_19);
  if (tmp_expression_value_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

   Py_DECREF(coroutine_heap->exception_keeper_type_3);
   Py_XDECREF(coroutine_heap->exception_keeper_value_3);
   Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), NULL);
  SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
  coroutine->m_yield_return_index = 5;
  coroutine->m_yield_from = tmp_expression_value_18;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_5:
  RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_19, sizeof(PyObject *), &tmp_called_value_4, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);

   Py_DECREF(coroutine_heap->exception_keeper_type_3);
   Py_XDECREF(coroutine_heap->exception_keeper_value_3);
   Py_XDECREF(coroutine_heap->exception_keeper_tb_3);

   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  tmp_await_result_2 = yield_return_value;
  Py_DECREF(tmp_await_result_2);
 }
 branch_no_6:;
 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_3;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_3;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_3;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_3;

 goto try_except_handler_4;
 // End of try:
 try_end_3:;
 {
  bool tmp_condition_result_7;
  nuitka_bool tmp_cmp_expr_left_4;
  nuitka_bool tmp_cmp_expr_right_4;
  assert(coroutine_heap->tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
  tmp_cmp_expr_left_4 = coroutine_heap->tmp_with_1__indicator;
  tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
  tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
  if (tmp_condition_result_7 != false) {
      goto branch_yes_7;
  } else {
      goto branch_no_7;
  }
 }
 branch_yes_7:;
 {
  PyObject *tmp_expression_value_20;
  PyObject *tmp_expression_value_21;
  PyObject *tmp_called_value_5;
  PyObject *tmp_await_result_3;
  coroutine->m_frame->m_frame.f_lineno = 243;
  CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
  tmp_called_value_5 = coroutine_heap->tmp_with_1__exit;
  coroutine->m_frame->m_frame.f_lineno = 243;
  tmp_expression_value_21 = CALL_FUNCTION_WITH_POSARGS3(tstate, tmp_called_value_5, mod_consts[73]);

  if (tmp_expression_value_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  tmp_expression_value_20 = ASYNC_AWAIT(tstate, tmp_expression_value_21, await_exit);
  Py_DECREF(tmp_expression_value_21);
  if (tmp_expression_value_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_21, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 6;
  coroutine->m_yield_from = tmp_expression_value_20;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_6:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_21, sizeof(PyObject *), &tmp_called_value_5, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 243;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_4;
  }
  tmp_await_result_3 = yield_return_value;
  Py_DECREF(tmp_await_result_3);
 }
 branch_no_7:;
 goto try_end_4;
 // Exception handler code:
 try_except_handler_4:;
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

 goto try_except_handler_3;
 // End of try:
 try_end_4:;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__source);
 Py_DECREF(coroutine_heap->tmp_with_1__source);
 coroutine_heap->tmp_with_1__source = NULL;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__enter);
 Py_DECREF(coroutine_heap->tmp_with_1__enter);
 coroutine_heap->tmp_with_1__enter = NULL;
 CHECK_OBJECT(coroutine_heap->tmp_with_1__exit);
 Py_DECREF(coroutine_heap->tmp_with_1__exit);
 coroutine_heap->tmp_with_1__exit = NULL;
 {
  PyObject *tmp_called_instance_4;
  PyObject *tmp_call_result_1;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 245;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_3;
  }

  tmp_called_instance_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 245;
  tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[23]);
  if (tmp_call_result_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 245;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_3;
  }
  Py_DECREF(tmp_call_result_1);
 }
 goto try_end_5;
 // Exception handler code:
 try_except_handler_3:;
 coroutine_heap->exception_keeper_type_5 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_5 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_5 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_5 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 // Preserve existing published exception id 2.
 coroutine_heap->exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

 if (coroutine_heap->exception_keeper_tb_5 == NULL) {
     coroutine_heap->exception_keeper_tb_5 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
 } else if (coroutine_heap->exception_keeper_lineno_5 != 0) {
     coroutine_heap->exception_keeper_tb_5 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_5, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_5);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_type_5, &coroutine_heap->exception_keeper_value_5, &coroutine_heap->exception_keeper_tb_5);
 // Tried code:
 {
  PyObject *tmp_assign_source_8;
  PyObject *tmp_expression_value_22;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 247;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_8;
  }

  tmp_expression_value_22 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[19]);
  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 247;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_8;
  }
  {
      PyObject *old = coroutine_heap->var_waiter;
      coroutine_heap->var_waiter = tmp_assign_source_8;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  tmp_assattr_value_2 = Py_None;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 248;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_8;
  }

  tmp_assattr_target_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 248;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_8;
  }
 }
 {
  PyObject *tmp_called_value_6;
  PyObject *tmp_call_result_2;
  PyObject *tmp_args_element_value_5;
  PyObject *tmp_args_element_value_6;
  tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[82]);

  if (unlikely(tmp_called_value_6 == NULL)) {
      tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
  }

  if (tmp_called_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 249;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_8;
  }
  CHECK_OBJECT(coroutine_heap->var_waiter);
  tmp_args_element_value_5 = coroutine_heap->var_waiter;
  tmp_args_element_value_6 = Py_True;
  coroutine->m_frame->m_frame.f_lineno = 249;
  {
      PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
      tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
  }

  if (tmp_call_result_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 249;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_8;
  }
  Py_DECREF(tmp_call_result_2);
 }
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 242;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "ccooo";
 goto try_except_handler_8;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Exception handler code:
 try_except_handler_8:;
 coroutine_heap->exception_keeper_type_6 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_6 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_6 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_6 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 // Restore previous exception id 2.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_2);

 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_6;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_6;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_6;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_6;

 goto try_except_handler_2;
 // End of try:
 // End of try:
 try_end_5:;
 {
  PyObject *tmp_assign_source_9;
  PyObject *tmp_expression_value_23;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 247;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_2;
  }

  tmp_expression_value_23 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_assign_source_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[19]);
  if (tmp_assign_source_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 247;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_2;
  }
  {
      PyObject *old = coroutine_heap->var_waiter;
      coroutine_heap->var_waiter = tmp_assign_source_9;
      Py_XDECREF(old);
  }

 }
 {
  PyObject *tmp_assattr_value_3;
  PyObject *tmp_assattr_target_3;
  tmp_assattr_value_3 = Py_None;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 248;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_2;
  }

  tmp_assattr_target_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[19], tmp_assattr_value_3);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 248;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_2;
  }
 }
 {
  PyObject *tmp_called_value_7;
  PyObject *tmp_call_result_3;
  PyObject *tmp_args_element_value_7;
  PyObject *tmp_args_element_value_8;
  tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[82]);

  if (unlikely(tmp_called_value_7 == NULL)) {
      tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
  }

  if (tmp_called_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 249;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_2;
  }
  CHECK_OBJECT(coroutine_heap->var_waiter);
  tmp_args_element_value_7 = coroutine_heap->var_waiter;
  tmp_args_element_value_8 = Py_True;
  coroutine->m_frame->m_frame.f_lineno = 249;
  {
      PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
      tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
  }

  if (tmp_call_result_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 249;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_2;
  }
  Py_DECREF(tmp_call_result_3);
 }
 goto try_end_6;
 // Exception handler code:
 try_except_handler_2:;
 coroutine_heap->exception_keeper_type_7 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_7 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_7 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_7 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 // Preserve existing published exception id 3.
 coroutine_heap->exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

 if (coroutine_heap->exception_keeper_tb_7 == NULL) {
     coroutine_heap->exception_keeper_tb_7 = MAKE_TRACEBACK(coroutine->m_frame, coroutine_heap->exception_keeper_lineno_7);
 } else if (coroutine_heap->exception_keeper_lineno_7 != 0) {
     coroutine_heap->exception_keeper_tb_7 = ADD_TRACEBACK(coroutine_heap->exception_keeper_tb_7, coroutine->m_frame, coroutine_heap->exception_keeper_lineno_7);
 }

 PUBLISH_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_keeper_type_7, &coroutine_heap->exception_keeper_value_7, &coroutine_heap->exception_keeper_tb_7);
 // Tried code:
 {
  bool tmp_condition_result_8;
  PyObject *tmp_cmp_expr_left_5;
  PyObject *tmp_cmp_expr_right_5;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_expression_value_24;
  tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
  tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[37]);

  if (unlikely(tmp_expression_value_24 == NULL)) {
      tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
  }

  if (tmp_expression_value_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 250;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[67]);
  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 250;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_cmp_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_25;
   PyTuple_SET_ITEM(tmp_cmp_expr_right_5, 0, tmp_tuple_element_1);
   tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[37]);

   if (unlikely(tmp_expression_value_25 == NULL)) {
       tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
   }

   if (tmp_expression_value_25 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 250;
    coroutine_heap->type_description_1 = "ccooo";
       goto tuple_build_exception_1;
   }
   tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[38]);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 250;
    coroutine_heap->type_description_1 = "ccooo";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_cmp_expr_right_5, 1, tmp_tuple_element_1);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_cmp_expr_right_5);
  goto try_except_handler_9;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
  Py_DECREF(tmp_cmp_expr_right_5);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 250;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_condition_result_8 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_8 != false) {
      goto branch_yes_8;
  } else {
      goto branch_no_8;
  }
 }
 branch_yes_8:;
 {
  PyObject *tmp_assattr_value_4;
  PyObject *tmp_expression_value_26;
  PyObject *tmp_assattr_target_4;
  tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[35]);

  if (unlikely(tmp_expression_value_26 == NULL)) {
      tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
  }

  if (tmp_expression_value_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 251;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[36]);
  if (tmp_assattr_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 251;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_assattr_value_4);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 251;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }

  tmp_assattr_target_4 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[8], tmp_assattr_value_4);
  Py_DECREF(tmp_assattr_value_4);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 251;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
 }
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 252;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "ccooo";
 goto try_except_handler_9;
 goto branch_end_8;
 branch_no_8:;
 {
  bool tmp_condition_result_9;
  PyObject *tmp_cmp_expr_left_6;
  PyObject *tmp_cmp_expr_right_6;
  tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[83]);

  if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
      tmp_cmp_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
  }

  if (tmp_cmp_expr_right_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 253;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 253;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_condition_result_9 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_9 != false) {
      goto branch_yes_9;
  } else {
      goto branch_no_9;
  }
 }
 branch_yes_9:;
 {
  PyObject *tmp_assattr_value_5;
  PyObject *tmp_expression_value_27;
  PyObject *tmp_assattr_target_5;
  tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[35]);

  if (unlikely(tmp_expression_value_27 == NULL)) {
      tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
  }

  if (tmp_expression_value_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 254;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_assattr_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[84]);
  if (tmp_assattr_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 254;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_assattr_value_5);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 254;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }

  tmp_assattr_target_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[8], tmp_assattr_value_5);
  Py_DECREF(tmp_assattr_value_5);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 254;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
 }
 {
  PyObject *tmp_expression_value_28;
  PyObject *tmp_expression_value_29;
  PyObject *tmp_called_instance_5;
  PyObject *tmp_await_result_4;
  coroutine->m_frame->m_frame.f_lineno = 255;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 255;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }

  tmp_called_instance_5 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 255;
  tmp_expression_value_29 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[39]);
  if (tmp_expression_value_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 255;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_expression_value_28 = ASYNC_AWAIT(tstate, tmp_expression_value_29, await_normal);
  Py_DECREF(tmp_expression_value_29);
  if (tmp_expression_value_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 255;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_29, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), NULL);
  SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
  coroutine->m_yield_return_index = 7;
  coroutine->m_yield_from = tmp_expression_value_28;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_7:
  RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_29, sizeof(PyObject *), &tmp_called_instance_5, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 255;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_await_result_4 = yield_return_value;
  Py_DECREF(tmp_await_result_4);
 }
 {
  PyObject *tmp_called_value_8;
  PyObject *tmp_args_element_value_9;
  PyObject *tmp_expression_value_30;
  PyObject *tmp_args_element_value_10;
  PyObject *tmp_args_element_value_11;
  tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[85]);

  if (unlikely(tmp_called_value_8 == NULL)) {
      tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
  }

  if (tmp_called_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 256;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_expression_value_30 == NULL)) {
      tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_expression_value_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 256;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[86]);
  if (tmp_args_element_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 256;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_args_element_value_10 = Py_None;
  tmp_args_element_value_11 = Py_None;
  coroutine->m_frame->m_frame.f_lineno = 256;
  {
      PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11};
      coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_8, call_args);
  }

  Py_DECREF(tmp_args_element_value_9);
  if (coroutine_heap->tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 256;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  goto try_return_handler_9;
 }
 goto branch_end_9;
 branch_no_9:;
 {
  bool tmp_condition_result_10;
  PyObject *tmp_cmp_expr_left_7;
  PyObject *tmp_cmp_expr_right_7;
  tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[87]);

  if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
      tmp_cmp_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
  }

  if (tmp_cmp_expr_right_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 257;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 257;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_condition_result_10 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_10 != false) {
      goto branch_yes_10;
  } else {
      goto branch_no_10;
  }
 }
 branch_yes_10:;
 {
  PyObject *tmp_assattr_value_6;
  PyObject *tmp_assattr_target_6;
  tmp_assattr_value_6 = Py_True;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 258;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }

  tmp_assattr_target_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[6], tmp_assattr_value_6);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 258;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
 }
 {
  PyObject *tmp_assattr_value_7;
  PyObject *tmp_expression_value_31;
  PyObject *tmp_assattr_target_7;
  tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[35]);

  if (unlikely(tmp_expression_value_31 == NULL)) {
      tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
  }

  if (tmp_expression_value_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 259;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_assattr_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[36]);
  if (tmp_assattr_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 259;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_assattr_value_7);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 259;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }

  tmp_assattr_target_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_7, mod_consts[8], tmp_assattr_value_7);
  Py_DECREF(tmp_assattr_value_7);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 259;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
 }
 coroutine_heap->tmp_return_value = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[80]);

 if (unlikely(coroutine_heap->tmp_return_value == NULL)) {
     coroutine_heap->tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[80]);
 }

 if (coroutine_heap->tmp_return_value == NULL) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


  coroutine_heap->exception_lineno = 260;
  coroutine_heap->type_description_1 = "ccooo";
     goto try_except_handler_9;
 }
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto try_return_handler_9;
 goto branch_end_10;
 branch_no_10:;
 {
  bool tmp_condition_result_11;
  PyObject *tmp_cmp_expr_left_8;
  PyObject *tmp_cmp_expr_right_8;
  tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[88]);

  if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
      tmp_cmp_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[88]);
  }

  if (tmp_cmp_expr_right_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 261;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 261;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_9;
  }
  tmp_condition_result_11 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_11 != false) {
      goto branch_yes_11;
  } else {
      goto branch_no_11;
  }
 }
 branch_yes_11:;
 {
  PyObject *tmp_assign_source_10;
  tmp_assign_source_10 = EXC_VALUE(PyThreadState_GET());
  assert(coroutine_heap->var_exc == NULL);
  Py_INCREF(tmp_assign_source_10);
  coroutine_heap->var_exc = tmp_assign_source_10;
 }
 // Tried code:
 {
  PyObject *tmp_assattr_value_8;
  PyObject *tmp_expression_value_32;
  PyObject *tmp_assattr_target_8;
  CHECK_OBJECT(coroutine_heap->var_exc);
  tmp_expression_value_32 = coroutine_heap->var_exc;
  tmp_assattr_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[66]);
  if (tmp_assattr_value_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 262;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_assattr_value_8);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 262;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }

  tmp_assattr_target_8 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_8, mod_consts[8], tmp_assattr_value_8);
  Py_DECREF(tmp_assattr_value_8);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 262;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }
 }
 {
  PyObject *tmp_expression_value_33;
  PyObject *tmp_expression_value_34;
  PyObject *tmp_called_value_9;
  PyObject *tmp_expression_value_35;
  PyObject *tmp_kw_call_value_0_1;
  PyObject *tmp_expression_value_36;
  PyObject *tmp_await_result_5;
  coroutine->m_frame->m_frame.f_lineno = 263;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 263;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }

  tmp_expression_value_35 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[39]);
  if (tmp_called_value_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 263;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }
  CHECK_OBJECT(coroutine_heap->var_exc);
  tmp_expression_value_36 = coroutine_heap->var_exc;
  tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[66]);
  if (tmp_kw_call_value_0_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_called_value_9);

   coroutine_heap->exception_lineno = 263;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }
  coroutine->m_frame->m_frame.f_lineno = 263;
  {
      PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

      tmp_expression_value_34 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_9, kw_values, mod_consts[89]);
  }

  Py_DECREF(tmp_called_value_9);
  Py_DECREF(tmp_kw_call_value_0_1);
  if (tmp_expression_value_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 263;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }
  tmp_expression_value_33 = ASYNC_AWAIT(tstate, tmp_expression_value_34, await_normal);
  Py_DECREF(tmp_expression_value_34);
  if (tmp_expression_value_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 263;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_34, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), &tmp_expression_value_35, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_expression_value_36, sizeof(PyObject *), NULL);
  SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
  coroutine->m_yield_return_index = 8;
  coroutine->m_yield_from = tmp_expression_value_33;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_8:
  RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_34, sizeof(PyObject *), &tmp_called_value_9, sizeof(PyObject *), &tmp_expression_value_35, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), &tmp_expression_value_36, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 263;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }
  tmp_await_result_5 = yield_return_value;
  Py_DECREF(tmp_await_result_5);
 }
 {
  PyObject *tmp_called_value_10;
  PyObject *tmp_args_element_value_12;
  PyObject *tmp_expression_value_37;
  PyObject *tmp_args_element_value_13;
  PyObject *tmp_args_element_value_14;
  tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[85]);

  if (unlikely(tmp_called_value_10 == NULL)) {
      tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
  }

  if (tmp_called_value_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 264;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }
  tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_expression_value_37 == NULL)) {
      tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_expression_value_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 264;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }
  tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[90]);
  if (tmp_args_element_value_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 264;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }
  CHECK_OBJECT(coroutine_heap->var_exc);
  tmp_args_element_value_13 = coroutine_heap->var_exc;
  tmp_args_element_value_14 = Py_None;
  coroutine->m_frame->m_frame.f_lineno = 264;
  {
      PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
      coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_10, call_args);
  }

  Py_DECREF(tmp_args_element_value_12);
  if (coroutine_heap->tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 264;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_10;
  }
  goto try_return_handler_10;
 }
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_10:;
 Py_XDECREF(coroutine_heap->var_exc);
 coroutine_heap->var_exc = NULL;

 goto try_return_handler_9;
 // Exception handler code:
 try_except_handler_10:;
 coroutine_heap->exception_keeper_type_8 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_8 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_8 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_8 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 Py_XDECREF(coroutine_heap->var_exc);
 coroutine_heap->var_exc = NULL;

 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_8;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_8;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_8;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_8;

 goto try_except_handler_9;
 // End of try:
 goto branch_end_11;
 branch_no_11:;
 {
  bool tmp_condition_result_12;
  PyObject *tmp_cmp_expr_left_9;
  PyObject *tmp_cmp_expr_right_9;
  tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
  tmp_cmp_expr_right_9 = PyExc_Exception;
  coroutine_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
  assert(!(coroutine_heap->tmp_res == -1));
  tmp_condition_result_12 = (coroutine_heap->tmp_res != 0) ? true : false;
  if (tmp_condition_result_12 != false) {
      goto branch_yes_12;
  } else {
      goto branch_no_12;
  }
 }
 branch_yes_12:;
 {
  PyObject *tmp_assign_source_11;
  tmp_assign_source_11 = EXC_VALUE(PyThreadState_GET());
  assert(coroutine_heap->var_exc == NULL);
  Py_INCREF(tmp_assign_source_11);
  coroutine_heap->var_exc = tmp_assign_source_11;
 }
 // Tried code:
 {
  PyObject *tmp_assattr_value_9;
  PyObject *tmp_assattr_target_9;
  CHECK_OBJECT(coroutine_heap->var_exc);
  tmp_assattr_value_9 = coroutine_heap->var_exc;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 266;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }

  tmp_assattr_target_9 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_9, mod_consts[20], tmp_assattr_value_9);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 266;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
 }
 {
  PyObject *tmp_assattr_value_10;
  PyObject *tmp_assattr_target_10;
  tmp_assattr_value_10 = Py_True;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 267;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }

  tmp_assattr_target_10 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_10, mod_consts[7], tmp_assattr_value_10);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 267;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
 }
 {
  PyObject *tmp_assattr_value_11;
  PyObject *tmp_expression_value_38;
  PyObject *tmp_assattr_target_11;
  tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[35]);

  if (unlikely(tmp_expression_value_38 == NULL)) {
      tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
  }

  if (tmp_expression_value_38 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 268;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
  tmp_assattr_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[36]);
  if (tmp_assattr_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 268;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_assattr_value_11);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 268;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }

  tmp_assattr_target_11 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_11, mod_consts[8], tmp_assattr_value_11);
  Py_DECREF(tmp_assattr_value_11);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 268;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
 }
 {
  PyObject *tmp_expression_value_39;
  PyObject *tmp_expression_value_40;
  PyObject *tmp_called_instance_6;
  PyObject *tmp_await_result_6;
  coroutine->m_frame->m_frame.f_lineno = 269;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 269;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }

  tmp_called_instance_6 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 269;
  tmp_expression_value_40 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[39]);
  if (tmp_expression_value_40 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 269;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
  tmp_expression_value_39 = ASYNC_AWAIT(tstate, tmp_expression_value_40, await_normal);
  Py_DECREF(tmp_expression_value_40);
  if (tmp_expression_value_39 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 269;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_40, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), NULL);
  SAVE_COROUTINE_EXCEPTION(tstate, coroutine);
  coroutine->m_yield_return_index = 9;
  coroutine->m_yield_from = tmp_expression_value_39;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_9:
  RESTORE_COROUTINE_EXCEPTION(tstate, coroutine);
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_40, sizeof(PyObject *), &tmp_called_instance_6, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 269;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
  tmp_await_result_6 = yield_return_value;
  Py_DECREF(tmp_await_result_6);
 }
 {
  PyObject *tmp_called_value_11;
  PyObject *tmp_args_element_value_15;
  PyObject *tmp_expression_value_41;
  PyObject *tmp_args_element_value_16;
  PyObject *tmp_args_element_value_17;
  tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[85]);

  if (unlikely(tmp_called_value_11 == NULL)) {
      tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
  }

  if (tmp_called_value_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 270;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
  tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_expression_value_41 == NULL)) {
      tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_expression_value_41 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 270;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
  tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[90]);
  if (tmp_args_element_value_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 270;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
  CHECK_OBJECT(coroutine_heap->var_exc);
  tmp_args_element_value_16 = coroutine_heap->var_exc;
  tmp_args_element_value_17 = Py_None;
  coroutine->m_frame->m_frame.f_lineno = 270;
  {
      PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17};
      coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tstate, tmp_called_value_11, call_args);
  }

  Py_DECREF(tmp_args_element_value_15);
  if (coroutine_heap->tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 270;
   coroutine_heap->type_description_1 = "ccooo";
      goto try_except_handler_11;
  }
  goto try_return_handler_11;
 }
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_11:;
 Py_XDECREF(coroutine_heap->var_exc);
 coroutine_heap->var_exc = NULL;

 goto try_return_handler_9;
 // Exception handler code:
 try_except_handler_11:;
 coroutine_heap->exception_keeper_type_9 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_9 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_9 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_9 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 Py_XDECREF(coroutine_heap->var_exc);
 coroutine_heap->var_exc = NULL;

 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_9;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_9;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_9;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_9;

 goto try_except_handler_9;
 // End of try:
 goto branch_end_12;
 branch_no_12:;
 coroutine_heap->tmp_result = RERAISE_EXCEPTION(&coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
 if (unlikely(coroutine_heap->tmp_result == false)) {
     coroutine_heap->exception_lineno = 240;
 }

 if (coroutine_heap->exception_tb && coroutine_heap->exception_tb->tb_frame == &coroutine->m_frame->m_frame) coroutine->m_frame->m_frame.f_lineno = coroutine_heap->exception_tb->tb_lineno;
 coroutine_heap->type_description_1 = "ccooo";
 goto try_except_handler_9;
 branch_end_12:;
 branch_end_11:;
 branch_end_10:;
 branch_end_9:;
 branch_end_8:;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_9:;
 // Restore previous exception id 3.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

 goto frame_return_exit_1;
 // Exception handler code:
 try_except_handler_9:;
 coroutine_heap->exception_keeper_type_10 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_10 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_10 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_10 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 // Restore previous exception id 3.
 SET_CURRENT_EXCEPTION(tstate, &coroutine_heap->exception_preserved_3);

 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_10;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_10;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_10;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_10;

 goto frame_exception_exit_1;
 // End of try:
 // End of try:
 try_end_6:;
 {
  nuitka_bool tmp_condition_result_13;
  PyObject *tmp_cmp_expr_left_10;
  PyObject *tmp_cmp_expr_right_10;
  PyObject *tmp_expression_value_42;
  PyObject *tmp_expression_value_43;
  if (coroutine_heap->var_msg == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 272;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_42 = coroutine_heap->var_msg;
  tmp_cmp_expr_left_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[75]);
  if (tmp_cmp_expr_left_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 272;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_expression_value_43 == NULL)) {
      tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_expression_value_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_10);

   coroutine_heap->exception_lineno = 272;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[77]);
  if (tmp_cmp_expr_right_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_10);

   coroutine_heap->exception_lineno = 272;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
  Py_DECREF(tmp_cmp_expr_left_10);
  Py_DECREF(tmp_cmp_expr_right_10);
  if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 272;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
      goto branch_yes_13;
  } else {
      goto branch_no_13;
  }
 }
 branch_yes_13:;
 {
  PyObject *tmp_assattr_value_12;
  PyObject *tmp_assattr_target_12;
  tmp_assattr_value_12 = Py_True;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 273;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_assattr_target_12 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_12, mod_consts[7], tmp_assattr_value_12);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 273;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_13;
  PyObject *tmp_expression_value_44;
  PyObject *tmp_assattr_target_13;
  if (coroutine_heap->var_msg == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 274;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_44 = coroutine_heap->var_msg;
  tmp_assattr_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[48]);
  if (tmp_assattr_value_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 274;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {
   Py_DECREF(tmp_assattr_value_13);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 274;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_assattr_target_13 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_13, mod_consts[8], tmp_assattr_value_13);
  Py_DECREF(tmp_assattr_value_13);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 274;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
 }
 {
  nuitka_bool tmp_condition_result_14;
  int tmp_and_left_truth_1;
  nuitka_bool tmp_and_left_value_1;
  nuitka_bool tmp_and_right_value_1;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_expression_value_45;
  PyObject *tmp_expression_value_46;
  PyObject *tmp_attribute_value_3;
  int tmp_truth_name_3;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 275;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_45 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_operand_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[6]);
  if (tmp_operand_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 275;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  coroutine_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  Py_DECREF(tmp_operand_value_2);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 275;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_and_left_value_1 = (coroutine_heap->tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
  tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_1 == 1) {
      goto and_right_1;
  } else {
      goto and_left_1;
  }
  and_right_1:;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 275;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_46 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_attribute_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[11]);
  if (tmp_attribute_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 275;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_3 = CHECK_IF_TRUE(tmp_attribute_value_3);
  if (tmp_truth_name_3 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_attribute_value_3);

   coroutine_heap->exception_lineno = 275;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_1 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_3);
  tmp_condition_result_14 = tmp_and_right_value_1;
  goto and_end_1;
  and_left_1:;
  tmp_condition_result_14 = tmp_and_left_value_1;
  and_end_1:;
  if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
      goto branch_yes_14;
  } else {
      goto branch_no_14;
  }
 }
 branch_yes_14:;
 {
  PyObject *tmp_expression_value_47;
  PyObject *tmp_expression_value_48;
  PyObject *tmp_called_instance_7;
  PyObject *tmp_await_result_7;
  coroutine->m_frame->m_frame.f_lineno = 276;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 276;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_called_instance_7 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 276;
  tmp_expression_value_48 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[39]);
  if (tmp_expression_value_48 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 276;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_47 = ASYNC_AWAIT(tstate, tmp_expression_value_48, await_normal);
  Py_DECREF(tmp_expression_value_48);
  if (tmp_expression_value_47 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 276;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_48, sizeof(PyObject *), &tmp_called_instance_7, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 10;
  coroutine->m_yield_from = tmp_expression_value_47;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_10:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_48, sizeof(PyObject *), &tmp_called_instance_7, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 276;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_await_result_7 = yield_return_value;
  Py_DECREF(tmp_await_result_7);
 }
 branch_no_14:;
 goto branch_end_13;
 branch_no_13:;
 {
  nuitka_bool tmp_condition_result_15;
  PyObject *tmp_cmp_expr_left_11;
  PyObject *tmp_cmp_expr_right_11;
  PyObject *tmp_expression_value_49;
  PyObject *tmp_expression_value_50;
  if (coroutine_heap->var_msg == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 277;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_49 = coroutine_heap->var_msg;
  tmp_cmp_expr_left_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[75]);
  if (tmp_cmp_expr_left_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 277;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_expression_value_50 == NULL)) {
      tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_expression_value_50 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_11);

   coroutine_heap->exception_lineno = 277;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[91]);
  if (tmp_cmp_expr_right_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_11);

   coroutine_heap->exception_lineno = 277;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_15 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
  Py_DECREF(tmp_cmp_expr_left_11);
  Py_DECREF(tmp_cmp_expr_right_11);
  if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 277;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
      goto branch_yes_15;
  } else {
      goto branch_no_15;
  }
 }
 branch_yes_15:;
 {
  PyObject *tmp_assattr_value_14;
  PyObject *tmp_assattr_target_14;
  tmp_assattr_value_14 = Py_True;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 278;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_assattr_target_14 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine_heap->tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_14, mod_consts[7], tmp_assattr_value_14);
  if (coroutine_heap->tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 278;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
 }
 goto branch_end_15;
 branch_no_15:;
 {
  nuitka_bool tmp_condition_result_16;
  int tmp_and_left_truth_2;
  nuitka_bool tmp_and_left_value_2;
  nuitka_bool tmp_and_right_value_2;
  PyObject *tmp_cmp_expr_left_12;
  PyObject *tmp_cmp_expr_right_12;
  PyObject *tmp_expression_value_51;
  PyObject *tmp_expression_value_52;
  PyObject *tmp_expression_value_53;
  PyObject *tmp_attribute_value_4;
  int tmp_truth_name_4;
  if (coroutine_heap->var_msg == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 279;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_51 = coroutine_heap->var_msg;
  tmp_cmp_expr_left_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[75]);
  if (tmp_cmp_expr_left_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 279;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_expression_value_52 == NULL)) {
      tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_expression_value_52 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_12);

   coroutine_heap->exception_lineno = 279;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[92]);
  if (tmp_cmp_expr_right_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_12);

   coroutine_heap->exception_lineno = 279;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_and_left_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
  Py_DECREF(tmp_cmp_expr_left_12);
  Py_DECREF(tmp_cmp_expr_right_12);
  if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 279;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 279;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  if (tmp_and_left_truth_2 == 1) {
      goto and_right_2;
  } else {
      goto and_left_2;
  }
  and_right_2:;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 279;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_53 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_attribute_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[12]);
  if (tmp_attribute_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 279;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_4 = CHECK_IF_TRUE(tmp_attribute_value_4);
  if (tmp_truth_name_4 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_attribute_value_4);

   coroutine_heap->exception_lineno = 279;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_2 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_4);
  tmp_condition_result_16 = tmp_and_right_value_2;
  goto and_end_2;
  and_left_2:;
  tmp_condition_result_16 = tmp_and_left_value_2;
  and_end_2:;
  if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
      goto branch_yes_16;
  } else {
      goto branch_no_16;
  }
 }
 branch_yes_16:;
 {
  PyObject *tmp_expression_value_54;
  PyObject *tmp_expression_value_55;
  PyObject *tmp_called_value_12;
  PyObject *tmp_expression_value_56;
  PyObject *tmp_args_element_value_18;
  PyObject *tmp_expression_value_57;
  PyObject *tmp_await_result_8;
  coroutine->m_frame->m_frame.f_lineno = 280;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 280;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_56 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[46]);
  if (tmp_called_value_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 280;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  if (coroutine_heap->var_msg == NULL) {
   Py_DECREF(tmp_called_value_12);
   FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 280;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_57 = coroutine_heap->var_msg;
  tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[48]);
  if (tmp_args_element_value_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_called_value_12);

   coroutine_heap->exception_lineno = 280;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 280;
  tmp_expression_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_18);
  Py_DECREF(tmp_called_value_12);
  Py_DECREF(tmp_args_element_value_18);
  if (tmp_expression_value_55 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 280;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_54 = ASYNC_AWAIT(tstate, tmp_expression_value_55, await_normal);
  Py_DECREF(tmp_expression_value_55);
  if (tmp_expression_value_54 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 280;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_55, sizeof(PyObject *), &tmp_called_value_12, sizeof(PyObject *), &tmp_expression_value_56, sizeof(PyObject *), &tmp_args_element_value_18, sizeof(PyObject *), &tmp_expression_value_57, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 11;
  coroutine->m_yield_from = tmp_expression_value_54;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_11:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_55, sizeof(PyObject *), &tmp_called_value_12, sizeof(PyObject *), &tmp_expression_value_56, sizeof(PyObject *), &tmp_args_element_value_18, sizeof(PyObject *), &tmp_expression_value_57, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 280;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_await_result_8 = yield_return_value;
  Py_DECREF(tmp_await_result_8);
 }
 goto loop_start_1;
 goto branch_end_16;
 branch_no_16:;
 {
  nuitka_bool tmp_condition_result_17;
  int tmp_and_left_truth_3;
  nuitka_bool tmp_and_left_value_3;
  nuitka_bool tmp_and_right_value_3;
  PyObject *tmp_cmp_expr_left_13;
  PyObject *tmp_cmp_expr_right_13;
  PyObject *tmp_expression_value_58;
  PyObject *tmp_expression_value_59;
  PyObject *tmp_expression_value_60;
  PyObject *tmp_attribute_value_5;
  int tmp_truth_name_5;
  if (coroutine_heap->var_msg == NULL) {

   FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 282;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_58 = coroutine_heap->var_msg;
  tmp_cmp_expr_left_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[75]);
  if (tmp_cmp_expr_left_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 282;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_expression_value_59 == NULL)) {
      tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_expression_value_59 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_13);

   coroutine_heap->exception_lineno = 282;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[93]);
  if (tmp_cmp_expr_right_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_13);

   coroutine_heap->exception_lineno = 282;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
  Py_DECREF(tmp_cmp_expr_left_13);
  Py_DECREF(tmp_cmp_expr_right_13);
  if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 282;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
  if (tmp_and_left_truth_3 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 282;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  if (tmp_and_left_truth_3 == 1) {
      goto and_right_3;
  } else {
      goto and_left_3;
  }
  and_right_3:;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 282;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_60 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_attribute_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[12]);
  if (tmp_attribute_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 282;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_truth_name_5 = CHECK_IF_TRUE(tmp_attribute_value_5);
  if (tmp_truth_name_5 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_attribute_value_5);

   coroutine_heap->exception_lineno = 282;
   coroutine_heap->type_description_1 = "ccooo";
      goto frame_exception_exit_1;
  }
  tmp_and_right_value_3 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  Py_DECREF(tmp_attribute_value_5);
  tmp_condition_result_17 = tmp_and_right_value_3;
  goto and_end_3;
  and_left_3:;
  tmp_condition_result_17 = tmp_and_left_value_3;
  and_end_3:;
  if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
      goto branch_yes_17;
  } else {
      goto branch_no_17;
  }
 }
 branch_yes_17:;
 goto loop_start_1;
 branch_no_17:;
 branch_end_16:;
 branch_end_15:;
 branch_end_13:;
 if (coroutine_heap->var_msg == NULL) {

  FORMAT_UNBOUND_LOCAL_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[74]);
  coroutine_heap->exception_tb = NULL;
  NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
  CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

  coroutine_heap->exception_lineno = 285;
  coroutine_heap->type_description_1 = "ccooo";
     goto frame_exception_exit_1;
 }

 coroutine_heap->tmp_return_value = coroutine_heap->var_msg;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto frame_return_exit_1;
 if (CONSIDER_THREADING(tstate) == false) {
     assert(HAS_ERROR_OCCURRED(tstate));

     FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


  coroutine_heap->exception_lineno = 230;
  coroutine_heap->type_description_1 = "ccooo";
     goto frame_exception_exit_1;
 }
 goto loop_start_1;

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
      coroutine->m_closure[1],
      coroutine_heap->var_msg,
      coroutine_heap->var_waiter,
      coroutine_heap->var_exc
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
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 Py_XDECREF(coroutine_heap->var_msg);
 coroutine_heap->var_msg = NULL;
 Py_XDECREF(coroutine_heap->var_waiter);
 coroutine_heap->var_waiter = NULL;
 goto function_return_exit;
 // Exception handler code:
 try_except_handler_1:;
 coroutine_heap->exception_keeper_type_11 = coroutine_heap->exception_type;
 coroutine_heap->exception_keeper_value_11 = coroutine_heap->exception_value;
 coroutine_heap->exception_keeper_tb_11 = coroutine_heap->exception_tb;
 coroutine_heap->exception_keeper_lineno_11 = coroutine_heap->exception_lineno;
 coroutine_heap->exception_type = NULL;
 coroutine_heap->exception_value = NULL;
 coroutine_heap->exception_tb = NULL;
 coroutine_heap->exception_lineno = 0;

 Py_XDECREF(coroutine_heap->var_msg);
 coroutine_heap->var_msg = NULL;
 Py_XDECREF(coroutine_heap->var_waiter);
 coroutine_heap->var_waiter = NULL;
 // Re-raise.
 coroutine_heap->exception_type = coroutine_heap->exception_keeper_type_11;
 coroutine_heap->exception_value = coroutine_heap->exception_keeper_value_11;
 coroutine_heap->exception_tb = coroutine_heap->exception_keeper_tb_11;
 coroutine_heap->exception_lineno = coroutine_heap->exception_keeper_lineno_11;

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

static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__19_receive$$$coroutine__1_receive(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$client_ws$$$function__19_receive$$$coroutine__1_receive_context,
        module_aiohttp$client_ws,
        mod_consts[94],
        mod_consts[95],
        codeobj_3ef9e2d2e0f6b9f1f48fe3ce5b9e1451,
        closure,
        2,
#if 1
        sizeof(struct aiohttp$client_ws$$$function__19_receive$$$coroutine__1_receive_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$client_ws$$$function__20_receive_str(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[1]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[2];

  tmp_closure_1[0] = par_self;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_timeout;
  Py_INCREF(tmp_closure_1[1]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$client_ws$$$function__20_receive_str$$$coroutine__1_receive_str(tstate, tmp_closure_1);

  goto function_return_exit;
 }

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_timeout);
 Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$client_ws$$$function__20_receive_str$$$coroutine__1_receive_str_locals {
 PyObject *var_msg;
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
};
#endif

static PyObject *aiohttp$client_ws$$$function__20_receive_str$$$coroutine__1_receive_str_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$client_ws$$$function__20_receive_str$$$coroutine__1_receive_str_locals *coroutine_heap = (struct aiohttp$client_ws$$$function__20_receive_str$$$coroutine__1_receive_str_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 coroutine_heap->var_msg = NULL;
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_074812b66a1af475f9455dc2d721d173, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_args_element_value_1;
  coroutine->m_frame->m_frame.f_lineno = 288;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 288;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[94]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 288;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 288;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  coroutine->m_frame->m_frame.f_lineno = 288;
  tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 288;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
  Py_DECREF(tmp_expression_value_2);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 288;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_1;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 288;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_1 = yield_return_value;
  assert(coroutine_heap->var_msg == NULL);
  coroutine_heap->var_msg = tmp_assign_source_1;
 }
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(coroutine_heap->var_msg);
  tmp_expression_value_4 = coroutine_heap->var_msg;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[75]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 289;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_expression_value_5 == NULL)) {
      tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_expression_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_1);

   coroutine_heap->exception_lineno = 289;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[96]);
  if (tmp_cmp_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_1);

   coroutine_heap->exception_lineno = 289;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  Py_DECREF(tmp_cmp_expr_left_1);
  Py_DECREF(tmp_cmp_expr_right_1);
  if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 289;
   coroutine_heap->type_description_1 = "cco";
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
  PyObject *tmp_raise_type_1;
  PyObject *tmp_make_exception_arg_1;
  PyObject *tmp_string_concat_values_1;
  PyObject *tmp_tuple_element_1;
  tmp_tuple_element_1 = mod_consts[97];
  tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
  {
   PyObject *tmp_format_value_1;
   PyObject *tmp_expression_value_6;
   PyObject *tmp_format_spec_1;
   PyObject *tmp_format_value_2;
   PyObject *tmp_operand_value_1;
   PyObject *tmp_expression_value_7;
   PyObject *tmp_format_spec_2;
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
   CHECK_OBJECT(coroutine_heap->var_msg);
   tmp_expression_value_6 = coroutine_heap->var_msg;
   tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[75]);
   if (tmp_format_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 290;
    coroutine_heap->type_description_1 = "cco";
       goto tuple_build_exception_1;
   }
   tmp_format_spec_1 = mod_consts[98];
   tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
   Py_DECREF(tmp_format_value_1);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 290;
    coroutine_heap->type_description_1 = "cco";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
   tmp_tuple_element_1 = mod_consts[99];
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
   CHECK_OBJECT(coroutine_heap->var_msg);
   tmp_expression_value_7 = coroutine_heap->var_msg;
   tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[48]);
   if (tmp_operand_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 290;
    coroutine_heap->type_description_1 = "cco";
       goto tuple_build_exception_1;
   }
   tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
   Py_DECREF(tmp_operand_value_1);
   if (tmp_format_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 290;
    coroutine_heap->type_description_1 = "cco";
       goto tuple_build_exception_1;
   }
   tmp_format_spec_2 = mod_consts[98];
   tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
   Py_DECREF(tmp_format_value_2);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 290;
    coroutine_heap->type_description_1 = "cco";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
   tmp_tuple_element_1 = mod_consts[100];
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_string_concat_values_1);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[98], tmp_string_concat_values_1);
  Py_DECREF(tmp_string_concat_values_1);
  if (tmp_make_exception_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 290;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 290;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
  Py_DECREF(tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  coroutine_heap->exception_type = tmp_raise_type_1;
  coroutine_heap->exception_lineno = 290;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
  coroutine_heap->type_description_1 = "cco";
  goto frame_exception_exit_1;
 }
 branch_no_1:;
 {
  PyObject *tmp_called_value_2;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_expression_value_8;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[101]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 291;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_2 = (PyObject *)&PyUnicode_Type;
  CHECK_OBJECT(coroutine_heap->var_msg);
  tmp_expression_value_8 = coroutine_heap->var_msg;
  tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[48]);
  if (tmp_args_element_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 291;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 291;
  {
      PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
      coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
  }

  Py_DECREF(tmp_args_element_value_3);
  if (coroutine_heap->tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 291;
   coroutine_heap->type_description_1 = "cco";
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
      coroutine->m_closure[1],
      coroutine_heap->var_msg
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
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(coroutine_heap->var_msg);
 Py_DECREF(coroutine_heap->var_msg);
 coroutine_heap->var_msg = NULL;
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

 Py_XDECREF(coroutine_heap->var_msg);
 coroutine_heap->var_msg = NULL;
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

static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__20_receive_str$$$coroutine__1_receive_str(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$client_ws$$$function__20_receive_str$$$coroutine__1_receive_str_context,
        module_aiohttp$client_ws,
        mod_consts[102],
        mod_consts[103],
        codeobj_074812b66a1af475f9455dc2d721d173,
        closure,
        2,
#if 1
        sizeof(struct aiohttp$client_ws$$$function__20_receive_str$$$coroutine__1_receive_str_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$client_ws$$$function__21_receive_bytes(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[1]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[2];

  tmp_closure_1[0] = par_self;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_timeout;
  Py_INCREF(tmp_closure_1[1]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$client_ws$$$function__21_receive_bytes$$$coroutine__1_receive_bytes(tstate, tmp_closure_1);

  goto function_return_exit;
 }

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_timeout);
 Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$client_ws$$$function__21_receive_bytes$$$coroutine__1_receive_bytes_locals {
 PyObject *var_msg;
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
};
#endif

static PyObject *aiohttp$client_ws$$$function__21_receive_bytes$$$coroutine__1_receive_bytes_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$client_ws$$$function__21_receive_bytes$$$coroutine__1_receive_bytes_locals *coroutine_heap = (struct aiohttp$client_ws$$$function__21_receive_bytes$$$coroutine__1_receive_bytes_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 coroutine_heap->var_msg = NULL;
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_0e7bd60064fbcc1e217a805404eac5e5, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_args_element_value_1;
  coroutine->m_frame->m_frame.f_lineno = 294;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 294;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[94]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 294;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 294;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }

  tmp_args_element_value_1 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  coroutine->m_frame->m_frame.f_lineno = 294;
  tmp_expression_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  Py_DECREF(tmp_called_value_1);
  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 294;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
  Py_DECREF(tmp_expression_value_2);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 294;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_1;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 294;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_1 = yield_return_value;
  assert(coroutine_heap->var_msg == NULL);
  coroutine_heap->var_msg = tmp_assign_source_1;
 }
 {
  nuitka_bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_4;
  PyObject *tmp_expression_value_5;
  CHECK_OBJECT(coroutine_heap->var_msg);
  tmp_expression_value_4 = coroutine_heap->var_msg;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[75]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 295;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_expression_value_5 == NULL)) {
      tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_expression_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_1);

   coroutine_heap->exception_lineno = 295;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[104]);
  if (tmp_cmp_expr_right_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_1);

   coroutine_heap->exception_lineno = 295;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
  Py_DECREF(tmp_cmp_expr_left_1);
  Py_DECREF(tmp_cmp_expr_right_1);
  if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 295;
   coroutine_heap->type_description_1 = "cco";
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
  PyObject *tmp_raise_type_1;
  PyObject *tmp_make_exception_arg_1;
  PyObject *tmp_string_concat_values_1;
  PyObject *tmp_tuple_element_1;
  tmp_tuple_element_1 = mod_consts[97];
  tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 5);
  {
   PyObject *tmp_format_value_1;
   PyObject *tmp_expression_value_6;
   PyObject *tmp_format_spec_1;
   PyObject *tmp_format_value_2;
   PyObject *tmp_operand_value_1;
   PyObject *tmp_expression_value_7;
   PyObject *tmp_format_spec_2;
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
   CHECK_OBJECT(coroutine_heap->var_msg);
   tmp_expression_value_6 = coroutine_heap->var_msg;
   tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[75]);
   if (tmp_format_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 296;
    coroutine_heap->type_description_1 = "cco";
       goto tuple_build_exception_1;
   }
   tmp_format_spec_1 = mod_consts[98];
   tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
   Py_DECREF(tmp_format_value_1);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 296;
    coroutine_heap->type_description_1 = "cco";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
   tmp_tuple_element_1 = mod_consts[99];
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
   CHECK_OBJECT(coroutine_heap->var_msg);
   tmp_expression_value_7 = coroutine_heap->var_msg;
   tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[48]);
   if (tmp_operand_value_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 296;
    coroutine_heap->type_description_1 = "cco";
       goto tuple_build_exception_1;
   }
   tmp_format_value_2 = UNARY_OPERATION(PyObject_Repr, tmp_operand_value_1);
   Py_DECREF(tmp_operand_value_1);
   if (tmp_format_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 296;
    coroutine_heap->type_description_1 = "cco";
       goto tuple_build_exception_1;
   }
   tmp_format_spec_2 = mod_consts[98];
   tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
   Py_DECREF(tmp_format_value_2);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 296;
    coroutine_heap->type_description_1 = "cco";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
   tmp_tuple_element_1 = mod_consts[105];
   PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_string_concat_values_1);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[98], tmp_string_concat_values_1);
  Py_DECREF(tmp_string_concat_values_1);
  if (tmp_make_exception_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 296;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 296;
  tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
  Py_DECREF(tmp_make_exception_arg_1);
  assert(!(tmp_raise_type_1 == NULL));
  coroutine_heap->exception_type = tmp_raise_type_1;
  coroutine_heap->exception_lineno = 296;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
  coroutine_heap->type_description_1 = "cco";
  goto frame_exception_exit_1;
 }
 branch_no_1:;
 {
  PyObject *tmp_called_value_2;
  PyObject *tmp_args_element_value_2;
  PyObject *tmp_args_element_value_3;
  PyObject *tmp_expression_value_8;
  tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[101]);

  if (unlikely(tmp_called_value_2 == NULL)) {
      tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
  }

  if (tmp_called_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 297;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  tmp_args_element_value_2 = (PyObject *)&PyBytes_Type;
  CHECK_OBJECT(coroutine_heap->var_msg);
  tmp_expression_value_8 = coroutine_heap->var_msg;
  tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[48]);
  if (tmp_args_element_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 297;
   coroutine_heap->type_description_1 = "cco";
      goto frame_exception_exit_1;
  }
  coroutine->m_frame->m_frame.f_lineno = 297;
  {
      PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
      coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
  }

  Py_DECREF(tmp_args_element_value_3);
  if (coroutine_heap->tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 297;
   coroutine_heap->type_description_1 = "cco";
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
      coroutine->m_closure[1],
      coroutine_heap->var_msg
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
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(coroutine_heap->var_msg);
 Py_DECREF(coroutine_heap->var_msg);
 coroutine_heap->var_msg = NULL;
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

 Py_XDECREF(coroutine_heap->var_msg);
 coroutine_heap->var_msg = NULL;
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

static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__21_receive_bytes$$$coroutine__1_receive_bytes(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$client_ws$$$function__21_receive_bytes$$$coroutine__1_receive_bytes_context,
        module_aiohttp$client_ws,
        mod_consts[106],
        mod_consts[107],
        codeobj_0e7bd60064fbcc1e217a805404eac5e5,
        closure,
        2,
#if 1
        sizeof(struct aiohttp$client_ws$$$function__21_receive_bytes$$$coroutine__1_receive_bytes_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$client_ws$$$function__22_receive_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
 struct Nuitka_CellObject *par_loads = Nuitka_Cell_New1(python_pars[1]);
 struct Nuitka_CellObject *par_timeout = Nuitka_Cell_New1(python_pars[2]);
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 {
  struct Nuitka_CellObject *tmp_closure_1[3];

  tmp_closure_1[0] = par_loads;
  Py_INCREF(tmp_closure_1[0]);
  tmp_closure_1[1] = par_self;
  Py_INCREF(tmp_closure_1[1]);
  tmp_closure_1[2] = par_timeout;
  Py_INCREF(tmp_closure_1[2]);

  tmp_return_value = MAKE_COROUTINE_aiohttp$client_ws$$$function__22_receive_json$$$coroutine__1_receive_json(tstate, tmp_closure_1);

  goto function_return_exit;
 }

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_loads);
 Py_DECREF(par_loads);
 CHECK_OBJECT(par_timeout);
 Py_DECREF(par_timeout);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$client_ws$$$function__22_receive_json$$$coroutine__1_receive_json_locals {
 PyObject *var_data;
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
};
#endif

static PyObject *aiohttp$client_ws$$$function__22_receive_json$$$coroutine__1_receive_json_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$client_ws$$$function__22_receive_json$$$coroutine__1_receive_json_locals *coroutine_heap = (struct aiohttp$client_ws$$$function__22_receive_json$$$coroutine__1_receive_json_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 coroutine_heap->var_data = NULL;
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_a36569d95727bd1dd71facd25476600a, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_kw_call_value_0_1;
  coroutine->m_frame->m_frame.f_lineno = 305;
  if (Nuitka_Cell_GET(coroutine->m_closure[1]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 305;
   coroutine_heap->type_description_1 = "ccco";
      goto frame_exception_exit_1;
  }

  tmp_expression_value_3 = Nuitka_Cell_GET(coroutine->m_closure[1]);
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[102]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 305;
   coroutine_heap->type_description_1 = "ccco";
      goto frame_exception_exit_1;
  }
  if (Nuitka_Cell_GET(coroutine->m_closure[2]) == NULL) {
   Py_DECREF(tmp_called_value_1);
   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[69]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 305;
   coroutine_heap->type_description_1 = "ccco";
      goto frame_exception_exit_1;
  }

  tmp_kw_call_value_0_1 = Nuitka_Cell_GET(coroutine->m_closure[2]);
  coroutine->m_frame->m_frame.f_lineno = 305;
  {
      PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

      tmp_expression_value_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[108]);
  }

  Py_DECREF(tmp_called_value_1);
  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 305;
   coroutine_heap->type_description_1 = "ccco";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
  Py_DECREF(tmp_expression_value_2);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 305;
   coroutine_heap->type_description_1 = "ccco";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_1;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_kw_call_value_0_1, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 305;
   coroutine_heap->type_description_1 = "ccco";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_1 = yield_return_value;
  assert(coroutine_heap->var_data == NULL);
  coroutine_heap->var_data = tmp_assign_source_1;
 }
 {
  PyObject *tmp_called_value_2;
  PyObject *tmp_args_element_value_1;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[109]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 306;
   coroutine_heap->type_description_1 = "ccco";
      goto frame_exception_exit_1;
  }

  tmp_called_value_2 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  CHECK_OBJECT(coroutine_heap->var_data);
  tmp_args_element_value_1 = coroutine_heap->var_data;
  coroutine->m_frame->m_frame.f_lineno = 306;
  coroutine_heap->tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
  if (coroutine_heap->tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 306;
   coroutine_heap->type_description_1 = "ccco";
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
      coroutine->m_closure[1],
      coroutine->m_closure[0],
      coroutine->m_closure[2],
      coroutine_heap->var_data
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
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(coroutine_heap->var_data);
 Py_DECREF(coroutine_heap->var_data);
 coroutine_heap->var_data = NULL;
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

 Py_XDECREF(coroutine_heap->var_data);
 coroutine_heap->var_data = NULL;
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

static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__22_receive_json$$$coroutine__1_receive_json(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$client_ws$$$function__22_receive_json$$$coroutine__1_receive_json_context,
        module_aiohttp$client_ws,
        mod_consts[110],
        mod_consts[111],
        codeobj_a36569d95727bd1dd71facd25476600a,
        closure,
        3,
#if 1
        sizeof(struct aiohttp$client_ws$$$function__22_receive_json$$$coroutine__1_receive_json_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$client_ws$$$function__23___aiter__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 CHECK_OBJECT(par_self);
 tmp_return_value = par_self;
 Py_INCREF(tmp_return_value);
 goto function_return_exit;

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


static PyObject *impl_aiohttp$client_ws$$$function__24___anext__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
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

  tmp_return_value = MAKE_COROUTINE_aiohttp$client_ws$$$function__24___anext__$$$coroutine__1___anext__(tstate, tmp_closure_1);

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
struct aiohttp$client_ws$$$function__24___anext__$$$coroutine__1___anext___locals {
 PyObject *var_msg;
 char const *type_description_1;
 PyObject *exception_type;
 PyObject *exception_value;
 PyTracebackObject *exception_tb;
 int exception_lineno;
 char yield_tmps[1024];
 int tmp_res;
 PyObject *tmp_return_value;
 PyObject *exception_keeper_type_1;
 PyObject *exception_keeper_value_1;
 PyTracebackObject *exception_keeper_tb_1;
 int exception_keeper_lineno_1;
};
#endif

static PyObject *aiohttp$client_ws$$$function__24___anext__$$$coroutine__1___anext___context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$client_ws$$$function__24___anext__$$$coroutine__1___anext___locals *coroutine_heap = (struct aiohttp$client_ws$$$function__24___anext__$$$coroutine__1___anext___locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
 switch(coroutine->m_yield_return_index) {
 case 1: goto yield_return_1;
 }

    // Local variable initialization
 static struct Nuitka_FrameObject *cache_m_frame = NULL;
 coroutine_heap->var_msg = NULL;
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
     cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_d63d6fd2e2b2e2852ba3a8630b7d5a48, module_aiohttp$client_ws, sizeof(void *)+sizeof(void *));
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
  PyObject *tmp_assign_source_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_expression_value_2;
  PyObject *tmp_called_instance_1;
  coroutine->m_frame->m_frame.f_lineno = 312;
  if (Nuitka_Cell_GET(coroutine->m_closure[0]) == NULL) {

   FORMAT_UNBOUND_CLOSURE_ERROR(&coroutine_heap->exception_type, &coroutine_heap->exception_value, mod_consts[43]);
   coroutine_heap->exception_tb = NULL;
   NORMALIZE_EXCEPTION(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   CHAIN_EXCEPTION(tstate, coroutine_heap->exception_value);

   coroutine_heap->exception_lineno = 312;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }

  tmp_called_instance_1 = Nuitka_Cell_GET(coroutine->m_closure[0]);
  coroutine->m_frame->m_frame.f_lineno = 312;
  tmp_expression_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[94]);
  if (tmp_expression_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 312;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_1 = ASYNC_AWAIT(tstate, tmp_expression_value_2, await_normal);
  Py_DECREF(tmp_expression_value_2);
  if (tmp_expression_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 312;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  Nuitka_PreserveHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
  coroutine->m_yield_return_index = 1;
  coroutine->m_yield_from = tmp_expression_value_1;
  coroutine->m_awaiting = true;
  return NULL;

  yield_return_1:
  Nuitka_RestoreHeap(coroutine_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
  coroutine->m_awaiting = false;

  if (yield_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 312;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_assign_source_1 = yield_return_value;
  assert(coroutine_heap->var_msg == NULL);
  coroutine_heap->var_msg = tmp_assign_source_1;
 }
 {
  bool tmp_condition_result_1;
  PyObject *tmp_cmp_expr_left_1;
  PyObject *tmp_cmp_expr_right_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_tuple_element_1;
  PyObject *tmp_expression_value_4;
  CHECK_OBJECT(coroutine_heap->var_msg);
  tmp_expression_value_3 = coroutine_heap->var_msg;
  tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[75]);
  if (tmp_cmp_expr_left_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 313;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

  if (unlikely(tmp_expression_value_4 == NULL)) {
      tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
  }

  if (tmp_expression_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_1);

   coroutine_heap->exception_lineno = 313;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[77]);
  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
   Py_DECREF(tmp_cmp_expr_left_1);

   coroutine_heap->exception_lineno = 313;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_cmp_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 3);
  {
   PyObject *tmp_expression_value_5;
   PyObject *tmp_expression_value_6;
   PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 0, tmp_tuple_element_1);
   tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

   if (unlikely(tmp_expression_value_5 == NULL)) {
       tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
   }

   if (tmp_expression_value_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 313;
    coroutine_heap->type_description_1 = "co";
       goto tuple_build_exception_1;
   }
   tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[91]);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 313;
    coroutine_heap->type_description_1 = "co";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 1, tmp_tuple_element_1);
   tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76]);

   if (unlikely(tmp_expression_value_6 == NULL)) {
       tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
   }

   if (tmp_expression_value_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 313;
    coroutine_heap->type_description_1 = "co";
       goto tuple_build_exception_1;
   }
   tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[86]);
   if (tmp_tuple_element_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


    coroutine_heap->exception_lineno = 313;
    coroutine_heap->type_description_1 = "co";
       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_cmp_expr_right_1, 2, tmp_tuple_element_1);
  }
  goto tuple_build_noexception_1;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_1:;
  Py_DECREF(tmp_cmp_expr_left_1);
  Py_DECREF(tmp_cmp_expr_right_1);
  goto frame_exception_exit_1;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_1:;
  coroutine_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
  Py_DECREF(tmp_cmp_expr_left_1);
  Py_DECREF(tmp_cmp_expr_right_1);
  if (coroutine_heap->tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);


   coroutine_heap->exception_lineno = 313;
   coroutine_heap->type_description_1 = "co";
      goto frame_exception_exit_1;
  }
  tmp_condition_result_1 = (coroutine_heap->tmp_res == 1) ? true : false;
  if (tmp_condition_result_1 != false) {
      goto branch_yes_1;
  } else {
      goto branch_no_1;
  }
 }
 branch_yes_1:;
 {
  PyObject *tmp_raise_type_1;
  tmp_raise_type_1 = PyExc_StopAsyncIteration;
  coroutine_heap->exception_type = tmp_raise_type_1;
  Py_INCREF(tmp_raise_type_1);
  coroutine_heap->exception_lineno = 314;
  RAISE_EXCEPTION_WITH_TYPE(tstate, &coroutine_heap->exception_type, &coroutine_heap->exception_value, &coroutine_heap->exception_tb);
  coroutine_heap->type_description_1 = "co";
  goto frame_exception_exit_1;
 }
 branch_no_1:;

 // Release exception attached to the frame
 DROP_COROUTINE_EXCEPTION(coroutine);



 goto frame_no_exception_1;
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
      coroutine_heap->var_msg
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
 CHECK_OBJECT(coroutine_heap->var_msg);
 coroutine_heap->tmp_return_value = coroutine_heap->var_msg;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto try_return_handler_1;
 NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
 return NULL;
 // Return handler code:
 try_return_handler_1:;
 CHECK_OBJECT(coroutine_heap->var_msg);
 Py_DECREF(coroutine_heap->var_msg);
 coroutine_heap->var_msg = NULL;
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

 Py_XDECREF(coroutine_heap->var_msg);
 coroutine_heap->var_msg = NULL;
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

static PyObject *MAKE_COROUTINE_aiohttp$client_ws$$$function__24___anext__$$$coroutine__1___anext__(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$client_ws$$$function__24___anext__$$$coroutine__1___anext___context,
        module_aiohttp$client_ws,
        mod_consts[112],
        mod_consts[113],
        codeobj_d63d6fd2e2b2e2852ba3a8630b7d5a48,
        closure,
        1,
#if 1
        sizeof(struct aiohttp$client_ws$$$function__24___anext__$$$coroutine__1___anext___locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__10_client_notakeover(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__10_client_notakeover,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_316059c2ee2a68ae3c2d303cd0688269,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__11_get_extra_info(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__11_get_extra_info,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[183],
#endif
        codeobj_b104518cfb0fac5c96e5b3495ffde9d8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        mod_consts[42],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__12_exception(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__12_exception,
        mod_consts[184],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_adb505d2da6fa5a00c07cd9be6561b49,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__13_ping(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__13_ping,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[45],
#endif
        codeobj_106bfef1e0d82b56867471d8947924ac,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__14_pong(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__14_pong,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        mod_consts[47],
#endif
        codeobj_724f0768c36cd89922fe10e7c8033dc8,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__15_send_str(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__15_send_str,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_3b6e3568b61e34d91e6f43a24c346338,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__16_send_bytes(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__16_send_bytes,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        mod_consts[58],
#endif
        codeobj_3e5804e4842183cbc88acd943c353785,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__17_send_json(PyObject *defaults, PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__17_send_json,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        mod_consts[62],
#endif
        codeobj_015cf1d1c464c5ece04592549cedf14c,
        defaults,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__18_close(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__18_close,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_cde7d06babcc68aa1229a41014a785d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__19_receive(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__19_receive,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_3ef9e2d2e0f6b9f1f48fe3ce5b9e1451,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__1___init__(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__1___init__,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_c74c933524b9607d587ba846ec0f51c2,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__20_receive_str(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__20_receive_str,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_074812b66a1af475f9455dc2d721d173,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__21_receive_bytes(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__21_receive_bytes,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[107],
#endif
        codeobj_0e7bd60064fbcc1e217a805404eac5e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__22_receive_json(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__22_receive_json,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        mod_consts[111],
#endif
        codeobj_a36569d95727bd1dd71facd25476600a,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__23___aiter__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__23___aiter__,
        mod_consts[192],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_2cb9f6540a48db8a61729a38d2377f6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__24___anext__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__24___anext__,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_d63d6fd2e2b2e2852ba3a8630b7d5a48,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__2__cancel_heartbeat(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__2__cancel_heartbeat,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[167],
#endif
        codeobj_285c192a11db2cdf86c0e74bb6c054e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__3__reset_heartbeat(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__3__reset_heartbeat,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_587ec8bf350ca58227e762c26dc63056,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__4__send_heartbeat(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__4__send_heartbeat,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        mod_consts[169],
#endif
        codeobj_d1f55eeda1fa9e3721e9d10289cbdb7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__5__pong_not_received(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__5__pong_not_received,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_b4db00200dfdf867f7115d8559575165,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__6_closed(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__6_closed,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_9a50ce01b0c879a90fee26e42f80734b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__7_close_code(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__7_close_code,
        mod_consts[174],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_53a63ce382413c33a26035c04b2e95b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__8_protocol(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__8_protocol,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_9246ab0ba9bc855c66074ca21d4f5336,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$client_ws$$$function__9_compress(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$client_ws$$$function__9_compress,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_6e694254516375b8f0d08a42c0749207,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$client_ws,
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

static function_impl_code const function_table_aiohttp$client_ws[] = {
 impl_aiohttp$client_ws$$$function__1___init__,
 impl_aiohttp$client_ws$$$function__2__cancel_heartbeat,
 impl_aiohttp$client_ws$$$function__3__reset_heartbeat,
 impl_aiohttp$client_ws$$$function__4__send_heartbeat,
 impl_aiohttp$client_ws$$$function__5__pong_not_received,
 impl_aiohttp$client_ws$$$function__6_closed,
 impl_aiohttp$client_ws$$$function__7_close_code,
 impl_aiohttp$client_ws$$$function__8_protocol,
 impl_aiohttp$client_ws$$$function__9_compress,
 impl_aiohttp$client_ws$$$function__10_client_notakeover,
 impl_aiohttp$client_ws$$$function__11_get_extra_info,
 impl_aiohttp$client_ws$$$function__12_exception,
 impl_aiohttp$client_ws$$$function__13_ping,
 impl_aiohttp$client_ws$$$function__14_pong,
 impl_aiohttp$client_ws$$$function__15_send_str,
 impl_aiohttp$client_ws$$$function__16_send_bytes,
 impl_aiohttp$client_ws$$$function__17_send_json,
 impl_aiohttp$client_ws$$$function__18_close,
 impl_aiohttp$client_ws$$$function__19_receive,
 impl_aiohttp$client_ws$$$function__20_receive_str,
 impl_aiohttp$client_ws$$$function__21_receive_bytes,
 impl_aiohttp$client_ws$$$function__22_receive_json,
 impl_aiohttp$client_ws$$$function__23___aiter__,
 impl_aiohttp$client_ws$$$function__24___anext__,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_aiohttp$client_ws);

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
        module_aiohttp$client_ws,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_aiohttp$client_ws,
        sizeof(function_table_aiohttp$client_ws) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiohttp$client_ws(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiohttp$client_ws");

    // Store the module for future use.
    module_aiohttp$client_ws = module;

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
        PRINT_STRING("aiohttp$client_ws: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("aiohttp$client_ws: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.client_ws" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initaiohttp$client_ws\n");

    moduledict_aiohttp$client_ws = MODULE_DICT(module_aiohttp$client_ws);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiohttp$client_ws,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiohttp$client_ws,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[98]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiohttp$client_ws,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$client_ws,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$client_ws,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiohttp$client_ws);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_aiohttp$client_ws);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
 PyObject *tmp_import_from_4__module = NULL;
 PyObject *tmp_import_from_5__module = NULL;
 struct Nuitka_FrameObject *frame_46f947833674cfb4be795fc22f987f03;
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
 PyObject *locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33 = NULL;
 PyObject *tmp_dictset_value;
 struct Nuitka_FrameObject *frame_59fcf74ea325bd532fe3190ff0f20ba1_2;
 NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
 int tmp_res;
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
  tmp_assign_source_1 = mod_consts[114];
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = module_filename_obj;
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_2);
 }
 frame_46f947833674cfb4be795fc22f987f03 = MAKE_MODULE_FRAME(codeobj_46f947833674cfb4be795fc22f987f03, module_aiohttp$client_ws);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_46f947833674cfb4be795fc22f987f03);
 assert(Py_REFCNT(frame_46f947833674cfb4be795fc22f987f03) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = module_filename_obj;
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[117]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[118], tmp_assattr_value_1);
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
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[117]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[119], tmp_assattr_value_2);
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
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[37];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp$client_ws;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = Py_None;
  tmp_level_value_1 = mod_consts[65];
  frame_46f947833674cfb4be795fc22f987f03->m_frame.f_lineno = 3;
  tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  tmp_assign_source_5 = IMPORT_HARD_SYS();
  assert(!(tmp_assign_source_5 == NULL));
  UPDATE_STRING_DICT0(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_5);
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
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[122],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[122]);
  }

  if (tmp_assign_source_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_7);
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
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[123],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[123]);
  }

  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_8);
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
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[101],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[101]);
  }

  if (tmp_assign_source_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_9);
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
  tmp_name_value_2 = mod_consts[124];
  tmp_globals_arg_value_2 = (PyObject *)moduledict_aiohttp$client_ws;
  tmp_locals_arg_value_2 = Py_None;
  tmp_fromlist_value_2 = mod_consts[125];
  tmp_level_value_2 = mod_consts[126];
  frame_46f947833674cfb4be795fc22f987f03->m_frame.f_lineno = 7;
  tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
  if (tmp_import_name_from_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_4)) {
      tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_4,
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[87],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[87]);
  }

  Py_DECREF(tmp_import_name_from_4);
  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 7;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_10);
 }
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_import_name_from_5;
  PyObject *tmp_name_value_3;
  PyObject *tmp_globals_arg_value_3;
  PyObject *tmp_locals_arg_value_3;
  PyObject *tmp_fromlist_value_3;
  PyObject *tmp_level_value_3;
  tmp_name_value_3 = mod_consts[127];
  tmp_globals_arg_value_3 = (PyObject *)moduledict_aiohttp$client_ws;
  tmp_locals_arg_value_3 = Py_None;
  tmp_fromlist_value_3 = mod_consts[128];
  tmp_level_value_3 = mod_consts[126];
  frame_46f947833674cfb4be795fc22f987f03->m_frame.f_lineno = 8;
  tmp_import_name_from_5 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
  if (tmp_import_name_from_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_5)) {
      tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_5,
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[129],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[129]);
  }

  Py_DECREF(tmp_import_name_from_5);
  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 8;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_11);
 }
 {
  PyObject *tmp_assign_source_12;
  PyObject *tmp_name_value_4;
  PyObject *tmp_globals_arg_value_4;
  PyObject *tmp_locals_arg_value_4;
  PyObject *tmp_fromlist_value_4;
  PyObject *tmp_level_value_4;
  tmp_name_value_4 = mod_consts[130];
  tmp_globals_arg_value_4 = (PyObject *)moduledict_aiohttp$client_ws;
  tmp_locals_arg_value_4 = Py_None;
  tmp_fromlist_value_4 = mod_consts[131];
  tmp_level_value_4 = mod_consts[126];
  frame_46f947833674cfb4be795fc22f987f03->m_frame.f_lineno = 9;
  tmp_assign_source_12 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
  if (tmp_assign_source_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 9;

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
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[26],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[26]);
  }

  if (tmp_assign_source_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 9;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_13);
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
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[82],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[82]);
  }

  if (tmp_assign_source_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 9;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_14);
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
  PyObject *tmp_name_value_5;
  PyObject *tmp_globals_arg_value_5;
  PyObject *tmp_locals_arg_value_5;
  PyObject *tmp_fromlist_value_5;
  PyObject *tmp_level_value_5;
  tmp_name_value_5 = mod_consts[132];
  tmp_globals_arg_value_5 = (PyObject *)moduledict_aiohttp$client_ws;
  tmp_locals_arg_value_5 = Py_None;
  tmp_fromlist_value_5 = mod_consts[133];
  tmp_level_value_5 = mod_consts[126];
  frame_46f947833674cfb4be795fc22f987f03->m_frame.f_lineno = 10;
  tmp_assign_source_15 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
  if (tmp_assign_source_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

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
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[80],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[80]);
  }

  if (tmp_assign_source_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_16);
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
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[64],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[64]);
  }

  if (tmp_assign_source_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_17);
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
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[88],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[88]);
  }

  if (tmp_assign_source_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_18);
 }
 {
  PyObject *tmp_assign_source_19;
  PyObject *tmp_import_name_from_11;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_11 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_11)) {
      tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_11,
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[35],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[35]);
  }

  if (tmp_assign_source_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_19);
 }
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_import_name_from_12;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_12 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_12)) {
      tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_12,
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[85],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[85]);
  }

  if (tmp_assign_source_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_20);
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
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[76],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[76]);
  }

  if (tmp_assign_source_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 10;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_21);
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
  PyObject *tmp_assign_source_22;
  PyObject *tmp_import_name_from_14;
  PyObject *tmp_name_value_6;
  PyObject *tmp_globals_arg_value_6;
  PyObject *tmp_locals_arg_value_6;
  PyObject *tmp_fromlist_value_6;
  PyObject *tmp_level_value_6;
  tmp_name_value_6 = mod_consts[134];
  tmp_globals_arg_value_6 = (PyObject *)moduledict_aiohttp$client_ws;
  tmp_locals_arg_value_6 = Py_None;
  tmp_fromlist_value_6 = mod_consts[135];
  tmp_level_value_6 = mod_consts[126];
  frame_46f947833674cfb4be795fc22f987f03->m_frame.f_lineno = 18;
  tmp_import_name_from_14 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
  if (tmp_import_name_from_14 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 18;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_14)) {
      tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_14,
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[136],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[136]);
  }

  Py_DECREF(tmp_import_name_from_14);
  if (tmp_assign_source_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 18;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_22);
 }
 {
  PyObject *tmp_assign_source_23;
  PyObject *tmp_name_value_7;
  PyObject *tmp_globals_arg_value_7;
  PyObject *tmp_locals_arg_value_7;
  PyObject *tmp_fromlist_value_7;
  PyObject *tmp_level_value_7;
  tmp_name_value_7 = mod_consts[137];
  tmp_globals_arg_value_7 = (PyObject *)moduledict_aiohttp$client_ws;
  tmp_locals_arg_value_7 = Py_None;
  tmp_fromlist_value_7 = mod_consts[138];
  tmp_level_value_7 = mod_consts[126];
  frame_46f947833674cfb4be795fc22f987f03->m_frame.f_lineno = 19;
  tmp_assign_source_23 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
  if (tmp_assign_source_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 19;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_4__module == NULL);
  tmp_import_from_4__module = tmp_assign_source_23;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_24;
  PyObject *tmp_import_name_from_15;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_15 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_15)) {
      tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_15,
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[83],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[83]);
  }

  if (tmp_assign_source_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 19;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_24);
 }
 {
  PyObject *tmp_assign_source_25;
  PyObject *tmp_import_name_from_16;
  CHECK_OBJECT(tmp_import_from_4__module);
  tmp_import_name_from_16 = tmp_import_from_4__module;
  if (PyModule_Check(tmp_import_name_from_16)) {
      tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_16,
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[139],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[139]);
  }

  if (tmp_assign_source_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 19;

      goto try_except_handler_4;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_25);
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
  PyObject *tmp_assign_source_26;
  PyObject *tmp_name_value_8;
  PyObject *tmp_globals_arg_value_8;
  PyObject *tmp_locals_arg_value_8;
  PyObject *tmp_fromlist_value_8;
  PyObject *tmp_level_value_8;
  tmp_name_value_8 = mod_consts[140];
  tmp_globals_arg_value_8 = (PyObject *)moduledict_aiohttp$client_ws;
  tmp_locals_arg_value_8 = Py_None;
  tmp_fromlist_value_8 = mod_consts[141];
  tmp_level_value_8 = mod_consts[126];
  frame_46f947833674cfb4be795fc22f987f03->m_frame.f_lineno = 20;
  tmp_assign_source_26 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
  if (tmp_assign_source_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_5__module == NULL);
  tmp_import_from_5__module = tmp_assign_source_26;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_27;
  PyObject *tmp_import_name_from_17;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_17 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_17)) {
      tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_17,
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[142],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[142]);
  }

  if (tmp_assign_source_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_27);
 }
 {
  PyObject *tmp_assign_source_28;
  PyObject *tmp_import_name_from_18;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_18 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_18)) {
      tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_18,
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[143],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_28 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[143]);
  }

  if (tmp_assign_source_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_28);
 }
 {
  PyObject *tmp_assign_source_29;
  PyObject *tmp_import_name_from_19;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_19 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_19)) {
      tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_19,
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[144],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_29 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_19, mod_consts[144]);
  }

  if (tmp_assign_source_29 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_29);
 }
 {
  PyObject *tmp_assign_source_30;
  PyObject *tmp_import_name_from_20;
  CHECK_OBJECT(tmp_import_from_5__module);
  tmp_import_name_from_20 = tmp_import_from_5__module;
  if (PyModule_Check(tmp_import_name_from_20)) {
      tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_20,
          (PyObject *)moduledict_aiohttp$client_ws,
          mod_consts[145],
          mod_consts[65]
      );
  } else {
      tmp_assign_source_30 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_20, mod_consts[145]);
  }

  if (tmp_assign_source_30 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto try_except_handler_5;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_30);
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
  PyObject *tmp_assign_source_31;
  PyObject *tmp_name_value_9;
  PyObject *tmp_globals_arg_value_9;
  PyObject *tmp_locals_arg_value_9;
  PyObject *tmp_fromlist_value_9;
  PyObject *tmp_level_value_9;
  tmp_name_value_9 = mod_consts[37];
  tmp_globals_arg_value_9 = (PyObject *)moduledict_aiohttp$client_ws;
  tmp_locals_arg_value_9 = Py_None;
  tmp_fromlist_value_9 = Py_None;
  tmp_level_value_9 = mod_consts[65];
  frame_46f947833674cfb4be795fc22f987f03->m_frame.f_lineno = 28;
  tmp_assign_source_31 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
  if (tmp_assign_source_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 28;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_31);
 }
 {
  PyObject *tmp_assign_source_32;
  tmp_assign_source_32 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__class_decl_dict == NULL);
  tmp_class_creation_1__class_decl_dict = tmp_assign_source_32;
 }
 {
  PyObject *tmp_assign_source_33;
  tmp_assign_source_33 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_33;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_34;
  {
   PyObject *tmp_set_locals_1;
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_set_locals_1 = tmp_class_creation_1__prepared;
   locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33 = tmp_set_locals_1;
   Py_INCREF(tmp_set_locals_1);
  }
  tmp_dictset_value = mod_consts[146];
  tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[147], tmp_dictset_value);
  assert(!(tmp_result == false));
  tmp_dictset_value = mod_consts[148];
  tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[149], tmp_dictset_value);
  assert(!(tmp_result == false));
  // Tried code:
  // Tried code:
  frame_59fcf74ea325bd532fe3190ff0f20ba1_2 = MAKE_CLASS_FRAME(tstate, codeobj_59fcf74ea325bd532fe3190ff0f20ba1, module_aiohttp$client_ws, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_59fcf74ea325bd532fe3190ff0f20ba1_2);
  assert(Py_REFCNT(frame_59fcf74ea325bd532fe3190ff0f20ba1_2) == 2);

  // Framed code:
  {
   PyObject *tmp_kw_defaults_1;
   PyObject *tmp_annotations_1;
   PyObject *tmp_dict_key_1;
   PyObject *tmp_dict_value_1;
   tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts[150]);
   tmp_dict_key_1 = mod_consts[151];
   tmp_dict_value_1 = mod_consts[152];
   tmp_annotations_1 = _PyDict_NewPresized( 13 );
   {
    PyObject *tmp_expression_value_1;
    PyObject *tmp_subscript_value_1;
    PyObject *tmp_expression_value_2;
    PyObject *tmp_expression_value_3;
    PyObject *tmp_subscript_value_2;
    PyObject *tmp_expression_value_4;
    PyObject *tmp_subscript_value_3;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[153];
    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[136]);

    if (unlikely(tmp_dict_value_1 == NULL)) {
        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[136]);
    }

    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 37;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[154];
    tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

    if (unlikely(tmp_expression_value_1 == NULL)) {
        tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
    }

    if (tmp_expression_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 38;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_subscript_value_1 = (PyObject *)&PyUnicode_Type;
    tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 38;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[155];
    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[129]);

    if (unlikely(tmp_dict_value_1 == NULL)) {
        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[129]);
    }

    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 39;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[69];
    tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[156];
    tmp_dict_value_1 = (PyObject *)&PyBool_Type;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[157];
    tmp_dict_value_1 = (PyObject *)&PyBool_Type;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[158];
    tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[37]);

    if (unlikely(tmp_expression_value_2 == NULL)) {
        tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
    }

    if (tmp_expression_value_2 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 43;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[159]);
    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 43;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[160];
    tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

    if (unlikely(tmp_expression_value_3 == NULL)) {
        tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
    }

    if (tmp_expression_value_3 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 45;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_subscript_value_2 = (PyObject *)&PyFloat_Type;
    tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 45;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[161];
    tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

    if (unlikely(tmp_expression_value_4 == NULL)) {
        tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
    }

    if (tmp_expression_value_4 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 46;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_subscript_value_3 = (PyObject *)&PyFloat_Type;
    tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
    if (tmp_dict_value_1 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 46;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    Py_DECREF(tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[51];
    tmp_dict_value_1 = (PyObject *)&PyLong_Type;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[162];
    tmp_dict_value_1 = (PyObject *)&PyBool_Type;
    tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
    assert(!(tmp_res != 0));
    tmp_dict_key_1 = mod_consts[163];
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


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__1___init__(tmp_kw_defaults_1, tmp_annotations_1);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[164], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 34;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_2;
   tmp_annotations_2 = DICT_COPY(tstate, mod_consts[166]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__2__cancel_heartbeat(tmp_annotations_2);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[25], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   assert(!(tmp_result == false));
  }
  {
   PyObject *tmp_annotations_3;
   tmp_annotations_3 = DICT_COPY(tstate, mod_consts[166]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__3__reset_heartbeat(tmp_annotations_3);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[23], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   assert(!(tmp_result == false));
  }
  {
   PyObject *tmp_annotations_4;
   tmp_annotations_4 = DICT_COPY(tstate, mod_consts[166]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__4__send_heartbeat(tmp_annotations_4);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[27], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   assert(!(tmp_result == false));
  }
  {
   PyObject *tmp_annotations_5;
   tmp_annotations_5 = DICT_COPY(tstate, mod_consts[166]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__5__pong_not_received(tmp_annotations_5);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[34], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   assert(!(tmp_result == false));
  }
  {
   PyObject *tmp_called_value_1;
   PyObject *tmp_args_element_value_1;
   PyObject *tmp_annotations_6;
   tmp_called_value_1 = (PyObject *)&PyProperty_Type;
   tmp_annotations_6 = DICT_COPY(tstate, mod_consts[171]);


   tmp_args_element_value_1 = MAKE_FUNCTION_aiohttp$client_ws$$$function__6_closed(tmp_annotations_6);

   frame_59fcf74ea325bd532fe3190ff0f20ba1_2->m_frame.f_lineno = 123;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
   Py_DECREF(tmp_args_element_value_1);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 123;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[172], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 124;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_called_value_2;
   PyObject *tmp_args_element_value_2;
   PyObject *tmp_annotations_7;
   PyObject *tmp_dict_key_2;
   PyObject *tmp_dict_value_2;
   PyObject *tmp_expression_value_5;
   PyObject *tmp_subscript_value_4;
   tmp_called_value_2 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_2 = mod_consts[163];
   tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

   if (unlikely(tmp_expression_value_5 == NULL)) {
       tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
   }

   if (tmp_expression_value_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 128;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_subscript_value_4 = (PyObject *)&PyLong_Type;
   tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
   if (tmp_dict_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 128;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_7 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_2, tmp_dict_value_2);
   Py_DECREF(tmp_dict_value_2);
   assert(!(tmp_res != 0));


   tmp_args_element_value_2 = MAKE_FUNCTION_aiohttp$client_ws$$$function__7_close_code(tmp_annotations_7);

   frame_59fcf74ea325bd532fe3190ff0f20ba1_2->m_frame.f_lineno = 127;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
   Py_DECREF(tmp_args_element_value_2);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 127;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[174], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 128;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_called_value_3;
   PyObject *tmp_args_element_value_3;
   PyObject *tmp_annotations_8;
   PyObject *tmp_dict_key_3;
   PyObject *tmp_dict_value_3;
   PyObject *tmp_expression_value_6;
   PyObject *tmp_subscript_value_5;
   tmp_called_value_3 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_3 = mod_consts[163];
   tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

   if (unlikely(tmp_expression_value_6 == NULL)) {
       tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
   }

   if (tmp_expression_value_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 132;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_subscript_value_5 = (PyObject *)&PyUnicode_Type;
   tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_5);
   if (tmp_dict_value_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 132;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_8 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_3, tmp_dict_value_3);
   Py_DECREF(tmp_dict_value_3);
   assert(!(tmp_res != 0));


   tmp_args_element_value_3 = MAKE_FUNCTION_aiohttp$client_ws$$$function__8_protocol(tmp_annotations_8);

   frame_59fcf74ea325bd532fe3190ff0f20ba1_2->m_frame.f_lineno = 131;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
   Py_DECREF(tmp_args_element_value_3);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 131;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[154], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 132;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_called_value_4;
   PyObject *tmp_args_element_value_4;
   PyObject *tmp_annotations_9;
   tmp_called_value_4 = (PyObject *)&PyProperty_Type;
   tmp_annotations_9 = DICT_COPY(tstate, mod_consts[177]);


   tmp_args_element_value_4 = MAKE_FUNCTION_aiohttp$client_ws$$$function__9_compress(tmp_annotations_9);

   frame_59fcf74ea325bd532fe3190ff0f20ba1_2->m_frame.f_lineno = 135;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
   Py_DECREF(tmp_args_element_value_4);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 135;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[51], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 136;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_called_value_5;
   PyObject *tmp_args_element_value_5;
   PyObject *tmp_annotations_10;
   tmp_called_value_5 = (PyObject *)&PyProperty_Type;
   tmp_annotations_10 = DICT_COPY(tstate, mod_consts[171]);


   tmp_args_element_value_5 = MAKE_FUNCTION_aiohttp$client_ws$$$function__10_client_notakeover(tmp_annotations_10);

   frame_59fcf74ea325bd532fe3190ff0f20ba1_2->m_frame.f_lineno = 139;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_5);
   Py_DECREF(tmp_args_element_value_5);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 139;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[162], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 140;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_defaults_1;
   PyObject *tmp_annotations_11;
   PyObject *tmp_dict_key_4;
   PyObject *tmp_dict_value_4;
   tmp_defaults_1 = mod_consts[180];
   tmp_dict_key_4 = mod_consts[181];
   tmp_dict_value_4 = (PyObject *)&PyUnicode_Type;
   tmp_annotations_11 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_4, tmp_dict_value_4);
   assert(!(tmp_res != 0));
   tmp_dict_key_4 = mod_consts[182];
   tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[122]);

   if (unlikely(tmp_dict_value_4 == NULL)) {
       tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
   }

   if (tmp_dict_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 143;
    type_description_2 = "o";
       goto dict_build_exception_2;
   }
   tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_4, tmp_dict_value_4);
   assert(!(tmp_res != 0));
   tmp_dict_key_4 = mod_consts[163];
   tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[122]);

   if (unlikely(tmp_dict_value_4 == NULL)) {
       tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
   }

   if (tmp_dict_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 143;
    type_description_2 = "o";
       goto dict_build_exception_2;
   }
   tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_4, tmp_dict_value_4);
   assert(!(tmp_res != 0));
   goto dict_build_noexception_2;
   // Exception handling pass through code for dict_build:
   dict_build_exception_2:;
   Py_DECREF(tmp_annotations_11);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_2:;
   Py_INCREF(tmp_defaults_1);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__11_get_extra_info(tmp_defaults_1, tmp_annotations_11);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[41], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 143;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_12;
   PyObject *tmp_dict_key_5;
   PyObject *tmp_dict_value_5;
   PyObject *tmp_expression_value_7;
   PyObject *tmp_subscript_value_6;
   tmp_dict_key_5 = mod_consts[163];
   tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

   if (unlikely(tmp_expression_value_7 == NULL)) {
       tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
   }

   if (tmp_expression_value_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 153;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_subscript_value_6 = PyExc_BaseException;
   tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_6);
   if (tmp_dict_value_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 153;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_12 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_5, tmp_dict_value_5);
   Py_DECREF(tmp_dict_value_5);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__12_exception(tmp_annotations_12);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[184], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 153;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_defaults_2;
   PyObject *tmp_annotations_13;
   tmp_defaults_2 = mod_consts[186];
   tmp_annotations_13 = DICT_COPY(tstate, mod_consts[187]);
   Py_INCREF(tmp_defaults_2);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__13_ping(tmp_defaults_2, tmp_annotations_13);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[33], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   assert(!(tmp_result == false));
  }
  {
   PyObject *tmp_defaults_3;
   PyObject *tmp_annotations_14;
   tmp_defaults_3 = mod_consts[186];
   tmp_annotations_14 = DICT_COPY(tstate, mod_consts[187]);
   Py_INCREF(tmp_defaults_3);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__14_pong(tmp_defaults_3, tmp_annotations_14);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[46], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   assert(!(tmp_result == false));
  }
  {
   PyObject *tmp_defaults_4;
   PyObject *tmp_annotations_15;
   PyObject *tmp_dict_key_6;
   PyObject *tmp_dict_value_6;
   tmp_defaults_4 = mod_consts[180];
   tmp_dict_key_6 = mod_consts[48];
   tmp_dict_value_6 = (PyObject *)&PyUnicode_Type;
   tmp_annotations_15 = _PyDict_NewPresized( 3 );
   {
    PyObject *tmp_expression_value_8;
    PyObject *tmp_subscript_value_7;
    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_6, tmp_dict_value_6);
    assert(!(tmp_res != 0));
    tmp_dict_key_6 = mod_consts[51];
    tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

    if (unlikely(tmp_expression_value_8 == NULL)) {
        tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
    }

    if (tmp_expression_value_8 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 162;
     type_description_2 = "o";
        goto dict_build_exception_3;
    }
    tmp_subscript_value_7 = (PyObject *)&PyLong_Type;
    tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_7);
    if (tmp_dict_value_6 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 162;
     type_description_2 = "o";
        goto dict_build_exception_3;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_6, tmp_dict_value_6);
    Py_DECREF(tmp_dict_value_6);
    assert(!(tmp_res != 0));
    tmp_dict_key_6 = mod_consts[163];
    tmp_dict_value_6 = Py_None;
    tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_6, tmp_dict_value_6);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_3;
   // Exception handling pass through code for dict_build:
   dict_build_exception_3:;
   Py_DECREF(tmp_annotations_15);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_3:;
   Py_INCREF(tmp_defaults_4);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__15_send_str(tmp_defaults_4, tmp_annotations_15);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[53], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 162;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_defaults_5;
   PyObject *tmp_annotations_16;
   PyObject *tmp_dict_key_7;
   PyObject *tmp_dict_value_7;
   tmp_defaults_5 = mod_consts[180];
   tmp_dict_key_7 = mod_consts[48];
   tmp_dict_value_7 = (PyObject *)&PyBytes_Type;
   tmp_annotations_16 = _PyDict_NewPresized( 3 );
   {
    PyObject *tmp_expression_value_9;
    PyObject *tmp_subscript_value_8;
    tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_7, tmp_dict_value_7);
    assert(!(tmp_res != 0));
    tmp_dict_key_7 = mod_consts[51];
    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

    if (unlikely(tmp_expression_value_9 == NULL)) {
        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
    }

    if (tmp_expression_value_9 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 167;
     type_description_2 = "o";
        goto dict_build_exception_4;
    }
    tmp_subscript_value_8 = (PyObject *)&PyLong_Type;
    tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_8);
    if (tmp_dict_value_7 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 167;
     type_description_2 = "o";
        goto dict_build_exception_4;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_7, tmp_dict_value_7);
    Py_DECREF(tmp_dict_value_7);
    assert(!(tmp_res != 0));
    tmp_dict_key_7 = mod_consts[163];
    tmp_dict_value_7 = Py_None;
    tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_7, tmp_dict_value_7);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_4;
   // Exception handling pass through code for dict_build:
   dict_build_exception_4:;
   Py_DECREF(tmp_annotations_16);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_4:;
   Py_INCREF(tmp_defaults_5);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__16_send_bytes(tmp_defaults_5, tmp_annotations_16);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[57], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 167;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_defaults_6;
   PyObject *tmp_kw_defaults_2;
   PyObject *tmp_dict_key_8;
   PyObject *tmp_dict_value_8;
   PyObject *tmp_annotations_17;
   PyObject *tmp_dict_key_9;
   PyObject *tmp_dict_value_9;
   tmp_defaults_6 = mod_consts[180];
   tmp_dict_key_8 = mod_consts[59];
   tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[143]);

   if (unlikely(tmp_dict_value_8 == NULL)) {
       tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[143]);
   }

   if (tmp_dict_value_8 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 177;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_kw_defaults_2 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_kw_defaults_2, tmp_dict_key_8, tmp_dict_value_8);
   assert(!(tmp_res != 0));
   tmp_dict_key_9 = mod_consts[48];
   tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[122]);

   if (unlikely(tmp_dict_value_9 == NULL)) {
       tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
   }

   if (tmp_dict_value_9 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_kw_defaults_2);

    exception_lineno = 174;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_17 = _PyDict_NewPresized( 4 );
   {
    PyObject *tmp_expression_value_10;
    PyObject *tmp_subscript_value_9;
    tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_9, tmp_dict_value_9);
    assert(!(tmp_res != 0));
    tmp_dict_key_9 = mod_consts[51];
    tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

    if (unlikely(tmp_expression_value_10 == NULL)) {
        tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
    }

    if (tmp_expression_value_10 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 175;
     type_description_2 = "o";
        goto dict_build_exception_5;
    }
    tmp_subscript_value_9 = (PyObject *)&PyLong_Type;
    tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_9);
    if (tmp_dict_value_9 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 175;
     type_description_2 = "o";
        goto dict_build_exception_5;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_9, tmp_dict_value_9);
    Py_DECREF(tmp_dict_value_9);
    assert(!(tmp_res != 0));
    tmp_dict_key_9 = mod_consts[59];
    tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[145]);

    if (unlikely(tmp_dict_value_9 == NULL)) {
        tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[145]);
    }

    if (tmp_dict_value_9 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 177;
     type_description_2 = "o";
        goto dict_build_exception_5;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_9, tmp_dict_value_9);
    assert(!(tmp_res != 0));
    tmp_dict_key_9 = mod_consts[163];
    tmp_dict_value_9 = Py_None;
    tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_9, tmp_dict_value_9);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_5;
   // Exception handling pass through code for dict_build:
   dict_build_exception_5:;
   Py_DECREF(tmp_kw_defaults_2);
   Py_DECREF(tmp_annotations_17);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_5:;
   Py_INCREF(tmp_defaults_6);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__17_send_json(tmp_defaults_6, tmp_kw_defaults_2, tmp_annotations_17);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[61], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 172;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_kw_defaults_3;
   PyObject *tmp_dict_key_10;
   PyObject *tmp_dict_value_10;
   PyObject *tmp_expression_value_11;
   PyObject *tmp_annotations_18;
   tmp_dict_key_10 = mod_consts[66];
   tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[35]);

   if (unlikely(tmp_expression_value_11 == NULL)) {
       tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[35]);
   }

   if (tmp_expression_value_11 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 181;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[84]);
   if (tmp_dict_value_10 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 181;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_kw_defaults_3 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_10, tmp_dict_value_10);
   Py_DECREF(tmp_dict_value_10);
   assert(!(tmp_res != 0));
   tmp_dict_key_10 = mod_consts[44];
   tmp_dict_value_10 = mod_consts[188];
   tmp_res = PyDict_SetItem(tmp_kw_defaults_3, tmp_dict_key_10, tmp_dict_value_10);
   assert(!(tmp_res != 0));
   tmp_annotations_18 = DICT_COPY(tstate, mod_consts[189]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__18_close(tmp_kw_defaults_3, tmp_annotations_18);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[39], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 181;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_defaults_7;
   PyObject *tmp_annotations_19;
   PyObject *tmp_dict_key_11;
   PyObject *tmp_dict_value_11;
   PyObject *tmp_expression_value_12;
   PyObject *tmp_subscript_value_10;
   tmp_defaults_7 = mod_consts[180];
   tmp_dict_key_11 = mod_consts[69];
   tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

   if (unlikely(tmp_expression_value_12 == NULL)) {
       tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
   }

   if (tmp_expression_value_12 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 229;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_subscript_value_10 = (PyObject *)&PyFloat_Type;
   tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_10);
   if (tmp_dict_value_11 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 229;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_19 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_11, tmp_dict_value_11);
   Py_DECREF(tmp_dict_value_11);
   assert(!(tmp_res != 0));
   tmp_dict_key_11 = mod_consts[163];
   tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[85]);

   if (unlikely(tmp_dict_value_11 == NULL)) {
       tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
   }

   if (tmp_dict_value_11 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 229;
    type_description_2 = "o";
       goto dict_build_exception_6;
   }
   tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_11, tmp_dict_value_11);
   assert(!(tmp_res != 0));
   goto dict_build_noexception_6;
   // Exception handling pass through code for dict_build:
   dict_build_exception_6:;
   Py_DECREF(tmp_annotations_19);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_6:;
   Py_INCREF(tmp_defaults_7);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__19_receive(tmp_defaults_7, tmp_annotations_19);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[94], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 229;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_kw_defaults_4;
   PyObject *tmp_annotations_20;
   PyObject *tmp_dict_key_12;
   PyObject *tmp_dict_value_12;
   PyObject *tmp_expression_value_13;
   PyObject *tmp_subscript_value_11;
   tmp_kw_defaults_4 = DICT_COPY(tstate, mod_consts[190]);
   tmp_dict_key_12 = mod_consts[69];
   tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

   if (unlikely(tmp_expression_value_13 == NULL)) {
       tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
   }

   if (tmp_expression_value_13 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_kw_defaults_4);

    exception_lineno = 287;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_subscript_value_11 = (PyObject *)&PyFloat_Type;
   tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_11);
   if (tmp_dict_value_12 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_kw_defaults_4);

    exception_lineno = 287;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_20 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_12, tmp_dict_value_12);
   Py_DECREF(tmp_dict_value_12);
   assert(!(tmp_res != 0));
   tmp_dict_key_12 = mod_consts[163];
   tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
   tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_12, tmp_dict_value_12);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__20_receive_str(tmp_kw_defaults_4, tmp_annotations_20);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[102], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 287;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_kw_defaults_5;
   PyObject *tmp_annotations_21;
   PyObject *tmp_dict_key_13;
   PyObject *tmp_dict_value_13;
   PyObject *tmp_expression_value_14;
   PyObject *tmp_subscript_value_12;
   tmp_kw_defaults_5 = DICT_COPY(tstate, mod_consts[190]);
   tmp_dict_key_13 = mod_consts[69];
   tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

   if (unlikely(tmp_expression_value_14 == NULL)) {
       tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
   }

   if (tmp_expression_value_14 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_kw_defaults_5);

    exception_lineno = 293;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_subscript_value_12 = (PyObject *)&PyFloat_Type;
   tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_12);
   if (tmp_dict_value_13 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_kw_defaults_5);

    exception_lineno = 293;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_21 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_13, tmp_dict_value_13);
   Py_DECREF(tmp_dict_value_13);
   assert(!(tmp_res != 0));
   tmp_dict_key_13 = mod_consts[163];
   tmp_dict_value_13 = (PyObject *)&PyBytes_Type;
   tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_13, tmp_dict_value_13);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__21_receive_bytes(tmp_kw_defaults_5, tmp_annotations_21);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[106], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 293;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_kw_defaults_6;
   PyObject *tmp_dict_key_14;
   PyObject *tmp_dict_value_14;
   PyObject *tmp_annotations_22;
   PyObject *tmp_dict_key_15;
   PyObject *tmp_dict_value_15;
   tmp_dict_key_14 = mod_consts[109];
   tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[142]);

   if (unlikely(tmp_dict_value_14 == NULL)) {
       tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[142]);
   }

   if (tmp_dict_value_14 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 302;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_kw_defaults_6 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_14, tmp_dict_value_14);
   assert(!(tmp_res != 0));
   tmp_dict_key_14 = mod_consts[69];
   tmp_dict_value_14 = Py_None;
   tmp_res = PyDict_SetItem(tmp_kw_defaults_6, tmp_dict_key_14, tmp_dict_value_14);
   assert(!(tmp_res != 0));
   tmp_dict_key_15 = mod_consts[109];
   tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[144]);

   if (unlikely(tmp_dict_value_15 == NULL)) {
       tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[144]);
   }

   if (tmp_dict_value_15 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_kw_defaults_6);

    exception_lineno = 302;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_22 = _PyDict_NewPresized( 3 );
   {
    PyObject *tmp_expression_value_15;
    PyObject *tmp_subscript_value_13;
    tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_15, tmp_dict_value_15);
    assert(!(tmp_res != 0));
    tmp_dict_key_15 = mod_consts[69];
    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[123]);

    if (unlikely(tmp_expression_value_15 == NULL)) {
        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
    }

    if (tmp_expression_value_15 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 303;
     type_description_2 = "o";
        goto dict_build_exception_7;
    }
    tmp_subscript_value_13 = (PyObject *)&PyFloat_Type;
    tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_13);
    if (tmp_dict_value_15 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 303;
     type_description_2 = "o";
        goto dict_build_exception_7;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_15, tmp_dict_value_15);
    Py_DECREF(tmp_dict_value_15);
    assert(!(tmp_res != 0));
    tmp_dict_key_15 = mod_consts[163];
    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[122]);

    if (unlikely(tmp_dict_value_15 == NULL)) {
        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
    }

    if (tmp_dict_value_15 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 304;
     type_description_2 = "o";
        goto dict_build_exception_7;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_15, tmp_dict_value_15);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_7;
   // Exception handling pass through code for dict_build:
   dict_build_exception_7:;
   Py_DECREF(tmp_kw_defaults_6);
   Py_DECREF(tmp_annotations_22);
   goto frame_exception_exit_2;
   // Finished with no exception for dict_build:
   dict_build_noexception_7:;


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__22_receive_json(tmp_kw_defaults_6, tmp_annotations_22);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[110], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 299;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_23;
   tmp_annotations_23 = DICT_COPY(tstate, mod_consts[191]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__23___aiter__(tmp_annotations_23);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[192], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   assert(!(tmp_result == false));
  }
  {
   PyObject *tmp_annotations_24;
   PyObject *tmp_dict_key_16;
   PyObject *tmp_dict_value_16;
   tmp_dict_key_16 = mod_consts[163];
   tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[85]);

   if (unlikely(tmp_dict_value_16 == NULL)) {
       tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[85]);
   }

   if (tmp_dict_value_16 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 311;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_annotations_24 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_16, tmp_dict_value_16);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$client_ws$$$function__24___anext__(tmp_annotations_24);

   tmp_result = DICT_SET_ITEM(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33, mod_consts[112], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 311;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_1;
  frame_exception_exit_2:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_59fcf74ea325bd532fe3190ff0f20ba1_2, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_59fcf74ea325bd532fe3190ff0f20ba1_2->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_59fcf74ea325bd532fe3190ff0f20ba1_2, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_59fcf74ea325bd532fe3190ff0f20ba1_2,
      type_description_2,
      outline_0_var___class__
  );



  assertFrameObject(frame_59fcf74ea325bd532fe3190ff0f20ba1_2);

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
   PyObject *tmp_assign_source_35;
   PyObject *tmp_called_value_6;
   PyObject *tmp_args_value_1;
   PyObject *tmp_tuple_element_1;
   PyObject *tmp_kwargs_value_1;
   tmp_called_value_6 = (PyObject *)&PyType_Type;
   tmp_tuple_element_1 = mod_consts[148];
   tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
   tmp_tuple_element_1 = const_tuple_empty;
   PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
   tmp_tuple_element_1 = locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33;
   PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
   CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
   tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
   frame_46f947833674cfb4be795fc22f987f03->m_frame.f_lineno = 33;
   tmp_assign_source_35 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
   Py_DECREF(tmp_args_value_1);
   if (tmp_assign_source_35 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 33;

       goto try_except_handler_8;
   }
   assert(outline_0_var___class__ == NULL);
   outline_0_var___class__ = tmp_assign_source_35;
  }
  CHECK_OBJECT(outline_0_var___class__);
  tmp_assign_source_34 = outline_0_var___class__;
  Py_INCREF(tmp_assign_source_34);
  goto try_return_handler_8;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_8:;
  Py_DECREF(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33);
  locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33 = NULL;
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

  Py_DECREF(locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33);
  locals_aiohttp$client_ws$$$class__1_ClientWebSocketResponse_33 = NULL;
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
  exception_lineno = 33;
  goto try_except_handler_6;
  outline_result_1:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_34);
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


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_2;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_46f947833674cfb4be795fc22f987f03, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_46f947833674cfb4be795fc22f987f03->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_46f947833674cfb4be795fc22f987f03, exception_lineno);
 }



 assertFrameObject(frame_46f947833674cfb4be795fc22f987f03);

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
    PGO_onModuleExit("aiohttp$client_ws", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.client_ws" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_aiohttp$client_ws);
    return module_aiohttp$client_ws;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$client_ws, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("aiohttp$client_ws", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
