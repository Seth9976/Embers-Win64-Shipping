// 函数: sub_1408ff490
// 地址: 0x1408ff490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x158)

if (result == 0)
    return 0

result[1].d = 1
void* rcx = &result[8]
*(result + 0xc) = 1
*result = &data_142e1a310
__builtin_memset(&result[2], 0, 0x30)
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

__builtin_memset(rcx, 0, 0x1c)
void* rcx_1 = &result[0x12]
result[0xc].d = 0xffffffff
*(result + 0x64) = 0
result[0xe] = 0
result[0xf].d = 0
result[0x10] = 0
result[0x11] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &result[0x1c]
result[0x16].d = 0xffffffff
*(result + 0xb4) = 0
result[0x18] = 0
result[0x19].d = 0
result[0x1a] = 0
result[0x1b] = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

__builtin_memset(rcx_2, 0, 0x1c)
result[0x20].d = 0xffffffff
*(result + 0x104) = 0
result[0x22] = 0
result[0x23].d = 0
result[0x24] = 0
result[0x25] = 0
InitializeCriticalSection(&result[0x26])
SetCriticalSectionSpinCount(&result[0x26], 0xfa0)
return result
