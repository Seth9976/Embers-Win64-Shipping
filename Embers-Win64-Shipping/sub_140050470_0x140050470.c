// 函数: sub_140050470
// 地址: 0x140050470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = arg16[0].o
int128_t var_58 = arg15[0].o
int128_t var_68 = arg14[0].o
int128_t var_78 = arg13[0].o
int128_t var_88 = arg12[0].o
int128_t var_98 = arg11[0].o
int128_t var_a8 = arg10[0].o
int128_t var_b8 = arg9[0].o
int128_t var_c8 = arg8[0].o
int128_t var_d8 = arg7[0].o
int256_t* result = arg22
float zmm0[0x8] = *result
float zmm1[0x8]
float var_660[0x8]
float zmm2[0x8]
float zmm4[0x8]

if (_mm256_movemask_ps(zmm0) != 0xff)
    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
    float var_420_1[0x8] = arg13
    float var_440_1[0x8] = arg13
    int32_t rbx_9 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
    float var_460_1[0x8] = arg13
    float var_3a0_1[0x8] = zmm0
    int32_t rsi_2
    
    if (rbx_9 s<= 0)
        rsi_2 = 0
        
        if (0 s< arg21)
        label_1400518f4:
            float var_660_2[0x8] = arg13
            zmm0[0].o = zx.o(rsi_2)
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
            zmm1[0].o = zx.o(arg21)
            zmm0 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
            float temp0_556[0x8] = _mm256_maskload_ps(zmm0, *(arg17 + sx.q(rsi_2 << 2)))
            zmm2 = _mm256_mullo_epi32(temp0_556, __vpbroadcastd_ymmqq_memd(3))
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_560[0x8]
            int32_t temp1_10
            temp0_560, temp1_10 = _mm256_i32gather_ps(arg5, *(arg4 + (zmm2[0].q << 2)), zmm0)
            zmm4 = temp1_10
            zmm1 = _mm256_mullo_epi32(temp0_556, __vpbroadcastd_ymmqq_memd(0xc))
            zmm2 = _mm256_add_epi32(zmm1, __vpbroadcastd_ymmqq_memd(4))
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            float temp0_566[0x8]
            int32_t temp1_11
            temp0_566, temp1_11 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm2[0].q), zmm0)
            zmm2 = __vpbroadcastd_ymmqq_memd(8)
            zmm1 = _mm256_add_epi32(zmm1, zmm2)
            zmm2[0].o = zx.o(0)
            float temp0_569[0x8]
            int32_t temp1_12
            temp0_569, temp1_12 = _mm256_i32gather_ps(zmm2, *(arg4 + zmm1[0].q), zmm0)
            arg6 = temp1_12
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            float var_180_2[0x8] = arg6
            float temp0_571[0x8] = _mm256_broadcast_ss(arg3[3])
            float var_640_4[0x8] = temp0_571
            float var_620_4[0x8] = temp0_571
            float var_600_4[0x8] = temp0_571
            float var_5e0_4[0x8] = temp0_571
            float temp0_572[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_573[0x8] = _mm256_broadcast_ss(arg3[2])
            arg9 = _mm256_broadcast_ss(*arg3)
            float temp0_575[0x8] = _mm256_mul_ps(temp0_571, arg6)
            float temp0_576[0x8] = _mm256_mul_ps(temp0_566, temp0_573)
            float temp0_577[0x8] = _mm256_mul_ps(temp0_569, arg9)
            float temp0_578[0x8] = _mm256_mul_ps(temp0_560, temp0_572)
            float temp0_579[0x8] = _mm256_fmsub_ps(temp0_576, temp0_572, temp0_569)
            float temp0_580[0x8] = _mm256_fmsub_ps(temp0_577, temp0_573, temp0_560)
            float temp0_581[0x8] = _mm256_fmsub_ps(temp0_578, arg9, temp0_566)
            float temp0_582[0x8] = _mm256_sub_ps(temp0_575, temp0_575)
            float temp0_583[0x8] = _mm256_add_ps(temp0_579, temp0_579)
            float temp0_584[0x8] = _mm256_add_ps(temp0_580, temp0_580)
            arg6 = _mm256_add_ps(temp0_581, temp0_581)
            float temp0_586[0x8] = _mm256_add_ps(temp0_582, temp0_582)
            float var_500_4[0x8] = temp0_583
            float var_4e0_4[0x8] = temp0_584
            float var_4c0_4[0x8] = arg6
            float var_4a0_4[0x8] = temp0_586
            float temp0_587[0x8] = _mm256_fmadd_ps(temp0_560, temp0_571, temp0_583)
            float temp0_588[0x8] = _mm256_fmadd_ps(temp0_566, temp0_571, temp0_584)
            arg9 = _mm256_fmadd_ps(temp0_569, temp0_571, arg6)
            float var_160_2[0x8] = temp0_587
            float var_140_2[0x8] = temp0_588
            int32_t var_120_2[0x8] = arg9
            float var_100_2[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_586, temp0_571, var_180_2)
            float temp0_591[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_592[0x8] = _mm256_broadcast_ss(arg3[2])
            float temp0_593[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_594[0x8] = _mm256_mul_ps(temp0_584, temp0_592)
            float temp0_595[0x8] = _mm256_mul_ps(arg6, temp0_593)
            float temp0_596[0x8] = _mm256_mul_ps(temp0_583, temp0_591)
            float temp0_597[0x8] = _mm256_fmsub_ps(temp0_594, arg6, temp0_591)
            float temp0_598[0x8] = _mm256_fmsub_ps(temp0_595, temp0_583, temp0_592)
            float temp0_599[0x8] = _mm256_fmsub_ps(temp0_596, temp0_584, temp0_593)
            float temp0_600[0x8] = _mm256_add_ps(temp0_587, temp0_597)
            float temp0_601[0x8] = _mm256_add_ps(temp0_588, temp0_598)
            float temp0_602[0x8] = _mm256_add_ps(arg9, temp0_599)
            float temp0_604[0x8] = _mm256_add_ps(temp0_600, _mm256_broadcast_ss(arg3[4]))
            arg15 = _mm256_add_ps(temp0_601, _mm256_broadcast_ss(arg3[5]))
            float temp0_607[0x8] = _mm256_broadcast_ss(arg3[6])
            float temp0_608[0x8] = _mm256_broadcast_ss(*arg2)
            float temp0_609[0x8] = _mm256_broadcast_ss(arg2[1])
            float temp0_610[0x8] = _mm256_broadcast_ss(arg2[2])
            arg9 = _mm256_broadcast_ss(*arg1)
            float temp0_612[0x8] = _mm256_broadcast_ss(arg1[1])
            arg14 = _mm256_broadcast_ss(arg1[2])
            arg11 = _mm256_and_ps(_mm256_cmp_ps(temp0_604, temp0_608, 6), zmm0)
            arg5 = _mm256_cmpeq_epi32(arg11, zmm0)
            char temp0_617 = _mm256_movemask_ps(arg5)
            arg10 = _mm256_cmp_ps(temp0_604, temp0_608, 2)
            
            if (temp0_617 != 0xff)
                float temp0_619[0x8] = _mm256_cmp_ps(arg15, temp0_609, 2)
                arg5[0].o = _mm256_extractf128_ps(temp0_619[0].o, 1)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_619[0].o, arg5[0].o)
                arg10 = _mm256_and_ps(arg10, zmm0)
                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
                arg5[0].o &= arg6[0].o
                arg10 = _mm256_cvtepi16_epi32(arg5[0].o)
                arg11 = arg10 & not.32(zmm0)
            
            float temp0_626[0x8] = _mm256_add_ps(temp0_602, temp0_607)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, zmm0)) != 0xff)
                arg10 = _mm256_and_ps(_mm256_cmp_ps(temp0_626, temp0_610, 2), arg10 & zmm0)
                arg11 = _mm256_xor_ps(arg10, zmm0)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, zmm0)) != 0xff)
                arg8 = _mm256_and_ps(arg10, zmm0)
                arg10 = _mm256_cmp_ps(arg9, temp0_604, 2)
                arg11 = _mm256_and_ps(arg8, _mm256_cmp_ps(arg9, temp0_604, 6))
                
                if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, arg8)) != 0xff)
                    float temp0_640[0x8] = _mm256_cmp_ps(temp0_612, arg15, 2)
                    arg6 = _mm256_and_ps(arg8, arg10)
                    arg10 = _mm256_and_ps(temp0_640, arg6)
                    arg11 = _mm256_xor_ps(arg10, arg8)
                
                if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, arg8)) != 0xff)
                    float temp0_646[0x8] = _mm256_cmp_ps(arg14, temp0_626, 2)
                    arg6 = _mm256_and_ps(arg10, arg8)
                    arg10 = _mm256_and_ps(temp0_646, arg6)
                
                arg10 = _mm256_and_ps(arg10, arg8)
            
            zmm2 = _mm256_sub_ps(temp0_604, temp0_608)
            arg11 = _mm256_sub_ps(arg15, temp0_609)
            arg8 = _mm256_sub_ps(temp0_626, temp0_610)
            arg12 = _mm256_sub_ps(arg9, temp0_604)
            arg9 = _mm256_sub_ps(temp0_612, arg15)
            arg7 = _mm256_sub_ps(arg14, temp0_626)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg10, zmm0)) == 0)
                arg13 = var_660_2
                arg5 = _mm256_andnot_ps(arg10, zmm0)
                
                if (_mm256_movemask_ps(arg5) != 0)
                label_1400520a8:
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    arg10 = _mm256_xor_ps(arg10, arg5)
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    float temp0_828[0x8] = _mm256_cmp_ps(arg5, zmm2, 1)
                    arg14 = _mm256_and_ps(temp0_828, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg14, zmm0)) != 0)
                        var_640_4 = _mm256_maskstore_ps(arg14, zmm2)
                    
                    zmm2 = _mm256_andnot_ps(temp0_828, arg10)
                    arg5 = _mm256_and_ps(zmm2, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_837[0x8] = _mm256_cmp_ps(arg5, arg12, 1)
                        arg14 = _mm256_and_ps(zmm2, temp0_837)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg14, zmm0)) != 0)
                            var_640_4 = _mm256_maskstore_ps(arg14, 
                                _mm256_xor_ps(arg12, _mm256_broadcast_ss(-0f)))
                        
                        zmm2 = _mm256_andnot_ps(temp0_837, zmm2)
                        arg5 = _mm256_and_ps(zmm2, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_640_4 = _mm256_maskstore_ps(zmm2, arg5)
                    
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    float temp0_850[0x8] = _mm256_cmp_ps(zmm2, arg11, 1)
                    arg12 = _mm256_and_ps(temp0_850, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm0)) != 0)
                        var_620_4 = _mm256_maskstore_ps(arg12, arg11)
                    
                    zmm2 = _mm256_andnot_ps(temp0_850, arg10)
                    arg5 = _mm256_and_ps(zmm2, zmm0)
                    arg13 = var_660_2
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg11 = _mm256_cmp_ps(arg5, arg9, 1)
                        arg12 = _mm256_and_ps(zmm2, arg11)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm0)) != 0)
                            var_620_4 = _mm256_maskstore_ps(arg12, 
                                _mm256_xor_ps(arg9, _mm256_broadcast_ss(-0f)))
                        
                        zmm2 = _mm256_andnot_ps(arg11, zmm2)
                        arg5 = _mm256_and_ps(zmm2, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_620_4 = _mm256_maskstore_ps(zmm2, arg5)
                    
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    float temp0_872[0x8] = _mm256_cmp_ps(zmm2, arg8, 1)
                    arg9 = _mm256_and_ps(temp0_872, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm0)) != 0)
                        var_600_4 = _mm256_maskstore_ps(arg9, arg8)
                    
                    zmm2 = _mm256_andnot_ps(temp0_872, arg10)
                    arg5 = _mm256_and_ps(zmm2, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_881[0x8] = _mm256_cmp_ps(arg5, arg7, 1)
                        arg9 = _mm256_and_ps(zmm2, temp0_881)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm0)) != 0)
                            var_600_4 = _mm256_maskstore_ps(arg9, 
                                _mm256_xor_ps(arg7, _mm256_broadcast_ss(-0f)))
                        
                        zmm2 = _mm256_andnot_ps(temp0_881, zmm2)
                        arg5 = _mm256_and_ps(zmm2, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_600_4 = _mm256_maskstore_ps(zmm2, arg5)
                    
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    arg8 = var_600_4
                    float temp0_896[0x8] = _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_fmadd_ps(var_640_4, var_640_4, zmm2), var_620_4, 
                            var_620_4), 
                        arg8, arg8)
                    float temp0_897[0x8] = _mm256_rsqrt_ps(temp0_896)
                    float temp0_898[0x8] = _mm256_mul_ps(temp0_896, temp0_897)
                    float temp0_903[0x8] = _mm256_mul_ps(
                        _mm256_mul_ps(temp0_897, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_897, temp0_898)), 
                        _mm256_broadcast_ss(0.5f))
                    float temp0_904[0x8] = _mm256_rcp_ps(temp0_903)
                    arg7 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), temp0_904, temp0_903)
                    zmm2 = _mm256_mul_ps(temp0_904, arg7)
                    arg6 = _mm256_blendv_ps(arg6, zmm2, arg10)
            else
                float var_5c0_4[0x8] = arg15
                arg6 = _mm256_max_ps(arg12, zmm2)
                arg14 = _mm256_max_ps(arg9, arg11)
                float temp0_660[0x8] = _mm256_max_ps(arg7, arg8)
                float temp0_661[0x8] = _mm256_cmp_ps(arg14, arg6, 1)
                arg16 = _mm256_and_ps(arg10, temp0_661)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg16, zmm0)) != 0)
                    arg16 = _mm256_and_ps(_mm256_cmp_ps(temp0_660, arg6, 5), arg16)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg16, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, temp0_660, arg16)
                
                arg15 = _mm256_andnot_ps(temp0_661, arg10)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg15, zmm0)) == 0)
                    arg13 = var_660_2
                    arg15 = var_5c0_4
                    arg5 = _mm256_andnot_ps(arg10, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        goto label_1400520a8
                else
                    float var_5a0_4[0x8] = arg8
                    arg8 = arg7
                    arg16 = _mm256_cmp_ps(temp0_660, arg14, 1)
                    arg7 = _mm256_and_ps(arg15, arg16)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg14, arg7)
                    
                    arg7 = _mm256_andnot_ps(arg16, arg15)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, temp0_660, arg7)
                    
                    arg13 = var_660_2
                    arg15 = var_5c0_4
                    arg7 = arg8
                    arg8 = var_5a0_4
                    arg5 = _mm256_andnot_ps(arg10, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        goto label_1400520a8
            
            zmm2[0].o = arg18
            float temp0_910[0x8] = _mm256_sub_ps(arg6, _mm256_broadcastss_ps(zmm2[0].o))
            arg5 = _mm256_cmp_ps(temp0_910, _mm256_broadcast_ss(-9.99999975e-05f), 1)
            zmm0 = _mm256_and_ps(arg5, zmm0)
            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            result = zx.q(__vpmovmskb_gpr32d_xmmdq(arg5[0].o))
            
            if (result.b != 0)
                float temp0_918[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_604, temp0_910, var_460_1)
                arg15 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg15, temp0_910, var_440_1)
                float temp0_920[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_626, temp0_910, var_420_1)
                var_460_1 = _mm256_maskstore_ps(zmm0, temp0_918)
                var_440_1 = _mm256_maskstore_ps(zmm0, arg15)
                var_420_1 = _mm256_maskstore_ps(zmm0, temp0_920)
                zmm0 = _mm256_add_ps(arg13, temp0_910)
                arg13 = _mm256_blendv_ps(arg13, zmm0, _mm256_cvtepi16_epi32(arg6[0].o))
    else
        arg5 = _mm256_broadcast_ss(arg3[3])
        zmm0[0].o = *arg3
        zmm1[0].o = arg3[1]
        zmm2[0].o = arg3[2]
        float temp0_218[0x8] = _mm256_broadcast_ss(*arg2)
        float temp0_219[0x8] = _mm256_broadcast_ss(arg2[1])
        float temp0_220[0x8] = _mm256_broadcast_ss(arg2[2])
        float temp0_221[0x8] = _mm256_broadcast_ss(*arg1)
        float temp0_222[0x8] = _mm256_broadcast_ss(arg1[1])
        float temp0_223[0x8] = _mm256_broadcast_ss(arg1[2])
        temp0_223[0].o = arg18
        float temp0_224[0x8] = _mm256_broadcastss_ps(temp0_223[0].o)
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        int32_t rdi_2 = 0
        float temp0_226[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
        float temp0_227[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
        zmm4 = __vpbroadcastd_ymmqq_memd(4)
        float var_2e0_2[0x8] = zmm4
        float temp0_229[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
        float temp0_230[0x8] = _mm256_broadcastss_ps(zmm2[0].o)
        float temp0_231[0x8] = _mm256_broadcastss_ps(zmm0[0].o)
        rsi_2 = 0
        float temp0_232[0x8] = _mm256_broadcast_ss(1.12103877e-44f)
        float temp0_233[0x8] = _mm256_broadcast_ss(-9.99999975e-05f)
        arg16[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        float var_560_2[0x8] = arg5
        
        do
            zmm0 = *(arg17 + sx.q(rdi_2))
            zmm1 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, temp0_226)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm4 = _mm256_cmpeq_epi32(zmm4, zmm4)
            float temp0_242[0x8]
            int32_t temp1_4
            temp0_242, temp1_4 = _mm256_i32gather_ps(zmm2, *(arg4 + (zmm1[0].q << 2)), zmm4)
            zmm4 = temp1_4
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, temp0_227)
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_2e0_2)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            float temp0_247[0x8]
            int32_t temp1_5
            temp0_247, temp1_5 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm1[0].q), arg6)
            arg6 = temp1_5
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, temp0_232)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            float temp0_251[0x8]
            int32_t temp1_6
            temp0_251, temp1_6 = _mm256_i32gather_ps(zmm1, *(arg4 + zmm0[0].q), arg6)
            float var_4a0_2[0x8] = arg11
            arg9 = temp0_230
            float temp0_252[0x8] = _mm256_mul_ps(temp0_247, arg9)
            float temp0_253[0x8] = _mm256_mul_ps(temp0_251, temp0_231)
            float temp0_254[0x8] = _mm256_mul_ps(temp0_242, temp0_229)
            float temp0_255[0x8] = _mm256_fmsub_ps(temp0_251, temp0_229, temp0_252)
            float temp0_256[0x8] = _mm256_fmsub_ps(temp0_242, arg9, temp0_253)
            float temp0_257[0x8] = _mm256_fmsub_ps(temp0_247, temp0_231, temp0_254)
            float temp0_258[0x8] = _mm256_add_ps(temp0_255, temp0_255)
            float temp0_259[0x8] = _mm256_add_ps(temp0_256, temp0_256)
            float temp0_260[0x8] = _mm256_add_ps(temp0_257, temp0_257)
            float temp0_261[0x8] = _mm256_fmadd_ps(temp0_251, arg5, temp0_260)
            float temp0_262[0x8] = _mm256_mul_ps(temp0_259, arg9)
            float temp0_263[0x8] = _mm256_mul_ps(temp0_260, temp0_231)
            float temp0_264[0x8] = _mm256_fmsub_ps(temp0_260, temp0_229, temp0_262)
            float temp0_266[0x8] =
                _mm256_add_ps(_mm256_fmadd_ps(temp0_242, arg5, temp0_258), temp0_264)
            float temp0_267[0x8] = _mm256_mul_ps(temp0_258, temp0_229)
            float temp0_268[0x8] = _mm256_fmsub_ps(temp0_258, arg9, temp0_263)
            float temp0_270[0x8] =
                _mm256_add_ps(_mm256_fmadd_ps(temp0_247, arg5, temp0_259), temp0_268)
            float temp0_272[0x8] =
                _mm256_add_ps(temp0_261, _mm256_fmsub_ps(temp0_259, temp0_231, temp0_267))
            arg9 = _mm256_add_ps(temp0_266, _mm256_broadcast_ss(arg3[4]))
            arg8 = _mm256_add_ps(temp0_270, _mm256_broadcast_ss(arg3[5]))
            arg6 = _mm256_add_ps(temp0_272, _mm256_broadcast_ss(arg3[6]))
            float temp0_279[0x8] = _mm256_cmp_ps(arg9, temp0_218, 6)
            temp0_272[0].o = _mm256_extractf128_ps(temp0_279[0].o, 1)
            temp0_279[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_279[0].o, temp0_272[0].o)
            float var_640_2[0x8] = arg5
            float var_620_2[0x8] = arg5
            float var_600_2[0x8] = arg5
            float var_5e0_2[0x8] = arg5
            temp0_279[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_279[0].o, temp0_279[0].o)
            char temp0_283 = __vpmovmskb_gpr32d_xmmdq(temp0_279[0].o)
            zmm0 = _mm256_cmp_ps(arg9, temp0_218, 2)
            
            if (temp0_283 == 0xff)
                temp0_272[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_272[0].o)
                arg16 = _mm256_srai_epi32(
                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
            else
                float temp0_286[0x8] = _mm256_cmp_ps(arg8, _mm256_broadcast_ss(arg2[1]), 2)
                zmm0 = _mm256_and_ps(temp0_286, zmm0)
                temp0_286[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_286[0].o)
                temp0_286[0].o = zmm0[0].o ^ arg16[0].o
                temp0_286[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_286[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(temp0_286[0].o) == 0xff)
                    arg16 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                else
                    float temp0_293[0x8] = _mm256_cmp_ps(arg6, _mm256_broadcast_ss(arg2[2]), 2)
                    temp0_218[0].o = _mm256_extractf128_ps(temp0_293[0].o, 1)
                    temp0_293[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_293[0].o, temp0_218[0].o)
                    zmm0[0].o &= temp0_293[0].o
                    temp0_293[0].o = zmm0[0].o ^ arg16[0].o
                    temp0_293[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_293[0].o, zmm0[0].o)
                    char temp0_297 = __vpmovmskb_gpr32d_xmmdq(temp0_293[0].o)
                    arg16 = _mm256_cvtepi16_epi32(zmm0[0].o)
                    
                    if (temp0_297 != 0xff)
                        float temp0_299[0x8] = _mm256_broadcast_ss(*arg1)
                        zmm1 = _mm256_and_ps(_mm256_cmp_ps(temp0_299, arg9, 6), arg16)
                        zmm4 = _mm256_cmpeq_epi32(zmm1, arg16)
                        
                        if (_mm256_movemask_ps(zmm4) == 0xff)
                            zmm0 = _mm256_cmp_ps(temp0_299, arg9, 2)
                            
                            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(zmm1, arg16)) != 0xff)
                                zmm0 = _mm256_and_ps(
                                    _mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg6, 2), 
                                    _mm256_and_ps(zmm0, arg16))
                        else
                            float temp0_304[0x8] = _mm256_cmp_ps(temp0_299, arg9, 2)
                            temp0_299[0].o = _mm256_extractf128_ps(temp0_304[0].o, 1)
                            temp0_304[0].o =
                                __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_304[0].o, temp0_299[0].o)
                            float temp0_308[0x8] =
                                _mm256_cmp_ps(_mm256_broadcast_ss(arg1[1]), arg8, 2)
                            zmm4[0].o = _mm256_extractf128_ps(temp0_308[0].o, 1)
                            temp0_308[0].o =
                                __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_308[0].o, zmm4[0].o)
                            zmm0[0].o &= temp0_304[0].o
                            zmm0[0].o &= temp0_308[0].o
                            zmm0 = _mm256_cvtepi16_epi32(zmm0[0].o)
                            
                            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(zmm0 & not.32(arg16), arg16))
                                    != 0xff)
                                zmm0 = _mm256_and_ps(
                                    _mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg6, 2), 
                                    _mm256_and_ps(zmm0, arg16))
                        
                        arg16 = _mm256_and_ps(zmm0, arg16)
            
            arg12 = __vsubps_ymmqq_ymmqq_memqq(arg9, temp0_218)
            arg7 = __vsubps_ymmqq_ymmqq_memqq(arg8, temp0_219)
            arg10 = __vsubps_ymmqq_ymmqq_memqq(arg6, temp0_220)
            arg14 = _mm256_sub_ps(temp0_221, arg9)
            zmm4 = _mm256_sub_ps(temp0_222, arg8)
            arg15 = _mm256_sub_ps(temp0_223, arg6)
            
            if (_mm256_movemask_ps(arg16) == 0)
            label_1400512f5:
                arg16 = __vxorps_ymmqq_ymmqq_memqq(arg16, data_142fc9420)
                
                if (_mm256_movemask_ps(arg16) == 0)
                    zmm2 = var_660
                else
                label_14005130a:
                    float temp0_357[0x8] = _mm256_cmp_ps(arg11, arg12, 1)
                    zmm1 = _mm256_and_ps(temp0_357, arg16)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_640_2 = _mm256_maskstore_ps(zmm1, arg12)
                    
                    zmm0 = _mm256_andnot_ps(temp0_357, arg16)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm2 = arg14
                        arg14 = arg13
                        arg13 = zmm4
                        float temp0_363[0x8] = _mm256_cmp_ps(arg11, zmm2, 1)
                        zmm4 = _mm256_and_ps(zmm0, temp0_363)
                        
                        if (_mm256_movemask_ps(zmm4) != 0)
                            arg12 = arg6
                            arg6 = arg12
                            var_640_2 = _mm256_maskstore_ps(zmm4, 
                                _mm256_xor_ps(zmm2, _mm256_broadcast_ss(-0f)))
                        
                        zmm0 = _mm256_andnot_ps(temp0_363, zmm0)
                        zmm4 = arg13
                        arg13 = arg14
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_640_2 = _mm256_maskstore_ps(zmm0, arg11)
                    
                    float temp0_372[0x8] = _mm256_cmp_ps(arg11, arg7, 1)
                    zmm1 = _mm256_and_ps(temp0_372, arg16)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_620_2 = _mm256_maskstore_ps(zmm1, arg7)
                    
                    zmm0 = _mm256_andnot_ps(temp0_372, arg16)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        float temp0_378[0x8] = _mm256_cmp_ps(arg11, zmm4, 1)
                        zmm2 = _mm256_and_ps(zmm0, temp0_378)
                        
                        if (_mm256_movemask_ps(zmm2) != 0)
                            arg7 = zmm4
                            zmm4 = _mm256_xor_ps(arg7, _mm256_broadcast_ss(-0f))
                            var_620_2 = _mm256_maskstore_ps(zmm2, zmm4)
                        
                        zmm0 = _mm256_andnot_ps(temp0_378, zmm0)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_620_2 = _mm256_maskstore_ps(zmm0, arg11)
                    
                    float temp0_387[0x8] = _mm256_cmp_ps(arg11, arg10, 1)
                    zmm1 = _mm256_and_ps(temp0_387, arg16)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_600_2 = _mm256_maskstore_ps(zmm1, arg10)
                    
                    zmm0 = _mm256_andnot_ps(temp0_387, arg16)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        float temp0_393[0x8] = _mm256_cmp_ps(arg11, arg15, 1)
                        zmm2 = _mm256_and_ps(zmm0, temp0_393)
                        
                        if (_mm256_movemask_ps(zmm2) != 0)
                            zmm4 = _mm256_xor_ps(arg15, _mm256_broadcast_ss(-0f))
                            var_600_2 = _mm256_maskstore_ps(zmm2, zmm4)
                        
                        zmm0 = _mm256_andnot_ps(temp0_393, zmm0)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_600_2 = _mm256_maskstore_ps(zmm0, arg11)
                    
                    float temp0_404[0x8] = _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_fmadd_ps(var_640_2, var_640_2, arg11), var_620_2, 
                            var_620_2), 
                        var_600_2, var_600_2)
                    float temp0_405[0x8] = _mm256_rsqrt_ps(temp0_404)
                    float temp0_406[0x8] = _mm256_mul_ps(temp0_404, temp0_405)
                    float temp0_411[0x8] = _mm256_mul_ps(
                        _mm256_mul_ps(temp0_405, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_405, temp0_406)), 
                        _mm256_broadcast_ss(0.5f))
                    float temp0_412[0x8] = _mm256_rcp_ps(temp0_411)
                    zmm2 = _mm256_blendv_ps(var_660, 
                        _mm256_mul_ps(temp0_412, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), temp0_412, temp0_411)), 
                        arg16)
            else
                zmm2 = arg8
                float temp0_331[0x8] = _mm256_max_ps(arg14, arg12)
                float temp0_332[0x8] = _mm256_max_ps(zmm4, arg7)
                zmm1 = arg10
                arg10 = arg15
                float var_5a0_2[0x8] = zmm1
                float temp0_333[0x8] = _mm256_max_ps(arg15, zmm1)
                float temp0_334[0x8] = _mm256_cmp_ps(temp0_332, temp0_331, 1)
                arg15 = _mm256_and_ps(arg16, temp0_334)
                
                if (_mm256_movemask_ps(arg15) == 0)
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    arg8 = zmm2
                    arg15 = arg10
                    zmm1 = _mm256_andnot_ps(temp0_334, arg16)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                    label_140051290:
                        arg15 = arg6
                        float temp0_347[0x8] = _mm256_cmp_ps(temp0_333, temp0_332, 1)
                        arg6 = _mm256_and_ps(zmm1, temp0_347)
                        
                        if (_mm256_movemask_ps(arg6) != 0)
                            arg11 = _mm256_blendv_ps(var_660, temp0_332, arg6)
                            var_660 = arg11
                            arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                        
                        arg6 = arg15
                        arg15 = arg10
                        arg10 = var_5a0_2
                        zmm0 = _mm256_andnot_ps(temp0_347, zmm1)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_660 = _mm256_blendv_ps(var_660, temp0_333, zmm0)
                        
                        arg8 = zmm2
                        zmm4 = zmm4
                        goto label_1400512f5
                else
                    float var_520_2[0x8] = arg6
                    float temp0_337[0x8] = _mm256_cmp_ps(temp0_333, temp0_331, 1)
                    arg6 = _mm256_and_ps(arg15, temp0_337)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        arg11 = _mm256_blendv_ps(var_660, temp0_331, arg6)
                        var_660 = arg11
                    
                    arg6 = _mm256_andnot_ps(temp0_337, arg15)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        var_660 = _mm256_blendv_ps(var_660, temp0_333, arg6)
                    
                    arg13 = arg13
                    arg5 = var_560_2
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    arg8 = zmm2
                    arg6 = var_520_2
                    arg15 = arg10
                    arg14 = arg14
                    zmm1 = _mm256_andnot_ps(temp0_334, arg16)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        goto label_140051290
                
                arg10 = var_5a0_2
                zmm4 = zmm4
                arg16 = __vxorps_ymmqq_ymmqq_memqq(arg16, data_142fc9420)
                
                if (_mm256_movemask_ps(arg16) != 0)
                    goto label_14005130a
                
                zmm2 = var_660
            
            zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm2, temp0_224)
            zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, temp0_233, 1)
            result = zx.q(_mm256_movemask_ps(zmm1))
            arg16[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            
            if (result.b != 0)
                arg9 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg9, zmm0, var_460_1)
                arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg8, zmm0, var_440_1)
                arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, zmm0, var_420_1)
                var_460_1 = _mm256_maskstore_ps(zmm1, arg9)
                var_440_1 = _mm256_maskstore_ps(zmm1, arg8)
                var_420_1 = _mm256_maskstore_ps(zmm1, arg6)
                zmm0 = _mm256_add_ps(arg13, zmm0)
                arg13 = _mm256_blendv_ps(arg13, zmm0, zmm1)
            
            var_660 = zmm2
            rsi_2 += 8
            rdi_2 += 0x20
        while (rsi_2 s< rbx_9)
        
        if (rsi_2 s< arg21)
            goto label_1400518f4
    zmm0[0].o = zx.o(0)
    zmm0 = _mm256_cmpeq_epi32(var_3a0_1, zmm0)
    zmm1 = zmm0 & not.32(var_460_1)
    float temp0_928[0x8] = _mm256_hadd_ps(zmm1, zmm1)
    zmm1 = _mm256_hadd_ps(temp0_928, temp0_928)
    zmm2 = zmm0 & not.32(var_440_1)
    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    float temp0_931[0x8] = _mm256_hadd_ps(zmm2, zmm2)
    zmm1[0].o = zmm1[0].o f+ arg5[0]
    float temp0_932[0x8] = _mm256_hadd_ps(temp0_931, temp0_931)
    arg5[0].o = _mm256_extractf128_ps(temp0_932[0].o, 1)
    temp0_932[0].o = temp0_932[0].o f+ arg5[0]
    arg5 = zmm0 & not.32(var_420_1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_932[0].o, 0x10)
    float temp0_935[0x8] = _mm256_hadd_ps(arg5, arg5)
    float temp0_936[0x8] = _mm256_hadd_ps(temp0_935, temp0_935)
    arg5[0].o = _mm256_extractf128_ps(temp0_936[0].o, 1)
    temp0_936[0].o = temp0_936[0].o f+ arg5[0]
    arg5[0].o = __vmovsd_xmmdq_memq(*arg20)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, arg20[1].d, 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_936[0].o, 0x20)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
    *arg20 = zmm1[0]
    *(arg20 + 4) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    arg20[1].d = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm0 &= not.32(arg13)
    zmm0 = _mm256_hadd_ps(zmm0, zmm0)
