// 函数: sub_14006acc0
// 地址: 0x14006acc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg16[0].o
int128_t var_68 = arg15[0].o
int128_t var_78 = arg14[0].o
int128_t var_88 = arg13[0].o
int128_t var_98 = arg12[0].o
int128_t var_a8 = arg11[0].o
int128_t var_b8 = arg10[0].o
int128_t var_c8 = arg9[0].o
int128_t var_d8 = arg8[0].o
int128_t var_e8 = arg7[0].o
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
float zmm2[0x8] = _mm256_broadcast_ss(0.5f)
float zmm1[0x8]
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
float var_300[0x8] = zmm2
zmm0 = _mm256_mul_ps(zmm0, zmm2)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float var_590 = zmm1[0]
float temp0_7 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float temp0_8 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float var_5a0 = zmm0[0]
float temp0_12 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
int32_t r15_4 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
int32_t result
int32_t rbx
int32_t zmm3[0x8]

if (r15_4 s<= 0)
    rbx = 0
    result = 0
else
    result = 0
    float var_400_1[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
    float var_2a0_1[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
    arg12 = _mm256_cmpeq_epi32(arg12, arg12)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    float var_2c0_1[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
    zmm0 = _mm256_broadcast_ss(1.12103877e-44f)
    float var_2e0_1[0x8] = zmm0
    rbx = 0
    
    while (true)
        bool cond:1_1 = (result.b & 1) != 0
        result.b = 1
        
        if (not(cond:1_1))
            zmm0[0].o = zx.o(rbx)
            zmm3 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm3, var_400_1)
            zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            int64_t temp0_25
            int32_t temp1_1
            temp0_25, temp1_1 = _mm256_i32gather_ps(zmm2, *(arg19 + (zmm0[0].q << 2)), zmm1)
            zmm2 = temp0_25
            int32_t var_440_1[0x8] = zmm3
            zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm3, var_2a0_1)
            zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_2c0_1)
            zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            int64_t temp0_30
            int32_t temp1_2
            temp0_30, temp1_2 = _mm256_i32gather_ps(arg5, *(arg19 + zmm1[0].q), zmm3)
            arg5 = temp0_30
            zmm3 = temp1_2
            zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_2e0_1)
            zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            int64_t temp0_34
            int32_t temp1_3
            temp0_34, temp1_3 = _mm256_i32gather_ps(zmm3, *(arg19 + zmm0[0].q), zmm1)
            zmm3 = temp0_34
            float var_4e0_1[0x8] = zmm2
            float var_4c0_1[0x8] = arg5
            int32_t var_4a0_1[0x8] = zmm3
            float var_480_1[0x8] = arg6
            zmm0 = _mm256_broadcast_ss(arg18[3])
            float var_580_1[0x8] = zmm0
            float var_560_1[0x8] = zmm0
            float var_540_1[0x8] = zmm0
            float var_520_1[0x8] = zmm0
            arg6 = _mm256_broadcast_ss(arg18[1])
            arg7 = _mm256_broadcast_ss(arg18[2])
            zmm1 = _mm256_broadcast_ss(*arg18)
            arg8 = _mm256_mul_ps(arg5, arg7)
            arg9 = _mm256_mul_ps(zmm3, zmm1)
            arg10 = _mm256_mul_ps(zmm2, arg6)
            zmm3 = _mm256_fmsub_ps(zmm3, arg6, arg8)
            zmm2 = _mm256_fmsub_ps(zmm2, arg7, arg9)
            arg5 = _mm256_fmsub_ps(arg5, zmm1, arg10)
            arg8 = _mm256_add_ps(zmm3, zmm3)
            zmm3 = _mm256_add_ps(zmm2, zmm2)
            zmm2 = _mm256_add_ps(arg5, arg5)
            arg9 = _mm256_fmadd_ps(var_4e0_1, zmm0, arg8)
            arg10 = _mm256_fmadd_ps(var_4c0_1, zmm0, zmm3)
            zmm0 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm0, zmm2, var_4a0_1)
            arg11 = _mm256_fmsub_ps(_mm256_mul_ps(zmm3, arg7), zmm2, arg6)
            zmm2 = _mm256_mul_ps(zmm2, zmm1)
            arg5 = _mm256_mul_ps(arg8, arg6)
            arg9 = _mm256_add_ps(arg9, arg11)
            arg6 = _mm256_add_ps(arg10, _mm256_fmsub_ps(zmm2, arg8, arg7))
            arg10 = _mm256_add_ps(arg9, _mm256_broadcast_ss(arg18[4]))
            arg7 = _mm256_broadcast_ss(arg18[5])
            zmm2 = _mm256_broadcast_ss(arg18[6])
            arg9 = _mm256_broadcast_ss(var_590)
            arg8 = _mm256_cmp_ps(arg9, arg10, 1)
            
            if (_mm256_movemask_ps(arg8) != 0)
                var_580_1 = _mm256_maskstore_ps(arg8, arg9)
            
            zmm1 = _mm256_fmsub_ps(zmm1, zmm3, arg5)
            arg9 = _mm256_add_ps(arg6, arg7)
            zmm3 = _mm256_xor_ps(arg8, arg12)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                arg6 = _mm256_broadcast_ss(var_5a0)
                arg5 = _mm256_cmp_ps(arg10, arg6, 1)
                arg7 = _mm256_and_ps(arg5, zmm3)
                
                if (_mm256_movemask_ps(arg7) != 0)
                    var_580_1 = _mm256_maskstore_ps(arg7, arg6)
                
                zmm3 = _mm256_andnot_ps(arg5, zmm3)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_580_1 = _mm256_maskstore_ps(zmm3, arg10)
            
            zmm0 = _mm256_add_ps(zmm0, zmm1)
            zmm3 = _mm256_broadcast_ss(temp0_7)
            zmm1 = _mm256_cmp_ps(zmm3, arg9, 1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_560_1 = _mm256_maskstore_ps(zmm1, zmm3)
            
            arg5 = _mm256_add_ps(zmm0, zmm2)
            zmm0 = _mm256_xor_ps(zmm1, arg12)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm2 = _mm256_broadcast_ss(temp0_12)
                zmm1 = _mm256_cmp_ps(arg9, zmm2, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_560_1 = _mm256_maskstore_ps(zmm3, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_560_1 = _mm256_maskstore_ps(zmm0, arg9)
            
            zmm1 = _mm256_broadcast_ss(temp0_8)
            zmm0 = _mm256_cmp_ps(zmm1, arg5, 1)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_540_1 = _mm256_maskstore_ps(zmm0, zmm1)
            
            zmm0 = _mm256_xor_ps(zmm0, arg12)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm2 = _mm256_broadcast_ss(temp0_13)
                zmm1 = _mm256_cmp_ps(arg5, zmm2, 1)
                zmm3 = _mm256_and_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm3) != 0)
                    var_540_1 = _mm256_maskstore_ps(zmm3, zmm2)
                
                zmm0 = _mm256_andnot_ps(zmm1, zmm0)
                
                if (_mm256_movemask_ps(zmm0) != 0)
                    var_540_1 = _mm256_maskstore_ps(zmm0, arg5)
            
            float var_320_1[0x8] = arg5
            int32_t var_420_1[0x8] = arg10
            int32_t var_500_1[0x8] = arg9
            arg12 = _mm256_broadcast_ss(*arg1)
            zmm1 = _mm256_sub_ps(var_580_1, arg12)
            arg13 = _mm256_broadcast_ss(*(arg1 + 4))
            zmm2 = _mm256_sub_ps(var_560_1, arg13)
            zmm3 = _mm256_broadcast_ss(arg1[1].d)
            arg5 = _mm256_sub_ps(var_540_1, zmm3)
            zmm0 = _mm256_broadcast_ss(*arg3)
            arg6 = _mm256_div_ps(zmm1, zmm0)
            zmm1 = _mm256_broadcast_ss(*(arg3 + 4))
            arg9 = _mm256_div_ps(zmm2, zmm1)
            zmm2 = _mm256_broadcast_ss(arg3[1].d)
            arg10 = _mm256_div_ps(arg5, zmm2)
            arg5 = _mm256_cvttps_epi32(arg6)
            arg16 = _mm256_cvttps_epi32(arg9)
            arg7 = _mm256_cvttps_epi32(arg10)
            arg6 = _mm256_cvtepi32_ps(arg5)
            arg9 = _mm256_cvtepi32_ps(arg16)
            float var_460_1[0x8] = arg7
            arg14 = _mm256_cvtepi32_ps(arg7)
            arg6 = _mm256_fmadd_ps(arg6, zmm0, arg12)
            arg9 = _mm256_fmadd_ps(arg9, zmm1, arg13)
            int32_t var_380_1[0x8] = zmm3
            arg14 = _mm256_fmadd_ps(arg14, zmm2, zmm3)
            zmm3[0].o = __vmovsd_xmmdq_memq(*arg3)
            arg7 = _mm256_broadcast_ss(2f)
            float var_3e0_1[0x8] = arg7
            zmm3[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg7[0].o)
            arg7 = _mm256_broadcastss_ps(zmm3[0].o)
            float var_3a0_1[0x8] = arg7
            arg6 = _mm256_add_ps(arg7, arg6)
            arg7[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
            arg7 = _mm256_broadcastsd_pd(arg7[0].o)
            float var_3c0_1[0x8] = arg7
            arg11 = _mm256_add_ps(arg7, arg9)
            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xea)
            arg6 = _mm256_cmp_ps(arg6, var_580_1, 1)
            arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg5, data_142fc9420)
            arg6 = _mm256_blendv_ps(arg9, arg5, arg6)
            float var_580_2[0x8] = arg6
            arg10 = _mm256_broadcastsd_pd(zmm3[0].o)
            arg15 = _mm256_cmp_ps(arg11, var_560_1, 1)
            
            if (_mm256_movemask_ps(arg15) != 0)
                arg5 = arg16
            
            arg14 = _mm256_add_ps(arg10, arg14)
            zmm3 = _mm256_cmp_ps(arg11, var_560_1, 5)
            arg7[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg7[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            arg11 = var_560_1
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg16, data_142fc9420)
            
            arg16 = _mm256_blendv_ps(arg9, arg5, arg15)
            float var_560_2[0x8] = arg16
            arg15 = _mm256_cmp_ps(arg14, var_540_1, 1)
            
            if (_mm256_movemask_ps(arg15) != 0)
                arg5 = var_460_1
            
            zmm3 = _mm256_cmp_ps(arg14, var_540_1, 5)
            arg14 = var_540_1
            var_540_1[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, var_540_1[0].o)
            zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            
            if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
                arg9 = __vpaddd_ymmqq_ymmqq_memqq(var_460_1, data_142fc9420)
            
            zmm3 = _mm256_blendv_ps(arg9, arg5, arg15)
            arg5 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg6), zmm0, arg12)
            arg7 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg16), zmm1, arg13)
            arg9 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm3), zmm2, var_380_1)
            arg5 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_3a0_1)
            arg7 = __vaddps_ymmqq_ymmqq_memqq(arg7, var_3c0_1)
            arg8 = _mm256_add_ps(arg10, arg9)
            arg9 = var_580_1
            zmm0 = _mm256_div_ps(_mm256_sub_ps(arg9, arg5), zmm0)
            zmm1 = _mm256_div_ps(_mm256_sub_ps(arg11, arg7), zmm1)
            arg5 = _mm256_sub_ps(arg14, arg8)
            float var_4e0_2[0x8] = zmm0
            float var_4c0_2[0x8] = zmm1
            float var_4a0_2[0x8] = _mm256_div_ps(arg5, zmm2)
            arg12 = _mm256_cmpeq_epi32(arg12, arg12)
            zmm0 = _mm256_cmpeq_epi32(arg6, arg12)
            bool cond:4_1 = _mm256_movemask_ps(zmm0) == 0
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            
            if (not(cond:4_1))
                var_580_2 = _mm256_maskstore_ps(zmm0, arg5)
                var_4e0_2 = _mm256_maskstore_ps(zmm0, arg5)
                arg6 = var_580_2
            
            int32_t rax_19 = *arg4
            zmm0[0].o = zx.o(rax_19 - 1)
            zmm0 = _mm256_cmpeq_epi32(arg6, _mm256_broadcastd_epi32(zmm0[0]))
            zmm2 = var_420_1
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm1[0].o = zx.o(rax_19 - 2)
                var_580_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
                var_4e0_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
            
            zmm0 = var_560_2
            zmm1 = _mm256_cmpeq_epi32(zmm0, arg12)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_560_2 = _mm256_maskstore_ps(zmm1, arg5)
                var_4c0_2 = _mm256_maskstore_ps(zmm1, arg5)
                zmm0 = var_560_2
            
            zmm1 = _mm256_sub_ps(arg9, zmm2)
            int32_t rax_22 = arg4[1]
            zmm2[0].o = zx.o(rax_22 - 1)
            zmm2 = _mm256_broadcastd_epi32(zmm2[0])
            zmm0 = _mm256_cmpeq_epi32(zmm0, zmm2)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                zmm2[0].o = zx.o(rax_22 - 2)
                var_560_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm2[0]))
                var_4c0_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
            
            zmm2 = __vsubps_ymmqq_ymmqq_memqq(arg14, var_320_1)
            arg11 = _mm256_sub_ps(arg11, var_500_1)
            zmm1 = _mm256_fmadd_ps(zmm1, zmm1, arg5)
            zmm0 = zmm3
            zmm3 = _mm256_cmpeq_epi32(zmm0, arg12)
            
            if (_mm256_movemask_ps(zmm3) != 0)
                float var_540_3[0x8] = _mm256_maskstore_ps(zmm3, arg5)
                var_4a0_2 = _mm256_maskstore_ps(zmm3, arg5)
                zmm0 = var_540_3
            
            float var_500_2[0x8] = _mm256_mul_ps(zmm2, zmm2)
            arg11 = _mm256_fmadd_ps(arg11, arg11, zmm1)
            int32_t rax_25 = arg4[2]
            zmm1[0].o = zx.o(rax_25 - 1)
            zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm0[0].o = zx.o(rax_25 - 2)
                float var_540_4[0x8] = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
                var_4a0_2 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
                zmm0 = var_540_4
            
            zmm2 = __vpbroadcastd_ymmqq_memd(*(arg17 + 4))
            zmm3 = var_580_2
            arg9 = _mm256_mullo_epi32(zmm2, zmm3)
            zmm1 = _mm256_add_epi32(arg9, var_560_2)
            arg10 = __vpbroadcastd_ymmqq_memd(*(arg17 + 8))
            arg6 = _mm256_mullo_epi32(zmm1, arg10)
            zmm1 = _mm256_add_epi32(arg6, zmm0)
            int64_t rax_28 = *(arg17 + 0x10)
            arg5 = _mm256_slli_epi32(zmm1, 2)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            zmm1[0].o = zx.o(0)
            int64_t temp0_225
            int32_t temp1_4
            temp0_225, temp1_4 = _mm256_i32gather_ps(zmm1, *(rax_28 + arg5[0].q), arg8)
            zmm1 = temp0_225
            zmm3 = _mm256_sub_epi32(zmm3, arg12)
            arg13 = _mm256_mullo_epi32(zmm2, zmm3)
            arg8 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, var_560_2), arg10)
            zmm2 = _mm256_slli_epi32(_mm256_add_epi32(arg8, zmm0), 2)
            zmm3 = _mm256_cmpeq_epi32(zmm3, zmm3)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            int64_t temp0_234
            int32_t temp1_5
            temp0_234, temp1_5 = _mm256_i32gather_ps(arg5, *(rax_28 + zmm2[0].q), zmm3)
            zmm3 = var_4e0_2
            arg14 = _mm256_sub_epi32(var_560_2, arg12)
            arg9 = _mm256_mullo_epi32(_mm256_add_epi32(arg9, arg14), arg10)
            arg7 = _mm256_add_epi32(arg9, zmm0)
            arg12 = _mm256_cmpeq_epi32(arg12, arg12)
            arg15 = _mm256_slli_epi32(arg7, 2)
            arg16 = _mm256_cmpeq_epi32(arg16, arg16)
            arg7[0].o = zx.o(0)
            int64_t temp0_242
            int32_t temp1_6
            temp0_242, temp1_6 = _mm256_i32gather_ps(arg7, *(rax_28 + arg15[0].q), arg16)
            arg7 = temp0_242
            arg16 = temp1_6
            arg10 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, arg14), arg10)
            arg13 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
            arg14 = _mm256_cmpeq_epi32(arg14, arg14)
            arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            int64_t temp0_249
            int32_t temp1_7
            temp0_249, temp1_7 = _mm256_i32gather_ps(arg15, *(rax_28 + arg13[0].q), arg14)
            arg15 = temp0_249
            arg14 = temp1_7
            zmm0 = _mm256_sub_epi32(zmm0, arg12)
            arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg6, zmm0), 2)
            arg13 = _mm256_cmpeq_epi32(arg13, arg13)
            arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
            int64_t temp0_255
            int32_t temp1_8
            temp0_255, temp1_8 = _mm256_i32gather_ps(arg14, *(rax_28 + arg6[0].q), arg13)
            arg14 = temp0_255
            arg13 = temp1_8
            arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg8, zmm0), 2)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
            int64_t temp0_260
            int32_t temp1_9
            temp0_260, temp1_9 = _mm256_i32gather_ps(arg13, *(rax_28 + arg6[0].q), arg8)
            arg13 = temp0_260
            arg8 = temp1_9
            arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg9, zmm0), 2)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            arg9[0].o = zx.o(0)
            int64_t temp0_264
            int32_t temp1_10
            temp0_264, temp1_10 = _mm256_i32gather_ps(arg9, *(rax_28 + arg6[0].q), arg8)
            arg9 = temp0_264
            arg8 = temp1_10
            arg5 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_234, zmm1), zmm3, zmm1)
            zmm1 = _mm256_sub_ps(arg15, arg7)
            zmm0 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
            arg6 = _mm256_cmpeq_epi32(arg6, arg6)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            int64_t temp0_272
            int32_t temp1_11
            temp0_272, temp1_11 = _mm256_i32gather_ps(arg8, *(rax_28 + zmm0[0].q), arg6)
            arg8 = temp0_272
            zmm1 = _mm256_fmadd_ps(zmm1, zmm3, arg7)
            zmm0 = _mm256_fmadd_ps(_mm256_sub_ps(arg13, arg14), zmm3, arg14)
            arg6 = _mm256_fmadd_ps(_mm256_sub_ps(arg8, arg9), zmm3, arg9)
            zmm1 = _mm256_fmadd_ps(_mm256_sub_ps(zmm1, arg5), var_4c0_2, arg5)
            zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
                _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(arg6, zmm0), var_4c0_2, zmm0), zmm1), 
                zmm1, var_4a0_2)
            zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg11, var_500_2)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            zmm1 = _mm256_cmp_ps(zmm2, arg6, 0xc)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                zmm3 = _mm256_rsqrt_ps(zmm2)
                zmm2 = _mm256_mul_ps(zmm2, zmm3)
                zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                    _mm256_mul_ps(zmm3, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), zmm3, zmm2)), 
                    var_300)
                zmm3 = _mm256_rcp_ps(zmm2)
                arg5 = _mm256_fmadd_ps(_mm256_fnmadd_ps(var_3e0_1, zmm3, zmm2), zmm3, zmm0)
                zmm0 = _mm256_blendv_ps(zmm0, arg5, zmm1)
            
            arg12 = _mm256_cmpeq_epi32(arg12, arg12)
            zmm2 = var_440_1
            zmm1 = _mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg21), 1)
            char i_2 = _mm256_movemask_ps(zmm1)
            
            if (i_2 == 0)
                result = 0
                rbx += 8
                
                if (rbx s>= r15_4)
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
                        *arg21 = zmm1[0]
                        float var_220[0x8] = zmm2
                        *arg20 = var_220[r11_3]
                    
                    result.b = 1
                while (i != 0)
        
        rbx += 8
        
        if (rbx s>= r15_4)
            break

