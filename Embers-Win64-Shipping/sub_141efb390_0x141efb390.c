// 函数: sub_141efb390
// 地址: 0x141efb390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(arg1[-0x28] + 0x5c0))(&arg1[-0x28])

if (result.b != 0)
    char r13_1 = *(arg1[1] + 0xf0)
    *(arg1 + 0xb1) &= 0x7f
    result = zx.q(*(arg1 + 0x2a))
    
    if (result.b != 3)
        int64_t var_98
        
        if (result.b != 0)
            uint64_t result_1 = arg1[0x6f]
            
            if (result_1 != 0)
            label_141efb473:
                result = sub_1405be820(&arg1[-0x28])
                
                if (result != 0)
                    double zmm6[0x2] = *(arg2 + 8)
                    zmm6[0].d = zmm6[0].d f- arg4[1].d
                    double zmm7[0x2] = *arg2
                    zmm7[0].d = zmm7[0].d f- *arg4
                    double zmm8[0x2] = *(arg2 + 4)
                    zmm8[0].d = zmm8[0].d f- *(arg4 + 4)
                    int128_t zmm10 = zx.o(0)
                    
                    if ((*(arg1 + 0x249) & 0x40) != 0 && not(
                            __andps_xmmxud_memxud(zmm6, data_142d3f770)[0].d f>= *(arg1 + 0x344)))
                        zmm6 = zx.o(0)
                    
                    double zmm9[0x2] = *(result_1 + 0x118)
                    zmm7[0].d = zmm7[0].d f* zmm7[0].d
                    zmm8[0].d = zmm8[0].d f* zmm8[0].d
                    zmm6[0].d = zmm6[0].d f* zmm6[0].d
                    zmm8[0].d = zmm8[0].d f+ zmm7[0].d
                    zmm9[0].d = zmm9[0].d f* zmm9[0].d
                    zmm8[0].d = zmm8[0].d f+ zmm6[0].d
                    int32_t rax_5
                    double zmm0_1[0x2]
                    double zmm2[0x2]
                    uint128_t zmm4_1
                    double zmm5_1[0x2]
                    
                    if (zmm8[0].d f<= zmm9[0].d)
                        zmm7[0].d = zmm7[0].d f+ *(result_1 + 0xb0)
                        zmm6[0].d = zmm6[0].d f+ *(result_1 + 0xb8)
                        zmm8[0].d = zmm8[0].d f+ *(result_1 + 0xb4)
                        rax_5 = zmm6[0].d
                        zmm0_1 = _mm_unpacklo_ps(zmm7, zmm8[0])
                    else
                        zmm0_1 = *(result_1 + 0x11c)
                        zmm0_1[0].d = zmm0_1[0].d f* zmm0_1[0].d
                        
                        if (zmm8[0].d f<= zmm0_1[0].d)
                            if (not(zmm8[0].d f== 1f))
                                if (zmm8[0].d f>= 9.99999994e-09f)
                                    zmm5_1 = _mm_rsqrt_ss(zmm8[0].d, zmm8[0].d)
                                    zmm2 = 0x3f000000
                                    zmm8[0].d = zmm8[0].d f* 0.5f
                                    zmm5_1[0].d = zmm5_1[0].d f* zmm5_1[0].d
                                    zmm8[0].d = zmm8[0].d f* zmm5_1[0].d
                                    zmm2[0].d = 0.5f f- zmm8[0].d
                                    zmm5_1[0].d = zmm5_1[0].d f* zmm2[0].d
                                    zmm5_1[0].d = zmm5_1[0].d f+ zmm5_1[0].d
                                    zmm5_1[0].d = zmm5_1[0].d f* zmm5_1[0].d
                                    zmm8[0].d = zmm8[0].d f* zmm5_1[0].d
                                    zmm4_1.d = 0.5f f- zmm8[0].d
                                    zmm5_1[0].d = zmm5_1[0].d f* zmm4_1.d
                                    zmm5_1[0].d = zmm5_1[0].d f+ zmm5_1[0].d
                                    zmm5_1[0].d = zmm5_1[0].d f* zmm7[0].d
                                    zmm5_1[0].d = zmm5_1[0].d f* zmm8[0].d
                                    zmm5_1[0].d = zmm5_1[0].d f* zmm6[0].d
                                    zmm7 = zmm5_1
                                    zmm8 = zmm5_1
                                    zmm6 = zmm5_1
                                else
                                    zmm7 = data_143dbb1f8
                                    zmm8 = data_143dbb1fc
                                    zmm6 = data_143dbb200
                            
                            zmm9[0].d = zmm9[0].d f* zmm7[0].d
                            zmm9[0].d = zmm9[0].d f* zmm8[0].d
                            zmm9[0].d = zmm9[0].d f+ *(result_1 + 0xb0)
                            zmm9[0].d = zmm9[0].d f* zmm6[0].d
                            zmm9[0].d = zmm9[0].d f+ *(result_1 + 0xb4)
                            zmm9[0].d = zmm9[0].d f+ *(result_1 + 0xb8)
                            var_98.d = zmm9[0].d
                            var_98:4.d = zmm9[0].d
                            zmm0_1 = zx.o(var_98)
                            rax_5 = zmm9[0].d
                        else
                            int32_t rax_4 = data_143dbb200
                            var_98 = data_143dbb1f8.q
                            zmm0_1 = zx.o(var_98)
                            rax_5 = rax_4
                    
                    *(result_1 + 0xb0) = zmm0_1.q
                    *(result_1 + 0xb8) = rax_5
                    double zmm3[0x2]
                    void var_88
                    
                    if (*(arg1 + 0x2a) != 1)
                        zmm4_1 = *arg3
                        zmm7 = *arg5 ^ 0x80000000
                        double zmm1[0x2] = *(arg5 + 4) ^ 0x80000000
                        zmm3 = *(arg5 + 0xc)
                        zmm2 = *(arg5 + 8) ^ 0x80000000
                        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
                        zmm7[0].d = zmm1[0].d
                        zmm0_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1b)
                        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc6)
                        zmm7[0].d = zmm2[0].d
                        zmm2 = *(result_1 + 0xd0)
                        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x27)
                        zmm7[0].d = zmm3[0].d
                        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0x39)
                        zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
                        zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                        zmm8 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm0_1)
                        zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xff), zmm4_1)
                        zmm8 = __mulps_xmmps_memps(zmm8, data_143f3ab50)
                        var_98.o = zmm7
                        zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                        zmm8 = _mm_add_ps(zmm8, zmm0_1)
                        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x4e))
                        zmm7 = _mm_mul_ps(zmm7, _mm_shuffle_ps(zmm4_1, zmm4_1, 0xb1))
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143f3ab40)
                        zmm7 = __mulps_xmmps_memps(zmm7, data_143f3ab30)
                        zmm8 = _mm_add_ps(zmm8, zmm1)
                        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                        zmm8 = _mm_add_ps(zmm8, zmm7)
                        zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm8, zmm8, 0))
                        zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xff), zmm2)
                        zmm3 = __mulps_xmmps_memps(zmm3, data_143f3ab50)
                        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                        zmm3 = _mm_add_ps(zmm3, zmm0_1)
                        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm8, zmm8, 0x55))
                        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm8, zmm8, 0xaa))
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143f3ab40)
                        zmm2 = __mulps_xmmps_memps(zmm2, data_143f3ab30)
                        *(result_1 + 0xd0) = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm2)
                        *(result_1 + 0xe0) = data_14399f720
                        sub_141f2dda0(&var_88, *(arg1[1] + 0x280))
                        bool cond:1_1 = (*(arg1 + 0x247) & 0x20) != 0
                        int32_t rax_8 = arg4[1].d
                        var_98 = *arg4
                        int32_t var_90_6 = rax_8
                        
                        if (cond:1_1 || (*(arg1 + 0xb2) & 1) != 0)
                            rax_8.b = 1
                        else
                            rax_8 = 0
                        
                        sub_141f49fa0(arg1[-0x12], &var_98, arg5, 0, 0, rax_8.b)
                        zmm10 = sub_141f2f360(&var_88)
                    else
                        *(result_1 + 0xa4) = *(result_1 + 0xb0)
                        *(result_1 + 0xac) = rax_5
                        *(result_1 + 0xc0) = *arg3
                        *(result_1 + 0xd0) = *arg3
                        *(result_1 + 0xe0) = *arg5
                        
                        if ((*arg2)[0].d f!= *arg4 || (*(arg2 + 4))[0].d f!= *(arg4 + 4)
                                || not((*(arg2 + 8))[0].d f== arg4[1].d))
                            float zmm6_1[0x4]
                            float zmm7_1[0x4]
                            float zmm8_1[0x4]
                            zmm6_1, zmm7_1, zmm8_1 = sub_141f2dda0(&var_88, *(arg1[1] + 0x280))
                            bool cond:2_1 = (*(arg1 + 0x247) & 0x20) != 0
                            int32_t rax_7 = arg4[1].d
                            var_98 = *arg4
                            int32_t var_90_5 = rax_7
                            
                            if (cond:2_1 || (*(arg1 + 0xb2) & 1) != 0)
                                rax_7.b = 1
                            else
                                rax_7 = 0
                            
                            sub_141f49c70(arg1[-0x12], &var_98, 0, 0, zmm6_1, zmm7_1, zmm8_1, 
                                rax_7.b)
                            zmm10 = sub_141f2f360(&var_88)
                    zmm0_1 = zx.o(*(result_1 + 0x108))
                    zmm3 = zx.o(*(result_1 + 0x100))
                    
                    if (not(zmm0_1[0] <= zmm3[0]))
                        zmm0_1[0] = zmm0_1[0] + zmm3[0]
                        zmm0_1[0] = zmm0_1[0] * 0.5
                        *(result_1 + 0x108) = zmm0_1.q
                    
                    if (r13_1 != 1)
                        zmm0_1 = arg1[0x25].d
                    else
                        zmm0_1 = *(arg1[1] + 0x320)
                        arg1[0x25].d = zmm0_1[0].d
                    
                    bool cond:4_1 = zmm10.d f!= *(result_1 + 0xf4)
                    double temp0_42[0x2] = _mm_cvtps_pd(zmm0_1[0])
                    *(result_1 + 0x100) = temp0_42.q
                    
                    if (cond:4_1)
                        zmm4_1 = zx.o(*(result_1 + 0x108))
                    else
                        zmm3 = temp0_42
                        zmm4_1 = temp0_42
                    
                    zmm5_1 = *(result_1 + 0xf8)
                    zmm0_1 = *(result_1 + 0x120)
                    temp0_42[0] = temp0_42[0] - zmm3[0]
                    double temp0_43[0x2] = _mm_cvtps_pd(zmm5_1[0])
                    temp0_42[0] = temp0_42[0] * 1.25
                    zmm0_1 = _mm_min_sd(_mm_cvtps_pd(zmm0_1[0])[0], temp0_43[0])
                    
                    if (not(temp0_42[0] < zmm0_1[0]))
                        zmm0_1 = _mm_min_sd(temp0_42[0], temp0_43[0])
                    
                    zmm2 = temp0_42
                    zmm2[0] = zmm2[0] - zmm0_1[0]
                    
                    if (not(zmm4_1.q f< zmm2[0]))
                        zmm2 = _mm_min_sd(temp0_42[0], zmm4_1.q)
                    
                    temp0_42[0] = temp0_42[0] - zmm2[0]
                    *(result_1 + 0x108) = zmm2.q
                    *(result_1 + 0xf0) = _mm_cvtpd_ps(temp0_42)[0].d
                    result = zx.q(*(result + 0x520))
                    *(result_1 + 0xf4) = result.d
            else
                result = (*(*arg1 + 0x28))(arg1)
                arg1[0x6f] = result
                result_1 = result
                
                if (result != 0)
                    goto label_141efb473
        else
            int32_t rax_2 = arg4[1].d
            int64_t* rcx_1 = arg1[-0x12]
            var_98 = *arg4
            int32_t var_90_1 = rax_2
            result = sub_141f49fa0(rcx_1, &var_98, arg5, 0, 0, 1)
            *(arg1 + 0xb1) |= 0x80

return result
