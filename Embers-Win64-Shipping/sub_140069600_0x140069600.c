// 函数: sub_140069600
// 地址: 0x140069600
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
arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
float var_3c0[0x8] = arg5
float var_3e0[0x8] = arg5
float var_400[0x8] = arg5
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
float zmm2[0x8] = _mm256_broadcast_ss(0.5f)
int32_t zmm1[0x8]
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
float var_360[0x8] = zmm2
zmm0 = _mm256_mul_ps(zmm0, zmm2)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
int32_t var_690 = zmm1[0]
float zmm3[0x8]
zmm3[0].o = arg20
float temp0_8 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float temp0_9 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float var_6a0 = zmm0[0]
float temp0_13 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float temp0_14 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
int32_t r14_4 = ((arg23 s>> 0x1f u>> 0x1d) + arg23) & 0xfffffff8
uint32_t result

if (r14_4 s<= 0)
    result = 0
else
    zmm0 = _mm256_broadcast_ss(arg18[3])
    float var_3a0_1[0x8] = zmm0
    zmm0[0].o = *arg18
    zmm1[0].o = arg18[1]
    zmm2[0].o = zx.o(arg18[2])
    arg13 = _mm256_broadcast_ss(*arg1)
    arg7 = _mm256_broadcast_ss(*(arg1 + 4))
    float var_540_1[0x8] = _mm256_broadcast_ss(arg1[1].d)
    float var_420_1[0x8] = _mm256_broadcast_ss(*arg3)
    float var_440_1[0x8] = _mm256_broadcast_ss(*(arg3 + 4))
    arg5 = _mm256_broadcast_ss(arg3[1].d)
    uint32_t var_460_1[0x8] = arg5
    arg5[0].o = __vmovsd_xmmdq_memq(*arg3)
    arg6 = _mm256_broadcast_ss(2f)
    float var_300_1[0x8] = arg6
    arg5[0].o = __vdivps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
    arg6 = _mm256_broadcastss_ps(arg5[0].o)
    float var_480_1[0x8] = arg6
    arg6[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
    arg6 = _mm256_broadcastsd_pd(arg6[0].o)
    float var_4a0_1[0x8] = arg6
    arg5[0].o = _mm_permute_ps(arg5[0].o, 0xea)
    float var_4c0_1[0x8] = _mm256_broadcastsd_pd(arg5[0].o)
    float var_220_1[0x8] = _mm256_broadcast_ss(*(arg17 + 4))
    arg5 = _mm256_broadcast_ss(*(arg17 + 8))
    float var_240_1[0x8] = arg5
    int64_t rdi_1 = *(arg17 + 0x10)
    result = 0
    int32_t var_260_1[0x8] = _mm256_broadcastss_ps(zmm1[0].o)
    int32_t var_280_1[0x8] = _mm256_broadcastd_epi32(zmm2[0])
    arg14 = _mm256_broadcastss_ps(zmm0[0].o)
    float var_2a0_1[0x8] = _mm256_broadcastss_ps(zmm3[0].o)
    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    int32_t var_2c0_1[0x4] = _mm256_broadcast_ss(1.68155816e-44f)[0].o
    arg16 = _mm256_cmpeq_epi32(arg16, arg16)
    zmm0 = _mm256_broadcast_ss(-9.99999975e-05f)
    float var_2e0_1[0x8] = zmm0
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    int32_t var_320_1[0x8] = arg13
    float var_520_1[0x8] = arg7
    int32_t var_340_1[0x8] = arg14
    
    do
        float var_500_1[0x8] = arg5
        zmm0[0].o = zx.o(result)
        zmm0[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm0[0].o, var_2c0_1)
        zmm0 = _mm256_broadcastd_epi32(zmm0[0])
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93c0)
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        int128_t temp0_46
        int32_t temp1_1
        temp0_46, temp1_1 = _mm256_i32gather_ps(arg5, *(arg19 + zmm1[0].q), zmm2)
        arg5 = temp0_46
        zmm2 = temp1_1
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93e0)
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        int128_t temp0_50
        int32_t temp1_2
        temp0_50, temp1_2 = _mm256_i32gather_ps(arg6, *(arg19 + zmm1[0].q), zmm2)
        arg6 = temp0_50
        zmm2 = temp1_2
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc9400)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int128_t temp0_54
        int32_t temp1_3
        temp0_54, temp1_3 = _mm256_i32gather_ps(zmm2, *(arg19 + zmm0[0].q), zmm1)
        zmm2 = temp0_54
        float var_5c0_1[0x8] = arg5
        float var_5a0_1[0x8] = arg6
        float var_580_1[0x8] = zmm2
        float var_560_1[0x8] = zmm3
        float var_680_1[0x8] = var_3a0_1
        float var_660_1[0x8] = var_3a0_1
        float var_640_1[0x8] = var_3a0_1
        float var_620_1[0x8] = var_3a0_1
        arg12 = var_280_1
        zmm0 = _mm256_mul_ps(arg6, arg12)
        zmm1 = _mm256_mul_ps(zmm2, arg14)
        arg7 = _mm256_mul_ps(arg5, var_260_1)
        zmm2 = _mm256_fmsub_ps(zmm2, var_260_1, zmm0)
        arg5 = _mm256_fmsub_ps(arg5, arg12, zmm1)
        arg6 = _mm256_fmsub_ps(arg6, arg14, arg7)
        zmm2 = _mm256_add_ps(zmm2, zmm2)
        zmm0 = _mm256_add_ps(arg5, arg5)
        arg6 = _mm256_add_ps(arg6, arg6)
        arg7 = _mm256_fmadd_ps(var_5c0_1, var_3a0_1, zmm2)
        arg8 = _mm256_fmadd_ps(var_5a0_1, var_3a0_1, zmm0)
        arg5 = _mm256_fmadd_ps(var_580_1, var_3a0_1, arg6)
        arg9 = _mm256_mul_ps(zmm0, arg12)
        arg10 = _mm256_mul_ps(arg6, arg14)
        zmm1 = _mm256_mul_ps(zmm2, var_260_1)
        arg6 = _mm256_add_ps(arg7, _mm256_fmsub_ps(arg6, var_260_1, arg9))
        zmm2 = _mm256_add_ps(arg8, _mm256_fmsub_ps(zmm2, arg12, arg10))
        zmm3 = _mm256_add_ps(arg6, _mm256_broadcast_ss(arg18[4]))
        arg7 = _mm256_broadcast_ss(arg18[5])
        arg6 = _mm256_broadcast_ss(arg18[6])
        arg9 = _mm256_broadcast_ss(var_690)
        arg8 = _mm256_cmp_ps(arg9, zmm3, 1)
        
        if (_mm256_movemask_ps(arg8) != 0)
            var_680_1 = _mm256_maskstore_ps(arg8, arg9)
        
        zmm0 = _mm256_fmsub_ps(zmm0, arg14, zmm1)
        arg9 = _mm256_add_ps(zmm2, arg7)
        zmm1 = _mm256_xor_ps(arg8, arg16)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            arg7 = _mm256_broadcast_ss(var_6a0)
            zmm2 = _mm256_cmp_ps(zmm3, arg7, 1)
            arg8 = _mm256_and_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(arg8) != 0)
                var_680_1 = _mm256_maskstore_ps(arg8, arg7)
            
            zmm1 = _mm256_andnot_ps(zmm2, zmm1)
            
            if (_mm256_movemask_ps(zmm1) != 0)
                var_680_1 = _mm256_maskstore_ps(zmm1, zmm3)
        
        zmm0 = _mm256_add_ps(arg5, zmm0)
        zmm2 = _mm256_broadcast_ss(temp0_8)
        zmm1 = _mm256_cmp_ps(zmm2, arg9, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_660_1 = _mm256_maskstore_ps(zmm1, zmm2)
        
        arg6 = _mm256_add_ps(zmm0, arg6)
        zmm0 = _mm256_xor_ps(zmm1, arg16)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm2 = _mm256_broadcast_ss(temp0_13)
            zmm1 = _mm256_cmp_ps(arg9, zmm2, 1)
            arg5 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(arg5) != 0)
                var_660_1 = _mm256_maskstore_ps(arg5, zmm2)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_660_1 = _mm256_maskstore_ps(zmm0, arg9)
        
        arg14 = arg13
        zmm1 = _mm256_broadcast_ss(temp0_9)
        zmm0 = _mm256_cmp_ps(zmm1, arg6, 1)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            var_640_1 = _mm256_maskstore_ps(zmm0, zmm1)
        
        zmm0 = _mm256_xor_ps(zmm0, arg16)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm2 = _mm256_broadcast_ss(temp0_14)
            zmm1 = _mm256_cmp_ps(arg6, zmm2, 1)
            arg5 = _mm256_and_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(arg5) != 0)
                var_640_1 = _mm256_maskstore_ps(arg5, zmm2)
            
            zmm0 = _mm256_andnot_ps(zmm1, zmm0)
            
            if (_mm256_movemask_ps(zmm0) != 0)
                var_640_1 = _mm256_maskstore_ps(zmm0, arg6)
        
        float var_4e0_1[0x8] = arg6
        float var_600_1[0x8] = arg9
        float var_5e0_1[0x8] = zmm3
        zmm0 = _mm256_div_ps(_mm256_sub_ps(var_680_1, arg14), var_420_1)
        zmm1 = _mm256_div_ps(_mm256_sub_ps(var_660_1, var_520_1), var_440_1)
        zmm2 = _mm256_div_ps(_mm256_sub_ps(var_640_1, var_540_1), var_460_1)
        arg8 = _mm256_cvttps_epi32(zmm0)
        zmm1 = _mm256_cvttps_epi32(zmm1)
        arg10 = _mm256_cvttps_epi32(zmm2)
        zmm0 = _mm256_cvtepi32_ps(arg8)
        arg11 = _mm256_cvtepi32_ps(zmm1)
        zmm2 = _mm256_cvtepi32_ps(arg10)
        zmm0 = _mm256_fmadd_ps(zmm0, var_420_1, arg14)
        arg11 = _mm256_fmadd_ps(arg11, var_440_1, var_520_1)
        zmm2 = _mm256_fmadd_ps(zmm2, var_460_1, var_540_1)
        zmm0 = _mm256_cmp_ps(__vaddps_ymmqq_ymmqq_memqq(zmm0, var_480_1), var_680_1, 1)
        arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg8, data_142fc9420)
        zmm0 = _mm256_blendv_ps(arg9, arg8, zmm0)
        float var_680_2[0x8] = zmm0
        arg11 = __vaddps_ymmqq_ymmqq_memqq(arg11, var_4a0_1)
        arg16 = _mm256_cmp_ps(arg11, var_660_1, 1)
        
        if (_mm256_movemask_ps(arg16) != 0)
            arg8 = zmm1
        
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_4c0_1)
        arg11 = _mm256_cmp_ps(arg11, var_660_1, 5)
        var_440_1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
        var_540_1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, var_440_1[0].o)
        var_540_1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(var_540_1[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(var_540_1[0].o) != 0)
            arg9 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, data_142fc9420)
        
        arg16 = _mm256_blendv_ps(arg9, arg8, arg16)
        uint32_t var_660_2[0x8] = arg16
        zmm1 = _mm256_cmp_ps(zmm2, var_640_1, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            arg8 = arg10
        
        zmm2 = _mm256_cmp_ps(zmm2, var_640_1, 5)
        var_540_1[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, var_540_1[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
            arg9 = __vpaddd_ymmqq_ymmqq_memqq(arg10, data_142fc9420)
        
        zmm2 = _mm256_div_ps(
            _mm256_sub_ps(var_680_1, 
                __vaddps_ymmqq_ymmqq_memqq(
                    _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm0), var_420_1, arg14), var_480_1)), 
            var_420_1)
        zmm1 = _mm256_blendv_ps(arg9, arg8, zmm1)
        float var_5c0_2[0x8] = zmm2
        int32_t var_640_2[0x8] = zmm1
        zmm2 = _mm256_cvtepi32_ps(arg16)
        zmm1 = _mm256_cvtepi32_ps(zmm1)
        zmm2 = _mm256_fmadd_ps(zmm2, var_440_1, var_520_1)
        arg8 = var_460_1
        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm1, arg8, var_540_1)
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(zmm2, var_4a0_1)
        zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_4c0_1)
        zmm2 = _mm256_div_ps(_mm256_sub_ps(var_660_1, zmm2), var_440_1)
        float var_5a0_2[0x8] = zmm2
        int32_t var_580_2[0x8] = _mm256_div_ps(_mm256_sub_ps(var_640_1, zmm1), arg8)
        arg16 = _mm256_cmpeq_epi32(arg16, arg16)
        zmm1 = _mm256_cmpeq_epi32(zmm0, arg16)
        bool cond:1_1 = _mm256_movemask_ps(zmm1) == 0
        var_440_1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_440_1[0].o, var_440_1[0].o)
        
        if (not(cond:1_1))
            var_680_2 = _mm256_maskstore_ps(zmm1, var_440_1)
            var_5c0_2 = _mm256_maskstore_ps(zmm1, var_440_1)
            zmm0 = var_680_2
        
        int32_t rsi_6 = *arg4
        zmm1[0].o = zx.o(rsi_6 - 1)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        zmm0 = _mm256_cmpeq_epi32(zmm0, zmm1)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm1[0].o = zx.o(rsi_6 - 2)
            var_680_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
            var_5c0_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
        
        zmm0 = var_660_2
        zmm1 = _mm256_cmpeq_epi32(zmm0, arg16)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            var_660_2 = _mm256_maskstore_ps(zmm1, var_440_1)
            var_5a0_2 = _mm256_maskstore_ps(zmm1, var_440_1)
            zmm0 = var_660_2
        
        zmm1 = __vsubps_ymmqq_ymmqq_memqq(var_680_1, var_5e0_1)
        int32_t rsi_8 = arg4[1]
        zmm2[0].o = zx.o(rsi_8 - 1)
        zmm2 = _mm256_broadcastd_epi32(zmm2[0])
        zmm0 = _mm256_cmpeq_epi32(zmm0, zmm2)
        
        if (_mm256_movemask_ps(zmm0) != 0)
            zmm2[0].o = zx.o(rsi_8 - 2)
            var_660_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm2[0]))
            var_5a0_2 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
        
        zmm2 = __vsubps_ymmqq_ymmqq_memqq(var_640_1, var_4e0_1)
        arg5 = _mm256_sub_ps(var_660_1, var_600_1)
        zmm1 = _mm256_fmadd_ps(zmm1, zmm1, var_440_1)
        zmm0 = var_640_2
        arg6 = _mm256_cmpeq_epi32(zmm0, arg16)
        
        if (_mm256_movemask_ps(arg6) != 0)
            float var_640_3[0x8] = _mm256_maskstore_ps(arg6, var_440_1)
            var_580_2 = _mm256_maskstore_ps(arg6, var_440_1)
            zmm0 = var_640_3
        
        float var_380_1[0x8] = _mm256_mul_ps(zmm2, zmm2)
        arg5 = _mm256_fmadd_ps(arg5, arg5, zmm1)
        int32_t rsi_10 = arg4[2]
        zmm1[0].o = zx.o(rsi_10 - 1)
        zmm1 = _mm256_cmpeq_epi32(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm0[0].o = zx.o(rsi_10 - 2)
            float var_640_4[0x8] = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm0[0]))
            var_580_2 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
            zmm0 = var_640_4
        
        zmm3 = var_660_2
        arg11 = _mm256_mullo_epi32(var_220_1, var_680_2)
        arg15 = var_240_1
        zmm1 = _mm256_mullo_epi32(_mm256_add_epi32(arg11, zmm3), arg15)
        arg7 = _mm256_add_epi32(zmm1, zmm0)
        arg8 = _mm256_slli_epi32(arg7, 2)
        arg9 = _mm256_cmpeq_epi32(arg9, arg9)
        arg7[0].o = zx.o(0)
        int128_t temp0_225
        int32_t temp1_4
        temp0_225, temp1_4 = _mm256_i32gather_ps(arg7, *(rdi_1 + arg8[0].q), arg9)
        arg7 = temp0_225
        arg9 = temp1_4
        arg12 = _mm256_mullo_epi32(var_220_1, _mm256_sub_epi32(var_680_2, arg16))
        zmm2 = _mm256_mullo_epi32(_mm256_add_epi32(arg12, zmm3), arg15)
        arg8 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
        arg9 = _mm256_cmpeq_epi32(arg9, arg9)
        var_220_1[0].o = zx.o(0)
        int128_t temp0_233
        int32_t temp1_5
        temp0_233, temp1_5 = _mm256_i32gather_ps(var_220_1, *(rdi_1 + arg8[0].q), arg9)
        arg10 = temp0_233
        arg9 = var_5c0_2
        arg8 = var_5a0_2
        zmm3 = _mm256_sub_epi32(zmm3, arg16)
        arg11 = _mm256_mullo_epi32(_mm256_add_epi32(arg11, zmm3), arg15)
        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
        arg16 = _mm256_add_epi32(arg11, zmm0)
        arg13 = _mm256_slli_epi32(arg16, 2)
        arg14 = _mm256_cmpeq_epi32(arg14, arg14)
        arg16[0].o = zx.o(0)
        int128_t temp0_241
        int32_t temp1_6
        temp0_241, temp1_6 = _mm256_i32gather_ps(arg16, *(rdi_1 + arg13[0].q), arg14)
        arg16 = temp0_241
        arg14 = temp1_6
        zmm3 = _mm256_mullo_epi32(_mm256_add_epi32(arg12, zmm3), arg15)
        arg12 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, zmm0), 2)
        arg13 = _mm256_cmpeq_epi32(arg13, arg13)
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int128_t temp0_248
        int32_t temp1_7
        temp0_248, temp1_7 = _mm256_i32gather_ps(arg14, *(rdi_1 + arg12[0].q), arg13)
        arg13 = temp1_7
        zmm0 = _mm256_sub_epi32(zmm0, arg6)
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(zmm1, zmm0), 2)
        arg12 = _mm256_cmpeq_epi32(arg12, arg12)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        int128_t temp0_254
        int32_t temp1_8
        temp0_254, temp1_8 = _mm256_i32gather_ps(arg13, *(rdi_1 + zmm1[0].q), arg12)
        arg13 = temp0_254
        arg12 = temp1_8
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm0), 2)
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        arg12[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg12[0].o)
        int128_t temp0_259
        int32_t temp1_9
        temp0_259, temp1_9 = _mm256_i32gather_ps(arg12, *(rdi_1 + zmm1[0].q), zmm2)
        arg12 = temp0_259
        zmm2 = temp1_9
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg11, zmm0), 2)
        zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
        arg11[0].o = zx.o(0)
        int128_t temp0_263
        int32_t temp1_10
        temp0_263, temp1_10 = _mm256_i32gather_ps(arg11, *(rdi_1 + zmm1[0].q), zmm2)
        arg11 = temp0_263
        zmm2 = temp1_10
        zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, zmm0), 2)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int128_t temp0_268
        int32_t temp1_11
        temp0_268, temp1_11 = _mm256_i32gather_ps(zmm2, *(rdi_1 + zmm0[0].q), zmm1)
        zmm0 = _mm256_fmadd_ps(_mm256_sub_ps(arg10, arg7), arg9, arg7)
        zmm1 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_248, arg16), arg9, arg16)
        zmm3 = _mm256_fmadd_ps(_mm256_sub_ps(arg12, arg13), arg9, arg13)
        zmm2 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_268, arg11), arg9, arg11)
        zmm1 = _mm256_fmadd_ps(_mm256_sub_ps(zmm1, zmm0), arg8, zmm0)
        zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
            _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(zmm2, zmm3), arg8, zmm3), zmm1), zmm1, 
            var_580_2)
        zmm2 = __vaddps_ymmqq_ymmqq_memqq(arg5, var_380_1)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm1 = _mm256_cmp_ps(zmm2, zmm3, 0xc)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            arg5 = _mm256_rsqrt_ps(zmm2)
            zmm2 = _mm256_mul_ps(zmm2, arg5)
            zmm2 = __vmulps_ymmqq_ymmqq_memqq(
                _mm256_mul_ps(arg5, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), arg5, zmm2)), var_360)
            arg5 = _mm256_rcp_ps(zmm2)
            zmm2 =
                _mm256_fmadd_ps(__vfnmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg5, var_300_1), arg5, zmm0)
            zmm0 = _mm256_blendv_ps(zmm0, zmm2, zmm1)
        
        arg5 = var_500_1
        arg13 = var_320_1
        arg14 = var_340_1
        arg16 = _mm256_cmpeq_epi32(arg16, arg16)
        arg6 = var_600_1
        zmm0 = __vsubps_ymmqq_ymmqq_memqq(zmm0, var_2a0_1)
        zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, var_2e0_1, 1)
        
        if (_mm256_movemask_ps(zmm1) != 0)
            zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_5e0_1, zmm0, var_400)
            arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, zmm0, var_3e0)
            arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_4e0_1, zmm0, var_3c0)
            var_400 = _mm256_maskstore_ps(zmm1, zmm2)
            var_3e0 = _mm256_maskstore_ps(zmm1, arg6)
            var_3c0 = _mm256_maskstore_ps(zmm1, arg8)
            zmm0 = _mm256_add_ps(arg5, zmm0)
            arg5 = _mm256_blendv_ps(arg5, zmm0, zmm1)
        
        result += 8
    while (result s< r14_4)

