// 函数: sub_140063020
// 地址: 0x140063020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = arg15[0].o
int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int128_t var_c8 = arg7[0].o
int128_t var_d8 = arg6[0].o
int32_t result[0x8]
result[0].o = arg17
arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
int32_t var_480[0x8] = arg11
int32_t var_4a0[0x8] = arg11
int32_t rdi_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
int32_t var_4c0[0x8] = arg11
int32_t* r10
int32_t* r11
float zmm1[0x8]
int32_t rbx
int32_t zmm2[0x8]
uint32_t zmm4[0x8]
uint32_t zmm5[0x8]

if (rdi_4 s<= 0)
    rbx = 0
    r11 = arg19
    r10 = arg18
    
    if (0 s< arg20)
    label_140063910:
        int32_t var_5c0[0x8] = arg11
        result[0].o = zx.o(rbx)
        result = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(result[0]), data_142fc93a0)
        zmm1[0].o = zx.o(arg20)
        zmm1 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), result)
        result = _mm256_maskload_ps(zmm1, *(arg16 + sx.q(rbx << 2)))
        zmm2 = _mm256_mullo_epi32(result, __vpbroadcastd_ymmqq_memd(3))
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        int128_t temp0_224
        int32_t temp1_4
        temp0_224, temp1_4 = _mm256_i32gather_ps(arg5, *(arg4 + (zmm2[0].q << 2)), zmm1)
        arg5 = temp0_224
        zmm4 = temp1_4
        result = _mm256_mullo_epi32(result, __vpbroadcastd_ymmqq_memd(0xc))
        zmm2 = _mm256_add_epi32(result, __vpbroadcastd_ymmqq_memd(4))
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        int128_t temp0_230
        int32_t temp1_5
        temp0_230, temp1_5 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm2[0].q), zmm1)
        zmm4 = temp0_230
        zmm2 = __vpbroadcastd_ymmqq_memd(8)
        result = _mm256_add_epi32(result, zmm2)
        zmm2[0].o = zx.o(0)
        int128_t temp0_233
        int32_t temp1_6
        temp0_233, temp1_6 = _mm256_i32gather_ps(zmm2, *(arg4 + result[0].q), zmm1)
        zmm2 = temp0_233
        zmm5 = temp1_6
        int32_t var_1e0_1[0x8] = arg5
        uint32_t var_1c0_1[0x8] = zmm4
        int32_t var_1a0_1[0x8] = zmm2
        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        uint32_t var_180_1[0x8] = zmm5
        result = _mm256_broadcast_ss(arg3[3])
        int32_t result_2[0x8] = result
        int32_t result_3[0x8] = result
        int32_t result_4[0x8] = result
        int32_t result_5[0x8] = result
        arg6 = _mm256_broadcast_ss(arg3[1])
        arg7 = _mm256_broadcast_ss(arg3[2])
        arg8 = _mm256_broadcast_ss(*arg3)
        zmm5 = _mm256_mul_ps(result, zmm5)
        arg9 = _mm256_mul_ps(zmm4, arg7)
        arg10 = _mm256_mul_ps(zmm2, arg8)
        arg11 = _mm256_mul_ps(arg5, arg6)
        arg9 = _mm256_fmsub_ps(arg9, arg6, zmm2)
        arg10 = _mm256_fmsub_ps(arg10, arg7, arg5)
        arg11 = _mm256_fmsub_ps(arg11, arg8, zmm4)
        arg5 = _mm256_sub_ps(zmm5, zmm5)
        zmm4 = _mm256_add_ps(arg9, arg9)
        zmm2 = _mm256_add_ps(arg10, arg10)
        zmm5 = _mm256_add_ps(arg11, arg11)
        arg5 = _mm256_add_ps(arg5, arg5)
        uint32_t var_400_2[0x8] = zmm4
        int32_t var_3e0_2[0x8] = zmm2
        uint32_t var_3c0_2[0x8] = zmm5
        int32_t var_3a0_2[0x8] = arg5
        arg6 = _mm256_fmadd_ps(var_1e0_1, result, zmm4)
        arg7 = _mm256_fmadd_ps(var_1c0_1, result, zmm2)
        arg8 = _mm256_fmadd_ps(var_1a0_1, result, zmm5)
        uint32_t var_160_1[0x8] = arg6
        float var_140_1[0x8] = arg7
        int32_t var_120_1[0x8] = arg8
        int32_t var_100_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(arg5, result, var_180_1)
        result = _mm256_broadcast_ss(arg3[1])
        arg5 = _mm256_broadcast_ss(arg3[2])
        arg9 = _mm256_broadcast_ss(*arg3)
        arg10 = _mm256_mul_ps(zmm2, arg5)
        arg11 = _mm256_mul_ps(zmm5, arg9)
        arg12 = _mm256_mul_ps(zmm4, result)
        arg10 = _mm256_fmsub_ps(arg10, zmm5, result)
        arg11 = _mm256_fmsub_ps(arg11, zmm4, arg5)
        arg12 = _mm256_fmsub_ps(arg12, zmm2, arg9)
        result = _mm256_add_ps(arg6, arg10)
        arg5 = _mm256_add_ps(arg7, arg11)
        zmm4 = _mm256_add_ps(arg8, arg12)
        zmm2 = _mm256_add_ps(result, _mm256_broadcast_ss(arg3[4]))
        arg14 = _mm256_add_ps(arg5, _mm256_broadcast_ss(arg3[5]))
        arg7 = _mm256_broadcast_ss(arg3[6])
        result = _mm256_broadcast_ss(*arg2)
        arg11 = _mm256_broadcast_ss(arg2[1])
        arg6 = _mm256_broadcast_ss(arg2[2])
        arg8 = _mm256_broadcast_ss(*arg1)
        arg12 = _mm256_broadcast_ss(arg1[1])
        arg13 = _mm256_broadcast_ss(arg1[2])
        arg10 = _mm256_and_ps(_mm256_cmp_ps(zmm2, result, 6), zmm1)
        arg5 = _mm256_cmpeq_epi32(arg10, zmm1)
        char temp0_281 = _mm256_movemask_ps(arg5)
        arg9 = _mm256_cmp_ps(zmm2, result, 2)
        
        if (temp0_281 != 0xff)
            arg10 = _mm256_cmp_ps(arg14, arg11, 2)
            arg5[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
            arg9 = _mm256_and_ps(arg9, zmm1)
            zmm5[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm5[0].o)
            arg5[0].o &= zmm5[0].o
            arg9 = _mm256_cvtepi16_epi32(arg5[0].o)
            arg10 = arg9 & not.32(zmm1)
        
        zmm4 = _mm256_add_ps(zmm4, arg7)
        
        if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg10, zmm1)) != 0xff)
            arg9 = _mm256_and_ps(_mm256_cmp_ps(zmm4, arg6, 2), arg9 & zmm1)
            arg10 = _mm256_xor_ps(arg9, zmm1)
        
        if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg10, zmm1)) != 0xff)
            arg7 = _mm256_and_ps(arg9, zmm1)
            arg9 = _mm256_cmp_ps(arg8, zmm2, 2)
            arg10 = _mm256_and_ps(arg7, _mm256_cmp_ps(arg8, zmm2, 6))
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg10, arg7)) != 0xff)
                arg5 = _mm256_cmp_ps(arg12, arg14, 2)
                zmm5 = _mm256_and_ps(arg7, arg9)
                arg9 = _mm256_and_ps(arg5, zmm5)
                arg10 = _mm256_xor_ps(arg9, arg7)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg10, arg7)) != 0xff)
                arg5 = _mm256_cmp_ps(arg13, zmm4, 2)
                zmm5 = _mm256_and_ps(arg9, arg7)
                arg9 = _mm256_and_ps(arg5, zmm5)
            
            arg9 = _mm256_and_ps(arg9, arg7)
        
        result = _mm256_sub_ps(zmm2, result)
        arg10 = _mm256_sub_ps(arg14, arg11)
        arg7 = _mm256_sub_ps(zmm4, arg6)
        arg11 = _mm256_sub_ps(arg8, zmm2)
        arg8 = _mm256_sub_ps(arg12, arg14)
        arg6 = _mm256_sub_ps(arg13, zmm4)
        
        if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm1)) == 0)
            arg5 = _mm256_andnot_ps(arg9, zmm1)
            
            if (_mm256_movemask_ps(arg5) != 0)
            label_140063cf1:
                arg5 = _mm256_cmpeq_epi32(arg5, arg5)
                arg9 = _mm256_xor_ps(arg9, arg5)
                arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                arg12 = _mm256_cmp_ps(arg5, result, 1)
                arg13 = _mm256_and_ps(arg12, arg9)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg13, zmm1)) != 0)
                    result_2 = _mm256_maskstore_ps(arg13, result)
                
                result = _mm256_andnot_ps(arg12, arg9)
                arg5 = _mm256_and_ps(result, zmm1)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    arg12 = _mm256_cmp_ps(arg5, arg11, 1)
                    arg13 = _mm256_and_ps(result, arg12)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg13, zmm1)) != 0)
                        result_2 = _mm256_maskstore_ps(arg13, 
                            _mm256_xor_ps(arg11, _mm256_broadcast_ss(-0f)))
                    
                    result = _mm256_andnot_ps(arg12, result)
                    arg5 = _mm256_and_ps(result, zmm1)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        result_2 = _mm256_maskstore_ps(result, arg5)
                
                result[0].o = __vxorps_xmmdq_xmmdq_xmmdq(result[0].o, result[0].o)
                result = _mm256_cmp_ps(result, arg10, 1)
                arg11 = _mm256_and_ps(result, arg9)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg11, zmm1)) != 0)
                    result_3 = _mm256_maskstore_ps(arg11, arg10)
                
                result = _mm256_andnot_ps(result, arg9)
                arg5 = _mm256_and_ps(result, zmm1)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    arg10 = _mm256_cmp_ps(arg5, arg8, 1)
                    arg11 = _mm256_and_ps(result, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg11, zmm1)) != 0)
                        result_3 = _mm256_maskstore_ps(arg11, 
                            _mm256_xor_ps(arg8, _mm256_broadcast_ss(-0f)))
                    
                    result = _mm256_andnot_ps(arg10, result)
                    arg5 = _mm256_and_ps(result, zmm1)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        result_3 = _mm256_maskstore_ps(result, arg5)
                
                result[0].o = __vxorps_xmmdq_xmmdq_xmmdq(result[0].o, result[0].o)
                result = _mm256_cmp_ps(result, arg7, 1)
                arg8 = _mm256_and_ps(result, arg9)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg8, zmm1)) != 0)
                    result_4 = _mm256_maskstore_ps(arg8, arg7)
                
                result = _mm256_andnot_ps(result, arg9)
                arg5 = _mm256_and_ps(result, zmm1)
                arg11 = var_5c0
                
                if (_mm256_movemask_ps(arg5) != 0)
                    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                    arg7 = _mm256_cmp_ps(arg5, arg6, 1)
                    arg8 = _mm256_and_ps(result, arg7)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg8, zmm1)) != 0)
                        result_4 =
                            _mm256_maskstore_ps(arg8, _mm256_xor_ps(arg6, _mm256_broadcast_ss(-0f)))
                    
                    result = _mm256_andnot_ps(arg7, result)
                    arg5 = _mm256_and_ps(result, zmm1)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
                        result_4 = _mm256_maskstore_ps(result, arg5)
                
                result[0].o = __vxorps_xmmdq_xmmdq_xmmdq(result[0].o, result[0].o)
                arg6 = result_3
                arg7 = result_4
                arg5 = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_fmadd_ps(result_2, result_2, result), arg6, arg6), arg7, 
                    arg7)
                result = _mm256_rsqrt_ps(arg5)
                arg5 = _mm256_mul_ps(arg5, result)
                result = _mm256_mul_ps(
                    _mm256_mul_ps(result, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), result, arg5)), 
                    _mm256_broadcast_ss(0.5f))
                arg5 = _mm256_rcp_ps(result)
                arg6 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), arg5, result)
                result = _mm256_mul_ps(arg5, arg6)
                zmm5 = _mm256_blendv_ps(zmm5, result, arg9)
            else
                arg11 = var_5c0
        else
            float var_5a0_2[0x8] = arg14
            zmm5 = _mm256_max_ps(arg11, result)
            arg13 = _mm256_max_ps(arg8, arg10)
            arg12 = _mm256_max_ps(arg6, arg7)
            arg14 = _mm256_cmp_ps(arg13, zmm5, 1)
            arg15 = _mm256_and_ps(arg9, arg14)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg15, zmm1)) != 0)
                arg15 = _mm256_and_ps(_mm256_cmp_ps(arg12, zmm5, 5), arg15)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg15, zmm1)) != 0)
                    zmm5 = _mm256_blendv_ps(zmm5, arg12, arg15)
            
            arg14 = _mm256_andnot_ps(arg14, arg9)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg14, zmm1)) == 0)
                arg14 = var_5a0_2
                arg5 = _mm256_andnot_ps(arg9, zmm1)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    goto label_140063cf1
                
                arg11 = var_5c0
            else
                int32_t var_4e0_2[0x8] = arg8
                arg8 = arg7
                arg7 = arg6
                arg15 = _mm256_cmp_ps(arg12, arg13, 1)
                arg6 = _mm256_and_ps(arg14, arg15)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg6, zmm1)) != 0)
                    zmm5 = _mm256_blendv_ps(zmm5, arg13, arg6)
                
                arg6 = _mm256_andnot_ps(arg15, arg14)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg6, zmm1)) != 0)
                    zmm5 = _mm256_blendv_ps(zmm5, arg12, arg6)
                
                arg14 = var_5a0_2
                arg6 = arg7
                arg7 = arg8
                arg8 = var_4e0_2
                arg5 = _mm256_andnot_ps(arg9, zmm1)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    goto label_140063cf1
                
                arg11 = var_5c0
        
        result[0].o = arg17
        result = _mm256_sub_ps(zmm5, _mm256_broadcastss_ps(result[0].o))
        arg5 = _mm256_cmp_ps(result, _mm256_broadcast_ss(-9.99999975e-05f), 1)
        zmm1 = _mm256_and_ps(arg5, zmm1)
        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, result[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, result, var_4c0)
            arg14 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg14, result, var_4a0)
            zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, result, var_480)
            var_4c0 = _mm256_maskstore_ps(zmm1, zmm2)
            var_4a0 = _mm256_maskstore_ps(zmm1, arg14)
            var_480 = _mm256_maskstore_ps(zmm1, zmm4)
            arg11 = _mm256_blendv_ps(arg11, _mm256_add_ps(arg11, result), 
                _mm256_cvtepi16_epi32(zmm5[0].o))
