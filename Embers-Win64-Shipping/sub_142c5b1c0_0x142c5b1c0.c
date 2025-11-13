// 函数: sub_142c5b1c0
// 地址: 0x142c5b1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (*arg1 == *arg2 && arg1[1] == arg2[1] && arg1[2].b == arg2[2].b && *(arg1 + 9) == *(arg2 + 9)
        && sub_142c70440(*(arg1 + 0x10), *(arg2 + 0x10)) != 0
        && sub_142c70440(*(arg1 + 0x18), *(arg2 + 0x18)) != 0
        && sub_142c70440(*(arg1 + 0x20), *(arg2 + 0x20)) != 0
        && sub_142c70440(*(arg1 + 0x38), *(arg2 + 0x38)) != 0)
    result.b = 1
    return result

result.b = 0
return result
