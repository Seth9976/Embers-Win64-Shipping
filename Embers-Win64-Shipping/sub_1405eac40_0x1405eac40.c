// 函数: sub_1405eac40
// 地址: 0x1405eac40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
void*** result = j_sub_140a82f30(0xa0)
void*** result_1 = result

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142d5eca0
void* arg_18 = &result[2]
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
return result
