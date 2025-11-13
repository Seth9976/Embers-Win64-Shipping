// 函数: sub_141d3ce60
// 地址: 0x141d3ce60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x118)

if (result == 0)
    return 0

result[1] = 0
void* rcx = &result[0xc]
result[2] = 0
*result = &data_143222270
result[3].b = 0
__builtin_memset(&result[4], 0, 0x40)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
result[0x10].d = 0xffffffff
*(result + 0x84) = 0
result[0x12] = 0
result[0x13].d = 0
InitializeCriticalSection(&result[0x14])
SetCriticalSectionSpinCount(&result[0x14], 0xfa0)
__builtin_memset(&result[0x19], 0, 0x19)
__builtin_memset(&result[0x1d], 0, 0x30)
return result
