// 函数: sub_1418a1150
// 地址: 0x1418a1150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xc0)

if (result == 0)
    return 0

result[1] = arg1
*result = &data_142fe9b70
result[2].d = 0
__builtin_memset(&result[3], 0, 0x14)
__builtin_memset(&result[6], 0, 0x18)
InitializeCriticalSection(&result[9])
SetCriticalSectionSpinCount(&result[9], 0xfa0)
result[0xe] = 0
void* rcx_2 = &result[0x10]
result[0xf] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
result[0x14].d = 0xffffffff
*(result + 0xa4) = 0
result[0x16] = 0
result[0x17].d = 0
return result