else
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    float var_3c0_1[0x8] = arg12
    float var_3e0_1[0x8] = arg12
    int32_t rbx_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
    float var_400_1[0x8] = arg12
    int32_t rsi_1
    
    if (rbx_4 s<= 0)
        rsi_1 = 0
        
        if (0 s< arg21)
        label_140051594:
            float var_660_1[0x8] = arg12
            zmm0[0].o = zx.o(rsi_1)
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
            zmm1[0].o = zx.o(arg21)
            zmm0 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
            float temp0_438[0x8] = _mm256_maskload_ps(zmm0, *(arg17 + sx.q(rsi_1 << 2)))
            zmm2 = _mm256_mullo_epi32(temp0_438, __vpbroadcastd_ymmqq_memd(3))
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_442[0x8]
            int32_t temp1_7
            temp0_442, temp1_7 = _mm256_i32gather_ps(arg5, *(arg4 + (zmm2[0].q << 2)), zmm0)
            zmm4 = temp1_7
            zmm1 = _mm256_mullo_epi32(temp0_438, __vpbroadcastd_ymmqq_memd(0xc))
            zmm2 = _mm256_add_epi32(zmm1, __vpbroadcastd_ymmqq_memd(4))
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            float temp0_448[0x8]
            int32_t temp1_8
            temp0_448, temp1_8 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm2[0].q), zmm0)
            zmm2 = __vpbroadcastd_ymmqq_memd(8)
            zmm1 = _mm256_add_epi32(zmm1, zmm2)
            zmm2[0].o = zx.o(0)
            float temp0_451[0x8]
            int32_t temp1_9
            temp0_451, temp1_9 = _mm256_i32gather_ps(zmm2, *(arg4 + zmm1[0].q), zmm0)
            arg6 = temp1_9
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            float var_180_1[0x8] = arg6
            float temp0_453[0x8] = _mm256_broadcast_ss(arg3[3])
            float var_640_3[0x8] = temp0_453
            float var_620_3[0x8] = temp0_453
            float var_600_3[0x8] = temp0_453
            float var_5e0_3[0x8] = temp0_453
            float temp0_454[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_455[0x8] = _mm256_broadcast_ss(arg3[2])
            arg9 = _mm256_broadcast_ss(*arg3)
            float temp0_457[0x8] = _mm256_mul_ps(temp0_453, arg6)
            float temp0_458[0x8] = _mm256_mul_ps(temp0_448, temp0_455)
            float temp0_459[0x8] = _mm256_mul_ps(temp0_451, arg9)
            float temp0_460[0x8] = _mm256_mul_ps(temp0_442, temp0_454)
            float temp0_461[0x8] = _mm256_fmsub_ps(temp0_458, temp0_454, temp0_451)
            float temp0_462[0x8] = _mm256_fmsub_ps(temp0_459, temp0_455, temp0_442)
            float temp0_463[0x8] = _mm256_fmsub_ps(temp0_460, arg9, temp0_448)
            float temp0_464[0x8] = _mm256_sub_ps(temp0_457, temp0_457)
            float temp0_465[0x8] = _mm256_add_ps(temp0_461, temp0_461)
            float temp0_466[0x8] = _mm256_add_ps(temp0_462, temp0_462)
            arg6 = _mm256_add_ps(temp0_463, temp0_463)
            float temp0_468[0x8] = _mm256_add_ps(temp0_464, temp0_464)
            float var_500_3[0x8] = temp0_465
            float var_4e0_3[0x8] = temp0_466
            float var_4c0_3[0x8] = arg6
            float var_4a0_3[0x8] = temp0_468
            float temp0_469[0x8] = _mm256_fmadd_ps(temp0_442, temp0_453, temp0_465)
            float temp0_470[0x8] = _mm256_fmadd_ps(temp0_448, temp0_453, temp0_466)
            arg9 = _mm256_fmadd_ps(temp0_451, temp0_453, arg6)
            float var_160_1[0x8] = temp0_469
            float var_140_1[0x8] = temp0_470
            int32_t var_120_1[0x8] = arg9
            float var_100_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_468, temp0_453, var_180_1)
            float temp0_473[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_474[0x8] = _mm256_broadcast_ss(arg3[2])
            float temp0_475[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_476[0x8] = _mm256_mul_ps(temp0_466, temp0_474)
            float temp0_477[0x8] = _mm256_mul_ps(arg6, temp0_475)
            float temp0_478[0x8] = _mm256_mul_ps(temp0_465, temp0_473)
            float temp0_479[0x8] = _mm256_fmsub_ps(temp0_476, arg6, temp0_473)
            float temp0_480[0x8] = _mm256_fmsub_ps(temp0_477, temp0_465, temp0_474)
            float temp0_481[0x8] = _mm256_fmsub_ps(temp0_478, temp0_466, temp0_475)
            float temp0_482[0x8] = _mm256_add_ps(temp0_469, temp0_479)
            float temp0_483[0x8] = _mm256_add_ps(temp0_470, temp0_480)
            float temp0_484[0x8] = _mm256_add_ps(arg9, temp0_481)
            float temp0_486[0x8] = _mm256_add_ps(temp0_482, _mm256_broadcast_ss(arg3[4]))
            arg15 = _mm256_add_ps(temp0_483, _mm256_broadcast_ss(arg3[5]))
            float temp0_489[0x8] = _mm256_broadcast_ss(arg3[6])
            float temp0_490[0x8] = _mm256_broadcast_ss(*arg2)
            float temp0_491[0x8] = _mm256_broadcast_ss(arg2[1])
            float temp0_492[0x8] = _mm256_broadcast_ss(arg2[2])
            arg9 = _mm256_broadcast_ss(*arg1)
            arg13 = _mm256_broadcast_ss(arg1[1])
            arg14 = _mm256_broadcast_ss(arg1[2])
            arg11 = _mm256_and_ps(_mm256_cmp_ps(temp0_486, temp0_490, 6), zmm0)
            arg5 = _mm256_cmpeq_epi32(arg11, zmm0)
            char temp0_499 = _mm256_movemask_ps(arg5)
            arg10 = _mm256_cmp_ps(temp0_486, temp0_490, 2)
            
            if (temp0_499 != 0xff)
                float temp0_501[0x8] = _mm256_cmp_ps(arg15, temp0_491, 2)
                arg5[0].o = _mm256_extractf128_ps(temp0_501[0].o, 1)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_501[0].o, arg5[0].o)
                arg10 = _mm256_and_ps(arg10, zmm0)
                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
                arg5[0].o &= arg6[0].o
                arg10 = _mm256_cvtepi16_epi32(arg5[0].o)
                arg11 = arg10 & not.32(zmm0)
            
            float temp0_508[0x8] = _mm256_add_ps(temp0_484, temp0_489)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, zmm0)) != 0xff)
                arg10 = _mm256_and_ps(_mm256_cmp_ps(temp0_508, temp0_492, 2), arg10 & zmm0)
                arg11 = _mm256_xor_ps(arg10, zmm0)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, zmm0)) != 0xff)
                arg8 = _mm256_and_ps(arg10, zmm0)
                arg10 = _mm256_cmp_ps(arg9, temp0_486, 2)
                arg11 = _mm256_and_ps(arg8, _mm256_cmp_ps(arg9, temp0_486, 6))
                
                if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, arg8)) != 0xff)
                    float temp0_522[0x8] = _mm256_cmp_ps(arg13, arg15, 2)
                    arg6 = _mm256_and_ps(arg8, arg10)
                    arg10 = _mm256_and_ps(temp0_522, arg6)
                    arg11 = _mm256_xor_ps(arg10, arg8)
                
                if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, arg8)) != 0xff)
                    float temp0_528[0x8] = _mm256_cmp_ps(arg14, temp0_508, 2)
                    arg6 = _mm256_and_ps(arg10, arg8)
                    arg10 = _mm256_and_ps(temp0_528, arg6)
                
                arg10 = _mm256_and_ps(arg10, arg8)
            
            zmm1 = _mm256_sub_ps(temp0_486, temp0_490)
            arg11 = _mm256_sub_ps(arg15, temp0_491)
            arg8 = _mm256_sub_ps(temp0_508, temp0_492)
            float temp0_535[0x8] = _mm256_sub_ps(arg9, temp0_486)
            arg9 = _mm256_sub_ps(arg13, arg15)
            arg7 = _mm256_sub_ps(arg14, temp0_508)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg10, zmm0)) == 0)
                arg5 = _mm256_andnot_ps(arg10, zmm0)
                
                if (_mm256_movemask_ps(arg5) != 0)
                label_140051cfd:
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    arg10 = _mm256_xor_ps(arg10, arg5)
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    arg13 = _mm256_cmp_ps(arg5, zmm1, 1)
                    arg14 = _mm256_and_ps(arg13, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg14, zmm0)) != 0)
                        var_640_3 = _mm256_maskstore_ps(arg14, zmm1)
                    
                    zmm1 = _mm256_andnot_ps(arg13, arg10)
                    arg5 = _mm256_and_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg13 = _mm256_cmp_ps(arg5, temp0_535, 1)
                        arg14 = _mm256_and_ps(zmm1, arg13)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg14, zmm0)) != 0)
                            var_640_3 = _mm256_maskstore_ps(arg14, 
                                _mm256_xor_ps(temp0_535, _mm256_broadcast_ss(-0f)))
                        
                        zmm1 = _mm256_andnot_ps(arg13, zmm1)
                        arg5 = _mm256_and_ps(zmm1, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_640_3 = _mm256_maskstore_ps(zmm1, arg5)
                    
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    float temp0_713[0x8] = _mm256_cmp_ps(zmm1, arg11, 1)
                    arg12 = _mm256_and_ps(temp0_713, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm0)) != 0)
                        var_620_3 = _mm256_maskstore_ps(arg12, arg11)
                    
                    zmm1 = _mm256_andnot_ps(temp0_713, arg10)
                    arg5 = _mm256_and_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg11 = _mm256_cmp_ps(arg5, arg9, 1)
                        arg12 = _mm256_and_ps(zmm1, arg11)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm0)) != 0)
                            var_620_3 = _mm256_maskstore_ps(arg12, 
                                _mm256_xor_ps(arg9, _mm256_broadcast_ss(-0f)))
                        
                        zmm1 = _mm256_andnot_ps(arg11, zmm1)
                        arg5 = _mm256_and_ps(zmm1, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_620_3 = _mm256_maskstore_ps(zmm1, arg5)
                    
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    float temp0_735[0x8] = _mm256_cmp_ps(zmm1, arg8, 1)
                    arg9 = _mm256_and_ps(temp0_735, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm0)) != 0)
                        var_600_3 = _mm256_maskstore_ps(arg9, arg8)
                    
                    zmm1 = _mm256_andnot_ps(temp0_735, arg10)
                    arg5 = _mm256_and_ps(zmm1, zmm0)
                    arg12 = var_660_1
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        float temp0_744[0x8] = _mm256_cmp_ps(arg5, arg7, 1)
                        arg9 = _mm256_and_ps(zmm1, temp0_744)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm0)) != 0)
                            var_600_3 = _mm256_maskstore_ps(arg9, 
                                _mm256_xor_ps(arg7, _mm256_broadcast_ss(-0f)))
                        
                        zmm1 = _mm256_andnot_ps(temp0_744, zmm1)
                        arg5 = _mm256_and_ps(zmm1, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_600_3 = _mm256_maskstore_ps(zmm1, arg5)
                    
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg8 = var_600_3
                    float temp0_759[0x8] = _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_fmadd_ps(var_640_3, var_640_3, zmm1), var_620_3, 
                            var_620_3), 
                        arg8, arg8)
                    float temp0_760[0x8] = _mm256_rsqrt_ps(temp0_759)
                    float temp0_761[0x8] = _mm256_mul_ps(temp0_759, temp0_760)
                    float temp0_766[0x8] = _mm256_mul_ps(
                        _mm256_mul_ps(temp0_760, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_760, temp0_761)), 
                        _mm256_broadcast_ss(0.5f))
                    float temp0_767[0x8] = _mm256_rcp_ps(temp0_766)
                    arg7 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), temp0_767, temp0_766)
                    zmm1 = _mm256_mul_ps(temp0_767, arg7)
                    arg6 = _mm256_blendv_ps(arg6, zmm1, arg10)
                else
                    arg12 = var_660_1
            else
                float var_5c0_3[0x8] = arg15
                arg6 = _mm256_max_ps(temp0_535, zmm1)
                arg14 = _mm256_max_ps(arg9, arg11)
                arg13 = _mm256_max_ps(arg7, arg8)
                float temp0_543[0x8] = _mm256_cmp_ps(arg14, arg6, 1)
                arg16 = _mm256_and_ps(arg10, temp0_543)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg16, zmm0)) != 0)
                    arg16 = _mm256_and_ps(_mm256_cmp_ps(arg13, arg6, 5), arg16)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg16, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg13, arg16)
                
                arg15 = _mm256_andnot_ps(temp0_543, arg10)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg15, zmm0)) == 0)
                    arg15 = var_5c0_3
                    arg5 = _mm256_andnot_ps(arg10, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        goto label_140051cfd
                    
                    arg12 = var_660_1
                else
                    int32_t var_5a0_3[0x8] = arg9
                    arg9 = arg8
                    arg8 = arg7
                    arg16 = _mm256_cmp_ps(arg13, arg14, 1)
                    arg7 = _mm256_and_ps(arg15, arg16)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg14, arg7)
                    
                    arg7 = _mm256_andnot_ps(arg16, arg15)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg13, arg7)
                    
                    arg15 = var_5c0_3
                    arg7 = arg8
                    arg8 = arg9
                    arg9 = var_5a0_3
                    arg5 = _mm256_andnot_ps(arg10, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        goto label_140051cfd
                    
                    arg12 = var_660_1
            
            zmm1[0].o = arg18
            float temp0_773[0x8] = _mm256_sub_ps(arg6, _mm256_broadcastss_ps(zmm1[0].o))
            arg5 = _mm256_cmp_ps(temp0_773, _mm256_broadcast_ss(-9.99999975e-05f), 1)
            zmm0 = _mm256_and_ps(arg5, zmm0)
            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            result = zx.q(__vpmovmskb_gpr32d_xmmdq(arg5[0].o))
            
            if (result.b != 0)
                float temp0_781[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_486, temp0_773, var_400_1)
                arg15 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg15, temp0_773, var_3e0_1)
                float temp0_783[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_508, temp0_773, var_3c0_1)
                var_400_1 = _mm256_maskstore_ps(zmm0, temp0_781)
                var_3e0_1 = _mm256_maskstore_ps(zmm0, arg15)
                var_3c0_1 = _mm256_maskstore_ps(zmm0, temp0_783)
                arg12 = _mm256_blendv_ps(arg12, _mm256_add_ps(arg12, temp0_773), 
                    _mm256_cvtepi16_epi32(arg6[0].o))
    else
        zmm2 = _mm256_broadcast_ss(arg3[3])
        zmm0[0].o = *arg3
        zmm1[0].o = arg3[1]
        arg5[0].o = arg3[2]
        arg13 = _mm256_broadcast_ss(*arg2)
        float temp0_4[0x8] = _mm256_broadcast_ss(arg2[1])
        arg10 = _mm256_broadcast_ss(arg2[2])
        float temp0_6[0x8] = _mm256_broadcast_ss(*arg1)
        float temp0_7[0x8] = _mm256_broadcast_ss(arg1[1])
        float temp0_8[0x8] = _mm256_broadcast_ss(arg1[2])
        temp0_8[0].o = arg18
        float temp0_9[0x8] = _mm256_broadcastss_ps(temp0_8[0].o)
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int32_t rdi_1 = 0
        float temp0_11[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
        float temp0_12[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
        zmm4 = __vpbroadcastd_ymmqq_memd(4)
        float var_2e0_1[0x8] = zmm4
        float temp0_14[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
        float temp0_15[0x8] = _mm256_broadcastss_ps(arg5[0].o)
        float temp0_16[0x8] = _mm256_broadcastss_ps(zmm0[0].o)
        rsi_1 = 0
        float temp0_17[0x8] = _mm256_broadcast_ss(1.12103877e-44f)
        float temp0_18[0x8] = _mm256_broadcast_ss(-9.99999975e-05f)
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        float var_520_1[0x8] = arg10
        float var_540_1[0x8] = zmm2
        float var_560_1[0x8] = arg13
        
        do
            zmm0 = *(arg17 + sx.q(rdi_1))
            zmm1 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, temp0_11)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            zmm4 = _mm256_cmpeq_epi32(zmm4, zmm4)
            float temp0_26[0x8]
            int32_t temp1_1
            temp0_26, temp1_1 = _mm256_i32gather_ps(arg5, *(arg4 + (zmm1[0].q << 2)), zmm4)
            zmm4 = temp1_1
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, temp0_12)
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_2e0_1)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            float temp0_31[0x8]
            int32_t temp1_2
            temp0_31, temp1_2 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm1[0].q), arg6)
            arg6 = temp1_2
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, temp0_17)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            float temp0_35[0x8]
            int32_t temp1_3
            temp0_35, temp1_3 = _mm256_i32gather_ps(zmm1, *(arg4 + zmm0[0].q), arg6)
            float var_4a0_1[0x8] = arg14
            float temp0_36[0x8] = _mm256_mul_ps(temp0_31, temp0_15)
            float temp0_37[0x8] = _mm256_mul_ps(temp0_35, temp0_16)
            float temp0_38[0x8] = _mm256_mul_ps(temp0_26, temp0_14)
            float temp0_39[0x8] = _mm256_fmsub_ps(temp0_35, temp0_14, temp0_36)
            float temp0_40[0x8] = _mm256_fmsub_ps(temp0_26, temp0_15, temp0_37)
            float temp0_41[0x8] = _mm256_fmsub_ps(temp0_31, temp0_16, temp0_38)
            float temp0_42[0x8] = _mm256_add_ps(temp0_39, temp0_39)
            float temp0_43[0x8] = _mm256_add_ps(temp0_40, temp0_40)
            float temp0_44[0x8] = _mm256_add_ps(temp0_41, temp0_41)
            float temp0_45[0x8] = _mm256_fmadd_ps(temp0_35, zmm2, temp0_44)
            float temp0_46[0x8] = _mm256_mul_ps(temp0_43, temp0_15)
            float temp0_47[0x8] = _mm256_mul_ps(temp0_44, temp0_16)
            float temp0_48[0x8] = _mm256_fmsub_ps(temp0_44, temp0_14, temp0_46)
            float temp0_50[0x8] = _mm256_add_ps(_mm256_fmadd_ps(temp0_26, zmm2, temp0_42), temp0_48)
            float temp0_51[0x8] = _mm256_mul_ps(temp0_42, temp0_14)
            float temp0_52[0x8] = _mm256_fmsub_ps(temp0_42, temp0_15, temp0_47)
            float temp0_54[0x8] = _mm256_add_ps(_mm256_fmadd_ps(temp0_31, zmm2, temp0_43), temp0_52)
            float temp0_56[0x8] =
                _mm256_add_ps(temp0_45, _mm256_fmsub_ps(temp0_43, temp0_16, temp0_51))
            arg8 = _mm256_add_ps(temp0_50, _mm256_broadcast_ss(arg3[4]))
            float temp0_59[0x8] = _mm256_broadcast_ss(arg3[5])
            arg7 = _mm256_add_ps(temp0_54, temp0_59)
            arg9 = _mm256_add_ps(temp0_56, _mm256_broadcast_ss(arg3[6]))
            float temp0_63[0x8] = _mm256_cmp_ps(arg8, arg13, 6)
            temp0_56[0].o = _mm256_extractf128_ps(temp0_63[0].o, 1)
            temp0_63[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_63[0].o, temp0_56[0].o)
            float var_640_1[0x8] = zmm2
            float var_620_1[0x8] = zmm2
            float var_600_1[0x8] = zmm2
            float var_5e0_1[0x8] = zmm2
            temp0_63[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_63[0].o, temp0_63[0].o)
            char temp0_67 = __vpmovmskb_gpr32d_xmmdq(temp0_63[0].o)
            zmm0 = _mm256_cmp_ps(arg8, arg13, 2)
            
            if (temp0_67 == 0xff)
                temp0_56[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_56[0].o)
                arg15 = _mm256_srai_epi32(
                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
            else
                float temp0_70[0x8] = _mm256_cmp_ps(arg7, _mm256_broadcast_ss(arg2[1]), 2)
                zmm0 = _mm256_and_ps(temp0_70, zmm0)
                temp0_70[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_70[0].o)
                temp0_70[0].o = zmm0[0].o ^ data_142d3f800
                temp0_70[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_70[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(temp0_70[0].o) == 0xff)
                    arg15 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                else
                    float temp0_77[0x8] = _mm256_cmp_ps(arg9, _mm256_broadcast_ss(arg2[2]), 2)
                    temp0_59[0].o = _mm256_extractf128_ps(temp0_77[0].o, 1)
                    temp0_77[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_77[0].o, temp0_59[0].o)
                    zmm0[0].o &= temp0_77[0].o
                    temp0_77[0].o = zmm0[0].o ^ data_142d3f800
                    temp0_77[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_77[0].o, zmm0[0].o)
                    char temp0_81 = __vpmovmskb_gpr32d_xmmdq(temp0_77[0].o)
                    arg15 = _mm256_cvtepi16_epi32(zmm0[0].o)
                    
                    if (temp0_81 != 0xff)
                        float temp0_83[0x8] = _mm256_broadcast_ss(*arg1)
                        zmm1 = _mm256_and_ps(_mm256_cmp_ps(temp0_83, arg8, 6), arg15)
                        zmm4 = _mm256_cmpeq_epi32(zmm1, arg15)
                        
                        if (_mm256_movemask_ps(zmm4) == 0xff)
                            zmm0 = _mm256_cmp_ps(temp0_83, arg8, 2)
                            
                            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(zmm1, arg15)) != 0xff)
                                zmm0 = _mm256_and_ps(
                                    _mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg9, 2), 
                                    _mm256_and_ps(zmm0, arg15))
                        else
                            float temp0_88[0x8] = _mm256_cmp_ps(temp0_83, arg8, 2)
                            temp0_83[0].o = _mm256_extractf128_ps(temp0_88[0].o, 1)
                            temp0_88[0].o =
                                __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_88[0].o, temp0_83[0].o)
                            float temp0_92[0x8] =
                                _mm256_cmp_ps(_mm256_broadcast_ss(arg1[1]), arg7, 2)
                            zmm4[0].o = _mm256_extractf128_ps(temp0_92[0].o, 1)
                            temp0_92[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_92[0].o, zmm4[0].o)
                            zmm0[0].o &= temp0_88[0].o
                            zmm0[0].o &= temp0_92[0].o
                            zmm0 = _mm256_cvtepi16_epi32(zmm0[0].o)
                            
                            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(zmm0 & not.32(arg15), arg15))
                                    != 0xff)
                                zmm0 = _mm256_and_ps(
                                    _mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg9, 2), 
                                    _mm256_and_ps(zmm0, arg15))
                        
                        arg15 = _mm256_and_ps(zmm0, arg15)
            
            arg11 = _mm256_sub_ps(arg8, arg13)
            arg6 = __vsubps_ymmqq_ymmqq_memqq(arg7, temp0_4)
            zmm4 = _mm256_sub_ps(arg9, arg10)
            float temp0_111[0x8] = _mm256_sub_ps(temp0_6, arg8)
            arg16 = _mm256_sub_ps(temp0_7, arg7)
            arg5 = _mm256_sub_ps(temp0_8, arg9)
            float var_5c0_1[0x8] = arg5
            float var_5a0_1[0x8] = arg16
            
            if (_mm256_movemask_ps(arg15) == 0)
            label_140050a94:
                arg15 = __vxorps_ymmqq_ymmqq_memqq(arg15, data_142fc9420)
                
                if (_mm256_movemask_ps(arg15) == 0)
                    zmm1 = var_660
                else
                label_140050aa9:
                    float temp0_140[0x8] = _mm256_cmp_ps(arg14, arg11, 1)
                    arg5 = _mm256_and_ps(temp0_140, arg15)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        var_640_1 = _mm256_maskstore_ps(arg5, arg11)
                    
                    zmm0 = _mm256_andnot_ps(temp0_140, arg15)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        arg11 = arg9
                        arg9 = arg7
                        float temp0_146[0x8] = _mm256_cmp_ps(arg14, temp0_111, 1)
                        arg7 = _mm256_and_ps(zmm0, temp0_146)
                        
                        if (_mm256_movemask_ps(arg7) != 0)
                            arg16 = arg13
                            arg13 = arg16
                            var_640_1 = _mm256_maskstore_ps(arg7, 
                                _mm256_xor_ps(temp0_111, _mm256_broadcast_ss(-0f)))
                        
                        zmm0 = _mm256_andnot_ps(temp0_146, zmm0)
                        arg7 = arg9
                        arg9 = arg11
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_640_1 = _mm256_maskstore_ps(zmm0, arg14)
                    
                    float temp0_155[0x8] = _mm256_cmp_ps(arg14, arg6, 1)
                    zmm1 = _mm256_and_ps(temp0_155, arg15)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_620_1 = _mm256_maskstore_ps(zmm1, arg6)
                    
                    zmm0 = _mm256_andnot_ps(temp0_155, arg15)
                    arg6 = var_5c0_1
                    arg11 = var_5a0_1
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        float temp0_161[0x8] = _mm256_cmp_ps(arg14, arg11, 1)
                        arg5 = _mm256_and_ps(zmm0, temp0_161)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg16 = arg11
                            arg11 = arg10
                            var_620_1 = _mm256_maskstore_ps(arg5, 
                                _mm256_xor_ps(arg16, _mm256_broadcast_ss(-0f)))
                            arg10 = arg11
                        
                        zmm0 = _mm256_andnot_ps(temp0_161, zmm0)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_620_1 = _mm256_maskstore_ps(zmm0, arg14)
                    
                    float temp0_170[0x8] = _mm256_cmp_ps(arg14, zmm4, 1)
                    zmm1 = _mm256_and_ps(temp0_170, arg15)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_600_1 = _mm256_maskstore_ps(zmm1, zmm4)
                    
                    zmm0 = _mm256_andnot_ps(temp0_170, arg15)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        float temp0_176[0x8] = _mm256_cmp_ps(arg14, arg6, 1)
                        arg5 = _mm256_and_ps(zmm0, temp0_176)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            zmm4 = _mm256_xor_ps(arg6, _mm256_broadcast_ss(-0f))
                            var_600_1 = _mm256_maskstore_ps(arg5, zmm4)
                        
                        zmm0 = _mm256_andnot_ps(temp0_176, zmm0)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_600_1 = _mm256_maskstore_ps(zmm0, arg14)
                    
                    float temp0_187[0x8] = _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_fmadd_ps(var_640_1, var_640_1, arg14), var_620_1, 
                            var_620_1), 
                        var_600_1, var_600_1)
                    float temp0_188[0x8] = _mm256_rsqrt_ps(temp0_187)
                    float temp0_189[0x8] = _mm256_mul_ps(temp0_187, temp0_188)
                    float temp0_194[0x8] = _mm256_mul_ps(
                        _mm256_mul_ps(temp0_188, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_188, temp0_189)), 
                        _mm256_broadcast_ss(0.5f))
                    float temp0_195[0x8] = _mm256_rcp_ps(temp0_194)
                    arg5 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), temp0_195, temp0_194)
                    zmm1 = _mm256_blendv_ps(var_660, _mm256_mul_ps(temp0_195, arg5), arg15)
            else
                int32_t var_580_1[0x8] = arg9
                arg9 = arg7
                float temp0_115[0x8] = _mm256_max_ps(temp0_111, arg11)
                float temp0_116[0x8] = _mm256_max_ps(arg16, arg6)
                arg5 = _mm256_max_ps(arg5, zmm4)
                arg16 = _mm256_cmp_ps(temp0_116, temp0_115, 1)
                arg14 = _mm256_and_ps(arg15, arg16)
                
                if (_mm256_movemask_ps(arg14) == 0)
                    arg7 = arg9
                    arg14 = _mm256_andnot_ps(arg16, arg15)
                    
                    if (_mm256_movemask_ps(arg14) != 0)
                    label_140050a1f:
                        arg13 = arg12
                        arg12 = arg10
                        arg10 = zmm4
                        float temp0_130[0x8] = _mm256_cmp_ps(arg5, temp0_116, 1)
                        zmm4 = _mm256_and_ps(arg14, temp0_130)
                        
                        if (_mm256_movemask_ps(zmm4) != 0)
                            arg16 = _mm256_blendv_ps(var_660, temp0_116, zmm4)
                            var_660 = arg16
                        
                        zmm0 = _mm256_andnot_ps(temp0_130, arg14)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_660 = _mm256_blendv_ps(var_660, arg5, zmm0)
                        
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        arg7 = arg9
                        arg9 = var_580_1
                        zmm4 = arg10
                        arg10 = arg12
                        arg12 = arg13
                        arg13 = var_560_1
                        goto label_140050a94
                else
                    float var_480_1[0x8] = zmm4
                    float temp0_121[0x8] = _mm256_cmp_ps(arg5, temp0_115, 1)
                    zmm4 = _mm256_and_ps(arg14, temp0_121)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_660 = _mm256_blendv_ps(var_660, temp0_115, zmm4)
                    
                    zmm4 = _mm256_andnot_ps(temp0_121, arg14)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_660 = _mm256_blendv_ps(var_660, arg5, zmm4)
                    
                    arg12 = arg12
                    arg13 = arg13
                    zmm2 = var_540_1
                    arg10 = var_520_1
                    arg7 = arg9
                    zmm4 = var_480_1
                    arg14 = _mm256_andnot_ps(arg16, arg15)
                    
                    if (_mm256_movemask_ps(arg14) != 0)
                        goto label_140050a1f
                
                arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                arg9 = var_580_1
                arg15 = __vxorps_ymmqq_ymmqq_memqq(arg15, data_142fc9420)
                
                if (_mm256_movemask_ps(arg15) != 0)
                    goto label_140050aa9
                
                zmm1 = var_660
            
            var_660 = zmm1
            zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm1, temp0_9)
            zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, temp0_18, 1)
            result = zx.q(_mm256_movemask_ps(zmm1))
            
            if (result.b != 0)
                arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg8, zmm0, var_400_1)
                arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, zmm0, var_3e0_1)
                arg9 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg9, zmm0, var_3c0_1)
                var_400_1 = _mm256_maskstore_ps(zmm1, arg8)
                var_3e0_1 = _mm256_maskstore_ps(zmm1, arg7)
                var_3c0_1 = _mm256_maskstore_ps(zmm1, arg9)
                zmm0 = _mm256_add_ps(arg12, zmm0)
                arg12 = _mm256_blendv_ps(arg12, zmm0, zmm1)
            
            rsi_1 += 8
            rdi_1 += 0x20
        while (rsi_1 s< rbx_4)
        
        if (rsi_1 s< arg21)
            goto label_140051594
    float temp0_790[0x8] = _mm256_hadd_ps(var_400_1, var_400_1)
    float temp0_791[0x8] = _mm256_hadd_ps(temp0_790, temp0_790)
    float temp0_792[0x8] = _mm256_hadd_ps(var_3e0_1, var_3e0_1)
    float temp0_793[0x8] = _mm256_hadd_ps(temp0_792, temp0_792)
    arg5[0].o = _mm256_extractf128_ps(temp0_791[0].o, 1)
    temp0_791[0].o = temp0_791[0].o f+ arg5[0]
    arg5[0].o = _mm256_extractf128_ps(temp0_793[0].o, 1)
    temp0_793[0].o = temp0_793[0].o f+ arg5[0]
    temp0_791[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_791[0].o, temp0_793[0].o, 0x10)
    float temp0_797[0x8] = _mm256_hadd_ps(var_3c0_1, var_3c0_1)
    zmm1 = _mm256_hadd_ps(temp0_797, temp0_797)
    var_3c0_1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = zmm1[0].o f+ var_3c0_1[0]
    var_3c0_1[0].o = __vmovsd_xmmdq_memq(*arg20)
    var_3c0_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_3c0_1[0].o, arg20[1].d, 0x20)
    temp0_791[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_791[0].o, zmm1[0].o, 0x20)
    temp0_791[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_791[0].o, var_3c0_1[0].o)
    *arg20 = temp0_791[0]
    *(arg20 + 4) = __vextractps_memd_xmmdq_immb(temp0_791[0].o, 1)
    arg20[1].d = __vextractps_memd_xmmdq_immb(temp0_791[0].o, 2)
    zmm0 = _mm256_hadd_ps(arg12, arg12)
float temp0_945[0x8] = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(temp0_945[0].o, 1)
temp0_945[0].o = temp0_945[0].o f+ zmm1[0]
temp0_945[0].o = temp0_945[0].o f+ *arg19
*arg19 = temp0_945[0]
arg7[0].o = var_d8
arg8[0].o = var_c8
arg9[0].o = var_b8
arg10[0].o = var_a8
arg11[0].o = var_98
arg12[0].o = var_88
arg13[0].o = var_78
arg14[0].o = var_68
arg15[0].o = var_58
arg16[0].o = var_48
_mm256_zeroupper()
return result
