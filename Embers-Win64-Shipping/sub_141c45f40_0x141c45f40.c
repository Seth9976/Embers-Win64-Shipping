// 函数: sub_141c45f40
// 地址: 0x141c45f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x24) == 0
*(arg1 + 0x10) = arg2
float zmm0

zmm0 = cond:0 ? -4605.17041f : -1002.39349f

float result = expf(zmm0 / (arg2 f* *(arg1 + 0xc)))
*(arg1 + 0x14) = result
return result
