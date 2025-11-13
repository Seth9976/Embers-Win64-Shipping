// 函数: sub_142b92620
// 地址: 0x142b92620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x68) = *(arg1 + 0x20) + (sx.q(*(arg1 + 0x1a)) << 3)
*(arg1 + 0x70) = sx.q(*(arg1 + 0x1a)) + *(arg1 + 0x28)
int64_t result = *(arg1 + 0x30)
*(arg1 + 0x78) = result + (sx.q(*(arg1 + 0x18)) << 1)

if (*(arg1 + 0x14) != 0)
    result = *(arg1 + 0x48)
    *(arg1 + 0x88) = *(arg1 + 0x40) + (sx.q(*(arg1 + 0x1a)) << 3)
    *(arg1 + 0x90) = result + (sx.q(*(arg1 + 0x1a)) << 3)

return result
