// 函数: sub_140ccdbb0
// 地址: 0x140ccdbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xe8)
EnterCriticalSection(arg1 + 0x58)
*(arg1 + 0x80) = arg2
int64_t var_38
__builtin_memset(&var_38, 0, 0x20)
int64_t var_28
*(arg1 + 0x88) = var_28.o
int32_t r15_1 = *(arg1 + 0x10) - *(arg1 + 0x3c)
int32_t arg_8
sub_1405ba560(arg1 + 8, &arg_8, arg2)
int64_t rdx_1 = sx.q(arg_8)

if (rdx_1.d != 0xffffffff)
    var_38.o = *((rdx_1 << 5) + *(arg1 + 8) + 8)
    sub_1405c3390(arg1 + 8, rdx_1.d)

if (r15_1 s> 0 && *(arg1 + 0x10) == *(arg1 + 0x3c))
    sub_140d2af80(&data_143e1d990, arg1)

if (arg1 != -0x58)
    LeaveCriticalSection(arg1 + 0x58)

int64_t var_30
int32_t result = var_30:4.d | var_30.d | var_38:4.d | var_38.d

if (result != 0)
    result = sub_140ccd8d0(arg1 + 0x98, &var_38)

if (arg1 == -0xe8)
    return result

return LeaveCriticalSection(arg1 + 0xe8)
