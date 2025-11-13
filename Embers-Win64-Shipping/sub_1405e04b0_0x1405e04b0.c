// 函数: sub_1405e04b0
// 地址: 0x1405e04b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xa8)

if (result == 0)
    return 0

*result = &data_142d5a4e0
__builtin_memset(&result[1], 0, 0x40)
result[0xa] = 0
result[0xb].d = 0
*(result + 0x5c) = 1
*(result + 0x64) &= 0xfffffffc
result[0xc].d = 3
result[0xd].d = 3
__builtin_memset(&result[0xe], 0, 0x20)
__builtin_memset(result + 0x94, 0, 0x14)
result[0x12].d = 0xffffffff
return result
