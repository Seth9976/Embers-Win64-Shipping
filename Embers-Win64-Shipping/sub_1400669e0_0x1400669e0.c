// 函数: sub_1400669e0
// 地址: 0x1400669e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg15[0].o
int128_t var_68 = arg14[0].o
int128_t var_78 = arg13[0].o
int128_t var_88 = arg12[0].o
int128_t var_98 = arg11[0].o
int128_t var_a8 = arg10[0].o
int128_t var_b8 = arg9[0].o
int128_t var_c8 = arg8[0].o
int128_t var_d8 = arg7[0].o
int128_t var_e8 = arg6[0].o
arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
float var_420[0x8] = arg5
float var_440[0x8] = arg5
float var_460[0x8] = arg5
float zmm3[0x8]
zmm3[0].o = arg20
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
float zmm2[0x8] = _mm256_broadcast_ss(0.5f)
int32_t zmm1[0x8]
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
float var_3c0[0x8] = zmm2
zmm0 = _mm256_mul_ps(zmm0, zmm2)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
int32_t var_710 = zmm1[0]
float temp0_8 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float temp0_9 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float var_720 = zmm0[0]
float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float temp0_14 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
int32_t rdx_4 = ((arg23 s>> 0x1f u>> 0x1d) + arg23) & 0xfffffff8
int32_t rdi
float zmm5[0x8]

if (rdx_4 s<= 0)
    rdi = 0
