// 函数: sub_141807db0
// 地址: 0x141807db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x18)

if (result != 0)
    result = sub_1417fe920(result, arg2)

int64_t* rcx_1 = *(arg1 + 0xb0)
*(arg1 + 0xb0) = result

if (rcx_1 != 0)
    result = (**rcx_1)(rcx_1, 1)

*(arg1 + 0xb8) = 1
return result
