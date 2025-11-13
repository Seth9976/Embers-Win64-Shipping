// 函数: sub_1421addd0
// 地址: 0x1421addd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421d1290(arg1)
int64_t zmm3 = *arg2
int64_t zmm2 = *(arg2 + 4)
int64_t zmm0
zmm0.d = zmm3.d f+ *(arg1 + 0x50)
int64_t zmm1 = arg2[1].d
*(arg1 + 0x50) = zmm0.d
zmm0.d = zmm2.d f+ *(arg1 + 0x54)
*(arg1 + 0x54) = zmm0.d
zmm0.d = zmm1.d f+ *(arg1 + 0x58)
*(arg1 + 0x58) = zmm0.d
zmm3.d = zmm3.d f+ *(arg1 + 0x134)
zmm2.d = zmm2.d f+ *(arg1 + 0x138)
zmm1.d = zmm1.d f+ *(arg1 + 0x13c)
*(arg1 + 0x134) = zmm3.d
*(arg1 + 0x138) = zmm2.d
*(arg1 + 0x13c) = zmm1.d
uint64_t result = *(arg1 + 0x28)

if ((*(*(result + 0x30) + 0x59) & 1) == 0)
    result = zx.q(arg2[1].d)
    *(arg1 + 0x1a8) = *arg2
    *(arg1 + 0x1b0) = result.d

return result
