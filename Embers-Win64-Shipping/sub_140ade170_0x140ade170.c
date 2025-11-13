// 函数: sub_140ade170
// 地址: 0x140ade170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = data_143dbb1b0
int32_t zmm0[0x4] = *(arg1 + 8)
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 4), 0)
float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg1, zmm0[0].q), temp0[0].q)
float zmm2[0x4] = data_143dbb1a0
float temp0_3[0x4] = _mm_div_ps(temp0_2, zmm5)
uint32_t zmm8[0x4] = data_143dbb000
float temp0_5[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_3))
uint32_t temp0_6[0x4] = _mm_and_ps(zmm8, zmm5)
float temp0_8[0x4] = _mm_cmpeq_ps(zmm2, _mm_and_ps(temp0_3, zmm8), 2)
zmm0 = data_143dbb0b0
float temp0_10[0x4] = _mm_mul_ps(_mm_and_ps(temp0_8, temp0_5 ^ temp0_3) ^ temp0_5, zmm5)
zmm5 = data_143dbb070
float temp0_11[0x4] = _mm_sub_ps(temp0_2, temp0_10)
float temp0_15[0x4] = __mulps_xmmps_memps(
    _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_6), _mm_min_ps(temp0_11, temp0_6)), data_143dbb1c0)
float temp0_20[0x4] = _mm_sub_ps(temp0_15, 
    __mulps_xmmps_memps(_mm_cvtepi32_ps(_mm_cvtps_epi32(_mm_mul_ps(zmm0, temp0_15))), 
        data_143dbb0a0))
uint32_t zmm1[0x4] = data_142dc1870
float zmm3[0x4] = __andps_xmmxud_memxud(temp0_20, data_143dbb090)
zmm0 = _mm_and_ps(temp0_20, zmm8)
zmm3 = __orps_xmmxud_memxud(zmm3, data_143dbb080)
float temp0_24[0x4] = _mm_cmpeq_ps(zmm5, zmm0, 1)
zmm0 = data_142dc1850
float temp0_25[0x4] = _mm_sub_ps(zmm3, temp0_20)
uint32_t zmm6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm3 = _mm_and_ps(temp0_25 ^ temp0_20, temp0_24) ^ temp0_20
float temp0_29[0x4] = _mm_mul_ps(zmm3, zmm3)
zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, temp0_29), zmm0)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, temp0_29), zmm0)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, temp0_29), zmm0)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, temp0_29), zmm0)
zmm0 = data_142dc1860
float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x55), temp0_29)
zmm6 = _mm_mul_ps(zmm6, temp0_29)
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm6 = _mm_add_ps(zmm6, zmm1)
zmm1 = data_142dc1880
zmm6 = _mm_mul_ps(zmm6, zmm3)
float temp0_48[0x4] = _mm_add_ps(temp0_43, zmm0)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_51[0x4] = _mm_add_ps(_mm_mul_ps(temp0_48, temp0_29), zmm0)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
float temp0_54[0x4] = _mm_add_ps(_mm_mul_ps(temp0_51, temp0_29), zmm0)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_62[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_54, temp0_29), zmm0), temp0_29), zmm1), 
    _mm_and_ps(data_143dbb060 ^ data_143dbb010, temp0_24) ^ data_143dbb010)
float temp0_63[0x4] = _mm_shuffle_ps(zmm6, temp0_62, 0x55)
zmm0 = _mm_shuffle_ps(zmm6, temp0_62, 0)
float temp0_65[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x88)
float temp0_66[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x22)
float temp0_67[0x4] = _mm_mul_ps(temp0_65, zmm0)
zmm1 = _mm_shuffle_ps(temp0_62, temp0_62, 0xaa)
float temp0_70[0x4] = _mm_mul_ps(temp0_66, _mm_shuffle_ps(temp0_62, zmm6, 0))
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
float temp0_72[0x4] = _mm_mul_ps(temp0_67, zmm1)
float temp0_73[0x4] = _mm_mul_ps(temp0_70, zmm6)
*arg2 = _mm_add_ps(temp0_72 ^ data_142e6d9e0, temp0_73 ^ data_142e6da10)
return arg2
