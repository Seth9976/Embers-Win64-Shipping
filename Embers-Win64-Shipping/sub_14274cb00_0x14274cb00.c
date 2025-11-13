// 函数: sub_14274cb00
// 地址: 0x14274cb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xb0)

if (result == 0)
    return result

*result = &data_142d40488
result[1].d = GetCurrentThreadId()
*result = &data_14349bf50
result[2] = 0
result[3] = 0
__builtin_memset(&result[6], 0, 0x14)
result[9].d = 0
result[0xa] = 0
result[0xb].d = 0
__builtin_memset(&result[0xc], 0, 0x40)
*(result + 0xa4) = 0xffffffff
result[0x15].d = 0
*(result + 0xac) = 0
int32_t rax_1 = rand()
result[0x11].d = rax_1
*(result + 0x8c) = rax_1
return result
