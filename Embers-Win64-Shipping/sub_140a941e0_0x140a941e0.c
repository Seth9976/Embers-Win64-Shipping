// 函数: sub_140a941e0
// 地址: 0x140a941e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x80)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e667f8
memset(&result[3], 0, 0x68)
__builtin_memset(&result[2], 0, 0x31)
result[9] = 0
result[0xa] = 0
InitializeCriticalSection(&result[0xb])
SetCriticalSectionSpinCount(&result[0xb], 0xfa0)
return result
