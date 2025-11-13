// 函数: sub_140dbe170
// 地址: 0x140dbe170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *arg1
float zmm4 = zmm6[0]
zmm6[0] = zmm6[0] f+ arg1[1].d
uint128_t zmm7 = zx.o(*arg1)
zmm4 = zmm4 f+ *(arg1 + 8)
float zmm8[0x4] = *(arg1 + 4)
float zmm5 = zmm8[0]
uint64_t var_58 = zmm7.q
zmm8[0] = zmm8[0] f+ *(arg1 + 0x14)
zmm5 = zmm5 f+ *(arg1 + 0xc)
float zmm2 = zmm4 f+ arg1[1].d
float temp0 = _mm_min_ss(zmm6[0], zmm4)
float temp0_1[0x4] = _mm_max_ss(zmm6[0], zmm4)
float zmm3 = zmm5 f+ *(arg1 + 0x14)
float temp0_2 = _mm_min_ss(temp0, zmm2)
float temp0_3[0x4] = _mm_max_ss(temp0_1[0], zmm2)
float temp0_4 = _mm_min_ss(temp0_2, zmm7.d)
float temp0_5[0x4] = _mm_max_ss(temp0_3[0], zmm7.d)
*arg2 = temp0_4
float zmm0 = zmm8[0]
float temp0_6[0x4] = _mm_max_ss(zmm8[0], zmm5)
arg2[2] = temp0_5[0]
float temp0_7 = _mm_min_ss(zmm0, zmm5)
float temp0_8[0x4] = _mm_max_ss(temp0_6[0], zmm3)
float temp0_9 = _mm_min_ss(temp0_7, zmm3)
float temp0_10[0x4] = __maxss_xmmss_memss(temp0_8[0], var_58:4.d)
float temp0_11 = __minss_xmmss_memss(temp0_9, var_58:4.d)
arg2[3] = temp0_10[0]
arg2[1] = temp0_11
return arg2
