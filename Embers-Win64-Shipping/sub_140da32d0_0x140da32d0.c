// 函数: sub_140da32d0
// 地址: 0x140da32d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg1[1].d
float temp0 = __minss_xmmss_memss(zmm6[0], arg1[2].d)
uint128_t zmm7 = zx.o(*arg1)
float temp0_1[0x4] = __maxss_xmmss_memss(zmm6[0], arg1[2].d)
float zmm8[0x4] = *(arg1 + 0xc)
float temp0_2 = __minss_xmmss_memss(temp0, arg1[3].d)
uint64_t var_58 = zmm7.q
float temp0_3[0x4] = __maxss_xmmss_memss(temp0_1[0], arg1[3].d)
float temp0_4 = _mm_min_ss(temp0_2, zmm7.d)
float temp0_5[0x4] = _mm_max_ss(temp0_3[0], zmm7.d)
*arg2 = temp0_4
float zmm0 = zmm8[0]
float temp0_6[0x4] = __maxss_xmmss_memss(zmm8[0], *(arg1 + 0x14))
float temp0_7 = __minss_xmmss_memss(zmm0, *(arg1 + 0x14))
arg2[2] = temp0_5[0]
float temp0_8[0x4] = __maxss_xmmss_memss(temp0_6[0], *(arg1 + 0x1c))
float temp0_9 = __minss_xmmss_memss(temp0_7, *(arg1 + 0x1c))
float temp0_10[0x4] = __maxss_xmmss_memss(temp0_8[0], var_58:4.d)
float temp0_11 = __minss_xmmss_memss(temp0_9, var_58:4.d)
arg2[3] = temp0_10[0]
arg2[1] = temp0_11
return arg2
