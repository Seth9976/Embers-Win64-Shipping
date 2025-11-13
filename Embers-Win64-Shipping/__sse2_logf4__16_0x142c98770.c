// 函数: __sse2_logf4@@16
// 地址: 0x142c98770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = data_144281210
int32_t zmm4[0x4] = data_144281200 & arg1
float zmm5[0x4] = data_144281230
float zmm1[0x4] = arg1
int32_t zmm2[0x4] = _mm_add_epi32(data_144281220, zmm4) & data_144281240
int32_t temp0_1[0x4] = _mm_srai_epi32(zmm2, 0x17)
zmm4 |= zmm5 ^ zmm2
arg1 = _mm_srai_epi32(arg1, 0x17)
float temp0_3[0x4] = _mm_add_ps(data_144281230, zmm4)
zmm4 = __subps_xmmps_memps(zmm4, data_144281230)
arg1 = _mm_add_epi32(__psubd_xmmdq_memdq(arg1, data_144281250), temp0_1)
zmm2 = zmm4
zmm4 = _mm_div_ps(zmm4, temp0_3)
float var_38[0x4] = zmm1
zmm3 = _mm_cmpgt_epi32(zmm3, zmm1)
zmm1 = __pcmpgtd_xmmdq_memdq(zmm1, data_144281200)
zmm5 = zmm4
zmm4 = _mm_mul_ps(zmm4, zmm4)
zmm3 &= zmm1
zmm1 = zmm4
zmm4 = _mm_mul_ps(zmm4, zmm4)

if (_mm_movemask_epi8(zmm3) == 0xffff)
    float temp0_13[0x4] = _mm_mul_ps(data_144281260, zmm4)
    zmm4 = __mulps_xmmps_memps(zmm4, data_144281270)
    float temp0_15[0x4] = __addps_xmmps_memps(temp0_13, data_144281280)
    float temp0_16[0x4] = _mm_cvtepi32_ps(arg1)
    float temp0_17[0x4] = _mm_mul_ps(temp0_15, zmm1)
    return _mm_add_ps(__mulps_xmmps_memps(temp0_16, data_144281290), 
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(_mm_add_ps(temp0_17, zmm4), zmm2), zmm5), zmm2))

int32_t zmm6[0x4] = var_38
int32_t zmm7[0x4] = zx.o(0) | (__pcmpeqd_xmmdq_memdq(zmm6, data_144281210) & data_144281210)
arg1 = zmm6 & data_1442812a0
zmm7 = zmm7 | (__pcmpeqd_xmmdq_memdq(arg1, data_1442812b0) & data_1442812c0)
    | (__pcmpgtd_xmmdq_memdq(arg1, data_144281210) & zmm6)
    | __pcmpgtd_xmmdq_memdq(__paddd_xmmdq_memdq(zmm6, data_1442812d0), data_1442812e0)
int32_t var_58[0x4] = zmm7
arg1 = __pcmpgtd_xmmdq_memdq(__paddd_xmmdq_memdq(zmm6, data_144281210), data_144281210)
float var_48[0x4] = arg1 & data_1442812f0
zmm1 = arg1
arg1 &= __subps_xmmps_memps(zmm6 | data_144281230, data_144281230)
int32_t temp0_32[0x4] = __pcmpeqd_xmmdq_memdq(zmm7, data_1442812b0)
arg1 |= zmm1 & not.o((temp0_32 & not.o(data_144281230)) | (zmm6 & temp0_32))
zmm3 = data_144281210
zmm4 = data_144281200 & arg1
zmm5 = data_144281230
zmm1 = arg1
zmm2 = _mm_add_epi32(data_144281220, zmm4) & data_144281240
int32_t temp0_34[0x4] = _mm_srai_epi32(zmm2, 0x17)
zmm4 |= zmm5 ^ zmm2
arg1 = _mm_srai_epi32(arg1, 0x17)
zmm7 = _mm_add_ps(data_144281230, zmm4)
zmm4 = __subps_xmmps_memps(zmm4, data_144281230)
arg1 = __psubd_xmmdq_memdq(arg1, data_144281250)
zmm5 = zmm4
zmm4 = _mm_div_ps(zmm4, zmm7)
arg1 = _mm_add_epi32(arg1, temp0_34)
zmm3 = _mm_cmpgt_epi32(zmm3, zmm1)
zmm1 = __pcmpgtd_xmmdq_memdq(zmm1, data_144281200)
zmm7 = zmm4
zmm4 = _mm_mul_ps(zmm4, zmm4)
zmm3 &= zmm1
zmm1 = zmm4
zmm4 = _mm_mul_ps(zmm4, zmm4)
_mm_movemask_epi8(zmm3)
zmm2 = data_144281270
float temp0_46[0x4] = _mm_mul_ps(data_144281260, zmm4)
zmm2 = _mm_mul_ps(zmm2, zmm4)
float temp0_48[0x4] = __addps_xmmps_memps(temp0_46, data_144281280)
float temp0_49[0x4] = _mm_cvtepi32_ps(arg1)
float temp0_50[0x4] = _mm_mul_ps(temp0_48, zmm1)
return __addps_xmmps_memps(
    _mm_add_ps(__mulps_xmmps_memps(temp0_49, data_144281290), 
        _mm_add_ps(_mm_mul_ps(_mm_sub_ps(_mm_add_ps(temp0_50, zmm2), zmm5), zmm7), zmm5)) | var_58, 
    var_48)
