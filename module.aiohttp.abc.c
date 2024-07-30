/* Generated code for Python module 'aiohttp$abc'
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

/* The "module_aiohttp$abc" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_aiohttp$abc;
PyDictObject *moduledict_aiohttp$abc;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[211];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[211];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("aiohttp.abc"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 211; i++) {
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
void checkModuleConstants_aiohttp$abc(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 211; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d52e3d69d717b1ca63d036674ab13c1c;
static PyCodeObject *codeobj_690a67bc5eaf81b8d0f5805ca18e2fda;
static PyCodeObject *codeobj_0f36220e40b1a2c5cfa1fa53e0a45d73;
static PyCodeObject *codeobj_64c4be64cdd2e0644573a8e24c15895c;
static PyCodeObject *codeobj_6a0fef63ad801b451815b24c42655bd1;
static PyCodeObject *codeobj_dc1cda96bfde0ca2b9d17a047ea9e6c8;
static PyCodeObject *codeobj_9a985ee683fe19769ee5711edc64c158;
static PyCodeObject *codeobj_d7ab6ea207d34a14168c02ecb07a8ef8;
static PyCodeObject *codeobj_364b2979f7f0b35d6934ca4d0c92ca37;
static PyCodeObject *codeobj_de1452852943b445dd215076ea420a16;
static PyCodeObject *codeobj_587b7a8516e99891269e42ad64410e05;
static PyCodeObject *codeobj_df5c9bc127c4737a0900c9a09b64f7b6;
static PyCodeObject *codeobj_7e82ffbd09361a6db4fdb3394c206670;
static PyCodeObject *codeobj_34ff35f32421fad1e2da095dc62065c9;
static PyCodeObject *codeobj_6a5f2d53c4bf2ad228f4d7e11fc31898;
static PyCodeObject *codeobj_edbfb084aac6bbb59fbf947fe3d96e48;
static PyCodeObject *codeobj_86ea472344d955a4e92daf15392a9e10;
static PyCodeObject *codeobj_169e9c3d0c2c0e501480b9b6990f3e94;
static PyCodeObject *codeobj_f588d7837fd8e383b8ed8125c15775ea;
static PyCodeObject *codeobj_ea0f989e98295f1aef63ba5eb6178108;
static PyCodeObject *codeobj_7d7084ffb32ba5b65c2d9ac067e9db16;
static PyCodeObject *codeobj_df42426a521d8aada03bb64ff5c7c0a2;
static PyCodeObject *codeobj_0e436b17db4cd8fd9ad53bc5a1e6bbc9;
static PyCodeObject *codeobj_31c106dbdaaa89eaa09eada41b776701;
static PyCodeObject *codeobj_2c611e5ba7d9d6e873010d5b4825a76f;
static PyCodeObject *codeobj_495578d6b065598174714512d89ba2e7;
static PyCodeObject *codeobj_11e4132efe72cb9267d29086d6a00a79;
static PyCodeObject *codeobj_a697ae84acdde8ab2eba953b6709358c;
static PyCodeObject *codeobj_f800ec17740f99a62acae53491541dc9;
static PyCodeObject *codeobj_3dffc9b53bfd784d2324a69ca9c9ef46;
static PyCodeObject *codeobj_4fae7dee1d7649f9810d36db31af5e30;
static PyCodeObject *codeobj_dfe49282c749b52793b12e593fc9bfba;
static PyCodeObject *codeobj_9681cf25b33740989e98b499acc69a34;
static PyCodeObject *codeobj_cf26e5f3d22924bfbb311952c97f3f6c;
static PyCodeObject *codeobj_49754db6898ade91c29c52c37e0e5167;
static PyCodeObject *codeobj_63a4e7b0edb3bc3efc83a716fcd7334b;
static PyCodeObject *codeobj_7c4849e9a1e3301e45851d45e160d9f3;
static PyCodeObject *codeobj_926695d40958b5159b15590f1c39fd5b;

static void createModuleCodeObjects(void) {
 module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[193]); CHECK_OBJECT(module_filename_obj);
 codeobj_d52e3d69d717b1ca63d036674ab13c1c = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[194], mod_consts[194], NULL, NULL, 0, 0, 0);
 codeobj_690a67bc5eaf81b8d0f5805ca18e2fda = MAKE_CODE_OBJECT(module_filename_obj, 200, 0, mod_consts[183], mod_consts[183], mod_consts[195], NULL, 0, 0, 0);
 codeobj_0f36220e40b1a2c5cfa1fa53e0a45d73 = MAKE_CODE_OBJECT(module_filename_obj, 143, 0, mod_consts[138], mod_consts[138], mod_consts[195], NULL, 0, 0, 0);
 codeobj_64c4be64cdd2e0644573a8e24c15895c = MAKE_CODE_OBJECT(module_filename_obj, 60, 0, mod_consts[99], mod_consts[99], mod_consts[195], NULL, 0, 0, 0);
 codeobj_6a0fef63ad801b451815b24c42655bd1 = MAKE_CODE_OBJECT(module_filename_obj, 122, 0, mod_consts[129], mod_consts[129], mod_consts[195], NULL, 0, 0, 0);
 codeobj_dc1cda96bfde0ca2b9d17a047ea9e6c8 = MAKE_CODE_OBJECT(module_filename_obj, 35, 0, mod_consts[76], mod_consts[76], mod_consts[195], NULL, 0, 0, 0);
 codeobj_9a985ee683fe19769ee5711edc64c158 = MAKE_CODE_OBJECT(module_filename_obj, 166, 0, mod_consts[163], mod_consts[163], mod_consts[195], NULL, 0, 0, 0);
 codeobj_d7ab6ea207d34a14168c02ecb07a8ef8 = MAKE_CODE_OBJECT(module_filename_obj, 106, 0, mod_consts[122], mod_consts[122], mod_consts[195], NULL, 0, 0, 0);
 codeobj_364b2979f7f0b35d6934ca4d0c92ca37 = MAKE_CODE_OBJECT(module_filename_obj, 118, 0, mod_consts[127], mod_consts[128], mod_consts[196], NULL, 1, 0, 0);
 codeobj_de1452852943b445dd215076ea420a16 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[85], mod_consts[186], mod_consts[197], NULL, 3, 0, 0);
 codeobj_587b7a8516e99891269e42ad64410e05 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[85], mod_consts[143], mod_consts[198], NULL, 1, 1, 0);
 codeobj_df5c9bc127c4737a0900c9a09b64f7b6 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[85], mod_consts[86], mod_consts[196], NULL, 1, 0, 0);
 codeobj_7e82ffbd09361a6db4fdb3394c206670 = MAKE_CODE_OBJECT(module_filename_obj, 109, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[85], mod_consts[124], mod_consts[199], NULL, 2, 0, 0);
 codeobj_34ff35f32421fad1e2da095dc62065c9 = MAKE_CODE_OBJECT(module_filename_obj, 92, 0, mod_consts[118], mod_consts[119], mod_consts[200], NULL, 2, 0, 0);
 codeobj_6a5f2d53c4bf2ad228f4d7e11fc31898 = MAKE_CODE_OBJECT(module_filename_obj, 84, 0, mod_consts[115], mod_consts[116], mod_consts[196], NULL, 1, 0, 0);
 codeobj_edbfb084aac6bbb59fbf947fe3d96e48 = MAKE_CODE_OBJECT(module_filename_obj, 150, 0, mod_consts[147], mod_consts[148], mod_consts[201], NULL, 2, 0, 0);
 codeobj_86ea472344d955a4e92daf15392a9e10 = MAKE_CODE_OBJECT(module_filename_obj, 154, 0, mod_consts[151], mod_consts[152], mod_consts[202], NULL, 2, 0, 0);
 codeobj_169e9c3d0c2c0e501480b9b6990f3e94 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_COROUTINE, mod_consts[10], mod_consts[11], mod_consts[196], NULL, 1, 0, 0);
 codeobj_f588d7837fd8e383b8ed8125c15775ea = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_COROUTINE, mod_consts[21], mod_consts[22], mod_consts[196], NULL, 1, 0, 0);
 codeobj_ea0f989e98295f1aef63ba5eb6178108 = MAKE_CODE_OBJECT(module_filename_obj, 190, 0, mod_consts[178], mod_consts[179], mod_consts[196], NULL, 1, 0, 0);
 codeobj_7d7084ffb32ba5b65c2d9ac067e9db16 = MAKE_CODE_OBJECT(module_filename_obj, 186, 0, mod_consts[175], mod_consts[176], mod_consts[203], NULL, 2, 0, 0);
 codeobj_df42426a521d8aada03bb64ff5c7c0a2 = MAKE_CODE_OBJECT(module_filename_obj, 68, 0, mod_consts[105], mod_consts[106], mod_consts[196], NULL, 1, 0, 0);
 codeobj_0e436b17db4cd8fd9ad53bc5a1e6bbc9 = MAKE_CODE_OBJECT(module_filename_obj, 162, 0, mod_consts[161], mod_consts[162], mod_consts[204], NULL, 2, 0, 0);
 codeobj_31c106dbdaaa89eaa09eada41b776701 = MAKE_CODE_OBJECT(module_filename_obj, 96, 0, mod_consts[96], mod_consts[121], mod_consts[196], NULL, 1, 0, 0);
 codeobj_2c611e5ba7d9d6e873010d5b4825a76f = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[96], mod_consts[97], mod_consts[196], NULL, 1, 0, 0);
 codeobj_495578d6b065598174714512d89ba2e7 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[94], mod_consts[95], mod_consts[196], NULL, 1, 0, 0);
 codeobj_11e4132efe72cb9267d29086d6a00a79 = MAKE_CODE_OBJECT(module_filename_obj, 79, 0, mod_consts[112], mod_consts[113], mod_consts[196], NULL, 1, 0, 0);
 codeobj_a697ae84acdde8ab2eba953b6709358c = MAKE_CODE_OBJECT(module_filename_obj, 63, 0, mod_consts[102], mod_consts[103], mod_consts[196], NULL, 1, 0, 0);
 codeobj_f800ec17740f99a62acae53491541dc9 = MAKE_CODE_OBJECT(module_filename_obj, 75, 0, mod_consts[108], mod_consts[109], mod_consts[196], NULL, 1, 0, 0);
 codeobj_3dffc9b53bfd784d2324a69ca9c9ef46 = MAKE_CODE_OBJECT(module_filename_obj, 208, 0, mod_consts[191], mod_consts[192], mod_consts[205], NULL, 4, 0, 0);
 codeobj_4fae7dee1d7649f9810d36db31af5e30 = MAKE_CODE_OBJECT(module_filename_obj, 39, 0, mod_consts[90], mod_consts[91], mod_consts[200], NULL, 2, 0, 0);
 codeobj_dfe49282c749b52793b12e593fc9bfba = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[98], mod_consts[125], mod_consts[196], NULL, 1, 0, 0);
 codeobj_9681cf25b33740989e98b499acc69a34 = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_COROUTINE, mod_consts[3], mod_consts[8], mod_consts[206], NULL, 4, 0, 0);
 codeobj_cf26e5f3d22924bfbb311952c97f3f6c = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_COROUTINE, mod_consts[3], mod_consts[4], mod_consts[199], NULL, 2, 0, 0);
 codeobj_49754db6898ade91c29c52c37e0e5167 = MAKE_CODE_OBJECT(module_filename_obj, 158, 0, mod_consts[156], mod_consts[157], mod_consts[207], NULL, 3, 0, 0);
 codeobj_63a4e7b0edb3bc3efc83a716fcd7334b = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_COROUTINE, mod_consts[15], mod_consts[16], mod_consts[208], NULL, 2, 0, 0);
 codeobj_7c4849e9a1e3301e45851d45e160d9f3 = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_COROUTINE, mod_consts[18], mod_consts[19], mod_consts[208], NULL, 2, 0, 0);
 codeobj_926695d40958b5159b15590f1c39fd5b = MAKE_CODE_OBJECT(module_filename_obj, 194, CO_COROUTINE, mod_consts[24], mod_consts[25], mod_consts[209], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__5_resolve$$$coroutine__1_resolve(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__16_resolve$$$coroutine__1_resolve(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__17_close$$$coroutine__1_close(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__23_write$$$coroutine__1_write(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__24_write_eof$$$coroutine__1_write_eof(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__25_drain$$$coroutine__1_drain(PyThreadState *tstate);


static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__28_write_headers$$$coroutine__1_write_headers(PyThreadState *tstate);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$helper_function__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__10_apps(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__11_add_app(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__12_freeze(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__13___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__14_request(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__15___await__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__16_resolve(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__17_close(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__18___init__(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__19_clear(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__20_clear_domain(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__21_update_cookies(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__22_filter_cookies(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__23_write(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__24_write_eof(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__25_drain(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__26_enable_compression(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__27_enable_chunking(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__28_write_headers(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__29___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__2_post_init(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__30_log(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__3_frozen(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__4_freeze(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__5_resolve(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__6_handler(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__7_expect_handler(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__8_http_exception(PyObject *annotations);


static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__9_get_info(PyObject *annotations);


// The module function definitions.
static PyObject *impl_aiohttp$abc$$$function__1___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_df5c9bc127c4737a0900c9a09b64f7b6;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_df5c9bc127c4737a0900c9a09b64f7b6 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_df5c9bc127c4737a0900c9a09b64f7b6)) {
     Py_XDECREF(cache_frame_df5c9bc127c4737a0900c9a09b64f7b6);

#if _DEBUG_REFCOUNTS
     if (cache_frame_df5c9bc127c4737a0900c9a09b64f7b6 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_df5c9bc127c4737a0900c9a09b64f7b6 = MAKE_FUNCTION_FRAME(tstate, codeobj_df5c9bc127c4737a0900c9a09b64f7b6, module_aiohttp$abc, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_df5c9bc127c4737a0900c9a09b64f7b6->m_type_description == NULL);
 frame_df5c9bc127c4737a0900c9a09b64f7b6 = cache_frame_df5c9bc127c4737a0900c9a09b64f7b6;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_df5c9bc127c4737a0900c9a09b64f7b6);
 assert(Py_REFCNT(frame_df5c9bc127c4737a0900c9a09b64f7b6) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_False;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 37;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_df5c9bc127c4737a0900c9a09b64f7b6, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_df5c9bc127c4737a0900c9a09b64f7b6->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_df5c9bc127c4737a0900c9a09b64f7b6, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_df5c9bc127c4737a0900c9a09b64f7b6,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_df5c9bc127c4737a0900c9a09b64f7b6 == cache_frame_df5c9bc127c4737a0900c9a09b64f7b6) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_df5c9bc127c4737a0900c9a09b64f7b6);
     cache_frame_df5c9bc127c4737a0900c9a09b64f7b6 = NULL;
 }

 assertFrameObject(frame_df5c9bc127c4737a0900c9a09b64f7b6);

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


static PyObject *impl_aiohttp$abc$$$function__3_frozen(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_495578d6b065598174714512d89ba2e7;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_495578d6b065598174714512d89ba2e7 = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_495578d6b065598174714512d89ba2e7)) {
     Py_XDECREF(cache_frame_495578d6b065598174714512d89ba2e7);

#if _DEBUG_REFCOUNTS
     if (cache_frame_495578d6b065598174714512d89ba2e7 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_495578d6b065598174714512d89ba2e7 = MAKE_FUNCTION_FRAME(tstate, codeobj_495578d6b065598174714512d89ba2e7, module_aiohttp$abc, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_495578d6b065598174714512d89ba2e7->m_type_description == NULL);
 frame_495578d6b065598174714512d89ba2e7 = cache_frame_495578d6b065598174714512d89ba2e7;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_495578d6b065598174714512d89ba2e7);
 assert(Py_REFCNT(frame_495578d6b065598174714512d89ba2e7) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
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
     exception_tb = MAKE_TRACEBACK(frame_495578d6b065598174714512d89ba2e7, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_495578d6b065598174714512d89ba2e7->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_495578d6b065598174714512d89ba2e7, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_495578d6b065598174714512d89ba2e7,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_495578d6b065598174714512d89ba2e7 == cache_frame_495578d6b065598174714512d89ba2e7) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_495578d6b065598174714512d89ba2e7);
     cache_frame_495578d6b065598174714512d89ba2e7 = NULL;
 }

 assertFrameObject(frame_495578d6b065598174714512d89ba2e7);

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


static PyObject *impl_aiohttp$abc$$$function__4_freeze(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_2c611e5ba7d9d6e873010d5b4825a76f;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_2c611e5ba7d9d6e873010d5b4825a76f = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_2c611e5ba7d9d6e873010d5b4825a76f)) {
     Py_XDECREF(cache_frame_2c611e5ba7d9d6e873010d5b4825a76f);

#if _DEBUG_REFCOUNTS
     if (cache_frame_2c611e5ba7d9d6e873010d5b4825a76f == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_2c611e5ba7d9d6e873010d5b4825a76f = MAKE_FUNCTION_FRAME(tstate, codeobj_2c611e5ba7d9d6e873010d5b4825a76f, module_aiohttp$abc, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_2c611e5ba7d9d6e873010d5b4825a76f->m_type_description == NULL);
 frame_2c611e5ba7d9d6e873010d5b4825a76f = cache_frame_2c611e5ba7d9d6e873010d5b4825a76f;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_2c611e5ba7d9d6e873010d5b4825a76f);
 assert(Py_REFCNT(frame_2c611e5ba7d9d6e873010d5b4825a76f) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = Py_True;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 53;
   type_description_1 = "o";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_2c611e5ba7d9d6e873010d5b4825a76f, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_2c611e5ba7d9d6e873010d5b4825a76f->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_2c611e5ba7d9d6e873010d5b4825a76f, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_2c611e5ba7d9d6e873010d5b4825a76f,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_2c611e5ba7d9d6e873010d5b4825a76f == cache_frame_2c611e5ba7d9d6e873010d5b4825a76f) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_2c611e5ba7d9d6e873010d5b4825a76f);
     cache_frame_2c611e5ba7d9d6e873010d5b4825a76f = NULL;
 }

 assertFrameObject(frame_2c611e5ba7d9d6e873010d5b4825a76f);

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


static PyObject *impl_aiohttp$abc$$$function__5_resolve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_request = python_pars[1];
 PyObject *tmp_return_value = NULL;

    // Actual function body.


 tmp_return_value = MAKE_COROUTINE_aiohttp$abc$$$function__5_resolve$$$coroutine__1_resolve(tstate);

 goto function_return_exit;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_request);
 Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$abc$$$function__5_resolve$$$coroutine__1_resolve_locals {
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$abc$$$function__5_resolve$$$coroutine__1_resolve_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$abc$$$function__5_resolve$$$coroutine__1_resolve_locals *coroutine_heap = (struct aiohttp$abc$$$function__5_resolve$$$coroutine__1_resolve_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
 coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
 coroutine_heap->tmp_return_value = Py_None;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__5_resolve$$$coroutine__1_resolve(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$abc$$$function__5_resolve$$$coroutine__1_resolve_context,
        module_aiohttp$abc,
        mod_consts[3],
        mod_consts[4],
        codeobj_cf26e5f3d22924bfbb311952c97f3f6c,
        NULL,
        0,
#if 1
        sizeof(struct aiohttp$abc$$$function__5_resolve$$$coroutine__1_resolve_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$abc$$$function__13___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_request = python_pars[1];
 struct Nuitka_FrameObject *frame_7e82ffbd09361a6db4fdb3394c206670;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_7e82ffbd09361a6db4fdb3394c206670 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_7e82ffbd09361a6db4fdb3394c206670)) {
     Py_XDECREF(cache_frame_7e82ffbd09361a6db4fdb3394c206670);

#if _DEBUG_REFCOUNTS
     if (cache_frame_7e82ffbd09361a6db4fdb3394c206670 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_7e82ffbd09361a6db4fdb3394c206670 = MAKE_FUNCTION_FRAME(tstate, codeobj_7e82ffbd09361a6db4fdb3394c206670, module_aiohttp$abc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_7e82ffbd09361a6db4fdb3394c206670->m_type_description == NULL);
 frame_7e82ffbd09361a6db4fdb3394c206670 = cache_frame_7e82ffbd09361a6db4fdb3394c206670;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_7e82ffbd09361a6db4fdb3394c206670);
 assert(Py_REFCNT(frame_7e82ffbd09361a6db4fdb3394c206670) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_request);
  tmp_assattr_value_1 = par_request;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[5], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 110;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_7e82ffbd09361a6db4fdb3394c206670, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_7e82ffbd09361a6db4fdb3394c206670->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_7e82ffbd09361a6db4fdb3394c206670, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_7e82ffbd09361a6db4fdb3394c206670,
     type_description_1,
     par_self,
     par_request
 );


 // Release cached frame if used for exception.
 if (frame_7e82ffbd09361a6db4fdb3394c206670 == cache_frame_7e82ffbd09361a6db4fdb3394c206670) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_7e82ffbd09361a6db4fdb3394c206670);
     cache_frame_7e82ffbd09361a6db4fdb3394c206670 = NULL;
 }

 assertFrameObject(frame_7e82ffbd09361a6db4fdb3394c206670);

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
 CHECK_OBJECT(par_request);
 Py_DECREF(par_request);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_request);
 Py_DECREF(par_request);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_aiohttp$abc$$$function__14_request(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 struct Nuitka_FrameObject *frame_dfe49282c749b52793b12e593fc9bfba;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *tmp_return_value = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_dfe49282c749b52793b12e593fc9bfba = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_dfe49282c749b52793b12e593fc9bfba)) {
     Py_XDECREF(cache_frame_dfe49282c749b52793b12e593fc9bfba);

#if _DEBUG_REFCOUNTS
     if (cache_frame_dfe49282c749b52793b12e593fc9bfba == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_dfe49282c749b52793b12e593fc9bfba = MAKE_FUNCTION_FRAME(tstate, codeobj_dfe49282c749b52793b12e593fc9bfba, module_aiohttp$abc, sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_dfe49282c749b52793b12e593fc9bfba->m_type_description == NULL);
 frame_dfe49282c749b52793b12e593fc9bfba = cache_frame_dfe49282c749b52793b12e593fc9bfba;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_dfe49282c749b52793b12e593fc9bfba);
 assert(Py_REFCNT(frame_dfe49282c749b52793b12e593fc9bfba) == 2);

 // Framed code:
 {
  PyObject *tmp_expression_value_1;
  CHECK_OBJECT(par_self);
  tmp_expression_value_1 = par_self;
  tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
  if (tmp_return_value == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 115;
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
     exception_tb = MAKE_TRACEBACK(frame_dfe49282c749b52793b12e593fc9bfba, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_dfe49282c749b52793b12e593fc9bfba->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_dfe49282c749b52793b12e593fc9bfba, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_dfe49282c749b52793b12e593fc9bfba,
     type_description_1,
     par_self
 );


 // Release cached frame if used for exception.
 if (frame_dfe49282c749b52793b12e593fc9bfba == cache_frame_dfe49282c749b52793b12e593fc9bfba) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_dfe49282c749b52793b12e593fc9bfba);
     cache_frame_dfe49282c749b52793b12e593fc9bfba = NULL;
 }

 assertFrameObject(frame_dfe49282c749b52793b12e593fc9bfba);

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


static PyObject *impl_aiohttp$abc$$$function__16_resolve(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_host = python_pars[1];
 PyObject *par_port = python_pars[2];
 PyObject *par_family = python_pars[3];
 PyObject *tmp_return_value = NULL;

    // Actual function body.


 tmp_return_value = MAKE_COROUTINE_aiohttp$abc$$$function__16_resolve$$$coroutine__1_resolve(tstate);

 goto function_return_exit;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_host);
 Py_DECREF(par_host);
 CHECK_OBJECT(par_port);
 Py_DECREF(par_port);
 CHECK_OBJECT(par_family);
 Py_DECREF(par_family);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$abc$$$function__16_resolve$$$coroutine__1_resolve_locals {
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$abc$$$function__16_resolve$$$coroutine__1_resolve_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$abc$$$function__16_resolve$$$coroutine__1_resolve_locals *coroutine_heap = (struct aiohttp$abc$$$function__16_resolve$$$coroutine__1_resolve_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
 coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
 coroutine_heap->tmp_return_value = Py_None;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__16_resolve$$$coroutine__1_resolve(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$abc$$$function__16_resolve$$$coroutine__1_resolve_context,
        module_aiohttp$abc,
        mod_consts[3],
        mod_consts[8],
        codeobj_9681cf25b33740989e98b499acc69a34,
        NULL,
        0,
#if 1
        sizeof(struct aiohttp$abc$$$function__16_resolve$$$coroutine__1_resolve_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$abc$$$function__17_close(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *tmp_return_value = NULL;

    // Actual function body.


 tmp_return_value = MAKE_COROUTINE_aiohttp$abc$$$function__17_close$$$coroutine__1_close(tstate);

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



#if 1
struct aiohttp$abc$$$function__17_close$$$coroutine__1_close_locals {
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$abc$$$function__17_close$$$coroutine__1_close_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$abc$$$function__17_close$$$coroutine__1_close_locals *coroutine_heap = (struct aiohttp$abc$$$function__17_close$$$coroutine__1_close_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
 coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
 coroutine_heap->tmp_return_value = Py_None;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__17_close$$$coroutine__1_close(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$abc$$$function__17_close$$$coroutine__1_close_context,
        module_aiohttp$abc,
        mod_consts[10],
        mod_consts[11],
        codeobj_169e9c3d0c2c0e501480b9b6990f3e94,
        NULL,
        0,
#if 1
        sizeof(struct aiohttp$abc$$$function__17_close$$$coroutine__1_close_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$abc$$$function__18___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_loop = python_pars[1];
 struct Nuitka_FrameObject *frame_587b7a8516e99891269e42ad64410e05;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 bool tmp_result;
 static struct Nuitka_FrameObject *cache_frame_587b7a8516e99891269e42ad64410e05 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_587b7a8516e99891269e42ad64410e05)) {
     Py_XDECREF(cache_frame_587b7a8516e99891269e42ad64410e05);

#if _DEBUG_REFCOUNTS
     if (cache_frame_587b7a8516e99891269e42ad64410e05 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_587b7a8516e99891269e42ad64410e05 = MAKE_FUNCTION_FRAME(tstate, codeobj_587b7a8516e99891269e42ad64410e05, module_aiohttp$abc, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_587b7a8516e99891269e42ad64410e05->m_type_description == NULL);
 frame_587b7a8516e99891269e42ad64410e05 = cache_frame_587b7a8516e99891269e42ad64410e05;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_587b7a8516e99891269e42ad64410e05);
 assert(Py_REFCNT(frame_587b7a8516e99891269e42ad64410e05) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_called_value_1;
  PyObject *tmp_args_element_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[12]);

  if (unlikely(tmp_called_value_1 == NULL)) {
      tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
  }

  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 147;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_loop);
  tmp_args_element_value_1 = par_loop;
  frame_587b7a8516e99891269e42ad64410e05->m_frame.f_lineno = 147;
  tmp_assattr_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
  if (tmp_assattr_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 147;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
  Py_DECREF(tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 147;
   type_description_1 = "oo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_587b7a8516e99891269e42ad64410e05, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_587b7a8516e99891269e42ad64410e05->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_587b7a8516e99891269e42ad64410e05, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_587b7a8516e99891269e42ad64410e05,
     type_description_1,
     par_self,
     par_loop
 );


 // Release cached frame if used for exception.
 if (frame_587b7a8516e99891269e42ad64410e05 == cache_frame_587b7a8516e99891269e42ad64410e05) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_587b7a8516e99891269e42ad64410e05);
     cache_frame_587b7a8516e99891269e42ad64410e05 = NULL;
 }

 assertFrameObject(frame_587b7a8516e99891269e42ad64410e05);

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


static PyObject *impl_aiohttp$abc$$$function__23_write(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_chunk = python_pars[1];
 PyObject *tmp_return_value = NULL;

    // Actual function body.


 tmp_return_value = MAKE_COROUTINE_aiohttp$abc$$$function__23_write$$$coroutine__1_write(tstate);

 goto function_return_exit;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_chunk);
 Py_DECREF(par_chunk);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$abc$$$function__23_write$$$coroutine__1_write_locals {
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$abc$$$function__23_write$$$coroutine__1_write_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$abc$$$function__23_write$$$coroutine__1_write_locals *coroutine_heap = (struct aiohttp$abc$$$function__23_write$$$coroutine__1_write_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
 coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
 coroutine_heap->tmp_return_value = Py_None;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__23_write$$$coroutine__1_write(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$abc$$$function__23_write$$$coroutine__1_write_context,
        module_aiohttp$abc,
        mod_consts[15],
        mod_consts[16],
        codeobj_63a4e7b0edb3bc3efc83a716fcd7334b,
        NULL,
        0,
#if 1
        sizeof(struct aiohttp$abc$$$function__23_write$$$coroutine__1_write_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$abc$$$function__24_write_eof(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_chunk = python_pars[1];
 PyObject *tmp_return_value = NULL;

    // Actual function body.


 tmp_return_value = MAKE_COROUTINE_aiohttp$abc$$$function__24_write_eof$$$coroutine__1_write_eof(tstate);

 goto function_return_exit;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_chunk);
 Py_DECREF(par_chunk);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$abc$$$function__24_write_eof$$$coroutine__1_write_eof_locals {
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$abc$$$function__24_write_eof$$$coroutine__1_write_eof_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$abc$$$function__24_write_eof$$$coroutine__1_write_eof_locals *coroutine_heap = (struct aiohttp$abc$$$function__24_write_eof$$$coroutine__1_write_eof_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
 coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
 coroutine_heap->tmp_return_value = Py_None;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__24_write_eof$$$coroutine__1_write_eof(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$abc$$$function__24_write_eof$$$coroutine__1_write_eof_context,
        module_aiohttp$abc,
        mod_consts[18],
        mod_consts[19],
        codeobj_7c4849e9a1e3301e45851d45e160d9f3,
        NULL,
        0,
#if 1
        sizeof(struct aiohttp$abc$$$function__24_write_eof$$$coroutine__1_write_eof_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$abc$$$function__25_drain(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *tmp_return_value = NULL;

    // Actual function body.


 tmp_return_value = MAKE_COROUTINE_aiohttp$abc$$$function__25_drain$$$coroutine__1_drain(tstate);

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



#if 1
struct aiohttp$abc$$$function__25_drain$$$coroutine__1_drain_locals {
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$abc$$$function__25_drain$$$coroutine__1_drain_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$abc$$$function__25_drain$$$coroutine__1_drain_locals *coroutine_heap = (struct aiohttp$abc$$$function__25_drain$$$coroutine__1_drain_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
 coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
 coroutine_heap->tmp_return_value = Py_None;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__25_drain$$$coroutine__1_drain(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$abc$$$function__25_drain$$$coroutine__1_drain_context,
        module_aiohttp$abc,
        mod_consts[21],
        mod_consts[22],
        codeobj_f588d7837fd8e383b8ed8125c15775ea,
        NULL,
        0,
#if 1
        sizeof(struct aiohttp$abc$$$function__25_drain$$$coroutine__1_drain_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$abc$$$function__28_write_headers(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_status_line = python_pars[1];
 PyObject *par_headers = python_pars[2];
 PyObject *tmp_return_value = NULL;

    // Actual function body.


 tmp_return_value = MAKE_COROUTINE_aiohttp$abc$$$function__28_write_headers$$$coroutine__1_write_headers(tstate);

 goto function_return_exit;

 NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
 return NULL;


function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_status_line);
 Py_DECREF(par_status_line);
 CHECK_OBJECT(par_headers);
 Py_DECREF(par_headers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct aiohttp$abc$$$function__28_write_headers$$$coroutine__1_write_headers_locals {
 PyObject *tmp_return_value;
};
#endif

static PyObject *aiohttp$abc$$$function__28_write_headers$$$coroutine__1_write_headers_context(PyThreadState *tstate, struct Nuitka_CoroutineObject *coroutine, PyObject *yield_return_value) {
    CHECK_OBJECT(coroutine);
    assert(Nuitka_Coroutine_Check((PyObject *)coroutine));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
 struct aiohttp$abc$$$function__28_write_headers$$$coroutine__1_write_headers_locals *coroutine_heap = (struct aiohttp$abc$$$function__28_write_headers$$$coroutine__1_write_headers_locals *)coroutine->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:


    // Local variable initialization
 coroutine_heap->tmp_return_value = NULL;

    // Actual coroutine body.
 coroutine_heap->tmp_return_value = Py_None;
 Py_INCREF(coroutine_heap->tmp_return_value);
 goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must be present");


    return NULL;
    function_return_exit:;

    coroutine->m_returned = coroutine_heap->tmp_return_value;

    return NULL;

}

static PyObject *MAKE_COROUTINE_aiohttp$abc$$$function__28_write_headers$$$coroutine__1_write_headers(PyThreadState *tstate) {
    return Nuitka_Coroutine_New(
        tstate,
        aiohttp$abc$$$function__28_write_headers$$$coroutine__1_write_headers_context,
        module_aiohttp$abc,
        mod_consts[24],
        mod_consts[25],
        codeobj_926695d40958b5159b15590f1c39fd5b,
        NULL,
        0,
#if 1
        sizeof(struct aiohttp$abc$$$function__28_write_headers$$$coroutine__1_write_headers_locals)
#else
        0
#endif
    );
}


static PyObject *impl_aiohttp$abc$$$function__29___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
 PyObject *par_self = python_pars[0];
 PyObject *par_logger = python_pars[1];
 PyObject *par_log_format = python_pars[2];
 struct Nuitka_FrameObject *frame_de1452852943b445dd215076ea420a16;
 NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
 bool tmp_result;
 PyObject *exception_type = NULL;
 PyObject *exception_value = NULL;
 PyTracebackObject *exception_tb = NULL;
 NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
 static struct Nuitka_FrameObject *cache_frame_de1452852943b445dd215076ea420a16 = NULL;
 PyObject *tmp_return_value = NULL;

    // Actual function body.
 if (isFrameUnusable(cache_frame_de1452852943b445dd215076ea420a16)) {
     Py_XDECREF(cache_frame_de1452852943b445dd215076ea420a16);

#if _DEBUG_REFCOUNTS
     if (cache_frame_de1452852943b445dd215076ea420a16 == NULL) {
         count_active_frame_cache_instances += 1;
     } else {
         count_released_frame_cache_instances += 1;
     }
     count_allocated_frame_cache_instances += 1;
#endif
     cache_frame_de1452852943b445dd215076ea420a16 = MAKE_FUNCTION_FRAME(tstate, codeobj_de1452852943b445dd215076ea420a16, module_aiohttp$abc, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
 } else {
     count_hit_frame_cache_instances += 1;
#endif
 }

 assert(cache_frame_de1452852943b445dd215076ea420a16->m_type_description == NULL);
 frame_de1452852943b445dd215076ea420a16 = cache_frame_de1452852943b445dd215076ea420a16;

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_de1452852943b445dd215076ea420a16);
 assert(Py_REFCNT(frame_de1452852943b445dd215076ea420a16) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  CHECK_OBJECT(par_logger);
  tmp_assattr_value_1 = par_logger;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_1 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 204;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
 }
 {
  PyObject *tmp_assattr_value_2;
  PyObject *tmp_assattr_target_2;
  CHECK_OBJECT(par_log_format);
  tmp_assattr_value_2 = par_log_format;
  CHECK_OBJECT(par_self);
  tmp_assattr_target_2 = par_self;
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[27], tmp_assattr_value_2);
  if (tmp_result == false) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 205;
   type_description_1 = "ooo";
      goto frame_exception_exit_1;
  }
 }


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_1;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_de1452852943b445dd215076ea420a16, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_de1452852943b445dd215076ea420a16->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_de1452852943b445dd215076ea420a16, exception_lineno);
 }

 // Attaches locals to frame if any.
 Nuitka_Frame_AttachLocals(
     frame_de1452852943b445dd215076ea420a16,
     type_description_1,
     par_self,
     par_logger,
     par_log_format
 );


 // Release cached frame if used for exception.
 if (frame_de1452852943b445dd215076ea420a16 == cache_frame_de1452852943b445dd215076ea420a16) {
#if _DEBUG_REFCOUNTS
     count_active_frame_cache_instances -= 1;
     count_released_frame_cache_instances += 1;
#endif
     Py_DECREF(cache_frame_de1452852943b445dd215076ea420a16);
     cache_frame_de1452852943b445dd215076ea420a16 = NULL;
 }

 assertFrameObject(frame_de1452852943b445dd215076ea420a16);

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
 CHECK_OBJECT(par_logger);
 Py_DECREF(par_logger);
 CHECK_OBJECT(par_log_format);
 Py_DECREF(par_log_format);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
 CHECK_OBJECT(par_self);
 Py_DECREF(par_self);
 CHECK_OBJECT(par_logger);
 Py_DECREF(par_logger);
 CHECK_OBJECT(par_log_format);
 Py_DECREF(par_log_format);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__10_apps(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[115],
#if PYTHON_VERSION >= 0x300
        mod_consts[116],
#endif
        codeobj_6a5f2d53c4bf2ad228f4d7e11fc31898,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__11_add_app(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_34ff35f32421fad1e2da095dc62065c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[117],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__12_freeze(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[121],
#endif
        codeobj_31c106dbdaaa89eaa09eada41b776701,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[120],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__13___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__13___init__,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_7e82ffbd09361a6db4fdb3394c206670,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__14_request(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__14_request,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        mod_consts[125],
#endif
        codeobj_dfe49282c749b52793b12e593fc9bfba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__15___await__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_364b2979f7f0b35d6934ca4d0c92ca37,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[126],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__16_resolve(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__16_resolve,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[8],
#endif
        codeobj_9681cf25b33740989e98b499acc69a34,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__17_close(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__17_close,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[11],
#endif
        codeobj_169e9c3d0c2c0e501480b9b6990f3e94,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[9],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__18___init__(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__18___init__,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_587b7a8516e99891269e42ad64410e05,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_aiohttp$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__19_clear(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[147],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_edbfb084aac6bbb59fbf947fe3d96e48,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[146],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__1___init__,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_df5c9bc127c4737a0900c9a09b64f7b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__20_clear_domain(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_86ea472344d955a4e92daf15392a9e10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[150],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__21_update_cookies(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[156],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_49754db6898ade91c29c52c37e0e5167,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[155],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__22_filter_cookies(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_0e436b17db4cd8fd9ad53bc5a1e6bbc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[160],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__23_write(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__23_write,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[16],
#endif
        codeobj_63a4e7b0edb3bc3efc83a716fcd7334b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__24_write_eof(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__24_write_eof,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        mod_consts[19],
#endif
        codeobj_7c4849e9a1e3301e45851d45e160d9f3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__25_drain(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__25_drain,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[22],
#endif
        codeobj_f588d7837fd8e383b8ed8125c15775ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__26_enable_compression(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[175],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_7d7084ffb32ba5b65c2d9ac067e9db16,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[174],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__27_enable_chunking(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[178],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_ea0f989e98295f1aef63ba5eb6178108,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[177],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__28_write_headers(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__28_write_headers,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[25],
#endif
        codeobj_926695d40958b5159b15590f1c39fd5b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__29___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__29___init__,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_de1452852943b445dd215076ea420a16,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__2_post_init(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        mod_consts[91],
#endif
        codeobj_4fae7dee1d7649f9810d36db31af5e30,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[89],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__30_log(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        mod_consts[192],
#endif
        codeobj_3dffc9b53bfd784d2324a69ca9c9ef46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[190],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__3_frozen(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__3_frozen,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[95],
#endif
        codeobj_495578d6b065598174714512d89ba2e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__4_freeze(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__4_freeze,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_2c611e5ba7d9d6e873010d5b4825a76f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__5_resolve(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_aiohttp$abc$$$function__5_resolve,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[4],
#endif
        codeobj_cf26e5f3d22924bfbb311952c97f3f6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__6_handler(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_a697ae84acdde8ab2eba953b6709358c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[101],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__7_expect_handler(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        mod_consts[106],
#endif
        codeobj_df42426a521d8aada03bb64ff5c7c0a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[104],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__8_http_exception(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        mod_consts[109],
#endif
        codeobj_f800ec17740f99a62acae53491541dc9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[107],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_aiohttp$abc$$$function__9_get_info(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        mod_consts[113],
#endif
        codeobj_11e4132efe72cb9267d29086d6a00a79,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_aiohttp$abc,
        mod_consts[111],
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

static function_impl_code const function_table_aiohttp$abc[] = {
 impl_aiohttp$abc$$$function__1___init__,
 impl_aiohttp$abc$$$function__3_frozen,
 impl_aiohttp$abc$$$function__4_freeze,
 impl_aiohttp$abc$$$function__5_resolve,
 impl_aiohttp$abc$$$function__13___init__,
 impl_aiohttp$abc$$$function__14_request,
 impl_aiohttp$abc$$$function__16_resolve,
 impl_aiohttp$abc$$$function__17_close,
 impl_aiohttp$abc$$$function__18___init__,
 impl_aiohttp$abc$$$function__23_write,
 impl_aiohttp$abc$$$function__24_write_eof,
 impl_aiohttp$abc$$$function__25_drain,
 impl_aiohttp$abc$$$function__28_write_headers,
 impl_aiohttp$abc$$$function__29___init__,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_aiohttp$abc);

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
        module_aiohttp$abc,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_aiohttp$abc,
        sizeof(function_table_aiohttp$abc) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_aiohttp$abc(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("aiohttp$abc");

    // Store the module for future use.
    module_aiohttp$abc = module;

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
        PRINT_STRING("aiohttp$abc: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("aiohttp$abc: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.abc" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initaiohttp$abc\n");

    moduledict_aiohttp$abc = MODULE_DICT(module_aiohttp$abc);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_aiohttp$abc,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_aiohttp$abc,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[210]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_aiohttp$abc,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$abc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_aiohttp$abc,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_aiohttp$abc);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)const_str_plain___loader__, Nuitka_Loader_New(loader_entry));

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_aiohttp$abc);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
 PyObject *tmp_import_from_1__module = NULL;
 PyObject *tmp_import_from_2__module = NULL;
 PyObject *tmp_import_from_3__module = NULL;
 struct Nuitka_FrameObject *frame_d52e3d69d717b1ca63d036674ab13c1c;
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
 int tmp_res;
 PyObject *locals_aiohttp$abc$$$class__1_AbstractRouter_35 = NULL;
 PyObject *tmp_dictset_value;
 struct Nuitka_FrameObject *frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2;
 NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
 PyObject *locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60 = NULL;
 struct Nuitka_FrameObject *frame_64c4be64cdd2e0644573a8e24c15895c_3;
 NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
 PyObject *locals_aiohttp$abc$$$class__3_AbstractView_106 = NULL;
 struct Nuitka_FrameObject *frame_d7ab6ea207d34a14168c02ecb07a8ef8_4;
 NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
 PyObject *locals_aiohttp$abc$$$class__4_AbstractResolver_122 = NULL;
 struct Nuitka_FrameObject *frame_6a0fef63ad801b451815b24c42655bd1_5;
 NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
 PyObject *locals_aiohttp$abc$$$class__5_AbstractCookieJar_143 = NULL;
 struct Nuitka_FrameObject *frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6;
 NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
 PyObject *locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166 = NULL;
 struct Nuitka_FrameObject *frame_9a985ee683fe19769ee5711edc64c158_7;
 NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
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
 PyObject *locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200 = NULL;
 struct Nuitka_FrameObject *frame_690a67bc5eaf81b8d0f5805ca18e2fda_8;
 NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
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

    // Module init code if any


    // Module code.
 {
  PyObject *tmp_assign_source_1;
  tmp_assign_source_1 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_1);
 }
 {
  PyObject *tmp_assign_source_2;
  tmp_assign_source_2 = module_filename_obj;
  UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_2);
 }
 frame_d52e3d69d717b1ca63d036674ab13c1c = MAKE_MODULE_FRAME(codeobj_d52e3d69d717b1ca63d036674ab13c1c, module_aiohttp$abc);

 // Push the new frame as the currently active one, and we should be exclusively
 // owning it.
 pushFrameStackCompiledFrame(tstate, frame_d52e3d69d717b1ca63d036674ab13c1c);
 assert(Py_REFCNT(frame_d52e3d69d717b1ca63d036674ab13c1c) == 2);

 // Framed code:
 {
  PyObject *tmp_assattr_value_1;
  PyObject *tmp_assattr_target_1;
  tmp_assattr_value_1 = module_filename_obj;
  tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[30]);

  if (unlikely(tmp_assattr_target_1 == NULL)) {
      tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
  }

  assert(!(tmp_assattr_target_1 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
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
  tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[30]);

  if (unlikely(tmp_assattr_target_2 == NULL)) {
      tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[30]);
  }

  assert(!(tmp_assattr_target_2 == NULL));
  tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[32], tmp_assattr_value_2);
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
  UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_3);
 }
 {
  PyObject *tmp_assign_source_4;
  PyObject *tmp_name_value_1;
  PyObject *tmp_globals_arg_value_1;
  PyObject *tmp_locals_arg_value_1;
  PyObject *tmp_fromlist_value_1;
  PyObject *tmp_level_value_1;
  tmp_name_value_1 = mod_consts[34];
  tmp_globals_arg_value_1 = (PyObject *)moduledict_aiohttp$abc;
  tmp_locals_arg_value_1 = Py_None;
  tmp_fromlist_value_1 = Py_None;
  tmp_level_value_1 = mod_consts[35];
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 1;
  tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
  if (tmp_assign_source_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 1;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_4);
 }
 {
  PyObject *tmp_assign_source_5;
  PyObject *tmp_name_value_2;
  PyObject *tmp_globals_arg_value_2;
  PyObject *tmp_locals_arg_value_2;
  PyObject *tmp_fromlist_value_2;
  PyObject *tmp_level_value_2;
  tmp_name_value_2 = mod_consts[36];
  tmp_globals_arg_value_2 = (PyObject *)moduledict_aiohttp$abc;
  tmp_locals_arg_value_2 = Py_None;
  tmp_fromlist_value_2 = Py_None;
  tmp_level_value_2 = mod_consts[35];
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 2;
  tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
  if (tmp_assign_source_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 2;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_5);
 }
 {
  PyObject *tmp_assign_source_6;
  PyObject *tmp_name_value_3;
  PyObject *tmp_globals_arg_value_3;
  PyObject *tmp_locals_arg_value_3;
  PyObject *tmp_fromlist_value_3;
  PyObject *tmp_level_value_3;
  tmp_name_value_3 = mod_consts[37];
  tmp_globals_arg_value_3 = (PyObject *)moduledict_aiohttp$abc;
  tmp_locals_arg_value_3 = Py_None;
  tmp_fromlist_value_3 = mod_consts[38];
  tmp_level_value_3 = mod_consts[35];
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 3;
  tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
  if (tmp_assign_source_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_1__module == NULL);
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
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[39],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[39]);
  }

  if (tmp_assign_source_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_7);
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
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[40],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[40]);
  }

  if (tmp_assign_source_8 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 3;

      goto try_except_handler_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_8);
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
  PyObject *tmp_assign_source_9;
  PyObject *tmp_import_name_from_3;
  PyObject *tmp_name_value_4;
  PyObject *tmp_globals_arg_value_4;
  PyObject *tmp_locals_arg_value_4;
  PyObject *tmp_fromlist_value_4;
  PyObject *tmp_level_value_4;
  tmp_name_value_4 = mod_consts[41];
  tmp_globals_arg_value_4 = (PyObject *)moduledict_aiohttp$abc;
  tmp_locals_arg_value_4 = Py_None;
  tmp_fromlist_value_4 = mod_consts[42];
  tmp_level_value_4 = mod_consts[35];
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 4;
  tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
  if (tmp_import_name_from_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 4;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_3)) {
      tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_3,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[43],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[43]);
  }

  Py_DECREF(tmp_import_name_from_3);
  if (tmp_assign_source_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 4;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_9);
 }
 {
  PyObject *tmp_assign_source_10;
  PyObject *tmp_name_value_5;
  PyObject *tmp_globals_arg_value_5;
  PyObject *tmp_locals_arg_value_5;
  PyObject *tmp_fromlist_value_5;
  PyObject *tmp_level_value_5;
  tmp_name_value_5 = mod_consts[44];
  tmp_globals_arg_value_5 = (PyObject *)moduledict_aiohttp$abc;
  tmp_locals_arg_value_5 = Py_None;
  tmp_fromlist_value_5 = mod_consts[45];
  tmp_level_value_5 = mod_consts[35];
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 5;
  tmp_assign_source_10 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
  if (tmp_assign_source_10 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto frame_exception_exit_1;
  }
  assert(tmp_import_from_2__module == NULL);
  tmp_import_from_2__module = tmp_assign_source_10;
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_11;
  PyObject *tmp_import_name_from_4;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_4 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_4)) {
      tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_4,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[46],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[46]);
  }

  if (tmp_assign_source_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_11);
 }
 {
  PyObject *tmp_assign_source_12;
  PyObject *tmp_import_name_from_5;
  CHECK_OBJECT(tmp_import_from_2__module);
  tmp_import_name_from_5 = tmp_import_from_2__module;
  if (PyModule_Check(tmp_import_name_from_5)) {
      tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_5,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[47],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[47]);
  }

  if (tmp_assign_source_12 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 5;

      goto try_except_handler_2;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_12);
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
  PyObject *tmp_assign_source_13;
  tmp_assign_source_13 = IMPORT_HARD_TYPING();
  assert(!(tmp_assign_source_13 == NULL));
  assert(tmp_import_from_3__module == NULL);
  Py_INCREF(tmp_assign_source_13);
  tmp_import_from_3__module = tmp_assign_source_13;
 }
 {
  PyObject *tmp_assign_source_14;
  tmp_assign_source_14 = Py_False;
  UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_14);
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_15;
  PyObject *tmp_import_name_from_6;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_6 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_6)) {
      tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_6,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[49],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[49]);
  }

  if (tmp_assign_source_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_15);
 }
 {
  PyObject *tmp_assign_source_16;
  PyObject *tmp_import_name_from_7;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_7 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_7)) {
      tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_7,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[50],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[50]);
  }

  if (tmp_assign_source_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_16);
 }
 {
  PyObject *tmp_assign_source_17;
  PyObject *tmp_import_name_from_8;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_8 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_8)) {
      tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_8,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[51],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[51]);
  }

  if (tmp_assign_source_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_17);
 }
 {
  PyObject *tmp_assign_source_18;
  PyObject *tmp_import_name_from_9;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_9 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_9)) {
      tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_9,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[52],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[52]);
  }

  if (tmp_assign_source_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_18);
 }
 {
  PyObject *tmp_assign_source_19;
  PyObject *tmp_import_name_from_10;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_10 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_10)) {
      tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_10,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[53],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_19 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[53]);
  }

  if (tmp_assign_source_19 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_19);
 }
 {
  PyObject *tmp_assign_source_20;
  PyObject *tmp_import_name_from_11;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_11 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_11)) {
      tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_11,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[54],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_20 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[54]);
  }

  if (tmp_assign_source_20 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_20);
 }
 {
  PyObject *tmp_assign_source_21;
  PyObject *tmp_import_name_from_12;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_12 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_12)) {
      tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_12,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[55],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_21 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[55]);
  }

  if (tmp_assign_source_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_21);
 }
 {
  PyObject *tmp_assign_source_22;
  PyObject *tmp_import_name_from_13;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_13 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_13)) {
      tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_13,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[56],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_22 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_13, mod_consts[56]);
  }

  if (tmp_assign_source_22 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_22);
 }
 {
  PyObject *tmp_assign_source_23;
  PyObject *tmp_import_name_from_14;
  CHECK_OBJECT(tmp_import_from_3__module);
  tmp_import_name_from_14 = tmp_import_from_3__module;
  if (PyModule_Check(tmp_import_name_from_14)) {
      tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_14,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[57],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_23 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_14, mod_consts[57]);
  }

  if (tmp_assign_source_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 6;

      goto try_except_handler_3;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_23);
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
  PyObject *tmp_assign_source_24;
  PyObject *tmp_import_name_from_15;
  PyObject *tmp_name_value_6;
  PyObject *tmp_globals_arg_value_6;
  PyObject *tmp_locals_arg_value_6;
  PyObject *tmp_fromlist_value_6;
  PyObject *tmp_level_value_6;
  tmp_name_value_6 = mod_consts[58];
  tmp_globals_arg_value_6 = (PyObject *)moduledict_aiohttp$abc;
  tmp_locals_arg_value_6 = Py_None;
  tmp_fromlist_value_6 = mod_consts[59];
  tmp_level_value_6 = mod_consts[35];
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 19;
  tmp_import_name_from_15 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
  if (tmp_import_name_from_15 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 19;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_15)) {
      tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_15,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[60],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_24 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_15, mod_consts[60]);
  }

  Py_DECREF(tmp_import_name_from_15);
  if (tmp_assign_source_24 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 19;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_24);
 }
 {
  PyObject *tmp_assign_source_25;
  PyObject *tmp_import_name_from_16;
  PyObject *tmp_name_value_7;
  PyObject *tmp_globals_arg_value_7;
  PyObject *tmp_locals_arg_value_7;
  PyObject *tmp_fromlist_value_7;
  PyObject *tmp_level_value_7;
  tmp_name_value_7 = mod_consts[61];
  tmp_globals_arg_value_7 = (PyObject *)moduledict_aiohttp$abc;
  tmp_locals_arg_value_7 = Py_None;
  tmp_fromlist_value_7 = mod_consts[62];
  tmp_level_value_7 = mod_consts[35];
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 20;
  tmp_import_name_from_16 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
  if (tmp_import_name_from_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_16)) {
      tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_16,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[63],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_25 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_16, mod_consts[63]);
  }

  Py_DECREF(tmp_import_name_from_16);
  if (tmp_assign_source_25 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 20;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_25);
 }
 {
  PyObject *tmp_assign_source_26;
  PyObject *tmp_import_name_from_17;
  PyObject *tmp_name_value_8;
  PyObject *tmp_globals_arg_value_8;
  PyObject *tmp_locals_arg_value_8;
  PyObject *tmp_fromlist_value_8;
  PyObject *tmp_level_value_8;
  tmp_name_value_8 = mod_consts[64];
  tmp_globals_arg_value_8 = (PyObject *)moduledict_aiohttp$abc;
  tmp_locals_arg_value_8 = Py_None;
  tmp_fromlist_value_8 = mod_consts[65];
  tmp_level_value_8 = mod_consts[66];
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 22;
  tmp_import_name_from_17 = IMPORT_MODULE5(tstate, tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
  if (tmp_import_name_from_17 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 22;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_17)) {
      tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_17,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[12],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_26 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_17, mod_consts[12]);
  }

  Py_DECREF(tmp_import_name_from_17);
  if (tmp_assign_source_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 22;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_26);
 }
 {
  PyObject *tmp_assign_source_27;
  PyObject *tmp_import_name_from_18;
  PyObject *tmp_name_value_9;
  PyObject *tmp_globals_arg_value_9;
  PyObject *tmp_locals_arg_value_9;
  PyObject *tmp_fromlist_value_9;
  PyObject *tmp_level_value_9;
  tmp_name_value_9 = mod_consts[67];
  tmp_globals_arg_value_9 = (PyObject *)moduledict_aiohttp$abc;
  tmp_locals_arg_value_9 = Py_None;
  tmp_fromlist_value_9 = mod_consts[68];
  tmp_level_value_9 = mod_consts[66];
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 23;
  tmp_import_name_from_18 = IMPORT_MODULE5(tstate, tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
  if (tmp_import_name_from_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto frame_exception_exit_1;
  }
  if (PyModule_Check(tmp_import_name_from_18)) {
      tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
          tstate,
          tmp_import_name_from_18,
          (PyObject *)moduledict_aiohttp$abc,
          mod_consts[69],
          mod_consts[35]
      );
  } else {
      tmp_assign_source_27 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_18, mod_consts[69]);
  }

  Py_DECREF(tmp_import_name_from_18);
  if (tmp_assign_source_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 23;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_27);
 }
 {
  PyObject *tmp_assign_source_28;
  tmp_assign_source_28 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_28);
 }
 {
  PyObject *tmp_assign_source_29;
  tmp_assign_source_29 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_29);
 }
 {
  PyObject *tmp_assign_source_30;
  tmp_assign_source_30 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_30);
 }
 {
  PyObject *tmp_assign_source_31;
  tmp_assign_source_31 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_31);
 }
 {
  PyObject *tmp_assign_source_32;
  tmp_assign_source_32 = Py_None;
  UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_32);
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_33;
  PyObject *tmp_tuple_element_1;
  tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[39]);

  if (unlikely(tmp_tuple_element_1 == NULL)) {
      tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
  }

  if (tmp_tuple_element_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_4;
  }
  tmp_assign_source_33 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_33, 0, tmp_tuple_element_1);
  assert(tmp_class_creation_1__bases_orig == NULL);
  tmp_class_creation_1__bases_orig = tmp_assign_source_33;
 }
 {
  PyObject *tmp_assign_source_34;
  PyObject *tmp_dircall_arg1_1;
  CHECK_OBJECT(tmp_class_creation_1__bases_orig);
  tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
  Py_INCREF(tmp_dircall_arg1_1);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
      tmp_assign_source_34 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_34 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_4;
  }
  assert(tmp_class_creation_1__bases == NULL);
  tmp_class_creation_1__bases = tmp_assign_source_34;
 }
 {
  PyObject *tmp_assign_source_35;
  tmp_assign_source_35 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__class_decl_dict == NULL);
  tmp_class_creation_1__class_decl_dict = tmp_assign_source_35;
 }
 {
  PyObject *tmp_assign_source_36;
  PyObject *tmp_metaclass_value_1;
  nuitka_bool tmp_condition_result_1;
  int tmp_truth_name_1;
  PyObject *tmp_type_arg_1;
  PyObject *tmp_expression_value_1;
  PyObject *tmp_subscript_value_1;
  PyObject *tmp_bases_value_1;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
  if (tmp_truth_name_1 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_4;
  }
  tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_1;
  } else {
      goto condexpr_false_1;
  }
  condexpr_true_1:;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_expression_value_1 = tmp_class_creation_1__bases;
  tmp_subscript_value_1 = mod_consts[35];
  tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
  if (tmp_type_arg_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_4;
  }
  tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
  Py_DECREF(tmp_type_arg_1);
  if (tmp_metaclass_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_4;
  }
  goto condexpr_end_1;
  condexpr_false_1:;
  tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_1);
  condexpr_end_1:;
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_bases_value_1 = tmp_class_creation_1__bases;
  tmp_assign_source_36 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
  Py_DECREF(tmp_metaclass_value_1);
  if (tmp_assign_source_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_4;
  }
  assert(tmp_class_creation_1__metaclass == NULL);
  tmp_class_creation_1__metaclass = tmp_assign_source_36;
 }
 {
  bool tmp_condition_result_2;
  PyObject *tmp_expression_value_2;
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_2 = tmp_class_creation_1__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_4;
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
  PyObject *tmp_assign_source_37;
  PyObject *tmp_called_value_1;
  PyObject *tmp_expression_value_3;
  PyObject *tmp_args_value_1;
  PyObject *tmp_tuple_element_2;
  PyObject *tmp_kwargs_value_1;
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_3 = tmp_class_creation_1__metaclass;
  tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[75]);
  if (tmp_called_value_1 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_4;
  }
  tmp_tuple_element_2 = mod_consts[76];
  tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
  CHECK_OBJECT(tmp_class_creation_1__bases);
  tmp_tuple_element_2 = tmp_class_creation_1__bases;
  PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
  CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
  tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 35;
  tmp_assign_source_37 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
  Py_DECREF(tmp_called_value_1);
  Py_DECREF(tmp_args_value_1);
  if (tmp_assign_source_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_4;
  }
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_37;
 }
 {
  bool tmp_condition_result_3;
  PyObject *tmp_operand_value_1;
  PyObject *tmp_expression_value_4;
  CHECK_OBJECT(tmp_class_creation_1__prepared);
  tmp_expression_value_4 = tmp_class_creation_1__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_4;
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
  PyObject *tmp_expression_value_5;
  PyObject *tmp_name_value_10;
  PyObject *tmp_default_value_1;
  tmp_raise_type_1 = PyExc_TypeError;
  tmp_mod_expr_left_1 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_1__metaclass);
  tmp_expression_value_5 = tmp_class_creation_1__metaclass;
  tmp_name_value_10 = mod_consts[79];
  tmp_default_value_1 = mod_consts[80];
  tmp_tuple_element_3 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_10, tmp_default_value_1);
  if (tmp_tuple_element_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_4;
  }
  tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_6;
   PyObject *tmp_type_arg_2;
   PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_type_arg_2 = tmp_class_creation_1__prepared;
   tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
   assert(!(tmp_expression_value_6 == NULL));
   tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[79]);
   Py_DECREF(tmp_expression_value_6);
   if (tmp_tuple_element_3 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 35;

       goto tuple_build_exception_1;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
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


   exception_lineno = 35;

      goto try_except_handler_4;
  }
  exception_type = tmp_raise_type_1;
  Py_INCREF(tmp_raise_type_1);
  exception_value = tmp_raise_value_1;
  exception_lineno = 35;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_4;
 }
 branch_no_2:;
 goto branch_end_1;
 branch_no_1:;
 {
  PyObject *tmp_assign_source_38;
  tmp_assign_source_38 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_1__prepared == NULL);
  tmp_class_creation_1__prepared = tmp_assign_source_38;
 }
 branch_end_1:;
 {
  PyObject *tmp_assign_source_39;
  {
   PyObject *tmp_set_locals_1;
   CHECK_OBJECT(tmp_class_creation_1__prepared);
   tmp_set_locals_1 = tmp_class_creation_1__prepared;
   locals_aiohttp$abc$$$class__1_AbstractRouter_35 = tmp_set_locals_1;
   Py_INCREF(tmp_set_locals_1);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[81];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[82], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_6;
  }
  tmp_dictset_value = mod_consts[76];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_6;
  }
  frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2 = MAKE_CLASS_FRAME(tstate, codeobj_dc1cda96bfde0ca2b9d17a047ea9e6c8, module_aiohttp$abc, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2);
  assert(Py_REFCNT(frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2) == 2);

  // Framed code:
  {
   PyObject *tmp_annotations_1;
   tmp_annotations_1 = DICT_COPY(tstate, mod_consts[84]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$abc$$$function__1___init__(tmp_annotations_1);

   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[85], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 36;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_2;
   PyObject *tmp_dict_key_1;
   PyObject *tmp_dict_value_1;
   tmp_dict_key_1 = mod_consts[87];
   tmp_dict_value_1 = PyObject_GetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[72]);

   if (tmp_dict_value_1 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[72]);

     if (unlikely(tmp_dict_value_1 == NULL)) {
         tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
     }

     if (tmp_dict_value_1 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 39;
      type_description_2 = "o";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_dict_value_1);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_2 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
   Py_DECREF(tmp_dict_value_1);
   assert(!(tmp_res != 0));
   tmp_dict_key_1 = mod_consts[88];
   tmp_dict_value_1 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$abc$$$function__2_post_init(tmp_annotations_2);

   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[90], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 39;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   nuitka_bool tmp_condition_result_4;
   PyObject *tmp_called_value_2;
   PyObject *tmp_args_element_value_1;
   PyObject *tmp_annotations_3;
   PyObject *tmp_dict_key_2;
   PyObject *tmp_dict_value_2;
   PyObject *tmp_called_value_3;
   PyObject *tmp_args_element_value_2;
   PyObject *tmp_annotations_4;
   PyObject *tmp_dict_key_3;
   PyObject *tmp_dict_value_3;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[92]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 47;
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
   tmp_called_value_2 = PyObject_GetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[92]);

   if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[92], &exception_type, &exception_value);

    exception_lineno = 47;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }

   if (tmp_called_value_2 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 47;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_dict_key_2 = mod_consts[88];
   tmp_dict_value_2 = PyObject_GetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[93]);

   if (tmp_dict_value_2 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_2 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_2);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_3 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
   Py_DECREF(tmp_dict_value_2);
   assert(!(tmp_res != 0));


   tmp_args_element_value_1 = MAKE_FUNCTION_aiohttp$abc$$$function__3_frozen(tmp_annotations_3);

   frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2->m_frame.f_lineno = 47;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
   Py_DECREF(tmp_called_value_2);
   Py_DECREF(tmp_args_element_value_1);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 47;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   goto condexpr_end_2;
   condexpr_false_2:;
   tmp_called_value_3 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_3 = mod_consts[88];
   tmp_dict_value_3 = PyObject_GetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[93]);

   if (tmp_dict_value_3 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_3 = (PyObject *)&PyBool_Type;
           Py_INCREF(tmp_dict_value_3);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_4 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
   Py_DECREF(tmp_dict_value_3);
   assert(!(tmp_res != 0));


   tmp_args_element_value_2 = MAKE_FUNCTION_aiohttp$abc$$$function__3_frozen(tmp_annotations_4);

   frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2->m_frame.f_lineno = 47;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
   Py_DECREF(tmp_args_element_value_2);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 47;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   condexpr_end_2:;
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[94], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 48;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_annotations_5;
   tmp_annotations_5 = DICT_COPY(tstate, mod_consts[84]);


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$abc$$$function__4_freeze(tmp_annotations_5);

   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[96], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 51;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }
  {
   PyObject *tmp_called_value_4;
   PyObject *tmp_args_element_value_3;
   PyObject *tmp_annotations_6;
   PyObject *tmp_dict_key_4;
   PyObject *tmp_dict_value_4;
   tmp_called_value_4 = PyObject_GetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[40]);

   if (tmp_called_value_4 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_4 == NULL)) {
         tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_4 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 55;
      type_description_2 = "o";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_called_value_4);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_dict_key_4 = mod_consts[98];
   tmp_dict_value_4 = PyObject_GetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[71]);

   if (tmp_dict_value_4 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[71]);

     if (unlikely(tmp_dict_value_4 == NULL)) {
         tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
     }

     if (tmp_dict_value_4 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_4);

      exception_lineno = 56;
      type_description_2 = "o";
         goto frame_exception_exit_2;
     }
           Py_INCREF(tmp_dict_value_4);
       } else {
           goto frame_exception_exit_2;
       }
   }

   tmp_annotations_6 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
   Py_DECREF(tmp_dict_value_4);
   assert(!(tmp_res != 0));
   tmp_dict_key_4 = mod_consts[88];
   tmp_dict_value_4 = mod_consts[99];
   tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_4, tmp_dict_value_4);
   assert(!(tmp_res != 0));


   tmp_args_element_value_3 = MAKE_FUNCTION_aiohttp$abc$$$function__5_resolve(tmp_annotations_6);

   frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2->m_frame.f_lineno = 55;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
   Py_DECREF(tmp_called_value_4);
   Py_DECREF(tmp_args_element_value_3);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 55;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[3], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 56;
    type_description_2 = "o";
       goto frame_exception_exit_2;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_1;
  frame_exception_exit_2:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2,
      type_description_2,
      outline_0_var___class__
  );



  assertFrameObject(frame_dc1cda96bfde0ca2b9d17a047ea9e6c8_2);

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


    exception_lineno = 35;

       goto try_except_handler_6;
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
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__1_AbstractRouter_35, mod_consts[100], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 35;

      goto try_except_handler_6;
  }
  branch_no_3:;
  {
   PyObject *tmp_assign_source_40;
   PyObject *tmp_called_value_5;
   PyObject *tmp_args_value_2;
   PyObject *tmp_tuple_element_4;
   PyObject *tmp_kwargs_value_2;
   CHECK_OBJECT(tmp_class_creation_1__metaclass);
   tmp_called_value_5 = tmp_class_creation_1__metaclass;
   tmp_tuple_element_4 = mod_consts[76];
   tmp_args_value_2 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
   CHECK_OBJECT(tmp_class_creation_1__bases);
   tmp_tuple_element_4 = tmp_class_creation_1__bases;
   PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
   tmp_tuple_element_4 = locals_aiohttp$abc$$$class__1_AbstractRouter_35;
   PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
   CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
   tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
   frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 35;
   tmp_assign_source_40 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_2, tmp_kwargs_value_2);
   Py_DECREF(tmp_args_value_2);
   if (tmp_assign_source_40 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 35;

       goto try_except_handler_6;
   }
   assert(outline_0_var___class__ == NULL);
   outline_0_var___class__ = tmp_assign_source_40;
  }
  CHECK_OBJECT(outline_0_var___class__);
  tmp_assign_source_39 = outline_0_var___class__;
  Py_INCREF(tmp_assign_source_39);
  goto try_return_handler_6;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_6:;
  Py_DECREF(locals_aiohttp$abc$$$class__1_AbstractRouter_35);
  locals_aiohttp$abc$$$class__1_AbstractRouter_35 = NULL;
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

  Py_DECREF(locals_aiohttp$abc$$$class__1_AbstractRouter_35);
  locals_aiohttp$abc$$$class__1_AbstractRouter_35 = NULL;
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
  exception_lineno = 35;
  goto try_except_handler_4;
  outline_result_1:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_39);
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
 exception_type = exception_keeper_type_6;
 exception_value = exception_keeper_value_6;
 exception_tb = exception_keeper_tb_6;
 exception_lineno = exception_keeper_lineno_6;

 goto frame_exception_exit_1;
 // End of try:
 try_end_4:;
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
  PyObject *tmp_assign_source_41;
  PyObject *tmp_tuple_element_5;
  tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[39]);

  if (unlikely(tmp_tuple_element_5 == NULL)) {
      tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
  }

  if (tmp_tuple_element_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  tmp_assign_source_41 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_41, 0, tmp_tuple_element_5);
  assert(tmp_class_creation_2__bases_orig == NULL);
  tmp_class_creation_2__bases_orig = tmp_assign_source_41;
 }
 {
  PyObject *tmp_assign_source_42;
  PyObject *tmp_dircall_arg1_2;
  CHECK_OBJECT(tmp_class_creation_2__bases_orig);
  tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
  Py_INCREF(tmp_dircall_arg1_2);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
      tmp_assign_source_42 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_42 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  assert(tmp_class_creation_2__bases == NULL);
  tmp_class_creation_2__bases = tmp_assign_source_42;
 }
 {
  PyObject *tmp_assign_source_43;
  tmp_assign_source_43 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_2__class_decl_dict == NULL);
  tmp_class_creation_2__class_decl_dict = tmp_assign_source_43;
 }
 {
  PyObject *tmp_assign_source_44;
  PyObject *tmp_metaclass_value_2;
  nuitka_bool tmp_condition_result_6;
  int tmp_truth_name_2;
  PyObject *tmp_type_arg_3;
  PyObject *tmp_expression_value_7;
  PyObject *tmp_subscript_value_2;
  PyObject *tmp_bases_value_2;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
  if (tmp_truth_name_2 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_3;
  } else {
      goto condexpr_false_3;
  }
  condexpr_true_3:;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_expression_value_7 = tmp_class_creation_2__bases;
  tmp_subscript_value_2 = mod_consts[35];
  tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
  if (tmp_type_arg_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
  Py_DECREF(tmp_type_arg_3);
  if (tmp_metaclass_value_2 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  goto condexpr_end_3;
  condexpr_false_3:;
  tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_2);
  condexpr_end_3:;
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_bases_value_2 = tmp_class_creation_2__bases;
  tmp_assign_source_44 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
  Py_DECREF(tmp_metaclass_value_2);
  if (tmp_assign_source_44 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  assert(tmp_class_creation_2__metaclass == NULL);
  tmp_class_creation_2__metaclass = tmp_assign_source_44;
 }
 {
  bool tmp_condition_result_7;
  PyObject *tmp_expression_value_8;
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_8 = tmp_class_creation_2__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  tmp_condition_result_7 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_7 != false) {
      goto branch_yes_4;
  } else {
      goto branch_no_4;
  }
 }
 branch_yes_4:;
 {
  PyObject *tmp_assign_source_45;
  PyObject *tmp_called_value_6;
  PyObject *tmp_expression_value_9;
  PyObject *tmp_args_value_3;
  PyObject *tmp_tuple_element_6;
  PyObject *tmp_kwargs_value_3;
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_9 = tmp_class_creation_2__metaclass;
  tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[75]);
  if (tmp_called_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  tmp_tuple_element_6 = mod_consts[99];
  tmp_args_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
  CHECK_OBJECT(tmp_class_creation_2__bases);
  tmp_tuple_element_6 = tmp_class_creation_2__bases;
  PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
  CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
  tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 60;
  tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_3, tmp_kwargs_value_3);
  Py_DECREF(tmp_called_value_6);
  Py_DECREF(tmp_args_value_3);
  if (tmp_assign_source_45 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  assert(tmp_class_creation_2__prepared == NULL);
  tmp_class_creation_2__prepared = tmp_assign_source_45;
 }
 {
  bool tmp_condition_result_8;
  PyObject *tmp_operand_value_2;
  PyObject *tmp_expression_value_10;
  CHECK_OBJECT(tmp_class_creation_2__prepared);
  tmp_expression_value_10 = tmp_class_creation_2__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
  assert(!(tmp_res == -1));
  tmp_condition_result_8 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_8 != false) {
      goto branch_yes_5;
  } else {
      goto branch_no_5;
  }
 }
 branch_yes_5:;
 {
  PyObject *tmp_raise_type_2;
  PyObject *tmp_raise_value_2;
  PyObject *tmp_mod_expr_left_2;
  PyObject *tmp_mod_expr_right_2;
  PyObject *tmp_tuple_element_7;
  PyObject *tmp_expression_value_11;
  PyObject *tmp_name_value_11;
  PyObject *tmp_default_value_2;
  tmp_raise_type_2 = PyExc_TypeError;
  tmp_mod_expr_left_2 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_2__metaclass);
  tmp_expression_value_11 = tmp_class_creation_2__metaclass;
  tmp_name_value_11 = mod_consts[79];
  tmp_default_value_2 = mod_consts[80];
  tmp_tuple_element_7 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_11, tmp_default_value_2);
  if (tmp_tuple_element_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_12;
   PyObject *tmp_type_arg_4;
   PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
   CHECK_OBJECT(tmp_class_creation_2__prepared);
   tmp_type_arg_4 = tmp_class_creation_2__prepared;
   tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
   assert(!(tmp_expression_value_12 == NULL));
   tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[79]);
   Py_DECREF(tmp_expression_value_12);
   if (tmp_tuple_element_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 60;

       goto tuple_build_exception_2;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
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


   exception_lineno = 60;

      goto try_except_handler_7;
  }
  exception_type = tmp_raise_type_2;
  Py_INCREF(tmp_raise_type_2);
  exception_value = tmp_raise_value_2;
  exception_lineno = 60;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_7;
 }
 branch_no_5:;
 goto branch_end_4;
 branch_no_4:;
 {
  PyObject *tmp_assign_source_46;
  tmp_assign_source_46 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_2__prepared == NULL);
  tmp_class_creation_2__prepared = tmp_assign_source_46;
 }
 branch_end_4:;
 {
  PyObject *tmp_assign_source_47;
  {
   PyObject *tmp_set_locals_2;
   CHECK_OBJECT(tmp_class_creation_2__prepared);
   tmp_set_locals_2 = tmp_class_creation_2__prepared;
   locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60 = tmp_set_locals_2;
   Py_INCREF(tmp_set_locals_2);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[81];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[82], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_9;
  }
  tmp_dictset_value = mod_consts[99];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_9;
  }
  frame_64c4be64cdd2e0644573a8e24c15895c_3 = MAKE_CLASS_FRAME(tstate, codeobj_64c4be64cdd2e0644573a8e24c15895c, module_aiohttp$abc, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_64c4be64cdd2e0644573a8e24c15895c_3);
  assert(Py_REFCNT(frame_64c4be64cdd2e0644573a8e24c15895c_3) == 2);

  // Framed code:
  {
   nuitka_bool tmp_condition_result_9;
   PyObject *tmp_called_value_7;
   PyObject *tmp_args_element_value_4;
   PyObject *tmp_called_value_8;
   PyObject *tmp_args_element_value_5;
   PyObject *tmp_annotations_7;
   PyObject *tmp_dict_key_5;
   PyObject *tmp_dict_value_5;
   PyObject *tmp_expression_value_13;
   PyObject *tmp_subscript_value_3;
   PyObject *tmp_tuple_element_8;
   PyObject *tmp_list_element_1;
   PyObject *tmp_called_value_9;
   PyObject *tmp_args_element_value_6;
   PyObject *tmp_called_value_10;
   PyObject *tmp_args_element_value_7;
   PyObject *tmp_annotations_8;
   PyObject *tmp_dict_key_6;
   PyObject *tmp_dict_value_6;
   PyObject *tmp_expression_value_15;
   PyObject *tmp_subscript_value_5;
   PyObject *tmp_tuple_element_9;
   PyObject *tmp_list_element_2;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[92]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_condition_result_9 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_4;
   } else {
       goto condexpr_false_4;
   }
   condexpr_true_4:;
   tmp_called_value_7 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[92]);

   if (unlikely(tmp_called_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[92], &exception_type, &exception_value);

    exception_lineno = 61;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }

   if (tmp_called_value_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_called_value_8 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[40]);

   if (tmp_called_value_8 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_8 == NULL)) {
         tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_8 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_7);

      exception_lineno = 62;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_8);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_key_5 = mod_consts[88];
   tmp_expression_value_13 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[51]);

   if (tmp_expression_value_13 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[51]);

     if (unlikely(tmp_expression_value_13 == NULL)) {
         tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
     }

     if (tmp_expression_value_13 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_7);
      Py_DECREF(tmp_called_value_8);

      exception_lineno = 63;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_13);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_list_element_1 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[71]);

   if (tmp_list_element_1 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_list_element_1 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[71]);

     if (unlikely(tmp_list_element_1 == NULL)) {
         tmp_list_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
     }

     if (tmp_list_element_1 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_7);
      Py_DECREF(tmp_called_value_8);
      Py_DECREF(tmp_expression_value_13);

      exception_lineno = 63;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_list_element_1);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_tuple_element_8 = MAKE_LIST_EMPTY(tstate, 1);
   PyList_SET_ITEM(tmp_tuple_element_8, 0, tmp_list_element_1);
   tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(tstate, 2);
   {
    PyObject *tmp_expression_value_14;
    PyObject *tmp_subscript_value_4;
    PyTuple_SET_ITEM(tmp_subscript_value_3, 0, tmp_tuple_element_8);
    tmp_expression_value_14 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[50]);

    if (tmp_expression_value_14 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[50]);

      if (unlikely(tmp_expression_value_14 == NULL)) {
          tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
      }

      if (tmp_expression_value_14 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 63;
       type_description_2 = "o";
          goto tuple_build_exception_3;
      }
            Py_INCREF(tmp_expression_value_14);
        } else {
            goto tuple_build_exception_3;
        }
    }

    tmp_subscript_value_4 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[73]);

    if (tmp_subscript_value_4 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[73]);

      if (unlikely(tmp_subscript_value_4 == NULL)) {
          tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
      }

      if (tmp_subscript_value_4 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_14);

       exception_lineno = 63;
       type_description_2 = "o";
          goto tuple_build_exception_3;
      }
            Py_INCREF(tmp_subscript_value_4);
        } else {
            goto tuple_build_exception_3;
        }
    }

    tmp_tuple_element_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_4);
    Py_DECREF(tmp_expression_value_14);
    Py_DECREF(tmp_subscript_value_4);
    if (tmp_tuple_element_8 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 63;
     type_description_2 = "o";
        goto tuple_build_exception_3;
    }
    PyTuple_SET_ITEM(tmp_subscript_value_3, 1, tmp_tuple_element_8);
   }
   goto tuple_build_noexception_3;
   // Exception handling pass through code for tuple_build:
   tuple_build_exception_3:;
   Py_DECREF(tmp_called_value_7);
   Py_DECREF(tmp_called_value_8);
   Py_DECREF(tmp_expression_value_13);
   Py_DECREF(tmp_subscript_value_3);
   goto frame_exception_exit_3;
   // Finished with no exception for tuple_build:
   tuple_build_noexception_3:;
   tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
   Py_DECREF(tmp_expression_value_13);
   Py_DECREF(tmp_subscript_value_3);
   if (tmp_dict_value_5 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_7);
    Py_DECREF(tmp_called_value_8);

    exception_lineno = 63;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_annotations_7 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_5, tmp_dict_value_5);
   Py_DECREF(tmp_dict_value_5);
   assert(!(tmp_res != 0));


   tmp_args_element_value_5 = MAKE_FUNCTION_aiohttp$abc$$$function__6_handler(tmp_annotations_7);

   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 62;
   tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_5);
   Py_DECREF(tmp_called_value_8);
   Py_DECREF(tmp_args_element_value_5);
   if (tmp_args_element_value_4 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_7);

    exception_lineno = 62;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 61;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
   Py_DECREF(tmp_called_value_7);
   Py_DECREF(tmp_args_element_value_4);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   goto condexpr_end_4;
   condexpr_false_4:;
   tmp_called_value_9 = (PyObject *)&PyProperty_Type;
   tmp_called_value_10 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[40]);

   if (tmp_called_value_10 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_10 == NULL)) {
         tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_10 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 62;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_10);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_key_6 = mod_consts[88];
   tmp_expression_value_15 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[51]);

   if (tmp_expression_value_15 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[51]);

     if (unlikely(tmp_expression_value_15 == NULL)) {
         tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
     }

     if (tmp_expression_value_15 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_10);

      exception_lineno = 63;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_15);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_list_element_2 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[71]);

   if (tmp_list_element_2 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_list_element_2 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[71]);

     if (unlikely(tmp_list_element_2 == NULL)) {
         tmp_list_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
     }

     if (tmp_list_element_2 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_10);
      Py_DECREF(tmp_expression_value_15);

      exception_lineno = 63;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_list_element_2);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_tuple_element_9 = MAKE_LIST_EMPTY(tstate, 1);
   PyList_SET_ITEM(tmp_tuple_element_9, 0, tmp_list_element_2);
   tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
   {
    PyObject *tmp_expression_value_16;
    PyObject *tmp_subscript_value_6;
    PyTuple_SET_ITEM(tmp_subscript_value_5, 0, tmp_tuple_element_9);
    tmp_expression_value_16 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[50]);

    if (tmp_expression_value_16 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[50]);

      if (unlikely(tmp_expression_value_16 == NULL)) {
          tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
      }

      if (tmp_expression_value_16 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 63;
       type_description_2 = "o";
          goto tuple_build_exception_4;
      }
            Py_INCREF(tmp_expression_value_16);
        } else {
            goto tuple_build_exception_4;
        }
    }

    tmp_subscript_value_6 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[73]);

    if (tmp_subscript_value_6 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[73]);

      if (unlikely(tmp_subscript_value_6 == NULL)) {
          tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
      }

      if (tmp_subscript_value_6 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_16);

       exception_lineno = 63;
       type_description_2 = "o";
          goto tuple_build_exception_4;
      }
            Py_INCREF(tmp_subscript_value_6);
        } else {
            goto tuple_build_exception_4;
        }
    }

    tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_6);
    Py_DECREF(tmp_expression_value_16);
    Py_DECREF(tmp_subscript_value_6);
    if (tmp_tuple_element_9 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 63;
     type_description_2 = "o";
        goto tuple_build_exception_4;
    }
    PyTuple_SET_ITEM(tmp_subscript_value_5, 1, tmp_tuple_element_9);
   }
   goto tuple_build_noexception_4;
   // Exception handling pass through code for tuple_build:
   tuple_build_exception_4:;
   Py_DECREF(tmp_called_value_10);
   Py_DECREF(tmp_expression_value_15);
   Py_DECREF(tmp_subscript_value_5);
   goto frame_exception_exit_3;
   // Finished with no exception for tuple_build:
   tuple_build_noexception_4:;
   tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_5);
   Py_DECREF(tmp_expression_value_15);
   Py_DECREF(tmp_subscript_value_5);
   if (tmp_dict_value_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_10);

    exception_lineno = 63;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_annotations_8 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_6, tmp_dict_value_6);
   Py_DECREF(tmp_dict_value_6);
   assert(!(tmp_res != 0));


   tmp_args_element_value_7 = MAKE_FUNCTION_aiohttp$abc$$$function__6_handler(tmp_annotations_8);

   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 62;
   tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_7);
   Py_DECREF(tmp_called_value_10);
   Py_DECREF(tmp_args_element_value_7);
   if (tmp_args_element_value_6 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 62;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 61;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_6);
   Py_DECREF(tmp_args_element_value_6);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 61;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   condexpr_end_4:;
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[102], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 63;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
  }
  {
   nuitka_bool tmp_condition_result_10;
   PyObject *tmp_called_value_11;
   PyObject *tmp_args_element_value_8;
   PyObject *tmp_called_value_12;
   PyObject *tmp_args_element_value_9;
   PyObject *tmp_annotations_9;
   PyObject *tmp_dict_key_7;
   PyObject *tmp_dict_value_7;
   PyObject *tmp_expression_value_17;
   PyObject *tmp_subscript_value_7;
   PyObject *tmp_tuple_element_10;
   PyObject *tmp_list_element_3;
   PyObject *tmp_called_value_13;
   PyObject *tmp_args_element_value_10;
   PyObject *tmp_called_value_14;
   PyObject *tmp_args_element_value_11;
   PyObject *tmp_annotations_10;
   PyObject *tmp_dict_key_8;
   PyObject *tmp_dict_value_8;
   PyObject *tmp_expression_value_20;
   PyObject *tmp_subscript_value_10;
   PyObject *tmp_tuple_element_11;
   PyObject *tmp_list_element_4;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[92]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 66;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_condition_result_10 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_5;
   } else {
       goto condexpr_false_5;
   }
   condexpr_true_5:;
   tmp_called_value_11 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[92]);

   if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[92], &exception_type, &exception_value);

    exception_lineno = 66;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }

   if (tmp_called_value_11 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 66;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_called_value_12 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[40]);

   if (tmp_called_value_12 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_12 == NULL)) {
         tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_12 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_11);

      exception_lineno = 67;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_12);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_key_7 = mod_consts[88];
   tmp_expression_value_17 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[51]);

   if (tmp_expression_value_17 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[51]);

     if (unlikely(tmp_expression_value_17 == NULL)) {
         tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
     }

     if (tmp_expression_value_17 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_11);
      Py_DECREF(tmp_called_value_12);

      exception_lineno = 70;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_17);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_list_element_3 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[71]);

   if (tmp_list_element_3 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_list_element_3 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[71]);

     if (unlikely(tmp_list_element_3 == NULL)) {
         tmp_list_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
     }

     if (tmp_list_element_3 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_11);
      Py_DECREF(tmp_called_value_12);
      Py_DECREF(tmp_expression_value_17);

      exception_lineno = 70;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_list_element_3);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_tuple_element_10 = MAKE_LIST_EMPTY(tstate, 1);
   PyList_SET_ITEM(tmp_tuple_element_10, 0, tmp_list_element_3);
   tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
   {
    PyObject *tmp_expression_value_18;
    PyObject *tmp_subscript_value_8;
    PyObject *tmp_expression_value_19;
    PyObject *tmp_subscript_value_9;
    PyTuple_SET_ITEM(tmp_subscript_value_7, 0, tmp_tuple_element_10);
    tmp_expression_value_18 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[50]);

    if (tmp_expression_value_18 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[50]);

      if (unlikely(tmp_expression_value_18 == NULL)) {
          tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
      }

      if (tmp_expression_value_18 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 70;
       type_description_2 = "o";
          goto tuple_build_exception_5;
      }
            Py_INCREF(tmp_expression_value_18);
        } else {
            goto tuple_build_exception_5;
        }
    }

    tmp_expression_value_19 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[56]);

    if (tmp_expression_value_19 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[56]);

      if (unlikely(tmp_expression_value_19 == NULL)) {
          tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
      }

      if (tmp_expression_value_19 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_18);

       exception_lineno = 70;
       type_description_2 = "o";
          goto tuple_build_exception_5;
      }
            Py_INCREF(tmp_expression_value_19);
        } else {
            goto tuple_build_exception_5;
        }
    }

    tmp_subscript_value_9 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[73]);

    if (tmp_subscript_value_9 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[73]);

      if (unlikely(tmp_subscript_value_9 == NULL)) {
          tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
      }

      if (tmp_subscript_value_9 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_18);
       Py_DECREF(tmp_expression_value_19);

       exception_lineno = 70;
       type_description_2 = "o";
          goto tuple_build_exception_5;
      }
            Py_INCREF(tmp_subscript_value_9);
        } else {
            goto tuple_build_exception_5;
        }
    }

    tmp_subscript_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_9);
    Py_DECREF(tmp_expression_value_19);
    Py_DECREF(tmp_subscript_value_9);
    if (tmp_subscript_value_8 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
     Py_DECREF(tmp_expression_value_18);

     exception_lineno = 70;
     type_description_2 = "o";
        goto tuple_build_exception_5;
    }
    tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_8);
    Py_DECREF(tmp_expression_value_18);
    Py_DECREF(tmp_subscript_value_8);
    if (tmp_tuple_element_10 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 70;
     type_description_2 = "o";
        goto tuple_build_exception_5;
    }
    PyTuple_SET_ITEM(tmp_subscript_value_7, 1, tmp_tuple_element_10);
   }
   goto tuple_build_noexception_5;
   // Exception handling pass through code for tuple_build:
   tuple_build_exception_5:;
   Py_DECREF(tmp_called_value_11);
   Py_DECREF(tmp_called_value_12);
   Py_DECREF(tmp_expression_value_17);
   Py_DECREF(tmp_subscript_value_7);
   goto frame_exception_exit_3;
   // Finished with no exception for tuple_build:
   tuple_build_noexception_5:;
   tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_7);
   Py_DECREF(tmp_expression_value_17);
   Py_DECREF(tmp_subscript_value_7);
   if (tmp_dict_value_7 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_11);
    Py_DECREF(tmp_called_value_12);

    exception_lineno = 70;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_annotations_9 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_7, tmp_dict_value_7);
   Py_DECREF(tmp_dict_value_7);
   assert(!(tmp_res != 0));


   tmp_args_element_value_9 = MAKE_FUNCTION_aiohttp$abc$$$function__7_expect_handler(tmp_annotations_9);

   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 67;
   tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_9);
   Py_DECREF(tmp_called_value_12);
   Py_DECREF(tmp_args_element_value_9);
   if (tmp_args_element_value_8 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_11);

    exception_lineno = 67;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 66;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_8);
   Py_DECREF(tmp_called_value_11);
   Py_DECREF(tmp_args_element_value_8);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 66;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   goto condexpr_end_5;
   condexpr_false_5:;
   tmp_called_value_13 = (PyObject *)&PyProperty_Type;
   tmp_called_value_14 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[40]);

   if (tmp_called_value_14 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_14 == NULL)) {
         tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_14 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 67;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_14);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_key_8 = mod_consts[88];
   tmp_expression_value_20 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[51]);

   if (tmp_expression_value_20 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[51]);

     if (unlikely(tmp_expression_value_20 == NULL)) {
         tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
     }

     if (tmp_expression_value_20 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_14);

      exception_lineno = 70;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_20);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_list_element_4 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[71]);

   if (tmp_list_element_4 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_list_element_4 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[71]);

     if (unlikely(tmp_list_element_4 == NULL)) {
         tmp_list_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
     }

     if (tmp_list_element_4 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_14);
      Py_DECREF(tmp_expression_value_20);

      exception_lineno = 70;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_list_element_4);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_tuple_element_11 = MAKE_LIST_EMPTY(tstate, 1);
   PyList_SET_ITEM(tmp_tuple_element_11, 0, tmp_list_element_4);
   tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(tstate, 2);
   {
    PyObject *tmp_expression_value_21;
    PyObject *tmp_subscript_value_11;
    PyObject *tmp_expression_value_22;
    PyObject *tmp_subscript_value_12;
    PyTuple_SET_ITEM(tmp_subscript_value_10, 0, tmp_tuple_element_11);
    tmp_expression_value_21 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[50]);

    if (tmp_expression_value_21 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[50]);

      if (unlikely(tmp_expression_value_21 == NULL)) {
          tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[50]);
      }

      if (tmp_expression_value_21 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 70;
       type_description_2 = "o";
          goto tuple_build_exception_6;
      }
            Py_INCREF(tmp_expression_value_21);
        } else {
            goto tuple_build_exception_6;
        }
    }

    tmp_expression_value_22 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[56]);

    if (tmp_expression_value_22 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[56]);

      if (unlikely(tmp_expression_value_22 == NULL)) {
          tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
      }

      if (tmp_expression_value_22 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_21);

       exception_lineno = 70;
       type_description_2 = "o";
          goto tuple_build_exception_6;
      }
            Py_INCREF(tmp_expression_value_22);
        } else {
            goto tuple_build_exception_6;
        }
    }

    tmp_subscript_value_12 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[73]);

    if (tmp_subscript_value_12 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_subscript_value_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[73]);

      if (unlikely(tmp_subscript_value_12 == NULL)) {
          tmp_subscript_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
      }

      if (tmp_subscript_value_12 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_21);
       Py_DECREF(tmp_expression_value_22);

       exception_lineno = 70;
       type_description_2 = "o";
          goto tuple_build_exception_6;
      }
            Py_INCREF(tmp_subscript_value_12);
        } else {
            goto tuple_build_exception_6;
        }
    }

    tmp_subscript_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_12);
    Py_DECREF(tmp_expression_value_22);
    Py_DECREF(tmp_subscript_value_12);
    if (tmp_subscript_value_11 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
     Py_DECREF(tmp_expression_value_21);

     exception_lineno = 70;
     type_description_2 = "o";
        goto tuple_build_exception_6;
    }
    tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_11);
    Py_DECREF(tmp_expression_value_21);
    Py_DECREF(tmp_subscript_value_11);
    if (tmp_tuple_element_11 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 70;
     type_description_2 = "o";
        goto tuple_build_exception_6;
    }
    PyTuple_SET_ITEM(tmp_subscript_value_10, 1, tmp_tuple_element_11);
   }
   goto tuple_build_noexception_6;
   // Exception handling pass through code for tuple_build:
   tuple_build_exception_6:;
   Py_DECREF(tmp_called_value_14);
   Py_DECREF(tmp_expression_value_20);
   Py_DECREF(tmp_subscript_value_10);
   goto frame_exception_exit_3;
   // Finished with no exception for tuple_build:
   tuple_build_noexception_6:;
   tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_10);
   Py_DECREF(tmp_expression_value_20);
   Py_DECREF(tmp_subscript_value_10);
   if (tmp_dict_value_8 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_14);

    exception_lineno = 70;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_annotations_10 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
   Py_DECREF(tmp_dict_value_8);
   assert(!(tmp_res != 0));


   tmp_args_element_value_11 = MAKE_FUNCTION_aiohttp$abc$$$function__7_expect_handler(tmp_annotations_10);

   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 67;
   tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_11);
   Py_DECREF(tmp_called_value_14);
   Py_DECREF(tmp_args_element_value_11);
   if (tmp_args_element_value_10 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 67;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 66;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_13, tmp_args_element_value_10);
   Py_DECREF(tmp_args_element_value_10);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 66;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   condexpr_end_5:;
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[105], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 68;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
  }
  {
   nuitka_bool tmp_condition_result_11;
   PyObject *tmp_called_value_15;
   PyObject *tmp_args_element_value_12;
   PyObject *tmp_called_value_16;
   PyObject *tmp_args_element_value_13;
   PyObject *tmp_annotations_11;
   PyObject *tmp_dict_key_9;
   PyObject *tmp_dict_value_9;
   PyObject *tmp_expression_value_23;
   PyObject *tmp_subscript_value_13;
   PyObject *tmp_called_value_17;
   PyObject *tmp_args_element_value_14;
   PyObject *tmp_called_value_18;
   PyObject *tmp_args_element_value_15;
   PyObject *tmp_annotations_12;
   PyObject *tmp_dict_key_10;
   PyObject *tmp_dict_value_10;
   PyObject *tmp_expression_value_24;
   PyObject *tmp_subscript_value_14;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[92]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 73;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_condition_result_11 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_6;
   } else {
       goto condexpr_false_6;
   }
   condexpr_true_6:;
   tmp_called_value_15 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[92]);

   if (unlikely(tmp_called_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[92], &exception_type, &exception_value);

    exception_lineno = 73;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }

   if (tmp_called_value_15 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 73;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_called_value_16 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[40]);

   if (tmp_called_value_16 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_16 == NULL)) {
         tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_16 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_15);

      exception_lineno = 74;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_16);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_key_9 = mod_consts[88];
   tmp_expression_value_23 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[56]);

   if (tmp_expression_value_23 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[56]);

     if (unlikely(tmp_expression_value_23 == NULL)) {
         tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
     }

     if (tmp_expression_value_23 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_15);
      Py_DECREF(tmp_called_value_16);

      exception_lineno = 75;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_23);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_13 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[74]);

   if (tmp_subscript_value_13 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[74]);

     if (unlikely(tmp_subscript_value_13 == NULL)) {
         tmp_subscript_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
     }

     if (tmp_subscript_value_13 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_15);
      Py_DECREF(tmp_called_value_16);
      Py_DECREF(tmp_expression_value_23);

      exception_lineno = 75;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_subscript_value_13);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_13);
   Py_DECREF(tmp_expression_value_23);
   Py_DECREF(tmp_subscript_value_13);
   if (tmp_dict_value_9 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_15);
    Py_DECREF(tmp_called_value_16);

    exception_lineno = 75;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_annotations_11 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
   Py_DECREF(tmp_dict_value_9);
   assert(!(tmp_res != 0));


   tmp_args_element_value_13 = MAKE_FUNCTION_aiohttp$abc$$$function__8_http_exception(tmp_annotations_11);

   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 74;
   tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_13);
   Py_DECREF(tmp_called_value_16);
   Py_DECREF(tmp_args_element_value_13);
   if (tmp_args_element_value_12 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_15);

    exception_lineno = 74;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 73;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_12);
   Py_DECREF(tmp_called_value_15);
   Py_DECREF(tmp_args_element_value_12);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 73;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   goto condexpr_end_6;
   condexpr_false_6:;
   tmp_called_value_17 = (PyObject *)&PyProperty_Type;
   tmp_called_value_18 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[40]);

   if (tmp_called_value_18 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_18 == NULL)) {
         tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_18 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 74;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_18);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_key_10 = mod_consts[88];
   tmp_expression_value_24 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[56]);

   if (tmp_expression_value_24 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[56]);

     if (unlikely(tmp_expression_value_24 == NULL)) {
         tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
     }

     if (tmp_expression_value_24 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_18);

      exception_lineno = 75;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_24);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_14 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[74]);

   if (tmp_subscript_value_14 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[74]);

     if (unlikely(tmp_subscript_value_14 == NULL)) {
         tmp_subscript_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[74]);
     }

     if (tmp_subscript_value_14 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_18);
      Py_DECREF(tmp_expression_value_24);

      exception_lineno = 75;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_subscript_value_14);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_24, tmp_subscript_value_14);
   Py_DECREF(tmp_expression_value_24);
   Py_DECREF(tmp_subscript_value_14);
   if (tmp_dict_value_10 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_18);

    exception_lineno = 75;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_annotations_12 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_10, tmp_dict_value_10);
   Py_DECREF(tmp_dict_value_10);
   assert(!(tmp_res != 0));


   tmp_args_element_value_15 = MAKE_FUNCTION_aiohttp$abc$$$function__8_http_exception(tmp_annotations_12);

   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 74;
   tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_15);
   Py_DECREF(tmp_called_value_18);
   Py_DECREF(tmp_args_element_value_15);
   if (tmp_args_element_value_14 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 74;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 73;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_14);
   Py_DECREF(tmp_args_element_value_14);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 73;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   condexpr_end_6:;
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[108], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 75;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_called_value_19;
   PyObject *tmp_args_element_value_16;
   PyObject *tmp_annotations_13;
   PyObject *tmp_dict_key_11;
   PyObject *tmp_dict_value_11;
   PyObject *tmp_expression_value_25;
   PyObject *tmp_subscript_value_15;
   PyObject *tmp_tuple_element_12;
   tmp_called_value_19 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[40]);

   if (tmp_called_value_19 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_19 == NULL)) {
         tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_19 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 78;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_19);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_key_11 = mod_consts[88];
   tmp_expression_value_25 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[52]);

   if (tmp_expression_value_25 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[52]);

     if (unlikely(tmp_expression_value_25 == NULL)) {
         tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
     }

     if (tmp_expression_value_25 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_19);

      exception_lineno = 79;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_25);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_tuple_element_12 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[110]);

   if (tmp_tuple_element_12 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_tuple_element_12);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(tstate, 2);
   PyTuple_SET_ITEM(tmp_subscript_value_15, 0, tmp_tuple_element_12);
   tmp_tuple_element_12 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[49]);

   if (tmp_tuple_element_12 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[49]);

     if (unlikely(tmp_tuple_element_12 == NULL)) {
         tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
     }

     if (tmp_tuple_element_12 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 79;
      type_description_2 = "o";
         goto tuple_build_exception_7;
     }
           Py_INCREF(tmp_tuple_element_12);
       } else {
           goto tuple_build_exception_7;
       }
   }

   PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_12);
   goto tuple_build_noexception_7;
   // Exception handling pass through code for tuple_build:
   tuple_build_exception_7:;
   Py_DECREF(tmp_called_value_19);
   Py_DECREF(tmp_expression_value_25);
   Py_DECREF(tmp_subscript_value_15);
   goto frame_exception_exit_3;
   // Finished with no exception for tuple_build:
   tuple_build_noexception_7:;
   tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_25, tmp_subscript_value_15);
   Py_DECREF(tmp_expression_value_25);
   Py_DECREF(tmp_subscript_value_15);
   if (tmp_dict_value_11 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_19);

    exception_lineno = 79;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_annotations_13 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_11, tmp_dict_value_11);
   Py_DECREF(tmp_dict_value_11);
   assert(!(tmp_res != 0));


   tmp_args_element_value_16 = MAKE_FUNCTION_aiohttp$abc$$$function__9_get_info(tmp_annotations_13);

   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 78;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_16);
   Py_DECREF(tmp_called_value_19);
   Py_DECREF(tmp_args_element_value_16);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 78;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[112], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 79;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
  }
  {
   nuitka_bool tmp_condition_result_12;
   PyObject *tmp_called_value_20;
   PyObject *tmp_args_element_value_17;
   PyObject *tmp_called_value_21;
   PyObject *tmp_args_element_value_18;
   PyObject *tmp_annotations_14;
   PyObject *tmp_dict_key_12;
   PyObject *tmp_dict_value_12;
   PyObject *tmp_expression_value_26;
   PyObject *tmp_subscript_value_16;
   PyObject *tmp_tuple_element_13;
   PyObject *tmp_called_value_22;
   PyObject *tmp_args_element_value_19;
   PyObject *tmp_called_value_23;
   PyObject *tmp_args_element_value_20;
   PyObject *tmp_annotations_15;
   PyObject *tmp_dict_key_13;
   PyObject *tmp_dict_value_13;
   PyObject *tmp_expression_value_27;
   PyObject *tmp_subscript_value_17;
   PyObject *tmp_tuple_element_14;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[92]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 82;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_condition_result_12 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_7;
   } else {
       goto condexpr_false_7;
   }
   condexpr_true_7:;
   tmp_called_value_20 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[92]);

   if (unlikely(tmp_called_value_20 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[92], &exception_type, &exception_value);

    exception_lineno = 82;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }

   if (tmp_called_value_20 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 82;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_called_value_21 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[40]);

   if (tmp_called_value_21 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_21 == NULL)) {
         tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_21 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_20);

      exception_lineno = 83;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_21);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_key_12 = mod_consts[88];
   tmp_expression_value_26 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[57]);

   if (tmp_expression_value_26 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[57]);

     if (unlikely(tmp_expression_value_26 == NULL)) {
         tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
     }

     if (tmp_expression_value_26 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_20);
      Py_DECREF(tmp_called_value_21);

      exception_lineno = 84;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_26);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_tuple_element_13 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[72]);

   if (tmp_tuple_element_13 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[72]);

     if (unlikely(tmp_tuple_element_13 == NULL)) {
         tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
     }

     if (tmp_tuple_element_13 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_20);
      Py_DECREF(tmp_called_value_21);
      Py_DECREF(tmp_expression_value_26);

      exception_lineno = 84;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_tuple_element_13);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(tstate, 2);
   PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_13);
   tmp_tuple_element_13 = Py_Ellipsis;
   PyTuple_SET_ITEM0(tmp_subscript_value_16, 1, tmp_tuple_element_13);
   tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_26, tmp_subscript_value_16);
   Py_DECREF(tmp_expression_value_26);
   Py_DECREF(tmp_subscript_value_16);
   if (tmp_dict_value_12 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_20);
    Py_DECREF(tmp_called_value_21);

    exception_lineno = 84;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_annotations_14 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_12, tmp_dict_value_12);
   Py_DECREF(tmp_dict_value_12);
   assert(!(tmp_res != 0));


   tmp_args_element_value_18 = MAKE_FUNCTION_aiohttp$abc$$$function__10_apps(tmp_annotations_14);

   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 83;
   tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_18);
   Py_DECREF(tmp_called_value_21);
   Py_DECREF(tmp_args_element_value_18);
   if (tmp_args_element_value_17 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_20);

    exception_lineno = 83;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 82;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_17);
   Py_DECREF(tmp_called_value_20);
   Py_DECREF(tmp_args_element_value_17);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 82;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   goto condexpr_end_7;
   condexpr_false_7:;
   tmp_called_value_22 = (PyObject *)&PyProperty_Type;
   tmp_called_value_23 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[40]);

   if (tmp_called_value_23 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_23 == NULL)) {
         tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_23 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 83;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_23);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_key_13 = mod_consts[88];
   tmp_expression_value_27 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[57]);

   if (tmp_expression_value_27 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[57]);

     if (unlikely(tmp_expression_value_27 == NULL)) {
         tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[57]);
     }

     if (tmp_expression_value_27 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_23);

      exception_lineno = 84;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_expression_value_27);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_tuple_element_14 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[72]);

   if (tmp_tuple_element_14 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[72]);

     if (unlikely(tmp_tuple_element_14 == NULL)) {
         tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
     }

     if (tmp_tuple_element_14 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_23);
      Py_DECREF(tmp_expression_value_27);

      exception_lineno = 84;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_tuple_element_14);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(tstate, 2);
   PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_14);
   tmp_tuple_element_14 = Py_Ellipsis;
   PyTuple_SET_ITEM0(tmp_subscript_value_17, 1, tmp_tuple_element_14);
   tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_17);
   Py_DECREF(tmp_expression_value_27);
   Py_DECREF(tmp_subscript_value_17);
   if (tmp_dict_value_13 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_23);

    exception_lineno = 84;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_annotations_15 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_13, tmp_dict_value_13);
   Py_DECREF(tmp_dict_value_13);
   assert(!(tmp_res != 0));


   tmp_args_element_value_20 = MAKE_FUNCTION_aiohttp$abc$$$function__10_apps(tmp_annotations_15);

   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 83;
   tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_23, tmp_args_element_value_20);
   Py_DECREF(tmp_called_value_23);
   Py_DECREF(tmp_args_element_value_20);
   if (tmp_args_element_value_19 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 83;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 82;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_19);
   Py_DECREF(tmp_args_element_value_19);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 82;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   condexpr_end_7:;
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[115], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 84;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_called_value_24;
   PyObject *tmp_args_element_value_21;
   PyObject *tmp_annotations_16;
   PyObject *tmp_dict_key_14;
   PyObject *tmp_dict_value_14;
   tmp_called_value_24 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[40]);

   if (tmp_called_value_24 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_24 == NULL)) {
         tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_24 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 91;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_24);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_dict_key_14 = mod_consts[87];
   tmp_dict_value_14 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[72]);

   if (tmp_dict_value_14 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[72]);

     if (unlikely(tmp_dict_value_14 == NULL)) {
         tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
     }

     if (tmp_dict_value_14 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_24);

      exception_lineno = 92;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_dict_value_14);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_16 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_14, tmp_dict_value_14);
   Py_DECREF(tmp_dict_value_14);
   assert(!(tmp_res != 0));
   tmp_dict_key_14 = mod_consts[88];
   tmp_dict_value_14 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_14, tmp_dict_value_14);
   assert(!(tmp_res != 0));


   tmp_args_element_value_21 = MAKE_FUNCTION_aiohttp$abc$$$function__11_add_app(tmp_annotations_16);

   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 91;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_21);
   Py_DECREF(tmp_called_value_24);
   Py_DECREF(tmp_args_element_value_21);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 91;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[118], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 92;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
  }
  {
   PyObject *tmp_called_value_25;
   PyObject *tmp_args_element_value_22;
   PyObject *tmp_annotations_17;
   tmp_called_value_25 = PyObject_GetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[40]);

   if (tmp_called_value_25 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_25 == NULL)) {
         tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_25 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 95;
      type_description_2 = "o";
         goto frame_exception_exit_3;
     }
           Py_INCREF(tmp_called_value_25);
       } else {
           goto frame_exception_exit_3;
       }
   }

   tmp_annotations_17 = DICT_COPY(tstate, mod_consts[84]);


   tmp_args_element_value_22 = MAKE_FUNCTION_aiohttp$abc$$$function__12_freeze(tmp_annotations_17);

   frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame.f_lineno = 95;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_22);
   Py_DECREF(tmp_called_value_25);
   Py_DECREF(tmp_args_element_value_22);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 95;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[96], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 96;
    type_description_2 = "o";
       goto frame_exception_exit_3;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_2;
  frame_exception_exit_3:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_64c4be64cdd2e0644573a8e24c15895c_3, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_64c4be64cdd2e0644573a8e24c15895c_3->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_64c4be64cdd2e0644573a8e24c15895c_3, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_64c4be64cdd2e0644573a8e24c15895c_3,
      type_description_2,
      outline_1_var___class__
  );



  assertFrameObject(frame_64c4be64cdd2e0644573a8e24c15895c_3);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_2;
  frame_no_exception_2:;
  goto skip_nested_handling_2;
  nested_frame_exit_2:;

  goto try_except_handler_9;
  skip_nested_handling_2:;
  {
   nuitka_bool tmp_condition_result_13;
   PyObject *tmp_cmp_expr_left_2;
   PyObject *tmp_cmp_expr_right_2;
   CHECK_OBJECT(tmp_class_creation_2__bases);
   tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
   CHECK_OBJECT(tmp_class_creation_2__bases_orig);
   tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
   tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
   if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 60;

       goto try_except_handler_9;
   }
   if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
       goto branch_yes_6;
   } else {
       goto branch_no_6;
   }
  }
  branch_yes_6:;
  CHECK_OBJECT(tmp_class_creation_2__bases_orig);
  tmp_dictset_value = tmp_class_creation_2__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60, mod_consts[100], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 60;

      goto try_except_handler_9;
  }
  branch_no_6:;
  {
   PyObject *tmp_assign_source_48;
   PyObject *tmp_called_value_26;
   PyObject *tmp_args_value_4;
   PyObject *tmp_tuple_element_15;
   PyObject *tmp_kwargs_value_4;
   CHECK_OBJECT(tmp_class_creation_2__metaclass);
   tmp_called_value_26 = tmp_class_creation_2__metaclass;
   tmp_tuple_element_15 = mod_consts[99];
   tmp_args_value_4 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_15);
   CHECK_OBJECT(tmp_class_creation_2__bases);
   tmp_tuple_element_15 = tmp_class_creation_2__bases;
   PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_15);
   tmp_tuple_element_15 = locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60;
   PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_15);
   CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
   tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
   frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 60;
   tmp_assign_source_48 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_4, tmp_kwargs_value_4);
   Py_DECREF(tmp_args_value_4);
   if (tmp_assign_source_48 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 60;

       goto try_except_handler_9;
   }
   assert(outline_1_var___class__ == NULL);
   outline_1_var___class__ = tmp_assign_source_48;
  }
  CHECK_OBJECT(outline_1_var___class__);
  tmp_assign_source_47 = outline_1_var___class__;
  Py_INCREF(tmp_assign_source_47);
  goto try_return_handler_9;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_9:;
  Py_DECREF(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60);
  locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60 = NULL;
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

  Py_DECREF(locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60);
  locals_aiohttp$abc$$$class__2_AbstractMatchInfo_60 = NULL;
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
  exception_lineno = 60;
  goto try_except_handler_7;
  outline_result_2:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_47);
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
  PyObject *tmp_assign_source_49;
  PyObject *tmp_tuple_element_16;
  tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[39]);

  if (unlikely(tmp_tuple_element_16 == NULL)) {
      tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
  }

  if (tmp_tuple_element_16 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  tmp_assign_source_49 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_49, 0, tmp_tuple_element_16);
  assert(tmp_class_creation_3__bases_orig == NULL);
  tmp_class_creation_3__bases_orig = tmp_assign_source_49;
 }
 {
  PyObject *tmp_assign_source_50;
  PyObject *tmp_dircall_arg1_3;
  CHECK_OBJECT(tmp_class_creation_3__bases_orig);
  tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
  Py_INCREF(tmp_dircall_arg1_3);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
      tmp_assign_source_50 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_50 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  assert(tmp_class_creation_3__bases == NULL);
  tmp_class_creation_3__bases = tmp_assign_source_50;
 }
 {
  PyObject *tmp_assign_source_51;
  tmp_assign_source_51 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_3__class_decl_dict == NULL);
  tmp_class_creation_3__class_decl_dict = tmp_assign_source_51;
 }
 {
  PyObject *tmp_assign_source_52;
  PyObject *tmp_metaclass_value_3;
  nuitka_bool tmp_condition_result_14;
  int tmp_truth_name_3;
  PyObject *tmp_type_arg_5;
  PyObject *tmp_expression_value_28;
  PyObject *tmp_subscript_value_18;
  PyObject *tmp_bases_value_3;
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
  if (tmp_truth_name_3 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_8;
  } else {
      goto condexpr_false_8;
  }
  condexpr_true_8:;
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_expression_value_28 = tmp_class_creation_3__bases;
  tmp_subscript_value_18 = mod_consts[35];
  tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_28, tmp_subscript_value_18, 0);
  if (tmp_type_arg_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
  Py_DECREF(tmp_type_arg_5);
  if (tmp_metaclass_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  goto condexpr_end_8;
  condexpr_false_8:;
  tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_3);
  condexpr_end_8:;
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_bases_value_3 = tmp_class_creation_3__bases;
  tmp_assign_source_52 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
  Py_DECREF(tmp_metaclass_value_3);
  if (tmp_assign_source_52 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  assert(tmp_class_creation_3__metaclass == NULL);
  tmp_class_creation_3__metaclass = tmp_assign_source_52;
 }
 {
  bool tmp_condition_result_15;
  PyObject *tmp_expression_value_29;
  CHECK_OBJECT(tmp_class_creation_3__metaclass);
  tmp_expression_value_29 = tmp_class_creation_3__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_29, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  tmp_condition_result_15 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_15 != false) {
      goto branch_yes_7;
  } else {
      goto branch_no_7;
  }
 }
 branch_yes_7:;
 {
  PyObject *tmp_assign_source_53;
  PyObject *tmp_called_value_27;
  PyObject *tmp_expression_value_30;
  PyObject *tmp_args_value_5;
  PyObject *tmp_tuple_element_17;
  PyObject *tmp_kwargs_value_5;
  CHECK_OBJECT(tmp_class_creation_3__metaclass);
  tmp_expression_value_30 = tmp_class_creation_3__metaclass;
  tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[75]);
  if (tmp_called_value_27 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  tmp_tuple_element_17 = mod_consts[122];
  tmp_args_value_5 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_17);
  CHECK_OBJECT(tmp_class_creation_3__bases);
  tmp_tuple_element_17 = tmp_class_creation_3__bases;
  PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_17);
  CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
  tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 106;
  tmp_assign_source_53 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_5, tmp_kwargs_value_5);
  Py_DECREF(tmp_called_value_27);
  Py_DECREF(tmp_args_value_5);
  if (tmp_assign_source_53 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  assert(tmp_class_creation_3__prepared == NULL);
  tmp_class_creation_3__prepared = tmp_assign_source_53;
 }
 {
  bool tmp_condition_result_16;
  PyObject *tmp_operand_value_3;
  PyObject *tmp_expression_value_31;
  CHECK_OBJECT(tmp_class_creation_3__prepared);
  tmp_expression_value_31 = tmp_class_creation_3__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_31, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
  assert(!(tmp_res == -1));
  tmp_condition_result_16 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_16 != false) {
      goto branch_yes_8;
  } else {
      goto branch_no_8;
  }
 }
 branch_yes_8:;
 {
  PyObject *tmp_raise_type_3;
  PyObject *tmp_raise_value_3;
  PyObject *tmp_mod_expr_left_3;
  PyObject *tmp_mod_expr_right_3;
  PyObject *tmp_tuple_element_18;
  PyObject *tmp_expression_value_32;
  PyObject *tmp_name_value_12;
  PyObject *tmp_default_value_3;
  tmp_raise_type_3 = PyExc_TypeError;
  tmp_mod_expr_left_3 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_3__metaclass);
  tmp_expression_value_32 = tmp_class_creation_3__metaclass;
  tmp_name_value_12 = mod_consts[79];
  tmp_default_value_3 = mod_consts[80];
  tmp_tuple_element_18 = BUILTIN_GETATTR(tstate, tmp_expression_value_32, tmp_name_value_12, tmp_default_value_3);
  if (tmp_tuple_element_18 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_33;
   PyObject *tmp_type_arg_6;
   PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_18);
   CHECK_OBJECT(tmp_class_creation_3__prepared);
   tmp_type_arg_6 = tmp_class_creation_3__prepared;
   tmp_expression_value_33 = BUILTIN_TYPE1(tmp_type_arg_6);
   assert(!(tmp_expression_value_33 == NULL));
   tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[79]);
   Py_DECREF(tmp_expression_value_33);
   if (tmp_tuple_element_18 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 106;

       goto tuple_build_exception_8;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_18);
  }
  goto tuple_build_noexception_8;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_8:;
  Py_DECREF(tmp_mod_expr_right_3);
  goto try_except_handler_10;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_8:;
  tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
  Py_DECREF(tmp_mod_expr_right_3);
  if (tmp_raise_value_3 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_10;
  }
  exception_type = tmp_raise_type_3;
  Py_INCREF(tmp_raise_type_3);
  exception_value = tmp_raise_value_3;
  exception_lineno = 106;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_10;
 }
 branch_no_8:;
 goto branch_end_7;
 branch_no_7:;
 {
  PyObject *tmp_assign_source_54;
  tmp_assign_source_54 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_3__prepared == NULL);
  tmp_class_creation_3__prepared = tmp_assign_source_54;
 }
 branch_end_7:;
 {
  PyObject *tmp_assign_source_55;
  {
   PyObject *tmp_set_locals_3;
   CHECK_OBJECT(tmp_class_creation_3__prepared);
   tmp_set_locals_3 = tmp_class_creation_3__prepared;
   locals_aiohttp$abc$$$class__3_AbstractView_106 = tmp_set_locals_3;
   Py_INCREF(tmp_set_locals_3);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[81];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[82], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_12;
  }
  tmp_dictset_value = mod_consts[123];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[28], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_12;
  }
  tmp_dictset_value = mod_consts[122];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_12;
  }
  frame_d7ab6ea207d34a14168c02ecb07a8ef8_4 = MAKE_CLASS_FRAME(tstate, codeobj_d7ab6ea207d34a14168c02ecb07a8ef8, module_aiohttp$abc, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_d7ab6ea207d34a14168c02ecb07a8ef8_4);
  assert(Py_REFCNT(frame_d7ab6ea207d34a14168c02ecb07a8ef8_4) == 2);

  // Framed code:
  {
   PyObject *tmp_annotations_18;
   PyObject *tmp_dict_key_15;
   PyObject *tmp_dict_value_15;
   tmp_dict_key_15 = mod_consts[98];
   tmp_dict_value_15 = PyObject_GetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[71]);

   if (tmp_dict_value_15 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[71]);

     if (unlikely(tmp_dict_value_15 == NULL)) {
         tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
     }

     if (tmp_dict_value_15 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 109;
      type_description_2 = "o";
         goto frame_exception_exit_4;
     }
           Py_INCREF(tmp_dict_value_15);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_18 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_15, tmp_dict_value_15);
   Py_DECREF(tmp_dict_value_15);
   assert(!(tmp_res != 0));
   tmp_dict_key_15 = mod_consts[88];
   tmp_dict_value_15 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_15, tmp_dict_value_15);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$abc$$$function__13___init__(tmp_annotations_18);

   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[85], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 109;
    type_description_2 = "o";
       goto frame_exception_exit_4;
   }
  }
  {
   nuitka_bool tmp_condition_result_17;
   PyObject *tmp_called_value_28;
   PyObject *tmp_args_element_value_23;
   PyObject *tmp_annotations_19;
   PyObject *tmp_dict_key_16;
   PyObject *tmp_dict_value_16;
   PyObject *tmp_called_value_29;
   PyObject *tmp_args_element_value_24;
   PyObject *tmp_annotations_20;
   PyObject *tmp_dict_key_17;
   PyObject *tmp_dict_value_17;
   tmp_res = MAPPING_HAS_ITEM(tstate, locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[92]);

   if (tmp_res == -1) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 112;
    type_description_2 = "o";
       goto frame_exception_exit_4;
   }
   tmp_condition_result_17 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
   if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
       goto condexpr_true_9;
   } else {
       goto condexpr_false_9;
   }
   condexpr_true_9:;
   tmp_called_value_28 = PyObject_GetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[92]);

   if (unlikely(tmp_called_value_28 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[92], &exception_type, &exception_value);

    exception_lineno = 112;
    type_description_2 = "o";
       goto frame_exception_exit_4;
   }

   if (tmp_called_value_28 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 112;
    type_description_2 = "o";
       goto frame_exception_exit_4;
   }
   tmp_dict_key_16 = mod_consts[88];
   tmp_dict_value_16 = PyObject_GetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[71]);

   if (tmp_dict_value_16 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[71]);

     if (unlikely(tmp_dict_value_16 == NULL)) {
         tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
     }

     if (tmp_dict_value_16 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_28);

      exception_lineno = 113;
      type_description_2 = "o";
         goto frame_exception_exit_4;
     }
           Py_INCREF(tmp_dict_value_16);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_19 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_16, tmp_dict_value_16);
   Py_DECREF(tmp_dict_value_16);
   assert(!(tmp_res != 0));


   tmp_args_element_value_23 = MAKE_FUNCTION_aiohttp$abc$$$function__14_request(tmp_annotations_19);

   frame_d7ab6ea207d34a14168c02ecb07a8ef8_4->m_frame.f_lineno = 112;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_23);
   Py_DECREF(tmp_called_value_28);
   Py_DECREF(tmp_args_element_value_23);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 112;
    type_description_2 = "o";
       goto frame_exception_exit_4;
   }
   goto condexpr_end_9;
   condexpr_false_9:;
   tmp_called_value_29 = (PyObject *)&PyProperty_Type;
   tmp_dict_key_17 = mod_consts[88];
   tmp_dict_value_17 = PyObject_GetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[71]);

   if (tmp_dict_value_17 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[71]);

     if (unlikely(tmp_dict_value_17 == NULL)) {
         tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[71]);
     }

     if (tmp_dict_value_17 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 113;
      type_description_2 = "o";
         goto frame_exception_exit_4;
     }
           Py_INCREF(tmp_dict_value_17);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_annotations_20 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_17, tmp_dict_value_17);
   Py_DECREF(tmp_dict_value_17);
   assert(!(tmp_res != 0));


   tmp_args_element_value_24 = MAKE_FUNCTION_aiohttp$abc$$$function__14_request(tmp_annotations_20);

   frame_d7ab6ea207d34a14168c02ecb07a8ef8_4->m_frame.f_lineno = 112;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_29, tmp_args_element_value_24);
   Py_DECREF(tmp_args_element_value_24);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 112;
    type_description_2 = "o";
       goto frame_exception_exit_4;
   }
   condexpr_end_9:;
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[98], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 113;
    type_description_2 = "o";
       goto frame_exception_exit_4;
   }
  }
  {
   PyObject *tmp_called_value_30;
   PyObject *tmp_args_element_value_25;
   PyObject *tmp_annotations_21;
   PyObject *tmp_dict_key_18;
   PyObject *tmp_dict_value_18;
   PyObject *tmp_expression_value_34;
   PyObject *tmp_subscript_value_19;
   PyObject *tmp_tuple_element_19;
   tmp_called_value_30 = PyObject_GetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[40]);

   if (tmp_called_value_30 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_30 == NULL)) {
         tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_30 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 117;
      type_description_2 = "o";
         goto frame_exception_exit_4;
     }
           Py_INCREF(tmp_called_value_30);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_dict_key_18 = mod_consts[88];
   tmp_expression_value_34 = PyObject_GetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[53]);

   if (tmp_expression_value_34 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[53]);

     if (unlikely(tmp_expression_value_34 == NULL)) {
         tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[53]);
     }

     if (tmp_expression_value_34 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_30);

      exception_lineno = 118;
      type_description_2 = "o";
         goto frame_exception_exit_4;
     }
           Py_INCREF(tmp_expression_value_34);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_tuple_element_19 = PyObject_GetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[49]);

   if (tmp_tuple_element_19 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[49]);

     if (unlikely(tmp_tuple_element_19 == NULL)) {
         tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
     }

     if (tmp_tuple_element_19 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_30);
      Py_DECREF(tmp_expression_value_34);

      exception_lineno = 118;
      type_description_2 = "o";
         goto frame_exception_exit_4;
     }
           Py_INCREF(tmp_tuple_element_19);
       } else {
           goto frame_exception_exit_4;
       }
   }

   tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM(tmp_subscript_value_19, 0, tmp_tuple_element_19);
   tmp_tuple_element_19 = Py_None;
   PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_19);
   tmp_tuple_element_19 = PyObject_GetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[73]);

   if (tmp_tuple_element_19 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[73]);

     if (unlikely(tmp_tuple_element_19 == NULL)) {
         tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
     }

     if (tmp_tuple_element_19 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 118;
      type_description_2 = "o";
         goto tuple_build_exception_9;
     }
           Py_INCREF(tmp_tuple_element_19);
       } else {
           goto tuple_build_exception_9;
       }
   }

   PyTuple_SET_ITEM(tmp_subscript_value_19, 2, tmp_tuple_element_19);
   goto tuple_build_noexception_9;
   // Exception handling pass through code for tuple_build:
   tuple_build_exception_9:;
   Py_DECREF(tmp_called_value_30);
   Py_DECREF(tmp_expression_value_34);
   Py_DECREF(tmp_subscript_value_19);
   goto frame_exception_exit_4;
   // Finished with no exception for tuple_build:
   tuple_build_noexception_9:;
   tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_34, tmp_subscript_value_19);
   Py_DECREF(tmp_expression_value_34);
   Py_DECREF(tmp_subscript_value_19);
   if (tmp_dict_value_18 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_30);

    exception_lineno = 118;
    type_description_2 = "o";
       goto frame_exception_exit_4;
   }
   tmp_annotations_21 = _PyDict_NewPresized( 1 );
   tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_18, tmp_dict_value_18);
   Py_DECREF(tmp_dict_value_18);
   assert(!(tmp_res != 0));


   tmp_args_element_value_25 = MAKE_FUNCTION_aiohttp$abc$$$function__15___await__(tmp_annotations_21);

   frame_d7ab6ea207d34a14168c02ecb07a8ef8_4->m_frame.f_lineno = 117;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_25);
   Py_DECREF(tmp_called_value_30);
   Py_DECREF(tmp_args_element_value_25);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 117;
    type_description_2 = "o";
       goto frame_exception_exit_4;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[127], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 118;
    type_description_2 = "o";
       goto frame_exception_exit_4;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_3;
  frame_exception_exit_4:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_d7ab6ea207d34a14168c02ecb07a8ef8_4, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_d7ab6ea207d34a14168c02ecb07a8ef8_4->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_d7ab6ea207d34a14168c02ecb07a8ef8_4, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_d7ab6ea207d34a14168c02ecb07a8ef8_4,
      type_description_2,
      outline_2_var___class__
  );



  assertFrameObject(frame_d7ab6ea207d34a14168c02ecb07a8ef8_4);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_3;
  frame_no_exception_3:;
  goto skip_nested_handling_3;
  nested_frame_exit_3:;

  goto try_except_handler_12;
  skip_nested_handling_3:;
  {
   nuitka_bool tmp_condition_result_18;
   PyObject *tmp_cmp_expr_left_3;
   PyObject *tmp_cmp_expr_right_3;
   CHECK_OBJECT(tmp_class_creation_3__bases);
   tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
   CHECK_OBJECT(tmp_class_creation_3__bases_orig);
   tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
   tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
   if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 106;

       goto try_except_handler_12;
   }
   if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
       goto branch_yes_9;
   } else {
       goto branch_no_9;
   }
  }
  branch_yes_9:;
  CHECK_OBJECT(tmp_class_creation_3__bases_orig);
  tmp_dictset_value = tmp_class_creation_3__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__3_AbstractView_106, mod_consts[100], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 106;

      goto try_except_handler_12;
  }
  branch_no_9:;
  {
   PyObject *tmp_assign_source_56;
   PyObject *tmp_called_value_31;
   PyObject *tmp_args_value_6;
   PyObject *tmp_tuple_element_20;
   PyObject *tmp_kwargs_value_6;
   CHECK_OBJECT(tmp_class_creation_3__metaclass);
   tmp_called_value_31 = tmp_class_creation_3__metaclass;
   tmp_tuple_element_20 = mod_consts[122];
   tmp_args_value_6 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_20);
   CHECK_OBJECT(tmp_class_creation_3__bases);
   tmp_tuple_element_20 = tmp_class_creation_3__bases;
   PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_20);
   tmp_tuple_element_20 = locals_aiohttp$abc$$$class__3_AbstractView_106;
   PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_20);
   CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
   tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
   frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 106;
   tmp_assign_source_56 = CALL_FUNCTION(tstate, tmp_called_value_31, tmp_args_value_6, tmp_kwargs_value_6);
   Py_DECREF(tmp_args_value_6);
   if (tmp_assign_source_56 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 106;

       goto try_except_handler_12;
   }
   assert(outline_2_var___class__ == NULL);
   outline_2_var___class__ = tmp_assign_source_56;
  }
  CHECK_OBJECT(outline_2_var___class__);
  tmp_assign_source_55 = outline_2_var___class__;
  Py_INCREF(tmp_assign_source_55);
  goto try_return_handler_12;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_12:;
  Py_DECREF(locals_aiohttp$abc$$$class__3_AbstractView_106);
  locals_aiohttp$abc$$$class__3_AbstractView_106 = NULL;
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

  Py_DECREF(locals_aiohttp$abc$$$class__3_AbstractView_106);
  locals_aiohttp$abc$$$class__3_AbstractView_106 = NULL;
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
  exception_lineno = 106;
  goto try_except_handler_10;
  outline_result_3:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_55);
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
  PyObject *tmp_assign_source_57;
  PyObject *tmp_tuple_element_21;
  tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[39]);

  if (unlikely(tmp_tuple_element_21 == NULL)) {
      tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
  }

  if (tmp_tuple_element_21 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  tmp_assign_source_57 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_21);
  assert(tmp_class_creation_4__bases_orig == NULL);
  tmp_class_creation_4__bases_orig = tmp_assign_source_57;
 }
 {
  PyObject *tmp_assign_source_58;
  PyObject *tmp_dircall_arg1_4;
  CHECK_OBJECT(tmp_class_creation_4__bases_orig);
  tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
  Py_INCREF(tmp_dircall_arg1_4);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
      tmp_assign_source_58 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_58 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  assert(tmp_class_creation_4__bases == NULL);
  tmp_class_creation_4__bases = tmp_assign_source_58;
 }
 {
  PyObject *tmp_assign_source_59;
  tmp_assign_source_59 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_4__class_decl_dict == NULL);
  tmp_class_creation_4__class_decl_dict = tmp_assign_source_59;
 }
 {
  PyObject *tmp_assign_source_60;
  PyObject *tmp_metaclass_value_4;
  nuitka_bool tmp_condition_result_19;
  int tmp_truth_name_4;
  PyObject *tmp_type_arg_7;
  PyObject *tmp_expression_value_35;
  PyObject *tmp_subscript_value_20;
  PyObject *tmp_bases_value_4;
  CHECK_OBJECT(tmp_class_creation_4__bases);
  tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
  if (tmp_truth_name_4 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  tmp_condition_result_19 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_10;
  } else {
      goto condexpr_false_10;
  }
  condexpr_true_10:;
  CHECK_OBJECT(tmp_class_creation_4__bases);
  tmp_expression_value_35 = tmp_class_creation_4__bases;
  tmp_subscript_value_20 = mod_consts[35];
  tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_35, tmp_subscript_value_20, 0);
  if (tmp_type_arg_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
  Py_DECREF(tmp_type_arg_7);
  if (tmp_metaclass_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  goto condexpr_end_10;
  condexpr_false_10:;
  tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_4);
  condexpr_end_10:;
  CHECK_OBJECT(tmp_class_creation_4__bases);
  tmp_bases_value_4 = tmp_class_creation_4__bases;
  tmp_assign_source_60 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
  Py_DECREF(tmp_metaclass_value_4);
  if (tmp_assign_source_60 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  assert(tmp_class_creation_4__metaclass == NULL);
  tmp_class_creation_4__metaclass = tmp_assign_source_60;
 }
 {
  bool tmp_condition_result_20;
  PyObject *tmp_expression_value_36;
  CHECK_OBJECT(tmp_class_creation_4__metaclass);
  tmp_expression_value_36 = tmp_class_creation_4__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_36, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  tmp_condition_result_20 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_20 != false) {
      goto branch_yes_10;
  } else {
      goto branch_no_10;
  }
 }
 branch_yes_10:;
 {
  PyObject *tmp_assign_source_61;
  PyObject *tmp_called_value_32;
  PyObject *tmp_expression_value_37;
  PyObject *tmp_args_value_7;
  PyObject *tmp_tuple_element_22;
  PyObject *tmp_kwargs_value_7;
  CHECK_OBJECT(tmp_class_creation_4__metaclass);
  tmp_expression_value_37 = tmp_class_creation_4__metaclass;
  tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[75]);
  if (tmp_called_value_32 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  tmp_tuple_element_22 = mod_consts[129];
  tmp_args_value_7 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_22);
  CHECK_OBJECT(tmp_class_creation_4__bases);
  tmp_tuple_element_22 = tmp_class_creation_4__bases;
  PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_22);
  CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
  tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 122;
  tmp_assign_source_61 = CALL_FUNCTION(tstate, tmp_called_value_32, tmp_args_value_7, tmp_kwargs_value_7);
  Py_DECREF(tmp_called_value_32);
  Py_DECREF(tmp_args_value_7);
  if (tmp_assign_source_61 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  assert(tmp_class_creation_4__prepared == NULL);
  tmp_class_creation_4__prepared = tmp_assign_source_61;
 }
 {
  bool tmp_condition_result_21;
  PyObject *tmp_operand_value_4;
  PyObject *tmp_expression_value_38;
  CHECK_OBJECT(tmp_class_creation_4__prepared);
  tmp_expression_value_38 = tmp_class_creation_4__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_38, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
  assert(!(tmp_res == -1));
  tmp_condition_result_21 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_21 != false) {
      goto branch_yes_11;
  } else {
      goto branch_no_11;
  }
 }
 branch_yes_11:;
 {
  PyObject *tmp_raise_type_4;
  PyObject *tmp_raise_value_4;
  PyObject *tmp_mod_expr_left_4;
  PyObject *tmp_mod_expr_right_4;
  PyObject *tmp_tuple_element_23;
  PyObject *tmp_expression_value_39;
  PyObject *tmp_name_value_13;
  PyObject *tmp_default_value_4;
  tmp_raise_type_4 = PyExc_TypeError;
  tmp_mod_expr_left_4 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_4__metaclass);
  tmp_expression_value_39 = tmp_class_creation_4__metaclass;
  tmp_name_value_13 = mod_consts[79];
  tmp_default_value_4 = mod_consts[80];
  tmp_tuple_element_23 = BUILTIN_GETATTR(tstate, tmp_expression_value_39, tmp_name_value_13, tmp_default_value_4);
  if (tmp_tuple_element_23 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_40;
   PyObject *tmp_type_arg_8;
   PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_23);
   CHECK_OBJECT(tmp_class_creation_4__prepared);
   tmp_type_arg_8 = tmp_class_creation_4__prepared;
   tmp_expression_value_40 = BUILTIN_TYPE1(tmp_type_arg_8);
   assert(!(tmp_expression_value_40 == NULL));
   tmp_tuple_element_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[79]);
   Py_DECREF(tmp_expression_value_40);
   if (tmp_tuple_element_23 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 122;

       goto tuple_build_exception_10;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_23);
  }
  goto tuple_build_noexception_10;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_10:;
  Py_DECREF(tmp_mod_expr_right_4);
  goto try_except_handler_13;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_10:;
  tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
  Py_DECREF(tmp_mod_expr_right_4);
  if (tmp_raise_value_4 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_13;
  }
  exception_type = tmp_raise_type_4;
  Py_INCREF(tmp_raise_type_4);
  exception_value = tmp_raise_value_4;
  exception_lineno = 122;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_13;
 }
 branch_no_11:;
 goto branch_end_10;
 branch_no_10:;
 {
  PyObject *tmp_assign_source_62;
  tmp_assign_source_62 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_4__prepared == NULL);
  tmp_class_creation_4__prepared = tmp_assign_source_62;
 }
 branch_end_10:;
 {
  PyObject *tmp_assign_source_63;
  {
   PyObject *tmp_set_locals_4;
   CHECK_OBJECT(tmp_class_creation_4__prepared);
   tmp_set_locals_4 = tmp_class_creation_4__prepared;
   locals_aiohttp$abc$$$class__4_AbstractResolver_122 = tmp_set_locals_4;
   Py_INCREF(tmp_set_locals_4);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[81];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[82], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_15;
  }
  tmp_dictset_value = mod_consts[130];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[28], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_15;
  }
  tmp_dictset_value = mod_consts[129];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_15;
  }
  frame_6a0fef63ad801b451815b24c42655bd1_5 = MAKE_CLASS_FRAME(tstate, codeobj_6a0fef63ad801b451815b24c42655bd1, module_aiohttp$abc, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_6a0fef63ad801b451815b24c42655bd1_5);
  assert(Py_REFCNT(frame_6a0fef63ad801b451815b24c42655bd1_5) == 2);

  // Framed code:
  {
   PyObject *tmp_called_value_33;
   PyObject *tmp_args_element_value_26;
   PyObject *tmp_annotations_22;
   PyObject *tmp_dict_key_19;
   PyObject *tmp_dict_value_19;
   tmp_called_value_33 = PyObject_GetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[40]);

   if (tmp_called_value_33 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_33 == NULL)) {
         tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_33 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 125;
      type_description_2 = "o";
         goto frame_exception_exit_5;
     }
           Py_INCREF(tmp_called_value_33);
       } else {
           goto frame_exception_exit_5;
       }
   }

   tmp_dict_key_19 = mod_consts[131];
   tmp_dict_value_19 = PyObject_GetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[110]);

   if (tmp_dict_value_19 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_19 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_19);
       } else {
           goto frame_exception_exit_5;
       }
   }

   tmp_annotations_22 = _PyDict_NewPresized( 4 );
   {
    PyObject *tmp_expression_value_41;
    PyObject *tmp_subscript_value_21;
    PyObject *tmp_expression_value_42;
    PyObject *tmp_subscript_value_22;
    PyObject *tmp_tuple_element_24;
    tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
    Py_DECREF(tmp_dict_value_19);
    assert(!(tmp_res != 0));
    tmp_dict_key_19 = mod_consts[132];
    tmp_dict_value_19 = PyObject_GetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[133]);

    if (tmp_dict_value_19 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_19 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_dict_value_19);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
    Py_DECREF(tmp_dict_value_19);
    assert(!(tmp_res != 0));
    tmp_dict_key_19 = mod_consts[134];
    tmp_dict_value_19 = PyObject_GetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[133]);

    if (tmp_dict_value_19 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_dict_value_19 = (PyObject *)&PyLong_Type;
            Py_INCREF(tmp_dict_value_19);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
    Py_DECREF(tmp_dict_value_19);
    assert(!(tmp_res != 0));
    tmp_dict_key_19 = mod_consts[88];
    tmp_expression_value_41 = PyObject_GetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[55]);

    if (tmp_expression_value_41 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[55]);

      if (unlikely(tmp_expression_value_41 == NULL)) {
          tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
      }

      if (tmp_expression_value_41 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 126;
       type_description_2 = "o";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_expression_value_41);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_expression_value_42 = PyObject_GetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[52]);

    if (tmp_expression_value_42 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[52]);

      if (unlikely(tmp_expression_value_42 == NULL)) {
          tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
      }

      if (tmp_expression_value_42 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
       Py_DECREF(tmp_expression_value_41);

       exception_lineno = 126;
       type_description_2 = "o";
          goto dict_build_exception_1;
      }
            Py_INCREF(tmp_expression_value_42);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_tuple_element_24 = PyObject_GetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[110]);

    if (tmp_tuple_element_24 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_tuple_element_24 = (PyObject *)&PyUnicode_Type;
            Py_INCREF(tmp_tuple_element_24);
        } else {
            goto dict_build_exception_1;
        }
    }

    tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(tstate, 2);
    PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_24);
    tmp_tuple_element_24 = PyObject_GetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[49]);

    if (tmp_tuple_element_24 == NULL) {
        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
      tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[49]);

      if (unlikely(tmp_tuple_element_24 == NULL)) {
          tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[49]);
      }

      if (tmp_tuple_element_24 == NULL) {
          assert(HAS_ERROR_OCCURRED(tstate));

          FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


       exception_lineno = 126;
       type_description_2 = "o";
          goto tuple_build_exception_11;
      }
            Py_INCREF(tmp_tuple_element_24);
        } else {
            goto tuple_build_exception_11;
        }
    }

    PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_24);
    goto tuple_build_noexception_11;
    // Exception handling pass through code for tuple_build:
    tuple_build_exception_11:;
    Py_DECREF(tmp_expression_value_41);
    Py_DECREF(tmp_expression_value_42);
    Py_DECREF(tmp_subscript_value_22);
    goto dict_build_exception_1;
    // Finished with no exception for tuple_build:
    tuple_build_noexception_11:;
    tmp_subscript_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_42, tmp_subscript_value_22);
    Py_DECREF(tmp_expression_value_42);
    Py_DECREF(tmp_subscript_value_22);
    if (tmp_subscript_value_21 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
     Py_DECREF(tmp_expression_value_41);

     exception_lineno = 126;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_21);
    Py_DECREF(tmp_expression_value_41);
    Py_DECREF(tmp_subscript_value_21);
    if (tmp_dict_value_19 == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


     exception_lineno = 126;
     type_description_2 = "o";
        goto dict_build_exception_1;
    }
    tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_19, tmp_dict_value_19);
    Py_DECREF(tmp_dict_value_19);
    assert(!(tmp_res != 0));
   }
   goto dict_build_noexception_1;
   // Exception handling pass through code for dict_build:
   dict_build_exception_1:;
   Py_DECREF(tmp_called_value_33);
   Py_DECREF(tmp_annotations_22);
   goto frame_exception_exit_5;
   // Finished with no exception for dict_build:
   dict_build_noexception_1:;


   tmp_args_element_value_26 = MAKE_FUNCTION_aiohttp$abc$$$function__16_resolve(tmp_annotations_22);

   frame_6a0fef63ad801b451815b24c42655bd1_5->m_frame.f_lineno = 125;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_33, tmp_args_element_value_26);
   Py_DECREF(tmp_called_value_33);
   Py_DECREF(tmp_args_element_value_26);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 125;
    type_description_2 = "o";
       goto frame_exception_exit_5;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[3], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 126;
    type_description_2 = "o";
       goto frame_exception_exit_5;
   }
  }
  {
   PyObject *tmp_called_value_34;
   PyObject *tmp_args_element_value_27;
   PyObject *tmp_annotations_23;
   tmp_called_value_34 = PyObject_GetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[40]);

   if (tmp_called_value_34 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_34 == NULL)) {
         tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_34 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 129;
      type_description_2 = "o";
         goto frame_exception_exit_5;
     }
           Py_INCREF(tmp_called_value_34);
       } else {
           goto frame_exception_exit_5;
       }
   }

   tmp_annotations_23 = DICT_COPY(tstate, mod_consts[84]);


   tmp_args_element_value_27 = MAKE_FUNCTION_aiohttp$abc$$$function__17_close(tmp_annotations_23);

   frame_6a0fef63ad801b451815b24c42655bd1_5->m_frame.f_lineno = 129;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_27);
   Py_DECREF(tmp_called_value_34);
   Py_DECREF(tmp_args_element_value_27);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 129;
    type_description_2 = "o";
       goto frame_exception_exit_5;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[10], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 130;
    type_description_2 = "o";
       goto frame_exception_exit_5;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_4;
  frame_exception_exit_5:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_6a0fef63ad801b451815b24c42655bd1_5, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_6a0fef63ad801b451815b24c42655bd1_5->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_6a0fef63ad801b451815b24c42655bd1_5, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_6a0fef63ad801b451815b24c42655bd1_5,
      type_description_2,
      outline_3_var___class__
  );



  assertFrameObject(frame_6a0fef63ad801b451815b24c42655bd1_5);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_4;
  frame_no_exception_4:;
  goto skip_nested_handling_4;
  nested_frame_exit_4:;

  goto try_except_handler_15;
  skip_nested_handling_4:;
  {
   nuitka_bool tmp_condition_result_22;
   PyObject *tmp_cmp_expr_left_4;
   PyObject *tmp_cmp_expr_right_4;
   CHECK_OBJECT(tmp_class_creation_4__bases);
   tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
   CHECK_OBJECT(tmp_class_creation_4__bases_orig);
   tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
   tmp_condition_result_22 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
   if (tmp_condition_result_22 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 122;

       goto try_except_handler_15;
   }
   if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
       goto branch_yes_12;
   } else {
       goto branch_no_12;
   }
  }
  branch_yes_12:;
  CHECK_OBJECT(tmp_class_creation_4__bases_orig);
  tmp_dictset_value = tmp_class_creation_4__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__4_AbstractResolver_122, mod_consts[100], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 122;

      goto try_except_handler_15;
  }
  branch_no_12:;
  {
   PyObject *tmp_assign_source_64;
   PyObject *tmp_called_value_35;
   PyObject *tmp_args_value_8;
   PyObject *tmp_tuple_element_25;
   PyObject *tmp_kwargs_value_8;
   CHECK_OBJECT(tmp_class_creation_4__metaclass);
   tmp_called_value_35 = tmp_class_creation_4__metaclass;
   tmp_tuple_element_25 = mod_consts[129];
   tmp_args_value_8 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_25);
   CHECK_OBJECT(tmp_class_creation_4__bases);
   tmp_tuple_element_25 = tmp_class_creation_4__bases;
   PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_25);
   tmp_tuple_element_25 = locals_aiohttp$abc$$$class__4_AbstractResolver_122;
   PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_25);
   CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
   tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
   frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 122;
   tmp_assign_source_64 = CALL_FUNCTION(tstate, tmp_called_value_35, tmp_args_value_8, tmp_kwargs_value_8);
   Py_DECREF(tmp_args_value_8);
   if (tmp_assign_source_64 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 122;

       goto try_except_handler_15;
   }
   assert(outline_3_var___class__ == NULL);
   outline_3_var___class__ = tmp_assign_source_64;
  }
  CHECK_OBJECT(outline_3_var___class__);
  tmp_assign_source_63 = outline_3_var___class__;
  Py_INCREF(tmp_assign_source_63);
  goto try_return_handler_15;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_15:;
  Py_DECREF(locals_aiohttp$abc$$$class__4_AbstractResolver_122);
  locals_aiohttp$abc$$$class__4_AbstractResolver_122 = NULL;
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

  Py_DECREF(locals_aiohttp$abc$$$class__4_AbstractResolver_122);
  locals_aiohttp$abc$$$class__4_AbstractResolver_122 = NULL;
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
  exception_lineno = 122;
  goto try_except_handler_13;
  outline_result_4:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_63);
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
 {
  PyObject *tmp_assign_source_65;
  tmp_assign_source_65 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[54]);

  if (unlikely(tmp_assign_source_65 == NULL)) {
      tmp_assign_source_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
  }

  if (tmp_assign_source_65 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 137;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT0(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_65);
 }
 {
  PyObject *tmp_assign_source_66;
  PyObject *tmp_expression_value_43;
  PyObject *tmp_subscript_value_23;
  tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[51]);

  if (unlikely(tmp_expression_value_43 == NULL)) {
      tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
  }

  if (tmp_expression_value_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 140;

      goto frame_exception_exit_1;
  }
  tmp_subscript_value_23 = DEEP_COPY_TUPLE_GUIDED(tstate, mod_consts[136], "li");
  tmp_assign_source_66 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_43, tmp_subscript_value_23);
  Py_DECREF(tmp_subscript_value_23);
  if (tmp_assign_source_66 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 140;

      goto frame_exception_exit_1;
  }
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_66);
 }
 // Tried code:
 {
  PyObject *tmp_assign_source_67;
  PyObject *tmp_tuple_element_26;
  tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[43]);

  if (unlikely(tmp_tuple_element_26 == NULL)) {
      tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
  }

  if (tmp_tuple_element_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  tmp_assign_source_67 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_assign_source_67, 0, tmp_tuple_element_26);
  tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[135]);

  if (unlikely(tmp_tuple_element_26 == NULL)) {
      tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[135]);
  }

  if (tmp_tuple_element_26 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto tuple_build_exception_12;
  }
  PyTuple_SET_ITEM0(tmp_assign_source_67, 1, tmp_tuple_element_26);
  goto tuple_build_noexception_12;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_12:;
  Py_DECREF(tmp_assign_source_67);
  goto try_except_handler_16;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_12:;
  assert(tmp_class_creation_5__bases_orig == NULL);
  tmp_class_creation_5__bases_orig = tmp_assign_source_67;
 }
 {
  PyObject *tmp_assign_source_68;
  PyObject *tmp_dircall_arg1_5;
  CHECK_OBJECT(tmp_class_creation_5__bases_orig);
  tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
  Py_INCREF(tmp_dircall_arg1_5);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
      tmp_assign_source_68 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_68 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  assert(tmp_class_creation_5__bases == NULL);
  tmp_class_creation_5__bases = tmp_assign_source_68;
 }
 {
  PyObject *tmp_assign_source_69;
  tmp_assign_source_69 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_5__class_decl_dict == NULL);
  tmp_class_creation_5__class_decl_dict = tmp_assign_source_69;
 }
 {
  PyObject *tmp_assign_source_70;
  PyObject *tmp_metaclass_value_5;
  nuitka_bool tmp_condition_result_23;
  int tmp_truth_name_5;
  PyObject *tmp_type_arg_9;
  PyObject *tmp_expression_value_44;
  PyObject *tmp_subscript_value_24;
  PyObject *tmp_bases_value_5;
  CHECK_OBJECT(tmp_class_creation_5__bases);
  tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
  if (tmp_truth_name_5 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  tmp_condition_result_23 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_11;
  } else {
      goto condexpr_false_11;
  }
  condexpr_true_11:;
  CHECK_OBJECT(tmp_class_creation_5__bases);
  tmp_expression_value_44 = tmp_class_creation_5__bases;
  tmp_subscript_value_24 = mod_consts[35];
  tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_44, tmp_subscript_value_24, 0);
  if (tmp_type_arg_9 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
  Py_DECREF(tmp_type_arg_9);
  if (tmp_metaclass_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  goto condexpr_end_11;
  condexpr_false_11:;
  tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_5);
  condexpr_end_11:;
  CHECK_OBJECT(tmp_class_creation_5__bases);
  tmp_bases_value_5 = tmp_class_creation_5__bases;
  tmp_assign_source_70 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
  Py_DECREF(tmp_metaclass_value_5);
  if (tmp_assign_source_70 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  assert(tmp_class_creation_5__metaclass == NULL);
  tmp_class_creation_5__metaclass = tmp_assign_source_70;
 }
 {
  bool tmp_condition_result_24;
  PyObject *tmp_expression_value_45;
  CHECK_OBJECT(tmp_class_creation_5__metaclass);
  tmp_expression_value_45 = tmp_class_creation_5__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_45, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  tmp_condition_result_24 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_24 != false) {
      goto branch_yes_13;
  } else {
      goto branch_no_13;
  }
 }
 branch_yes_13:;
 {
  PyObject *tmp_assign_source_71;
  PyObject *tmp_called_value_36;
  PyObject *tmp_expression_value_46;
  PyObject *tmp_args_value_9;
  PyObject *tmp_tuple_element_27;
  PyObject *tmp_kwargs_value_9;
  CHECK_OBJECT(tmp_class_creation_5__metaclass);
  tmp_expression_value_46 = tmp_class_creation_5__metaclass;
  tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[75]);
  if (tmp_called_value_36 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  tmp_tuple_element_27 = mod_consts[138];
  tmp_args_value_9 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_27);
  CHECK_OBJECT(tmp_class_creation_5__bases);
  tmp_tuple_element_27 = tmp_class_creation_5__bases;
  PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_27);
  CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
  tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 143;
  tmp_assign_source_71 = CALL_FUNCTION(tstate, tmp_called_value_36, tmp_args_value_9, tmp_kwargs_value_9);
  Py_DECREF(tmp_called_value_36);
  Py_DECREF(tmp_args_value_9);
  if (tmp_assign_source_71 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  assert(tmp_class_creation_5__prepared == NULL);
  tmp_class_creation_5__prepared = tmp_assign_source_71;
 }
 {
  bool tmp_condition_result_25;
  PyObject *tmp_operand_value_5;
  PyObject *tmp_expression_value_47;
  CHECK_OBJECT(tmp_class_creation_5__prepared);
  tmp_expression_value_47 = tmp_class_creation_5__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_47, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
  assert(!(tmp_res == -1));
  tmp_condition_result_25 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_25 != false) {
      goto branch_yes_14;
  } else {
      goto branch_no_14;
  }
 }
 branch_yes_14:;
 {
  PyObject *tmp_raise_type_5;
  PyObject *tmp_raise_value_5;
  PyObject *tmp_mod_expr_left_5;
  PyObject *tmp_mod_expr_right_5;
  PyObject *tmp_tuple_element_28;
  PyObject *tmp_expression_value_48;
  PyObject *tmp_name_value_14;
  PyObject *tmp_default_value_5;
  tmp_raise_type_5 = PyExc_TypeError;
  tmp_mod_expr_left_5 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_5__metaclass);
  tmp_expression_value_48 = tmp_class_creation_5__metaclass;
  tmp_name_value_14 = mod_consts[79];
  tmp_default_value_5 = mod_consts[80];
  tmp_tuple_element_28 = BUILTIN_GETATTR(tstate, tmp_expression_value_48, tmp_name_value_14, tmp_default_value_5);
  if (tmp_tuple_element_28 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_49;
   PyObject *tmp_type_arg_10;
   PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_28);
   CHECK_OBJECT(tmp_class_creation_5__prepared);
   tmp_type_arg_10 = tmp_class_creation_5__prepared;
   tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_10);
   assert(!(tmp_expression_value_49 == NULL));
   tmp_tuple_element_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[79]);
   Py_DECREF(tmp_expression_value_49);
   if (tmp_tuple_element_28 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 143;

       goto tuple_build_exception_13;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_28);
  }
  goto tuple_build_noexception_13;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_13:;
  Py_DECREF(tmp_mod_expr_right_5);
  goto try_except_handler_16;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_13:;
  tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
  Py_DECREF(tmp_mod_expr_right_5);
  if (tmp_raise_value_5 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_16;
  }
  exception_type = tmp_raise_type_5;
  Py_INCREF(tmp_raise_type_5);
  exception_value = tmp_raise_value_5;
  exception_lineno = 143;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_16;
 }
 branch_no_14:;
 goto branch_end_13;
 branch_no_13:;
 {
  PyObject *tmp_assign_source_72;
  tmp_assign_source_72 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_5__prepared == NULL);
  tmp_class_creation_5__prepared = tmp_assign_source_72;
 }
 branch_end_13:;
 {
  PyObject *tmp_assign_source_73;
  {
   PyObject *tmp_set_locals_5;
   CHECK_OBJECT(tmp_class_creation_5__prepared);
   tmp_set_locals_5 = tmp_class_creation_5__prepared;
   locals_aiohttp$abc$$$class__5_AbstractCookieJar_143 = tmp_set_locals_5;
   Py_INCREF(tmp_set_locals_5);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[81];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[82], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_18;
  }
  tmp_dictset_value = mod_consts[139];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[28], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_18;
  }
  tmp_dictset_value = mod_consts[138];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_18;
  }
  frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6 = MAKE_CLASS_FRAME(tstate, codeobj_0f36220e40b1a2c5cfa1fa53e0a45d73, module_aiohttp$abc, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6);
  assert(Py_REFCNT(frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6) == 2);

  // Framed code:
  {
   PyObject *tmp_kw_defaults_1;
   PyObject *tmp_annotations_24;
   PyObject *tmp_dict_key_20;
   PyObject *tmp_dict_value_20;
   PyObject *tmp_expression_value_50;
   PyObject *tmp_subscript_value_25;
   PyObject *tmp_expression_value_51;
   tmp_kw_defaults_1 = DICT_COPY(tstate, mod_consts[140]);
   tmp_dict_key_20 = mod_consts[141];
   tmp_expression_value_50 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[56]);

   if (tmp_expression_value_50 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[56]);

     if (unlikely(tmp_expression_value_50 == NULL)) {
         tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
     }

     if (tmp_expression_value_50 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_kw_defaults_1);

      exception_lineno = 146;
      type_description_2 = "o";
         goto frame_exception_exit_6;
     }
           Py_INCREF(tmp_expression_value_50);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_expression_value_51 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[34]);

   if (tmp_expression_value_51 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[34]);

     if (unlikely(tmp_expression_value_51 == NULL)) {
         tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[34]);
     }

     if (tmp_expression_value_51 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_kw_defaults_1);
      Py_DECREF(tmp_expression_value_50);

      exception_lineno = 146;
      type_description_2 = "o";
         goto frame_exception_exit_6;
     }
           Py_INCREF(tmp_expression_value_51);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_subscript_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[142]);
   Py_DECREF(tmp_expression_value_51);
   if (tmp_subscript_value_25 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_kw_defaults_1);
    Py_DECREF(tmp_expression_value_50);

    exception_lineno = 146;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
   tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_25);
   Py_DECREF(tmp_expression_value_50);
   Py_DECREF(tmp_subscript_value_25);
   if (tmp_dict_value_20 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_kw_defaults_1);

    exception_lineno = 146;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
   tmp_annotations_24 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_20, tmp_dict_value_20);
   Py_DECREF(tmp_dict_value_20);
   assert(!(tmp_res != 0));
   tmp_dict_key_20 = mod_consts[88];
   tmp_dict_value_20 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_24, tmp_dict_key_20, tmp_dict_value_20);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$abc$$$function__18___init__(tmp_kw_defaults_1, tmp_annotations_24);

   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[85], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 146;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
  }
  {
   PyObject *tmp_called_value_37;
   PyObject *tmp_args_element_value_28;
   PyObject *tmp_defaults_1;
   PyObject *tmp_annotations_25;
   PyObject *tmp_dict_key_21;
   PyObject *tmp_dict_value_21;
   PyObject *tmp_expression_value_52;
   PyObject *tmp_subscript_value_26;
   tmp_called_value_37 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[40]);

   if (tmp_called_value_37 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_37 == NULL)) {
         tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_37 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 149;
      type_description_2 = "o";
         goto frame_exception_exit_6;
     }
           Py_INCREF(tmp_called_value_37);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_defaults_1 = mod_consts[144];
   tmp_dict_key_21 = mod_consts[145];
   tmp_expression_value_52 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[56]);

   if (tmp_expression_value_52 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[56]);

     if (unlikely(tmp_expression_value_52 == NULL)) {
         tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
     }

     if (tmp_expression_value_52 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_37);

      exception_lineno = 150;
      type_description_2 = "o";
         goto frame_exception_exit_6;
     }
           Py_INCREF(tmp_expression_value_52);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_subscript_value_26 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[137]);

   if (tmp_subscript_value_26 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_26 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[137]);

     if (unlikely(tmp_subscript_value_26 == NULL)) {
         tmp_subscript_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[137]);
     }

     if (tmp_subscript_value_26 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_37);
      Py_DECREF(tmp_expression_value_52);

      exception_lineno = 150;
      type_description_2 = "o";
         goto frame_exception_exit_6;
     }
           Py_INCREF(tmp_subscript_value_26);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_26);
   Py_DECREF(tmp_expression_value_52);
   Py_DECREF(tmp_subscript_value_26);
   if (tmp_dict_value_21 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_37);

    exception_lineno = 150;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
   tmp_annotations_25 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_21, tmp_dict_value_21);
   Py_DECREF(tmp_dict_value_21);
   assert(!(tmp_res != 0));
   tmp_dict_key_21 = mod_consts[88];
   tmp_dict_value_21 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_25, tmp_dict_key_21, tmp_dict_value_21);
   assert(!(tmp_res != 0));
   Py_INCREF(tmp_defaults_1);


   tmp_args_element_value_28 = MAKE_FUNCTION_aiohttp$abc$$$function__19_clear(tmp_defaults_1, tmp_annotations_25);

   frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6->m_frame.f_lineno = 149;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_37, tmp_args_element_value_28);
   Py_DECREF(tmp_called_value_37);
   Py_DECREF(tmp_args_element_value_28);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 149;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[147], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 150;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
  }
  {
   PyObject *tmp_called_value_38;
   PyObject *tmp_args_element_value_29;
   PyObject *tmp_annotations_26;
   PyObject *tmp_dict_key_22;
   PyObject *tmp_dict_value_22;
   tmp_called_value_38 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[40]);

   if (tmp_called_value_38 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_38 == NULL)) {
         tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_38 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 153;
      type_description_2 = "o";
         goto frame_exception_exit_6;
     }
           Py_INCREF(tmp_called_value_38);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_dict_key_22 = mod_consts[149];
   tmp_dict_value_22 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[110]);

   if (tmp_dict_value_22 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_22 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_22);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_annotations_26 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_22, tmp_dict_value_22);
   Py_DECREF(tmp_dict_value_22);
   assert(!(tmp_res != 0));
   tmp_dict_key_22 = mod_consts[88];
   tmp_dict_value_22 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_26, tmp_dict_key_22, tmp_dict_value_22);
   assert(!(tmp_res != 0));


   tmp_args_element_value_29 = MAKE_FUNCTION_aiohttp$abc$$$function__20_clear_domain(tmp_annotations_26);

   frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6->m_frame.f_lineno = 153;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_29);
   Py_DECREF(tmp_called_value_38);
   Py_DECREF(tmp_args_element_value_29);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 153;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[151], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 154;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
  }
  {
   PyObject *tmp_called_value_39;
   PyObject *tmp_args_element_value_30;
   PyObject *tmp_defaults_2;
   PyObject *tmp_tuple_element_29;
   PyObject *tmp_called_value_40;
   PyObject *tmp_annotations_27;
   PyObject *tmp_dict_key_23;
   PyObject *tmp_dict_value_23;
   tmp_called_value_39 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[40]);

   if (tmp_called_value_39 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_39 == NULL)) {
         tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_39 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 157;
      type_description_2 = "o";
         goto frame_exception_exit_6;
     }
           Py_INCREF(tmp_called_value_39);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_called_value_40 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[63]);

   if (tmp_called_value_40 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[63]);

     if (unlikely(tmp_called_value_40 == NULL)) {
         tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
     }

     if (tmp_called_value_40 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_39);

      exception_lineno = 158;
      type_description_2 = "o";
         goto frame_exception_exit_6;
     }
           Py_INCREF(tmp_called_value_40);
       } else {
           goto frame_exception_exit_6;
       }
   }

   frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6->m_frame.f_lineno = 158;
   tmp_tuple_element_29 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_40);
   Py_DECREF(tmp_called_value_40);
   if (tmp_tuple_element_29 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_called_value_39);

    exception_lineno = 158;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
   tmp_defaults_2 = MAKE_TUPLE_EMPTY(tstate, 1);
   PyTuple_SET_ITEM(tmp_defaults_2, 0, tmp_tuple_element_29);
   tmp_dict_key_23 = mod_consts[153];
   tmp_dict_value_23 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[69]);

   if (tmp_dict_value_23 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[69]);

     if (unlikely(tmp_dict_value_23 == NULL)) {
         tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[69]);
     }

     if (tmp_dict_value_23 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_39);
      Py_DECREF(tmp_defaults_2);

      exception_lineno = 158;
      type_description_2 = "o";
         goto frame_exception_exit_6;
     }
           Py_INCREF(tmp_dict_value_23);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_annotations_27 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_23, tmp_dict_value_23);
   Py_DECREF(tmp_dict_value_23);
   assert(!(tmp_res != 0));
   tmp_dict_key_23 = mod_consts[154];
   tmp_dict_value_23 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[63]);

   if (tmp_dict_value_23 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[63]);

     if (unlikely(tmp_dict_value_23 == NULL)) {
         tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
     }

     if (tmp_dict_value_23 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 158;
      type_description_2 = "o";
         goto dict_build_exception_2;
     }
           Py_INCREF(tmp_dict_value_23);
       } else {
           goto dict_build_exception_2;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_23, tmp_dict_value_23);
   Py_DECREF(tmp_dict_value_23);
   assert(!(tmp_res != 0));
   tmp_dict_key_23 = mod_consts[88];
   tmp_dict_value_23 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_27, tmp_dict_key_23, tmp_dict_value_23);
   assert(!(tmp_res != 0));
   goto dict_build_noexception_2;
   // Exception handling pass through code for dict_build:
   dict_build_exception_2:;
   Py_DECREF(tmp_called_value_39);
   Py_DECREF(tmp_defaults_2);
   Py_DECREF(tmp_annotations_27);
   goto frame_exception_exit_6;
   // Finished with no exception for dict_build:
   dict_build_noexception_2:;


   tmp_args_element_value_30 = MAKE_FUNCTION_aiohttp$abc$$$function__21_update_cookies(tmp_defaults_2, tmp_annotations_27);

   frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6->m_frame.f_lineno = 157;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_39, tmp_args_element_value_30);
   Py_DECREF(tmp_called_value_39);
   Py_DECREF(tmp_args_element_value_30);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 157;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[156], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 158;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
  }
  {
   PyObject *tmp_called_value_41;
   PyObject *tmp_args_element_value_31;
   PyObject *tmp_annotations_28;
   PyObject *tmp_dict_key_24;
   PyObject *tmp_dict_value_24;
   tmp_called_value_41 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[40]);

   if (tmp_called_value_41 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_41 == NULL)) {
         tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_41 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 161;
      type_description_2 = "o";
         goto frame_exception_exit_6;
     }
           Py_INCREF(tmp_called_value_41);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_dict_key_24 = mod_consts[158];
   tmp_dict_value_24 = PyObject_GetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[63]);

   if (tmp_dict_value_24 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_24 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[63]);

     if (unlikely(tmp_dict_value_24 == NULL)) {
         tmp_dict_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
     }

     if (tmp_dict_value_24 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_41);

      exception_lineno = 162;
      type_description_2 = "o";
         goto frame_exception_exit_6;
     }
           Py_INCREF(tmp_dict_value_24);
       } else {
           goto frame_exception_exit_6;
       }
   }

   tmp_annotations_28 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_24, tmp_dict_value_24);
   Py_DECREF(tmp_dict_value_24);
   assert(!(tmp_res != 0));
   tmp_dict_key_24 = mod_consts[88];
   tmp_dict_value_24 = mod_consts[159];
   tmp_res = PyDict_SetItem(tmp_annotations_28, tmp_dict_key_24, tmp_dict_value_24);
   assert(!(tmp_res != 0));


   tmp_args_element_value_31 = MAKE_FUNCTION_aiohttp$abc$$$function__22_filter_cookies(tmp_annotations_28);

   frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6->m_frame.f_lineno = 161;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_41, tmp_args_element_value_31);
   Py_DECREF(tmp_called_value_41);
   Py_DECREF(tmp_args_element_value_31);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 161;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[161], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 162;
    type_description_2 = "o";
       goto frame_exception_exit_6;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_5;
  frame_exception_exit_6:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6,
      type_description_2,
      outline_4_var___class__
  );



  assertFrameObject(frame_0f36220e40b1a2c5cfa1fa53e0a45d73_6);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_5;
  frame_no_exception_5:;
  goto skip_nested_handling_5;
  nested_frame_exit_5:;

  goto try_except_handler_18;
  skip_nested_handling_5:;
  {
   nuitka_bool tmp_condition_result_26;
   PyObject *tmp_cmp_expr_left_5;
   PyObject *tmp_cmp_expr_right_5;
   CHECK_OBJECT(tmp_class_creation_5__bases);
   tmp_cmp_expr_left_5 = tmp_class_creation_5__bases;
   CHECK_OBJECT(tmp_class_creation_5__bases_orig);
   tmp_cmp_expr_right_5 = tmp_class_creation_5__bases_orig;
   tmp_condition_result_26 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
   if (tmp_condition_result_26 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 143;

       goto try_except_handler_18;
   }
   if (tmp_condition_result_26 == NUITKA_BOOL_TRUE) {
       goto branch_yes_15;
   } else {
       goto branch_no_15;
   }
  }
  branch_yes_15:;
  CHECK_OBJECT(tmp_class_creation_5__bases_orig);
  tmp_dictset_value = tmp_class_creation_5__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143, mod_consts[100], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 143;

      goto try_except_handler_18;
  }
  branch_no_15:;
  {
   PyObject *tmp_assign_source_74;
   PyObject *tmp_called_value_42;
   PyObject *tmp_args_value_10;
   PyObject *tmp_tuple_element_30;
   PyObject *tmp_kwargs_value_10;
   CHECK_OBJECT(tmp_class_creation_5__metaclass);
   tmp_called_value_42 = tmp_class_creation_5__metaclass;
   tmp_tuple_element_30 = mod_consts[138];
   tmp_args_value_10 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_30);
   CHECK_OBJECT(tmp_class_creation_5__bases);
   tmp_tuple_element_30 = tmp_class_creation_5__bases;
   PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_30);
   tmp_tuple_element_30 = locals_aiohttp$abc$$$class__5_AbstractCookieJar_143;
   PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_30);
   CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
   tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
   frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 143;
   tmp_assign_source_74 = CALL_FUNCTION(tstate, tmp_called_value_42, tmp_args_value_10, tmp_kwargs_value_10);
   Py_DECREF(tmp_args_value_10);
   if (tmp_assign_source_74 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 143;

       goto try_except_handler_18;
   }
   assert(outline_4_var___class__ == NULL);
   outline_4_var___class__ = tmp_assign_source_74;
  }
  CHECK_OBJECT(outline_4_var___class__);
  tmp_assign_source_73 = outline_4_var___class__;
  Py_INCREF(tmp_assign_source_73);
  goto try_return_handler_18;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_18:;
  Py_DECREF(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143);
  locals_aiohttp$abc$$$class__5_AbstractCookieJar_143 = NULL;
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

  Py_DECREF(locals_aiohttp$abc$$$class__5_AbstractCookieJar_143);
  locals_aiohttp$abc$$$class__5_AbstractCookieJar_143 = NULL;
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
  exception_lineno = 143;
  goto try_except_handler_16;
  outline_result_5:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_73);
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
  PyObject *tmp_assign_source_75;
  PyObject *tmp_tuple_element_31;
  tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[39]);

  if (unlikely(tmp_tuple_element_31 == NULL)) {
      tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
  }

  if (tmp_tuple_element_31 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  tmp_assign_source_75 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_75, 0, tmp_tuple_element_31);
  assert(tmp_class_creation_6__bases_orig == NULL);
  tmp_class_creation_6__bases_orig = tmp_assign_source_75;
 }
 {
  PyObject *tmp_assign_source_76;
  PyObject *tmp_dircall_arg1_6;
  CHECK_OBJECT(tmp_class_creation_6__bases_orig);
  tmp_dircall_arg1_6 = tmp_class_creation_6__bases_orig;
  Py_INCREF(tmp_dircall_arg1_6);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
      tmp_assign_source_76 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_76 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  assert(tmp_class_creation_6__bases == NULL);
  tmp_class_creation_6__bases = tmp_assign_source_76;
 }
 {
  PyObject *tmp_assign_source_77;
  tmp_assign_source_77 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_6__class_decl_dict == NULL);
  tmp_class_creation_6__class_decl_dict = tmp_assign_source_77;
 }
 {
  PyObject *tmp_assign_source_78;
  PyObject *tmp_metaclass_value_6;
  nuitka_bool tmp_condition_result_27;
  int tmp_truth_name_6;
  PyObject *tmp_type_arg_11;
  PyObject *tmp_expression_value_53;
  PyObject *tmp_subscript_value_27;
  PyObject *tmp_bases_value_6;
  CHECK_OBJECT(tmp_class_creation_6__bases);
  tmp_truth_name_6 = CHECK_IF_TRUE(tmp_class_creation_6__bases);
  if (tmp_truth_name_6 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  tmp_condition_result_27 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_12;
  } else {
      goto condexpr_false_12;
  }
  condexpr_true_12:;
  CHECK_OBJECT(tmp_class_creation_6__bases);
  tmp_expression_value_53 = tmp_class_creation_6__bases;
  tmp_subscript_value_27 = mod_consts[35];
  tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_53, tmp_subscript_value_27, 0);
  if (tmp_type_arg_11 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
  Py_DECREF(tmp_type_arg_11);
  if (tmp_metaclass_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  goto condexpr_end_12;
  condexpr_false_12:;
  tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_6);
  condexpr_end_12:;
  CHECK_OBJECT(tmp_class_creation_6__bases);
  tmp_bases_value_6 = tmp_class_creation_6__bases;
  tmp_assign_source_78 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
  Py_DECREF(tmp_metaclass_value_6);
  if (tmp_assign_source_78 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  assert(tmp_class_creation_6__metaclass == NULL);
  tmp_class_creation_6__metaclass = tmp_assign_source_78;
 }
 {
  bool tmp_condition_result_28;
  PyObject *tmp_expression_value_54;
  CHECK_OBJECT(tmp_class_creation_6__metaclass);
  tmp_expression_value_54 = tmp_class_creation_6__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_54, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  tmp_condition_result_28 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_28 != false) {
      goto branch_yes_16;
  } else {
      goto branch_no_16;
  }
 }
 branch_yes_16:;
 {
  PyObject *tmp_assign_source_79;
  PyObject *tmp_called_value_43;
  PyObject *tmp_expression_value_55;
  PyObject *tmp_args_value_11;
  PyObject *tmp_tuple_element_32;
  PyObject *tmp_kwargs_value_11;
  CHECK_OBJECT(tmp_class_creation_6__metaclass);
  tmp_expression_value_55 = tmp_class_creation_6__metaclass;
  tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[75]);
  if (tmp_called_value_43 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  tmp_tuple_element_32 = mod_consts[163];
  tmp_args_value_11 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_32);
  CHECK_OBJECT(tmp_class_creation_6__bases);
  tmp_tuple_element_32 = tmp_class_creation_6__bases;
  PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_32);
  CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
  tmp_kwargs_value_11 = tmp_class_creation_6__class_decl_dict;
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 166;
  tmp_assign_source_79 = CALL_FUNCTION(tstate, tmp_called_value_43, tmp_args_value_11, tmp_kwargs_value_11);
  Py_DECREF(tmp_called_value_43);
  Py_DECREF(tmp_args_value_11);
  if (tmp_assign_source_79 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  assert(tmp_class_creation_6__prepared == NULL);
  tmp_class_creation_6__prepared = tmp_assign_source_79;
 }
 {
  bool tmp_condition_result_29;
  PyObject *tmp_operand_value_6;
  PyObject *tmp_expression_value_56;
  CHECK_OBJECT(tmp_class_creation_6__prepared);
  tmp_expression_value_56 = tmp_class_creation_6__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_56, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
  assert(!(tmp_res == -1));
  tmp_condition_result_29 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_29 != false) {
      goto branch_yes_17;
  } else {
      goto branch_no_17;
  }
 }
 branch_yes_17:;
 {
  PyObject *tmp_raise_type_6;
  PyObject *tmp_raise_value_6;
  PyObject *tmp_mod_expr_left_6;
  PyObject *tmp_mod_expr_right_6;
  PyObject *tmp_tuple_element_33;
  PyObject *tmp_expression_value_57;
  PyObject *tmp_name_value_15;
  PyObject *tmp_default_value_6;
  tmp_raise_type_6 = PyExc_TypeError;
  tmp_mod_expr_left_6 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_6__metaclass);
  tmp_expression_value_57 = tmp_class_creation_6__metaclass;
  tmp_name_value_15 = mod_consts[79];
  tmp_default_value_6 = mod_consts[80];
  tmp_tuple_element_33 = BUILTIN_GETATTR(tstate, tmp_expression_value_57, tmp_name_value_15, tmp_default_value_6);
  if (tmp_tuple_element_33 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_58;
   PyObject *tmp_type_arg_12;
   PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_33);
   CHECK_OBJECT(tmp_class_creation_6__prepared);
   tmp_type_arg_12 = tmp_class_creation_6__prepared;
   tmp_expression_value_58 = BUILTIN_TYPE1(tmp_type_arg_12);
   assert(!(tmp_expression_value_58 == NULL));
   tmp_tuple_element_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[79]);
   Py_DECREF(tmp_expression_value_58);
   if (tmp_tuple_element_33 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 166;

       goto tuple_build_exception_14;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_33);
  }
  goto tuple_build_noexception_14;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_14:;
  Py_DECREF(tmp_mod_expr_right_6);
  goto try_except_handler_19;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_14:;
  tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
  Py_DECREF(tmp_mod_expr_right_6);
  if (tmp_raise_value_6 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_19;
  }
  exception_type = tmp_raise_type_6;
  Py_INCREF(tmp_raise_type_6);
  exception_value = tmp_raise_value_6;
  exception_lineno = 166;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_19;
 }
 branch_no_17:;
 goto branch_end_16;
 branch_no_16:;
 {
  PyObject *tmp_assign_source_80;
  tmp_assign_source_80 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_6__prepared == NULL);
  tmp_class_creation_6__prepared = tmp_assign_source_80;
 }
 branch_end_16:;
 {
  PyObject *tmp_assign_source_81;
  {
   PyObject *tmp_set_locals_6;
   CHECK_OBJECT(tmp_class_creation_6__prepared);
   tmp_set_locals_6 = tmp_class_creation_6__prepared;
   locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166 = tmp_set_locals_6;
   Py_INCREF(tmp_set_locals_6);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[81];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[82], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_21;
  }
  tmp_dictset_value = mod_consts[164];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[28], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_21;
  }
  tmp_dictset_value = mod_consts[163];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_21;
  }
  tmp_dictset_value = MAKE_DICT_EMPTY(tstate);
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[165], tmp_dictset_value);
  Py_DECREF(tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_21;
  }
  frame_9a985ee683fe19769ee5711edc64c158_7 = MAKE_CLASS_FRAME(tstate, codeobj_9a985ee683fe19769ee5711edc64c158, module_aiohttp$abc, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_9a985ee683fe19769ee5711edc64c158_7);
  assert(Py_REFCNT(frame_9a985ee683fe19769ee5711edc64c158_7) == 2);

  // Framed code:
  tmp_dictset_value = mod_consts[35];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[166], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 169;
   type_description_2 = "o";
      goto frame_exception_exit_7;
  }
  tmp_dictset_value = mod_consts[35];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[167], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 170;
   type_description_2 = "o";
      goto frame_exception_exit_7;
  }
  tmp_dictset_value = mod_consts[35];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[168], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 171;
   type_description_2 = "o";
      goto frame_exception_exit_7;
  }
  {
   PyObject *tmp_ass_subvalue_1;
   PyObject *tmp_expression_value_59;
   PyObject *tmp_subscript_value_28;
   PyObject *tmp_ass_subscribed_1;
   PyObject *tmp_ass_subscript_1;
   tmp_expression_value_59 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[56]);

   if (tmp_expression_value_59 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[56]);

     if (unlikely(tmp_expression_value_59 == NULL)) {
         tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
     }

     if (tmp_expression_value_59 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 171;
      type_description_2 = "o";
         goto frame_exception_exit_7;
     }
           Py_INCREF(tmp_expression_value_59);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_subscript_value_28 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[133]);

   if (tmp_subscript_value_28 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_subscript_value_28 = (PyObject *)&PyLong_Type;
           Py_INCREF(tmp_subscript_value_28);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_28);
   Py_DECREF(tmp_expression_value_59);
   Py_DECREF(tmp_subscript_value_28);
   if (tmp_ass_subvalue_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 171;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
   tmp_ass_subscribed_1 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[165]);

   if (unlikely(tmp_ass_subscribed_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {
    Py_DECREF(tmp_ass_subvalue_1);
   RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, mod_consts[165], &exception_type, &exception_value);

    exception_lineno = 171;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }

   if (tmp_ass_subscribed_1 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
    Py_DECREF(tmp_ass_subvalue_1);

    exception_lineno = 171;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
   tmp_ass_subscript_1 = mod_consts[168];
   tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
   Py_DECREF(tmp_ass_subscribed_1);
   Py_DECREF(tmp_ass_subvalue_1);
   if (tmp_result == false) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 171;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
  }
  {
   PyObject *tmp_called_value_44;
   PyObject *tmp_args_element_value_32;
   PyObject *tmp_annotations_29;
   PyObject *tmp_dict_key_25;
   PyObject *tmp_dict_value_25;
   tmp_called_value_44 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[40]);

   if (tmp_called_value_44 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_44 == NULL)) {
         tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_44 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 173;
      type_description_2 = "o";
         goto frame_exception_exit_7;
     }
           Py_INCREF(tmp_called_value_44);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_dict_key_25 = mod_consts[169];
   tmp_dict_value_25 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[170]);

   if (tmp_dict_value_25 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_25 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_25);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_annotations_29 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_25, tmp_dict_value_25);
   Py_DECREF(tmp_dict_value_25);
   assert(!(tmp_res != 0));
   tmp_dict_key_25 = mod_consts[88];
   tmp_dict_value_25 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_29, tmp_dict_key_25, tmp_dict_value_25);
   assert(!(tmp_res != 0));


   tmp_args_element_value_32 = MAKE_FUNCTION_aiohttp$abc$$$function__23_write(tmp_annotations_29);

   frame_9a985ee683fe19769ee5711edc64c158_7->m_frame.f_lineno = 173;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_32);
   Py_DECREF(tmp_called_value_44);
   Py_DECREF(tmp_args_element_value_32);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 173;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[15], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 174;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
  }
  {
   PyObject *tmp_called_value_45;
   PyObject *tmp_args_element_value_33;
   PyObject *tmp_defaults_3;
   PyObject *tmp_annotations_30;
   PyObject *tmp_dict_key_26;
   PyObject *tmp_dict_value_26;
   tmp_called_value_45 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[40]);

   if (tmp_called_value_45 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_45 == NULL)) {
         tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_45 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 177;
      type_description_2 = "o";
         goto frame_exception_exit_7;
     }
           Py_INCREF(tmp_called_value_45);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_defaults_3 = mod_consts[171];
   tmp_dict_key_26 = mod_consts[169];
   tmp_dict_value_26 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[170]);

   if (tmp_dict_value_26 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_26 = (PyObject *)&PyBytes_Type;
           Py_INCREF(tmp_dict_value_26);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_annotations_30 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_26, tmp_dict_value_26);
   Py_DECREF(tmp_dict_value_26);
   assert(!(tmp_res != 0));
   tmp_dict_key_26 = mod_consts[88];
   tmp_dict_value_26 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_30, tmp_dict_key_26, tmp_dict_value_26);
   assert(!(tmp_res != 0));
   Py_INCREF(tmp_defaults_3);


   tmp_args_element_value_33 = MAKE_FUNCTION_aiohttp$abc$$$function__24_write_eof(tmp_defaults_3, tmp_annotations_30);

   frame_9a985ee683fe19769ee5711edc64c158_7->m_frame.f_lineno = 177;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_45, tmp_args_element_value_33);
   Py_DECREF(tmp_called_value_45);
   Py_DECREF(tmp_args_element_value_33);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 177;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[18], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 178;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
  }
  {
   PyObject *tmp_called_value_46;
   PyObject *tmp_args_element_value_34;
   PyObject *tmp_annotations_31;
   tmp_called_value_46 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[40]);

   if (tmp_called_value_46 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_46 == NULL)) {
         tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_46 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 181;
      type_description_2 = "o";
         goto frame_exception_exit_7;
     }
           Py_INCREF(tmp_called_value_46);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_annotations_31 = DICT_COPY(tstate, mod_consts[84]);


   tmp_args_element_value_34 = MAKE_FUNCTION_aiohttp$abc$$$function__25_drain(tmp_annotations_31);

   frame_9a985ee683fe19769ee5711edc64c158_7->m_frame.f_lineno = 181;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_34);
   Py_DECREF(tmp_called_value_46);
   Py_DECREF(tmp_args_element_value_34);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 181;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[21], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 182;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
  }
  {
   PyObject *tmp_called_value_47;
   PyObject *tmp_args_element_value_35;
   PyObject *tmp_defaults_4;
   PyObject *tmp_annotations_32;
   PyObject *tmp_dict_key_27;
   PyObject *tmp_dict_value_27;
   tmp_called_value_47 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[40]);

   if (tmp_called_value_47 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_47 == NULL)) {
         tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_47 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 185;
      type_description_2 = "o";
         goto frame_exception_exit_7;
     }
           Py_INCREF(tmp_called_value_47);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_defaults_4 = mod_consts[172];
   tmp_dict_key_27 = mod_consts[173];
   tmp_dict_value_27 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[110]);

   if (tmp_dict_value_27 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_27 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_27);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_annotations_32 = _PyDict_NewPresized( 2 );
   tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_27, tmp_dict_value_27);
   Py_DECREF(tmp_dict_value_27);
   assert(!(tmp_res != 0));
   tmp_dict_key_27 = mod_consts[88];
   tmp_dict_value_27 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_32, tmp_dict_key_27, tmp_dict_value_27);
   assert(!(tmp_res != 0));
   Py_INCREF(tmp_defaults_4);


   tmp_args_element_value_35 = MAKE_FUNCTION_aiohttp$abc$$$function__26_enable_compression(tmp_defaults_4, tmp_annotations_32);

   frame_9a985ee683fe19769ee5711edc64c158_7->m_frame.f_lineno = 185;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_47, tmp_args_element_value_35);
   Py_DECREF(tmp_called_value_47);
   Py_DECREF(tmp_args_element_value_35);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 185;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[175], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 186;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
  }
  {
   PyObject *tmp_called_value_48;
   PyObject *tmp_args_element_value_36;
   PyObject *tmp_annotations_33;
   tmp_called_value_48 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[40]);

   if (tmp_called_value_48 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_48 == NULL)) {
         tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_48 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 189;
      type_description_2 = "o";
         goto frame_exception_exit_7;
     }
           Py_INCREF(tmp_called_value_48);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_annotations_33 = DICT_COPY(tstate, mod_consts[84]);


   tmp_args_element_value_36 = MAKE_FUNCTION_aiohttp$abc$$$function__27_enable_chunking(tmp_annotations_33);

   frame_9a985ee683fe19769ee5711edc64c158_7->m_frame.f_lineno = 189;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_36);
   Py_DECREF(tmp_called_value_48);
   Py_DECREF(tmp_args_element_value_36);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 189;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[178], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 190;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
  }
  {
   PyObject *tmp_called_value_49;
   PyObject *tmp_args_element_value_37;
   PyObject *tmp_annotations_34;
   PyObject *tmp_dict_key_28;
   PyObject *tmp_dict_value_28;
   tmp_called_value_49 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[40]);

   if (tmp_called_value_49 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_49 == NULL)) {
         tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_49 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 193;
      type_description_2 = "o";
         goto frame_exception_exit_7;
     }
           Py_INCREF(tmp_called_value_49);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_dict_key_28 = mod_consts[180];
   tmp_dict_value_28 = PyObject_GetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[110]);

   if (tmp_dict_value_28 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_28 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_28);
       } else {
           goto frame_exception_exit_7;
       }
   }

   tmp_annotations_34 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_28, tmp_dict_value_28);
   Py_DECREF(tmp_dict_value_28);
   assert(!(tmp_res != 0));
   tmp_dict_key_28 = mod_consts[181];
   tmp_dict_value_28 = mod_consts[182];
   tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_28, tmp_dict_value_28);
   assert(!(tmp_res != 0));
   tmp_dict_key_28 = mod_consts[88];
   tmp_dict_value_28 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_34, tmp_dict_key_28, tmp_dict_value_28);
   assert(!(tmp_res != 0));


   tmp_args_element_value_37 = MAKE_FUNCTION_aiohttp$abc$$$function__28_write_headers(tmp_annotations_34);

   frame_9a985ee683fe19769ee5711edc64c158_7->m_frame.f_lineno = 193;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_49, tmp_args_element_value_37);
   Py_DECREF(tmp_called_value_49);
   Py_DECREF(tmp_args_element_value_37);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 193;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[24], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 194;
    type_description_2 = "o";
       goto frame_exception_exit_7;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_6;
  frame_exception_exit_7:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_9a985ee683fe19769ee5711edc64c158_7, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_9a985ee683fe19769ee5711edc64c158_7->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_9a985ee683fe19769ee5711edc64c158_7, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_9a985ee683fe19769ee5711edc64c158_7,
      type_description_2,
      outline_5_var___class__
  );



  assertFrameObject(frame_9a985ee683fe19769ee5711edc64c158_7);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_6;
  frame_no_exception_6:;
  goto skip_nested_handling_6;
  nested_frame_exit_6:;

  goto try_except_handler_21;
  skip_nested_handling_6:;
  {
   nuitka_bool tmp_condition_result_30;
   PyObject *tmp_cmp_expr_left_6;
   PyObject *tmp_cmp_expr_right_6;
   CHECK_OBJECT(tmp_class_creation_6__bases);
   tmp_cmp_expr_left_6 = tmp_class_creation_6__bases;
   CHECK_OBJECT(tmp_class_creation_6__bases_orig);
   tmp_cmp_expr_right_6 = tmp_class_creation_6__bases_orig;
   tmp_condition_result_30 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
   if (tmp_condition_result_30 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 166;

       goto try_except_handler_21;
   }
   if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
       goto branch_yes_18;
   } else {
       goto branch_no_18;
   }
  }
  branch_yes_18:;
  CHECK_OBJECT(tmp_class_creation_6__bases_orig);
  tmp_dictset_value = tmp_class_creation_6__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166, mod_consts[100], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 166;

      goto try_except_handler_21;
  }
  branch_no_18:;
  {
   PyObject *tmp_assign_source_82;
   PyObject *tmp_called_value_50;
   PyObject *tmp_args_value_12;
   PyObject *tmp_tuple_element_34;
   PyObject *tmp_kwargs_value_12;
   CHECK_OBJECT(tmp_class_creation_6__metaclass);
   tmp_called_value_50 = tmp_class_creation_6__metaclass;
   tmp_tuple_element_34 = mod_consts[163];
   tmp_args_value_12 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_34);
   CHECK_OBJECT(tmp_class_creation_6__bases);
   tmp_tuple_element_34 = tmp_class_creation_6__bases;
   PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_34);
   tmp_tuple_element_34 = locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166;
   PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_34);
   CHECK_OBJECT(tmp_class_creation_6__class_decl_dict);
   tmp_kwargs_value_12 = tmp_class_creation_6__class_decl_dict;
   frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 166;
   tmp_assign_source_82 = CALL_FUNCTION(tstate, tmp_called_value_50, tmp_args_value_12, tmp_kwargs_value_12);
   Py_DECREF(tmp_args_value_12);
   if (tmp_assign_source_82 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 166;

       goto try_except_handler_21;
   }
   assert(outline_5_var___class__ == NULL);
   outline_5_var___class__ = tmp_assign_source_82;
  }
  CHECK_OBJECT(outline_5_var___class__);
  tmp_assign_source_81 = outline_5_var___class__;
  Py_INCREF(tmp_assign_source_81);
  goto try_return_handler_21;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_21:;
  Py_DECREF(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166);
  locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166 = NULL;
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

  Py_DECREF(locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166);
  locals_aiohttp$abc$$$class__6_AbstractStreamWriter_166 = NULL;
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
  exception_lineno = 166;
  goto try_except_handler_19;
  outline_result_6:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_81);
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
  PyObject *tmp_assign_source_83;
  PyObject *tmp_tuple_element_35;
  tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[39]);

  if (unlikely(tmp_tuple_element_35 == NULL)) {
      tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
  }

  if (tmp_tuple_element_35 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  tmp_assign_source_83 = MAKE_TUPLE_EMPTY(tstate, 1);
  PyTuple_SET_ITEM0(tmp_assign_source_83, 0, tmp_tuple_element_35);
  assert(tmp_class_creation_7__bases_orig == NULL);
  tmp_class_creation_7__bases_orig = tmp_assign_source_83;
 }
 {
  PyObject *tmp_assign_source_84;
  PyObject *tmp_dircall_arg1_7;
  CHECK_OBJECT(tmp_class_creation_7__bases_orig);
  tmp_dircall_arg1_7 = tmp_class_creation_7__bases_orig;
  Py_INCREF(tmp_dircall_arg1_7);

  {
      PyObject *dir_call_args[] = {tmp_dircall_arg1_7};
      tmp_assign_source_84 = impl___main__$$$helper_function__mro_entries_conversion(tstate, dir_call_args);
  }
  if (tmp_assign_source_84 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  assert(tmp_class_creation_7__bases == NULL);
  tmp_class_creation_7__bases = tmp_assign_source_84;
 }
 {
  PyObject *tmp_assign_source_85;
  tmp_assign_source_85 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_7__class_decl_dict == NULL);
  tmp_class_creation_7__class_decl_dict = tmp_assign_source_85;
 }
 {
  PyObject *tmp_assign_source_86;
  PyObject *tmp_metaclass_value_7;
  nuitka_bool tmp_condition_result_31;
  int tmp_truth_name_7;
  PyObject *tmp_type_arg_13;
  PyObject *tmp_expression_value_60;
  PyObject *tmp_subscript_value_29;
  PyObject *tmp_bases_value_7;
  CHECK_OBJECT(tmp_class_creation_7__bases);
  tmp_truth_name_7 = CHECK_IF_TRUE(tmp_class_creation_7__bases);
  if (tmp_truth_name_7 == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  tmp_condition_result_31 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
  if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
      goto condexpr_true_13;
  } else {
      goto condexpr_false_13;
  }
  condexpr_true_13:;
  CHECK_OBJECT(tmp_class_creation_7__bases);
  tmp_expression_value_60 = tmp_class_creation_7__bases;
  tmp_subscript_value_29 = mod_consts[35];
  tmp_type_arg_13 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_60, tmp_subscript_value_29, 0);
  if (tmp_type_arg_13 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  tmp_metaclass_value_7 = BUILTIN_TYPE1(tmp_type_arg_13);
  Py_DECREF(tmp_type_arg_13);
  if (tmp_metaclass_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  goto condexpr_end_13;
  condexpr_false_13:;
  tmp_metaclass_value_7 = (PyObject *)&PyType_Type;
  Py_INCREF(tmp_metaclass_value_7);
  condexpr_end_13:;
  CHECK_OBJECT(tmp_class_creation_7__bases);
  tmp_bases_value_7 = tmp_class_creation_7__bases;
  tmp_assign_source_86 = SELECT_METACLASS(tstate, tmp_metaclass_value_7, tmp_bases_value_7);
  Py_DECREF(tmp_metaclass_value_7);
  if (tmp_assign_source_86 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  assert(tmp_class_creation_7__metaclass == NULL);
  tmp_class_creation_7__metaclass = tmp_assign_source_86;
 }
 {
  bool tmp_condition_result_32;
  PyObject *tmp_expression_value_61;
  CHECK_OBJECT(tmp_class_creation_7__metaclass);
  tmp_expression_value_61 = tmp_class_creation_7__metaclass;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_61, mod_consts[75]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  tmp_condition_result_32 = (tmp_res != 0) ? true : false;
  if (tmp_condition_result_32 != false) {
      goto branch_yes_19;
  } else {
      goto branch_no_19;
  }
 }
 branch_yes_19:;
 {
  PyObject *tmp_assign_source_87;
  PyObject *tmp_called_value_51;
  PyObject *tmp_expression_value_62;
  PyObject *tmp_args_value_13;
  PyObject *tmp_tuple_element_36;
  PyObject *tmp_kwargs_value_13;
  CHECK_OBJECT(tmp_class_creation_7__metaclass);
  tmp_expression_value_62 = tmp_class_creation_7__metaclass;
  tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[75]);
  if (tmp_called_value_51 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  tmp_tuple_element_36 = mod_consts[183];
  tmp_args_value_13 = MAKE_TUPLE_EMPTY(tstate, 2);
  PyTuple_SET_ITEM0(tmp_args_value_13, 0, tmp_tuple_element_36);
  CHECK_OBJECT(tmp_class_creation_7__bases);
  tmp_tuple_element_36 = tmp_class_creation_7__bases;
  PyTuple_SET_ITEM0(tmp_args_value_13, 1, tmp_tuple_element_36);
  CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
  tmp_kwargs_value_13 = tmp_class_creation_7__class_decl_dict;
  frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 200;
  tmp_assign_source_87 = CALL_FUNCTION(tstate, tmp_called_value_51, tmp_args_value_13, tmp_kwargs_value_13);
  Py_DECREF(tmp_called_value_51);
  Py_DECREF(tmp_args_value_13);
  if (tmp_assign_source_87 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  assert(tmp_class_creation_7__prepared == NULL);
  tmp_class_creation_7__prepared = tmp_assign_source_87;
 }
 {
  bool tmp_condition_result_33;
  PyObject *tmp_operand_value_7;
  PyObject *tmp_expression_value_63;
  CHECK_OBJECT(tmp_class_creation_7__prepared);
  tmp_expression_value_63 = tmp_class_creation_7__prepared;
  tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_63, mod_consts[77]);
  if (tmp_res == -1) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
  tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
  assert(!(tmp_res == -1));
  tmp_condition_result_33 = (tmp_res == 0) ? true : false;
  if (tmp_condition_result_33 != false) {
      goto branch_yes_20;
  } else {
      goto branch_no_20;
  }
 }
 branch_yes_20:;
 {
  PyObject *tmp_raise_type_7;
  PyObject *tmp_raise_value_7;
  PyObject *tmp_mod_expr_left_7;
  PyObject *tmp_mod_expr_right_7;
  PyObject *tmp_tuple_element_37;
  PyObject *tmp_expression_value_64;
  PyObject *tmp_name_value_16;
  PyObject *tmp_default_value_7;
  tmp_raise_type_7 = PyExc_TypeError;
  tmp_mod_expr_left_7 = mod_consts[78];
  CHECK_OBJECT(tmp_class_creation_7__metaclass);
  tmp_expression_value_64 = tmp_class_creation_7__metaclass;
  tmp_name_value_16 = mod_consts[79];
  tmp_default_value_7 = mod_consts[80];
  tmp_tuple_element_37 = BUILTIN_GETATTR(tstate, tmp_expression_value_64, tmp_name_value_16, tmp_default_value_7);
  if (tmp_tuple_element_37 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  tmp_mod_expr_right_7 = MAKE_TUPLE_EMPTY(tstate, 2);
  {
   PyObject *tmp_expression_value_65;
   PyObject *tmp_type_arg_14;
   PyTuple_SET_ITEM(tmp_mod_expr_right_7, 0, tmp_tuple_element_37);
   CHECK_OBJECT(tmp_class_creation_7__prepared);
   tmp_type_arg_14 = tmp_class_creation_7__prepared;
   tmp_expression_value_65 = BUILTIN_TYPE1(tmp_type_arg_14);
   assert(!(tmp_expression_value_65 == NULL));
   tmp_tuple_element_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[79]);
   Py_DECREF(tmp_expression_value_65);
   if (tmp_tuple_element_37 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 200;

       goto tuple_build_exception_15;
   }
   PyTuple_SET_ITEM(tmp_mod_expr_right_7, 1, tmp_tuple_element_37);
  }
  goto tuple_build_noexception_15;
  // Exception handling pass through code for tuple_build:
  tuple_build_exception_15:;
  Py_DECREF(tmp_mod_expr_right_7);
  goto try_except_handler_22;
  // Finished with no exception for tuple_build:
  tuple_build_noexception_15:;
  tmp_raise_value_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
  Py_DECREF(tmp_mod_expr_right_7);
  if (tmp_raise_value_7 == NULL) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_22;
  }
  exception_type = tmp_raise_type_7;
  Py_INCREF(tmp_raise_type_7);
  exception_value = tmp_raise_value_7;
  exception_lineno = 200;
  RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

  goto try_except_handler_22;
 }
 branch_no_20:;
 goto branch_end_19;
 branch_no_19:;
 {
  PyObject *tmp_assign_source_88;
  tmp_assign_source_88 = MAKE_DICT_EMPTY(tstate);
  assert(tmp_class_creation_7__prepared == NULL);
  tmp_class_creation_7__prepared = tmp_assign_source_88;
 }
 branch_end_19:;
 {
  PyObject *tmp_assign_source_89;
  {
   PyObject *tmp_set_locals_7;
   CHECK_OBJECT(tmp_class_creation_7__prepared);
   tmp_set_locals_7 = tmp_class_creation_7__prepared;
   locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200 = tmp_set_locals_7;
   Py_INCREF(tmp_set_locals_7);
  }
  // Tried code:
  // Tried code:
  tmp_dictset_value = mod_consts[81];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[82], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_24;
  }
  tmp_dictset_value = mod_consts[184];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[28], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_24;
  }
  tmp_dictset_value = mod_consts[183];
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[83], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_24;
  }
  frame_690a67bc5eaf81b8d0f5805ca18e2fda_8 = MAKE_CLASS_FRAME(tstate, codeobj_690a67bc5eaf81b8d0f5805ca18e2fda, module_aiohttp$abc, NULL, sizeof(void *));

  // Push the new frame as the currently active one, and we should be exclusively
  // owning it.
  pushFrameStackCompiledFrame(tstate, frame_690a67bc5eaf81b8d0f5805ca18e2fda_8);
  assert(Py_REFCNT(frame_690a67bc5eaf81b8d0f5805ca18e2fda_8) == 2);

  // Framed code:
  {
   PyObject *tmp_annotations_35;
   PyObject *tmp_dict_key_29;
   PyObject *tmp_dict_value_29;
   PyObject *tmp_expression_value_66;
   tmp_dict_key_29 = mod_consts[26];
   tmp_expression_value_66 = PyObject_GetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[36]);

   if (tmp_expression_value_66 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[36]);

     if (unlikely(tmp_expression_value_66 == NULL)) {
         tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[36]);
     }

     if (tmp_expression_value_66 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 203;
      type_description_2 = "o";
         goto frame_exception_exit_8;
     }
           Py_INCREF(tmp_expression_value_66);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_dict_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[185]);
   Py_DECREF(tmp_expression_value_66);
   if (tmp_dict_value_29 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 203;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_annotations_35 = _PyDict_NewPresized( 3 );
   tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_29, tmp_dict_value_29);
   Py_DECREF(tmp_dict_value_29);
   assert(!(tmp_res != 0));
   tmp_dict_key_29 = mod_consts[27];
   tmp_dict_value_29 = PyObject_GetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[110]);

   if (tmp_dict_value_29 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_29 = (PyObject *)&PyUnicode_Type;
           Py_INCREF(tmp_dict_value_29);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_29, tmp_dict_value_29);
   Py_DECREF(tmp_dict_value_29);
   assert(!(tmp_res != 0));
   tmp_dict_key_29 = mod_consts[88];
   tmp_dict_value_29 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_35, tmp_dict_key_29, tmp_dict_value_29);
   assert(!(tmp_res != 0));


   tmp_dictset_value = MAKE_FUNCTION_aiohttp$abc$$$function__29___init__(tmp_annotations_35);

   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[85], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 203;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
  }
  {
   PyObject *tmp_called_value_52;
   PyObject *tmp_args_element_value_38;
   PyObject *tmp_annotations_36;
   PyObject *tmp_dict_key_30;
   PyObject *tmp_dict_value_30;
   tmp_called_value_52 = PyObject_GetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[40]);

   if (tmp_called_value_52 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[40]);

     if (unlikely(tmp_called_value_52 == NULL)) {
         tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
     }

     if (tmp_called_value_52 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 207;
      type_description_2 = "o";
         goto frame_exception_exit_8;
     }
           Py_INCREF(tmp_called_value_52);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_dict_key_30 = mod_consts[98];
   tmp_dict_value_30 = PyObject_GetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[70]);

   if (tmp_dict_value_30 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[70]);

     if (unlikely(tmp_dict_value_30 == NULL)) {
         tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[70]);
     }

     if (tmp_dict_value_30 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
      Py_DECREF(tmp_called_value_52);

      exception_lineno = 208;
      type_description_2 = "o";
         goto frame_exception_exit_8;
     }
           Py_INCREF(tmp_dict_value_30);
       } else {
           goto frame_exception_exit_8;
       }
   }

   tmp_annotations_36 = _PyDict_NewPresized( 4 );
   tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_30, tmp_dict_value_30);
   Py_DECREF(tmp_dict_value_30);
   assert(!(tmp_res != 0));
   tmp_dict_key_30 = mod_consts[187];
   tmp_dict_value_30 = PyObject_GetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[73]);

   if (tmp_dict_value_30 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_30 = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[73]);

     if (unlikely(tmp_dict_value_30 == NULL)) {
         tmp_dict_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[73]);
     }

     if (tmp_dict_value_30 == NULL) {
         assert(HAS_ERROR_OCCURRED(tstate));

         FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


      exception_lineno = 208;
      type_description_2 = "o";
         goto dict_build_exception_3;
     }
           Py_INCREF(tmp_dict_value_30);
       } else {
           goto dict_build_exception_3;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_30, tmp_dict_value_30);
   Py_DECREF(tmp_dict_value_30);
   assert(!(tmp_res != 0));
   tmp_dict_key_30 = mod_consts[188];
   tmp_dict_value_30 = PyObject_GetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[189]);

   if (tmp_dict_value_30 == NULL) {
       if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
     tmp_dict_value_30 = (PyObject *)&PyFloat_Type;
           Py_INCREF(tmp_dict_value_30);
       } else {
           goto dict_build_exception_3;
       }
   }

   tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_30, tmp_dict_value_30);
   Py_DECREF(tmp_dict_value_30);
   assert(!(tmp_res != 0));
   tmp_dict_key_30 = mod_consts[88];
   tmp_dict_value_30 = Py_None;
   tmp_res = PyDict_SetItem(tmp_annotations_36, tmp_dict_key_30, tmp_dict_value_30);
   assert(!(tmp_res != 0));
   goto dict_build_noexception_3;
   // Exception handling pass through code for dict_build:
   dict_build_exception_3:;
   Py_DECREF(tmp_called_value_52);
   Py_DECREF(tmp_annotations_36);
   goto frame_exception_exit_8;
   // Finished with no exception for dict_build:
   dict_build_noexception_3:;


   tmp_args_element_value_38 = MAKE_FUNCTION_aiohttp$abc$$$function__30_log(tmp_annotations_36);

   frame_690a67bc5eaf81b8d0f5805ca18e2fda_8->m_frame.f_lineno = 207;
   tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_38);
   Py_DECREF(tmp_called_value_52);
   Py_DECREF(tmp_args_element_value_38);
   if (tmp_dictset_value == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 207;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
   tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[191], tmp_dictset_value);
   Py_DECREF(tmp_dictset_value);
   if (tmp_res != 0) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 208;
    type_description_2 = "o";
       goto frame_exception_exit_8;
   }
  }


  // Put the previous frame back on top.
  popFrameStack(tstate);

  goto frame_no_exception_7;
  frame_exception_exit_8:


  if (exception_tb == NULL) {
      exception_tb = MAKE_TRACEBACK(frame_690a67bc5eaf81b8d0f5805ca18e2fda_8, exception_lineno);
  } else if (exception_tb->tb_frame != &frame_690a67bc5eaf81b8d0f5805ca18e2fda_8->m_frame) {
      exception_tb = ADD_TRACEBACK(exception_tb, frame_690a67bc5eaf81b8d0f5805ca18e2fda_8, exception_lineno);
  }

  // Attaches locals to frame if any.
  Nuitka_Frame_AttachLocals(
      frame_690a67bc5eaf81b8d0f5805ca18e2fda_8,
      type_description_2,
      outline_6_var___class__
  );



  assertFrameObject(frame_690a67bc5eaf81b8d0f5805ca18e2fda_8);

  // Put the previous frame back on top.
  popFrameStack(tstate);

  // Return the error.
  goto nested_frame_exit_7;
  frame_no_exception_7:;
  goto skip_nested_handling_7;
  nested_frame_exit_7:;

  goto try_except_handler_24;
  skip_nested_handling_7:;
  {
   nuitka_bool tmp_condition_result_34;
   PyObject *tmp_cmp_expr_left_7;
   PyObject *tmp_cmp_expr_right_7;
   CHECK_OBJECT(tmp_class_creation_7__bases);
   tmp_cmp_expr_left_7 = tmp_class_creation_7__bases;
   CHECK_OBJECT(tmp_class_creation_7__bases_orig);
   tmp_cmp_expr_right_7 = tmp_class_creation_7__bases_orig;
   tmp_condition_result_34 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
   if (tmp_condition_result_34 == NUITKA_BOOL_EXCEPTION) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 200;

       goto try_except_handler_24;
   }
   if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
       goto branch_yes_21;
   } else {
       goto branch_no_21;
   }
  }
  branch_yes_21:;
  CHECK_OBJECT(tmp_class_creation_7__bases_orig);
  tmp_dictset_value = tmp_class_creation_7__bases_orig;
  tmp_res = PyObject_SetItem(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200, mod_consts[100], tmp_dictset_value);
  if (tmp_res != 0) {
      assert(HAS_ERROR_OCCURRED(tstate));

      FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


   exception_lineno = 200;

      goto try_except_handler_24;
  }
  branch_no_21:;
  {
   PyObject *tmp_assign_source_90;
   PyObject *tmp_called_value_53;
   PyObject *tmp_args_value_14;
   PyObject *tmp_tuple_element_38;
   PyObject *tmp_kwargs_value_14;
   CHECK_OBJECT(tmp_class_creation_7__metaclass);
   tmp_called_value_53 = tmp_class_creation_7__metaclass;
   tmp_tuple_element_38 = mod_consts[183];
   tmp_args_value_14 = MAKE_TUPLE_EMPTY(tstate, 3);
   PyTuple_SET_ITEM0(tmp_args_value_14, 0, tmp_tuple_element_38);
   CHECK_OBJECT(tmp_class_creation_7__bases);
   tmp_tuple_element_38 = tmp_class_creation_7__bases;
   PyTuple_SET_ITEM0(tmp_args_value_14, 1, tmp_tuple_element_38);
   tmp_tuple_element_38 = locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200;
   PyTuple_SET_ITEM0(tmp_args_value_14, 2, tmp_tuple_element_38);
   CHECK_OBJECT(tmp_class_creation_7__class_decl_dict);
   tmp_kwargs_value_14 = tmp_class_creation_7__class_decl_dict;
   frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame.f_lineno = 200;
   tmp_assign_source_90 = CALL_FUNCTION(tstate, tmp_called_value_53, tmp_args_value_14, tmp_kwargs_value_14);
   Py_DECREF(tmp_args_value_14);
   if (tmp_assign_source_90 == NULL) {
       assert(HAS_ERROR_OCCURRED(tstate));

       FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


    exception_lineno = 200;

       goto try_except_handler_24;
   }
   assert(outline_6_var___class__ == NULL);
   outline_6_var___class__ = tmp_assign_source_90;
  }
  CHECK_OBJECT(outline_6_var___class__);
  tmp_assign_source_89 = outline_6_var___class__;
  Py_INCREF(tmp_assign_source_89);
  goto try_return_handler_24;
  NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
  return NULL;
  // Return handler code:
  try_return_handler_24:;
  Py_DECREF(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200);
  locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200 = NULL;
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

  Py_DECREF(locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200);
  locals_aiohttp$abc$$$class__7_AbstractAccessLogger_200 = NULL;
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
  exception_lineno = 200;
  goto try_except_handler_22;
  outline_result_7:;
  UPDATE_STRING_DICT1(moduledict_aiohttp$abc, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_89);
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


 // Put the previous frame back on top.
 popFrameStack(tstate);

 goto frame_no_exception_8;
 frame_exception_exit_1:


 if (exception_tb == NULL) {
     exception_tb = MAKE_TRACEBACK(frame_d52e3d69d717b1ca63d036674ab13c1c, exception_lineno);
 } else if (exception_tb->tb_frame != &frame_d52e3d69d717b1ca63d036674ab13c1c->m_frame) {
     exception_tb = ADD_TRACEBACK(exception_tb, frame_d52e3d69d717b1ca63d036674ab13c1c, exception_lineno);
 }



 assertFrameObject(frame_d52e3d69d717b1ca63d036674ab13c1c);

 // Put the previous frame back on top.
 popFrameStack(tstate);

 // Return the error.
 goto module_exception_exit;
 frame_no_exception_8:;
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

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("aiohttp$abc", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "aiohttp.abc" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_aiohttp$abc);
    return module_aiohttp$abc;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_aiohttp$abc, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("aiohttp$abc", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
