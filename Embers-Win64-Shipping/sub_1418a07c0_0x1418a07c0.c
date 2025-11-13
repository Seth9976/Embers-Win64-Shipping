// 函数: sub_1418a07c0
// 地址: 0x1418a07c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xb8)

if (result == 0)
    return nullptr

result[1] = arg1
void* rcx = &result[8]
result[2] = arg2
*result = &data_142fe98f0
result[3] = arg3
__builtin_memset(&result[4], 0, 0x20)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
result[0xc].d = 0xffffffff
*(result + 0x64) = 0
result[0xe] = 0
result[0xf].d = 0
result[0x11].d = 0
InitializeCriticalSection(&result[0x12])
SetCriticalSectionSpinCount(&result[0x12], 0xfa0)
return result
