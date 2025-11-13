// 函数: sub_140068100
// 地址: 0x140068100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg17[0].o
int128_t var_68 = arg16[0].o
int128_t var_78 = arg15[0].o
int128_t var_88 = arg14[0].o
int128_t var_98 = arg13[0].o
int128_t var_a8 = arg12[0].o
int128_t var_b8 = arg11[0].o
int128_t var_c8 = arg10[0].o
int128_t var_d8 = arg9[0].o
int128_t var_e8 = arg8[0].o
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
float zmm2[0x8] = _mm256_broadcast_ss(0.5f)
float zmm1[0x8]
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
float var_320[0x8] = zmm2
zmm0 = _mm256_mul_ps(zmm0, zmm2)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float var_5b0 = zmm1[0]
float temp0_7 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float temp0_8 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float var_5c0 = zmm0[0]
float temp0_12 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
int32_t r12_4 = ((arg24 s>> 0x1f u>> 0x1d) + arg24) & 0xfffffff8
int32_t result
uint64_t rbx

if (r12_4 s<= 0)
    rbx = 0
    result = 0
else
    result = 0
    float var_2a0_1[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
    float var_2c0_1[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
    arg13 = _mm256_cmpeq_epi32(arg13, arg13)
    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
    float var_2e0_1[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
    zmm0 = _mm256_broadcast_ss(1.12103877e-44f)
    float var_300_1[0x8] = zmm0
    rbx = 0
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            arg5 = *(arg21 + sx.q((rbx << 2).d))
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg5, var_2a0_1)
            zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            int64_t temp0_23
            int32_t temp1_1
            temp0_23, temp1_1 = _mm256_i32gather_ps(zmm2, *(arg20 + (zmm0[0].q << 2)), zmm1)
            zmm2 = temp0_23
            int32_t var_460_1[0x8] = arg5
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(arg5, var_2c0_1)
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_2e0_1)
            arg5 = _mm256_cmpeq_epi32(arg5, arg5)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            int64_t temp0_28
            int32_t temp1_2
            temp0_28, temp1_2 = _mm256_i32gather_ps(arg6, *(arg20 + zmm1[0].q), arg5)
            arg6 = temp0_28
            arg5 = temp1_2
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_300_1)
            zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            int64_t temp0_32
            int32_t temp1_3
            temp0_32, temp1_3 = _mm256_i32gather_ps(arg5, *(arg20 + zmm0[0].q), zmm1)
            arg5 = temp0_32
            float var_500_1[0x8] = zmm2
            float var_4e0_1[0x8] = arg6
            int32_t var_4c0_1[0x8] = arg5
            float var_4a0_1[0x8] = arg7
            zmm0 = _mm256_broadcast_ss(arg19[3])
            float var_5a0_1[0x8] = zmm0
            float var_580_1[0x8] = zmm0
            float var_560_1[0x8] = zmm0
            float var_540_1[0x8] = zmm0
            arg7 = _mm256_broadcast_ss(arg19[1])
            arg8 = _mm256_broadcast_ss(arg19[2])
            zmm1 = _mm256_broadcast_ss(*arg19)
            arg9 = _mm256_mul_ps(arg6, arg8)
            arg10 = _mm256_mul_ps(arg5, zmm1)
            arg11 = _mm256_mul_ps(zmm2, arg7)
            arg5 = _mm256_fmsub_ps(arg5, arg7, arg9)
            zmm2 = _mm256_fmsub_ps(zmm2, arg8, arg10)
            arg6 = _mm256_fmsub_ps(arg6, zmm1, arg11)
            arg9 = _mm256_add_ps(arg5, arg5)
            arg5 = _mm256_add_ps(zmm2, zmm2)
            zmm2 = _mm256_add_ps(arg6, arg6)
            arg10 = _mm256_fmadd_ps(var_500_1, zmm0, arg9)
            arg11 = _mm256_fmadd_ps(var_4e0_1, zmm0, arg5)
            zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, zmm2, var_4c0_1)
            arg12 = _mm256_fmsub_ps(_mm256_mul_ps(arg5, arg8), zmm2, arg7)
            zmm2 = _mm256_mul_ps(zmm2, zmm1)
            arg6 = _mm256_mul_ps(arg9, arg7)
            arg10 = _mm256_add_ps(arg10, arg12)
            arg7 = _mm256_add_ps(arg11, _mm256_fmsub_ps(zmm2, arg9, arg8))
            arg11 = _mm256_add_ps(arg10, _mm256_broadcast_ss(arg19[4]))
            arg8 = _mm256_broadcast_ss(arg19[5])
            zmm2 = _mm256_broadcast_ss(arg19[6])
            arg10 = _mm256_broadcast_ss(var_5b0)
            arg9 = _mm256_cmp_ps(arg10, arg11, 1)
            
            if (_mm256_movemask_ps(arg9) != 0)
                var_5a0_1 = _mm256_maskstore_ps(arg9, arg10)
            
            zmm1 = _mm256_fmsub_ps(zmm1, arg5, arg6)
            arg10 = _mm256_add_ps(arg7, arg8)
            arg5 = _mm256_xor_ps(arg9, arg13)
            
            if (_mm256_movemask_ps(arg5) != 0)
                arg7 = _mm256_broadcast_ss(var_5c0)
                arg6 = _mm256_cmp_ps(arg11, arg7, 1)
                arg8 = _mm256_and_ps(arg6, arg5)
                
                if (_mm256_movemask_ps(arg8) != 0)
                    var_5a0_1 = _mm256_maskstore_ps(arg8, arg7)
                
                arg5 = _mm256_andnot_ps(arg6, arg5)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_5a0_1 = _mm256_maskstore_ps(arg5, arg11)
            
            zmm0 = _mm256_add_ps(zmm0, zmm1)
            arg5 = _mm256_broadcast_ss(temp0_7)
            zmm1 = _mm256_cmp_ps(arg5, arg10, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_580_1 = _mm256_maskstore_ps(zmm1, arg5)
            
            arg6 = _mm256_add_ps(zmm0, zmm2)
            zmm0 = _mm256_xor_ps(zmm1, arg13)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm2 = _mm256_broadcast_ss(temp0_12)
                zmm1 = _mm256_cmp_ps(arg10, zmm2, 1)
                arg5 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_580_1 = _mm256_maskstore_ps(arg5, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_580_1 = _mm256_maskstore_ps(zmm0, arg10)
            
            zmm1 = _mm256_broadcast_ss(temp0_8)
            zmm0 = _mm256_cmp_ps(zmm1, arg6, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_560_1 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm0 = _mm256_xor_ps(zmm0, arg13)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm2 = _mm256_broadcast_ss(temp0_13)
                zmm1 = _mm256_cmp_ps(arg6, zmm2, 1)
                arg5 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(arg5) != 0)
                    var_560_1 = _mm256_maskstore_ps(arg5, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_560_1 = _mm256_maskstore_ps(zmm0, arg6)
            
            float var_340_1[0x8] = arg6
            float var_440_1[0x8] = arg11
            float var_520_1[0x8] = arg10
            arg15 = var_5a0_1
            arg12 = _mm256_broadcast_ss(*arg1)
            zmm0 = _mm256_sub_ps(arg15, arg12)
            arg13 = _mm256_broadcast_ss(*(arg1 + 4))
            zmm1 = _mm256_sub_ps(var_580_1, arg13)
            arg7 = _mm256_broadcast_ss(arg1[1].d)
            arg5 = _mm256_sub_ps(var_560_1, arg7)
            arg17 = _mm256_broadcast_ss(*arg3)
            arg6 = _mm256_div_ps(zmm0, arg17)
            zmm0 = _mm256_broadcast_ss(*(arg3 + 4))
            arg9 = _mm256_div_ps(zmm1, zmm0)
            zmm1 = _mm256_broadcast_ss(arg3[1].d)
            arg10 = _mm256_div_ps(arg5, zmm1)
            arg5 = _mm256_cvttps_epi32(arg6)
            arg16 = _mm256_cvttps_epi32(arg9)
            zmm2 = _mm256_cvttps_epi32(arg10)
            arg6 = _mm256_cvtepi32_ps(arg5)
            arg9 = _mm256_cvtepi32_ps(arg16)
            float var_480_1[0x8] = zmm2
            arg14 = _mm256_cvtepi32_ps(zmm2)
            arg6 = _mm256_fmadd_ps(arg6, arg17, arg12)
            arg9 = _mm256_fmadd_ps(arg9, zmm0, arg13)
            float var_3c0_1[0x8] = arg7
            arg14 = _mm256_fmadd_ps(arg14, zmm1, arg7)
            zmm2[0].o = __vmovsd_xmmdq_memq(*arg3)
            arg7 = _mm256_broadcast_ss(2f)
            float var_420_1[0x8] = arg7
            zmm2[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
            arg7 = _mm256_broadcastss_ps(zmm2[0].o)
            float var_3e0_1[0x8] = arg7
            arg6 = _mm256_add_ps(arg7, arg6)
            arg7[0].o = __vmovshdup_xmmdq_xmmdq(zmm2[0].o)
            arg7 = _mm256_broadcastsd_pd(arg7[0].o)
            float var_400_1[0x8] = arg7
            arg11 = _mm256_add_ps(arg7, arg9)
            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xea)
            int32_t var_3a0_1[0x8] = arg15
            arg6 = _mm256_cmp_ps(arg6, arg15, 1)
            arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg5, data_142fc9420)
            arg6 = _mm256_blendv_ps(arg9, arg5, arg6)
            float var_5a0_2[0x8] = arg6
            arg10 = _mm256_broadcastsd_pd(zmm2[0].o)
            arg15 = _mm256_cmp_ps(arg11, var_580_1, 1)
            
            if (_mm256_movemask_ps(arg15) != 0)
                arg5 = arg16
            
            arg14 = _mm256_add_ps(arg10, arg14)
            zmm2 = _mm256_cmp_ps(arg11, var_580_1, 5)
            arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg16, data_142fc9420)
            
            arg16 = _mm256_blendv_ps(arg9, arg5, arg15)
            int32_t var_580_2[0x8] = arg16
            arg15 = _mm256_cmp_ps(arg14, var_560_1, 1)
            
            if (_mm256_movemask_ps(arg15) != 0)
                arg5 = var_480_1
            
            zmm2 = _mm256_cmp_ps(arg14, var_560_1, 5)
            arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
            zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            arg14 = var_560_1
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
                arg9 = __vpaddd_ymmqq_ymmqq_memqq(var_480_1, data_142fc9420)
            
            zmm2 = _mm256_blendv_ps(arg9, arg5, arg15)
            arg5 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg6), arg17, arg12)
            arg7 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg16), zmm0, arg13)
            arg9 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), zmm1, var_3c0_1)
            arg5 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_3e0_1)
            arg7 = __vaddps_ymmqq_ymmqq_memqq(arg7, var_400_1)
            arg8 = _mm256_add_ps(arg10, arg9)
            arg10 = var_3a0_1
            arg5 = _mm256_div_ps(_mm256_sub_ps(arg10, arg5), arg17)
            zmm0 = _mm256_div_ps(_mm256_sub_ps(var_580_1, arg7), zmm0)
            arg7 = _mm256_sub_ps(arg14, arg8)
            zmm1 = _mm256_div_ps(arg7, zmm1)
            float var_560_2[0x8] = zmm2
            int32_t var_500_2[0x8] = arg5
            float var_4e0_2[0x8] = zmm0
            float var_4c0_2[0x8] = zmm1
            arg12 = _mm256_cmpeq_epi32(arg12, arg12)
            zmm0 = _mm256_cmpeq_epi32(arg6, arg12)
            bool cond:5_1 = _mm256_movemask_ps(zmm0) == 0
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            
            if (not(cond:5_1))
                var_5a0_2 = _mm256_maskstore_ps(zmm0, arg7)
                var_500_2 = _mm256_maskstore_ps(zmm0, arg7)
                arg6 = var_5a0_2
            
            int32_t rax_21 = *arg4
            zmm0[0].o = zx.o(rax_21 - 1)
            zmm0 = _mm256_cmpeq_epi32(arg6, _mm256_broadcastd_epi32(zmm0[0]))
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rax_21 - 2)
                var_5a0_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                var_500_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
            
            zmm0 = var_580_2
            zmm1 = _mm256_cmpeq_epi32(zmm0, arg12)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_580_2 = _mm256_maskstore_ps(zmm1, arg7)
                var_4e0_2 = _mm256_maskstore_ps(zmm1, arg7)
                zmm0 = var_580_2
            
            zmm1 = _mm256_sub_ps(arg10, var_440_1)
            int32_t rax_24 = arg4[1]
            zmm2[0].o = zx.o(rax_24 - 1)
            zmm2 = _mm256_broadcastd_epi32(zmm2[0])
            zmm0 = _mm256_cmpeq_epi32(zmm0, zmm2)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm2[0].o = zx.o(rax_24 - 2)
                var_580_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm2[0]))
                var_4e0_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
            
            zmm2 = _mm256_sub_ps(arg14, var_340_1)
            arg11 = _mm256_sub_ps(var_580_1, var_520_1)
            zmm1 = _mm256_fmadd_ps(zmm1, zmm1, arg7)
            zmm0 = var_560_2
            arg5 = _mm256_cmpeq_epi32(zmm0, arg12)
            
            if (_mm256_movemask_ps(arg5) != 0)
                float var_560_3[0x8] = _mm256_maskstore_ps(arg5, arg7)
                var_4c0_2 = _mm256_maskstore_ps(arg5, arg7)
                zmm0 = var_560_3
            
            float var_520_2[0x8] = _mm256_mul_ps(zmm2, zmm2)
            arg11 = _mm256_fmadd_ps(arg11, arg11, zmm1)
            int32_t rax_27 = arg4[2]
            zmm1[0].o = zx.o(rax_27 - 1)
            zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm0[0].o = zx.o(rax_27 - 2)
                float var_560_4[0x8] = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
                var_4c0_2 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                zmm0 = var_560_4
            
            zmm2 = __vpbroadcastd_ymmqq_memd(*(arg18 + 4))
            arg5 = var_5a0_2
            arg8 = var_580_2
            arg10 = _mm256_mullo_epi32(zmm2, arg5)
            zmm1 = _mm256_add_epi32(arg10, arg8)
            arg13 = __vpbroadcastd_ymmqq_memd(*(arg18 + 8))
            arg7 = _mm256_mullo_epi32(zmm1, arg13)
            zmm1 = _mm256_add_epi32(arg7, zmm0)
            int64_t rax_30 = *(arg18 + 0x10)
            arg6 = _mm256_slli_epi32(zmm1, 2)
            arg9 = _mm256_cmpeq_epi32(var_580_1, var_580_1)
            zmm1[0].o = zx.o(0)
            int64_t temp0_223
            int32_t temp1_4
            temp0_223, temp1_4 = _mm256_i32gather_ps(zmm1, *(rax_30 + arg6[0].q), arg9)
            zmm1 = temp0_223
            arg5 = _mm256_sub_epi32(arg5, arg12)
            arg14 = _mm256_mullo_epi32(zmm2, arg5)
            arg9 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, arg8), arg13)
            zmm2 = _mm256_slli_epi32(_mm256_add_epi32(arg9, zmm0), 2)
            arg5 = _mm256_cmpeq_epi32(arg5, arg5)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            int64_t temp0_232
            int32_t temp1_5
            temp0_232, temp1_5 = _mm256_i32gather_ps(arg6, *(rax_30 + zmm2[0].q), arg5)
            arg12 = _mm256_cmpeq_epi32(arg12, arg12)
            arg15 = _mm256_sub_epi32(arg8, arg12)
            arg10 = _mm256_mullo_epi32(_mm256_add_epi32(arg10, arg15), arg13)
            arg8 = _mm256_add_epi32(arg10, zmm0)
            arg16 = _mm256_slli_epi32(arg8, 2)
            arg17 = _mm256_cmpeq_epi32(arg17, arg17)
            arg8[0].o = zx.o(0)
            int64_t temp0_240
            int32_t temp1_6
            temp0_240, temp1_6 = _mm256_i32gather_ps(arg8, *(rax_30 + arg16[0].q), arg17)
            arg8 = temp0_240
            arg17 = temp1_6
            arg13 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, arg15), arg13)
            arg14 = _mm256_slli_epi32(_mm256_add_epi32(arg13, zmm0), 2)
            arg15 = _mm256_cmpeq_epi32(arg15, arg15)
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            int64_t temp0_247
            int32_t temp1_7
            temp0_247, temp1_7 = _mm256_i32gather_ps(arg16, *(rax_30 + arg14[0].q), arg15)
            arg16 = temp0_247
            arg15 = temp1_7
            zmm0 = _mm256_sub_epi32(zmm0, arg12)
            arg7 = _mm256_slli_epi32(_mm256_add_epi32(arg7, zmm0), 2)
            arg14 = _mm256_cmpeq_epi32(arg14, arg14)
            arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            int64_t temp0_253
            int32_t temp1_8
            temp0_253, temp1_8 = _mm256_i32gather_ps(arg15, *(rax_30 + arg7[0].q), arg14)
            arg15 = temp0_253
            arg14 = temp1_8
            arg7 = _mm256_slli_epi32(_mm256_add_epi32(arg9, zmm0), 2)
            arg9 = _mm256_cmpeq_epi32(arg9, arg9)
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            int64_t temp0_258
            int32_t temp1_9
            temp0_258, temp1_9 = _mm256_i32gather_ps(arg14, *(rax_30 + arg7[0].q), arg9)
            arg14 = temp0_258
            arg9 = temp1_9
            arg7 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
            arg9 = _mm256_cmpeq_epi32(arg9, arg9)
            arg10[0].o = zx.o(0)
            int64_t temp0_262
            int32_t temp1_10
            temp0_262, temp1_10 = _mm256_i32gather_ps(arg10, *(rax_30 + arg7[0].q), arg9)
            arg10 = temp0_262
            arg9 = temp1_10
            arg6 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_232, zmm1), var_500_2, zmm1)
            zmm1 = _mm256_sub_ps(arg16, arg8)
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg13, zmm0), 2)
            arg7 = _mm256_cmpeq_epi32(arg7, arg7)
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            int64_t temp0_270
            int32_t temp1_11
            temp0_270, temp1_11 = _mm256_i32gather_ps(arg9, *(rax_30 + zmm0[0].q), arg7)
            arg9 = temp0_270
            zmm1 = _mm256_fmadd_ps(zmm1, var_500_2, arg8)
            zmm0 = _mm256_fmadd_ps(_mm256_sub_ps(arg14, arg15), var_500_2, arg15)
            arg7 = _mm256_fmadd_ps(_mm256_sub_ps(arg9, arg10), var_500_2, arg10)
            zmm1 = _mm256_fmadd_ps(_mm256_sub_ps(zmm1, arg6), var_4e0_2, arg6)
            arg5 = _mm256_fmadd_ps(_mm256_sub_ps(arg7, zmm0), var_4e0_2, zmm0)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(_mm256_sub_ps(arg5, zmm1), zmm1, var_4c0_2)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg11, var_520_2)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            zmm1 = _mm256_cmp_ps(zmm2, arg7, 0xc)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                arg5 = _mm256_rsqrt_ps(zmm2)
                zmm2 = _mm256_mul_ps(zmm2, arg5)
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(arg5, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), arg5, zmm2)), 
                    var_320)
                arg5 = _mm256_rcp_ps(zmm2)
                arg6 = _mm256_fmadd_ps(_mm256_fnmadd_ps(var_420_1, arg5, zmm2), arg5, zmm0)
                zmm0 = _mm256_blendv_ps(zmm0, arg6, zmm1)
            
            arg13 = _mm256_cmpeq_epi32(arg13, arg13)
            zmm2 = var_460_1
            zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg23), 1)
            char i_2 = _mm256_movemask_ps(zmm1)
            
            if (i_2 == 0)
                result = 0
                rbx = zx.q(rbx.d + 8)
                
                if (rbx.d s>= r12_4)
                    break
                
                continue
            else
                uint64_t i = zx.q(i_2)
                result = 0
                
                do
                    uint64_t r11_2 = _tzcnt_u64(i)
                    i &= not.q(1 << (r11_2 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        float var_240[0x8] = zmm0
                        uint64_t r11_3 = zx.q(r11_2.d) & 7
                        zmm1[0].o = var_240[r11_3]
                        *arg23 = zmm1[0]
                        float var_220[0x8] = zmm2
                        *arg22 = var_220[r11_3]
                    
                    result.b = 1
                while (i != 0)
        
        rbx = zx.q(rbx.d + 8)
        
        if (rbx.d s>= r12_4)
            break

if (rbx.d s< arg24)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm0[0].o = zx.o(rbx.d)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
        zmm1[0].o = zx.o(arg24)
        arg15 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
        zmm2 = _mm256_maskload_ps(arg15, *(arg21 + sx.q(rbx.d << 2)))
        zmm0 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(3))
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        int64_t temp0_307
        int32_t temp1_12
        temp0_307, temp1_12 = _mm256_i32gather_ps(arg5, *(arg20 + (zmm0[0].q << 2)), arg15)
        arg5 = temp0_307
        zmm0 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(0xc))
        zmm1 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(4))
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int64_t temp0_313
        int32_t temp1_13
        temp0_313, temp1_13 = _mm256_i32gather_ps(arg6, *(arg20 + zmm1[0].q), arg15)
        arg6 = temp0_313
        arg7 = temp1_13
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        zmm0 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        int64_t temp0_318
        int32_t temp1_14
        temp0_318, temp1_14 = _mm256_i32gather_ps(arg8, *(arg20 + zmm0[0].q), arg15)
        arg8 = temp0_318
        float var_200_1[0x8] = arg5
        float var_1e0_1[0x8] = arg6
        float var_1c0_1[0x8] = arg8
        float var_1a0_1[0x8] = arg7
        zmm1 = _mm256_broadcast_ss(arg19[3])
        float var_5a0_3[0x8] = zmm1
        float var_580_3[0x8] = zmm1
        float var_560_5[0x8] = zmm1
        float var_540_2[0x8] = zmm1
        zmm0 = _mm256_broadcast_ss(arg19[1])
        arg9 = _mm256_broadcast_ss(arg19[2])
        arg10 = _mm256_broadcast_ss(*arg19)
        arg7 = _mm256_mul_ps(zmm1, arg7)
        arg11 = _mm256_mul_ps(arg6, arg9)
        arg12 = _mm256_mul_ps(arg8, arg10)
        arg13 = _mm256_mul_ps(arg5, zmm0)
        arg11 = _mm256_fmsub_ps(arg11, zmm0, arg8)
        arg12 = _mm256_fmsub_ps(arg12, arg9, arg5)
        arg13 = _mm256_fmsub_ps(arg13, arg10, arg6)
        zmm0 = _mm256_sub_ps(arg7, arg7)
        arg5 = _mm256_add_ps(arg11, arg11)
        arg7 = _mm256_add_ps(arg12, arg12)
        arg8 = _mm256_add_ps(arg13, arg13)
        arg6 = _mm256_add_ps(zmm0, zmm0)
        int32_t var_500_3[0x8] = arg5
        float var_4e0_3[0x8] = arg7
        float var_4c0_3[0x8] = arg8
        float var_4a0_2[0x8] = arg6
        arg9 = _mm256_fmadd_ps(var_200_1, zmm1, arg5)
        arg10 = _mm256_fmadd_ps(var_1e0_1, zmm1, arg7)
        zmm0 = _mm256_fmadd_ps(var_1c0_1, zmm1, arg8)
        float var_180_1[0x8] = arg9
        float var_160_1[0x8] = arg10
        float var_140_1[0x8] = zmm0
        float var_120_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, zmm1, var_1a0_1)
        arg11 = _mm256_broadcast_ss(arg19[1])
        arg12 = _mm256_broadcast_ss(arg19[2])
        arg6 = _mm256_broadcast_ss(*arg19)
        arg13 = _mm256_mul_ps(arg7, arg12)
        arg14 = _mm256_mul_ps(arg8, arg6)
        zmm1 = _mm256_mul_ps(arg5, arg11)
        arg13 = _mm256_fmsub_ps(arg13, arg8, arg11)
        arg14 = _mm256_fmsub_ps(arg14, arg5, arg12)
        arg5 = _mm256_add_ps(arg9, arg13)
        arg9 = _mm256_add_ps(arg10, arg14)
        arg14 = _mm256_add_ps(arg5, _mm256_broadcast_ss(arg19[4]))
        arg10 = _mm256_broadcast_ss(arg19[5])
        arg13 = _mm256_broadcast_ss(arg19[6])
        arg11 = _mm256_broadcast_ss(var_5b0)
        arg8 = _mm256_cmp_ps(arg11, arg14, 1)
        arg12 = _mm256_and_ps(arg8, arg15)
        arg5[0].o = _mm256_extractf128_ps(arg12[0].o, 1)
        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg12[0].o, arg5[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            var_5a0_3 = _mm256_maskstore_ps(arg8, arg11)
        
        arg6 = _mm256_fmsub_ps(arg6, arg7, zmm1)
        arg10 = _mm256_add_ps(arg9, arg10)
        zmm1 = _mm256_andnot_ps(arg8, arg15)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm1 = _mm256_xor_ps(arg8, _mm256_cmpeq_epi32(zmm1, zmm1))
            arg8 = _mm256_broadcast_ss(var_5c0)
            arg7 = _mm256_cmp_ps(arg14, arg8, 1)
            arg9 = _mm256_and_ps(arg7, zmm1)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg9, arg15)) != 0)
                var_5a0_3 = _mm256_maskstore_ps(arg9, arg8)
            
            zmm1 = _mm256_andnot_ps(arg7, zmm1)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm1, arg15)) != 0)
                var_5a0_3 = _mm256_maskstore_ps(zmm1, arg14)
        
        float var_440_2[0x8] = zmm2
        zmm1 = _mm256_add_ps(zmm0, arg6)
        arg6 = _mm256_broadcast_ss(temp0_7)
        zmm0 = _mm256_cmp_ps(arg6, arg10, 1)
        arg5 = _mm256_and_ps(zmm0, arg15)
        arg7[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            var_580_3 = _mm256_maskstore_ps(zmm0, arg6)
        
        arg7 = _mm256_add_ps(zmm1, arg13)
        zmm1 = _mm256_andnot_ps(zmm0, arg15)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm0 ^= _mm256_cmpeq_epi32(zmm1, zmm1)
            arg5 = _mm256_broadcast_ss(temp0_12)
            zmm1 = _mm256_cmp_ps(arg10, arg5, 1)
            arg6 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg6, arg15)) != 0)
                var_580_3 = _mm256_maskstore_ps(arg6, arg5)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg15)) != 0)
                var_580_3 = _mm256_maskstore_ps(zmm0, arg10)
        
        zmm1 = _mm256_broadcast_ss(temp0_8)
        zmm0 = _mm256_cmp_ps(zmm1, arg7, 1)
        zmm2 = _mm256_and_ps(zmm0, arg15)
        arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            var_560_5 = _mm256_maskstore_ps(zmm0, zmm1)
        
        if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg15)) != 0)
            zmm0 = __vxorps_ymmqq_ymmqq_memqq(zmm0, data_142fc9420)
            arg5 = _mm256_broadcast_ss(temp0_13)
            zmm1 = _mm256_cmp_ps(arg7, arg5, 1)
            arg6 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg6, arg15)) != 0)
                var_560_5 = _mm256_maskstore_ps(arg6, arg5)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg15)) != 0)
                var_560_5 = _mm256_maskstore_ps(zmm0, arg7)
        
        float var_380_2[0x8] = arg7
        int32_t var_360_2[0x8] = arg14
        float var_340_2[0x8] = arg10
        arg12 = _mm256_broadcast_ss(*arg1)
        arg5 = _mm256_broadcast_ss(*(arg1 + 4))
        zmm0 = _mm256_sub_ps(var_580_3, arg5)
        arg13 = _mm256_broadcast_ss(*(arg3 + 4))
        zmm1 = _mm256_div_ps(zmm0, arg13)
        zmm0 = _mm256_sub_ps(var_5a0_3, arg12)
        arg16 = _mm256_broadcast_ss(arg1[1].d)
        zmm1 = _mm256_cvttps_epi32(zmm1)
        float var_400_2[0x8] = arg5
        zmm2 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm1), arg13, arg5)
        arg5[0].o = __vmovsd_xmmdq_memq(*arg3)
        arg6 = _mm256_broadcast_ss(2f)
        float var_420_2[0x8] = arg6
        arg8[0].o = __vdivps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
        arg5[0].o = __vmovshdup_xmmdq_xmmdq(arg8[0].o)
        arg5 = _mm256_broadcastsd_pd(arg5[0].o)
        float var_480_2[0x8] = arg5
        zmm2 = _mm256_add_ps(arg5, zmm2)
        arg10 = _mm256_cmp_ps(zmm2, var_580_3, 1)
        arg5 = _mm256_and_ps(arg10, arg15)
        arg6[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
        arg7 = _mm256_broadcast_ss(*arg3)
        zmm0 = _mm256_div_ps(zmm0, arg7)
        arg9 = _mm256_sub_ps(var_560_5, arg16)
        arg6 = _mm256_broadcast_ss(arg3[1].d)
        arg9 = _mm256_div_ps(arg9, arg6)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        char temp0_447 = __vpmovmskb_gpr32d_xmmdq(arg5[0].o)
        arg5 = _mm256_cvttps_epi32(zmm0)
        arg9 = _mm256_cvttps_epi32(arg9)
        float var_3e0_2[0x8] = arg12
        zmm0 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg5), arg7, arg12)
        int32_t var_460_2[0x8] = arg16
        arg14 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg9), arg6, arg16)
        arg12 = _mm256_broadcastss_ps(arg8[0].o)
        zmm0 = _mm256_add_ps(arg12, zmm0)
        arg8[0].o = _mm_permute_ps(arg8[0].o, 0xea)
        arg16 = _mm256_broadcastsd_pd(arg8[0].o)
        zmm0 = _mm256_cmp_ps(zmm0, var_5a0_3, 1)
        arg11 = __vpaddd_ymmqq_ymmqq_memqq(arg5, data_142fc9420)
        zmm0 = _mm256_blendv_ps(arg11, arg5, zmm0)
        float var_5a0_4[0x8] = zmm0
        arg17 = _mm256_cmp_ps(zmm2, var_580_3, 5)
        
        if (temp0_447 != 0)
            arg5 = zmm1
        
        arg14 = _mm256_add_ps(arg16, arg14)
        zmm2 = _mm256_and_ps(arg15, arg17)
        arg8[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            arg11 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, data_142fc9420)
        
        zmm1 = _mm256_blendv_ps(arg11, arg5, arg10)
        float var_580_4[0x8] = zmm1
        arg17 = _mm256_cmp_ps(arg14, var_560_5, 5)
        arg10 = _mm256_cmp_ps(arg14, var_560_5, 1)
        zmm2 = _mm256_and_ps(arg10, arg15)
        arg8[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            arg5 = arg9
        
        zmm2 = _mm256_and_ps(arg15, arg17)
        arg8[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg8[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            arg11 = __vpaddd_ymmqq_ymmqq_memqq(arg9, data_142fc9420)
        
        zmm2 = _mm256_blendv_ps(arg11, arg5, arg10)
        arg5 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm0), arg7, var_3e0_2)
        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm1), arg13, var_400_2)
        arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), arg6, var_460_2)
        arg5 = _mm256_add_ps(arg12, arg5)
        zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_480_2)
        arg8 = _mm256_add_ps(arg16, arg8)
        arg5 = _mm256_div_ps(_mm256_sub_ps(var_5a0_3, arg5), arg7)
        zmm1 = _mm256_div_ps(_mm256_sub_ps(var_580_3, zmm1), arg13)
        arg6 = _mm256_div_ps(_mm256_sub_ps(var_560_5, arg8), arg6)
        float var_560_6[0x8] = zmm2
        int32_t var_500_4[0x8] = arg5
        float var_4e0_4[0x8] = zmm1
        float var_4c0_4[0x8] = arg6
        zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, data_142fc9420)
        zmm2 = zmm1 & arg15
        arg5[0].o = _mm256_extracti128_si256(zmm2, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            var_5a0_4 = _mm256_maskstore_ps(zmm1, zmm0)
            var_500_4 = _mm256_maskstore_ps(zmm1, zmm0)
            zmm0 = var_5a0_4
        
        int32_t rax_52 = *arg4
        zmm1[0].o = zx.o(rax_52 - 1)
        zmm0 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
        zmm1 = zmm0 & arg15
        arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm1[0].o = zx.o(rax_52 - 2)
            var_5a0_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            zmm1 = _mm256_broadcast_ss(1f)
            var_500_4 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm0 = __vsubps_ymmqq_ymmqq_memqq(var_5a0_3, var_360_2)
        zmm1[0].o = zx.o(0)
        arg5 = var_580_4
        arg6 = _mm256_cmpeq_epi32(arg5, _mm256_cmpeq_epi32(arg6, arg6))
        arg7 = arg6 & arg15
        arg8[0].o = _mm256_extracti128_si256(arg7, 1)
        arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg7[0].o, arg8[0].o)
        arg7[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg7[0].o) != 0)
            arg5[0].o = zx.o(0)
            var_580_4 = _mm256_maskstore_ps(arg6, arg5)
            var_4e0_4 = _mm256_maskstore_ps(arg6, arg5)
            arg5 = var_580_4
        
        arg7 = _mm256_sub_ps(var_580_3, var_340_2)
        zmm0 = _mm256_fmadd_ps(zmm0, zmm0, zmm1)
        int32_t rdx_10 = arg4[1]
        zmm1[0].o = zx.o(rdx_10 - 1)
        zmm1 = _mm256_cmpeq_epi32(arg5, _mm256_broadcastd_epi32(zmm1[0]))
        arg5 = zmm1 & arg15
        arg6[0].o = _mm256_extracti128_si256(arg5, 1)
        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            arg5[0].o = zx.o(rdx_10 - 2)
            var_580_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(arg5[0]))
            var_4e0_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
        
        zmm2 = __vsubps_ymmqq_ymmqq_memqq(var_560_5, var_380_2)
        arg7 = _mm256_fmadd_ps(arg7, arg7, zmm0)
        zmm0 = var_560_6
        zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_cmpeq_epi32(var_560_5, var_560_5))
        arg5 = zmm1 & arg15
        arg8[0].o = _mm256_extracti128_si256(arg5, 1)
        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            zmm0[0].o = zx.o(0)
            float var_560_7[0x8] = _mm256_maskstore_ps(zmm1, zmm0)
            var_4c0_4 = _mm256_maskstore_ps(zmm1, zmm0)
            zmm0 = var_560_7
        
        float var_520_4[0x8] = _mm256_fmadd_ps(zmm2, zmm2, arg7)
        int32_t rdx_13 = arg4[2]
        zmm1[0].o = zx.o(rdx_13 - 1)
        zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
        arg6 = arg15
        arg5 = zmm1 & arg15
        arg7[0].o = _mm256_extracti128_si256(arg5, 1)
        arg5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
        arg5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg5[0].o) != 0)
            zmm0[0].o = zx.o(rdx_13 - 2)
            float var_560_8[0x8] = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
            var_4c0_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
            zmm0 = var_560_8
        
        zmm1 = __vpbroadcastd_ymmqq_memd(*(arg18 + 4))
        arg5 = var_5a0_4
        arg14 = _mm256_mullo_epi32(zmm1, arg5)
        arg7 = _mm256_add_epi32(arg14, var_580_4)
        arg12 = __vpbroadcastd_ymmqq_memd(*(arg18 + 8))
        arg9 = _mm256_mullo_epi32(arg7, arg12)
        arg7 = _mm256_add_epi32(arg9, zmm0)
        int64_t rax_55 = *(arg18 + 0x10)
        arg8 = _mm256_slli_epi32(arg7, 2)
        arg7[0].o = zx.o(0)
        int64_t temp0_566
        int32_t temp1_15
        temp0_566, temp1_15 = _mm256_i32gather_ps(arg7, *(rax_55 + arg8[0].q), arg6)
        arg7 = temp0_566
        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
        arg5 = _mm256_sub_epi32(arg5, arg13)
        arg15 = _mm256_mullo_epi32(zmm1, arg5)
        arg11 = _mm256_mullo_epi32(_mm256_add_epi32(arg15, var_580_4), arg12)
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg11, zmm0), 2)
        arg5[0].o = zx.o(0)
        int64_t temp0_574
        int32_t temp1_16
        temp0_574, temp1_16 = _mm256_i32gather_ps(arg5, *(rax_55 + zmm1[0].q), arg6)
        arg8 = var_500_4
        arg16 = _mm256_sub_epi32(var_580_4, arg13)
        arg14 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, arg16), arg12)
        arg10 = _mm256_add_epi32(arg14, zmm0)
        arg17 = _mm256_slli_epi32(arg10, 2)
        arg10[0].o = zx.o(0)
        int64_t temp0_580
        int32_t temp1_17
        temp0_580, temp1_17 = _mm256_i32gather_ps(arg10, *(rax_55 + arg17[0].q), arg6)
        arg10 = temp0_580
        zmm2 = _mm256_mullo_epi32(_mm256_add_epi32(arg15, arg16), arg12)
        arg12 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
        arg15[0].o = zx.o(0)
        int64_t temp0_585
        int32_t temp1_18
        temp0_585, temp1_18 = _mm256_i32gather_ps(arg15, *(rax_55 + arg12[0].q), arg6)
        arg15 = temp0_585
        arg16 = temp1_18
        zmm0 = _mm256_sub_epi32(zmm0, arg13)
        arg9 = _mm256_slli_epi32(_mm256_add_epi32(arg9, zmm0), 2)
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        int64_t temp0_590
        int32_t temp1_19
        temp0_590, temp1_19 = _mm256_i32gather_ps(arg12, *(rax_55 + arg9[0].q), arg6)
        arg12 = temp0_590
        arg9 = _mm256_slli_epi32(_mm256_add_epi32(arg11, zmm0), 2)
        arg11[0].o = zx.o(0)
        int64_t temp0_593
        int32_t temp1_20
        temp0_593, temp1_20 = _mm256_i32gather_ps(arg11, *(rax_55 + arg9[0].q), arg6)
        arg11 = temp0_593
        arg13 = temp1_20
        arg9 = _mm256_slli_epi32(_mm256_add_epi32(arg14, zmm0), 2)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        int64_t temp0_597
        int32_t temp1_21
        temp0_597, temp1_21 = _mm256_i32gather_ps(arg13, *(rax_55 + arg9[0].q), arg6)
        arg13 = temp0_597
        arg14 = arg6
        zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
        zmm2[0].o = zx.o(0)
        int64_t temp0_600
        int32_t temp1_22
        temp0_600, temp1_22 = _mm256_i32gather_ps(zmm2, *(rax_55 + zmm0[0].q), arg6)
        arg9 = temp1_22
        zmm0 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_574, arg7), arg8, arg7)
        arg5 = _mm256_fmadd_ps(_mm256_sub_ps(arg15, arg10), arg8, arg10)
        arg7 = _mm256_fmadd_ps(_mm256_sub_ps(arg11, arg12), arg8, arg12)
        zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_600, arg13), arg8, arg13)
        arg5 = _mm256_fmadd_ps(_mm256_sub_ps(arg5, zmm0), var_4e0_4, zmm0)
        zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
            _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(zmm2, arg7), var_4e0_4, arg7), arg5), arg5, 
            var_4c0_4)
        var_4e0_4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_4e0_4[0].o, var_4e0_4[0].o)
        zmm1 = _mm256_and_ps(_mm256_cmp_ps(var_520_4, var_4e0_4, 0xc), arg14)
        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            arg5 = _mm256_rsqrt_ps(var_520_4)
            arg6 = _mm256_mul_ps(var_520_4, arg5)
            arg5 = __vmulps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg5, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), arg5, arg6)), var_320)
            arg6 = _mm256_rcp_ps(arg5)
            zmm0 = _mm256_blendv_ps(zmm0, 
                _mm256_fmadd_ps(_mm256_fnmadd_ps(var_420_2, arg6, arg5), arg6, zmm0), 
                _mm256_cvtepi16_epi32(zmm1[0].o))
        
        zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg23), 1), arg14)
        int32_t i_3 = _mm256_movemask_ps(zmm1)
        
        if (i_3 == 0)
            result = 0
        else
            uint64_t i_1 = zx.q(i_3)
            result = 0
            
            do
                uint64_t rdx_16 = _tzcnt_u64(i_1)
                i_1 &= not.q(1 << (rdx_16 u% 0x40))
                
                if ((result.b & 1) == 0)
                    float var_280[0x8] = zmm0
                    uint64_t rdx_17 = zx.q(rdx_16.d) & 7
                    zmm1[0].o = var_280[rdx_17]
                    *arg23 = zmm1[0]
                    float var_260[0x8] = var_440_2
                    *arg22 = var_260[rdx_17]
                
                result.b = 1
            while (i_1 != 0)

arg8[0].o = var_e8
arg9[0].o = var_d8
arg10[0].o = var_c8
arg11[0].o = var_b8
arg12[0].o = var_a8
arg13[0].o = var_98
arg14[0].o = var_88
arg15[0].o = var_78
arg16[0].o = var_68
arg17[0].o = var_58
_mm256_zeroupper()
return result
