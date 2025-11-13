// 函数: sub_141e62a90
// 地址: 0x141e62a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
*arg2 = 0
void* result = *(arg1 + 0x260)
void* r9_2 = (sx.q(*(arg1 + 0x268)) << 6) + result

while (result != r9_2)
    *arg3 += *(result + 8)
    int32_t rcx_2 = *(result + 8) - *(result + 0x18)
    result += 0x40
    *arg2 += rcx_2

result.b = *(arg1 + 0x268) s> 0
return result