else
    zmm0 = _mm256_broadcast_ss(arg17[3])
    float var_400_1[0x8] = zmm0
    zmm0[0].o = *arg17
    zmm1[0].o = arg17[1]
    zmm2[0].o = zx.o(arg17[2])
    arg12 = _mm256_broadcast_ss(*arg1)
    arg6 = _mm256_broadcast_ss(*(arg1 + 4))
    float var_580_1[0x8] = _mm256_broadcast_ss(arg1[1].d)
    float var_480_1[0x8] = _mm256_broadcast_ss(*arg3)
    int32_t var_4a0_1[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
    arg5 = _mm256_broadcast_ss(arg3[1].d)
    uint32_t var_4c0_1[0x8] = arg5
    arg5[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm5 = _mm256_broadcast_ss(2f)
    float var_360_1[0x8] = zmm5
    arg5[0].o = __vdivps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
    zmm5 = _mm256_broadcastss_ps(arg5[0].o)
    float var_4e0_1[0x8] = zmm5
    zmm5[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
    zmm5 = _mm256_broadcastsd_pd(zmm5[0].o)
    float var_500_1[0x8] = zmm5
    arg5[0].o = _mm_permute_ps(arg5[0].o, 0xea)
    float var_520_1[0x8] = _mm256_broadcastsd_pd(arg5[0].o)
    float var_220_1[0x8] = _mm256_broadcast_ss(*(arg16 + 4))
    arg5 = _mm256_broadcast_ss(*(arg16 + 8))
    float var_240_1[0x8] = arg5
    int64_t rbx_1 = *(arg16 + 0x10)
    int32_t r10_1 = 0
    int32_t var_260_1[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
    int32_t var_280_1[0x8] = _mm256_broadcastd_epi32(zmm2[0])
    arg13 = _mm256_broadcastss_ps(zmm0[0].o)
    rdi = 0
    float var_2a0_1[0x8] = _mm256_broadcastss_ps(zmm3[0].o)
    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    float var_2c0_1[0x8] = _mm256_broadcast_ss(4.20389539e-45f)
    float var_2e0_1[0x8] = _mm256_broadcast_ss(1.68155816e-44f)
    arg15 = _mm256_cmpeq_epi32(arg15, arg15)
    float var_300_1[0x8] = _mm256_broadcast_ss(5.60519386e-45f)
    float var_320_1[0x8] = _mm256_broadcast_ss(1.12103877e-44f)
    float var_340_1[0x8] = _mm256_broadcast_ss(-9.99999975e-05f)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    int32_t var_380_1[0x8] = arg12
    float var_5a0_1[0x8] = arg6
    float var_3a0_1[0x8] = arg13
    
    do
        float var_560_1[0x8] = arg5
        zmm0 = *(arg19 + sx.q(r10_1))
        zmm1 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, var_2c0_1)
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        int128_t temp0_47
        int32_t temp1_1
        temp0_47, temp1_1 = _mm256_i32gather_ps(arg5, *(arg18 + (zmm1[0].q << 2)), zmm2)
        arg5 = temp0_47
        zmm2 = temp1_1
        zmm0 = __vpmulld_ymmqq_ymmqq_memqq(zmm0, var_2e0_1)
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_300_1)
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        int128_t temp0_52
        int32_t temp1_2
        temp0_52, temp1_2 = _mm256_i32gather_ps(zmm5, *(arg18 + zmm1[0].q), zmm2)
        zmm5 = temp0_52
        zmm2 = temp1_2
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, var_320_1)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int128_t temp0_56
        int32_t temp1_3
        temp0_56, temp1_3 = _mm256_i32gather_ps(zmm2, *(arg18 + zmm0[0].q), zmm1)
        zmm2 = temp0_56
        float var_620_1[0x8] = arg5
        float var_600_1[0x8] = zmm5
        float var_5e0_1[0x8] = zmm2
        float var_5c0_1[0x8] = zmm3
        float var_700_1[0x8] = var_400_1
        float var_6e0_1[0x8] = var_400_1
        float var_6c0_1[0x8] = var_400_1
        float var_6a0_1[0x8] = var_400_1
        zmm0 = _mm256_mul_ps(zmm5, var_280_1)
        zmm1 = _mm256_mul_ps(zmm2, arg13)
        arg6 = _mm256_mul_ps(arg5, var_260_1)
        zmm2 = _mm256_fmsub_ps(zmm2, var_260_1, zmm0)
        arg5 = _mm256_fmsub_ps(arg5, var_280_1, zmm1)
        zmm5 = _mm256_fmsub_ps(zmm5, arg13, arg6)
        zmm2 = _mm256_add_ps(zmm2, zmm2)
        zmm0 = _mm256_add_ps(arg5, arg5)
        zmm5 = _mm256_add_ps(zmm5, zmm5)
        arg6 = _mm256_fmadd_ps(var_620_1, var_400_1, zmm2)
        arg7 = _mm256_fmadd_ps(var_600_1, var_400_1, zmm0)
        arg5 = _mm256_fmadd_ps(var_5e0_1, var_400_1, zmm5)
        arg8 = _mm256_mul_ps(zmm0, var_280_1)
        arg9 = _mm256_mul_ps(zmm5, arg13)
        zmm1 = _mm256_mul_ps(zmm2, var_260_1)
        zmm5 = _mm256_add_ps(arg6, _mm256_fmsub_ps(zmm5, var_260_1, arg8))
        zmm2 = _mm256_add_ps(arg7, _mm256_fmsub_ps(zmm2, var_280_1, arg9))
        zmm3 = _mm256_add_ps(zmm5, _mm256_broadcast_ss(arg17[4]))
        arg6 = _mm256_broadcast_ss(arg17[5])
        zmm5 = _mm256_broadcast_ss(arg17[6])
        arg8 = _mm256_broadcast_ss(var_710)
        arg7 = _mm256_cmp_ps(arg8, zmm3, 1)
        
        if (_mm256_movemask_ps(arg7) != 0)
            var_700_1 = _mm256_maskstore_ps(arg7, arg8)
        
        zmm0 = _mm256_fmsub_ps(zmm0, arg13, zmm1)
        arg8 = _mm256_add_ps(zmm2, arg6)
        zmm1 = _mm256_xor_ps(arg7, arg15)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            arg6 = _mm256_broadcast_ss(var_720)
            zmm2 = _mm256_cmp_ps(zmm3, arg6, 1)
            arg7 = _mm256_and_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(arg7) != 0)
                var_700_1 = _mm256_maskstore_ps(arg7, arg6)
            
            zmm1 = _mm256_andnot_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_700_1 = _mm256_maskstore_ps(zmm1, zmm3)
        
        zmm0 = _mm256_add_ps(arg5, zmm0)
        zmm2 = _mm256_broadcast_ss(temp0_8)
        zmm1 = _mm256_cmp_ps(zmm2, arg8, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_6e0_1 = _mm256_maskstore_ps(zmm1, zmm2)
        
        zmm5 = _mm256_add_ps(zmm0, zmm5)
        zmm0 = _mm256_xor_ps(zmm1, arg15)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm2 = _mm256_broadcast_ss(temp0_13)
            zmm1 = _mm256_cmp_ps(arg8, zmm2, 1)
            arg5 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(arg5) != 0)
                var_6e0_1 = _mm256_maskstore_ps(arg5, zmm2)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_6e0_1 = _mm256_maskstore_ps(zmm0, arg8)
        
        arg13 = arg12
        zmm1 = _mm256_broadcast_ss(temp0_9)
        zmm0 = _mm256_cmp_ps(zmm1, zmm5, 1)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            var_6c0_1 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm0 = _mm256_xor_ps(zmm0, arg15)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm2 = _mm256_broadcast_ss(temp0_14)
            zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
            arg5 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(arg5) != 0)
                var_6c0_1 = _mm256_maskstore_ps(arg5, zmm2)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_6c0_1 = _mm256_maskstore_ps(zmm0, zmm5)
        
        float var_540_1[0x8] = zmm5
        float var_680_1[0x8] = arg8
        float var_660_1[0x8] = zmm3
        zmm0 = _mm256_div_ps(_mm256_sub_ps(var_700_1, arg13), var_480_1)
        zmm1 = _mm256_div_ps(_mm256_sub_ps(var_6e0_1, var_5a0_1), var_4a0_1)
        zmm2 = _mm256_div_ps(_mm256_sub_ps(var_6c0_1, var_580_1), var_4c0_1)
        arg7 = _mm256_cvttps_epi32(zmm0)
        zmm1 = _mm256_cvttps_epi32(zmm1)
        arg9 = _mm256_cvttps_epi32(zmm2)
        zmm0 = _mm256_cvtepi32_ps(arg7)
        arg10 = _mm256_cvtepi32_ps(zmm1)
        zmm2 = _mm256_cvtepi32_ps(arg9)
        zmm0 = _mm256_fmadd_ps(zmm0, var_480_1, arg13)
        arg10 = _mm256_fmadd_ps(arg10, var_4a0_1, var_5a0_1)
        zmm2 = _mm256_fmadd_ps(zmm2, var_4c0_1, var_580_1)
        zmm0 = _mm256_cmp_ps(__vaddps_ymmqq_ymmqq_memqq(zmm0, var_4e0_1), var_700_1, 1)
        arg8 = __vpaddd_ymmqq_ymmqq_memqq(arg7, data_142fc9420)
        zmm0 = _mm256_blendv_ps(arg8, arg7, zmm0)
        float var_700_2[0x8] = zmm0
        arg10 = __vaddps_ymmqq_ymmqq_memqq(arg10, var_500_1)
        arg15 = _mm256_cmp_ps(arg10, var_6e0_1, 1)
        
        if (_mm256_movemask_ps(arg15) != 0)
            arg7 = zmm1
        
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_520_1)
        arg10 = _mm256_cmp_ps(arg10, var_6e0_1, 5)
        var_4a0_1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
        var_580_1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, var_4a0_1[0].o)
        var_580_1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_580_1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(var_580_1[0].o) != 0)
            arg8 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, data_142fc9420)
        
        arg15 = _mm256_blendv_ps(arg8, arg7, arg15)
        uint32_t var_6e0_2[0x8] = arg15
        zmm1 = _mm256_cmp_ps(zmm2, var_6c0_1, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            arg7 = arg9
        
        zmm2 = _mm256_cmp_ps(zmm2, var_6c0_1, 5)
        var_580_1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_580_1[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            arg8 = __vpaddd_ymmqq_ymmqq_memqq(arg9, data_142fc9420)
        
        zmm2 = _mm256_div_ps(
            _mm256_sub_ps(var_700_1, 
                __vaddps_ymmqq_ymmqq_memqq(
                    _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm0), var_480_1, arg13), var_4e0_1)), 
            var_480_1)
        zmm1 = _mm256_blendv_ps(arg8, arg7, zmm1)
        float var_620_2[0x8] = zmm2
        int32_t var_6c0_2[0x8] = zmm1
        zmm2 = _mm256_cvtepi32_ps(arg15)
        zmm1 = _mm256_cvtepi32_ps(zmm1)
        zmm3 = var_4a0_1
        zmm2 = _mm256_fmadd_ps(zmm2, zmm3, var_5a0_1)
        arg7 = var_4c0_1
        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm1, arg7, var_580_1)
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_500_1)
        zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_520_1)
        zmm2 = _mm256_div_ps(_mm256_sub_ps(var_6e0_1, zmm2), zmm3)
        float var_600_2[0x8] = zmm2
        int32_t var_5e0_2[0x8] = _mm256_div_ps(_mm256_sub_ps(var_6c0_1, zmm1), arg7)
        arg15 = _mm256_cmpeq_epi32(arg15, arg15)
        zmm1 = _mm256_cmpeq_epi32(zmm0, arg15)
        bool cond:3_1 = _mm256_movemask_ps(zmm1) == 0
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        
        if (not(cond:3_1))
            var_700_2 = _mm256_maskstore_ps(zmm1, zmm3)
            var_620_2 = _mm256_maskstore_ps(zmm1, zmm3)
            zmm0 = var_700_2
        
        int32_t rsi_7 = *arg4
        zmm1[0].o = zx.o(rsi_7 - 1)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        zmm0 = _mm256_cmpeq_epi32(zmm0, zmm1)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm1[0].o = zx.o(rsi_7 - 2)
            var_700_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            var_620_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
        
        zmm0 = var_6e0_2
        zmm1 = _mm256_cmpeq_epi32(zmm0, arg15)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_6e0_2 = _mm256_maskstore_ps(zmm1, zmm3)
            var_600_2 = _mm256_maskstore_ps(zmm1, zmm3)
            zmm0 = var_6e0_2
        
        zmm1 = __vsubps_ymmqq_ymmqq_memqq(var_700_1, var_660_1)
        int32_t rsi_9 = arg4[1]
        zmm2[0].o = zx.o(rsi_9 - 1)
        zmm2 = _mm256_broadcastd_epi32(zmm2[0])
        zmm0 = _mm256_cmpeq_epi32(zmm0, zmm2)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm2[0].o = zx.o(rsi_9 - 2)
            var_6e0_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm2[0]))
            var_600_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
        
        zmm2 = __vsubps_ymmqq_ymmqq_memqq(var_6c0_1, var_540_1)
        arg5 = _mm256_sub_ps(var_6e0_1, var_680_1)
        zmm1 = _mm256_fmadd_ps(zmm1, zmm1, zmm3)
        zmm0 = var_6c0_2
        zmm5 = _mm256_cmpeq_epi32(zmm0, arg15)
        
        if (_mm256_movemask_ps(zmm5) != 0)
            float var_6c0_3[0x8] = _mm256_maskstore_ps(zmm5, zmm3)
            var_5e0_2 = _mm256_maskstore_ps(zmm5, zmm3)
            zmm0 = var_6c0_3
        
        float var_3e0_1[0x8] = _mm256_mul_ps(zmm2, zmm2)
        arg5 = _mm256_fmadd_ps(arg5, arg5, zmm1)
        int32_t r14_1 = arg4[2]
        zmm1[0].o = zx.o(r14_1 - 1)
        zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm0[0].o = zx.o(r14_1 - 2)
            float var_6c0_4[0x8] = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
            var_5e0_2 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
            zmm0 = var_6c0_4
        
        zmm3 = var_6e0_2
        arg10 = _mm256_mullo_epi32(var_220_1, var_700_2)
        arg14 = var_240_1
        zmm1 = _mm256_mullo_epi32(_mm256_add_epi32(arg10, zmm3), arg14)
        arg6 = _mm256_add_epi32(zmm1, zmm0)
        arg7 = _mm256_slli_epi32(arg6, 2)
        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
        arg6[0].o = zx.o(0)
        int128_t temp0_227
        int32_t temp1_4
        temp0_227, temp1_4 = _mm256_i32gather_ps(arg6, *(rbx_1 + arg7[0].q), arg8)
        arg6 = temp0_227
        arg8 = temp1_4
        arg11 = _mm256_mullo_epi32(var_220_1, _mm256_sub_epi32(var_700_2, arg15))
        zmm2 = _mm256_mullo_epi32(_mm256_add_epi32(arg11, zmm3), arg14)
        arg7 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
        var_220_1[0].o = zx.o(0)
        int128_t temp0_235
        int32_t temp1_5
        temp0_235, temp1_5 = _mm256_i32gather_ps(var_220_1, *(rbx_1 + arg7[0].q), arg8)
        arg9 = temp0_235
        arg8 = var_620_2
        arg7 = var_600_2
        zmm3 = _mm256_sub_epi32(zmm3, arg15)
        arg10 = _mm256_mullo_epi32(_mm256_add_epi32(arg10, zmm3), arg14)
        zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
        arg15 = _mm256_add_epi32(arg10, zmm0)
        arg12 = _mm256_slli_epi32(arg15, 2)
        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
        arg15[0].o = zx.o(0)
        int128_t temp0_243
        int32_t temp1_6
        temp0_243, temp1_6 = _mm256_i32gather_ps(arg15, *(rbx_1 + arg12[0].q), arg13)
        arg15 = temp0_243
        arg13 = temp1_6
        zmm3 = _mm256_mullo_epi32(_mm256_add_epi32(arg11, zmm3), arg14)
        arg11 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, zmm0), 2)
        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        int128_t temp0_250
        int32_t temp1_7
        temp0_250, temp1_7 = _mm256_i32gather_ps(arg13, *(rbx_1 + arg11[0].q), arg12)
        arg12 = temp1_7
        zmm0 = _mm256_sub_epi32(zmm0, zmm5)
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(zmm1, zmm0), 2)
        arg11 = _mm256_cmpeq_epi32(arg11, arg11)
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        int128_t temp0_256
        int32_t temp1_8
        temp0_256, temp1_8 = _mm256_i32gather_ps(arg12, *(rbx_1 + zmm1[0].q), arg11)
        arg12 = temp0_256
        arg11 = temp1_8
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        int128_t temp0_261
        int32_t temp1_9
        temp0_261, temp1_9 = _mm256_i32gather_ps(arg11, *(rbx_1 + zmm1[0].q), zmm2)
        arg11 = temp0_261
        zmm2 = temp1_9
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg10, zmm0), 2)
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        arg10[0].o = zx.o(0)
        int128_t temp0_265
        int32_t temp1_10
        temp0_265, temp1_10 = _mm256_i32gather_ps(arg10, *(rbx_1 + zmm1[0].q), zmm2)
        arg10 = temp0_265
        zmm2 = temp1_10
        zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, zmm0), 2)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int128_t temp0_270
        int32_t temp1_11
        temp0_270, temp1_11 = _mm256_i32gather_ps(zmm2, *(rbx_1 + zmm0[0].q), zmm1)
        zmm0 = _mm256_fmadd_ps(_mm256_sub_ps(arg9, arg6), arg8, arg6)
        zmm1 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_250, arg15), arg8, arg15)
        zmm3 = _mm256_fmadd_ps(_mm256_sub_ps(arg11, arg12), arg8, arg12)
        zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_270, arg10), arg8, arg10)
        zmm1 = _mm256_fmadd_ps(_mm256_sub_ps(zmm1, zmm0), arg7, zmm0)
        zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
            _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(zmm2, zmm3), arg7, zmm3), zmm1), zmm1, 
            var_5e0_2)
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_3e0_1)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm1 = _mm256_cmp_ps(zmm2, zmm3, 0xc)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            arg5 = _mm256_rsqrt_ps(zmm2)
            zmm2 = _mm256_mul_ps(zmm2, arg5)
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg5, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), arg5, zmm2)), var_3c0)
            arg5 = _mm256_rcp_ps(zmm2)
            zmm2 =
                _mm256_fmadd_ps(__vfnmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg5, var_360_1), arg5, zmm0)
            zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
        
        arg5 = var_560_1
        arg12 = var_380_1
        arg13 = var_3a0_1
        arg15 = _mm256_cmpeq_epi32(arg15, arg15)
        zmm5 = var_680_1
        zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm0, var_2a0_1)
        zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, var_340_1, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_1, zmm0, var_460)
            zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm5, zmm0, var_440)
            arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_540_1, zmm0, var_420)
            var_460 = _mm256_maskstore_ps(zmm1, zmm2)
            var_440 = _mm256_maskstore_ps(zmm1, zmm5)
            var_420 = _mm256_maskstore_ps(zmm1, arg7)
            zmm0 = _mm256_add_ps(arg5, zmm0)
            arg5 = _mm256_blendv_ps(arg5, zmm0, zmm1)
        
        rdi += 8
        r10_1 += 0x20
    while (rdi s< rdx_4)

