// 函数: sub_14185e4e0
// 地址: 0x14185e4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x130)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142fe8518
InitializeCriticalSection(&result[2])
SetCriticalSectionSpinCount(&result[2], 0xfa0)
result[8] = *arg1
result[0xa] = arg1[2]
arg1[2] = 0
*(result + 0x60) = *(arg1 + 0x20)
*(result + 0x70) = *(arg1 + 0x30)

if (result[8] != 0)
    *arg1 = 0

result[0x10] = sub_140a491d0(1)
result[0x11].b = 0
sub_14185f320(&result[0x12])
return result