else
    zmm2 = _mm256_broadcast_ss(arg3[3])
    zmm4[0].o = result[0].o
    result[0].o = *arg3
    zmm1[0].o = arg3[1]
    arg5[0].o = arg3[2]
    arg12 = _mm256_broadcast_ss(*arg2)
    arg9 = _mm256_broadcast_ss(arg2[1])
    arg8 = _mm256_broadcast_ss(arg2[2])
    int32_t var_220_1[0x8] = _mm256_broadcast_ss(*arg1)
    float var_240_1[0x8] = _mm256_broadcast_ss(arg1[1])
    zmm5 = __vpbroadcastd_ymmqq_memd(arg1[2])
    float var_260_1[0x8] = zmm5
    float var_280_1[0x8] = _mm256_broadcastss_ps(zmm4[0].o)
    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
    int32_t rax_1 = 0
    int32_t var_2a0_1[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
    int32_t var_2c0_1[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
    zmm4 = __vpbroadcastd_ymmqq_memd(4)
    int32_t var_2e0_1[0x8] = zmm4
    float var_300_1[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
    float var_320_1[0x8] = _mm256_broadcastss_ps(arg5[0].o)
    float var_340_1[0x8] = _mm256_broadcastss_ps(result[0].o)
    rbx = 0
    int32_t var_360_1[0x8] = _mm256_broadcast_ss(1.12103877e-44f)
    float var_380_1[0x8] = _mm256_broadcast_ss(-9.99999975e-05f)
    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
    float var_420_1[0x8] = arg9
    int32_t var_440_1[0x8] = arg8
    
    do
        result = *(arg16 + sx.q(rax_1))
        zmm1 = __vpmulld_ymmqq_ymmqq_memqq(result, var_2a0_1)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        zmm4 = _mm256_cmpeq_epi32(zmm4, zmm4)
        int128_t temp0_25
        int32_t temp1_1
        temp0_25, temp1_1 = _mm256_i32gather_ps(arg5, *(arg4 + (zmm1[0].q << 2)), zmm4)
        arg5 = temp0_25
        zmm4 = temp1_1
        result = __vpmulld_ymmqq_ymmqq_memqq(result, var_2c0_1)
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(result, var_2e0_1)
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
        int128_t temp0_30
        int32_t temp1_2
        temp0_30, temp1_2 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm1[0].q), zmm5)
        zmm4 = temp0_30
        zmm5 = temp1_2
        result = __vpaddd_ymmqq_ymmqq_memqq(result, var_360_1)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
        int128_t temp0_34
        int32_t temp1_3
        temp0_34, temp1_3 = _mm256_i32gather_ps(zmm1, *(arg4 + result[0].q), zmm5)
        zmm1 = temp0_34
        int32_t var_400_1[0x8] = arg5
        uint32_t var_3e0_1[0x8] = zmm4
        float var_3c0_1[0x8] = zmm1
        float var_3a0_1[0x8] = arg13
        result = _mm256_mul_ps(zmm4, var_320_1)
        zmm5 = _mm256_mul_ps(zmm1, var_340_1)
        arg6 = _mm256_mul_ps(arg5, var_300_1)
        zmm1 = _mm256_fmsub_ps(zmm1, var_300_1, result)
        arg5 = _mm256_fmsub_ps(arg5, var_320_1, zmm5)
        zmm4 = _mm256_fmsub_ps(zmm4, var_340_1, arg6)
        result = _mm256_add_ps(zmm1, zmm1)
        zmm1 = _mm256_add_ps(arg5, arg5)
        arg5 = _mm256_add_ps(zmm4, zmm4)
        zmm4 = _mm256_fmadd_ps(var_3c0_1, zmm2, arg5)
        zmm5 = _mm256_mul_ps(zmm1, var_320_1)
        arg6 = _mm256_mul_ps(arg5, var_340_1)
        arg5 = _mm256_fmsub_ps(arg5, var_300_1, zmm5)
        arg5 = _mm256_add_ps(_mm256_fmadd_ps(var_400_1, zmm2, result), arg5)
        zmm5 = _mm256_mul_ps(result, var_300_1)
        result = _mm256_fmsub_ps(result, var_320_1, arg6)
        result = _mm256_add_ps(_mm256_fmadd_ps(var_3e0_1, zmm2, zmm1), result)
        zmm1 = _mm256_add_ps(zmm4, _mm256_fmsub_ps(zmm1, var_340_1, zmm5))
        arg7 = _mm256_add_ps(arg5, _mm256_broadcast_ss(arg3[4]))
        arg6 = _mm256_add_ps(result, _mm256_broadcast_ss(arg3[5]))
        int32_t var_5a0_1[0x8] = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg3[6]))
        result = _mm256_cmp_ps(arg7, arg12, 6)
        zmm1[0].o = _mm256_extractf128_ps(result[0].o, 1)
        result[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(result[0].o, zmm1[0].o)
        int32_t var_580_1[0x8] = zmm2
        int32_t var_560_1[0x8] = zmm2
        int32_t var_540_1[0x8] = zmm2
        int32_t var_520_1[0x8] = zmm2
        result[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(result[0].o, result[0].o)
        char temp0_66 = __vpmovmskb_gpr32d_xmmdq(result[0].o)
        result = _mm256_cmp_ps(arg7, arg12, 2)
        
        if (temp0_66 == 0xff)
            zmm1[0].o = _mm256_extractf128_ps(result[0].o, 1)
            result[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(result[0].o, zmm1[0].o)
            arg14 =
                _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(result[0].o), 0x1f), 0x1f)
        else
            zmm1 = _mm256_cmp_ps(arg6, _mm256_broadcast_ss(arg2[1]), 2)
            result = _mm256_and_ps(zmm1, result)
            zmm1[0].o = _mm256_extractf128_ps(result[0].o, 1)
            result[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(result[0].o, zmm1[0].o)
            zmm1[0].o = result[0].o ^ data_142d3f800
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, result[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0xff)
                arg14 = _mm256_srai_epi32(
                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(result[0].o), 0x1f), 0x1f)
            else
                zmm1 = _mm256_cmp_ps(var_5a0_1, _mm256_broadcast_ss(arg2[2]), 2)
                var_5a0_1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, var_5a0_1[0].o)
                result[0].o &= zmm1[0].o
                zmm1[0].o = result[0].o ^ data_142d3f800
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, result[0].o)
                char temp0_80 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                arg14 = _mm256_cvtepi16_epi32(result[0].o)
                
                if (temp0_80 != 0xff)
                    arg5 = _mm256_broadcast_ss(*arg1)
                    zmm1 = _mm256_and_ps(_mm256_cmp_ps(arg5, arg7, 6), arg14)
                    zmm4 = _mm256_cmpeq_epi32(zmm1, arg14)
                    
                    if (_mm256_movemask_ps(zmm4) == 0xff)
                        result = _mm256_cmp_ps(arg5, arg7, 2)
                        
                        if (_mm256_movemask_ps(_mm256_cmpeq_epi32(zmm1, arg14)) != 0xff)
                            result = _mm256_and_ps(
                                __vcmpps_ymmqq_ymmqq_memqq_immb(_mm256_broadcast_ss(arg1[2]), 
                                    var_5a0_1, 2), 
                                _mm256_and_ps(result, arg14))
                    else
                        zmm1 = _mm256_cmp_ps(arg5, arg7, 2)
                        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
                        arg5 = _mm256_cmp_ps(_mm256_broadcast_ss(arg1[1]), arg6, 2)
                        zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
                        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
                        result[0].o &= zmm1[0].o
                        result[0].o &= arg5[0].o
                        result = _mm256_cvtepi16_epi32(result[0].o)
                        
                        if (_mm256_movemask_ps(_mm256_cmpeq_epi32(result & not.32(arg14), arg14))
                                != 0xff)
                            result = _mm256_and_ps(
                                __vcmpps_ymmqq_ymmqq_memqq_immb(_mm256_broadcast_ss(arg1[2]), 
                                    var_5a0_1, 2), 
                                _mm256_and_ps(result, arg14))
                    
                    arg14 = _mm256_and_ps(result, arg14)
        
        arg10 = _mm256_sub_ps(arg7, arg12)
        zmm5 = _mm256_sub_ps(arg6, arg9)
        arg5 = var_5a0_1
        zmm4 = _mm256_sub_ps(arg5, arg8)
        result = _mm256_sub_ps(var_220_1, arg7)
        arg15 = _mm256_sub_ps(var_240_1, arg6)
        zmm1 = _mm256_sub_ps(var_260_1, arg5)
        float var_4e0_1[0x8] = zmm1
        float var_200_1[0x8] = arg15
        float result_1[0x8]
        
        if (_mm256_movemask_ps(arg14) == 0)
        label_140063646:
            arg14 = __vxorps_ymmqq_ymmqq_memqq(arg14, data_142fc9420)
            
            if (_mm256_movemask_ps(arg14) == 0)
                result = result_1
            else
            label_14006365b:
                zmm1 = _mm256_cmp_ps(arg13, arg10, 1)
                arg5 = _mm256_and_ps(zmm1, arg14)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_580_1 = _mm256_maskstore_ps(arg5, arg10)
                
                zmm1 = _mm256_andnot_ps(zmm1, arg14)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    arg10 = arg6
                    arg5 = _mm256_cmp_ps(arg13, result, 1)
                    arg6 = _mm256_and_ps(zmm1, arg5)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        arg15 = zmm4
                        zmm4 = arg15
                        var_580_1 = _mm256_maskstore_ps(arg6, 
                            _mm256_xor_ps(result, _mm256_broadcast_ss(-0f)))
                    
                    result = _mm256_andnot_ps(arg5, zmm1)
                    arg6 = arg10
                    
                    if (_mm256_movemask_ps(result) != 0)
                        var_580_1 = _mm256_maskstore_ps(result, arg13)
                
                result = _mm256_cmp_ps(arg13, zmm5, 1)
                zmm1 = _mm256_and_ps(result, arg14)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_560_1 = _mm256_maskstore_ps(zmm1, zmm5)
                
                result = _mm256_andnot_ps(result, arg14)
                zmm5 = var_4e0_1
                arg10 = var_200_1
                
                if (_mm256_movemask_ps(result) != 0)
                    zmm1 = _mm256_cmp_ps(arg13, arg10, 1)
                    arg5 = _mm256_and_ps(result, zmm1)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        arg15 = arg10
                        arg10 = zmm4
                        var_560_1 = _mm256_maskstore_ps(arg5, 
                            _mm256_xor_ps(arg15, _mm256_broadcast_ss(-0f)))
                        zmm4 = arg10
                    
                    result = _mm256_andnot_ps(zmm1, result)
                    
                    if (_mm256_movemask_ps(result) != 0)
                        var_560_1 = _mm256_maskstore_ps(result, arg13)
                
                result = _mm256_cmp_ps(arg13, zmm4, 1)
                zmm1 = _mm256_and_ps(result, arg14)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_540_1 = _mm256_maskstore_ps(zmm1, zmm4)
                
                result = _mm256_andnot_ps(result, arg14)
                
                if (_mm256_movemask_ps(result) != 0)
                    zmm1 = _mm256_cmp_ps(arg13, zmm5, 1)
                    arg5 = _mm256_and_ps(result, zmm1)
                    
                    if (_mm256_movemask_ps(arg5) != 0)
                        zmm4 = _mm256_xor_ps(zmm5, _mm256_broadcast_ss(-0f))
                        var_540_1 = _mm256_maskstore_ps(arg5, zmm4)
                    
                    result = _mm256_andnot_ps(zmm1, result)
                    
                    if (_mm256_movemask_ps(result) != 0)
                        var_540_1 = _mm256_maskstore_ps(result, arg13)
                
                zmm1 = var_560_1
                result = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_fmadd_ps(var_580_1, var_580_1, arg13), zmm1, zmm1), 
                    var_540_1, var_540_1)
                zmm1 = _mm256_rsqrt_ps(result)
                result = _mm256_mul_ps(result, zmm1)
                result = _mm256_mul_ps(
                    _mm256_mul_ps(zmm1, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), zmm1, result)), 
                    _mm256_broadcast_ss(0.5f))
                zmm1 = _mm256_rcp_ps(result)
                arg5 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), zmm1, result)
                result = _mm256_blendv_ps(result_1, _mm256_mul_ps(zmm1, arg5), arg14)
        else
            arg5 = result
            result = arg6
            int32_t result_6[0x8] = arg5
            arg6 = _mm256_max_ps(arg5, arg10)
            arg15 = _mm256_max_ps(arg15, zmm5)
            arg5 = _mm256_max_ps(zmm1, zmm4)
            zmm1 = _mm256_cmp_ps(arg15, arg6, 1)
            arg13 = _mm256_and_ps(arg14, zmm1)
            uint32_t var_500_1[0x8] = zmm4
            
            if (_mm256_movemask_ps(arg13) == 0)
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                arg6 = result
                zmm1 = _mm256_andnot_ps(zmm1, arg14)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                label_1400635cf:
                    arg6 = _mm256_cmp_ps(arg5, arg15, 1)
                    zmm4 = _mm256_and_ps(zmm1, arg6)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        arg13 = arg12
                        result_1 = _mm256_blendv_ps(result_1, arg15, zmm4)
                        arg12 = arg13
                        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                    
                    zmm1 = _mm256_andnot_ps(arg6, zmm1)
                    
                    if (_mm256_movemask_ps(zmm1) != 0)
                        result_1 = _mm256_blendv_ps(result_1, arg5, zmm1)
                    
                    arg6 = result
                    zmm4 = var_500_1
                    result = result_6
                    goto label_140063646
            else
                arg8 = zmm2
                zmm2 = arg12
                arg12 = arg11
                arg11 = _mm256_cmp_ps(arg5, arg6, 1)
                zmm4 = _mm256_and_ps(arg13, arg11)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    result_1 = _mm256_blendv_ps(result_1, arg6, zmm4)
                
                zmm4 = _mm256_andnot_ps(arg11, arg13)
                
                if (_mm256_movemask_ps(zmm4) != 0)
                    result_1 = _mm256_blendv_ps(result_1, arg5, zmm4)
                
                arg11 = arg12
                arg12 = zmm2
                zmm2 = arg8
                arg9 = var_420_1
                arg8 = var_440_1
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                arg6 = result
                zmm4 = var_500_1
                zmm1 = _mm256_andnot_ps(zmm1, arg14)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    goto label_1400635cf
            
            result = result_6
            arg14 = __vxorps_ymmqq_ymmqq_memqq(arg14, data_142fc9420)
            
            if (_mm256_movemask_ps(arg14) != 0)
                goto label_14006365b
            
            result = result_1
        
        result_1 = result
        result = __vsubps_ymmqq_ymmqq_memqq(result, var_280_1)
        zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(result, var_380_1, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, result, var_4c0)
            arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, result, var_4a0)
            arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_5a0_1, result, var_480)
            var_4c0 = _mm256_maskstore_ps(zmm1, arg7)
            var_4a0 = _mm256_maskstore_ps(zmm1, arg6)
            var_480 = _mm256_maskstore_ps(zmm1, arg5)
            result = _mm256_add_ps(arg11, result)
            arg11 = _mm256_blendv_ps(arg11, result, zmm1)
        
        rbx += 8
        rax_1 += 0x20
    while (rbx s< rdi_4)
    
    r11 = arg19
    r10 = arg18
    
    if (rbx s< arg20)
        goto label_140063910
