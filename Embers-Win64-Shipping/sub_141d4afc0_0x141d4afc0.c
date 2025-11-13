// 函数: sub_141d4afc0
// 地址: 0x141d4afc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x150)

if (result == 0)
    return 0

memset(&result[4], 0, 0x130)
*result = &data_1432266a0
result[1] = 0
result[2] = 0
result[3] = &data_143226780
result[4] = 0
__builtin_memset(&result[6], 0, 0x30)
InitializeCriticalSection(&result[0xc])
SetCriticalSectionSpinCount(&result[0xc], 0xfa0)
result[0x11] = -0x8000000000000000
result[0x14] = 0
result[0x15] = 0
result[0x16] = &data_1432267a8
result[0x17] = &data_1432267d8
InitializeCriticalSection(&result[0x18])
SetCriticalSectionSpinCount(&result[0x18], 0xfa0)
result[0x1d].b = 0
__builtin_memset(&result[0x1e], 0, 0x20)
result[0x22] = sub_140a491d0(1)
result[0x24] = 0
result[0x25] = 0
result[0x26] = 2
result[0x28] = 0
result[0x29] = 0
return result
