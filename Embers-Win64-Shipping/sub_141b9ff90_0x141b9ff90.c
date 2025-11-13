// 函数: sub_141b9ff90
// 地址: 0x141b9ff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x48, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_1430838e0
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    *(result_1 + 0x18) = *(arg1 + 0x18)
    result_1[5].b = *(arg1 + 0x28)
    result_1[6] = 0
    result_1[7].d = 0
    sub_140692f90(&result_1[6], arg1 + 0x30)
    result = *(arg1 + 0x40)
    result_1[8] = result

return result