result = _mm256_hadd_ps(var_4c0, var_4c0)
result = _mm256_hadd_ps(result, result)
zmm1 = var_4a0
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
arg5[0].o = _mm256_extractf128_ps(result[0].o, 1)
result[0].o = result[0].o f+ arg5[0]
arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ arg5[0]
result[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(result[0].o, zmm1[0].o, 0x10)
zmm1 = _mm256_hadd_ps(var_480, var_480)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
var_480[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ var_480[0]
var_480[0].o = __vmovsd_xmmdq_memq(*r11)
var_480[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_480[0].o, r11[2], 0x20)
result[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(result[0].o, zmm1[0].o, 0x20)
result[0].o = __vaddps_xmmdq_xmmdq_xmmdq(result[0].o, var_480[0].o)
*r11 = result[0]
r11[1] = __vextractps_memd_xmmdq_immb(result[0].o, 1)
r11[2] = __vextractps_memd_xmmdq_immb(result[0].o, 2)
result = _mm256_hadd_ps(arg11, arg11)
result = _mm256_hadd_ps(result, result)
zmm1[0].o = _mm256_extractf128_ps(result[0].o, 1)
result[0].o = result[0].o f+ zmm1[0]
result[0].o = result[0].o f+ *r10
*r10 = result[0]
arg6[0].o = var_d8
arg7[0].o = var_c8
arg8[0].o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
arg15[0].o = var_48
_mm256_zeroupper()
return result
