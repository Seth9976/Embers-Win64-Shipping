// 函数: sub_1406c3180
// 地址: 0x1406c3180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t* rcx = arg1[0x21]

if (rcx == 0)
    std::_Xbad_function_call()
    noreturn

(*(*rcx + 0x10))(rcx)
void* mtx = &arg1[4]
char var_20 = 0
int32_t code = _Mtx_lock(&arg1[4])

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_20_1 = 1

if (*(arg1 + 0xc1) != 0)
    void var_18
    std::_Throw_future_error(std::make_error_code(&var_18, 3))
    noreturn

*(arg1 + 0xc) = 1
int64_t result = (*(*arg1 + 0x28))(arg1, &mtx, 0)

if (var_20_1 == 0)
    return result

return _Mtx_unlock(mtx)
