// 函数: sub_141a864e0
// 地址: 0x141a864e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)

if (rcx != 0)
    (**rcx)(rcx, 1)
    *(arg1 + 8) = 0

void*** result = j_sub_140a82f30(0x18)

if (result == 0)
    *(arg1 + 8) = 0
    return result

*result = &data_14303cc60
result[1].w = *(arg2 + 8)
*(result + 0xa) = *(arg2 + 0xa)
*result = &data_14303cd38
result[2].b = *(arg2 + 0x10)
*(arg1 + 8) = result
return result
