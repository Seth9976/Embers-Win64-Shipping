// 函数: sub_1406990d0
// 地址: 0x1406990d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_1405978f0(0x38, arg2)
void*** result_1 = result

if (result != 0)
    *result_1 = &data_142d8bfc0
    result_1[1].b = *(arg1 + 8)
    result_1[2] = *(arg1 + 0x10)
    sub_140596d10(&result_1[3], arg1 + 0x18)
    result = *(arg1 + 0x30)
    result_1[6] = result

return result
