// 函数: sub_140064d90
// 地址: 0x140064d90
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
int32_t zmm0[0x8]
zmm0[0].o = arg17
arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
float var_420[0x8] = arg12
float var_440_1[0x8] = arg12
int32_t rsi_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
float var_460[0x8] = arg12
int32_t* r10
double* r11
int32_t zmm1[0x8]
int32_t zmm2[0x8]
uint32_t zmm3[0x8]
int32_t rbx

if (rsi_4 s<= 0)
    rbx = 0
    r11 = arg19
    r10 = arg18
    
    if (0 s< arg20)
    label_14006559e:
        int32_t var_480_2[0x8] = arg12
        zmm0[0].o = zx.o(rbx)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(arg20)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        zmm2 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(3))
        zmm1 = _mm256_cmpgt_epi32(zmm1, zmm0)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        int128_t temp0_224
        int32_t temp1_4
        temp0_224, temp1_4 = _mm256_i32gather_ps(arg5, *(arg4 + (zmm2[0].q << 2)), zmm1)
        arg5 = temp0_224
        zmm0 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(0xc))
        zmm2 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(4))
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int128_t temp0_230
        int32_t temp1_5
        temp0_230, temp1_5 = _mm256_i32gather_ps(arg6, *(arg4 + zmm2[0].q), zmm1)
        arg6 = temp0_230
        zmm3 = temp1_5
        zmm0 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        int128_t temp0_234
        int32_t temp1_6
        temp0_234, temp1_6 = _mm256_i32gather_ps(zmm3, *(arg4 + zmm0[0].q), zmm1)
        zmm3 = temp0_234
        zmm2 = temp1_6
        float var_1e0_1[0x8] = arg5
        float var_1c0_1[0x8] = arg6
        float var_1a0_1[0x8] = zmm3
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int32_t var_180_1[0x8] = zmm2
        zmm0 = _mm256_broadcast_ss(arg3[3])
        int32_t var_520_2[0x8] = zmm0
        int32_t var_500_2[0x8] = zmm0
        int32_t var_4e0_2[0x8] = zmm0
        int32_t var_4c0_2[0x8] = zmm0
        arg7 = _mm256_broadcast_ss(arg3[1])
        arg8 = _mm256_broadcast_ss(arg3[2])
        arg9 = _mm256_broadcast_ss(*arg3)
        zmm2 = _mm256_mul_ps(zmm0, zmm2)
        arg10 = _mm256_mul_ps(arg6, arg8)
        arg11 = _mm256_mul_ps(zmm3, arg9)
        arg12 = _mm256_mul_ps(arg5, arg7)
        arg10 = _mm256_fmsub_ps(arg10, arg7, zmm3)
        arg11 = _mm256_fmsub_ps(arg11, arg8, arg5)
        arg12 = _mm256_fmsub_ps(arg12, arg9, arg6)
        zmm3 = _mm256_sub_ps(zmm2, zmm2)
        arg5 = _mm256_add_ps(arg10, arg10)
        zmm2 = _mm256_add_ps(arg11, arg11)
        arg6 = _mm256_add_ps(arg12, arg12)
        zmm3 = _mm256_add_ps(zmm3, zmm3)
        float var_3e0_2[0x8] = arg5
        int32_t var_3c0_2[0x8] = zmm2
        float var_3a0_2[0x8] = arg6
        uint32_t var_380_2[0x8] = zmm3
        arg7 = _mm256_fmadd_ps(var_1e0_1, zmm0, arg5)
        arg8 = _mm256_fmadd_ps(var_1c0_1, zmm0, zmm2)
        arg9 = _mm256_fmadd_ps(var_1a0_1, zmm0, arg6)
        float var_160_1[0x8] = arg7
        uint32_t var_140_1[0x8] = arg8
        float var_120_1[0x8] = arg9
        uint32_t var_100_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, zmm0, var_180_1)
        zmm0 = _mm256_broadcast_ss(arg3[1])
        zmm3 = _mm256_broadcast_ss(arg3[2])
        arg10 = _mm256_broadcast_ss(*arg3)
        arg11 = _mm256_mul_ps(zmm2, zmm3)
        arg12 = _mm256_mul_ps(arg6, arg10)
        arg13 = _mm256_mul_ps(arg5, zmm0)
        arg11 = _mm256_fmsub_ps(arg11, arg6, zmm0)
        arg12 = _mm256_fmsub_ps(arg12, arg5, zmm3)
        arg13 = _mm256_fmsub_ps(arg13, zmm2, arg10)
        zmm0 = _mm256_add_ps(arg7, arg11)
        zmm3 = _mm256_add_ps(arg8, arg12)
        arg5 = _mm256_add_ps(arg9, arg13)
        zmm2 = _mm256_add_ps(zmm0, _mm256_broadcast_ss(arg3[4]))
        arg15 = _mm256_add_ps(zmm3, _mm256_broadcast_ss(arg3[5]))
        arg8 = _mm256_broadcast_ss(arg3[6])
        zmm0 = _mm256_broadcast_ss(*arg2)
        arg12 = _mm256_broadcast_ss(arg2[1])
        arg7 = _mm256_broadcast_ss(arg2[2])
        arg9 = _mm256_broadcast_ss(*arg1)
        arg13 = _mm256_broadcast_ss(arg1[1])
        arg14 = _mm256_broadcast_ss(arg1[2])
        arg11 = _mm256_and_ps(_mm256_cmp_ps(zmm2, zmm0, 6), zmm1)
        zmm3 = _mm256_cmpeq_epi32(arg11, zmm1)
        char temp0_282 = _mm256_movemask_ps(zmm3)
        arg10 = _mm256_cmp_ps(zmm2, zmm0, 2)
        
        if (temp0_282 != 0xff)
            arg11 = _mm256_cmp_ps(arg15, arg12, 2)
            zmm3[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
            arg10 = _mm256_and_ps(arg10, zmm1)
            arg6[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, arg6[0].o)
            zmm3[0].o &= arg6[0].o
            arg10 = _mm256_cvtepi16_epi32(zmm3[0].o)
            arg11 = arg10 & not.32(zmm1)
        
        arg5 = _mm256_add_ps(arg5, arg8)
        
        if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, zmm1)) != 0xff)
            arg10 = _mm256_and_ps(_mm256_cmp_ps(arg5, arg7, 2), arg10 & zmm1)
            arg11 = _mm256_xor_ps(arg10, zmm1)
        
        if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, zmm1)) != 0xff)
            arg8 = _mm256_and_ps(arg10, zmm1)
            arg10 = _mm256_cmp_ps(arg9, zmm2, 2)
            arg11 = _mm256_and_ps(arg8, _mm256_cmp_ps(arg9, zmm2, 6))
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, arg8)) != 0xff)
                zmm3 = _mm256_cmp_ps(arg13, arg15, 2)
                arg6 = _mm256_and_ps(arg8, arg10)
                arg10 = _mm256_and_ps(zmm3, arg6)
                arg11 = _mm256_xor_ps(arg10, arg8)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg11, arg8)) != 0xff)
                zmm3 = _mm256_cmp_ps(arg14, arg5, 2)
                arg6 = _mm256_and_ps(arg10, arg8)
                arg10 = _mm256_and_ps(zmm3, arg6)
            
            arg10 = _mm256_and_ps(arg10, arg8)
        
        zmm0 = _mm256_sub_ps(zmm2, zmm0)
        arg11 = _mm256_sub_ps(arg15, arg12)
        arg8 = _mm256_sub_ps(arg5, arg7)
        arg12 = _mm256_sub_ps(arg9, zmm2)
        arg9 = _mm256_sub_ps(arg13, arg15)
        arg7 = _mm256_sub_ps(arg14, arg5)
        
        if (_mm256_movemask_ps(_mm256_and_ps(arg10, zmm1)) == 0)
            zmm3 = _mm256_andnot_ps(arg10, zmm1)
            
            if (_mm256_movemask_ps(zmm3) != 0)
            label_14006597b:
                zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
                arg10 = _mm256_xor_ps(arg10, zmm3)
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                arg13 = _mm256_cmp_ps(zmm3, zmm0, 1)
                arg14 = _mm256_and_ps(arg13, arg10)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg14, zmm1)) != 0)
                    var_520_2 = _mm256_maskstore_ps(arg14, zmm0)
                
                zmm0 = _mm256_andnot_ps(arg13, arg10)
                zmm3 = _mm256_and_ps(zmm0, zmm1)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    arg13 = _mm256_cmp_ps(zmm3, arg12, 1)
                    arg14 = _mm256_and_ps(zmm0, arg13)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg14, zmm1)) != 0)
                        var_520_2 = _mm256_maskstore_ps(arg14, 
                            _mm256_xor_ps(arg12, _mm256_broadcast_ss(-0f)))
                    
                    zmm0 = _mm256_andnot_ps(arg13, zmm0)
                    zmm3 = _mm256_and_ps(zmm0, zmm1)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        var_520_2 = _mm256_maskstore_ps(zmm0, zmm3)
                
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm0 = _mm256_cmp_ps(zmm0, arg11, 1)
                arg12 = _mm256_and_ps(zmm0, arg10)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm1)) != 0)
                    var_500_2 = _mm256_maskstore_ps(arg12, arg11)
                
                zmm0 = _mm256_andnot_ps(zmm0, arg10)
                zmm3 = _mm256_and_ps(zmm0, zmm1)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    arg11 = _mm256_cmp_ps(zmm3, arg9, 1)
                    arg12 = _mm256_and_ps(zmm0, arg11)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg12, zmm1)) != 0)
                        var_500_2 = _mm256_maskstore_ps(arg12, 
                            _mm256_xor_ps(arg9, _mm256_broadcast_ss(-0f)))
                    
                    zmm0 = _mm256_andnot_ps(arg11, zmm0)
                    zmm3 = _mm256_and_ps(zmm0, zmm1)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        var_500_2 = _mm256_maskstore_ps(zmm0, zmm3)
                
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm0 = _mm256_cmp_ps(zmm0, arg8, 1)
                arg9 = _mm256_and_ps(zmm0, arg10)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm1)) != 0)
                    var_4e0_2 = _mm256_maskstore_ps(arg9, arg8)
                
                zmm0 = _mm256_andnot_ps(zmm0, arg10)
                zmm3 = _mm256_and_ps(zmm0, zmm1)
                arg12 = var_480_2
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                    arg8 = _mm256_cmp_ps(zmm3, arg7, 1)
                    arg9 = _mm256_and_ps(zmm0, arg8)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg9, zmm1)) != 0)
                        var_4e0_2 =
                            _mm256_maskstore_ps(arg9, _mm256_xor_ps(arg7, _mm256_broadcast_ss(-0f)))
                    
                    zmm0 = _mm256_andnot_ps(arg8, zmm0)
                    zmm3 = _mm256_and_ps(zmm0, zmm1)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                        var_4e0_2 = _mm256_maskstore_ps(zmm0, zmm3)
                
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm3 = var_520_2
                arg7 = var_500_2
                arg8 = var_4e0_2
                zmm3 = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_fmadd_ps(zmm3, zmm3, zmm0), arg7, arg7), arg8, arg8)
                zmm0 = _mm256_rsqrt_ps(zmm3)
                zmm3 = _mm256_mul_ps(zmm3, zmm0)
                zmm0 = _mm256_mul_ps(
                    _mm256_mul_ps(zmm0, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), zmm0, zmm3)), 
                    _mm256_broadcast_ss(0.5f))
                zmm3 = _mm256_rcp_ps(zmm0)
                arg7 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), zmm3, zmm0)
                zmm0 = _mm256_mul_ps(zmm3, arg7)
                arg6 = _mm256_blendv_ps(arg6, zmm0, arg10)
            else
                arg12 = var_480_2
        else
            float var_540_2[0x8] = arg15
            arg6 = _mm256_max_ps(arg12, zmm0)
            arg14 = _mm256_max_ps(arg9, arg11)
            arg13 = _mm256_max_ps(arg7, arg8)
            arg15 = _mm256_cmp_ps(arg14, arg6, 1)
            arg16 = _mm256_and_ps(arg10, arg15)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg16, zmm1)) != 0)
                arg16 = _mm256_and_ps(_mm256_cmp_ps(arg13, arg6, 5), arg16)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg16, zmm1)) != 0)
                    arg6 = _mm256_blendv_ps(arg6, arg13, arg16)
            
            arg15 = _mm256_andnot_ps(arg15, arg10)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg15, zmm1)) == 0)
                arg15 = var_540_2
                zmm3 = _mm256_andnot_ps(arg10, zmm1)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    goto label_14006597b
                
                arg12 = var_480_2
            else
                float var_4a0_2[0x8] = arg9
                arg9 = arg8
                arg8 = arg7
                arg16 = _mm256_cmp_ps(arg13, arg14, 1)
                arg7 = _mm256_and_ps(arg15, arg16)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm1)) != 0)
                    arg6 = _mm256_blendv_ps(arg6, arg14, arg7)
                
                arg7 = _mm256_andnot_ps(arg16, arg15)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg7, zmm1)) != 0)
                    arg6 = _mm256_blendv_ps(arg6, arg13, arg7)
                
                arg15 = var_540_2
                arg7 = arg8
                arg8 = arg9
                arg9 = var_4a0_2
                zmm3 = _mm256_andnot_ps(arg10, zmm1)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    goto label_14006597b
                
                arg12 = var_480_2
        
        zmm0[0].o = arg17
        zmm0 = _mm256_sub_ps(arg6, _mm256_broadcastss_ps(zmm0[0].o))
        zmm3 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(-9.99999975e-05f), 1)
        zmm1 = _mm256_and_ps(zmm3, zmm1)
        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
            zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, zmm0, var_460)
            arg15 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg15, zmm0, var_440_1)
            arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg5, zmm0, var_420)
            var_460 = _mm256_maskstore_ps(zmm1, zmm2)
            var_440_1 = _mm256_maskstore_ps(zmm1, arg15)
            var_420 = _mm256_maskstore_ps(zmm1, arg5)
            arg12 = _mm256_blendv_ps(arg12, _mm256_add_ps(arg12, zmm0), 
                _mm256_cvtepi16_epi32(arg6[0].o))
