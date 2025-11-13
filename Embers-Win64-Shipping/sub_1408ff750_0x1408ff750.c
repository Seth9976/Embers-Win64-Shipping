// 函数: sub_1408ff750
// 地址: 0x1408ff750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x80)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e1a300
result[2] = &data_142e1aef8
result[3] = &data_142e1af20
__builtin_memset(&result[4], 0, 0x20)
InitializeCriticalSection(&result[8])
SetCriticalSectionSpinCount(&result[8], 0xfa0)
result[0xd] = 0
result[0xe] = 0
result[0xf].d = 0xffffffff
return result
