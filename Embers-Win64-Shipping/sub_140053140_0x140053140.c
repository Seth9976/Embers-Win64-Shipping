// 函数: sub_140053140
// 地址: 0x140053140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = arg16[0].o
int128_t var_48 = arg15[0].o
int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int128_t var_c8 = arg7[0].o
int256_t* result = arg21
float zmm0[0x8] = *result
float zmm1[0x8]
int32_t zmm2[0x8]
float zmm4[0x8]

if (_mm256_movemask_ps(zmm0) != 0xff)
    arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
    float var_400_1[0x8] = arg15
    float var_420_1[0x8] = arg15
    int32_t rdi_9 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
    float var_440_1[0x8] = arg15
    float var_380_1[0x8] = zmm0
    int32_t rbx_1
    
    if (rdi_9 s<= 0)
        rbx_1 = 0
        
        if (0 s< arg20)
        label_140054461:
            zmm0[0].o = zx.o(rbx_1)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
            zmm0[0].o = zx.o(arg20)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            int32_t temp0_547[0x8] = _mm256_mullo_epi32(zmm1, __vpbroadcastd_ymmqq_memd(3))
            zmm0 = _mm256_cmpgt_epi32(zmm0, zmm1)
            zmm4[0].o = zx.o(0)
            float temp0_549[0x8]
            int32_t temp1_10
            temp0_549, temp1_10 = _mm256_i32gather_ps(zmm4, *(arg4 + (temp0_547[0].q << 2)), zmm0)
            zmm1 = _mm256_mullo_epi32(zmm1, __vpbroadcastd_ymmqq_memd(0xc))
            int32_t temp0_553[0x8] = _mm256_add_epi32(zmm1, __vpbroadcastd_ymmqq_memd(4))
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            float temp0_555[0x8]
            int32_t temp1_11
            temp0_555, temp1_11 = _mm256_i32gather_ps(arg6, *(arg4 + temp0_553[0].q), zmm0)
            arg5 = temp1_11
            zmm1 = _mm256_add_epi32(zmm1, __vpbroadcastd_ymmqq_memd(8))
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_559[0x8]
            int32_t temp1_12
            temp0_559, temp1_12 = _mm256_i32gather_ps(arg5, *(arg4 + zmm1[0].q), zmm0)
            zmm2 = temp1_12
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            int32_t var_180_2[0x8] = zmm2
            float temp0_561[0x8] = _mm256_broadcast_ss(arg3[3])
            float var_5c0_4[0x8] = temp0_561
            float var_5a0_4[0x8] = temp0_561
            float var_580_4[0x8] = temp0_561
            float var_560_4[0x8] = temp0_561
            float temp0_562[0x8] = _mm256_broadcast_ss(arg3[1])
            arg8 = _mm256_broadcast_ss(arg3[2])
            float temp0_564[0x8] = _mm256_broadcast_ss(*arg3)
            zmm2 = _mm256_mul_ps(temp0_561, zmm2)
            arg10 = _mm256_mul_ps(temp0_555, arg8)
            float temp0_567[0x8] = _mm256_mul_ps(temp0_559, temp0_564)
            float temp0_568[0x8] = _mm256_mul_ps(temp0_549, temp0_562)
            arg10 = _mm256_fmsub_ps(arg10, temp0_562, temp0_559)
            float temp0_570[0x8] = _mm256_fmsub_ps(temp0_567, arg8, temp0_549)
            float temp0_571[0x8] = _mm256_fmsub_ps(temp0_568, temp0_564, temp0_555)
            float temp0_572[0x8] = _mm256_sub_ps(zmm2, zmm2)
            float temp0_573[0x8] = _mm256_add_ps(arg10, arg10)
            zmm2 = _mm256_add_ps(temp0_570, temp0_570)
            arg6 = _mm256_add_ps(temp0_571, temp0_571)
            float temp0_576[0x8] = _mm256_add_ps(temp0_572, temp0_572)
            float var_4c0_4[0x8] = temp0_573
            int32_t var_4a0_4[0x8] = zmm2
            float var_480_4[0x8] = arg6
            float var_460_4[0x8] = temp0_576
            float temp0_577[0x8] = _mm256_fmadd_ps(temp0_549, temp0_561, temp0_573)
            arg8 = _mm256_fmadd_ps(temp0_555, temp0_561, zmm2)
            float temp0_579[0x8] = _mm256_fmadd_ps(temp0_559, temp0_561, arg6)
            float var_160_2[0x8] = temp0_577
            int32_t var_140_2[0x8] = arg8
            float var_120_2[0x8] = temp0_579
            float var_100_2[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_576, temp0_561, var_180_2)
            float temp0_581[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_582[0x8] = _mm256_broadcast_ss(arg3[2])
            arg10 = _mm256_broadcast_ss(*arg3)
            float temp0_584[0x8] = _mm256_mul_ps(zmm2, temp0_582)
            float temp0_585[0x8] = _mm256_mul_ps(arg6, arg10)
            float temp0_586[0x8] = _mm256_mul_ps(temp0_573, temp0_581)
            float temp0_587[0x8] = _mm256_fmsub_ps(temp0_584, arg6, temp0_581)
            float temp0_588[0x8] = _mm256_fmsub_ps(temp0_585, temp0_573, temp0_582)
            float temp0_589[0x8] = _mm256_fmsub_ps(temp0_586, zmm2, arg10)
            float temp0_590[0x8] = _mm256_add_ps(temp0_577, temp0_587)
            zmm2 = _mm256_add_ps(arg8, temp0_588)
            float temp0_592[0x8] = _mm256_add_ps(temp0_579, temp0_589)
            float temp0_594[0x8] = _mm256_add_ps(temp0_590, _mm256_broadcast_ss(arg3[4]))
            arg16 = _mm256_add_ps(zmm2, _mm256_broadcast_ss(arg3[5]))
            arg8 = _mm256_broadcast_ss(arg3[6])
            zmm2 = _mm256_broadcast_ss(*arg2)
            float temp0_599[0x8] = _mm256_broadcast_ss(arg2[1])
            float temp0_600[0x8] = _mm256_broadcast_ss(arg2[2])
            float temp0_601[0x8] = _mm256_broadcast_ss(*arg1)
            arg13 = _mm256_broadcast_ss(arg1[1])
            arg14 = _mm256_broadcast_ss(arg1[2])
            arg11 = _mm256_and_ps(_mm256_cmp_ps(temp0_594, zmm2, 6), zmm0)
            arg5 = _mm256_cmpeq_epi32(arg11, zmm0)
            char temp0_607 = _mm256_movemask_ps(arg5)
            arg10 = _mm256_cmp_ps(temp0_594, zmm2, 2)
            
            if (temp0_607 != 0xff)
                float temp0_609[0x8] = _mm256_cmp_ps(arg16, temp0_599, 2)
                arg5[0].o = _mm256_extractf128_ps(temp0_609[0].o, 1)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_609[0].o, arg5[0].o)
                arg10 = _mm256_and_ps(arg10, zmm0)
                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
                arg5[0].o &= arg6[0].o
                arg10 = _mm256_cvtepi16_epi32(arg5[0].o)
                arg11 = arg10 & not.32(zmm0)
            
            float temp0_616[0x8] = _mm256_add_ps(temp0_592, arg8)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, zmm0)) != 0xff)
                arg10 = _mm256_and_ps(_mm256_cmp_ps(temp0_616, temp0_600, 2), arg10 & zmm0)
                arg11 = _mm256_xor_ps(arg10, zmm0)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, zmm0)) == 0xff)
                arg11 = arg15
            else
                int32_t temp0_624[0x8] = _mm256_and_ps(arg10, zmm0)
                arg10 = _mm256_cmp_ps(temp0_601, temp0_594, 2)
                arg11 = _mm256_and_ps(temp0_624, _mm256_cmp_ps(temp0_601, temp0_594, 6))
                
                if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, temp0_624)) != 0xff)
                    float temp0_630[0x8] = _mm256_cmp_ps(arg13, arg16, 2)
                    arg6 = _mm256_and_ps(temp0_624, arg10)
                    arg10 = _mm256_and_ps(temp0_630, arg6)
                    arg11 = _mm256_xor_ps(arg10, temp0_624)
                
                if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, temp0_624)) != 0xff)
                    float temp0_636[0x8] = _mm256_cmp_ps(arg14, temp0_616, 2)
                    arg6 = _mm256_and_ps(arg10, temp0_624)
                    arg10 = _mm256_and_ps(temp0_636, arg6)
                
                arg11 = arg15
                arg10 = _mm256_and_ps(arg10, temp0_624)
            
            zmm2 = _mm256_sub_ps(temp0_594, zmm2)
            arg8 = _mm256_sub_ps(arg16, temp0_599)
            float temp0_644[0x8] = _mm256_sub_ps(temp0_616, temp0_600)
            arg12 = _mm256_sub_ps(temp0_601, temp0_594)
            arg9 = _mm256_sub_ps(arg13, arg16)
            arg7 = _mm256_sub_ps(arg14, temp0_616)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg10, zmm0)) == 0)
                arg15 = arg11
                arg5 = _mm256_andnot_ps(arg10, zmm0)
                
                if (_mm256_movemask_ps(arg5) != 0)
                label_140054c08:
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    arg10 = _mm256_xor_ps(arg10, arg5)
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    arg13 = _mm256_cmp_ps(arg5, zmm2, 1)
                    arg14 = _mm256_and_ps(arg13, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg14, zmm0)) != 0)
                        var_5c0_4 = _mm256_maskstore_ps(arg14, zmm2)
                    
                    zmm2 = _mm256_andnot_ps(arg13, arg10)
                    arg5 = _mm256_and_ps(zmm2, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg13 = _mm256_cmp_ps(arg5, arg12, 1)
                        arg14 = _mm256_and_ps(zmm2, arg13)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg14, zmm0)) != 0)
                            var_5c0_4 = _mm256_maskstore_ps(arg14, 
                                _mm256_xor_ps(arg12, _mm256_broadcast_ss(-0f)))
                        
                        zmm2 = _mm256_andnot_ps(arg13, zmm2)
                        arg5 = _mm256_and_ps(zmm2, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_5c0_4 = _mm256_maskstore_ps(zmm2, arg5)
                    
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    zmm2 = _mm256_cmp_ps(zmm2, arg8, 1)
                    arg12 = _mm256_and_ps(zmm2, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm0)) != 0)
                        var_5a0_4 = _mm256_maskstore_ps(arg12, arg8)
                    
                    zmm2 = _mm256_andnot_ps(zmm2, arg10)
                    arg5 = _mm256_and_ps(zmm2, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg11 = _mm256_cmp_ps(arg5, arg9, 1)
                        arg12 = _mm256_and_ps(zmm2, arg11)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm0)) != 0)
                            var_5a0_4 = _mm256_maskstore_ps(arg12, 
                                _mm256_xor_ps(arg9, _mm256_broadcast_ss(-0f)))
                        
                        zmm2 = _mm256_andnot_ps(arg11, zmm2)
                        arg5 = _mm256_and_ps(zmm2, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_5a0_4 = _mm256_maskstore_ps(zmm2, arg5)
                    
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    arg8 = temp0_644
                    zmm2 = _mm256_cmp_ps(zmm2, arg8, 1)
                    arg9 = _mm256_and_ps(zmm2, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm0)) != 0)
                        var_580_4 = _mm256_maskstore_ps(arg9, arg8)
                    
                    zmm2 = _mm256_andnot_ps(zmm2, arg10)
                    arg5 = _mm256_and_ps(zmm2, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg8 = _mm256_cmp_ps(arg5, arg7, 1)
                        arg9 = _mm256_and_ps(zmm2, arg8)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm0)) != 0)
                            var_580_4 = _mm256_maskstore_ps(arg9, 
                                _mm256_xor_ps(arg7, _mm256_broadcast_ss(-0f)))
                        
                        zmm2 = _mm256_andnot_ps(arg8, zmm2)
                        arg5 = _mm256_and_ps(zmm2, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_580_4 = _mm256_maskstore_ps(zmm2, arg5)
                    
                    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                    arg8 = var_580_4
                    float temp0_884[0x8] = _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_fmadd_ps(var_5c0_4, var_5c0_4, zmm2), var_5a0_4, 
                            var_5a0_4), 
                        arg8, arg8)
                    zmm2 = _mm256_rsqrt_ps(temp0_884)
                    float temp0_886[0x8] = _mm256_mul_ps(temp0_884, zmm2)
                    zmm2 = _mm256_mul_ps(
                        _mm256_mul_ps(zmm2, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), zmm2, temp0_886)), 
                        _mm256_broadcast_ss(0.5f))
                    float temp0_892[0x8] = _mm256_rcp_ps(zmm2)
                    arg7 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), temp0_892, zmm2)
                    zmm2 = _mm256_mul_ps(temp0_892, arg7)
                    arg6 = _mm256_blendv_ps(arg6, zmm2, arg10)
            else
                arg5 = arg9
                arg9 = arg16
                arg6 = _mm256_max_ps(arg12, zmm2)
                arg14 = _mm256_max_ps(arg5, arg8)
                arg13 = _mm256_max_ps(arg7, temp0_644)
                float temp0_653[0x8] = _mm256_cmp_ps(arg14, arg6, 1)
                arg16 = _mm256_and_ps(arg10, temp0_653)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg16, zmm0)) != 0)
                    arg16 = _mm256_and_ps(_mm256_cmp_ps(arg13, arg6, 5), arg16)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg16, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg13, arg16)
                
                arg16 = arg9
                arg15 = _mm256_andnot_ps(temp0_653, arg10)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg15, zmm0)) == 0)
                    arg15 = arg11
                else
                    float var_540_4[0x8] = arg7
                    float temp0_800[0x8] = _mm256_cmp_ps(arg13, arg14, 1)
                    arg7 = _mm256_and_ps(arg15, temp0_800)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg14, arg7)
                    
                    arg7 = _mm256_andnot_ps(temp0_800, arg15)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg13, arg7)
                    
                    arg15 = arg11
                    arg16 = arg9
                    arg7 = var_540_4
                
                arg9 = arg5
                arg5 = _mm256_andnot_ps(arg10, zmm0)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    goto label_140054c08
            
            zmm2[0].o = arg17
            zmm2 = _mm256_sub_ps(arg6, _mm256_broadcastss_ps(zmm2[0].o))
            arg5 = _mm256_cmp_ps(zmm2, _mm256_broadcast_ss(-9.99999975e-05f), 1)
            zmm0 = _mm256_and_ps(arg5, zmm0)
            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            result = zx.q(__vpmovmskb_gpr32d_xmmdq(arg5[0].o))
            
            if (result.b != 0)
                float temp0_906[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_594, zmm2, var_440_1)
                arg16 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg16, zmm2, var_420_1)
                float temp0_908[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_616, zmm2, var_400_1)
                var_440_1 = _mm256_maskstore_ps(zmm0, temp0_906)
                var_420_1 = _mm256_maskstore_ps(zmm0, arg16)
                var_400_1 = _mm256_maskstore_ps(zmm0, temp0_908)
                zmm0 = _mm256_add_ps(arg15, zmm2)
                arg15 = _mm256_blendv_ps(arg15, zmm0, _mm256_cvtepi16_epi32(arg6[0].o))
    else
        float temp0_215[0x8] = _mm256_broadcast_ss(arg3[3])
        temp0_215[0].o = *arg3
        zmm1[0].o = arg3[1]
        zmm2[0].o = arg3[2]
        arg10 = _mm256_broadcast_ss(*arg2)
        float temp0_217[0x8] = _mm256_broadcast_ss(arg2[1])
        float temp0_218[0x8] = _mm256_broadcast_ss(arg2[2])
        float temp0_219[0x8] = _mm256_broadcast_ss(*arg1)
        float temp0_220[0x8] = _mm256_broadcast_ss(arg1[1])
        float temp0_221[0x8] = _mm256_broadcast_ss(arg1[2])
        zmm4[0].o = zx.o(arg17)
        float var_2c0_2[0x8] = _mm256_broadcastd_epi32(zmm4[0])
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        rbx_1 = 0
        int32_t var_2e0_2[0x4] = _mm256_broadcast_ss(1.68155816e-44f)[0].o
        float temp0_225[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
        float temp0_226[0x8] = _mm256_broadcastss_ps(zmm2[0].o)
        float temp0_227[0x8] = _mm256_broadcastss_ps(temp0_215[0].o)
        zmm0 = _mm256_broadcast_ss(-9.99999975e-05f)
        float var_360_2[0x8] = zmm0
        arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
        
        do
            zmm0[0].o = zx.o(rbx_1)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm0[0].o, var_2e0_2)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93c0)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm4 = _mm256_cmpeq_epi32(zmm4, zmm4)
            float temp0_235[0x8]
            int32_t temp1_4
            temp0_235, temp1_4 = _mm256_i32gather_ps(zmm2, *(arg4 + zmm1[0].q), zmm4)
            zmm2 = temp0_235
            zmm4 = temp1_4
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93e0)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            float temp0_239[0x8]
            int32_t temp1_5
            temp0_239, temp1_5 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm1[0].q), arg6)
            arg6 = temp1_5
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc9400)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            float temp0_243[0x8]
            int32_t temp1_6
            temp0_243, temp1_6 = _mm256_i32gather_ps(zmm1, *(arg4 + zmm0[0].q), arg6)
            int32_t var_4c0_2[0x8] = zmm2
            float var_460_2[0x8] = arg14
            float temp0_244[0x8] = _mm256_mul_ps(temp0_239, temp0_226)
            float temp0_245[0x8] = _mm256_mul_ps(temp0_243, temp0_227)
            arg8 = temp0_225
            float temp0_246[0x8] = _mm256_mul_ps(zmm2, arg8)
            float temp0_247[0x8] = _mm256_fmsub_ps(temp0_243, arg8, temp0_244)
            zmm2 = _mm256_fmsub_ps(zmm2, temp0_226, temp0_245)
            float temp0_249[0x8] = _mm256_fmsub_ps(temp0_239, temp0_227, temp0_246)
            float temp0_250[0x8] = _mm256_add_ps(temp0_247, temp0_247)
            float temp0_251[0x8] = _mm256_add_ps(zmm2, zmm2)
            zmm2 = _mm256_add_ps(temp0_249, temp0_249)
            float temp0_253[0x8] = _mm256_fmadd_ps(temp0_243, temp0_215, zmm2)
            float temp0_254[0x8] = _mm256_mul_ps(temp0_251, temp0_226)
            float temp0_255[0x8] = _mm256_mul_ps(zmm2, temp0_227)
            zmm2 = _mm256_fmsub_ps(zmm2, arg8, temp0_254)
            zmm2 = _mm256_add_ps(_mm256_fmadd_ps(var_4c0_2, temp0_215, temp0_250), zmm2)
            float temp0_259[0x8] = _mm256_mul_ps(temp0_250, arg8)
            float temp0_260[0x8] = _mm256_fmsub_ps(temp0_250, temp0_226, temp0_255)
            float temp0_262[0x8] =
                _mm256_add_ps(_mm256_fmadd_ps(temp0_239, temp0_215, temp0_251), temp0_260)
            float temp0_264[0x8] =
                _mm256_add_ps(temp0_253, _mm256_fmsub_ps(temp0_251, temp0_227, temp0_259))
            arg6 = _mm256_add_ps(zmm2, _mm256_broadcast_ss(arg3[4]))
            zmm2 = _mm256_broadcast_ss(arg3[5])
            arg7 = _mm256_add_ps(temp0_262, zmm2)
            arg9 = _mm256_add_ps(temp0_264, _mm256_broadcast_ss(arg3[6]))
            float temp0_271[0x8] = _mm256_cmp_ps(arg6, arg10, 6)
            temp0_264[0].o = _mm256_extractf128_ps(temp0_271[0].o, 1)
            temp0_271[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_271[0].o, temp0_264[0].o)
            float var_5c0_2[0x8] = temp0_215
            float var_5a0_2[0x8] = temp0_215
            float var_580_2[0x8] = temp0_215
            float var_560_2[0x8] = temp0_215
            temp0_271[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_271[0].o, temp0_271[0].o)
            char temp0_275 = __vpmovmskb_gpr32d_xmmdq(temp0_271[0].o)
            zmm0 = _mm256_cmp_ps(arg6, arg10, 2)
            
            if (temp0_275 == 0xff)
                temp0_264[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_264[0].o)
                arg5 = arg16
                arg11 = _mm256_srai_epi32(
                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
            else
                float temp0_278[0x8] = _mm256_cmp_ps(arg7, _mm256_broadcast_ss(arg2[1]), 2)
                zmm0 = _mm256_and_ps(temp0_278, zmm0)
                temp0_278[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_278[0].o)
                temp0_215[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(temp0_215[0].o, temp0_215[0].o)
                temp0_278[0].o = zmm0[0].o ^ temp0_215[0].o
                temp0_278[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_278[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(temp0_278[0].o) == 0xff)
                    arg5 = arg16
                    arg11 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                else
                    float temp0_286[0x8] = _mm256_cmp_ps(arg9, _mm256_broadcast_ss(arg2[2]), 2)
                    zmm2[0].o = _mm256_extractf128_ps(temp0_286[0].o, 1)
                    temp0_286[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_286[0].o, zmm2[0].o)
                    zmm0[0].o &= temp0_286[0].o
                    temp0_286[0].o = zmm0[0].o ^ temp0_215[0].o
                    temp0_286[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_286[0].o, zmm0[0].o)
                    char temp0_290 = __vpmovmskb_gpr32d_xmmdq(temp0_286[0].o)
                    arg11 = _mm256_cvtepi16_epi32(zmm0[0].o)
                    
                    if (temp0_290 == 0xff)
                        arg5 = arg16
                    else
                        zmm2 = _mm256_broadcast_ss(*arg1)
                        zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm2, arg6, 6), arg11)
                        zmm4 = _mm256_cmpeq_epi32(zmm1, arg11)
                        
                        if (_mm256_movemask_ps(zmm4) == 0xff)
                            zmm0 = _mm256_cmp_ps(zmm2, arg6, 2)
                        else
                            float temp0_297[0x8] = _mm256_cmp_ps(zmm2, arg6, 2)
                            zmm2[0].o = _mm256_extractf128_ps(temp0_297[0].o, 1)
                            temp0_297[0].o =
                                __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_297[0].o, zmm2[0].o)
                            zmm2 = _mm256_cmp_ps(_mm256_broadcast_ss(arg1[1]), arg7, 2)
                            zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
                            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
                            zmm0[0].o &= temp0_297[0].o
                            zmm0[0].o &= zmm2[0].o
                            zmm0 = _mm256_cvtepi16_epi32(zmm0[0].o)
                            zmm1 = zmm0 & not.32(arg11)
                        
                        arg5 = arg16
                        
                        if (_mm256_movemask_ps(_mm256_cmpeq_epi32(zmm1, arg11)) != 0xff)
                            zmm0 = _mm256_and_ps(
                                _mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg9, 2), zmm0 & arg11)
                        
                        arg11 = _mm256_and_ps(zmm0, arg11)
            
            arg12 = _mm256_sub_ps(arg6, arg10)
            arg8 = __vsubps_ymmqq_ymmqq_memqq(arg7, temp0_217)
            zmm4 = __vsubps_ymmqq_ymmqq_memqq(arg9, temp0_218)
            zmm2 = _mm256_sub_ps(temp0_219, arg6)
            arg13 = _mm256_sub_ps(temp0_220, arg7)
            float temp0_322[0x8] = _mm256_sub_ps(temp0_221, arg9)
            float var_500_2[0x8] = arg13
            
            if (_mm256_movemask_ps(arg11) == 0)
            label_140053ec9:
                arg11 = __vxorps_ymmqq_ymmqq_memqq(arg11, data_142fc9420)
                
                if (_mm256_movemask_ps(arg11) != 0)
                label_140053ede:
                    float temp0_355[0x8] = _mm256_cmp_ps(arg14, arg12, 1)
                    zmm1 = _mm256_and_ps(temp0_355, arg11)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_5c0_2 = _mm256_maskstore_ps(zmm1, arg12)
                    
                    zmm0 = _mm256_andnot_ps(temp0_355, arg11)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        arg16 = zmm4
                        float temp0_361[0x8] = _mm256_cmp_ps(arg14, zmm2, 1)
                        zmm4 = _mm256_and_ps(zmm0, temp0_361)
                        
                        if (_mm256_movemask_ps(zmm4) != 0)
                            arg12 = arg7
                            arg7 = arg12
                            var_5c0_2 = _mm256_maskstore_ps(zmm4, 
                                _mm256_xor_ps(zmm2, _mm256_broadcast_ss(-0f)))
                        
                        zmm0 = _mm256_andnot_ps(temp0_361, zmm0)
                        zmm4 = arg16
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_5c0_2 = _mm256_maskstore_ps(zmm0, arg14)
                    
                    float temp0_370[0x8] = _mm256_cmp_ps(arg14, arg8, 1)
                    zmm1 = _mm256_and_ps(temp0_370, arg11)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_5a0_2 = _mm256_maskstore_ps(zmm1, arg8)
                    
                    zmm0 = _mm256_andnot_ps(temp0_370, arg11)
                    arg8 = temp0_322
                    arg13 = var_500_2
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        float temp0_376[0x8] = _mm256_cmp_ps(arg14, arg13, 1)
                        int32_t temp0_377[0x8] = _mm256_and_ps(zmm0, temp0_376)
                        
                        if (_mm256_movemask_ps(temp0_377) != 0)
                            arg12 = zmm4
                            var_5a0_2 = _mm256_maskstore_ps(temp0_377, 
                                _mm256_xor_ps(arg13, _mm256_broadcast_ss(-0f)))
                            zmm4 = arg12
                        
                        zmm0 = _mm256_andnot_ps(temp0_376, zmm0)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_5a0_2 = _mm256_maskstore_ps(zmm0, arg14)
                    
                    float temp0_385[0x8] = _mm256_cmp_ps(arg14, zmm4, 1)
                    zmm1 = _mm256_and_ps(temp0_385, arg11)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_580_2 = _mm256_maskstore_ps(zmm1, zmm4)
                    
                    zmm0 = _mm256_andnot_ps(temp0_385, arg11)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        float temp0_391[0x8] = _mm256_cmp_ps(arg14, arg8, 1)
                        int32_t temp0_392[0x8] = _mm256_and_ps(zmm0, temp0_391)
                        
                        if (_mm256_movemask_ps(temp0_392) != 0)
                            zmm4 = _mm256_xor_ps(arg8, _mm256_broadcast_ss(-0f))
                            var_580_2 = _mm256_maskstore_ps(temp0_392, zmm4)
                        
                        zmm0 = _mm256_andnot_ps(temp0_391, zmm0)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_580_2 = _mm256_maskstore_ps(zmm0, arg14)
                    
                    zmm2 = var_580_2
                    float temp0_402[0x8] = _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_fmadd_ps(var_5c0_2, var_5c0_2, arg14), var_5a0_2, 
                            var_5a0_2), 
                        zmm2, zmm2)
                    float temp0_403[0x8] = _mm256_rsqrt_ps(temp0_402)
                    float temp0_404[0x8] = _mm256_mul_ps(temp0_402, temp0_403)
                    float temp0_409[0x8] = _mm256_mul_ps(
                        _mm256_mul_ps(temp0_403, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_403, temp0_404)), 
                        _mm256_broadcast_ss(0.5f))
                    float temp0_410[0x8] = _mm256_rcp_ps(temp0_409)
                    zmm2 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), temp0_410, temp0_409)
                    arg5 = _mm256_blendv_ps(arg5, _mm256_mul_ps(temp0_410, zmm2), arg11)
            else
                arg5 = arg10
                arg10 = arg15
                float temp0_324[0x8] = _mm256_max_ps(zmm2, arg12)
                float temp0_325[0x8] = _mm256_max_ps(arg13, arg8)
                float temp0_326[0x8] = _mm256_max_ps(temp0_322, zmm4)
                float temp0_327[0x8] = _mm256_cmp_ps(temp0_325, temp0_324, 1)
                arg14 = _mm256_and_ps(arg11, temp0_327)
                
                if (_mm256_movemask_ps(arg14) == 0)
                    arg15 = arg10
                    arg10 = arg5
                    arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    arg5 = arg16
                    zmm1 = _mm256_andnot_ps(temp0_327, arg11)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                    label_140053e85:
                        float temp0_346[0x8] = _mm256_cmp_ps(temp0_326, temp0_325, 1)
                        arg13 = _mm256_and_ps(zmm1, temp0_346)
                        
                        if (_mm256_movemask_ps(arg13) != 0)
                            arg5 = _mm256_blendv_ps(arg5, temp0_325, arg13)
                        
                        zmm0 = _mm256_andnot_ps(temp0_346, zmm1)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            arg5 = _mm256_blendv_ps(arg5, temp0_326, zmm0)
                        
                        arg9 = arg9
                        arg7 = arg7
                        zmm4 = zmm4
                        goto label_140053ec9
                else
                    float var_4e0_2[0x8] = arg7
                    arg7 = arg9
                    float temp0_330[0x8] = _mm256_cmp_ps(temp0_326, temp0_324, 1)
                    arg13 = _mm256_and_ps(arg14, temp0_330)
                    
                    if (_mm256_movemask_ps(arg13) != 0)
                        arg16 = _mm256_blendv_ps(arg16, temp0_324, arg13)
                    
                    arg15 = arg10
                    arg10 = arg5
                    arg9 = _mm256_andnot_ps(temp0_330, arg14)
                    
                    if (_mm256_movemask_ps(arg9) == 0)
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                        arg5 = arg16
                    else
                        arg5 = _mm256_blendv_ps(arg16, temp0_326, arg9)
                        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                    
                    arg9 = arg7
                    arg7 = var_4e0_2
                    zmm1 = _mm256_andnot_ps(temp0_327, arg11)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        goto label_140053e85
                
                zmm4 = zmm4
                arg11 = __vxorps_ymmqq_ymmqq_memqq(arg11, data_142fc9420)
                
                if (_mm256_movemask_ps(arg11) != 0)
                    goto label_140053ede
            
            zmm0 = __vsubps_ymmqq_ymmqq_memqq(arg5, var_2c0_2)
            float temp0_416[0x8] = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, var_360_2, 1)
            result = zx.q(_mm256_movemask_ps(temp0_416))
            
            if (result.b != 0)
                arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, zmm0, var_440_1)
                arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, zmm0, var_420_1)
                arg9 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg9, zmm0, var_400_1)
                var_440_1 = _mm256_maskstore_ps(temp0_416, arg6)
                var_420_1 = _mm256_maskstore_ps(temp0_416, arg7)
                var_400_1 = _mm256_maskstore_ps(temp0_416, arg9)
                zmm0 = _mm256_add_ps(arg15, zmm0)
                arg15 = _mm256_blendv_ps(arg15, zmm0, temp0_416)
            
            arg16 = arg5
            rbx_1 += 8
        while (rbx_1 s< rdi_9)
        
        if (rbx_1 s< arg20)
            goto label_140054461
    zmm0[0].o = zx.o(0)
    zmm0 = _mm256_cmpeq_epi32(var_380_1, zmm0)
    zmm1 = zmm0 & not.32(var_440_1)
    float temp0_916[0x8] = _mm256_hadd_ps(zmm1, zmm1)
    zmm1 = _mm256_hadd_ps(temp0_916, temp0_916)
    zmm2 = zmm0 & not.32(var_420_1)
    arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm2 = _mm256_hadd_ps(zmm2, zmm2)
    zmm1[0].o = zmm1[0].o f+ arg5[0]
    zmm2 = _mm256_hadd_ps(zmm2, zmm2)
    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    zmm2[0].o = zmm2[0].o f+ arg5[0]
    arg5 = zmm0 & not.32(var_400_1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x10)
    zmm2 = _mm256_hadd_ps(arg5, arg5)
    zmm2 = _mm256_hadd_ps(zmm2, zmm2)
    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    zmm2[0].o = zmm2[0].o f+ arg5[0]
    arg5[0].o = __vmovsd_xmmdq_memq(*arg19)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, arg19[1].d, 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x20)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
    *arg19 = zmm1[0]
    *(arg19 + 4) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
    arg19[1].d = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
    zmm0 &= not.32(arg15)
    zmm0 = _mm256_hadd_ps(zmm0, zmm0)