else
    zmm1 = _mm256_broadcast_ss(arg3[3])
    int32_t var_360_1[0x8] = zmm1
    arg5[0].o = zmm0[0].o
    zmm0[0].o = *arg3
    zmm1[0].o = arg3[1]
    zmm3[0].o = zx.o(arg3[2])
    arg9 = _mm256_broadcast_ss(*arg2)
    float var_200_1[0x8] = _mm256_broadcast_ss(arg2[1])
    float var_220_1[0x8] = _mm256_broadcast_ss(arg2[2])
    int32_t var_240_1[0x8] = _mm256_broadcast_ss(*arg1)
    int32_t var_260_1[0x8] = _mm256_broadcast_ss(arg1[1])
    arg6 = _mm256_broadcast_ss(arg1[2])
    int32_t var_280_1[0x8] = arg6
    float var_2a0_1[0x8] = _mm256_broadcastss_ps(arg5[0].o)
    arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
    rbx = 0
    arg5 = _mm256_broadcast_ss(1.68155816e-44f)
    int32_t var_2c0_1[0x4] = arg5[0].o
    uint32_t var_2e0_1[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
    uint32_t var_300_1[0x8] = _mm256_broadcastd_epi32(zmm3[0])
    float var_320_1[0x8] = _mm256_broadcastss_ps(zmm0[0].o)
    zmm0 = _mm256_broadcast_ss(-9.99999975e-05f)
    float var_340_1[0x8] = zmm0
    arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    float var_400_1[0x8] = arg9
    
    do
        zmm0[0].o = zx.o(rbx)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm0[0].o, var_2c0_1)
        zmm0 = _mm256_broadcastd_epi32(zmm0[0])
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93c0)
        zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        int128_t temp0_25
        int32_t temp1_1
        temp0_25, temp1_1 = _mm256_i32gather_ps(arg5, *(arg4 + zmm1[0].q), zmm3)
        arg5 = temp0_25
        zmm3 = temp1_1
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93e0)
        zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int128_t temp0_29
        int32_t temp1_2
        temp0_29, temp1_2 = _mm256_i32gather_ps(arg6, *(arg4 + zmm1[0].q), zmm3)
        arg6 = temp0_29
        zmm3 = temp1_2
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc9400)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        int128_t temp0_33
        int32_t temp1_3
        temp0_33, temp1_3 = _mm256_i32gather_ps(zmm3, *(arg4 + zmm0[0].q), zmm1)
        zmm3 = temp0_33
        float var_3e0_1[0x8] = arg5
        float var_3c0_1[0x8] = arg6
        uint32_t var_3a0_1[0x8] = zmm3
        float var_380_1[0x8] = arg13
        zmm0 = _mm256_mul_ps(arg6, var_300_1)
        zmm1 = _mm256_mul_ps(zmm3, var_320_1)
        arg7 = _mm256_mul_ps(arg5, var_2e0_1)
        zmm3 = _mm256_fmsub_ps(zmm3, var_2e0_1, zmm0)
        arg5 = _mm256_fmsub_ps(arg5, var_300_1, zmm1)
        arg6 = _mm256_fmsub_ps(arg6, var_320_1, arg7)
        zmm0 = _mm256_add_ps(zmm3, zmm3)
        zmm1 = _mm256_add_ps(arg5, arg5)
        zmm3 = _mm256_add_ps(arg6, arg6)
        arg5 = _mm256_fmadd_ps(var_3a0_1, var_360_1, zmm3)
        arg6 = _mm256_mul_ps(zmm1, var_300_1)
        arg7 = _mm256_mul_ps(zmm3, var_320_1)
        zmm3 = _mm256_fmsub_ps(zmm3, var_2e0_1, arg6)
        zmm3 = _mm256_add_ps(_mm256_fmadd_ps(var_3e0_1, var_360_1, zmm0), zmm3)
        arg6 = _mm256_mul_ps(zmm0, var_2e0_1)
        zmm0 = _mm256_fmsub_ps(zmm0, var_300_1, arg7)
        zmm0 = _mm256_add_ps(_mm256_fmadd_ps(var_3c0_1, var_360_1, zmm1), zmm0)
        zmm1 = _mm256_add_ps(arg5, _mm256_fmsub_ps(zmm1, var_320_1, arg6))
        arg5 = _mm256_add_ps(zmm3, _mm256_broadcast_ss(arg3[4]))
        zmm3 = _mm256_broadcast_ss(arg3[5])
        arg6 = _mm256_add_ps(zmm0, zmm3)
        arg7 = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg3[6]))
        zmm0 = _mm256_cmp_ps(arg5, arg9, 6)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        int32_t var_520_1[0x8] = var_360_1
        int32_t var_500_1[0x8] = var_360_1
        int32_t var_4e0_1[0x8] = var_360_1
        int32_t var_4c0_1[0x8] = var_360_1
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        char temp0_65 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
        zmm0 = _mm256_cmp_ps(arg5, arg9, 2)
        
        if (temp0_65 == 0xff)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            arg10 =
                _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
        else
            zmm1 = _mm256_cmp_ps(arg6, _mm256_broadcast_ss(arg2[1]), 2)
            zmm0 = _mm256_and_ps(zmm1, zmm0)
            zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = zmm0[0].o ^ arg14[0].o
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0xff)
                arg10 = _mm256_srai_epi32(
                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f), 0x1f)
            else
                zmm1 = _mm256_cmp_ps(arg7, _mm256_broadcast_ss(arg2[2]), 2)
                zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                zmm0[0].o &= zmm1[0].o
                zmm1[0].o = zmm0[0].o ^ arg14[0].o
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                char temp0_79 = __vpmovmskb_gpr32d_xmmdq(zmm1[0].o)
                arg10 = _mm256_cvtepi16_epi32(zmm0[0].o)
                
                if (temp0_79 != 0xff)
                    zmm3 = _mm256_broadcast_ss(*arg1)
                    zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm3, arg5, 6), arg10)
                    arg8 = _mm256_cmpeq_epi32(zmm1, arg10)
                    
                    if (_mm256_movemask_ps(arg8) == 0xff)
                        zmm0 = _mm256_cmp_ps(zmm3, arg5, 2)
                        
                        if (_mm256_movemask_ps(_mm256_cmpeq_epi32(zmm1, arg10)) != 0xff)
                            zmm0 = _mm256_and_ps(
                                _mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg7, 2), 
                                _mm256_and_ps(zmm0, arg10))
                    else
                        zmm1 = _mm256_cmp_ps(zmm3, arg5, 2)
                        zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                        zmm3 = _mm256_cmp_ps(_mm256_broadcast_ss(arg1[1]), arg6, 2)
                        arg8[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
                        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg8[0].o)
                        zmm0[0].o &= zmm1[0].o
                        zmm0[0].o &= zmm3[0].o
                        zmm0 = _mm256_cvtepi16_epi32(zmm0[0].o)
                        
                        if (_mm256_movemask_ps(_mm256_cmpeq_epi32(zmm0 & not.32(arg10), arg10))
                                != 0xff)
                            zmm0 = _mm256_and_ps(
                                _mm256_cmp_ps(_mm256_broadcast_ss(arg1[2]), arg7, 2), 
                                _mm256_and_ps(zmm0, arg10))
                    
                    arg10 = _mm256_and_ps(zmm0, arg10)
        
        arg11 = _mm256_sub_ps(arg5, arg9)
        arg15 = __vsubps_ymmqq_ymmqq_memqq(arg6, var_200_1)
        zmm3 = __vsubps_ymmqq_ymmqq_memqq(arg7, var_220_1)
        zmm0 = _mm256_sub_ps(var_240_1, arg5)
        arg8 = _mm256_sub_ps(var_260_1, arg6)
        zmm2 = _mm256_sub_ps(var_280_1, arg7)
        uint32_t var_480_1[0x8] = arg8
        
        if (_mm256_movemask_ps(arg10) == 0)
            goto label_140065306
        
        float var_540_1[0x8] = arg6
        arg6 = arg7
        arg14 = _mm256_max_ps(zmm0, arg11)
        zmm1 = zmm2
        zmm2 = _mm256_max_ps(arg8, arg15)
        arg7 = zmm1
        uint32_t var_4a0_1[0x8] = zmm3
        zmm3 = _mm256_max_ps(zmm1, zmm3)
        zmm1 = _mm256_cmp_ps(zmm2, arg14, 1)
        arg13 = _mm256_and_ps(arg10, zmm1)
        arg9 = arg12
        
        if (_mm256_movemask_ps(arg13) != 0)
            arg8 = _mm256_cmp_ps(zmm3, arg14, 1)
            arg12 = _mm256_and_ps(arg13, arg8)
            
            if (_mm256_movemask_ps(arg12) != 0)
                arg16 = _mm256_blendv_ps(arg16, arg14, arg12)
            
            arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            arg8 = _mm256_andnot_ps(arg8, arg13)
            
            if (_mm256_movemask_ps(arg8) != 0)
                arg16 = _mm256_blendv_ps(arg16, zmm3, arg8)
            
            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            zmm1 = _mm256_andnot_ps(zmm1, arg10)
            
            if (_mm256_movemask_ps(zmm1) == 0)
                goto label_14006533b
            
            goto label_1400652b8
        
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        zmm1 = _mm256_andnot_ps(zmm1, arg10)
        
        if (_mm256_movemask_ps(zmm1) != 0)
        label_1400652b8:
            arg8 = _mm256_cmp_ps(zmm3, zmm2, 1)
            arg12 = _mm256_and_ps(zmm1, arg8)
            
            if (_mm256_movemask_ps(arg12) != 0)
                arg16 = _mm256_blendv_ps(arg16, zmm2, arg12)
            
            arg12 = arg9
            arg9 = var_400_1
            zmm2 = arg7
            arg7 = arg6
            arg6 = var_540_1
            zmm1 = _mm256_andnot_ps(arg8, zmm1)
            
            if (_mm256_movemask_ps(zmm1) == 0)
                goto label_140065356
            
            arg16 = _mm256_blendv_ps(arg16, zmm3, zmm1)
            zmm3 = var_4a0_1
        label_140065306:
            arg10 = __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9420)
            
            if (_mm256_movemask_ps(arg10) != 0)
            label_140065374:
                arg14 = zmm3
                zmm1 = _mm256_cmp_ps(arg13, arg11, 1)
                zmm3 = _mm256_and_ps(zmm1, arg10)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_520_1 = _mm256_maskstore_ps(zmm3, arg11)
                
                zmm1 = _mm256_andnot_ps(zmm1, arg10)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    zmm3 = _mm256_cmp_ps(arg13, zmm0, 1)
                    arg8 = _mm256_and_ps(zmm1, zmm3)
                    
                    if (_mm256_movemask_ps(arg8) != 0)
                        arg11 = _mm256_broadcast_ss(-0f)
                        var_520_1 = _mm256_maskstore_ps(arg8, _mm256_xor_ps(zmm0, arg11))
                    
                    zmm0 = _mm256_andnot_ps(zmm3, zmm1)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_520_1 = _mm256_maskstore_ps(zmm0, arg13)
                
                zmm0 = _mm256_cmp_ps(arg13, arg15, 1)
                zmm1 = _mm256_and_ps(zmm0, arg10)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_500_1 = _mm256_maskstore_ps(zmm1, arg15)
                
                zmm0 = _mm256_andnot_ps(zmm0, arg10)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    arg11 = var_480_1
                    zmm1 = _mm256_cmp_ps(arg13, arg11, 1)
                    zmm3 = _mm256_and_ps(zmm0, zmm1)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        arg8 = _mm256_xor_ps(arg11, _mm256_broadcast_ss(-0f))
                        var_500_1 = _mm256_maskstore_ps(zmm3, arg8)
                    
                    zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_500_1 = _mm256_maskstore_ps(zmm0, arg13)
                
                zmm0 = _mm256_cmp_ps(arg13, arg14, 1)
                zmm1 = _mm256_and_ps(zmm0, arg10)
                
                if (_mm256_movemask_ps(zmm1) != 0)
                    var_4e0_1 = _mm256_maskstore_ps(zmm1, arg14)
                
                zmm0 = _mm256_andnot_ps(zmm0, arg10)
                bool cond:1_1 = _mm256_movemask_ps(zmm0) == 0
                arg14[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
                
                if (not(cond:1_1))
                    zmm1 = _mm256_cmp_ps(arg13, zmm2, 1)
                    zmm3 = _mm256_and_ps(zmm0, zmm1)
                    
                    if (_mm256_movemask_ps(zmm3) != 0)
                        arg8 = _mm256_xor_ps(zmm2, _mm256_broadcast_ss(-0f))
                        var_4e0_1 = _mm256_maskstore_ps(zmm3, arg8)
                    
                    zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_4e0_1 = _mm256_maskstore_ps(zmm0, arg13)
                
                zmm3 = var_4e0_1
                zmm0 = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_fmadd_ps(var_520_1, var_520_1, arg13), var_500_1, 
                        var_500_1), 
                    zmm3, zmm3)
                zmm1 = _mm256_rsqrt_ps(zmm0)
                zmm0 = _mm256_mul_ps(zmm0, zmm1)
                zmm0 = _mm256_mul_ps(
                    _mm256_mul_ps(zmm1, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), zmm1, zmm0)), 
                    _mm256_broadcast_ss(0.5f))
                zmm1 = _mm256_rcp_ps(zmm0)
                zmm3 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), zmm1, zmm0)
                arg16 = _mm256_blendv_ps(arg16, _mm256_mul_ps(zmm1, zmm3), arg10)
        else
        label_14006533b:
            arg12 = arg9
            arg9 = var_400_1
            zmm2 = arg7
            arg7 = arg6
            arg6 = var_540_1
        label_140065356:
            zmm3 = var_4a0_1
            arg10 = __vxorps_ymmqq_ymmqq_memqq(arg10, data_142fc9420)
            
            if (_mm256_movemask_ps(arg10) != 0)
                goto label_140065374
        
        zmm0 = __vsubps_ymmqq_ymmqq_memqq(arg16, var_2a0_1)
        zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, var_340_1, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg5, zmm0, var_460)
            arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, zmm0, var_440_1)
            arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, zmm0, var_420)
            var_460 = _mm256_maskstore_ps(zmm1, arg5)
            var_440_1 = _mm256_maskstore_ps(zmm1, arg6)
            var_420 = _mm256_maskstore_ps(zmm1, arg7)
            zmm0 = _mm256_add_ps(arg12, zmm0)
            arg12 = _mm256_blendv_ps(arg12, zmm0, zmm1)
        
        rbx += 8
    while (rbx s< rsi_4)
    
    r11 = arg19
    r10 = arg18
    
    if (rbx s< arg20)
        goto label_14006559e
zmm0 = var_460
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1 = var_440_1
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm2 = var_420
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm3[0]
zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ zmm3[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
zmm1 = _mm256_hadd_ps(zmm2, zmm2)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ zmm2[0]
zmm2[0].o = __vmovsd_xmmdq_memq(*r11)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, r11[1].d, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
*r11 = zmm0[0]
*(r11 + 4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
r11[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0 = _mm256_hadd_ps(arg12, arg12)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
zmm0[0].o = zmm0[0].o f+ *r10
*r10 = zmm0[0]
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
