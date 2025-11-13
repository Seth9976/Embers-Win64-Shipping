// 函数: sub_1429c3510
// 地址: 0x1429c3510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
int64_t* rax = j_sub_140a82f30(0x10)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rax = *arg3
    rax[1] = *arg2

int64_t* arg_8 = rbx
struct _Cnd_internal_imp_t* cond_1
int32_t code = _Cnd_init(&cond_1)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_50 = 1
struct _Cnd_internal_imp_t* cond_2 = cond_1
int32_t code_5 = 1
struct _Mtx_internal_imp_t* mtx
int32_t code_1 = _Mtx_init(&mtx, 1)

if (code_1 != 0)
    std::_Throw_C_error(code_1)
    noreturn

char var_40 = 1
struct _Mtx_internal_imp_t* mtx_1 = mtx
struct _Mtx_internal_imp_t* mtx_3 = mtx_1
char i = 0
int32_t code_2 = _Mtx_lock(mtx_1)

if (code_2 != 0)
    std::_Throw_C_error(code_2)
    noreturn

struct std::_Pad::std::_LaunchPad<class std::unique_ptr<class std::tuple<void (__cdecl*)(),class IlmThread_2_3::Thread* __ptr64>,struct std::default_delete<class std::tuple<void (__cdecl*)(),class IlmThread_2_3::Thread* __ptr64> > > >::VTable
    * const b = &std::_LaunchPad<class std::unique_ptr<class std::tuple<void (__cdecl*)(),class IlmThread_2_3::Thread* __ptr64>,struct std::default_delete<class std::tuple<void (__cdecl*)(),class IlmThread_2_3::Thread* __ptr64> > > >::`vftable'{for `std::_Pad'}
arg_8 = nullptr
int32_t code_6 = _Thrd_start(arg1, func, &b)

if (code_6 != 4)
    code_5 = code_6

if (code_5 != 0)
    std::_Throw_C_error(code_5)
    noreturn

while (i == 0)
    int32_t code_3 = _Cnd_wait(cond_1, mtx)
    
    if (code_3 != 0)
        std::_Throw_C_error(code_3)
        noreturn

if (rbx != 0)
    j_sub_140a74f90(rbx)

struct _Cnd_internal_imp_t* cond = cond_1
struct _Mtx_internal_imp_t* mtx_2 = mtx
int32_t code_4 = _Mtx_unlock(mtx_2)

if (code_4 != 0)
    std::_Throw_C_error(code_4)
    noreturn

_Mtx_destroy(mtx_2)
_Cnd_destroy(cond)
return arg1
