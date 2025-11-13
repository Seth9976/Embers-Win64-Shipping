// 函数: sub_141c468b0
// 地址: 0x141c468b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x24) == 0
*(arg1 + 0x18) = arg2
float zmm0

zmm0 = cond:0 ? -4605.17041f : -1002.39349f

float result = expf(zmm0 / (arg2 f* *(arg1 + 0xc)))
*(arg1 + 0x1c) = result
return result
