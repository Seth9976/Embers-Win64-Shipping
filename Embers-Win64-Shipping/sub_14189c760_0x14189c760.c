// 函数: sub_14189c760
// 地址: 0x14189c760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xe0)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142fe9c80
InitializeCriticalSection(&result[2])
SetCriticalSectionSpinCount(&result[2], 0xfa0)
result[8] = 0
result[0xa] = 0
void* rcx_3 = &result[0x14]
result[0x10] = sub_140a491d0(1)
result[0x11].b = 0
result[0x12] = 0
result[0x13] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_1 = *(rcx_3 + 0x10)

if (rax_1 != 0)
    rcx_3 = rax_1

*rcx_3 = 0
*(rcx_3 + 8) = 0
result[0x18].d = 0xffffffff
*(result + 0xc4) = 0
result[0x1a] = 0
result[0x1b].d = 0
return result
