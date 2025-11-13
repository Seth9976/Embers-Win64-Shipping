// 函数: sub_1423379d0
// 地址: 0x1423379d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 8) -= -0x80
int32_t i = 0
int64_t result = sx.q(*(arg1 + 0x7c)) * 0x2a0 + *(arg2 + 8)
*(arg2 + 8) = result

if (*(arg1 + 0x78) s> 0)
    do
        result += 0x2a0
        i += 1
        *(arg2 + 8) = result
    while (i s< *(arg1 + 0x78))

return result
