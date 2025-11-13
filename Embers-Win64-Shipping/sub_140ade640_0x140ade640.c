// 函数: sub_140ade640
// 地址: 0x140ade640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4] = arg4
int128_t zmm12
int128_t var_78 = zmm12
float zmm4[0x4]

if (not(zmm9[0] == 0f))
    zmm12 = *arg2
    zmm4 = *arg3

if (not(zmm9[0] == 0f) && (zmm12.d f!= zmm4[0] || (*(arg3 + 4)).d f!= *(arg2 + 4)
        || not((*(arg3 + 8)).d f== *(arg2 + 8))))
    uint128_t zmm0 = arg5
    uint32_t zmm6[0x4]
    uint32_t var_18_1[0x4] = zmm6
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    uint32_t zmm8[0x4]
    uint32_t var_38_1[0x4] = zmm8
    float zmm11[0x4]
    float var_68_1[0x4] = zmm11
    float zmm13[0x4]
    float var_88_1[0x4] = zmm13
    float zmm14[0x4]
    float var_98_1[0x4] = zmm14
    float zmm15[0x4]
    float var_a8_1[0x4] = zmm15
    
    if (zmm0.d f<= 0f)
        *arg1 = *arg3
        arg1[2] = *(arg3 + 8)
    else
        zmm8 = data_143dbb1b0
        zmm4[0] = zmm4[0] f- zmm12.d
        arg4 = *(arg3 + 4)
        arg4[0] = arg4[0] f- *(arg2 + 4)
        zmm11 = data_143dbb1a0
        zmm6 = data_143dbb000
        zmm9[0] = zmm9[0] f* zmm0.d
        uint32_t temp0_1[0x4] = _mm_and_ps(zmm6, zmm8)
        zmm0 = *(arg3 + 8)
        float temp0_2[0x4] = _mm_sub_ps(zx.o(0), temp0_1)
        zmm0.d = zmm0.d f- *(arg2 + 8)
        float temp0_3[0x4] = _mm_unpacklo_ps(arg4, 0)
        float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm0.q), temp0_3[0].q)
        uint32_t zmm2[0x4] = _mm_div_ps(temp0_5, zmm8)
        float temp0_8[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm2))
        uint32_t zmm1[0x4] = _mm_max_ps(temp0_2, 
            _mm_min_ps(
                _mm_sub_ps(temp0_5, 
                    _mm_mul_ps(
                        _mm_and_ps(
                            _mm_cmpeq_ps(zmm11, __andps_xmmxud_memxud(zmm2, data_143dbb000), 2), 
                            temp0_8 ^ zmm2) ^ temp0_8, 
                        zmm8)), 
                temp0_1))
        zmm2 = _mm_add_ps(zmm8, zmm1)
        arg4 = _mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm1, 2), zmm2 ^ zmm1) ^ zmm2
        zmm0 = _mm_cmpeq_ps(data_143dbb1d0, arg4, 1)
        zmm13 = _mm_and_ps(_mm_sub_ps(arg4, zmm8) ^ arg4, zmm0) ^ arg4
        float temp0_22[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
        float temp0_23[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
        zmm0 = _mm_unpacklo_ps(temp0_22, 0)
        float temp0_26[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm13, temp0_23[0].q), zmm0.q)
        zmm2 = _mm_div_ps(temp0_26, zmm8)
        zmm0 = _mm_cvttps_epi32(zmm2)
        float temp0_30[0x4] = _mm_cmpeq_ps(zmm11, __andps_xmmxud_memxud(zmm2, data_143dbb000), 2)
        float temp0_31[0x4] = _mm_cvtepi32_ps(zmm0)
        float temp0_36[0x4] = _mm_max_ps(temp0_2, 
            _mm_min_ps(
                _mm_sub_ps(temp0_26, 
                    _mm_mul_ps(_mm_and_ps(temp0_30, temp0_31 ^ zmm2) ^ temp0_31, zmm8)), 
                temp0_1))
        zmm1 = _mm_add_ps(temp0_36, zmm8)
        zmm2 = _mm_cmpeq_ps(zx.o(0), temp0_36, 2)
        zmm7 = data_143dbb1d0
        zmm2 = _mm_and_ps(zmm2, zmm1 ^ temp0_36) ^ zmm1
        zmm0 = _mm_cmpeq_ps(zmm7, zmm2, 1)
        zmm1 = _mm_sub_ps(zmm2, zmm8)
        zmm8 = data_143dbb000
        zmm1 = _mm_and_ps(zmm1 ^ zmm2, zmm0) ^ zmm2
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0), 
                _mm_and_ps(zmm1, zmm8), 1)) == 0)
            *arg1 = *arg3
            arg1[2] = *(arg3 + 8)
        else
            if (zmm9[0] >= 0f)
                zmm9 = __minss_xmmss_memss(zmm9[0], 0x3f800000)
            else
                zmm9 = zx.o(0)
            
            zmm13[0] = zmm13[0] * zmm9[0]
            temp0_22[0] = temp0_22[0] * zmm9[0]
            temp0_23[0] = temp0_23[0] * zmm9[0]
            zmm13[0] = zmm13[0] f+ zmm12.d
            temp0_22[0] = temp0_22[0] f+ *(arg2 + 4)
            temp0_23[0] = temp0_23[0] f+ *(arg2 + 8)
            *arg1 = (_mm_unpacklo_ps(zmm13, temp0_22[0].q)).q
            arg1[2] = temp0_23[0]
            zmm6 = data_143dbb1b0
            zmm0 = arg1[2]
            zmm4 = _mm_and_ps(zmm8, zmm6)
            float zmm5[0x4] = *arg1
            zmm2 = _mm_unpacklo_ps(arg1[1], 0)
            float temp0_52[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm0.q), zmm2[0].q)
            zmm2 = _mm_div_ps(temp0_52, zmm6)
            float temp0_55[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm2))
            zmm11 = _mm_and_ps(_mm_cmpeq_ps(zmm11, _mm_and_ps(zmm2, zmm8), 2), temp0_55 ^ zmm2)
            zmm1 = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm4), 
                _mm_min_ps(_mm_sub_ps(temp0_52, _mm_mul_ps(zmm11 ^ temp0_55, zmm6)), zmm4))
            float temp0_64[0x4] = _mm_cmpeq_ps(zx.o(0), zmm1, 2)
            zmm0 = _mm_add_ps(zmm1, zmm6)
            zmm2 = _mm_and_ps(zmm0 ^ zmm1, temp0_64) ^ zmm0
            zmm1 = _mm_and_ps(_mm_sub_ps(zmm2, zmm6) ^ zmm2, _mm_cmpeq_ps(zmm7, zmm2, 1)) ^ zmm2
            *arg1 = zmm1[0]
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            arg1[2] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
            arg1[1] = zmm0.d
else
    *arg1 = *arg2
    arg1[2] = *(arg2 + 8)

return arg1
