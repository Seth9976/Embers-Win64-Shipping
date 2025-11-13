// 函数: sub_141a00a00
// 地址: 0x141a00a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x40)

if (result == 0)
    return result

sub_1421059a0(result)
*result = &data_143020e40
result[7].b = *(arg1 + 0x420) & 1
*(result + 0x39) = (*(arg1 + 0x420) u>> 1).b & 1
*(result + 0x3a) = (*(arg1 + 0x420) u>> 2).b & 1
*(result + 0x3b) = (*(arg1 + 0x420) u>> 3).b & 1
return result
