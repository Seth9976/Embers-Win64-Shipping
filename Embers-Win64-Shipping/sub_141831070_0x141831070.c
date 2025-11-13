// 函数: sub_141831070
// 地址: 0x141831070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x148)

if (result == 0)
    return 0

*result = &data_142fe55f0
InitializeCriticalSection(&result[1])
SetCriticalSectionSpinCount(&result[1], 0xfa0)
void* rcx_2 = &result[8]
result[6] = 0
result[7] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &result[0x12]
result[0xc].d = 0xffffffff
*(result + 0x64) = 0
result[0xe] = 0
result[0xf].d = 0
result[0x10] = 0
result[0x11] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_1 = *(rcx_3 + 0x10)

if (rax_1 != 0)
    rcx_3 = rax_1

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = &result[0x1c]
result[0x16].d = 0xffffffff
*(result + 0xb4) = 0
result[0x18] = 0
result[0x19].d = 0
result[0x1a] = 0
result[0x1b] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_2 = *(rcx_4 + 0x10)

if (rax_2 != 0)
    rcx_4 = rax_2

*rcx_4 = 0
*(rcx_4 + 8) = 0
result[0x20].d = 0xffffffff
*(result + 0x104) = 0
result[0x22] = 0
result[0x23].d = 0
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
result[0x24] = performanceCount
result[0x25].d = 0
sub_140a95a00(result + 0x12c)
*(result + 0x13c) = 2
result[0x28].d = 2
return result
