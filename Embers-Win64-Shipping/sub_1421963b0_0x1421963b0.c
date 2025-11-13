// 函数: sub_1421963b0
// 地址: 0x1421963b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0xca]
int128_t zmm7 = zx.o(0)
float zmm6[0x4]
float zmm10[0x4]

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        int32_t zmm0_1 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0_1 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1[0x2]
        QueryPerformanceCounter(&performanceCount_1)
        zmm6, zmm7, arg2, arg3, zmm10 = sub_14218e220(arg1, zmm0_1)

uint64_t result

if (arg1[0x15] == 0)
    result = sub_141ee69e0(arg1)

if (arg1[0x15] != 0 || result != 0)
    result = arg1[0x15]
    
    if (result == 0)
        result = sub_141ee69e0(arg1)
    
    if (*(result + 0x188) != 0)
        void* rax_6 = arg1[0x15]
        
        if (rax_6 == 0)
            rax_6 = sub_141ee69e0(arg1)
        
        result = sub_142029890(*(rax_6 + 0x188), 0)
        
        if (result != 0)
            int64_t* rcx_8 = *(result + 0x2b8)
            
            if (rcx_8 != 0)
                float var_18_1[0x4] = zmm6
                zmm6 = *(arg1 + 0x1d0)
                float var_38_1[0x4] = arg2
                float var_48_1[0x4] = arg3
                float var_58_1[0x4] = zmm10
                void var_68
                int128_t* rax_8 = (*(*rcx_8 + 0x708))(rcx_8, &var_68)
                float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm10 = *(rax_8 + 8)
                arg3 = *(rax_8 + 4)
                zmm10[0] = zmm10[0] - temp0_1[0]
                arg2 = *rax_8
                float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                arg2[0] = arg2[0] - zmm6[0]
                arg3[0] = arg3[0] - temp0_2[0]
                zmm10[0] = zmm10[0] * zmm10[0]
                arg2[0] = arg2[0] * arg2[0]
                arg3[0] = arg3[0] * arg3[0]
                arg2[0] = arg2[0] + arg3[0]
                arg2[0] = arg2[0] + zmm10[0]
                
                if (not(arg2[0] <= 9.99999994e-09f))
                    float zmm4_1[0x4] = 0x3f000000
                    float temp0_3[0x4] = _mm_rsqrt_ss(arg2[0], arg2[0])
                    float zmm2[0x4] = 0x3f000000
                    arg2[0] = arg2[0] * 0.5f
                    temp0_3[0] = temp0_3[0] * temp0_3[0]
                    arg2[0] = arg2[0] * temp0_3[0]
                    zmm2[0] = 0.5f - arg2[0]
                    temp0_3[0] = temp0_3[0] * zmm2[0]
                    temp0_3[0] = temp0_3[0] + temp0_3[0]
                    temp0_3[0] = temp0_3[0] * temp0_3[0]
                    arg2[0] = arg2[0] * temp0_3[0]
                    zmm4_1[0] = 0.5f - arg2[0]
                    temp0_3[0] = temp0_3[0] * zmm4_1[0]
                    temp0_3[0] = temp0_3[0] + temp0_3[0]
                    temp0_3[0] = temp0_3[0] * arg2[0]
                    temp0_3[0] = temp0_3[0] * arg3[0]
                    temp0_3[0] = temp0_3[0] * zmm10[0]
                    arg2 = temp0_3
                    arg3 = temp0_3
                    zmm10 = temp0_3
                
                float temp0_4[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f4d690)
                int64_t var_a8 = 0
                float temp0_5[0x4] = _mm_unpacklo_ps(arg3, zmm7.q)
                float temp0_7[0x4] =
                    _mm_unpacklo_ps(_mm_unpacklo_ps(arg2, zmm10[0].q), temp0_5[0].q)
                float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
                float temp0_9[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
                float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_9)
                float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_8)
                float temp0_14[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
                float temp0_15[0x4] = _mm_sub_ps(temp0_13, temp0_11)
                float temp0_16[0x4] = _mm_add_ps(temp0_15, temp0_15)
                float temp0_17[0x4] = _mm_mul_ps(temp0_14, temp0_16)
                float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
                float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xd2)
                float temp0_20[0x4] = _mm_mul_ps(temp0_18, temp0_9)
                float temp0_21[0x4] = _mm_mul_ps(temp0_19, temp0_8)
                float temp0_22[0x4] = _mm_add_ps(temp0_17, temp0_7)
                float temp0_24[0x4] = _mm_add_ps(_mm_sub_ps(temp0_21, temp0_20), temp0_22)
                float var_b8 = temp0_24[0]
                float var_b4_1 = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)[0]
                int32_t var_a0_1 = 0x3f800000
                float var_b0_1 = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa)[0]
                void var_78
                sub_140ad6660(&var_78, &var_a8, &var_b8)
                int32_t var_c8
                sub_140acd070(&var_c8, &var_78)
                int32_t* rax_9 = MREF::RgNiClassesChanged(arg1)
                float zmm0_2[0x4] = var_c8
                zmm0_2[0] = zmm0_2[0] f+ *rax_9
                *rax_9 = zmm0_2[0]
                int32_t var_c4
                float zmm1_1[0x4] = var_c4
                zmm1_1[0] = zmm1_1[0] f+ rax_9[1]
                rax_9[1] = zmm1_1[0]
                int32_t var_c0
                zmm0_2 = var_c0
                zmm0_2[0] = zmm0_2[0] f+ rax_9[2]
                rax_9[2] = zmm0_2[0]
                float zmm0_3[0x4]
                float zmm6_1[0x4]
                float zmm7_1
                int512_t zmm8
                int512_t zmm9
                zmm0_3, zmm6_1, zmm7_1, zmm8, zmm9 = sub_140a454f0(var_c8, 0x43b40000)
                zmm9.o = var_48_1
                zmm8.o = var_38_1
                
                if (not(zmm0_3[0] >= zmm7_1))
                    zmm0_3[0] = zmm0_3[0] + zmm6_1[0]
                
                char rcx_12
                
                if (zmm0_3[0] != zmm7_1)
                    rcx_12 = 1
                else
                    float zmm0_4[0x4]
                    int32_t zmm7_2
                    zmm0_4, zmm6_1, zmm7_2 = sub_140a454f0(var_c4, zmm6_1)
                    
                    if (not(zmm0_4[0] f>= zmm7_2))
                        zmm0_4[0] = zmm0_4[0] + zmm6_1[0]
                    
                    if (zmm0_4[0] f!= zmm7_2)
                        rcx_12 = 1
                    else
                        float zmm0_5
                        int32_t zmm7_3
                        zmm0_5, zmm6_1, zmm7_3 = sub_140a454f0(var_c0, zmm6_1)
                        
                        if (not(zmm0_5 f>= zmm7_3))
                            zmm0_5 = zmm0_5 + zmm6_1[0]
                        
                        rcx_12 = zmm0_5 f!= zmm7_3 ? 1 : 0
                
                result = zx.q(*(arg1 + 0x433))
                *(arg1 + 0x433) = (((rcx_12 | result.b) ^ result.b) & 1) ^ result.b

return result
