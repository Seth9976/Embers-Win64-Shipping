// 函数: sub_1422378d0
// 地址: 0x1422378d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
float (* result)[0x4] = __security_cookie ^ &var_1a8
float (* result_1)[0x4] = result
int32_t i = 0

if (arg2[1].d s> 0)
    int64_t rsi_1 = 0
    
    do
        int128_t* r9_1 = *(arg1 + 0x10)
        void* r14_2 = *arg2 + rsi_1
        int64_t var_178 = 3
        int64_t var_170_1 = 0
        void** var_128
        float zmm9_1
        float zmm10_1
        zmm9_1, zmm10_1 = sub_142230c80(r14_2, &var_128, arg1, r9_1)
        float var_138[0x4]
        void var_ec
        int64_t zmm7_1
        result, zmm7_1 = sub_140ade170(&var_ec, &var_138)
        float zmm3_1[0x4] = data_14399f668
        float zmm6_1[0x4] = var_138
        int32_t var_f4
        float temp0_1[0x4] = _mm_unpacklo_ps(var_f4, zmm7_1)
        int32_t var_f8
        int32_t var_f0
        float temp0_2[0x4] = _mm_unpacklo_ps(var_f8, var_f0)
        int64_t zmm0_1 = data_14399f670
        float temp0_3[0x4] = _mm_unpacklo_ps(temp0_2, temp0_1[0].q)
        float var_e0
        float zmm1_1 = var_e0 * zmm10_1
        float temp0_4[0x4] = _mm_unpacklo_ps(data_14399f66c, zmm7_1)
        float var_a8_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0_1), temp0_4[0].q)
        float var_c8[0x4] = zmm6_1
        float var_b8_1[0x4] = temp0_3
        
        if (not(zmm1_1 >= zmm9_1))
            zmm1_1 = zmm9_1
        
        int32_t var_dc
        zmm0_1.d = var_dc.d f* zmm10_1
        var_178:4.d = zmm1_1
        
        if (zmm0_1.d f< zmm9_1)
            var_170_1.d = 0x38d1b717
        else
            var_170_1.d = zmm0_1.d
        
        int32_t var_d8
        zmm0_1.d = var_d8.d f* zmm10_1
        
        if (zmm0_1.d f< zmm9_1)
            var_170_1:4.d = 0x38d1b717
        else
            var_170_1:4.d = zmm0_1.d
        
        if (var_178.d == 3)
            result = _fpclass(fconvert.d(zmm1_1))
            
            if ((result.d & 0x207) == 0)
                result = _fpclass(_mm_cvtps_pd(var_170_1.d))
                
                if ((result.d & 0x207) == 0)
                    result = _fpclass(_mm_cvtps_pd(var_170_1:4.d))
                    
                    if ((result.d & 0x207) == 0 && not(var_178:4.d.d f<= zmm7_1.d)
                            && not(var_170_1.d.d f<= zmm7_1.d)
                            && not(var_170_1:4.d.d f<= zmm7_1.d))
                        result = sub_14224feb0(&var_c8)
                        
                        if (result.b != 0)
                            float var_158 = zmm6_1[0]
                            float var_154_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)[0]
                            float temp0_10[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
                            float var_144_1 = _mm_shuffle_ps(temp0_3, temp0_3, 0x55)[0]
                            float zmm0_2[0x4] = zx.o(0)
                            float var_150_1 = temp0_10[0]
                            float temp0_12[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xaa)
                            zmm0_2[0].q = fconvert.d(temp0_3[0])
                            float var_14c_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)[0]
                            float var_148_1 = temp0_3[0]
                            float var_140_1 = temp0_12[0]
                            result = _fpclass(zmm0_2[0].q)
                            
                            if ((result.d & 0x207) == 0)
                                result = _fpclass(_mm_cvtps_pd(var_144_1[0].q)[0].q)
                                
                                if ((result.d & 0x207) == 0)
                                    result = _fpclass(_mm_cvtps_pd(var_140_1[0].q)[0].q)
                                    
                                    if ((result.d & 0x207) == 0)
                                        result = sub_1419f11b0(&var_158)
                                        
                                        if (result.b != 0)
                                            result = sub_142227e30(&var_158)
                                            
                                            if (result.b != 0)
                                                float temp0_16 =
                                                    __minss_xmmss_memss(var_170_1:4.d, var_170_1.d)
                                                float zmm0_3 = arg1[0xf]
                                                float zmm2_2 = *(r14_2 + 8)
                                                float zmm1_3 =
                                                    __minss_xmmss_memss(temp0_16, var_178:4.d)
                                                    f* arg1[0xe]
                                                
                                                if (not(zmm1_3 < zmm0_3))
                                                    zmm0_3 = _mm_min_ss(arg1[0x10], zmm1_3)
                                                
                                                int64_t rcx_5 = *(arg3 + 8)
                                                float var_168 = zmm2_2
                                                float* var_180_1 = &var_168
                                                float var_160
                                                int32_t* var_188_1 = &var_160
                                                var_160 = zmm0_3 + zmm2_2
                                                result = (*arg3)(rcx_5, r14_2, &var_178, &var_158, 
                                                    var_188_1, var_180_1)
        
        i += 1
        rsi_1 += 0x58
    while (i s< arg2[1].d)

__security_check_cookie(result_1 ^ &var_1a8)
return result
