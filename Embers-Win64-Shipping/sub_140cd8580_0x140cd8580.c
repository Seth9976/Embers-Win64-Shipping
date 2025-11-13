// 函数: sub_140cd8580
// 地址: 0x140cd8580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[1].d

if (((rdx u>> 0xf).b & 1) != 0)
    return 0

int32_t rdx_1 = rdx | 0x8000
arg1[1].d = rdx_1
(*(*arg1 + 0x80))(arg2, rdx_1)
int64_t result
result.b = 1
return result
