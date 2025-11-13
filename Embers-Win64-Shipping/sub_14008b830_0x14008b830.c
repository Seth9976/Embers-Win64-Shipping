// 函数: sub_14008b830
// 地址: 0x14008b830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int128_t var_c8 = arg7[0].o
int128_t var_d8 = arg6[0].o
int128_t var_e8 = arg5[0].o
int32_t r12_4 = ((arg18 s>> 0x1f u>> 0x1d) + arg18) & 0xfffffff8
float var_420[0x8]
double var_370[0x2]
int32_t result
uint64_t r13
float zmm0[0x8]
double zmm1[0x4]
float zmm2[0x8]
int32_t zmm3[0x8]
int32_t zmm4[0x8]
float zmm5[0x8]

if (r12_4 s<= 0)
    r13 = 0
    result = 0
else
    result = 0
    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
    r13 = 0
    
    while (true)
        char rbx_1 = result.b
        result.b = 1
        
        if ((rbx_1 & 1) == 0)
            int64_t rax_1 = sx.q((r13 << 2).d)
            zmm1[0].o = *(arg15 + rax_1)
            zmm2[0].o = *(arg15 + rax_1 + 0x10)
            zmm0[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            var_370 = zmm2[0].o
            zmm2[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            int64_t rdi_1 = sx.q(zmm2[0])
            int64_t rax_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 1))
            zmm0[0].o = *(arg4 + (rdi_1 << 2))
            zmm4[0].o = *(arg4 + (rdi_1 << 2) + 4)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (rax_3 << 2)), 0x10)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rax_3 << 2) + 4), 0x10)
            var_420 = zmm1
            zmm3[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm5[0].o = *(arg4 + (rdi_1 << 2) + 8)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rax_3 << 2) + 8), 0x10)
            int32_t rax_4 = zmm3[0]
            int64_t rsi_3 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 2))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (rsi_3 << 2)), 0x20)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rsi_3 << 2) + 4), 0x20)
            zmm5[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rsi_3 << 2) + 8), 0x20)
            int64_t rax_5 = sx.q(rax_4)
            int64_t rsi_5 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm2[0].o, 3))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg4 + (rsi_5 << 2)), 0x30)
            zmm2[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rsi_5 << 2) + 4), 0x30)
            zmm4[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rsi_5 << 2) + 8), 0x30)
            int32_t temp0_18 = __vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1)
            zmm5[0].o = *(arg4 + (rax_5 << 2))
            arg6[0].o = *(arg4 + (rax_5 << 2) + 4)
            zmm1[0].o = *(arg4 + (rax_5 << 2) + 8)
            int64_t rax_6 = sx.q(temp0_18)
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rax_6 << 2)), 0x10)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rax_6 << 2) + 4), 0x10)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (rax_6 << 2) + 8), 0x10)
            int64_t rax_8 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
            zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rax_8 << 2)), 0x20)
            arg6[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rax_8 << 2) + 4), 0x20)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (rax_8 << 2) + 8), 0x20)
            int64_t rax_10 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(arg4 + (rax_10 << 2)), 0x30)
            zmm0 = _mm256_insertf128_ps(zmm3, zmm0[0].o, 1)
            zmm3[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, *(arg4 + (rax_10 << 2) + 4), 0x30)
            zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
            zmm1[0].o =
                __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg4 + (rax_10 << 2) + 8), 0x30)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm4[0].o, 1)
            float var_340_1[0x8] = zmm0
            float var_320_1[0x8] = zmm2
            double var_300_1[0x4] = zmm1
            float var_2e0_1[0x8] = arg12
            zmm3 = _mm256_broadcast_ss(arg3[3])
            int32_t var_400_1[0x8] = zmm3
            int32_t var_3e0_1[0x8] = zmm3
            int32_t var_3c0_1[0x8] = zmm3
            zmm4 = _mm256_broadcast_ss(arg3[1])
            zmm5 = _mm256_mul_ps(zmm1, zmm4)
            arg6 = _mm256_broadcast_ss(arg3[2])
            arg7 = _mm256_mul_ps(zmm0, arg6)
            arg8 = _mm256_broadcast_ss(*arg3)
            arg9 = _mm256_mul_ps(zmm2, arg8)
            zmm2 = _mm256_sub_ps(zmm5, _mm256_mul_ps(zmm2, arg6))
            zmm1 = _mm256_sub_ps(arg7, _mm256_mul_ps(zmm1, arg8))
            zmm0 = _mm256_sub_ps(arg9, _mm256_mul_ps(zmm0, zmm4))
            zmm2 = _mm256_add_ps(zmm2, zmm2)
            zmm1 = _mm256_add_ps(zmm1, zmm1)
            zmm0 = _mm256_add_ps(zmm0, zmm0)
            zmm5 = _mm256_mul_ps(zmm3, zmm2)
            arg7 = _mm256_mul_ps(zmm3, zmm1)
            arg9 = _mm256_mul_ps(zmm3, zmm0)
            zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_340_1)
            arg7 = __vaddps_ymmqq_ymmqq_memqq(arg7, var_320_1)
            arg9 = __vaddps_ymmqq_ymmqq_memqq(arg9, var_300_1)
            int32_t var_3a0_1[0x8] = zmm3
            zmm3 = _mm256_mul_ps(zmm0, zmm4)
            arg10 = _mm256_mul_ps(zmm2, arg6)
            arg11 = _mm256_mul_ps(zmm1, arg8)
            zmm1 = _mm256_add_ps(zmm5, _mm256_sub_ps(zmm3, _mm256_mul_ps(zmm1, arg6)))
            zmm0 = _mm256_add_ps(arg7, _mm256_sub_ps(arg10, _mm256_mul_ps(zmm0, arg8)))
            zmm2 = _mm256_add_ps(arg9, _mm256_sub_ps(arg11, _mm256_mul_ps(zmm2, zmm4)))
            arg8 = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg3[4]))
            arg11 = _mm256_add_ps(zmm0, _mm256_broadcast_ss(arg3[5]))
            arg12 = _mm256_add_ps(zmm2, _mm256_broadcast_ss(arg3[6]))
            arg9 = _mm256_broadcast_ss(*arg2)
            arg13 = _mm256_broadcast_ss(arg2[1])
            arg14 = _mm256_broadcast_ss(arg2[2])
            arg7 = _mm256_broadcast_ss(*arg1)
            zmm2 = _mm256_broadcast_ss(arg1[1])
            zmm3 = _mm256_broadcast_ss(arg1[2])
            zmm0 = _mm256_cmp_ps(arg8, arg9, 2)
            zmm1 = _mm256_cmp_ps(arg8, arg9, 6)
            zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
            zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0xff)
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            label_14008bc53:
                zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
                zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm1[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
                zmm0[0].o = __vpunpckhwd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                zmm0[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
                arg10 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            else
                zmm1 = _mm256_cmp_ps(arg11, arg13, 2)
                zmm0 = _mm256_and_ps(zmm1, zmm0)
                zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                zmm1[0].o = zmm0[0].o ^ arg6[0].o
                zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                
                if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) == 0xff)
                    goto label_14008bc53
                
                zmm1 = _mm256_cmp_ps(arg12, arg14, 2)
                zmm4[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                zmm5[0].o = zmm1[0].o & zmm0[0].o
                zmm0[0].o = zmm5[0].o ^ arg6[0].o
                zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                char temp0_96 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
                zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm5[0].q)
                zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm5[0].o, 0x4e)
                zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0])
                arg10 = _mm256_insertf128_ps(zmm0, zmm1[0].o, 1)
                
                if (temp0_96 != 0xff)
                    zmm0 = _mm256_and_ps(_mm256_cmp_ps(arg7, arg8, 6), arg10)
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm4[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                    arg6[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                    zmm1 = _mm256_insertf128_ps(arg6, zmm1[0].o, 1)
                    
                    if (_mm256_movemask_ps(zmm1) == 0xff)
                        zmm5 = _mm256_cmp_ps(arg7, arg8, 2)
                    else
                        zmm0 = _mm256_cmp_ps(arg7, arg8, 2)
                        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                        zmm1 = _mm256_cmp_ps(zmm2, arg11, 2)
                        arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
                        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
                        zmm0[0].o &= zmm5[0].o
                        zmm0[0].o &= zmm1[0].o
                        zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0x4e)
                        zmm0[0].o = __vpmovsxwd_xmmdq_xmmq(zmm0[0].q)
                        zmm5 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
                        zmm0 = _mm256_andnot_ps(zmm5, arg10)
                    
                    zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                    zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
                    zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg10[0].o)
                    
                    if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1)) != 0xff)
                        zmm0 = _mm256_cmp_ps(zmm3, arg12, 2)
                        zmm1 = _mm256_and_ps(zmm5, arg10)
                        zmm5 = _mm256_and_ps(zmm0, zmm1)
                    
                    arg10 = _mm256_and_ps(zmm5, arg10)
            
            zmm4 = _mm256_sub_ps(arg8, arg9)
            arg13 = _mm256_sub_ps(arg11, arg13)
            arg9 = _mm256_sub_ps(arg12, arg14)
            arg7 = _mm256_sub_ps(arg7, arg8)
            arg11 = _mm256_sub_ps(zmm2, arg11)
            arg8 = _mm256_sub_ps(zmm3, arg12)
            
            if (_mm256_movemask_ps(arg10) == 0)
                arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
            else
                arg12 = _mm256_max_ps(arg7, zmm4)
                zmm3 = _mm256_max_ps(arg11, arg13)
                zmm2 = _mm256_max_ps(arg8, arg9)
                zmm5 = _mm256_cmp_ps(zmm3, arg12, 1)
                zmm0 = _mm256_and_ps(arg10, zmm5)
                
                if (_mm256_movemask_ps(zmm0) == 0)
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    zmm0 = _mm256_andnot_ps(zmm5, arg10)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                    label_14008bd4e:
                        zmm5 = _mm256_cmp_ps(zmm2, zmm3, 1)
                        arg6 = _mm256_and_ps(zmm0, zmm5)
                        
                        if (_mm256_movemask_ps(arg6) != 0)
                            arg5 = _mm256_blendv_ps(arg5, zmm3, arg6)
                        
                        zmm0 = _mm256_andnot_ps(zmm5, zmm0)
                        
                        if (_mm256_movemask_ps(zmm0) != 0)
                            arg5 = _mm256_blendv_ps(arg5, zmm2, zmm0)
                else
                    arg14 = _mm256_cmp_ps(zmm2, arg12, 1)
                    arg6 = _mm256_and_ps(zmm0, arg14)
                    
                    if (_mm256_movemask_ps(arg6) != 0)
                        arg5 = _mm256_blendv_ps(arg5, arg12, arg6)
                    
                    arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
                    zmm0 = _mm256_andnot_ps(arg14, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        arg5 = _mm256_blendv_ps(arg5, zmm2, zmm0)
                    
                    zmm0 = _mm256_andnot_ps(zmm5, arg10)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        goto label_14008bd4e
            
            zmm2 = _mm256_xor_ps(arg10, _mm256_cmp_ps(arg12, arg12, 0xf))
            
            if (_mm256_movemask_ps(zmm2) != 0)
                zmm0 = _mm256_cmp_ps(arg12, zmm4, 1)
                zmm3 = _mm256_and_ps(zmm0, zmm2)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_400_1 = _mm256_maskstore_ps(zmm3, zmm4)
                
                zmm0 = _mm256_andnot_ps(zmm0, zmm2)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm3 = _mm256_cmp_ps(arg12, arg7, 1)
                    zmm4 = _mm256_and_ps(zmm0, zmm3)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_400_1 = _mm256_maskstore_ps(zmm4, 
                            __vxorps_ymmqq_ymmqq_memqq(arg7, data_142fc9460))
                    
                    zmm0 = _mm256_andnot_ps(zmm3, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_400_1 = _mm256_maskstore_ps(zmm0, arg12)
                
                zmm0 = _mm256_cmp_ps(arg12, arg13, 1)
                zmm3 = _mm256_and_ps(zmm0, zmm2)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_3e0_1 = _mm256_maskstore_ps(zmm3, arg13)
                
                zmm0 = _mm256_andnot_ps(zmm0, zmm2)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm3 = _mm256_cmp_ps(arg12, arg11, 1)
                    zmm4 = _mm256_and_ps(zmm0, zmm3)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_3e0_1 = _mm256_maskstore_ps(zmm4, 
                            __vxorps_ymmqq_ymmqq_memqq(arg11, data_142fc9460))
                    
                    zmm0 = _mm256_andnot_ps(zmm3, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_3e0_1 = _mm256_maskstore_ps(zmm0, arg12)
                
                zmm0 = _mm256_cmp_ps(arg12, arg9, 1)
                zmm3 = _mm256_and_ps(zmm0, zmm2)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_3c0_1 = _mm256_maskstore_ps(zmm3, arg9)
                
                zmm0 = _mm256_andnot_ps(zmm0, zmm2)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm3 = _mm256_cmp_ps(arg12, arg8, 1)
                    zmm4 = _mm256_and_ps(zmm0, zmm3)
                    
                    if (_mm256_movemask_ps(zmm4) != 0)
                        var_3c0_1 = _mm256_maskstore_ps(zmm4, 
                            __vxorps_ymmqq_ymmqq_memqq(arg8, data_142fc9460))
                    
                    zmm0 = _mm256_andnot_ps(zmm3, zmm0)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        var_3c0_1 = _mm256_maskstore_ps(zmm0, arg12)
                
                zmm0 = var_400_1
                zmm1 = var_3e0_1
                zmm0 = _mm256_add_ps(
                    _mm256_add_ps(_mm256_add_ps(_mm256_mul_ps(zmm0, zmm0), arg12), 
                        _mm256_mul_ps(zmm1, zmm1)), 
                    _mm256_mul_ps(var_3c0_1, var_3c0_1))
                zmm1 = _mm256_rsqrt_ps(zmm0)
                zmm0 = _mm256_mul_ps(zmm1, _mm256_mul_ps(zmm0, zmm1))
                zmm0 = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(zmm1, _mm256_sub_ps(data_142fc9480, zmm0)), data_142fc94a0)
                zmm1 = _mm256_rcp_ps(zmm0)
                zmm0 = _mm256_mul_ps(zmm1, zmm0)
                zmm3 = data_142fc94c0
                arg5 = _mm256_blendv_ps(arg5, _mm256_mul_ps(zmm1, _mm256_sub_ps(zmm3, zmm0)), zmm2)
            
            zmm0 = _mm256_cmp_ps(arg5, _mm256_broadcast_ss(*arg17), 1)
            char i_2 = _mm256_movemask_ps(zmm0)
            
            if (i_2 == 0)
                result = 0
                r13 = zx.q(r13.d + 8)
                
                if (r13.d s>= r12_4)
                    break
                
                continue
            else
                zmm0 = var_420
                zmm1 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm0, var_370, 1)
                uint64_t i = zx.q(i_2)
                result = 0
                
                do
                    uint64_t rdi_2
                    
                    if (i == 0)
                        rdi_2 = 0x40
                        i &= 0xfffffffffffffffe
                        
                        if ((result.b & 1) == 0)
                        label_14008bf51:
                            float var_240[0x8] = arg5
                            uint64_t rdi_3 = zx.q(rdi_2.d) & 7
                            zmm0[0].o = var_240[rdi_3]
                            *arg17 = zmm0[0]
                            double var_220[0x4] = zmm1
                            *arg16 = *(&var_220 + (rdi_3 << 2))
                    else
                        uint64_t rflags_1
                        rdi_2, rflags_1 = _bit_scan_forward(i)
                        i &= not.q(1 << (rdi_2 u% 0x40))
                        
                        if ((result.b & 1) == 0)
                            goto label_14008bf51
                    result.b = 1
                while (i != 0)
        
        r13 = zx.q(r13.d + 8)
        
        if (r13.d s>= r12_4)
            break

if (r13.d s< arg18)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm0[0].o = zx.o(r13.d)
        zmm0[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm0[0].o, 0)
        zmm1[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142e11d00)
        zmm0[0].o = __vpaddd_xmmdq_xmmdq_memdq(zmm0[0].o, data_142fc9500)
        zmm2 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm3[0].o = zx.o(arg18)
        zmm4[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm3[0].o, 0)
        arg9 = _mm256_insertf128_ps(zmm4, zmm4[0].o, 1)
        zmm0[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
        arg13 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        zmm0[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm4[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
        zmm1[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        zmm0 = _mm256_maskload_ps(arg13, *(arg15 + sx.q(r13.d << 2)))
        int32_t var_2c0_1[0x4] = zmm2[0].o
        zmm4[0].o = __vpcmpgtd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
        int128_t var_350_1 = zmm1[0].o
        arg6 = _mm256_insertf128_ps(zmm4, zmm1[0].o, 1)
        zmm4[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        zmm4[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        float var_2a0_1[0x8] = zmm0
        zmm5[0].o = __vpaddd_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
        zmm4 = _mm256_insertf128_ps(zmm5, zmm4[0].o, 1)
        zmm5 = _mm256_and_ps(arg6, zmm4)
        int64_t rax_40 = sx.q(zmm5[0])
        var_420[0].q = rax_40
        int64_t r13_2 = arg4 + (rax_40 << 2)
        int64_t rax_42 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 1))
        var_370[0] = rax_42
        int64_t rax_43 = arg4 + (rax_42 << 2)
        arg5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
        int64_t r12_5 = sx.q(arg5[0])
        int64_t rbx_2 = arg4 + (r12_5 << 2)
        int64_t r15_1 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 1))
        int64_t rdi_4 = arg4 + (r15_1 << 2)
        arg7 = __vandps_ymmqq_ymmqq_memqq(arg6, data_142fc9520)
        zmm4[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
        zmm2[0].o = *(zx.q(zmm4[0]) + rbx_2)
        arg6 = __vandps_ymmqq_ymmqq_memqq(arg6, data_142fc9540)
        zmm3[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
        zmm0[0].o = *(zx.q(zmm3[0]) + rbx_2)
        int32_t temp0_267 = __vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 2)
        uint64_t rbx_3 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 1))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_3 + rdi_4), 0x10)
        uint64_t rbx_4 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 1))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_4 + rdi_4), 0x10)
        int64_t r14_2 = sx.q(temp0_267)
        int64_t rdi_5 = arg4 + (r14_2 << 2)
        uint64_t rbx_5 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 2))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rbx_5 + rdi_5), 0x20)
        uint64_t rbx_6 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 2))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rbx_6 + rdi_5), 0x20)
        int64_t rdi_7 = sx.q(__vpextrd_gpr32d_xmmdq_immb(arg5[0].o, 3))
        arg5[0].o = *(zx.q(arg7[0]) + r13_2)
        zmm1[0].o = *(zx.q(arg6[0]) + r13_2)
        int64_t rbx_9 = arg4 + (rdi_7 << 2)
        uint64_t rsi_8 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm4[0].o, 3))
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(rsi_8 + rbx_9), 0x30)
        uint64_t rsi_9 = zx.q(__vpextrd_gpr32d_xmmdq_immb(zmm3[0].o, 3))
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(rsi_9 + rbx_9), 0x30)
        int32_t temp0_281 = __vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 2)
        float* rbx_10 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 1))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(rbx_10 + rax_43), 0x10)
        uint64_t rbx_11 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 1))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_11 + rax_43), 0x10)
        int64_t rsi_11 = sx.q(temp0_281)
        int64_t rbx_12 = arg4 + (rsi_11 << 2)
        uint64_t rax_48 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 2))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rax_48 + rbx_12), 0x20)
        uint64_t rax_49 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 2))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rax_49 + rbx_12), 0x20)
        zmm4[0].o = *(arg4 + (var_420[0].q << 2))
        arg5[0].o = *(arg4 + (r12_5 << 2))
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + (r15_1 << 2)), 0x10)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + (r14_2 << 2)), 0x20)
        arg5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, *(arg4 + (rdi_7 << 2)), 0x30)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (var_370[0] << 2)), 0x10)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rsi_11 << 2)), 0x20)
        int64_t rax_53 = sx.q(__vpextrd_gpr32d_xmmdq_immb(zmm5[0].o, 3))
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, *(arg4 + (rax_53 << 2)), 0x30)
        int64_t rax_54 = arg4 + (rax_53 << 2)
        uint64_t rbx_13 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg7[0].o, 3))
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(rbx_13 + rax_54), 0x30)
        uint64_t rbx_14 = zx.q(__vpextrd_gpr32d_xmmdq_immb(arg6[0].o, 3))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(rbx_14 + rax_54), 0x30)
        zmm4 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        int32_t var_200_1[0x8] = zmm4
        float var_1e0_1[0x8] = zmm2
        float var_1c0_1[0x8] = zmm0
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        double var_1a0_1[0x4] = zmm1
        zmm3 = _mm256_broadcast_ss(arg3[3])
        int32_t var_400_2[0x8] = zmm3
        int32_t var_3e0_2[0x8] = zmm3
        int32_t var_3c0_2[0x8] = zmm3
        int32_t var_3a0_2[0x8] = zmm3
        zmm5 = _mm256_broadcast_ss(arg3[1])
        arg5 = _mm256_mul_ps(zmm0, zmm5)
        arg6 = _mm256_broadcast_ss(arg3[2])
        arg7 = _mm256_mul_ps(zmm4, arg6)
        arg8 = _mm256_broadcast_ss(*arg3)
        arg10 = _mm256_mul_ps(zmm2, arg8)
        zmm1 = _mm256_mul_ps(zmm3, zmm1)
        zmm2 = _mm256_sub_ps(arg5, _mm256_mul_ps(zmm2, arg6))
        zmm0 = _mm256_sub_ps(arg7, _mm256_mul_ps(zmm0, arg8))
        zmm5 = _mm256_sub_ps(arg10, _mm256_mul_ps(zmm4, zmm5))
        zmm1 = _mm256_sub_ps(zmm1, zmm1)
        zmm4 = _mm256_add_ps(zmm2, zmm2)
        zmm0 = _mm256_add_ps(zmm0, zmm0)
        zmm2 = _mm256_add_ps(zmm5, zmm5)
        zmm1 = _mm256_add_ps(zmm1, zmm1)
        int32_t var_340_2[0x8] = zmm4
        float var_320_2[0x8] = zmm0
        float var_300_2[0x8] = zmm2
        zmm5 = _mm256_mul_ps(zmm3, zmm4)
        arg5 = _mm256_mul_ps(zmm3, zmm0)
        arg6 = _mm256_mul_ps(zmm3, zmm2)
        zmm3 = _mm256_mul_ps(zmm3, zmm1)
        zmm5 = __vaddps_ymmqq_ymmqq_memqq(zmm5, var_200_1)
        arg5 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_1e0_1)
        arg6 = __vaddps_ymmqq_ymmqq_memqq(arg6, var_1c0_1)
        double var_2e0_2[0x4] = zmm1
        float var_180_1[0x8] = zmm5
        float var_160_1[0x8] = arg5
        float var_140_1[0x8] = arg6
        int32_t var_120_1[0x8] = __vaddps_ymmqq_ymmqq_memqq(zmm3, var_1a0_1)
        zmm1 = _mm256_broadcast_ss(arg3[1])
        zmm3 = _mm256_mul_ps(zmm2, zmm1)
        arg7 = _mm256_broadcast_ss(arg3[2])
        arg8 = _mm256_mul_ps(zmm4, arg7)
        arg10 = _mm256_broadcast_ss(*arg3)
        arg7 = _mm256_mul_ps(zmm0, arg7)
        arg11 = _mm256_mul_ps(zmm0, arg10)
        zmm3 = _mm256_sub_ps(zmm3, arg7)
        zmm2 = _mm256_sub_ps(arg8, _mm256_mul_ps(zmm2, arg10))
        arg7 = _mm256_broadcast_ss(arg3[4])
        arg8 = _mm256_broadcast_ss(arg3[5])
        zmm0 = _mm256_broadcast_ss(arg3[6])
        zmm1 = _mm256_sub_ps(arg11, _mm256_mul_ps(zmm4, zmm1))
        zmm3 = _mm256_add_ps(zmm5, zmm3)
        zmm2 = _mm256_add_ps(arg5, zmm2)
        arg10 = _mm256_add_ps(arg6, zmm1)
        arg5 = _mm256_add_ps(zmm3, arg7)
        zmm5 = _mm256_add_ps(zmm2, arg8)
        arg8 = _mm256_broadcast_ss(*arg2)
        zmm3 = _mm256_broadcast_ss(arg2[1])
        arg6 = _mm256_broadcast_ss(arg2[2])
        zmm1 = _mm256_cmp_ps(arg5, arg8, 6)
        arg14 = _mm256_and_ps(zmm1, arg13)
        zmm1[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        zmm4[0].o = _mm256_extractf128_ps(arg13[0].o, 1)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
        zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg13[0].o)
        zmm1 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
        arg12 = _mm256_broadcast_ss(*arg1)
        char temp0_363 = _mm256_movemask_ps(zmm1)
        arg7 = _mm256_broadcast_ss(arg1[1])
        arg11 = _mm256_broadcast_ss(arg1[2])
        int32_t var_420_1[0x8] = zmm3
        
        if (temp0_363 == 0xff)
            arg9 = _mm256_cmp_ps(arg5, arg8, 2)
        else
            zmm1 = _mm256_cmp_ps(arg5, arg8, 2)
            zmm2[0].o = __vpcmpgtd_xmmdq_xmmdq_memdq(arg9[0].o, var_2c0_1)
            zmm3 = _mm256_cmp_ps(zmm5, zmm3, 2)
            arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            arg6[0].o &= var_350_1
            zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
            zmm1[0].o &= zmm3[0].o
            zmm2[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0])
            zmm1[0].o = __vpshufd_xmmdq_xmmdq_immb(zmm1[0].o, 0x4e)
            zmm1[0].o = __vpmovsxwd_xmmdq_xmmq(zmm1[0])
            arg9 = _mm256_insertf128_ps(zmm2, zmm1[0].o, 1)
            arg14 = _mm256_andnot_ps(arg9, arg13)
        
        zmm2 = _mm256_add_ps(arg10, zmm0)
        zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg13[0].o)
        zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
        
        if (_mm256_movemask_ps(zmm0) != 0xff)
            zmm0 = _mm256_cmp_ps(zmm2, arg6, 2)
            zmm1 = _mm256_and_ps(arg9, arg13)
            arg9 = _mm256_and_ps(zmm0, zmm1)
            arg14 = _mm256_xor_ps(arg9, arg13)
        
        arg10 = arg11
        zmm0[0].o = _mm256_extractf128_ps(arg14[0].o, 1)
        zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg14[0].o, arg13[0].o)
        
        if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1)) == 0xff)
            arg14 = arg7
            zmm0 = var_420_1
        else
            arg11 = arg6
            zmm3 = _mm256_and_ps(arg9, arg13)
            zmm4 = _mm256_cmp_ps(arg12, arg5, 2)
            zmm0 = _mm256_cmp_ps(arg12, arg5, 6)
            arg9 = _mm256_and_ps(zmm3, zmm0)
            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
            zmm0 = _mm256_insertf128_ps(zmm1, zmm0[0].o, 1)
            arg14 = arg7
            
            if (_mm256_movemask_ps(zmm0) != 0xff)
                zmm0 = _mm256_cmp_ps(arg14, zmm5, 2)
                zmm1 = _mm256_and_ps(zmm3, zmm4)
                zmm4 = _mm256_and_ps(zmm0, zmm1)
                arg9 = _mm256_xor_ps(zmm4, zmm3)
            
            zmm0[0].o = _mm256_extractf128_ps(arg9[0].o, 1)
            zmm0[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
            zmm1[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm3[0].o)
            
            if (_mm256_movemask_ps(_mm256_insertf128_ps(zmm1, zmm0[0].o, 1)) != 0xff)
                zmm4 = _mm256_and_ps(_mm256_cmp_ps(arg10, zmm2, 2), _mm256_and_ps(zmm4, zmm3))
            
            arg6 = arg11
            zmm0 = var_420_1
            arg9 = _mm256_and_ps(zmm4, zmm3)
        
        arg8 = _mm256_sub_ps(arg5, arg8)
        arg7 = _mm256_sub_ps(zmm5, zmm0)
        zmm4 = _mm256_sub_ps(zmm2, arg6)
        arg6 = _mm256_sub_ps(arg12, arg5)
        zmm5 = _mm256_sub_ps(arg14, zmm5)
        zmm3 = _mm256_sub_ps(arg10, zmm2)
        
        if (_mm256_movemask_ps(_mm256_and_ps(arg9, arg13)) == 0)
            zmm0 = _mm256_andnot_ps(arg9, arg13)
            
            if (_mm256_movemask_ps(zmm0) != 0)
            label_14008c602:
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                arg5 = _mm256_xor_ps(arg9, _mm256_cmp_ps(zmm0, zmm0, 0xf))
                arg9 = _mm256_cmp_ps(zmm0, arg8, 1)
                arg10 = _mm256_and_ps(arg9, arg5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg10, arg13)) != 0)
                    var_400_2 = _mm256_maskstore_ps(arg10, arg8)
                
                arg8 = _mm256_andnot_ps(arg9, arg5)
                zmm0 = _mm256_and_ps(arg8, arg13)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg9 = _mm256_cmp_ps(zmm0, arg6, 1)
                    arg10 = _mm256_and_ps(arg8, arg9)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg10, arg13)) != 0)
                        var_400_2 = _mm256_maskstore_ps(arg10, 
                            __vxorps_ymmqq_ymmqq_memqq(arg6, data_142fc9460))
                    
                    arg6 = _mm256_andnot_ps(arg9, arg8)
                    zmm0 = _mm256_and_ps(arg6, arg13)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        var_400_2 = _mm256_maskstore_ps(arg6, zmm0)
                
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                arg6 = _mm256_cmp_ps(zmm0, arg7, 1)
                arg8 = _mm256_and_ps(arg6, arg5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg8, arg13)) != 0)
                    var_3e0_2 = _mm256_maskstore_ps(arg8, arg7)
                
                arg6 = _mm256_andnot_ps(arg6, arg5)
                zmm0 = _mm256_and_ps(arg6, arg13)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    arg7 = _mm256_cmp_ps(zmm0, zmm5, 1)
                    arg8 = _mm256_and_ps(arg6, arg7)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg8, arg13)) != 0)
                        var_3e0_2 = _mm256_maskstore_ps(arg8, 
                            __vxorps_ymmqq_ymmqq_memqq(zmm5, data_142fc9460))
                    
                    zmm5 = _mm256_andnot_ps(arg7, arg6)
                    zmm0 = _mm256_and_ps(zmm5, arg13)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        var_3e0_2 = _mm256_maskstore_ps(zmm5, zmm0)
                
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm5 = _mm256_cmp_ps(zmm0, zmm4, 1)
                arg6 = _mm256_and_ps(zmm5, arg5)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg6, arg13)) != 0)
                    var_3c0_2 = _mm256_maskstore_ps(arg6, zmm4)
                
                zmm4 = _mm256_andnot_ps(zmm5, arg5)
                zmm0 = _mm256_and_ps(zmm4, arg13)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                    zmm5 = _mm256_cmp_ps(zmm0, zmm3, 1)
                    arg6 = _mm256_and_ps(zmm4, zmm5)
                    
                    if (_mm256_movemask_ps(_mm256_and_ps(arg6, arg13)) != 0)
                        var_3c0_2 = _mm256_maskstore_ps(arg6, 
                            __vxorps_ymmqq_ymmqq_memqq(zmm3, data_142fc9460))
                    
                    zmm3 = _mm256_andnot_ps(zmm5, zmm4)
                    zmm0 = _mm256_and_ps(zmm3, arg13)
                    
                    if (_mm256_movemask_ps(zmm0) != 0)
                        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                        var_3c0_2 = _mm256_maskstore_ps(zmm3, zmm0)
                
                zmm0 = var_400_2
                zmm1 = var_3e0_2
                zmm0 = _mm256_mul_ps(zmm0, zmm0)
                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                zmm0 = _mm256_add_ps(
                    _mm256_add_ps(_mm256_add_ps(zmm0, zmm4), _mm256_mul_ps(zmm1, zmm1)), 
                    _mm256_mul_ps(var_3c0_2, var_3c0_2))
                zmm1 = _mm256_rsqrt_ps(zmm0)
                zmm0 = _mm256_mul_ps(zmm1, _mm256_mul_ps(zmm0, zmm1))
                zmm0 = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(zmm1, _mm256_sub_ps(data_142fc9480, zmm0)), data_142fc94a0)
                zmm1 = _mm256_rcp_ps(zmm0)
                zmm0 = _mm256_mul_ps(zmm1, zmm0)
                zmm2 = _mm256_blendv_ps(zmm2, 
                    _mm256_mul_ps(zmm1, _mm256_sub_ps(data_142fc94c0, zmm0)), arg5)
        else
            zmm2 = _mm256_max_ps(arg6, arg8)
            arg10 = _mm256_max_ps(zmm5, arg7)
            arg5 = _mm256_max_ps(zmm3, zmm4)
            arg11 = _mm256_cmp_ps(arg10, zmm2, 1)
            arg12 = _mm256_and_ps(arg9, arg11)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg12, arg13)) != 0)
                arg12 = _mm256_and_ps(_mm256_cmp_ps(arg5, zmm2, 5), arg12)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg12, arg13)) != 0)
                    zmm2 = _mm256_blendv_ps(zmm2, arg5, arg12)
            
            arg11 = _mm256_andnot_ps(arg11, arg9)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg11, arg13)) != 0)
                arg12 = _mm256_cmp_ps(arg5, arg10, 1)
                zmm0 = _mm256_and_ps(arg11, arg12)
                
                if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
                    zmm2 = _mm256_blendv_ps(zmm2, arg10, zmm0)
                
                arg10 = _mm256_andnot_ps(arg12, arg11)
                
                if (_mm256_movemask_ps(_mm256_and_ps(arg10, arg13)) != 0)
                    zmm2 = _mm256_blendv_ps(zmm2, arg5, arg10)
            
            zmm0 = _mm256_andnot_ps(arg9, arg13)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                goto label_14008c602
        
        zmm0 = _mm256_and_ps(_mm256_cmp_ps(zmm2, _mm256_broadcast_ss(*arg17), 1), arg13)
        int32_t i_3 = _mm256_movemask_ps(zmm0)
        
        if (i_3 == 0)
            result = 0
        else
            uint64_t i_1 = zx.q(i_3)
            result = 0
            
            do
                uint64_t rdx
                
                if (i_1 == 0)
                    rdx = 0x40
                    i_1 &= 0xfffffffffffffffe
                    
                    if ((result.b & 1) == 0)
                    label_14008c831:
                        float var_280[0x8] = zmm2
                        uint64_t rdx_1 = zx.q(rdx.d) & 7
                        zmm0[0].o = var_280[rdx_1]
                        *arg17 = zmm0[0]
                        double var_260[0x4] = var_2a0_1
                        *arg16 = *(&var_260 + (rdx_1 << 2))
                else
                    uint64_t rflags_2
                    rdx, rflags_2 = _bit_scan_forward(i_1)
                    i_1 &= not.q(1 << (rdx u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        goto label_14008c831
                result.b = 1
            while (i_1 != 0)

arg5[0].o = var_e8
arg6[0].o = var_d8
arg7[0].o = var_c8
arg8[0].o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
_mm256_zeroupper()
return result
