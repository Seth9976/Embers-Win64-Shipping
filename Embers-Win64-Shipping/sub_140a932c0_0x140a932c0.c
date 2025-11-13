// 函数: sub_140a932c0
// 地址: 0x140a932c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xa0)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e66688
result[2] = &data_142e63ff8
result[3] = 0
result[4] = 0
result[5] = &data_142e63698
result[6].w = *(arg2 + 8)
result[5] = &data_142e63a88
result[7] = *(arg2 + 0x10)
result[8].d = *(arg2 + 0x18)
result[9] = 0
result[9] = *(arg2 + 0x20)
__builtin_memset(arg2 + 0x20, 0, 0x20)
result[0xa].d = *(arg2 + 0x28)
*(result + 0x54) = *(arg2 + 0x2c)
result[0xb] = *(arg2 + 0x30)
result[0xc] = *(arg2 + 0x38)
result[2] = &data_142e64048
result[0xd] = 0
result[0xd] = *arg1
*arg1 = 0
result[0xe].d = arg1[1].d
*(result + 0x74) = *(arg1 + 0xc)
arg1[1] = 0
InitializeCriticalSection(&result[0xf])
SetCriticalSectionSpinCount(&result[0xf], 0xfa0)
return result
