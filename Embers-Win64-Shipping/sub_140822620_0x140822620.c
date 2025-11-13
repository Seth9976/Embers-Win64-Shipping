// 函数: sub_140822620
// 地址: 0x140822620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50) == 0)
    return 0

void*** result = j_sub_140a82f30(0x188)

if (result == 0)
    return 0

void var_28
int128_t* rax = sub_1423633d0(*(arg1 + 0x50), &var_28)
*result = &data_142dd70b8
__builtin_memset(&result[1], 0, 0x18)
result[4] = data_14396f0d8
result[5].w = data_14396f0e0
*(result + 0x2a) = 0xffffffff
result[6] = 0
result[7] = 0
__builtin_memset(&result[0xe], 0, 0x18)
result[0x11] = data_14396f0d8
result[0x12].w = data_14396f0e0
*(result + 0x92) = 0xffffffff
result[0x13] = 0
result[0x14] = 0
__builtin_memset(&result[0x19], 0, 0x18)
result[0x1c] = data_14396f0d8
result[0x1d].w = data_14396f0e0
*(result + 0xea) = 0xffffffff
result[0x1e] = 0
result[0x1f] = 0
__builtin_memset(&result[0x26], 0, 0x18)
result[0x29] = data_14396f0d8
result[0x2a].w = data_14396f0e0
*(result + 0x152) = 0xffffffff
result[0x2b] = 0
result[0x2c] = 0
result[0x2f] = *(rax + 0xc)
result[0x30].d = *(rax + 0x14)
return result
