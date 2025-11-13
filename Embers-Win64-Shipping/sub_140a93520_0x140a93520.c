// 函数: sub_140a93520
// 地址: 0x140a93520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xd0)

if (result == 0)
    return nullptr

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e66828
result[2] = &data_142e64428
result[3] = 0
result[4] = 0
sub_140a97880(&result[5], arg2)
result[5] = &data_142e63938
result[2] = &data_142e66628
result[0x13] = 0
result[0x13] = *arg1
*arg1 = 0
result[0x14].d = arg1[1].d
*(result + 0xa4) = *(arg1 + 0xc)
arg1[1] = 0
InitializeCriticalSection(&result[0x15])
SetCriticalSectionSpinCount(&result[0x15], 0xfa0)
return result