if (rbx s< arg22)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm0[0].o = zx.o(rbx)
        zmm0 = _mm256_broadcastd_epi32(zmm0[0])
        zmm2 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
        zmm0[0].o = zx.o(arg22)
        zmm0 = _mm256_broadcastd_epi32(zmm0[0])
        zmm1 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(3))
        arg14 = _mm256_cmpgt_epi32(zmm0, zmm2)
        zmm0[0].o = zx.o(0)
        int64_t temp0_307
        int32_t temp1_12
        temp0_307, temp1_12 = _mm256_i32gather_ps(zmm0, *(arg19 + (zmm1[0].q << 2)), arg14)
        zmm0 = temp0_307
        zmm1 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(0xc))
        zmm3 = _mm256_add_epi32(zmm1, __vpbroadcastd_ymmqq_memd(4))
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        int64_t temp0_313
        int32_t temp1_13
        temp0_313, temp1_13 = _mm256_i32gather_ps(arg5, *(arg19 + zmm3[0].q), arg14)
        arg5 = temp0_313
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        arg6 = __vpbroadcastd_ymmqq_memd(8)
        zmm1 = _mm256_add_epi32(zmm1, arg6)
        arg6[0].o = zx.o(0)
        int64_t temp0_317
        int32_t temp1_14
        temp0_317, temp1_14 = _mm256_i32gather_ps(arg6, *(arg19 + zmm1[0].q), arg14)
        arg6 = temp0_317
        float var_200_1[0x8] = zmm0
        int32_t var_1e0_1[0x8] = arg5
        float var_1c0_1[0x8] = arg6
        int32_t var_1a0_1[0x8] = zmm3
        zmm1 = _mm256_broadcast_ss(arg18[3])
        float var_580_3[0x8] = zmm1
        float var_560_3[0x8] = zmm1
        float var_540_5[0x8] = zmm1
        float var_520_2[0x8] = zmm1
        arg7 = _mm256_broadcast_ss(arg18[1])
        arg8 = _mm256_broadcast_ss(arg18[2])
        arg9 = _mm256_broadcast_ss(*arg18)
        zmm3 = _mm256_mul_ps(zmm1, zmm3)
        arg10 = _mm256_mul_ps(arg5, arg8)
        arg11 = _mm256_mul_ps(arg6, arg9)
        arg12 = _mm256_mul_ps(zmm0, arg7)
        arg10 = _mm256_fmsub_ps(arg10, arg7, arg6)
        arg11 = _mm256_fmsub_ps(arg11, arg8, zmm0)
        arg12 = _mm256_fmsub_ps(arg12, arg9, arg5)
        zmm0 = _mm256_sub_ps(zmm3, zmm3)
        zmm3 = _mm256_add_ps(arg10, arg10)
        arg6 = _mm256_add_ps(arg11, arg11)
        arg7 = _mm256_add_ps(arg12, arg12)
        arg5 = _mm256_add_ps(zmm0, zmm0)
        int32_t var_4e0_3[0x8] = zmm3
        float var_4c0_3[0x8] = arg6
        float var_4a0_3[0x8] = arg7
        float var_480_2[0x8] = arg5
        arg8 = _mm256_fmadd_ps(var_200_1, zmm1, zmm3)
        arg9 = _mm256_fmadd_ps(var_1e0_1, zmm1, arg6)
        zmm0 = _mm256_fmadd_ps(var_1c0_1, zmm1, arg7)
        float var_180_1[0x8] = arg8
        int32_t var_160_1[0x8] = arg9
        float var_140_1[0x8] = zmm0
        float var_120_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(arg5, zmm1, var_1a0_1)
        arg10 = _mm256_broadcast_ss(arg18[1])
        arg11 = _mm256_broadcast_ss(arg18[2])
        arg5 = _mm256_broadcast_ss(*arg18)
        arg12 = _mm256_mul_ps(arg6, arg11)
        arg13 = _mm256_mul_ps(arg7, arg5)
        zmm1 = _mm256_mul_ps(zmm3, arg10)
        arg12 = _mm256_fmsub_ps(arg12, arg7, arg10)
        arg13 = _mm256_fmsub_ps(arg13, zmm3, arg11)
        zmm3 = _mm256_add_ps(arg8, arg12)
        arg8 = _mm256_add_ps(arg9, arg13)
        arg13 = _mm256_add_ps(zmm3, _mm256_broadcast_ss(arg18[4]))
        arg9 = _mm256_broadcast_ss(arg18[5])
        arg12 = _mm256_broadcast_ss(arg18[6])
        arg10 = _mm256_broadcast_ss(var_590)
        arg7 = _mm256_cmp_ps(arg10, arg13, 1)
        arg11 = _mm256_and_ps(arg7, arg14)
        zmm3[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
        zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
            var_580_3 = _mm256_maskstore_ps(arg7, arg10)
        
        arg5 = _mm256_fmsub_ps(arg5, arg6, zmm1)
        arg9 = _mm256_add_ps(arg8, arg9)
        zmm1 = _mm256_andnot_ps(arg7, arg14)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm1 = _mm256_xor_ps(arg7, _mm256_cmpeq_epi32(zmm1, zmm1))
            arg7 = _mm256_broadcast_ss(var_5a0)
            arg6 = _mm256_cmp_ps(arg13, arg7, 1)
            arg8 = _mm256_and_ps(arg6, zmm1)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg8, arg14)) != 0)
                var_580_3 = _mm256_maskstore_ps(arg8, arg7)
            
            zmm1 = _mm256_andnot_ps(arg6, zmm1)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm1, arg14)) != 0)
                var_580_3 = _mm256_maskstore_ps(zmm1, arg13)
        
        float var_420_2[0x8] = zmm2
        zmm1 = _mm256_add_ps(zmm0, arg5)
        arg5 = _mm256_broadcast_ss(temp0_7)
        zmm0 = _mm256_cmp_ps(arg5, arg9, 1)
        zmm3 = _mm256_and_ps(zmm0, arg14)
        arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
        zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
            var_560_3 = _mm256_maskstore_ps(zmm0, arg5)
        
        arg6 = _mm256_add_ps(zmm1, arg12)
        zmm1 = _mm256_andnot_ps(zmm0, arg14)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm0 ^= _mm256_cmpeq_epi32(zmm1, zmm1)
            zmm3 = _mm256_broadcast_ss(temp0_12)
            zmm1 = _mm256_cmp_ps(arg9, zmm3, 1)
            arg5 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg14)) != 0)
                var_560_3 = _mm256_maskstore_ps(arg5, zmm3)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg14)) != 0)
                var_560_3 = _mm256_maskstore_ps(zmm0, arg9)
        
        zmm1 = _mm256_broadcast_ss(temp0_8)
        zmm0 = _mm256_cmp_ps(zmm1, arg6, 1)
        zmm2 = _mm256_and_ps(zmm0, arg14)
        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            var_540_5 = _mm256_maskstore_ps(zmm0, zmm1)
        
        if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg14)) != 0)
            zmm0 = __vxorps_ymmqq_ymmqq_memqq(zmm0, data_142fc9420)
            zmm3 = _mm256_broadcast_ss(temp0_13)
            zmm1 = _mm256_cmp_ps(arg6, zmm3, 1)
            arg5 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg14)) != 0)
                var_540_5 = _mm256_maskstore_ps(arg5, zmm3)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg14)) != 0)
                var_540_5 = _mm256_maskstore_ps(zmm0, arg6)
        
        float var_360_2[0x8] = arg6
        int32_t var_340_2[0x8] = arg13
        int32_t var_320_2[0x8] = arg9
        arg10 = var_580_3
        arg11 = _mm256_broadcast_ss(*arg1)
        zmm3 = _mm256_broadcast_ss(*(arg1 + 4))
        zmm0 = _mm256_sub_ps(var_560_3, zmm3)
        arg12 = _mm256_broadcast_ss(*(arg3 + 4))
        zmm1 = _mm256_div_ps(zmm0, arg12)
        zmm0 = _mm256_sub_ps(arg10, arg11)
        arg15 = _mm256_broadcast_ss(arg1[1].d)
        zmm1 = _mm256_cvttps_epi32(zmm1)
        int32_t var_440_2[0x8] = zmm3
        zmm2 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm1), arg12, zmm3)
        zmm3[0].o = __vmovsd_xmmdq_memq(*arg3)
        arg5 = _mm256_broadcast_ss(2f)
        float var_400_2[0x8] = arg5
        arg7[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
        zmm3[0].o = __vmovshdup_xmmdq_xmmdq(arg7[0].o)
        zmm3 = _mm256_broadcastsd_pd(zmm3[0].o)
        int32_t var_3e0_2[0x8] = zmm3
        zmm2 = _mm256_add_ps(zmm3, zmm2)
        arg9 = _mm256_cmp_ps(zmm2, var_560_3, 1)
        zmm3 = _mm256_and_ps(arg9, arg14)
        arg5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
        arg6 = _mm256_broadcast_ss(*arg3)
        zmm0 = _mm256_div_ps(zmm0, arg6)
        arg8 = _mm256_sub_ps(var_540_5, arg15)
        arg5 = _mm256_broadcast_ss(arg3[1].d)
        arg8 = _mm256_div_ps(arg8, arg5)
        zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        char temp0_446 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
        zmm3 = _mm256_cvttps_epi32(zmm0)
        arg8 = _mm256_cvttps_epi32(arg8)
        int32_t var_3c0_2[0x8] = arg11
        zmm0 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm3), arg6, arg11)
        float var_460_2[0x8] = arg15
        arg13 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg8), arg5, arg15)
        arg11 = _mm256_broadcastss_ps(arg7[0].o)
        zmm0 = _mm256_add_ps(arg11, zmm0)
        arg7[0].o = _mm_permute_ps(arg7[0].o, 0xea)
        arg15 = _mm256_broadcastsd_pd(arg7[0].o)
        int32_t var_3a0_2[0x8] = arg10
        zmm0 = _mm256_cmp_ps(zmm0, arg10, 1)
        arg10 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc9420)
        zmm0 = _mm256_blendv_ps(arg10, zmm3, zmm0)
        float var_580_4[0x8] = zmm0
        arg16 = _mm256_cmp_ps(zmm2, var_560_3, 5)
        
        if (temp0_446 != 0)
            zmm3 = zmm1
        
        arg13 = _mm256_add_ps(arg15, arg13)
        zmm2 = _mm256_and_ps(arg14, arg16)
        arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            arg10 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, data_142fc9420)
        
        zmm1 = _mm256_blendv_ps(arg10, zmm3, arg9)
        int32_t var_560_4[0x8] = zmm1
        arg16 = _mm256_cmp_ps(arg13, var_540_5, 5)
        arg9 = _mm256_cmp_ps(arg13, var_540_5, 1)
        zmm2 = _mm256_and_ps(arg9, arg14)
        arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            zmm3 = arg8
        
        zmm2 = _mm256_and_ps(arg14, arg16)
        arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg7[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            arg10 = __vpaddd_ymmqq_ymmqq_memqq(arg8, data_142fc9420)
        
        zmm2 = _mm256_blendv_ps(arg10, zmm3, arg9)
        zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm0), arg6, var_3c0_2)
        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm1), arg12, var_440_2)
        arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), arg5, var_460_2)
        zmm3 = _mm256_add_ps(arg11, zmm3)
        zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_3e0_2)
        arg7 = _mm256_add_ps(arg15, arg7)
        zmm3 = _mm256_div_ps(_mm256_sub_ps(var_3a0_2, zmm3), arg6)
        zmm1 = _mm256_div_ps(_mm256_sub_ps(var_560_3, zmm1), arg12)
        arg5 = _mm256_div_ps(_mm256_sub_ps(var_540_5, arg7), arg5)
        float var_540_6[0x8] = zmm2
        int32_t var_4e0_4[0x8] = zmm3
        float var_4c0_4[0x8] = zmm1
        float var_4a0_4[0x8] = arg5
        zmm1 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, data_142fc9420)
        zmm2 = zmm1 & arg14
        zmm3[0].o = _mm256_extracti128_si256(zmm2, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            var_580_4 = _mm256_maskstore_ps(zmm1, zmm0)
            var_4e0_4 = _mm256_maskstore_ps(zmm1, zmm0)
            zmm0 = var_580_4
        
        int32_t rax_49 = *arg4
        zmm1[0].o = zx.o(rax_49 - 1)
        zmm0 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
        zmm1 = zmm0 & arg14
        zmm3[0].o = _mm256_extracti128_si256(zmm1, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
            zmm1[0].o = zx.o(rax_49 - 2)
            var_580_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            zmm1 = _mm256_broadcast_ss(1f)
            var_4e0_4 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm0 = __vsubps_ymmqq_ymmqq_memqq(var_3a0_2, var_340_2)
        zmm1[0].o = zx.o(0)
        zmm3 = var_560_4
        arg5 = _mm256_cmpeq_epi32(zmm3, _mm256_cmpeq_epi32(arg5, arg5))
        arg6 = arg5 & arg14
        arg7[0].o = _mm256_extracti128_si256(arg6, 1)
        arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
        arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
            zmm3[0].o = zx.o(0)
            var_560_4 = _mm256_maskstore_ps(arg5, zmm3)
            var_4c0_4 = _mm256_maskstore_ps(arg5, zmm3)
            zmm3 = var_560_4
        
        arg6 = _mm256_sub_ps(var_560_3, var_320_2)
        zmm0 = _mm256_fmadd_ps(zmm0, zmm0, zmm1)
        int32_t rdx_8 = arg4[1]
        zmm1[0].o = zx.o(rdx_8 - 1)
        zmm1 = _mm256_cmpeq_epi32(zmm3, _mm256_broadcastd_epi32(zmm1[0]))
        zmm3 = zmm1 & arg14
        arg5[0].o = _mm256_extracti128_si256(zmm3, 1)
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
        zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
            zmm3[0].o = zx.o(rdx_8 - 2)
            var_560_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm3[0]))
            var_4c0_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
        
        zmm2 = __vsubps_ymmqq_ymmqq_memqq(var_540_5, var_360_2)
        arg6 = _mm256_fmadd_ps(arg6, arg6, zmm0)
        zmm0 = var_540_6
        zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_cmpeq_epi32(var_540_5, var_540_5))
        zmm3 = zmm1 & arg14
        arg7[0].o = _mm256_extracti128_si256(zmm3, 1)
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg7[0].o)
        zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
            zmm0[0].o = zx.o(0)
            float var_540_7[0x8] = _mm256_maskstore_ps(zmm1, zmm0)
            var_4a0_4 = _mm256_maskstore_ps(zmm1, zmm0)
            zmm0 = var_540_7
        
        float var_500_4[0x8] = _mm256_fmadd_ps(zmm2, zmm2, arg6)
        int32_t rdx_11 = arg4[2]
        zmm1[0].o = zx.o(rdx_11 - 1)
        zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
        arg10 = arg14
        zmm3 = zmm1 & arg14
        arg6[0].o = _mm256_extracti128_si256(zmm3, 1)
        zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
        zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
            zmm0[0].o = zx.o(rdx_11 - 2)
            float var_540_8[0x8] = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
            var_4a0_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
            zmm0 = var_540_8
        
        zmm1 = __vpbroadcastd_ymmqq_memd(*(arg17 + 4))
        zmm3 = var_580_4
        arg13 = _mm256_mullo_epi32(zmm1, zmm3)
        arg6 = _mm256_add_epi32(arg13, var_560_4)
        arg11 = __vpbroadcastd_ymmqq_memd(*(arg17 + 8))
        arg8 = _mm256_mullo_epi32(arg6, arg11)
        arg6 = _mm256_add_epi32(arg8, zmm0)
        int64_t rax_52 = *(arg17 + 0x10)
        arg7 = _mm256_slli_epi32(arg6, 2)
        arg6[0].o = zx.o(0)
        int64_t temp0_565
        int32_t temp1_15
        temp0_565, temp1_15 = _mm256_i32gather_ps(arg6, *(rax_52 + arg7[0].q), arg10)
        arg6 = temp0_565
        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
        arg14 = _mm256_mullo_epi32(zmm1, _mm256_sub_epi32(zmm3, arg12))
        arg5 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, var_560_4), arg11)
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm0), 2)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t temp0_574
        int32_t temp1_16
        temp0_574, temp1_16 = _mm256_i32gather_ps(arg7, *(rax_52 + zmm1[0].q), arg10)
        arg15 = _mm256_sub_epi32(var_560_4, arg12)
        arg13 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, arg15), arg11)
        arg9 = _mm256_add_epi32(arg13, zmm0)
        arg16 = _mm256_slli_epi32(arg9, 2)
        arg9[0].o = zx.o(0)
        int64_t temp0_580
        int32_t temp1_17
        temp0_580, temp1_17 = _mm256_i32gather_ps(arg9, *(rax_52 + arg16[0].q), arg10)
        arg9 = temp0_580
        zmm2 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, arg15), arg11)
        arg11 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
        arg15[0].o = zx.o(0)
        int64_t temp0_585
        int32_t temp1_18
        temp0_585, temp1_18 = _mm256_i32gather_ps(arg15, *(rax_52 + arg11[0].q), arg10)
        arg15 = temp0_585
        arg14 = temp1_18
        zmm0 = _mm256_sub_epi32(zmm0, arg12)
        arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg8, zmm0), 2)
        arg12[0].o = zx.o(0)
        int64_t temp0_589
        int32_t temp1_19
        temp0_589, temp1_19 = _mm256_i32gather_ps(arg12, *(rax_52 + arg8[0].q), arg10)
        arg12 = temp0_589
        arg11 = temp1_19
        arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg5, zmm0), 2)
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        int64_t temp0_593
        int32_t temp1_20
        temp0_593, temp1_20 = _mm256_i32gather_ps(arg11, *(rax_52 + arg8[0].q), arg10)
        arg11 = temp0_593
        arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg13, zmm0), 2)
        arg13[0].o = zx.o(0)
        int64_t temp0_596
        int32_t temp1_21
        temp0_596, temp1_21 = _mm256_i32gather_ps(arg13, *(rax_52 + arg8[0].q), arg10)
        arg13 = temp0_596
        zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        int64_t temp0_600
        int32_t temp1_22
        temp0_600, temp1_22 = _mm256_i32gather_ps(arg8, *(rax_52 + zmm0[0].q), arg10)
        arg8 = temp0_600
        zmm0 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_574, arg6), var_4e0_4, arg6)
        zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(arg15, arg9), var_4e0_4, arg9)
        arg6 = _mm256_fmadd_ps(_mm256_sub_ps(arg11, arg12), var_4e0_4, arg12)
        arg7 = _mm256_fmadd_ps(_mm256_sub_ps(arg8, arg13), var_4e0_4, arg13)
        zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(zmm2, zmm0), var_4c0_4, zmm0)
        zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
            _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(arg7, arg6), var_4c0_4, arg6), zmm2), zmm2, 
            var_4a0_4)
        var_4c0_4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_4c0_4[0].o, var_4c0_4[0].o)
        zmm1 = _mm256_and_ps(_mm256_cmp_ps(var_500_4, var_4c0_4, 0xc), arg10)
        zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            zmm3 = _mm256_rsqrt_ps(var_500_4)
            arg5 = _mm256_mul_ps(var_500_4, zmm3)
            zmm3 = __vmulps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(zmm3, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), zmm3, arg5)), var_300)
            arg5 = _mm256_rcp_ps(zmm3)
            zmm0 = _mm256_blendv_ps(zmm0, 
                _mm256_fmadd_ps(_mm256_fnmadd_ps(var_400_2, arg5, zmm3), arg5, zmm0), 
                _mm256_cvtepi16_epi32(zmm1[0].o))
        
        zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(*arg21), 1), arg10)
        int32_t i_3 = _mm256_movemask_ps(zmm1)
        
        if (i_3 == 0)
            result = 0
        else
            uint64_t i_1 = zx.q(i_3)
            result = 0
            
            do
                uint64_t rdx_14 = _tzcnt_u64(i_1)
                i_1 &= not.q(1 << (rdx_14 u% 0x40))
                
                if ((result.b & 1) == 0)
                    float var_280[0x8] = zmm0
                    uint64_t rdx_15 = zx.q(rdx_14.d) & 7
                    zmm1[0].o = var_280[rdx_15]
                    *arg21 = zmm1[0]
                    float var_260[0x8] = var_420_2
                    *arg20 = var_260[rdx_15]
                
                result.b = 1
            while (i_1 != 0)

arg7[0].o = var_e8
arg8[0].o = var_d8
arg9[0].o = var_c8
arg10[0].o = var_b8
arg11[0].o = var_a8
arg12[0].o = var_98
arg13[0].o = var_88
arg14[0].o = var_78
arg15[0].o = var_68
arg16[0].o = var_58
_mm256_zeroupper()
return result
