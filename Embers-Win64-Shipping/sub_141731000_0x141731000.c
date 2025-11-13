// 函数: sub_141731000
// 地址: 0x141731000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x10)
arg2[1].d = *(arg1 + 0x18)
*(arg2 + 0xc) = *(arg1 + 0x10)
*(arg2 + 0x14) = *(arg1 + 0x18)
float zmm5[0x4] = *(arg1 + 0x28)
int64_t zmm4 = zmm5[0].q
zmm5[0] = zmm5[0] f* *(arg1 + 0x1c)
zmm5[0] = zmm5[0] f* *(arg1 + 0x20)
zmm5[0] = zmm5[0] f+ *(arg1 + 0x10)
zmm4.d = zmm4.d f* *(arg1 + 0x24)
zmm5[0] = zmm5[0] f+ *(arg1 + 0x14)
zmm4.d = zmm4.d f+ *(arg1 + 0x18)
float temp0[0x4] = __minss_xmmss_memss(zmm5[0], *arg2)
float temp0_1[0x4] = __minss_xmmss_memss(zmm5[0], *(arg2 + 4))
int64_t temp0_2 = __minss_xmmss_memss(zmm4.d, arg2[1].d)
*arg2 = (_mm_unpacklo_ps(temp0, temp0_1[0].q)).q
arg2[1].d = temp0_2.d
int64_t zmm0 = *(arg2 + 0x14)
float temp0_4[0x4] = _mm_max_ss(arg2[2].d[0], zmm5[0])
float temp0_5[0x4] = __maxss_xmmss_memss(zmm5[0], *(arg2 + 0xc))
int64_t temp0_6 = _mm_max_ss(zmm0.d, zmm4.d)
*(arg2 + 0xc) = (_mm_unpacklo_ps(temp0_5, temp0_4[0].q)).q
*(arg2 + 0x14) = temp0_6.d
float zmm2[0x4] = *(arg1 + 0x2c)
float zmm1[0x4] = *(arg2 + 4)
zmm0.d = (*arg2).d f- zmm2[0]
zmm1[0] = zmm1[0] - zmm2[0]
*arg2 = zmm0.d
zmm0 = arg2[1].d
*(arg2 + 4) = zmm1[0]
zmm0.d = zmm0.d f- zmm2[0]
arg2[1].d = zmm0.d
zmm0.d = zmm2[0].q.d f+ arg2[2].d
zmm2[0] = zmm2[0] f+ *(arg2 + 0xc)
zmm2[0] = zmm2[0] f+ *(arg2 + 0x14)
arg2[2].d = zmm0.d
*(arg2 + 0xc) = zmm2[0]
*(arg2 + 0x14) = zmm2[0]
return arg2
