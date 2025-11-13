// 函数: sub_141ba0140
// 地址: 0x141ba0140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x38, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_143083d90
    result_1[1] = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    result_1[3].d = *(arg1 + 0x18)
    *(result_1 + 0x1c) = *(arg1 + 0x1c)
    result_1[4] = 0
    result_1[5].d = 0
    sub_140692f90(&result_1[4], arg1 + 0x20)
    result = *(arg1 + 0x30)
    result_1[6] = result

return result
