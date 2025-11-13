// 函数: sub_141842180
// 地址: 0x141842180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xc0)

if (result == 0)
    return 0

result[3] = 0
memset(&result[9], 0, 0x78)
void* rcx_1 = &result[0xa]
*result = &data_142fe3008
result[1] = 0
result[2] = 0
__builtin_memset(&result[4], 0, 0x30)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
result[0xe].d = 0xffffffff
*(result + 0x74) = 0
result[0x10] = 0
result[0x11].d = 0
__builtin_memset(&result[0x12], 0, 0x14)
result[0x15] = 0
result[0x16] = 0
result[0x17] = 2
return result
