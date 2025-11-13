// 函数: sub_142c5bc00
// 地址: 0x142c5bc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg2) * 5

if (*(arg1 + (rdx << 3) + 0x2c4) != 2 || *(arg1 + (rdx << 3) + 0x310) != 0)
    return 0

int128_t zmm1 = *(arg1 + (rdx << 3) + 0x2d0)
*(arg1 + (rdx << 3) + 0x310) = *(arg1 + (rdx << 3) + 0x2c0)
uint128_t zmm0 = zx.o(*(arg1 + (rdx << 3) + 0x2e0))
*(arg1 + (rdx << 3) + 0x320) = zmm1
*(arg1 + (rdx << 3) + 0x330) = zmm0.q
*(arg1 + (rdx << 3) + 0x2c0) = 0
*(arg1 + (rdx << 3) + 0x2c8) = 0
*(arg1 + (rdx << 3) + 0x2d0) = 0
*(arg1 + (rdx << 3) + 0x2d8) = 0
*(arg1 + (rdx << 3) + 0x2e0) = 0
return 0