else
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    float var_3a0_1[0x8] = arg12
    float var_3c0_1[0x8] = arg12
    int32_t rdi_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
    float var_3e0_1[0x8] = arg12
    int32_t rbx
    
    if (rdi_4 s<= 0)
        rbx = 0
        
        if (0 s< arg20)
        label_14005410d:
            float var_520_3[0x8] = arg12
            zmm0[0].o = zx.o(rbx)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
            zmm0[0].o = zx.o(arg20)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            int32_t temp0_430[0x8] = _mm256_mullo_epi32(zmm1, __vpbroadcastd_ymmqq_memd(3))
            zmm0 = _mm256_cmpgt_epi32(zmm0, zmm1)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float temp0_433[0x8]
            int32_t temp1_7
            temp0_433, temp1_7 = _mm256_i32gather_ps(arg5, *(arg4 + (temp0_430[0].q << 2)), zmm0)
            zmm4 = temp1_7
            zmm1 = _mm256_mullo_epi32(zmm1, __vpbroadcastd_ymmqq_memd(0xc))
            int32_t temp0_437[0x8] = _mm256_add_epi32(zmm1, __vpbroadcastd_ymmqq_memd(4))
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            float temp0_439[0x8]
            int32_t temp1_8
            temp0_439, temp1_8 = _mm256_i32gather_ps(zmm4, *(arg4 + temp0_437[0].q), zmm0)
            zmm2 = __vpbroadcastd_ymmqq_memd(8)
            zmm1 = _mm256_add_epi32(zmm1, zmm2)
            zmm2[0].o = zx.o(0)
            float temp0_442[0x8]
            int32_t temp1_9
            temp0_442, temp1_9 = _mm256_i32gather_ps(zmm2, *(arg4 + zmm1[0].q), zmm0)
            zmm2 = temp0_442
            arg6 = temp1_9
            int32_t var_1a0_1[0x8] = zmm2
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            float var_180_1[0x8] = arg6
            float temp0_444[0x8] = _mm256_broadcast_ss(arg3[3])
            float var_5c0_3[0x8] = temp0_444
            float var_5a0_3[0x8] = temp0_444
            float var_580_3[0x8] = temp0_444
            float var_560_3[0x8] = temp0_444
            float temp0_445[0x8] = _mm256_broadcast_ss(arg3[1])
            arg8 = _mm256_broadcast_ss(arg3[2])
            float temp0_447[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_448[0x8] = _mm256_mul_ps(temp0_444, arg6)
            arg10 = _mm256_mul_ps(temp0_439, arg8)
            float temp0_450[0x8] = _mm256_mul_ps(zmm2, temp0_447)
            float temp0_451[0x8] = _mm256_mul_ps(temp0_433, temp0_445)
            arg10 = _mm256_fmsub_ps(arg10, temp0_445, zmm2)
            float temp0_453[0x8] = _mm256_fmsub_ps(temp0_450, arg8, temp0_433)
            float temp0_454[0x8] = _mm256_fmsub_ps(temp0_451, temp0_447, temp0_439)
            float temp0_455[0x8] = _mm256_sub_ps(temp0_448, temp0_448)
            float temp0_456[0x8] = _mm256_add_ps(arg10, arg10)
            zmm2 = _mm256_add_ps(temp0_453, temp0_453)
            arg6 = _mm256_add_ps(temp0_454, temp0_454)
            float temp0_459[0x8] = _mm256_add_ps(temp0_455, temp0_455)
            float var_4c0_3[0x8] = temp0_456
            int32_t var_4a0_3[0x8] = zmm2
            float var_480_3[0x8] = arg6
            float var_460_3[0x8] = temp0_459
            float temp0_460[0x8] = _mm256_fmadd_ps(temp0_433, temp0_444, temp0_456)
            arg8 = _mm256_fmadd_ps(temp0_439, temp0_444, zmm2)
            float temp0_462[0x8] = _mm256_fmadd_ps(var_1a0_1, temp0_444, arg6)
            float var_160_1[0x8] = temp0_460
            int32_t var_140_1[0x8] = arg8
            float var_120_1[0x8] = temp0_462
            float var_100_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_459, temp0_444, var_180_1)
            float temp0_464[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_465[0x8] = _mm256_broadcast_ss(arg3[2])
            arg10 = _mm256_broadcast_ss(*arg3)
            float temp0_467[0x8] = _mm256_mul_ps(zmm2, temp0_465)
            float temp0_468[0x8] = _mm256_mul_ps(arg6, arg10)
            float temp0_469[0x8] = _mm256_mul_ps(temp0_456, temp0_464)
            float temp0_470[0x8] = _mm256_fmsub_ps(temp0_467, arg6, temp0_464)
            float temp0_471[0x8] = _mm256_fmsub_ps(temp0_468, temp0_456, temp0_465)
            float temp0_472[0x8] = _mm256_fmsub_ps(temp0_469, zmm2, arg10)
            float temp0_473[0x8] = _mm256_add_ps(temp0_460, temp0_470)
            float temp0_474[0x8] = _mm256_add_ps(arg8, temp0_471)
            float temp0_475[0x8] = _mm256_add_ps(temp0_462, temp0_472)
            zmm2 = _mm256_add_ps(temp0_473, _mm256_broadcast_ss(arg3[4]))
            arg15 = _mm256_add_ps(temp0_474, _mm256_broadcast_ss(arg3[5]))
            arg8 = _mm256_broadcast_ss(arg3[6])
            float temp0_481[0x8] = _mm256_broadcast_ss(*arg2)
            float temp0_482[0x8] = _mm256_broadcast_ss(arg2[1])
            float temp0_483[0x8] = _mm256_broadcast_ss(arg2[2])
            float temp0_484[0x8] = _mm256_broadcast_ss(*arg1)
            arg13 = _mm256_broadcast_ss(arg1[1])
            arg14 = _mm256_broadcast_ss(arg1[2])
            arg11 = _mm256_and_ps(_mm256_cmp_ps(zmm2, temp0_481, 6), zmm0)
            arg5 = _mm256_cmpeq_epi32(arg11, zmm0)
            char temp0_490 = _mm256_movemask_ps(arg5)
            arg10 = _mm256_cmp_ps(zmm2, temp0_481, 2)
            
            if (temp0_490 != 0xff)
                float temp0_492[0x8] = _mm256_cmp_ps(arg15, temp0_482, 2)
                arg5[0].o = _mm256_extractf128_ps(temp0_492[0].o, 1)
                arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_492[0].o, arg5[0].o)
                arg10 = _mm256_and_ps(arg10, zmm0)
                arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
                arg5[0].o &= arg6[0].o
                arg10 = _mm256_cvtepi16_epi32(arg5[0].o)
                arg11 = arg10 & not.32(zmm0)
            
            float temp0_499[0x8] = _mm256_add_ps(temp0_475, arg8)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, zmm0)) != 0xff)
                arg10 = _mm256_and_ps(_mm256_cmp_ps(temp0_499, temp0_483, 2), arg10 & zmm0)
                arg11 = _mm256_xor_ps(arg10, zmm0)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, zmm0)) != 0xff)
                int32_t temp0_507[0x8] = _mm256_and_ps(arg10, zmm0)
                arg10 = _mm256_cmp_ps(temp0_484, zmm2, 2)
                arg11 = _mm256_and_ps(temp0_507, _mm256_cmp_ps(temp0_484, zmm2, 6))
                
                if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, temp0_507)) != 0xff)
                    float temp0_513[0x8] = _mm256_cmp_ps(arg13, arg15, 2)
                    arg6 = _mm256_and_ps(temp0_507, arg10)
                    arg10 = _mm256_and_ps(temp0_513, arg6)
                    arg11 = _mm256_xor_ps(arg10, temp0_507)
                
                if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, temp0_507)) != 0xff)
                    float temp0_519[0x8] = _mm256_cmp_ps(arg14, temp0_499, 2)
                    arg6 = _mm256_and_ps(arg10, temp0_507)
                    arg10 = _mm256_and_ps(temp0_519, arg6)
                
                arg10 = _mm256_and_ps(arg10, temp0_507)
            
            zmm1 = _mm256_sub_ps(zmm2, temp0_481)
            arg11 = _mm256_sub_ps(arg15, temp0_482)
            arg8 = _mm256_sub_ps(temp0_499, temp0_483)
            float temp0_526[0x8] = _mm256_sub_ps(temp0_484, zmm2)
            arg9 = _mm256_sub_ps(arg13, arg15)
            arg7 = _mm256_sub_ps(arg14, temp0_499)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg10, zmm0)) == 0)
                arg5 = _mm256_andnot_ps(arg10, zmm0)
                
                if (_mm256_movemask_ps(arg5) != 0)
                label_140054877:
                    arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                    arg10 = _mm256_xor_ps(arg10, arg5)
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    arg13 = _mm256_cmp_ps(arg5, zmm1, 1)
                    arg14 = _mm256_and_ps(arg13, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg14, zmm0)) != 0)
                        var_5c0_3 = _mm256_maskstore_ps(arg14, zmm1)
                    
                    zmm1 = _mm256_andnot_ps(arg13, arg10)
                    arg5 = _mm256_and_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg13 = _mm256_cmp_ps(arg5, temp0_526, 1)
                        arg14 = _mm256_and_ps(zmm1, arg13)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg14, zmm0)) != 0)
                            var_5c0_3 = _mm256_maskstore_ps(arg14, 
                                _mm256_xor_ps(temp0_526, _mm256_broadcast_ss(-0f)))
                        
                        zmm1 = _mm256_andnot_ps(arg13, zmm1)
                        arg5 = _mm256_and_ps(zmm1, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_5c0_3 = _mm256_maskstore_ps(zmm1, arg5)
                    
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    float temp0_703[0x8] = _mm256_cmp_ps(zmm1, arg11, 1)
                    arg12 = _mm256_and_ps(temp0_703, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm0)) != 0)
                        var_5a0_3 = _mm256_maskstore_ps(arg12, arg11)
                    
                    zmm1 = _mm256_andnot_ps(temp0_703, arg10)
                    arg5 = _mm256_and_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg11 = _mm256_cmp_ps(arg5, arg9, 1)
                        arg12 = _mm256_and_ps(zmm1, arg11)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm0)) != 0)
                            var_5a0_3 = _mm256_maskstore_ps(arg12, 
                                _mm256_xor_ps(arg9, _mm256_broadcast_ss(-0f)))
                        
                        zmm1 = _mm256_andnot_ps(arg11, zmm1)
                        arg5 = _mm256_and_ps(zmm1, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_5a0_3 = _mm256_maskstore_ps(zmm1, arg5)
                    
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    float temp0_725[0x8] = _mm256_cmp_ps(zmm1, arg8, 1)
                    arg9 = _mm256_and_ps(temp0_725, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm0)) != 0)
                        var_580_3 = _mm256_maskstore_ps(arg9, arg8)
                    
                    zmm1 = _mm256_andnot_ps(temp0_725, arg10)
                    arg5 = _mm256_and_ps(zmm1, zmm0)
                    arg12 = var_520_3
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        arg8 = _mm256_cmp_ps(arg5, arg7, 1)
                        arg9 = _mm256_and_ps(zmm1, arg8)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm0)) != 0)
                            var_580_3 = _mm256_maskstore_ps(arg9, 
                                _mm256_xor_ps(arg7, _mm256_broadcast_ss(-0f)))
                        
                        zmm1 = _mm256_andnot_ps(arg8, zmm1)
                        arg5 = _mm256_and_ps(zmm1, zmm0)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                            var_580_3 = _mm256_maskstore_ps(zmm1, arg5)
                    
                    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
                    arg8 = var_580_3
                    float temp0_749[0x8] = _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_fmadd_ps(var_5c0_3, var_5c0_3, zmm1), var_5a0_3, 
                            var_5a0_3), 
                        arg8, arg8)
                    float temp0_750[0x8] = _mm256_rsqrt_ps(temp0_749)
                    float temp0_751[0x8] = _mm256_mul_ps(temp0_749, temp0_750)
                    float temp0_756[0x8] = _mm256_mul_ps(
                        _mm256_mul_ps(temp0_750, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_750, temp0_751)), 
                        _mm256_broadcast_ss(0.5f))
                    float temp0_757[0x8] = _mm256_rcp_ps(temp0_756)
                    arg7 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), temp0_757, temp0_756)
                    zmm1 = _mm256_mul_ps(temp0_757, arg7)
                    arg6 = _mm256_blendv_ps(arg6, zmm1, arg10)
                else
                    arg12 = var_520_3
            else
                float var_500_3[0x8] = arg15
                arg6 = _mm256_max_ps(temp0_526, zmm1)
                arg14 = _mm256_max_ps(arg9, arg11)
                arg13 = _mm256_max_ps(arg7, arg8)
                float temp0_534[0x8] = _mm256_cmp_ps(arg14, arg6, 1)
                arg16 = _mm256_and_ps(arg10, temp0_534)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg16, zmm0)) != 0)
                    arg16 = _mm256_and_ps(_mm256_cmp_ps(arg13, arg6, 5), arg16)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg16, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg13, arg16)
                
                arg15 = _mm256_andnot_ps(temp0_534, arg10)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg15, zmm0)) == 0)
                    arg15 = var_500_3
                    arg5 = _mm256_andnot_ps(arg10, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        goto label_140054877
                    
                    arg12 = var_520_3
                else
                    float var_540_3[0x8] = arg9
                    arg9 = arg8
                    arg8 = arg7
                    arg16 = _mm256_cmp_ps(arg13, arg14, 1)
                    arg7 = _mm256_and_ps(arg15, arg16)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg14, arg7)
                    
                    arg7 = _mm256_andnot_ps(arg16, arg15)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm0)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg13, arg7)
                    
                    arg15 = var_500_3
                    arg7 = arg8
                    arg8 = arg9
                    arg9 = var_540_3
                    arg5 = _mm256_andnot_ps(arg10, zmm0)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        goto label_140054877
                    
                    arg12 = var_520_3
            
            zmm1[0].o = arg17
            float temp0_763[0x8] = _mm256_sub_ps(arg6, _mm256_broadcastss_ps(zmm1[0].o))
            arg5 = _mm256_cmp_ps(temp0_763, _mm256_broadcast_ss(-9.99999975e-05f), 1)
            zmm0 = _mm256_and_ps(arg5, zmm0)
            arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            result = zx.q(__vpmovmskb_gpr32d_xmmdq(arg5[0].o))
            
            if (result.b != 0)
                zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, temp0_763, var_3e0_1)
                arg15 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg15, temp0_763, var_3c0_1)
                float temp0_773[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_499, temp0_763, var_3a0_1)
                var_3e0_1 = _mm256_maskstore_ps(zmm0, zmm2)
                var_3c0_1 = _mm256_maskstore_ps(zmm0, arg15)
                var_3a0_1 = _mm256_maskstore_ps(zmm0, temp0_773)
                arg12 = _mm256_blendv_ps(arg12, _mm256_add_ps(arg12, temp0_763), 
                    _mm256_cvtepi16_epi32(arg6[0].o))
    else
        float temp0_2[0x8] = _mm256_broadcast_ss(arg3[3])
        temp0_2[0].o = *arg3
        zmm1[0].o = arg3[1]
        arg5[0].o = arg3[2]
        arg14 = _mm256_broadcast_ss(*arg2)
        float temp0_4[0x8] = _mm256_broadcast_ss(arg2[1])
        float temp0_5[0x8] = _mm256_broadcast_ss(arg2[2])
        float temp0_6[0x8] = _mm256_broadcast_ss(*arg1)
        float temp0_7[0x8] = _mm256_broadcast_ss(arg1[1])
        float temp0_8[0x8] = _mm256_broadcast_ss(arg1[2])
        temp0_8[0].o = arg17
        float temp0_9[0x8] = _mm256_broadcastss_ps(temp0_8[0].o)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        rbx = 0
        zmm4 = __vpbroadcastd_ymmqq_memd(0xc)
        int32_t var_2c0_1[0x4] = zmm4[0].o
        float temp0_12[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
        float temp0_13[0x8] = _mm256_broadcastss_ps(arg5[0].o)
        float temp0_14[0x8] = _mm256_broadcastss_ps(temp0_2[0].o)
        zmm0 = _mm256_broadcast_ss(-9.99999975e-05f)
        float var_340_1[0x8] = zmm0
        arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        float var_4e0_1[0x8] = arg14
        
        do
            zmm0[0].o = zx.o(rbx)
            zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm0[0].o, var_2c0_1)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93c0)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            zmm4 = _mm256_cmpeq_epi32(zmm4, zmm4)
            float temp0_23[0x8]
            int32_t temp1_1
            temp0_23, temp1_1 = _mm256_i32gather_ps(arg5, *(arg4 + zmm1[0].q), zmm4)
            zmm4 = temp1_1
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93e0)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            float temp0_27[0x8]
            int32_t temp1_2
            temp0_27, temp1_2 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm1[0].q), arg6)
            arg6 = temp1_2
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc9400)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            float temp0_31[0x8]
            int32_t temp1_3
            temp0_31, temp1_3 = _mm256_i32gather_ps(zmm1, *(arg4 + zmm0[0].q), arg6)
            float var_460_1[0x8] = arg13
            arg10 = temp0_13
            float temp0_32[0x8] = _mm256_mul_ps(temp0_27, arg10)
            float temp0_33[0x8] = _mm256_mul_ps(temp0_31, temp0_14)
            arg8 = temp0_12
            float temp0_34[0x8] = _mm256_mul_ps(temp0_23, arg8)
            float temp0_35[0x8] = _mm256_fmsub_ps(temp0_31, arg8, temp0_32)
            float temp0_36[0x8] = _mm256_fmsub_ps(temp0_23, arg10, temp0_33)
            float temp0_37[0x8] = _mm256_fmsub_ps(temp0_27, temp0_14, temp0_34)
            float temp0_38[0x8] = _mm256_add_ps(temp0_35, temp0_35)
            float temp0_39[0x8] = _mm256_add_ps(temp0_36, temp0_36)
            float temp0_40[0x8] = _mm256_add_ps(temp0_37, temp0_37)
            zmm2 = temp0_2
            float temp0_41[0x8] = _mm256_fmadd_ps(temp0_31, zmm2, temp0_40)
            float temp0_42[0x8] = _mm256_mul_ps(temp0_39, arg10)
            float temp0_43[0x8] = _mm256_mul_ps(temp0_40, temp0_14)
            float temp0_44[0x8] = _mm256_fmsub_ps(temp0_40, arg8, temp0_42)
            float temp0_46[0x8] = _mm256_add_ps(_mm256_fmadd_ps(temp0_23, zmm2, temp0_38), temp0_44)
            float temp0_47[0x8] = _mm256_mul_ps(temp0_38, arg8)
            float temp0_48[0x8] = _mm256_fmsub_ps(temp0_38, arg10, temp0_43)
            float temp0_50[0x8] = _mm256_add_ps(_mm256_fmadd_ps(temp0_27, zmm2, temp0_39), temp0_48)
            float temp0_52[0x8] =
                _mm256_add_ps(temp0_41, _mm256_fmsub_ps(temp0_39, temp0_14, temp0_47))
            zmm4 = _mm256_add_ps(temp0_46, _mm256_broadcast_ss(arg3[4]))
            arg5 = _mm256_broadcast_ss(arg3[5])
            arg6 = _mm256_add_ps(temp0_50, arg5)
            arg7 = _mm256_add_ps(temp0_52, _mm256_broadcast_ss(arg3[6]))
            float temp0_59[0x8] = _mm256_cmp_ps(zmm4, arg14, 6)
            temp0_52[0].o = _mm256_extractf128_ps(temp0_59[0].o, 1)
            temp0_59[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_59[0].o, temp0_52[0].o)
            int32_t var_5c0_1[0x8] = zmm2
            int32_t var_5a0_1[0x8] = zmm2
            float var_580_1[0x8] = zmm2
            int32_t var_560_1[0x8] = zmm2
            temp0_59[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_59[0].o, temp0_59[0].o)
            char temp0_63 = __vpmovmskb_gpr32d_xmmdq(temp0_59[0].o)
            zmm0 = _mm256_cmp_ps(zmm4, arg14, 2)
            
            if (temp0_63 == 0xff)
                arg9 = arg12
                temp0_52[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_52[0].o)
                arg10 = _mm256_srai_epi32(
                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
            else
                float temp0_66[0x8] = _mm256_cmp_ps(arg6, _mm256_broadcast_ss(arg2[1]), 2)
                zmm0 = _mm256_and_ps(temp0_66, zmm0)
                temp0_66[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_66[0].o)
                temp0_66[0].o = zmm0[0].o ^ arg9[0].o
                temp0_66[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_66[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(temp0_66[0].o) == 0xff)
                    arg9 = arg12
                    arg10 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
                else
                    float temp0_73[0x8] = _mm256_cmp_ps(arg7, _mm256_broadcast_ss(arg2[2]), 2)
                    arg5[0].o = _mm256_extractf128_ps(temp0_73[0].o, 1)
                    temp0_73[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_73[0].o, arg5[0].o)
                    zmm0[0].o &= temp0_73[0].o
                    temp0_73[0].o = zmm0[0].o ^ arg9[0].o
                    temp0_73[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(temp0_73[0].o, zmm0[0].o)
                    char temp0_77 = __vpmovmskb_gpr32d_xmmdq(temp0_73[0].o)
                    arg10 = _mm256_cvtepi16_epi32(zmm0[0].o)
                    
                    if (temp0_77 == 0xff)
                        arg9 = arg12
                    else
                        arg5 = _mm256_broadcast_ss(*arg1)
                        zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg5, zmm4, 6), arg10)
                        arg8 = _mm256_cmpeq_epi32(zmm1, arg10)
                        
                        if (_mm256_movemask_ps(arg8) == 0xff)
                            zmm0 = _mm256_cmp_ps(arg5, zmm4, 2)
                        else
                            float temp0_84[0x8] = _mm256_cmp_ps(arg5, zmm4, 2)
                            arg5[0].o = _mm256_extractf128_ps(temp0_84[0].o, 1)
                            temp0_84[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(temp0_84[0].o, arg5[0].o)
                            arg5 = _mm256_cmp_ps(_mm256_broadcast_ss(arg1[1]), arg6, 2)
                            arg8[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
                            zmm0[0].o &= temp0_84[0].o
                            zmm0[0].o &= arg5[0].o
                            zmm0 = _mm256_cvtepi16_epi32(zmm0[0].o)
                            zmm1 = zmm0 & not.32(arg10)
                        
                        arg9 = arg12
                        
                        if (_mm256_movemask_ps(_mm256_cmpeq_epi32(zmm1, arg10)) != 0xff)
                            zmm0 = _mm256_and_ps(
                                _mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg7, 2), zmm0 & arg10)
                        
                        arg10 = _mm256_and_ps(zmm0, arg10)
            
            arg11 = _mm256_sub_ps(zmm4, arg14)
            arg15 = __vsubps_ymmqq_ymmqq_memqq(arg6, temp0_4)
            arg8 = __vsubps_ymmqq_ymmqq_memqq(arg7, temp0_5)
            float temp0_107[0x8] = _mm256_sub_ps(temp0_6, zmm4)
            float temp0_108[0x8] = _mm256_sub_ps(temp0_7, arg6)
            zmm2 = _mm256_sub_ps(temp0_8, arg7)
            int32_t var_520_1[0x8] = arg8
            
            if (_mm256_movemask_ps(arg10) == 0)
                arg12 = arg9
            label_140053706:
                arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                arg10 = __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9420)
                
                if (_mm256_movemask_ps(arg10) != 0)
                label_14005377f:
                    float temp0_143[0x8] = _mm256_cmp_ps(arg13, arg11, 1)
                    arg5 = _mm256_and_ps(temp0_143, arg10)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        var_5c0_1 = _mm256_maskstore_ps(arg5, arg11)
                    
                    zmm0 = _mm256_andnot_ps(temp0_143, arg10)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        float temp0_149[0x8] = _mm256_cmp_ps(arg13, temp0_107, 1)
                        int32_t temp0_150[0x8] = _mm256_and_ps(zmm0, temp0_149)
                        
                        if (_mm256_movemask_ps(temp0_150) != 0)
                            arg11 = _mm256_broadcast_ss(-0f)
                            var_5c0_1 =
                                _mm256_maskstore_ps(temp0_150, _mm256_xor_ps(temp0_107, arg11))
                        
                        zmm0 = _mm256_andnot_ps(temp0_149, zmm0)
                        arg8 = var_520_1
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_5c0_1 = _mm256_maskstore_ps(zmm0, arg13)
                    
                    float temp0_158[0x8] = _mm256_cmp_ps(arg13, arg15, 1)
                    zmm1 = _mm256_and_ps(temp0_158, arg10)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_5a0_1 = _mm256_maskstore_ps(zmm1, arg15)
                    
                    zmm0 = _mm256_andnot_ps(temp0_158, arg10)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        arg11 = temp0_108
                        float temp0_164[0x8] = _mm256_cmp_ps(arg13, arg11, 1)
                        arg5 = _mm256_and_ps(zmm0, temp0_164)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            var_5a0_1 = _mm256_maskstore_ps(arg5, 
                                _mm256_xor_ps(arg11, _mm256_broadcast_ss(-0f)))
                            arg8 = var_520_1
                        
                        zmm0 = _mm256_andnot_ps(temp0_164, zmm0)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_5a0_1 = _mm256_maskstore_ps(zmm0, arg13)
                    
                    float temp0_173[0x8] = _mm256_cmp_ps(arg13, arg8, 1)
                    zmm1 = _mm256_and_ps(temp0_173, arg10)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        var_580_1 = _mm256_maskstore_ps(zmm1, arg8)
                    
                    zmm0 = _mm256_andnot_ps(temp0_173, arg10)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        float temp0_179[0x8] = _mm256_cmp_ps(arg13, zmm2, 1)
                        arg5 = _mm256_and_ps(zmm0, temp0_179)
                        
                        if (_mm256_movemask_ps(arg5) != 0)
                            arg8 = _mm256_xor_ps(zmm2, _mm256_broadcast_ss(-0f))
                            var_580_1 = _mm256_maskstore_ps(arg5, arg8)
                        
                        zmm0 = _mm256_andnot_ps(temp0_179, zmm0)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            var_580_1 = _mm256_maskstore_ps(zmm0, arg13)
                    
                    zmm0 = var_5c0_1
                    zmm1 = var_5a0_1
                    float temp0_190[0x8] = _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_fmadd_ps(zmm0, zmm0, arg13), zmm1, zmm1), var_580_1, 
                        var_580_1)
                    float temp0_191[0x8] = _mm256_rsqrt_ps(temp0_190)
                    float temp0_192[0x8] = _mm256_mul_ps(temp0_190, temp0_191)
                    float temp0_197[0x8] = _mm256_mul_ps(
                        _mm256_mul_ps(temp0_191, 
                            _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_191, temp0_192)), 
                        _mm256_broadcast_ss(0.5f))
                    float temp0_198[0x8] = _mm256_rcp_ps(temp0_197)
                    arg5 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), temp0_198, temp0_197)
                    arg16 = _mm256_blendv_ps(arg16, _mm256_mul_ps(temp0_198, arg5), arg10)
            else
                float var_540_1[0x8] = arg6
                arg6 = arg7
                arg5 = zmm2
                zmm2 = arg16
                float temp0_111[0x8] = _mm256_max_ps(temp0_107, arg11)
                float temp0_112[0x8] = _mm256_max_ps(temp0_108, arg15)
                arg7 = arg5
                arg5 = _mm256_max_ps(arg5, arg8)
                float temp0_114[0x8] = _mm256_cmp_ps(temp0_112, temp0_111, 1)
                arg13 = _mm256_and_ps(arg10, temp0_114)
                
                if (_mm256_movemask_ps(arg13) == 0)
                    goto label_14005367a
                
                arg8 = _mm256_cmp_ps(arg5, temp0_111, 1)
                arg12 = _mm256_and_ps(arg13, arg8)
                
                if (_mm256_movemask_ps(arg12) != 0)
                    zmm2 = _mm256_blendv_ps(zmm2, temp0_111, arg12)
                
                int32_t temp0_121[0x8] = _mm256_andnot_ps(arg8, arg13)
                
                if (_mm256_movemask_ps(temp0_121) == 0)
                    arg8 = var_520_1
                    arg13 = _mm256_andnot_ps(temp0_114, arg10)
                    
                    if (_mm256_movemask_ps(arg13) == 0)
                        goto label_1400536de
                else
                    zmm2 = _mm256_blendv_ps(zmm2, arg5, temp0_121)
                    arg8 = var_520_1
                label_14005367a:
                    arg13 = _mm256_andnot_ps(temp0_114, arg10)
                    
                    if (_mm256_movemask_ps(arg13) == 0)
                    label_1400536de:
                        arg12 = arg9
                        arg14 = var_4e0_1
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                        arg16 = zmm2
                        zmm2 = arg7
                        arg7 = arg6
                        arg6 = var_540_1
                        goto label_140053706
                
                arg8 = _mm256_cmp_ps(arg5, temp0_112, 1)
                arg12 = _mm256_and_ps(arg13, arg8)
                
                if (_mm256_movemask_ps(arg12) == 0)
                    arg12 = arg9
                    arg14 = var_4e0_1
                    arg16 = zmm2
                else
                    arg16 = _mm256_blendv_ps(zmm2, temp0_112, arg12)
                    arg12 = arg9
                    arg14 = var_4e0_1
                
                zmm2 = arg7
                arg7 = arg6
                arg6 = var_540_1
                arg9[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
                zmm0 = _mm256_andnot_ps(arg8, arg13)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    arg16 = _mm256_blendv_ps(arg16, arg5, zmm0)
                
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                arg8 = var_520_1
                arg10 = __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9420)
                
                if (_mm256_movemask_ps(arg10) != 0)
                    goto label_14005377f
            
            zmm0 = __vsubps_ymmqq_ymmqq_memqq(arg16, temp0_9)
            float temp0_204[0x8] = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, var_340_1, 1)
            result = zx.q(_mm256_movemask_ps(temp0_204))
            
            if (result.b != 0)
                zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, zmm0, var_3e0_1)
                arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, zmm0, var_3c0_1)
                arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, zmm0, var_3a0_1)
                var_3e0_1 = _mm256_maskstore_ps(temp0_204, zmm4)
                var_3c0_1 = _mm256_maskstore_ps(temp0_204, arg6)
                var_3a0_1 = _mm256_maskstore_ps(temp0_204, arg7)
                zmm0 = _mm256_add_ps(arg12, zmm0)
                arg12 = _mm256_blendv_ps(arg12, zmm0, temp0_204)
            
            rbx += 8
        while (rbx s< rdi_4)
        
        if (rbx s< arg20)
            goto label_14005410d
    float temp0_780[0x8] = _mm256_hadd_ps(var_3e0_1, var_3e0_1)
    float temp0_781[0x8] = _mm256_hadd_ps(temp0_780, temp0_780)
    float temp0_782[0x8] = _mm256_hadd_ps(var_3c0_1, var_3c0_1)
    zmm2 = var_3a0_1
    float temp0_783[0x8] = _mm256_hadd_ps(temp0_782, temp0_782)
    arg5[0].o = _mm256_extractf128_ps(temp0_781[0].o, 1)
    temp0_781[0].o = temp0_781[0].o f+ arg5[0]
    arg5[0].o = _mm256_extractf128_ps(temp0_783[0].o, 1)
    temp0_783[0].o = temp0_783[0].o f+ arg5[0]
    temp0_781[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_781[0].o, temp0_783[0].o, 0x10)
    float temp0_787[0x8] = _mm256_hadd_ps(zmm2, zmm2)
    zmm1 = _mm256_hadd_ps(temp0_787, temp0_787)
    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = zmm1[0].o f+ zmm2[0]
    zmm2[0].o = __vmovsd_xmmdq_memq(*arg19)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, arg19[1].d, 0x20)
    temp0_781[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_781[0].o, zmm1[0].o, 0x20)
    temp0_781[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_781[0].o, zmm2[0].o)
    *arg19 = temp0_781[0]
    *(arg19 + 4) = __vextractps_memd_xmmdq_immb(temp0_781[0].o, 1)
    arg19[1].d = __vextractps_memd_xmmdq_immb(temp0_781[0].o, 2)
    zmm0 = _mm256_hadd_ps(arg12, arg12)
float temp0_933[0x8] = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(temp0_933[0].o, 1)
temp0_933[0].o = temp0_933[0].o f+ zmm1[0]
temp0_933[0].o = temp0_933[0].o f+ *arg18
*arg18 = temp0_933[0]
arg7[0].o = var_c8
arg8[0].o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
arg15[0].o = var_48
arg16[0].o = var_38
_mm256_zeroupper()
return result
