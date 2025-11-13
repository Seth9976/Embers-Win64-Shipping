// 函数: sub_142b70720
// 地址: 0x142b70720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
*(arg1 + (sx.q(*(arg1 + 0x40)) << 1) + 0x58) = arg2.w
*(arg1 + (sx.q(*(arg1 + 0x40)) << 3) + 0x18) = arg3
*(arg1 + (sx.q(*(arg1 + 0x40)) << 2) + 0x44) = 0
*(arg1 + 0x40) += 1

if (arg3 != 0)
    r10 = *(arg3 + 8)

int32_t result = *(arg1 + 8) * 0x25 + arg2
*(arg1 + 8) = result * 0x25 + r10
return result
