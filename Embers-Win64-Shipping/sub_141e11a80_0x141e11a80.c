// 函数: sub_141e11a80
// 地址: 0x141e11a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 8) = 0
int64_t rbp = sx.q(*(arg2 + 0x10))
int64_t r14 = *(arg2 + 8)
*(arg1 + 0x10) = rbp.d

if (rbp.d != 0)
    sub_1407c3650(&arg1[8], rbp.d, 0)
    memcpy(*(arg1 + 8), r14, (rbp * 0xc).d)
else
    *(arg1 + 0x14) = 0

*(arg1 + 0x18) = 0
uint32_t count = *(arg2 + 0x20)
int64_t rsi_1 = *(arg2 + 0x18)
*(arg1 + 0x20) = count

if (count != 0)
    sub_1405da9e0(&arg1[0x18], count, 0)
    memcpy(*(arg1 + 0x18), rsi_1, count)
else
    *(arg1 + 0x24) = 0

return arg1
