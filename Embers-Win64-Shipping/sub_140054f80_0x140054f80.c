// 函数: sub_140054f80
// 地址: 0x140054f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = arg19[0].o
int128_t var_58 = arg18[0].o
int128_t var_68 = arg17[0].o
int128_t var_78 = arg16[0].o
int128_t var_88 = arg15[0].o
int128_t var_98 = arg14[0].o
int128_t var_a8 = arg13[0].o
int128_t var_b8 = arg12[0].o
int128_t var_c8 = arg11[0].o
int128_t var_d8 = arg10[0].o
int32_t r15_4 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
int32_t result
int32_t r12
int32_t zmm0[0x8]

if (r15_4 s<= 0)
    r12 = 0
    result = 0
    
    if (0 s< arg22)
    label_1400555e9:
        bool cond:0_1 = result.b != 0
        result.b = 1
        
        if (not(cond:0_1))
            zmm0[0].o = zx.o(r12)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            arg19 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
            arg5[0].o = zx.o(arg22)
            arg5 = _mm256_broadcastd_epi32(arg5[0])
            arg6 = _mm256_mullo_epi32(arg19, __vpbroadcastd_ymmqq_memd(3))
            arg5 = _mm256_cmpgt_epi32(arg5, arg19)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            int32_t temp0_204
            int32_t temp1_4
            temp0_204, temp1_4 = _mm256_i32gather_ps(arg7, *(arg4 + (arg6[0].q << 2)), arg5)
            arg7 = temp0_204
            arg6 = _mm256_mullo_epi32(arg19, __vpbroadcastd_ymmqq_memd(0xc))
            arg8 = _mm256_add_epi32(arg6, __vpbroadcastd_ymmqq_memd(4))
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            int32_t temp0_210
            int32_t temp1_5
            temp0_210, temp1_5 = _mm256_i32gather_ps(arg9, *(arg4 + arg8[0].q), arg5)
            arg9 = temp0_210
            arg8 = __vpbroadcastd_ymmqq_memd(8)
            arg6 = _mm256_add_epi32(arg6, arg8)
            arg8[0].o = zx.o(0)
            int32_t temp0_213
            int32_t temp1_6
            temp0_213, temp1_6 = _mm256_i32gather_ps(arg8, *(arg4 + arg6[0].q), arg5)
            arg8 = temp0_213
            arg10 = temp1_6
            int32_t var_1e0_1[0x8] = arg7
            float var_1c0_1[0x8] = arg9
            uint32_t var_1a0_1[0x8] = arg8
            arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
            uint32_t var_180_1[0x8] = arg10
            arg6 = _mm256_broadcast_ss(arg3[3])
            uint32_t var_3e0_2[0x8] = arg6
            uint32_t var_3c0_2[0x8] = arg6
            uint32_t var_3a0_2[0x8] = arg6
            uint32_t var_380_2[0x8] = arg6
            arg11 = _mm256_broadcast_ss(arg3[1])
            arg12 = _mm256_broadcast_ss(arg3[2])
            arg13 = _mm256_broadcast_ss(*arg3)
            arg10 = _mm256_mul_ps(arg6, arg10)
            arg14 = _mm256_mul_ps(arg9, arg12)
            arg15 = _mm256_mul_ps(arg8, arg13)
            arg16 = _mm256_mul_ps(arg7, arg11)
            arg14 = _mm256_fmsub_ps(arg14, arg11, arg8)
            arg15 = _mm256_fmsub_ps(arg15, arg12, arg7)
            arg16 = _mm256_fmsub_ps(arg16, arg13, arg9)
            arg8 = _mm256_sub_ps(arg10, arg10)
            arg9 = _mm256_add_ps(arg14, arg14)
            arg7 = _mm256_add_ps(arg15, arg15)
            arg10 = _mm256_add_ps(arg16, arg16)
            arg8 = _mm256_add_ps(arg8, arg8)
            int32_t var_360_2[0x8] = arg9
            int32_t var_340_2[0x8] = arg7
            uint32_t var_320_2[0x8] = arg10
            uint32_t var_300_2[0x8] = arg8
            arg11 = _mm256_fmadd_ps(var_1e0_1, arg6, arg9)
            arg12 = _mm256_fmadd_ps(var_1c0_1, arg6, arg7)
            arg13 = _mm256_fmadd_ps(var_1a0_1, arg6, arg10)
            int32_t var_160_1[0x8] = arg11
            float var_140_1[0x8] = arg12
            int32_t var_120_1[0x8] = arg13
            uint32_t var_100_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(arg8, arg6, var_180_1)
            arg6 = _mm256_broadcast_ss(arg3[1])
            arg8 = _mm256_broadcast_ss(arg3[2])
            arg14 = _mm256_broadcast_ss(*arg3)
            arg15 = _mm256_mul_ps(arg7, arg8)
            arg16 = _mm256_mul_ps(arg10, arg14)
            arg17 = _mm256_mul_ps(arg9, arg6)
            arg15 = _mm256_fmsub_ps(arg15, arg10, arg6)
            arg16 = _mm256_fmsub_ps(arg16, arg9, arg8)
            arg17 = _mm256_fmsub_ps(arg17, arg7, arg14)
            arg6 = _mm256_add_ps(arg11, arg15)
            arg7 = _mm256_add_ps(arg12, arg16)
            arg11 = _mm256_add_ps(arg13, arg17)
            arg6 = _mm256_add_ps(arg6, _mm256_broadcast_ss(arg3[4]))
            arg7 = _mm256_add_ps(arg7, _mm256_broadcast_ss(arg3[5]))
            arg16 = _mm256_broadcast_ss(arg3[6])
            arg8 = _mm256_broadcast_ss(*arg2)
            arg14 = _mm256_broadcast_ss(arg2[1])
            arg9 = _mm256_broadcast_ss(arg2[2])
            arg13 = _mm256_broadcast_ss(*arg1)
            arg15 = _mm256_broadcast_ss(arg1[1])
            arg12 = _mm256_broadcast_ss(arg1[2])
            arg18 = _mm256_and_ps(_mm256_cmp_ps(arg6, arg8, 6), arg5)
            char temp0_261 = _mm256_movemask_ps(_mm256_cmpeq_epi32(arg18, arg5))
            arg10 = _mm256_cmp_ps(arg6, arg8, 2)
            
            if (temp0_261 != 0xff)
                arg17 = _mm256_cmp_ps(arg7, arg14, 2)
                arg9[0].o = _mm256_extractf128_ps(arg17[0].o, 1)
                arg9[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg17[0].o, arg9[0].o)
                arg10 = _mm256_and_ps(arg10, arg5)
                zmm0[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                zmm0[0].o &= arg9[0].o
                arg10 = _mm256_cvtepi16_epi32(zmm0[0].o)
                arg18 = arg10 & not.32(arg5)
            
            arg17 = _mm256_add_ps(arg11, arg16)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg18, arg5)) != 0xff)
                arg10 = _mm256_and_ps(_mm256_cmp_ps(arg17, arg9, 2), arg10 & arg5)
                arg18 = _mm256_xor_ps(arg10, arg5)
            
            if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg18, arg5)) == 0xff)
                arg18 = arg12
            else
                arg10 = _mm256_and_ps(arg10, arg5)
                arg11 = _mm256_cmp_ps(arg13, arg6, 2)
                arg16 = _mm256_and_ps(arg10, _mm256_cmp_ps(arg13, arg6, 6))
                arg18 = arg12
                
                if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg16, arg10)) != 0xff)
                    arg11 =
                        _mm256_and_ps(_mm256_cmp_ps(arg15, arg7, 2), _mm256_and_ps(arg10, arg11))
                    arg16 = _mm256_xor_ps(arg11, arg10)
                
                if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg16, arg10)) != 0xff)
                    arg11 =
                        _mm256_and_ps(_mm256_cmp_ps(arg18, arg17, 2), _mm256_and_ps(arg11, arg10))
                
                arg9 = arg9
                arg10 = _mm256_and_ps(arg11, arg10)
            
            arg16 = _mm256_sub_ps(arg6, arg8)
            arg11 = _mm256_sub_ps(arg7, arg14)
            arg8 = _mm256_sub_ps(arg17, arg9)
            arg12 = _mm256_sub_ps(arg13, arg6)
            arg9 = _mm256_sub_ps(arg15, arg7)
            arg7 = _mm256_sub_ps(arg18, arg17)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg10, arg5)) == 0)
                zmm0 = _mm256_andnot_ps(arg10, arg5)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                label_1400559b1:
                    zmm0 = _mm256_cmpeq_epi32(zmm0, zmm0)
                    arg10 = _mm256_xor_ps(arg10, zmm0)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg13 = _mm256_cmp_ps(zmm0, arg16, 1)
                    arg14 = _mm256_and_ps(arg13, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg14, arg5)) != 0)
                        var_3e0_2 = _mm256_maskstore_ps(arg14, arg16)
                    
                    arg13 = _mm256_andnot_ps(arg13, arg10)
                    zmm0 = _mm256_and_ps(arg13, arg5)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg14 = _mm256_cmp_ps(zmm0, arg12, 1)
                        arg15 = _mm256_and_ps(arg13, arg14)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg15, arg5)) != 0)
                            var_3e0_2 = _mm256_maskstore_ps(arg15, 
                                _mm256_xor_ps(arg12, _mm256_broadcast_ss(-0f)))
                        
                        arg12 = _mm256_andnot_ps(arg14, arg13)
                        zmm0 = _mm256_and_ps(arg12, arg5)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            var_3e0_2 = _mm256_maskstore_ps(arg12, zmm0)
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg12 = _mm256_cmp_ps(zmm0, arg11, 1)
                    arg13 = _mm256_and_ps(arg12, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg13, arg5)) != 0)
                        var_3c0_2 = _mm256_maskstore_ps(arg13, arg11)
                    
                    arg11 = _mm256_andnot_ps(arg12, arg10)
                    zmm0 = _mm256_and_ps(arg11, arg5)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg12 = _mm256_cmp_ps(zmm0, arg9, 1)
                        arg13 = _mm256_and_ps(arg11, arg12)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg13, arg5)) != 0)
                            var_3c0_2 = _mm256_maskstore_ps(arg13, 
                                _mm256_xor_ps(arg9, _mm256_broadcast_ss(-0f)))
                        
                        arg9 = _mm256_andnot_ps(arg12, arg11)
                        zmm0 = _mm256_and_ps(arg9, arg5)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            var_3c0_2 = _mm256_maskstore_ps(arg9, zmm0)
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg9 = _mm256_cmp_ps(zmm0, arg8, 1)
                    arg11 = _mm256_and_ps(arg9, arg10)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg11, arg5)) != 0)
                        var_3a0_2 = _mm256_maskstore_ps(arg11, arg8)
                    
                    arg8 = _mm256_andnot_ps(arg9, arg10)
                    zmm0 = _mm256_and_ps(arg8, arg5)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        arg9 = _mm256_cmp_ps(zmm0, arg7, 1)
                        arg11 = _mm256_and_ps(arg8, arg9)
                        
                        if (_mm256_movemask_ps(_mm256_and_ps(arg11, arg5)) != 0)
                            var_3a0_2 = _mm256_maskstore_ps(arg11, 
                                _mm256_xor_ps(arg7, _mm256_broadcast_ss(-0f)))
                        
                        arg7 = _mm256_andnot_ps(arg9, arg8)
                        zmm0 = _mm256_and_ps(arg7, arg5)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                            var_3a0_2 = _mm256_maskstore_ps(arg7, zmm0)
                    
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg7 = var_3e0_2
                    arg9 = var_3a0_2
                    arg7 = _mm256_fmadd_ps(
                        _mm256_fmadd_ps(_mm256_fmadd_ps(arg7, arg7, zmm0), var_3c0_2, var_3c0_2), 
                        arg9, arg9)
                    zmm0 = _mm256_rsqrt_ps(arg7)
                    arg7 = _mm256_mul_ps(arg7, zmm0)
                    zmm0 = _mm256_mul_ps(
                        _mm256_mul_ps(zmm0, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), zmm0, arg7)), 
                        _mm256_broadcast_ss(0.5f))
                    arg7 = _mm256_rcp_ps(zmm0)
                    arg6 = _mm256_blendv_ps(arg6, 
                        _mm256_mul_ps(arg7, _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), arg7, zmm0)), 
                        arg10)
            else
                arg6 = _mm256_max_ps(arg12, arg16)
                arg14 = _mm256_max_ps(arg9, arg11)
                arg13 = _mm256_max_ps(arg7, arg8)
                arg15 = _mm256_cmp_ps(arg14, arg6, 1)
                arg17 = _mm256_and_ps(arg10, arg15)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg17, arg5)) != 0)
                    arg17 = _mm256_and_ps(_mm256_cmp_ps(arg13, arg6, 5), arg17)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg17, arg5)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg13, arg17)
                
                arg15 = _mm256_andnot_ps(arg15, arg10)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg15, arg5)) != 0)
                    arg17 = _mm256_cmp_ps(arg13, arg14, 1)
                    arg18 = _mm256_and_ps(arg15, arg17)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg18, arg5)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg14, arg18)
                    
                    arg14 = _mm256_andnot_ps(arg17, arg15)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg14, arg5)) != 0)
                        arg6 = _mm256_blendv_ps(arg6, arg13, arg14)
                
                zmm0 = _mm256_andnot_ps(arg10, arg5)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    goto label_1400559b1
            
            zmm0 = _mm256_and_ps(_mm256_cmp_ps(arg6, _mm256_broadcast_ss(*arg21), 1), arg5)
            int32_t i_3 = _mm256_movemask_ps(zmm0)
            
            if (i_3 == 0)
                result = 0
            else
                uint64_t i = zx.q(i_3)
                result = 0
                
                do
                    uint64_t rdx_1 = _tzcnt_u64(i)
                    i &= not.q(1 << (rdx_1 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        uint32_t var_260[0x8] = arg6
                        uint64_t rdx_2 = zx.q(rdx_1.d) & 7
                        zmm0[0].o = var_260[rdx_2]
                        *arg21 = zmm0[0]
                        float var_240[0x8] = arg19
                        *arg20 = var_240[rdx_2]
                    
                    result.b = 1
                while (i != 0)
else
    result = 0
    int32_t var_280_1[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
    int32_t var_2a0_1[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
    int32_t var_2c0_1[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
    zmm0 = _mm256_broadcast_ss(1.12103877e-44f)
    int32_t var_2e0_1[0x8] = zmm0
    arg17[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
    r12 = 0
    
    while (true)
        char rbx_1 = result.b
        result.b = 1
        
        if ((rbx_1 & 1) == 0)
            zmm0[0].o = zx.o(r12)
            arg13 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg13, var_280_1)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            int32_t temp0_15
            int32_t temp1_1
            temp0_15, temp1_1 = _mm256_i32gather_ps(arg5, *(arg4 + (zmm0[0].q << 2)), arg6)
            arg5 = temp0_15
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg13, var_2a0_1)
            arg6 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_2c0_1)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            int32_t temp0_20
            int32_t temp1_2
            temp0_20, temp1_2 = _mm256_i32gather_ps(arg7, *(arg4 + arg6[0].q), arg8)
            arg7 = temp0_20
            arg8 = temp1_2
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_2e0_1)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            int32_t temp0_24
            int32_t temp1_3
            temp0_24, temp1_3 = _mm256_i32gather_ps(arg6, *(arg4 + zmm0[0].q), arg8)
            arg6 = temp0_24
            float var_360_1[0x8] = arg5
            int32_t var_340_1[0x8] = arg7
            uint32_t var_320_1[0x8] = arg6
            int32_t var_300_1[0x8] = arg9
            zmm0 = _mm256_broadcast_ss(arg3[3])
            int32_t var_3e0_1[0x8] = zmm0
            int32_t var_3c0_1[0x8] = zmm0
            int32_t var_3a0_1[0x8] = zmm0
            int32_t var_380_1[0x8] = zmm0
            arg8 = _mm256_broadcast_ss(arg3[1])
            arg9 = _mm256_broadcast_ss(arg3[2])
            arg10 = _mm256_broadcast_ss(*arg3)
            arg11 = _mm256_mul_ps(arg7, arg9)
            arg14 = _mm256_mul_ps(arg6, arg10)
            arg15 = _mm256_mul_ps(arg5, arg8)
            arg6 = _mm256_fmsub_ps(arg6, arg8, arg11)
            arg5 = _mm256_fmsub_ps(arg5, arg9, arg14)
            arg7 = _mm256_fmsub_ps(arg7, arg10, arg15)
            arg6 = _mm256_add_ps(arg6, arg6)
            arg5 = _mm256_add_ps(arg5, arg5)
            arg7 = _mm256_add_ps(arg7, arg7)
            arg11 = _mm256_fmadd_ps(var_360_1, zmm0, arg6)
            arg14 = _mm256_fmadd_ps(var_340_1, zmm0, arg5)
            zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, arg7, var_320_1)
            arg15 = _mm256_fmsub_ps(_mm256_mul_ps(arg5, arg9), arg7, arg8)
            arg7 = _mm256_mul_ps(arg7, arg10)
            arg8 = _mm256_mul_ps(arg6, arg8)
            arg11 = _mm256_add_ps(arg11, arg15)
            arg6 = _mm256_add_ps(arg14, _mm256_fmsub_ps(arg7, arg6, arg9))
            arg8 = _mm256_fmsub_ps(arg8, arg5, arg10)
            zmm0 = _mm256_add_ps(zmm0, arg8)
            arg14 = _mm256_add_ps(arg11, _mm256_broadcast_ss(arg3[4]))
            arg16 = _mm256_add_ps(arg6, _mm256_broadcast_ss(arg3[5]))
            arg19 = _mm256_add_ps(zmm0, _mm256_broadcast_ss(arg3[6]))
            arg15 = _mm256_broadcast_ss(*arg2)
            arg18 = _mm256_broadcast_ss(arg2[1])
            zmm0 = __vpbroadcastd_ymmqq_memd(arg2[2])
            arg7 = _mm256_broadcast_ss(*arg1)
            arg11 = _mm256_broadcast_ss(arg1[1])
            arg5 = _mm256_cmp_ps(arg14, arg15, 6)
            arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            arg5 = _mm256_broadcast_ss(arg1[2])
            arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            char temp0_66 = __vpmovmskb_gpr32d_xmmdq(arg6[0].o)
            arg6 = _mm256_cmp_ps(arg14, arg15, 2)
            
            if (temp0_66 == 0xff)
                arg8[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                arg17 = _mm256_srai_epi32(
                    _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
            else
                arg8 = _mm256_cmp_ps(arg16, arg18, 2)
                arg6 = _mm256_and_ps(arg8, arg6)
                arg8[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg8[0].o)
                arg8[0].o = arg6[0].o ^ arg17[0].o
                arg8[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(arg8[0].o) == 0xff)
                    arg17 = _mm256_srai_epi32(
                        _mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
                else
                    arg8 = _mm256_cmp_ps(arg19, zmm0, 2)
                    arg9[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                    arg8[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
                    arg6[0].o &= arg8[0].o
                    arg8[0].o = arg6[0].o ^ arg17[0].o
                    arg8[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
                    char temp0_78 = __vpmovmskb_gpr32d_xmmdq(arg8[0].o)
                    arg17 = _mm256_cvtepi16_epi32(arg6[0].o)
                    
                    if (temp0_78 != 0xff)
                        arg9 = _mm256_and_ps(_mm256_cmp_ps(arg7, arg14, 6), arg17)
                        
                        if (_mm256_movemask_ps(_mm256_cmpeq_epi32(arg9, arg17)) == 0xff)
                            arg6 = _mm256_cmp_ps(arg7, arg14, 2)
                            arg8 = _mm256_cmpeq_epi32(arg9, arg17)
                            
                            if (_mm256_movemask_ps(arg8) != 0xff)
                                arg8 = _mm256_cmp_ps(arg5, arg19, 2)
                                arg6 = _mm256_and_ps(arg8, _mm256_and_ps(arg6, arg17))
                        else
                            arg8 = _mm256_cmp_ps(arg7, arg14, 2)
                            arg9[0].o = _mm256_extractf128_ps(arg8[0].o, 1)
                            arg8[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg8[0].o, arg9[0].o)
                            arg9 = _mm256_cmp_ps(arg11, arg16, 2)
                            arg10[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
                            arg9[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg9[0].o, arg10[0].o)
                            arg6[0].o &= arg8[0].o
                            arg6[0].o &= arg9[0].o
                            arg6 = _mm256_cvtepi16_epi32(arg6[0].o)
                            arg9 = arg6 & not.32(arg17)
                            arg8 = _mm256_cmpeq_epi32(arg9, arg17)
                            
                            if (_mm256_movemask_ps(arg8) != 0xff)
                                arg8 = _mm256_cmp_ps(arg5, arg19, 2)
                                arg6 = _mm256_and_ps(arg8, _mm256_and_ps(arg6, arg17))
                        
                        arg17 = _mm256_and_ps(arg6, arg17)
            
            arg6 = _mm256_sub_ps(arg14, arg15)
            arg18 = _mm256_sub_ps(arg16, arg18)
            arg15 = _mm256_sub_ps(arg19, zmm0)
            zmm0 = _mm256_sub_ps(arg7, arg14)
            arg16 = _mm256_sub_ps(arg11, arg16)
            arg14 = _mm256_sub_ps(arg5, arg19)
            
            if (_mm256_movemask_ps(arg17) != 0)
                arg9 = _mm256_max_ps(zmm0, arg6)
                arg7 = _mm256_max_ps(arg16, arg18)
                arg5 = _mm256_max_ps(arg14, arg15)
                arg11 = _mm256_cmp_ps(arg7, arg9, 1)
                arg19 = _mm256_and_ps(arg17, arg11)
                
                if (_mm256_movemask_ps(arg19) != 0)
                    arg10 = _mm256_cmp_ps(arg5, arg9, 1)
                    arg8 = _mm256_and_ps(arg19, arg10)
                    
                    if (_mm256_movemask_ps(arg8) != 0)
                        arg12 = _mm256_blendv_ps(arg12, arg9, arg8)
                    
                    arg8 = _mm256_andnot_ps(arg10, arg19)
                    
                    if (_mm256_movemask_ps(arg8) != 0)
                        arg12 = _mm256_blendv_ps(arg12, arg5, arg8)
                
                arg11 = _mm256_andnot_ps(arg11, arg17)
                
                if (_mm256_movemask_ps(arg11) != 0)
                    arg9 = _mm256_cmp_ps(arg5, arg7, 1)
                    arg8 = _mm256_and_ps(arg11, arg9)
                    
                    if (_mm256_movemask_ps(arg8) != 0)
                        arg12 = _mm256_blendv_ps(arg12, arg7, arg8)
                    
                    arg7 = _mm256_andnot_ps(arg9, arg11)
                    
                    if (_mm256_movemask_ps(arg7) != 0)
                        arg12 = _mm256_blendv_ps(arg12, arg5, arg7)
            
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            arg17 = __vxorps_ymmqq_ymmqq_memqq(arg17, data_142fc9420)
            
            if (_mm256_movemask_ps(arg17) != 0)
                arg5 = _mm256_cmp_ps(arg9, arg6, 1)
                arg7 = _mm256_and_ps(arg5, arg17)
                
                if (_mm256_movemask_ps(arg7) != 0)
                    var_3e0_1 = _mm256_maskstore_ps(arg7, arg6)
                
                arg5 = _mm256_andnot_ps(arg5, arg17)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    arg6 = _mm256_cmp_ps(arg9, zmm0, 1)
                    arg7 = _mm256_and_ps(arg5, arg6)
                    
                    if (_mm256_movemask_ps(arg7) != 0)
                        arg8 = _mm256_broadcast_ss(-0f)
                        var_3e0_1 = _mm256_maskstore_ps(arg7, _mm256_xor_ps(zmm0, arg8))
                    
                    zmm0 = _mm256_andnot_ps(arg6, arg5)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_3e0_1 = _mm256_maskstore_ps(zmm0, arg9)
                
                zmm0 = _mm256_cmp_ps(arg9, arg18, 1)
                arg5 = _mm256_and_ps(zmm0, arg17)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_3c0_1 = _mm256_maskstore_ps(arg5, arg18)
                
                zmm0 = _mm256_andnot_ps(zmm0, arg17)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    arg5 = _mm256_cmp_ps(arg9, arg16, 1)
                    arg6 = _mm256_and_ps(zmm0, arg5)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        arg7 = _mm256_xor_ps(arg16, _mm256_broadcast_ss(-0f))
                        var_3c0_1 = _mm256_maskstore_ps(arg6, arg7)
                    
                    zmm0 = _mm256_andnot_ps(arg5, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_3c0_1 = _mm256_maskstore_ps(zmm0, arg9)
                
                zmm0 = _mm256_cmp_ps(arg9, arg15, 1)
                arg5 = _mm256_and_ps(zmm0, arg17)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_3a0_1 = _mm256_maskstore_ps(arg5, arg15)
                
                zmm0 = _mm256_andnot_ps(zmm0, arg17)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    arg5 = _mm256_cmp_ps(arg9, arg14, 1)
                    arg6 = _mm256_and_ps(zmm0, arg5)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        arg7 = _mm256_xor_ps(arg14, _mm256_broadcast_ss(-0f))
                        var_3a0_1 = _mm256_maskstore_ps(arg6, arg7)
                    
                    zmm0 = _mm256_andnot_ps(arg5, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_3a0_1 = _mm256_maskstore_ps(zmm0, arg9)
                
                arg5 = var_3c0_1
                arg6 = var_3a0_1
                zmm0 = _mm256_fmadd_ps(
                    _mm256_fmadd_ps(_mm256_fmadd_ps(var_3e0_1, var_3e0_1, arg9), arg5, arg5), arg6, 
                    arg6)
                arg5 = _mm256_rsqrt_ps(zmm0)
                zmm0 = _mm256_mul_ps(zmm0, arg5)
                zmm0 = _mm256_mul_ps(
                    _mm256_mul_ps(arg5, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), arg5, zmm0)), 
                    _mm256_broadcast_ss(0.5f))
                arg5 = _mm256_rcp_ps(zmm0)
                arg6 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), arg5, zmm0)
                arg12 = _mm256_blendv_ps(arg12, _mm256_mul_ps(arg5, arg6), arg17)
            
            zmm0 = _mm256_cmp_ps(arg12, _mm256_broadcast_ss(*arg21), 1)
            char i_2 = _mm256_movemask_ps(zmm0)
            arg17[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg17[0].o, arg17[0].o)
            
            if (i_2 == 0)
                result = 0
                r12 += 8
                
                if (r12 s>= r15_4)
                    break
                
                continue
            else
                uint64_t i_1 = zx.q(i_2)
                result = 0
                
                do
                    uint64_t rdi_2 = _tzcnt_u64(i_1)
                    i_1 &= not.q(1 << (rdi_2 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        float var_220[0x8] = arg12
                        uint64_t rdi_3 = zx.q(rdi_2.d) & 7
                        zmm0[0].o = var_220[rdi_3]
                        *arg21 = zmm0[0]
                        int32_t var_200[0x8] = arg13
                        *arg20 = var_200[rdi_3]
                    
                    result.b = 1
                while (i_1 != 0)
        
        r12 += 8
        
        if (r12 s>= r15_4)
            break
    
    if (r12 s< arg22)
        goto label_1400555e9
arg10[0].o = var_d8
arg11[0].o = var_c8
arg12[0].o = var_b8
arg13[0].o = var_a8
arg14[0].o = var_98
arg15[0].o = var_88
arg16[0].o = var_78
arg17[0].o = var_68
arg18[0].o = var_58
arg19[0].o = var_48
_mm256_zeroupper()
return result
