// 函数: sub_141b3ded0
// 地址: 0x141b3ded0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[2] = 0
arg2[4] = 0
memset(&arg2[6], 0, 0x58)
void* result_1 = &arg2[9]
*arg2 = &data_143050870
__builtin_memset(&arg2[1], 0, 0x40)
*(result_1 + 0x10) = 0
*(result_1 + 0x18) = 0
*(result_1 + 0x1c) = 0x80
void* result = *(result_1 + 0x10)

if (result != 0)
    result_1 = result

*result_1 = 0
*(result_1 + 8) = 0
arg2[0xd].d = 0xffffffff
*(arg2 + 0x6c) = 0
arg2[0xf] = 0
arg2[0x10].d = 0
return result
