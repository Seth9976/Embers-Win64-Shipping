// 函数: sub_140ade370
// 地址: 0x140ade370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4] = arg4
float zmm1[0x4]
uint32_t zmm4[0x4]

if (not(zmm7[0] == 0f))
    zmm1 = *arg2
    zmm4 = *arg3

if (not(zmm7[0] == 0f) && (zmm1[0] f!= zmm4[0] || (*(arg3 + 4)).d f!= *(arg2 + 4)
        || not((*(arg3 + 8)).d f== *(arg2 + 8))))
    uint128_t zmm0 = arg5
    
    if (zmm0.d f> 0f)
        arg4 = *(arg3 + 4)
        zmm4[0] = zmm4[0] f- zmm1[0]
        arg4[0] = arg4[0] f- *(arg2 + 4)
        int32_t rax_1 = *(arg2 + 8)
        zmm7[0] = zmm7[0] f* zmm0.d
        zmm0.d = (*(arg3 + 8)).d f- *(arg2 + 8)
        float temp0_1[0x4] = _mm_unpacklo_ps(arg4, 0)
        float zmm6[0x4] = data_143dbb1b0
        float zmm9[0x4] = data_143dbb1a0
        float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, zmm0.q), temp0_1[0].q)
        float temp0_4[0x4] = _mm_div_ps(temp0_3, zmm6)
        float zmm11[0x4] = data_143dbb1d0
        zmm0 = _mm_cvttps_epi32(temp0_4)
        uint32_t zmm12[0x4] = data_143dbb000
        float temp0_6[0x4] = _mm_cvtepi32_ps(zmm0)
        zmm0 = _mm_and_ps(temp0_4, zmm12)
        uint32_t temp0_8[0x4] = _mm_and_ps(zmm12, zmm6)
        zmm1 = _mm_and_ps(_mm_cmpeq_ps(zmm9, zmm0, 2), temp0_6 ^ temp0_4)
        float temp0_15[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_8), 
            _mm_min_ps(_mm_sub_ps(temp0_3, _mm_mul_ps(zmm1 ^ temp0_6, zmm6)), temp0_8))
        zmm0 = _mm_cmpeq_ps(zx.o(0), temp0_15, 2)
        float temp0_17[0x4] = _mm_add_ps(temp0_15, zmm6)
        float zmm2[0x4] = zmm7 ^ data_142d3f780
        arg4 = _mm_and_ps(temp0_17 ^ temp0_15, zmm0) ^ temp0_17
        zmm0 = _mm_cmpeq_ps(zmm11, arg4, 1)
        zmm1 = _mm_and_ps(_mm_sub_ps(arg4, zmm6) ^ arg4, zmm0) ^ arg4
        uint64_t var_98_1 = *arg2
        int96_t var_88_1 = zmm1[0].12
        
        if (zmm1[0] >= zmm2[0])
            zmm1 = _mm_min_ss(zmm1[0], zmm7[0])
        else
            zmm1 = zmm2
        
        zmm0.d = var_98_1.d.d f+ zmm1[0]
        zmm1 = var_88_1:4.d
        var_98_1.d = zmm0.d
        
        if (zmm1[0] >= zmm2[0])
            zmm1 = _mm_min_ss(zmm1[0], zmm7[0])
        else
            zmm1 = zmm2
        
        zmm0.d = var_98_1:4.d.d f+ zmm1[0]
        zmm1 = var_88_1:8.d
        var_98_1:4.d = zmm0.d
        
        if (not(zmm1[0] < zmm2[0]))
            zmm2 = _mm_min_ss(zmm1[0], zmm7[0])
        
        zmm0.d = rax_1.d f+ zmm2[0]
        *arg1 = var_98_1
        arg1[2] = zmm0.d
        zmm6 = data_143dbb1b0
        zmm0 = arg1[2]
        uint32_t temp0_25[0x4] = _mm_and_ps(zmm12, zmm6)
        float zmm5[0x4] = *arg1
        float temp0_26[0x4] = _mm_unpacklo_ps(arg1[1], zx.o(0)[0].q)
        float temp0_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5, zmm0.q), temp0_26[0].q)
        float temp0_29[0x4] = _mm_div_ps(temp0_28, zmm6)
        float temp0_31[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_29))
        zmm9 = _mm_and_ps(_mm_cmpeq_ps(zmm9, _mm_and_ps(temp0_29, zmm12), 2), temp0_31 ^ temp0_29)
        float temp0_39[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_25), 
            _mm_min_ps(_mm_sub_ps(temp0_28, _mm_mul_ps(zmm9 ^ temp0_31, zmm6)), temp0_25))
        uint32_t zmm10[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_39, 2)
        zmm0 = _mm_add_ps(temp0_39, zmm6)
        zmm2 = _mm_and_ps(zmm0 ^ temp0_39, zmm10) ^ zmm0
        float temp0_43[0x4] = _mm_cmpeq_ps(zmm11, zmm2, 1)
        zmm1 = _mm_and_ps(_mm_sub_ps(zmm2, zmm6) ^ zmm2, temp0_43) ^ zmm2
        *arg1 = zmm1[0]
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        arg1[2] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        arg1[1] = zmm0.d
    else
        *arg1 = *arg3
        arg1[2] = *(arg3 + 8)
else
    *arg1 = *arg2
    arg1[2] = *(arg2 + 8)

return arg1
