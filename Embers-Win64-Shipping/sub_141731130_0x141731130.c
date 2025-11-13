// 函数: sub_141731130
// 地址: 0x141731130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = *(arg1 + 0x30)
uint128_t zmm1 = *(arg1 + 0x38)
uint128_t zmm5 = zmm3
int64_t zmm2 = *(arg1 + 0x34)
uint128_t zmm0
zmm0.d = zmm1.d f* *(arg1 + 0x94)
int64_t zmm4 = zmm2
zmm3.d = zmm3.d f* *(arg1 + 0x80)
zmm2.d = zmm2.d f* *(arg1 + 0x84)
zmm5.d = zmm5.d f* *(arg1 + 0x8c)
zmm1.d = zmm1.d f* *(arg1 + 0x88)
zmm4.d = zmm4.d f* *(arg1 + 0x90)
*(arg1 + 0x98) = (_mm_unpacklo_ps(zmm3, zmm2)).q
*(arg1 + 0xa4) = (_mm_unpacklo_ps(zmm5, zmm4)).q
*(arg1 + 0xa0) = zmm1.d
*(arg1 + 0xac) = zmm0.d
int32_t rax_2 = *(arg1 + 0xa0)
*arg2 = *(arg1 + 0x98)
arg2[1].d = rax_2
int32_t rax_3 = *(arg1 + 0xac)
*(arg2 + 0xc) = *(arg1 + 0xa4)
*(arg2 + 0x14) = rax_3
return arg2
