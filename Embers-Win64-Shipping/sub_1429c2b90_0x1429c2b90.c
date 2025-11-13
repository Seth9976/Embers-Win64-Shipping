// 函数: sub_1429c2b90
// 地址: 0x1429c2b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int32_t code = _Mtx_lock(arg1 + 0x90)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

int32_t rbx_2 = ((*(arg1 + 0xe8) - *(arg1 + 0xe0)) s>> 3).d
int32_t code_1 = _Mtx_unlock(arg1 + 0x90)

if (code_1 == 0)
    return zx.q(rbx_2)

std::_Throw_C_error(code_1)
noreturn
