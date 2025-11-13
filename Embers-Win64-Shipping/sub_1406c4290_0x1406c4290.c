// 函数: sub_1406c4290
// 地址: 0x1406c4290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
struct _Mtx_internal_imp_t* mtx = &arg1[4]
char var_30 = 0
int32_t code = _Mtx_lock(&arg1[4])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_30_1 = 1
void var_28
__ExceptionPtrCopy(&var_28, arg2)
void* arg_8 = &var_28

if (*(arg1 + 0xc1) != 0)
    void var_18
    std::_Throw_future_error(std::make_error_code(&var_18, 3))
    noreturn

__ExceptionPtrAssign(&arg1[2], &var_28)
(*(*arg1 + 0x28))(arg1, &mtx, zx.q(arg3))
__ExceptionPtrDestroy(&var_28)

if (var_30_1 != 0)
    _Mtx_unlock(mtx)

return __ExceptionPtrDestroy(arg2)
