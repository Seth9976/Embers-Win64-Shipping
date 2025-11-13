// 函数: sub_142a86010
// 地址: 0x142a86010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int32_t code = _Mtx_lock(*arg1)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

int32_t code_1 = _Cnd_broadcast(&arg1[2])

if (code_1 != 0)
    std::_Throw_C_error(code_1)
    noreturn

int32_t code_2 = _Mtx_unlock(*arg1)

if (code_2 == 0)
    return code_2

std::_Throw_C_error(code_2)
noreturn
