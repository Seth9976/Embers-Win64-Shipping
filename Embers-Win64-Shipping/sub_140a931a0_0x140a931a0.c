// 函数: sub_140a931a0
// 地址: 0x140a931a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xe0)

if (result == 0)
    return nullptr

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e66678
result[2] = &data_142e63f58
result[3] = 0
result[4] = 0
sub_140a97880(&result[5], arg2)
result[5] = &data_142e63a18
result[0x13] = 0
result[0x13] = *(arg2 + 0x70)
*(arg2 + 0x70) = 0
result[0x14].d = *(arg2 + 0x78)
*(result + 0xa4) = *(arg2 + 0x7c)
*(arg2 + 0x78) = 0
result[2] = &data_142e63fa8
result[0x15] = 0
result[0x15] = *arg1
*arg1 = 0
result[0x16].d = arg1[1].d
*(result + 0xb4) = *(arg1 + 0xc)
arg1[1] = 0
InitializeCriticalSection(&result[0x17])
SetCriticalSectionSpinCount(&result[0x17], 0xfa0)
return result
