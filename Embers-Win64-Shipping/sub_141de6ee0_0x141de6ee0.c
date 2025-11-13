// 函数: sub_141de6ee0
// 地址: 0x141de6ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg2
float zmm4[0x4] = *arg1
uint32_t zmm5[0x4] = zmm3 ^ 0x80000000
float zmm1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55) ^ 0x80000000
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
zmm5[0] = zmm1[0]
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc6)
float zmm2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa) ^ 0x80000000
float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
zmm5[0] = zmm2[0]
float temp0_5[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x27)
zmm5[0] = temp0_4[0]
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0x39)
uint32_t var_28[0x4] = zmm5
uint32_t zmm8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x1b), temp0_5)
float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm5)
zmm8 = __mulps_xmmps_memps(zmm8, data_143f39110)
float temp0_13[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
zmm8 = _mm_add_ps(zmm8, temp0_11)
float temp0_17[0x4] = _mm_mul_ps(temp0_13, _mm_shuffle_ps(zmm4, zmm4, 0x55))
zmm5 = _mm_mul_ps(zmm5, _mm_shuffle_ps(zmm4, zmm4, 0xaa))
float temp0_20[0x4] = __mulps_xmmps_memps(temp0_17, data_143f39100)
zmm4 = arg1[1]
zmm5 = __mulps_xmmps_memps(zmm5, data_143f390f0)
zmm8 = _mm_add_ps(zmm8, temp0_20)
float temp0_23[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
float temp0_24[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
zmm8 = _mm_add_ps(zmm8, zmm5)
*arg1 = zmm8
zmm1 = arg2[1]
zmm4[0] = zmm4[0] - zmm1[0]
float temp0_26[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
float temp0_27[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
temp0_23[0] = temp0_23[0] - temp0_26[0]
temp0_24[0] = temp0_24[0] - temp0_27[0]
float temp0_28[0x4] = _mm_unpacklo_ps(temp0_23, 0)
arg1[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, temp0_24[0].q), temp0_28[0].q)
zmm1 = arg2[2]
int96_t var_28_1 = zmm1[0].12

if (__andps_xmmxud_memxud(zmm1, data_142d3f770)[0] > 9.99999994e-09f)
    zmm2 = 0x3f800000
    zmm2[0] = 1f / zmm1[0]
else
    zmm2 = zx.o(0)

zmm1 = var_28_1:4.d

if (__andps_xmmxud_memxud(zmm1, data_142d3f770)[0] > 9.99999994e-09f)
    zmm4 = 0x3f800000
    zmm4[0] = 1f / zmm1[0]
else
    zmm4 = zx.o(0)

zmm3 = var_28_1:8.d

if (__andps_xmmxud_memxud(zmm3, data_142d3f770)[0] > 9.99999994e-09f)
    zmm1 = 0x3f800000
    zmm1[0] = 1f / zmm3[0]
else
    zmm1 = zx.o(0)

float zmm0[0x4] = arg1[2]
zmm0[0] = zmm0[0] * zmm2[0]
float temp0_34[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
float temp0_35[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
temp0_35[0] = temp0_35[0] * zmm1[0]
zmm0[0] = zmm0[0] - 1f
temp0_34[0] = temp0_34[0] * zmm4[0]
temp0_35[0] = temp0_35[0] - 1f
temp0_34[0] = temp0_34[0] - 1f
float temp0_36[0x4] = _mm_unpacklo_ps(zmm0, temp0_35[0].q)
float temp0_37[0x4] = _mm_unpacklo_ps(temp0_34, 0)
float temp0_38[0x4] = _mm_mul_ps(zmm8, zmm8)
arg1[2] = _mm_unpacklo_ps(temp0_36, temp0_37[0].q)
zmm5 = data_143f390d0
float temp0_41[0x4] = _mm_add_ps(temp0_38, _mm_shuffle_ps(temp0_38, temp0_38, 0x4e))
float temp0_43[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0x39), temp0_41)
float temp0_44[0x4] = _mm_rsqrt_ps(temp0_43)
float temp0_45[0x4] = _mm_mul_ps(temp0_43, zmm5)
float temp0_50[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_44, temp0_44), temp0_45)), temp0_44), 
    temp0_44)
zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_50, temp0_50), temp0_45))
float result[0x4] = _mm_cmpeq_ps(data_143f390e0, temp0_43, 2)
*arg1 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5, temp0_50), temp0_50), zmm8) ^ data_143f390c0, result)
    ^ data_143f390c0
return result