uint32_t result = arg23

if (rdi s< result)
    float var_560_2[0x8] = arg5
    zmm0[0].o = zx.o(rdi)
    zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
    zmm1[0].o = zx.o(result)
    zmm3 = _mm256_cmpgt_epi32(_mm256_broadcastd_epi32(zmm1[0]), zmm0)
    zmm0 = _mm256_maskload_ps(zmm3, *(arg19 + sx.q(rdi << 2)))
    zmm1 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(3))
    zmm2[0].o = zx.o(0)
    int128_t temp0_318
    int32_t temp1_12
    temp0_318, temp1_12 = _mm256_i32gather_ps(zmm2, *(arg18 + (zmm1[0].q << 2)), zmm3)
    zmm2 = temp0_318
    arg5 = temp1_12
    zmm0 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(0xc))
    zmm1 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(4))
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    int128_t temp0_324
    int32_t temp1_13
    temp0_324, temp1_13 = _mm256_i32gather_ps(arg5, *(arg18 + zmm1[0].q), zmm3)
    arg5 = temp0_324
    zmm5 = temp1_13
    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
    zmm0 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    int128_t temp0_329
    int32_t temp1_14
    temp0_329, temp1_14 = _mm256_i32gather_ps(arg6, *(arg18 + zmm0[0].q), zmm3)
    arg6 = temp0_329
    float var_200_1[0x8] = zmm2
    float var_1e0_1[0x8] = arg5
    float var_1c0_1[0x8] = arg6
    float var_1a0_1[0x8] = zmm5
    zmm1 = _mm256_broadcast_ss(arg17[3])
    float var_700_3[0x8] = zmm1
    int32_t var_6e0_3[0x8] = zmm1
    int32_t var_6c0_5[0x8] = zmm1
    int32_t var_6a0_2[0x8] = zmm1
    zmm0 = _mm256_broadcast_ss(arg17[1])
    arg7 = _mm256_broadcast_ss(arg17[2])
    arg8 = _mm256_broadcast_ss(*arg17)
    zmm5 = _mm256_mul_ps(zmm1, zmm5)
    arg9 = _mm256_mul_ps(arg5, arg7)
    arg10 = _mm256_mul_ps(arg6, arg8)
    arg11 = _mm256_mul_ps(zmm2, zmm0)
    arg9 = _mm256_fmsub_ps(arg9, zmm0, arg6)
    arg10 = _mm256_fmsub_ps(arg10, arg7, zmm2)
    arg11 = _mm256_fmsub_ps(arg11, arg8, arg5)
    zmm0 = _mm256_sub_ps(zmm5, zmm5)
    arg6 = _mm256_add_ps(arg9, arg9)
    arg5 = _mm256_add_ps(arg10, arg10)
    arg7 = _mm256_add_ps(arg11, arg11)
    zmm2 = _mm256_add_ps(zmm0, zmm0)
    float var_620_3[0x8] = arg6
    float var_600_3[0x8] = arg5
    float var_5e0_3[0x8] = arg7
    float var_5c0_2[0x8] = zmm2
    arg8 = _mm256_fmadd_ps(var_200_1, zmm1, arg6)
    arg9 = _mm256_fmadd_ps(var_1e0_1, zmm1, arg5)
    zmm0 = _mm256_fmadd_ps(var_1c0_1, zmm1, arg7)
    float var_180_1[0x8] = arg8
    float var_160_1[0x8] = arg9
    float var_140_1[0x8] = zmm0
    float var_120_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, zmm1, var_1a0_1)
    zmm1 = _mm256_broadcast_ss(arg17[1])
    arg10 = _mm256_broadcast_ss(arg17[2])
    zmm2 = _mm256_broadcast_ss(*arg17)
    arg11 = _mm256_mul_ps(arg5, arg10)
    arg12 = _mm256_mul_ps(arg7, zmm2)
    zmm5 = _mm256_mul_ps(arg6, zmm1)
    arg11 = _mm256_fmsub_ps(arg11, arg7, zmm1)
    arg12 = _mm256_fmsub_ps(arg12, arg6, arg10)
    zmm1 = _mm256_add_ps(arg8, arg11)
    arg7 = _mm256_add_ps(arg9, arg12)
    zmm1 = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg17[4]))
    arg8 = _mm256_broadcast_ss(arg17[5])
    arg11 = _mm256_broadcast_ss(arg17[6])
    arg9 = _mm256_broadcast_ss(var_710)
    int32_t var_660_2[0x8] = zmm1
    arg6 = _mm256_cmp_ps(arg9, zmm1, 1)
    int32_t var_540_2[0x8] = zmm3
    arg10 = _mm256_and_ps(arg6, zmm3)
    zmm1[0].o = _mm256_extractf128_ps(arg10[0].o, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm1[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        var_700_3 = _mm256_maskstore_ps(arg6, arg9)
    
    zmm2 = _mm256_fmsub_ps(zmm2, arg5, zmm5)
    arg9 = _mm256_add_ps(arg7, arg8)
    arg5 = _mm256_andnot_ps(arg6, var_540_2)
    
    if (_mm256_movemask_ps(arg5) != 0)
        arg5 = _mm256_xor_ps(arg6, _mm256_cmpeq_epi32(arg5, arg5))
        arg6 = _mm256_broadcast_ss(var_720)
        zmm5 = _mm256_cmp_ps(var_660_2, arg6, 1)
        arg7 = _mm256_and_ps(zmm5, arg5)
        
        if (_mm256_movemask_ps(_mm256_and_ps(arg7, var_540_2)) != 0)
            var_700_3 = _mm256_maskstore_ps(arg7, arg6)
        
        arg5 = _mm256_andnot_ps(zmm5, arg5)
        
        if (_mm256_movemask_ps(_mm256_and_ps(arg5, var_540_2)) != 0)
            var_700_3 = _mm256_maskstore_ps(arg5, var_660_2)
    
    zmm2 = _mm256_add_ps(zmm0, zmm2)
    arg5 = _mm256_broadcast_ss(temp0_8)
    zmm0 = _mm256_cmp_ps(arg5, arg9, 1)
    zmm5 = _mm256_and_ps(zmm0, var_540_2)
    arg6[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
    zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
        var_6e0_3 = _mm256_maskstore_ps(zmm0, arg5)
    
    zmm5 = _mm256_add_ps(zmm2, arg11)
    zmm1 = _mm256_andnot_ps(zmm0, var_540_2)
    
    if (_mm256_movemask_ps(zmm1) != 0)
        zmm0 ^= _mm256_cmpeq_epi32(zmm1, zmm1)
        zmm2 = _mm256_broadcast_ss(temp0_13)
        zmm1 = _mm256_cmp_ps(arg9, zmm2, 1)
        arg5 = _mm256_and_ps(zmm1, zmm0)
        zmm3 = _mm256_and_ps(arg5, var_540_2)
        
        if (_mm256_movemask_ps(zmm3) != 0)
            var_6e0_3 = _mm256_maskstore_ps(arg5, zmm2)
        
        zmm0 = _mm256_andnot_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm0, var_540_2)) != 0)
            var_6e0_3 = _mm256_maskstore_ps(zmm0, arg9)
    
    zmm1 = _mm256_broadcast_ss(temp0_9)
    zmm0 = _mm256_cmp_ps(zmm1, zmm5, 1)
    zmm2 = _mm256_and_ps(zmm0, var_540_2)
    zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        var_6c0_5 = _mm256_maskstore_ps(zmm0, zmm1)
    
    zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
    
    if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, var_540_2)) != 0)
        zmm0 ^= zmm2
        zmm2 = _mm256_broadcast_ss(temp0_14)
        zmm1 = _mm256_cmp_ps(zmm5, zmm2, 1)
        arg5 = _mm256_and_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(arg5, var_540_2)) != 0)
            var_6c0_5 = _mm256_maskstore_ps(arg5, zmm2)
        
        zmm0 = _mm256_andnot_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm0, var_540_2)) != 0)
            var_6c0_5 = _mm256_maskstore_ps(zmm0, zmm5)
    
    float var_580_2[0x8] = zmm5
    float var_5a0_2[0x8] = arg9
    zmm5 = var_6c0_5
    arg7 = _mm256_broadcast_ss(*arg1)
    zmm3 = _mm256_broadcast_ss(*(arg1 + 4))
    zmm0 = _mm256_sub_ps(var_6e0_3, zmm3)
    arg5 = _mm256_broadcast_ss(*(arg3 + 4))
    zmm1 = _mm256_div_ps(zmm0, arg5)
    zmm0 = _mm256_sub_ps(var_700_3, arg7)
    arg9 = _mm256_broadcast_ss(arg1[1].d)
    zmm1 = _mm256_cvttps_epi32(zmm1)
    float var_4e0_2[0x8] = zmm3
    float var_520_2[0x8] = arg5
    zmm2 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm1), arg5, zmm3)
    zmm3[0].o = __vmovsd_xmmdq_memq(*arg3)
    arg5 = _mm256_broadcast_ss(2f)
    float var_400_2[0x8] = arg5
    zmm3[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
    arg5[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
    arg5 = _mm256_broadcastsd_pd(arg5[0].o)
    float var_3e0_2[0x8] = arg5
    arg14 = _mm256_add_ps(arg5, zmm2)
    arg6 = _mm256_cmp_ps(arg14, var_6e0_3, 1)
    zmm2 = _mm256_and_ps(arg6, var_540_2)
    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
    arg5 = _mm256_broadcast_ss(*arg3)
    zmm0 = _mm256_div_ps(zmm0, arg5)
    float var_680_2[0x8] = zmm5
    zmm5 = _mm256_sub_ps(zmm5, arg9)
    arg15 = _mm256_broadcast_ss(arg3[1].d)
    zmm5 = _mm256_div_ps(zmm5, arg15)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    char temp0_458 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
    arg8 = _mm256_cvttps_epi32(zmm0)
    zmm2 = _mm256_cvttps_epi32(zmm5)
    float var_4c0_2[0x8] = arg7
    zmm5 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg8), arg5, arg7)
    float var_500_2[0x8] = arg9
    arg10 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm2), arg15, arg9)
    zmm0 = _mm256_broadcastss_ps(zmm3[0].o)
    arg7 = _mm256_add_ps(zmm0, zmm5)
    zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xea)
    arg9 = _mm256_broadcastsd_pd(zmm3[0].o)
    zmm3 = _mm256_cmp_ps(arg7, var_700_3, 1)
    arg7 = __vpaddd_ymmqq_ymmqq_memqq(arg8, data_142fc9420)
    arg13 = _mm256_blendv_ps(arg7, arg8, zmm3)
    float var_700_4[0x8] = arg13
    float var_480_2[0x8] = var_6e0_3
    arg14 = _mm256_cmp_ps(arg14, var_6e0_3, 5)
    
    if (temp0_458 != 0)
        arg8 = zmm1
    
    arg10 = _mm256_add_ps(arg9, arg10)
    zmm3 = _mm256_and_ps(var_540_2, arg14)
    zmm5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
    zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    bool cond:2_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
    arg11 = _mm256_cmpeq_epi32(var_6e0_3, var_6e0_3)
    
    if (not(cond:2_1))
        arg7 = _mm256_add_epi32(zmm1, arg11)
    
    zmm1 = _mm256_blendv_ps(arg7, arg8, arg6)
    float var_6e0_4[0x8] = zmm1
    arg14 = _mm256_cmp_ps(arg10, var_680_2, 5)
    arg6 = _mm256_cmp_ps(arg10, var_680_2, 1)
    zmm3 = _mm256_and_ps(arg6, var_540_2)
    zmm5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
    zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
        arg8 = zmm2
    
    zmm3 = _mm256_and_ps(var_540_2, arg14)
    zmm5[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
    zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
        arg7 = _mm256_add_epi32(zmm2, arg11)
    
    zmm2 = _mm256_blendv_ps(arg7, arg8, arg6)
    zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg13), arg5, var_4c0_2)
    zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm1), var_520_2, var_4e0_2)
    zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), arg15, var_500_2)
    zmm0 = _mm256_add_ps(zmm0, zmm3)
    zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_3e0_2)
    zmm3 = _mm256_add_ps(arg9, zmm5)
    float var_6c0_6[0x8] = zmm2
    float var_620_4[0x8] = _mm256_div_ps(_mm256_sub_ps(var_700_3, zmm0), arg5)
    int32_t var_600_4[0x8] = _mm256_div_ps(_mm256_sub_ps(var_480_2, zmm1), var_520_2)
    float var_5e0_4[0x8] = _mm256_div_ps(_mm256_sub_ps(var_680_2, zmm3), arg15)
    zmm0 = _mm256_cmpeq_epi32(arg13, arg11)
    zmm1 = zmm0 & var_540_2
    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        zmm1[0].o = zx.o(0)
        var_700_4 = _mm256_maskstore_ps(zmm0, zmm1)
        var_620_4 = _mm256_maskstore_ps(zmm0, zmm1)
        arg13 = var_700_4
    
    int32_t rax_19 = *arg4
    zmm0[0].o = zx.o(rax_19 - 1)
    zmm0 = _mm256_cmpeq_epi32(arg13, _mm256_broadcastd_epi32(zmm0[0]))
    zmm1 = zmm0 & var_540_2
    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        zmm1[0].o = zx.o(rax_19 - 2)
        var_700_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
        zmm1 = _mm256_broadcast_ss(1f)
        var_620_4 = _mm256_maskstore_ps(zmm0, zmm1)
    
    zmm0 = __vsubps_ymmqq_ymmqq_memqq(var_700_3, var_660_2)
    zmm1[0].o = zx.o(0)
    zmm2 = var_6e0_4
    arg5 = _mm256_cmpeq_epi32(zmm2, _mm256_cmpeq_epi32(var_680_2, var_680_2))
    zmm5 = arg5 & var_540_2
    var_520_2[0].o = _mm256_extracti128_si256(zmm5, 1)
    zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, var_520_2[0].o)
    zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm5[0].o) != 0)
        zmm2[0].o = zx.o(0)
        var_6e0_4 = _mm256_maskstore_ps(arg5, zmm2)
        var_600_4 = _mm256_maskstore_ps(arg5, zmm2)
        zmm2 = var_6e0_4
    
    arg5 = _mm256_sub_ps(var_480_2, var_5a0_2)
    zmm0 = _mm256_fmadd_ps(zmm0, zmm0, zmm1)
    int32_t rbx_3 = arg4[1]
    zmm1[0].o = zx.o(rbx_3 - 1)
    zmm1 = _mm256_cmpeq_epi32(zmm2, _mm256_broadcastd_epi32(zmm1[0]))
    zmm2 = zmm1 & var_540_2
    zmm5[0].o = _mm256_extracti128_si256(zmm2, 1)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        zmm2[0].o = zx.o(rbx_3 - 2)
        var_6e0_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm2[0]))
        var_600_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
    
    zmm2 = __vsubps_ymmqq_ymmqq_memqq(var_680_2, var_580_2)
    arg5 = _mm256_fmadd_ps(arg5, arg5, zmm0)
    arg6 = var_6c0_6
    zmm0 = _mm256_cmpeq_epi32(arg6, _mm256_cmpeq_epi32(zmm0, zmm0))
    zmm1 = zmm0 & var_540_2
    zmm5[0].o = _mm256_extracti128_si256(zmm1, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        zmm1[0].o = zx.o(0)
        float var_6c0_7[0x8] = _mm256_maskstore_ps(zmm0, zmm1)
        var_5e0_4 = _mm256_maskstore_ps(zmm0, zmm1)
        arg6 = var_6c0_7
    
    float var_680_3[0x8] = _mm256_fmadd_ps(zmm2, zmm2, arg5)
    int32_t rbx_5 = arg4[2]
    zmm0[0].o = zx.o(rbx_5 - 1)
    zmm0 = _mm256_cmpeq_epi32(arg6, _mm256_broadcastd_epi32(zmm0[0]))
    zmm1 = zmm0 & var_540_2
    arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        zmm1[0].o = zx.o(rbx_5 - 2)
        float var_6c0_8[0x8] = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
        var_5e0_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
        arg6 = var_6c0_8
    
    zmm1 = __vpbroadcastd_ymmqq_memd(*(arg16 + 4))
    arg12 = _mm256_mullo_epi32(zmm1, var_700_4)
    zmm0 = _mm256_add_epi32(arg12, var_6e0_4)
    arg10 = __vpbroadcastd_ymmqq_memd(*(arg16 + 8))
    arg7 = _mm256_mullo_epi32(zmm0, arg10)
    zmm0 = _mm256_add_epi32(arg7, arg6)
    int64_t rax_21 = *(arg16 + 0x10)
    zmm5 = _mm256_slli_epi32(zmm0, 2)
    zmm0[0].o = zx.o(0)
    zmm2 = var_540_2
    int128_t temp0_577
    int32_t temp1_15
    temp0_577, temp1_15 = _mm256_i32gather_ps(zmm0, *(rax_21 + zmm5[0].q), zmm2)
    zmm0 = temp0_577
    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
    arg5 = _mm256_sub_epi32(var_700_4, arg11)
    arg13 = _mm256_mullo_epi32(zmm1, arg5)
    arg9 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, var_6e0_4), arg10)
    zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg9, arg6), 2)
    arg5[0].o = zx.o(0)
    int128_t temp0_585
    int32_t temp1_16
    temp0_585, temp1_16 = _mm256_i32gather_ps(arg5, *(rax_21 + zmm1[0].q), zmm2)
    arg14 = _mm256_sub_epi32(var_6e0_4, arg11)
    arg12 = _mm256_mullo_epi32(_mm256_add_epi32(arg12, arg14), arg10)
    arg8 = _mm256_add_epi32(arg12, arg6)
    arg15 = _mm256_slli_epi32(arg8, 2)
    arg8[0].o = zx.o(0)
    int128_t temp0_591
    int32_t temp1_17
    temp0_591, temp1_17 = _mm256_i32gather_ps(arg8, *(rax_21 + arg15[0].q), zmm2)
    arg8 = temp0_591
    zmm3 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, arg14), arg10)
    arg10 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, arg6), 2)
    arg13[0].o = zx.o(0)
    int128_t temp0_596
    int32_t temp1_18
    temp0_596, temp1_18 = _mm256_i32gather_ps(arg13, *(rax_21 + arg10[0].q), zmm2)
    arg13 = temp0_596
    arg14 = temp1_18
    arg6 = _mm256_sub_epi32(arg6, arg11)
    arg7 = _mm256_slli_epi32(_mm256_add_epi32(arg7, arg6), 2)
    arg10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg10[0].o)
    int128_t temp0_601
    int32_t temp1_19
    temp0_601, temp1_19 = _mm256_i32gather_ps(arg10, *(rax_21 + arg7[0].q), zmm2)
    arg10 = temp0_601
    arg7 = _mm256_slli_epi32(_mm256_add_epi32(arg9, arg6), 2)
    arg9[0].o = zx.o(0)
    int128_t temp0_604
    int32_t temp1_20
    temp0_604, temp1_20 = _mm256_i32gather_ps(arg9, *(rax_21 + arg7[0].q), zmm2)
    arg9 = temp0_604
    arg11 = temp1_20
    arg7 = _mm256_slli_epi32(_mm256_add_epi32(arg12, arg6), 2)
    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
    int128_t temp0_608
    int32_t temp1_21
    temp0_608, temp1_21 = _mm256_i32gather_ps(arg11, *(rax_21 + arg7[0].q), zmm2)
    arg11 = temp0_608
    arg12 = temp1_21
    zmm3 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, arg6), 2)
    arg6[0].o = zx.o(0)
    int128_t temp0_611
    int32_t temp1_22
    temp0_611, temp1_22 = _mm256_i32gather_ps(arg6, *(rax_21 + zmm3[0].q), zmm2)
    zmm3 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_585, zmm0), var_620_4, zmm0)
    zmm0 = _mm256_fmadd_ps(_mm256_sub_ps(arg13, arg8), var_620_4, arg8)
    arg5 = _mm256_fmadd_ps(_mm256_sub_ps(arg9, arg10), var_620_4, arg10)
    arg7 = zmm2
    arg6 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_611, arg11), var_620_4, arg11)
    zmm5 = _mm256_fmadd_ps(_mm256_sub_ps(zmm0, zmm3), var_600_4, zmm3)
    zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
        _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(arg6, arg5), var_600_4, arg5), zmm5), zmm5, 
        var_5e0_4)
    var_600_4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_600_4[0].o, var_600_4[0].o)
    zmm2 = var_680_3
    zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm2, var_600_4, 0xc), arg7)
    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
        arg5 = _mm256_rsqrt_ps(zmm2)
        zmm2 = _mm256_mul_ps(zmm2, arg5)
        zmm2 = __vmulps_ymmqq_ymmqq_memqq(
            _mm256_mul_ps(arg5, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), arg5, zmm2)), var_3c0)
        arg5 = _mm256_rcp_ps(zmm2)
        zmm3 = _mm256_fmadd_ps(_mm256_fnmadd_ps(var_400_2, arg5, zmm2), arg5, zmm0)
        zmm1 = _mm256_cvtepi16_epi32(zmm1[0].o)
        zmm0 = _mm256_blendv_ps(zmm0, zmm3, zmm1)
    
    arg5 = var_560_2
    zmm1[0].o = arg20
    zmm0 = _mm256_sub_ps(zmm0, _mm256_broadcastss_ps(zmm1[0].o))
    zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(-9.99999975e-05f), 1), arg7)
    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    result = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
    
    if (result.b != 0)
        zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_660_2, zmm0, var_460)
        zmm5 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_5a0_2, zmm0, var_440)
        arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_580_2, zmm0, var_420)
        var_460 = _mm256_maskstore_ps(zmm1, zmm3)
        var_440 = _mm256_maskstore_ps(zmm1, zmm5)
        var_420 = _mm256_maskstore_ps(zmm1, arg6)
        arg5 = _mm256_blendv_ps(arg5, _mm256_add_ps(arg5, zmm0), _mm256_cvtepi16_epi32(zmm2[0].o))

zmm0 = _mm256_hadd_ps(var_460, var_460)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1 = var_440
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm3[0]
zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ zmm3[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
zmm1 = _mm256_hadd_ps(var_420, var_420)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
var_420[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ var_420[0]
var_420[0].o = __vmovsd_xmmdq_memq(*arg22)
var_420[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_420[0].o, arg22[1].d, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_420[0].o)
*arg22 = zmm0[0]
*(arg22 + 4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
arg22[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0 = _mm256_hadd_ps(arg5, arg5)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
zmm0[0].o = zmm0[0].o f+ *arg21
*arg21 = zmm0[0]
arg6[0].o = var_e8
arg7[0].o = var_d8
arg8[0].o = var_c8
arg9[0].o = var_b8
arg10[0].o = var_a8
arg11[0].o = var_98
arg12[0].o = var_88
arg13[0].o = var_78
arg14[0].o = var_68
arg15[0].o = var_58
_mm256_zeroupper()
return result
