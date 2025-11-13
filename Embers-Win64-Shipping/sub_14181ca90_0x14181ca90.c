// 函数: sub_14181ca90
// 地址: 0x14181ca90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x130)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142fe5e38
InitializeCriticalSection(&result[2])
SetCriticalSectionSpinCount(&result[2], 0xfa0)
result[8] = *arg1
result[0xa] = arg1[2]
arg1[2] = 0
*(result + 0x60) = *(arg1 + 0x20)
*(result + 0x70) = *(arg1 + 0x30)

if (result[8] != 0)
    *arg1 = 0

void* rcx_3 = &result[0x14]
result[0x10] = sub_140a491d0(1)
result[0x11].b = 0
result[0x12] = 0
result[0x13] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_3 = *(rcx_3 + 0x10)

if (rax_3 != 0)
    rcx_3 = rax_3

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = &result[0x1e]
result[0x18].d = 0xffffffff
*(result + 0xc4) = 0
result[0x1a] = 0
result[0x1b].d = 0
result[0x1c] = 0
result[0x1d] = 0
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_4 = *(rcx_4 + 0x10)

if (rax_4 != 0)
    rcx_4 = rax_4

*rcx_4 = 0
*(rcx_4 + 8) = 0
result[0x22].d = 0xffffffff
*(result + 0x114) = 0
result[0x24] = 0
result[0x25].d = 0
return result