if (result s< arg23)
    float var_500_2[0x8] = arg5
    zmm0[0].o = zx.o(result)
    zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_broadcastd_epi32(zmm0[0]), data_142fc93a0)
    zmm1[0].o = zx.o(arg23)
    zmm1 = _mm256_broadcastd_epi32(zmm1[0])
    zmm2 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(3))
    zmm3 = _mm256_cmpgt_epi32(zmm1, zmm0)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    int128_t temp0_316
    int32_t temp1_12
    temp0_316, temp1_12 = _mm256_i32gather_ps(arg5, *(arg19 + (zmm2[0].q << 2)), zmm3)
    arg5 = temp0_316
    zmm0 = _mm256_mullo_epi32(zmm0, __vpbroadcastd_ymmqq_memd(0xc))
    zmm1 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(4))
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    int128_t temp0_322
    int32_t temp1_13
    temp0_322, temp1_13 = _mm256_i32gather_ps(arg6, *(arg19 + zmm1[0].q), zmm3)
    arg6 = temp0_322
    zmm2 = temp1_13
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
    zmm0 = _mm256_add_epi32(zmm0, __vpbroadcastd_ymmqq_memd(8))
    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
    int128_t temp0_327
    int32_t temp1_14
    temp0_327, temp1_14 = _mm256_i32gather_ps(arg7, *(arg19 + zmm0[0].q), zmm3)
    arg7 = temp0_327
    float var_200_1[0x8] = arg5
    float var_1c0_1[0x8] = arg7
    float var_1a0_1[0x8] = zmm2
    zmm1 = _mm256_broadcast_ss(arg18[3])
    int32_t var_680_3[0x8] = zmm1
    int32_t var_660_3[0x8] = zmm1
    int32_t var_640_5[0x8] = zmm1
    int32_t var_620_2[0x8] = zmm1
    zmm0 = _mm256_broadcast_ss(arg18[1])
    arg8 = _mm256_broadcast_ss(arg18[2])
    arg9 = _mm256_broadcast_ss(*arg18)
    zmm2 = _mm256_mul_ps(zmm1, zmm2)
    arg10 = _mm256_mul_ps(arg6, arg8)
    arg11 = _mm256_mul_ps(arg7, arg9)
    arg12 = _mm256_mul_ps(arg5, zmm0)
    arg10 = _mm256_fmsub_ps(arg10, zmm0, arg7)
    arg11 = _mm256_fmsub_ps(arg11, arg8, arg5)
    arg12 = _mm256_fmsub_ps(arg12, arg9, arg6)
    zmm0 = _mm256_sub_ps(zmm2, zmm2)
    arg7 = _mm256_add_ps(arg10, arg10)
    arg5 = _mm256_add_ps(arg11, arg11)
    arg8 = _mm256_add_ps(arg12, arg12)
    zmm2 = _mm256_add_ps(zmm0, zmm0)
    float var_5c0_3[0x8] = arg7
    float var_5a0_3[0x8] = arg5
    float var_580_3[0x8] = arg8
    float var_560_2[0x8] = zmm2
    arg9 = _mm256_fmadd_ps(var_200_1, zmm1, arg7)
    arg10 = _mm256_fmadd_ps(arg6, zmm1, arg5)
    zmm0 = _mm256_fmadd_ps(var_1c0_1, zmm1, arg8)
    float var_180_1[0x8] = arg9
    float var_160_1[0x8] = arg10
    float var_140_1[0x8] = zmm0
    float var_120_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, zmm1, var_1a0_1)
    zmm1 = _mm256_broadcast_ss(arg18[1])
    arg11 = _mm256_broadcast_ss(arg18[2])
    zmm2 = _mm256_broadcast_ss(*arg18)
    arg12 = _mm256_mul_ps(arg5, arg11)
    arg13 = _mm256_mul_ps(arg8, zmm2)
    arg6 = _mm256_mul_ps(arg7, zmm1)
    arg12 = _mm256_fmsub_ps(arg12, arg8, zmm1)
    arg13 = _mm256_fmsub_ps(arg13, arg7, arg11)
    zmm1 = _mm256_add_ps(arg9, arg12)
    arg8 = _mm256_add_ps(arg10, arg13)
    zmm1 = _mm256_add_ps(zmm1, _mm256_broadcast_ss(arg18[4]))
    arg9 = _mm256_broadcast_ss(arg18[5])
    arg12 = _mm256_broadcast_ss(arg18[6])
    arg10 = _mm256_broadcast_ss(var_690)
    int32_t var_5e0_2[0x8] = zmm1
    arg7 = _mm256_cmp_ps(arg10, zmm1, 1)
    float var_4e0_2[0x8] = zmm3
    arg11 = _mm256_and_ps(arg7, zmm3)
    zmm1[0].o = _mm256_extractf128_ps(arg11[0].o, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        var_680_3 = _mm256_maskstore_ps(arg7, arg10)
    
    zmm2 = _mm256_fmsub_ps(zmm2, arg5, arg6)
    arg10 = _mm256_add_ps(arg8, arg9)
    arg13 = var_4e0_2
    arg5 = _mm256_andnot_ps(arg7, arg13)
    
    if (_mm256_movemask_ps(arg5) != 0)
        arg5 = _mm256_xor_ps(arg7, _mm256_cmpeq_epi32(arg5, arg5))
        arg7 = _mm256_broadcast_ss(var_6a0)
        arg6 = _mm256_cmp_ps(var_5e0_2, arg7, 1)
        arg8 = _mm256_and_ps(arg6, arg5)
        
        if (_mm256_movemask_ps(_mm256_and_ps(arg8, arg13)) != 0)
            var_680_3 = _mm256_maskstore_ps(arg8, arg7)
        
        arg5 = _mm256_andnot_ps(arg6, arg5)
        
        if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg13)) != 0)
            var_680_3 = _mm256_maskstore_ps(arg5, var_5e0_2)
    
    zmm2 = _mm256_add_ps(zmm0, zmm2)
    arg5 = _mm256_broadcast_ss(temp0_8)
    zmm0 = _mm256_cmp_ps(arg5, arg10, 1)
    arg6 = _mm256_and_ps(zmm0, arg13)
    arg7[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
    arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, arg7[0].o)
    arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
        var_660_3 = _mm256_maskstore_ps(zmm0, arg5)
    
    arg6 = _mm256_add_ps(zmm2, arg12)
    zmm1 = _mm256_andnot_ps(zmm0, arg13)
    
    if (_mm256_movemask_ps(zmm1) != 0)
        zmm0 ^= _mm256_cmpeq_epi32(zmm1, zmm1)
        zmm2 = _mm256_broadcast_ss(temp0_13)
        zmm1 = _mm256_cmp_ps(arg10, zmm2, 1)
        arg5 = _mm256_and_ps(zmm1, zmm0)
        zmm3 = _mm256_and_ps(arg5, arg13)
        
        if (_mm256_movemask_ps(zmm3) != 0)
            var_660_3 = _mm256_maskstore_ps(arg5, zmm2)
        
        zmm0 = _mm256_andnot_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
            var_660_3 = _mm256_maskstore_ps(zmm0, arg10)
    
    zmm1 = _mm256_broadcast_ss(temp0_9)
    zmm0 = _mm256_cmp_ps(zmm1, arg6, 1)
    zmm2 = _mm256_and_ps(zmm0, arg13)
    zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        var_640_5 = _mm256_maskstore_ps(zmm0, zmm1)
    
    zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
    
    if (_mm256_movemask_ps(_mm256_andnot_ps(zmm0, arg13)) != 0)
        zmm0 ^= zmm2
        zmm2 = _mm256_broadcast_ss(temp0_14)
        zmm1 = _mm256_cmp_ps(arg6, zmm2, 1)
        arg5 = _mm256_and_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(arg5, arg13)) != 0)
            var_640_5 = _mm256_maskstore_ps(arg5, zmm2)
        
        zmm0 = _mm256_andnot_ps(zmm1, zmm0)
        
        if (_mm256_movemask_ps(_mm256_and_ps(zmm0, arg13)) != 0)
            var_640_5 = _mm256_maskstore_ps(zmm0, arg6)
    
    float var_540_2[0x8] = arg6
    float var_520_2[0x8] = arg10
    arg12 = var_660_3
    arg6 = var_640_5
    arg8 = _mm256_broadcast_ss(*arg1)
    zmm3 = _mm256_broadcast_ss(*(arg1 + 4))
    zmm0 = _mm256_sub_ps(arg12, zmm3)
    arg5 = _mm256_broadcast_ss(*(arg3 + 4))
    zmm1 = _mm256_div_ps(zmm0, arg5)
    zmm0 = _mm256_sub_ps(var_680_3, arg8)
    arg10 = _mm256_broadcast_ss(arg1[1].d)
    zmm1 = _mm256_cvttps_epi32(zmm1)
    float var_480_2[0x8] = zmm3
    float var_4c0_2[0x8] = arg5
    zmm2 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm1), arg5, zmm3)
    zmm3[0].o = __vmovsd_xmmdq_memq(*arg3)
    arg5 = _mm256_broadcast_ss(2f)
    float var_3a0_2[0x8] = arg5
    zmm3[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
    arg5[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
    arg5 = _mm256_broadcastsd_pd(arg5[0].o)
    float var_380_2[0x8] = arg5
    arg15 = _mm256_add_ps(arg5, zmm2)
    arg7 = _mm256_cmp_ps(arg15, arg12, 1)
    zmm2 = _mm256_and_ps(arg7, arg13)
    arg5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
    arg5 = _mm256_broadcast_ss(*arg3)
    zmm0 = _mm256_div_ps(zmm0, arg5)
    float var_600_2[0x8] = arg6
    arg6 = _mm256_sub_ps(arg6, arg10)
    arg16 = _mm256_broadcast_ss(arg3[1].d)
    arg6 = _mm256_div_ps(arg6, arg16)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    char temp0_456 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
    arg9 = _mm256_cvttps_epi32(zmm0)
    zmm2 = _mm256_cvttps_epi32(arg6)
    float var_460_2[0x8] = arg8
    arg6 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(arg9), arg5, arg8)
    float var_4a0_2[0x8] = arg10
    arg11 = _mm256_fmadd_ps(_mm256_cvtepi32_ps(zmm2), arg16, arg10)
    zmm0 = _mm256_broadcastss_ps(zmm3[0].o)
    arg8 = _mm256_add_ps(zmm0, arg6)
    zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xea)
    arg10 = _mm256_broadcastsd_pd(zmm3[0].o)
    zmm3 = _mm256_cmp_ps(arg8, var_680_3, 1)
    arg8 = __vpaddd_ymmqq_ymmqq_memqq(arg9, data_142fc9420)
    arg14 = _mm256_blendv_ps(arg8, arg9, zmm3)
    int32_t var_680_4[0x8] = arg14
    float var_420_2[0x8] = arg12
    arg15 = _mm256_cmp_ps(arg15, arg12, 5)
    
    if (temp0_456 != 0)
        arg9 = zmm1
    
    arg11 = _mm256_add_ps(arg10, arg11)
    zmm3 = _mm256_and_ps(arg13, arg15)
    arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
    zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    bool cond:0_1 = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o) == 0
    arg12 = _mm256_cmpeq_epi32(arg12, arg12)
    
    if (not(cond:0_1))
        arg8 = _mm256_add_epi32(zmm1, arg12)
    
    zmm1 = _mm256_blendv_ps(arg8, arg9, arg7)
    float var_660_4[0x8] = zmm1
    arg15 = _mm256_cmp_ps(arg11, var_600_2, 5)
    arg7 = _mm256_cmp_ps(arg11, var_600_2, 1)
    zmm3 = _mm256_and_ps(arg7, arg13)
    arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
    zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
        arg9 = zmm2
    
    zmm3 = _mm256_and_ps(arg13, arg15)
    arg6[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
    zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
        arg8 = _mm256_add_epi32(zmm2, arg12)
    
    zmm2 = _mm256_blendv_ps(arg8, arg9, arg7)
    zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(arg14), arg5, var_460_2)
    zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm1), var_4c0_2, var_480_2)
    arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(_mm256_cvtepi32_ps(zmm2), arg16, var_4a0_2)
    zmm0 = _mm256_add_ps(zmm0, zmm3)
    zmm1 = __vaddps_ymmqq_ymmqq_memqq(zmm1, var_380_2)
    zmm3 = _mm256_add_ps(arg10, arg6)
    arg6 = var_680_3
    float var_640_6[0x8] = zmm2
    float var_5c0_4[0x8] = _mm256_div_ps(_mm256_sub_ps(arg6, zmm0), arg5)
    int32_t var_5a0_4[0x8] = _mm256_div_ps(_mm256_sub_ps(var_420_2, zmm1), var_4c0_2)
    float var_580_4[0x8] = _mm256_div_ps(_mm256_sub_ps(var_600_2, zmm3), arg16)
    zmm0 = _mm256_cmpeq_epi32(arg14, arg12)
    zmm1 = zmm0 & arg13
    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        zmm1[0].o = zx.o(0)
        var_680_4 = _mm256_maskstore_ps(zmm0, zmm1)
        var_5c0_4 = _mm256_maskstore_ps(zmm0, zmm1)
        arg14 = var_680_4
    
    int32_t rax_18 = *arg4
    zmm0[0].o = zx.o(rax_18 - 1)
    zmm0 = _mm256_cmpeq_epi32(arg14, _mm256_broadcastd_epi32(zmm0[0]))
    zmm1 = zmm0 & arg13
    zmm2[0].o = _mm256_extracti128_si256(zmm1, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        zmm1[0].o = zx.o(rax_18 - 2)
        var_680_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
        zmm1 = _mm256_broadcast_ss(1f)
        var_5c0_4 = _mm256_maskstore_ps(zmm0, zmm1)
    
    zmm0 = __vsubps_ymmqq_ymmqq_memqq(arg6, var_5e0_2)
    zmm1[0].o = zx.o(0)
    zmm2 = var_660_4
    arg5 = _mm256_cmpeq_epi32(zmm2, _mm256_cmpeq_epi32(var_600_2, var_600_2))
    arg6 = arg5 & arg13
    var_4c0_2[0].o = _mm256_extracti128_si256(arg6, 1)
    arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, var_4c0_2[0].o)
    arg6[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(arg6[0].o) != 0)
        zmm2[0].o = zx.o(0)
        var_660_4 = _mm256_maskstore_ps(arg5, zmm2)
        var_5a0_4 = _mm256_maskstore_ps(arg5, zmm2)
        zmm2 = var_660_4
    
    arg5 = _mm256_sub_ps(var_420_2, var_520_2)
    zmm0 = _mm256_fmadd_ps(zmm0, zmm0, zmm1)
    int32_t rbx_3 = arg4[1]
    zmm1[0].o = zx.o(rbx_3 - 1)
    zmm1 = _mm256_cmpeq_epi32(zmm2, _mm256_broadcastd_epi32(zmm1[0]))
    zmm2 = zmm1 & arg13
    arg6[0].o = _mm256_extracti128_si256(zmm2, 1)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0)
        zmm2[0].o = zx.o(rbx_3 - 2)
        var_660_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcastd_epi32(zmm2[0]))
        var_5a0_4 = _mm256_maskstore_ps(zmm1, _mm256_broadcast_ss(1f))
    
    zmm2 = __vsubps_ymmqq_ymmqq_memqq(var_600_2, var_540_2)
    arg5 = _mm256_fmadd_ps(arg5, arg5, zmm0)
    arg7 = var_640_6
    zmm0 = _mm256_cmpeq_epi32(arg7, _mm256_cmpeq_epi32(zmm0, zmm0))
    zmm1 = zmm0 & arg13
    arg6[0].o = _mm256_extracti128_si256(zmm1, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg6[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        zmm1[0].o = zx.o(0)
        float var_640_7[0x8] = _mm256_maskstore_ps(zmm0, zmm1)
        var_580_4 = _mm256_maskstore_ps(zmm0, zmm1)
        arg7 = var_640_7
    
    float var_600_3[0x8] = _mm256_fmadd_ps(zmm2, zmm2, arg5)
    int32_t rbx_6 = arg4[2]
    zmm0[0].o = zx.o(rbx_6 - 1)
    zmm0 = _mm256_cmpeq_epi32(arg7, _mm256_broadcastd_epi32(zmm0[0]))
    zmm1 = zmm0 & arg13
    arg5[0].o = _mm256_extracti128_si256(zmm1, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
    zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm1[0].o) != 0)
        zmm1[0].o = zx.o(rbx_6 - 2)
        float var_640_8[0x8] = _mm256_maskstore_ps(zmm0, _mm256_broadcastd_epi32(zmm1[0]))
        var_580_4 = _mm256_maskstore_ps(zmm0, _mm256_broadcast_ss(1f))
        arg7 = var_640_8
    
    zmm1 = __vpbroadcastd_ymmqq_memd(*(arg17 + 4))
    arg5 = var_680_4
    arg13 = _mm256_mullo_epi32(zmm1, arg5)
    zmm0 = _mm256_add_epi32(arg13, var_660_4)
    arg11 = __vpbroadcastd_ymmqq_memd(*(arg17 + 8))
    arg8 = _mm256_mullo_epi32(zmm0, arg11)
    zmm0 = _mm256_add_epi32(arg8, arg7)
    int64_t rax_21 = *(arg17 + 0x10)
    arg6 = _mm256_slli_epi32(zmm0, 2)
    arg10 = var_4e0_2
    zmm0[0].o = zx.o(0)
    int128_t temp0_575
    int32_t temp1_15
    temp0_575, temp1_15 = _mm256_i32gather_ps(zmm0, *(rax_21 + arg6[0].q), arg10)
    zmm0 = temp0_575
    arg12 = _mm256_cmpeq_epi32(arg12, arg12)
    arg14 = _mm256_mullo_epi32(zmm1, _mm256_sub_epi32(arg5, arg12))
    zmm2 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, var_660_4), arg11)
    zmm1 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, arg7), 2)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    int128_t temp0_584
    int32_t temp1_16
    temp0_584, temp1_16 = _mm256_i32gather_ps(arg6, *(rax_21 + zmm1[0].q), arg10)
    arg15 = _mm256_sub_epi32(var_660_4, arg12)
    arg13 = _mm256_mullo_epi32(_mm256_add_epi32(arg13, arg15), arg11)
    arg9 = _mm256_add_epi32(arg13, arg7)
    arg16 = _mm256_slli_epi32(arg9, 2)
    arg9[0].o = zx.o(0)
    int128_t temp0_590
    int32_t temp1_17
    temp0_590, temp1_17 = _mm256_i32gather_ps(arg9, *(rax_21 + arg16[0].q), arg10)
    arg9 = temp0_590
    zmm3 = _mm256_mullo_epi32(_mm256_add_epi32(arg14, arg15), arg11)
    arg11 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, arg7), 2)
    arg15[0].o = zx.o(0)
    int128_t temp0_595
    int32_t temp1_18
    temp0_595, temp1_18 = _mm256_i32gather_ps(arg15, *(rax_21 + arg11[0].q), arg10)
    arg15 = temp0_595
    arg14 = temp1_18
    arg7 = _mm256_sub_epi32(arg7, arg12)
    arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg8, arg7), 2)
    arg12[0].o = zx.o(0)
    int128_t temp0_599
    int32_t temp1_19
    temp0_599, temp1_19 = _mm256_i32gather_ps(arg12, *(rax_21 + arg8[0].q), arg10)
    arg12 = temp0_599
    arg11 = temp1_19
    arg8 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, arg7), 2)
    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
    int128_t temp0_603
    int32_t temp1_20
    temp0_603, temp1_20 = _mm256_i32gather_ps(arg11, *(rax_21 + arg8[0].q), arg10)
    arg11 = temp0_603
    arg8 = _mm256_slli_epi32(_mm256_add_epi32(arg13, arg7), 2)
    arg13[0].o = zx.o(0)
    int128_t temp0_606
    int32_t temp1_21
    temp0_606, temp1_21 = _mm256_i32gather_ps(arg13, *(rax_21 + arg8[0].q), arg10)
    arg13 = temp0_606
    zmm3 = _mm256_slli_epi32(_mm256_add_epi32(zmm3, arg7), 2)
    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
    int128_t temp0_610
    int32_t temp1_22
    temp0_610, temp1_22 = _mm256_i32gather_ps(arg8, *(rax_21 + zmm3[0].q), arg10)
    arg8 = temp0_610
    zmm3 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_584, zmm0), var_5c0_4, zmm0)
    zmm0 = _mm256_fmadd_ps(_mm256_sub_ps(arg15, arg9), var_5c0_4, arg9)
    arg6 = _mm256_fmadd_ps(_mm256_sub_ps(arg11, arg12), var_5c0_4, arg12)
    arg7 = _mm256_fmadd_ps(_mm256_sub_ps(arg8, arg13), var_5c0_4, arg13)
    arg5 = _mm256_fmadd_ps(_mm256_sub_ps(zmm0, zmm3), var_5a0_4, zmm3)
    zmm0 = __vfmadd132ps_ymmqq_ymmqq_memqq(
        _mm256_sub_ps(_mm256_fmadd_ps(_mm256_sub_ps(arg7, arg6), var_5a0_4, arg6), arg5), arg5, 
        var_580_4)
    var_5a0_4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(var_5a0_4[0].o, var_5a0_4[0].o)
    zmm2 = var_600_3
    zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm2, var_5a0_4, 0xc), arg10)
    zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    
    if (__vpmovmskb_gpr32d_xmmdq(zmm3[0].o) != 0)
        arg5 = _mm256_rsqrt_ps(zmm2)
        zmm2 = _mm256_mul_ps(zmm2, arg5)
        zmm2 = __vmulps_ymmqq_ymmqq_memqq(
            _mm256_mul_ps(arg5, _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), arg5, zmm2)), var_360)
        arg5 = _mm256_rcp_ps(zmm2)
        zmm3 = _mm256_fmadd_ps(_mm256_fnmadd_ps(var_3a0_2, arg5, zmm2), arg5, zmm0)
        zmm1 = _mm256_cvtepi16_epi32(zmm1[0].o)
        zmm0 = _mm256_blendv_ps(zmm0, zmm3, zmm1)
    
    arg5 = var_500_2
    zmm1[0].o = arg20
    zmm0 = _mm256_sub_ps(zmm0, _mm256_broadcastss_ps(zmm1[0].o))
    zmm1 = _mm256_and_ps(_mm256_cmp_ps(zmm0, _mm256_broadcast_ss(-9.99999975e-05f), 1), arg10)
    zmm2[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
    zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    result = __vpmovmskb_gpr32d_xmmdq(zmm3[0].o)
    
    if (result.b != 0)
        zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_5e0_2, zmm0, var_400)
        arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_520_2, zmm0, var_3e0)
        arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(var_540_2, zmm0, var_3c0)
        var_400 = _mm256_maskstore_ps(zmm1, zmm3)
        var_3e0 = _mm256_maskstore_ps(zmm1, arg6)
        var_3c0 = _mm256_maskstore_ps(zmm1, arg7)
        arg5 = _mm256_blendv_ps(arg5, _mm256_add_ps(arg5, zmm0), _mm256_cvtepi16_epi32(zmm2[0].o))

zmm0 = _mm256_hadd_ps(var_400, var_400)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1 = var_3e0
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm3[0]
zmm3[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ zmm3[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
zmm1 = _mm256_hadd_ps(var_3c0, var_3c0)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
var_3c0[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ var_3c0[0]
var_3c0[0].o = __vmovsd_xmmdq_memq(*arg22)
var_3c0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_3c0[0].o, arg22[1].d, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, var_3c0[0].o)
*arg22 = zmm0[0]
*(arg22 + 4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
arg22[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0 = _mm256_hadd_ps(arg5, arg5)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
zmm0[0].o = zmm0[0].o f+ *arg21
*arg21 = zmm0[0]
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
