// 函数: sub_1428253d4
// 地址: 0x1428253d4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *arg2
void** result_2 = *(arg1 + 0x18)
void** result_1 = result_2
void** result = result_2[1]

while (*(result + 0x19) == 0)
    if (result[4] u>= r8)
        result_1 = result
        result = *result
    else
        result = result[2]

if (*(result_1 + 0x19) == 0 && r8 u>= result_1[4] && result_1 != result_2)
    result = 1

if (*(result_1 + 0x19) != 0 || r8 u< result_1[4] || result_1 == result_2 || result_1[5].d s<= 1)
    result.b = 0

return result
