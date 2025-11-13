// 函数: sub_140061bd0
// 地址: 0x140061bd0
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
float zmm4[0x8]
zmm4[0].o = arg17
float zmm2[0x8]
float zmm3[0x8]

if (_mm256_movemask_ps(zmm0) != 0xff)
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    float var_3a0_1[0x8] = arg5
    float var_3c0_1[0x8] = arg5
    int32_t rdi_9 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
    float var_3e0_1[0x8] = arg5
    float var_180_1[0x8] = zmm0
    float var_480_1[0x8]
    int32_t rbx_1
    
    if (rdi_9 s<= 0)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        var_480_1 = arg5
        rbx_1 = 0
        
        if (0 s>= arg20)
            zmm2 = var_480_1
        else
        label_1400625c3:
            zmm0[0].o = zx.o(rbx_1)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            arg5 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
            zmm0[0].o = zx.o(arg20)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm3 = _mm256_mullo_epi32(arg5, __vpbroadcastd_ymmqq_memd(3))
            zmm0 = _mm256_cmpgt_epi32(zmm0, arg5)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            float temp0_288[0x8]
            int32_t temp1_10
            temp0_288, temp1_10 = _mm256_i32gather_ps(zmm4, *(arg4 + (zmm3[0].q << 2)), zmm0)
            arg6 = temp1_10
            zmm3 = _mm256_mullo_epi32(arg5, __vpbroadcastd_ymmqq_memd(0xc))
            arg5 = _mm256_add_epi32(zmm3, __vpbroadcastd_ymmqq_memd(4))
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            float temp0_294[0x8]
            int32_t temp1_11
            temp0_294, temp1_11 = _mm256_i32gather_ps(arg6, *(arg4 + arg5[0].q), zmm0)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            arg7 = __vpbroadcastd_ymmqq_memd(8)
            zmm3 = _mm256_add_epi32(zmm3, arg7)
            arg7[0].o = zx.o(0)
            float temp0_298[0x8]
            int32_t temp1_12
            temp0_298, temp1_12 = _mm256_i32gather_ps(arg7, *(arg4 + zmm3[0].q), zmm0)
            float temp0_299[0x8] = _mm256_broadcast_ss(arg3[3])
            float var_200_4[0x8] = temp0_299
            float var_1e0_4[0x8] = temp0_299
            float var_1c0_4[0x8] = temp0_299
            float var_1a0_4[0x8] = temp0_299
            float temp0_300[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_301[0x8] = _mm256_broadcast_ss(arg3[2])
            arg10 = _mm256_broadcast_ss(*arg3)
            float temp0_303[0x8] = _mm256_mul_ps(temp0_299, arg5)
            float temp0_304[0x8] = _mm256_mul_ps(temp0_294, temp0_301)
            float temp0_305[0x8] = _mm256_mul_ps(temp0_298, arg10)
            float temp0_306[0x8] = _mm256_mul_ps(temp0_288, temp0_300)
            float temp0_307[0x8] = _mm256_fmsub_ps(temp0_304, temp0_300, temp0_298)
            float temp0_308[0x8] = _mm256_fmsub_ps(temp0_305, temp0_301, temp0_288)
            float temp0_309[0x8] = _mm256_fmsub_ps(temp0_306, arg10, temp0_294)
            float temp0_310[0x8] = _mm256_sub_ps(temp0_303, temp0_303)
            float temp0_311[0x8] = _mm256_add_ps(temp0_307, temp0_307)
            float temp0_312[0x8] = _mm256_add_ps(temp0_308, temp0_308)
            float temp0_313[0x8] = _mm256_add_ps(temp0_309, temp0_309)
            float temp0_314[0x8] = _mm256_add_ps(temp0_310, temp0_310)
            float var_460_4[0x8] = temp0_311
            float var_440_4[0x8] = temp0_312
            float var_420_4[0x8] = temp0_313
            float var_400_4[0x8] = temp0_314
            float temp0_315[0x8] = _mm256_fmadd_ps(temp0_288, temp0_299, temp0_311)
            arg10 = _mm256_fmadd_ps(temp0_294, temp0_299, temp0_312)
            arg11 = _mm256_fmadd_ps(temp0_298, temp0_299, temp0_313)
            float var_160_2[0x8] = temp0_315
            uint32_t var_140_2[0x8] = arg10
            float var_120_2[0x8] = arg11
            float var_100_2[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_314, temp0_299, arg5)
            float temp0_319[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_320[0x8] = _mm256_broadcast_ss(arg3[2])
            arg12 = _mm256_broadcast_ss(*arg3)
            float temp0_322[0x8] = _mm256_mul_ps(temp0_312, temp0_320)
            float temp0_323[0x8] = _mm256_mul_ps(temp0_313, arg12)
            float temp0_324[0x8] = _mm256_mul_ps(temp0_311, temp0_319)
            arg13 = _mm256_fmsub_ps(temp0_322, temp0_313, temp0_319)
            arg14 = _mm256_fmsub_ps(temp0_323, temp0_311, temp0_320)
            arg15 = _mm256_fmsub_ps(temp0_324, temp0_312, arg12)
            float temp0_328[0x8] = _mm256_add_ps(temp0_315, arg13)
            float temp0_329[0x8] = _mm256_add_ps(arg10, arg14)
            float temp0_330[0x8] = _mm256_add_ps(arg11, arg15)
            float temp0_332[0x8] = _mm256_add_ps(temp0_328, _mm256_broadcast_ss(arg3[4]))
            zmm4 = _mm256_add_ps(temp0_329, _mm256_broadcast_ss(arg3[5]))
            float temp0_336[0x8] = _mm256_add_ps(temp0_330, _mm256_broadcast_ss(arg3[6]))
            float temp0_338[0x8] = _mm256_sub_ps(temp0_332, _mm256_broadcast_ss(*arg2))
            float temp0_340[0x8] = _mm256_sub_ps(zmm4, _mm256_broadcast_ss(arg2[1]))
            float temp0_342[0x8] = _mm256_sub_ps(temp0_336, _mm256_broadcast_ss(arg2[2]))
            float temp0_345[0x8] = _mm256_fmadd_ps(
                _mm256_fmadd_ps(_mm256_fmadd_ps(temp0_338, temp0_338, arg5), temp0_340, temp0_340), 
                temp0_342, temp0_342)
            float temp0_346[0x8] = _mm256_rsqrt_ps(temp0_345)
            arg8 = _mm256_broadcast_ss(*arg1)
            float temp0_348[0x8] = _mm256_mul_ps(temp0_345, temp0_346)
            float temp0_353[0x8] = _mm256_mul_ps(
                _mm256_mul_ps(temp0_346, 
                    _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_346, temp0_348)), 
                _mm256_broadcast_ss(0.5f))
            float temp0_354[0x8] = _mm256_rcp_ps(temp0_353)
            arg9 = _mm256_fnmadd_ps(
                _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), temp0_354, temp0_353), temp0_354, arg8)
            temp0_353[0].o = arg17
            float temp0_359[0x8] = _mm256_sub_ps(arg9, _mm256_broadcastss_ps(temp0_353[0].o))
            arg7 = _mm256_cmp_ps(temp0_359, _mm256_broadcast_ss(-9.99999975e-05f), 1)
            zmm0 = _mm256_and_ps(arg7, zmm0)
            arg7[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
            arg8[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            result = zx.q(__vpmovmskb_gpr32d_xmmdq(arg8[0].o))
            
            if (result.b == 0)
                zmm2 = var_480_1
            else
                float temp0_367[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_332, temp0_359, var_3e0_1)
                zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, temp0_359, var_3c0_1)
                float temp0_369[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_336, temp0_359, var_3a0_1)
                var_3e0_1 = _mm256_maskstore_ps(zmm0, temp0_367)
                var_3c0_1 = _mm256_maskstore_ps(zmm0, zmm4)
                var_3a0_1 = _mm256_maskstore_ps(zmm0, temp0_369)
                zmm0 = _mm256_add_ps(var_480_1, temp0_359)
                zmm2 = _mm256_blendv_ps(var_480_1, zmm0, _mm256_cvtepi16_epi32(arg7[0].o))
    else
        float temp0_85[0x8] = _mm256_broadcast_ss(arg3[3])
        zmm0[0].o = *arg3
        arg5[0].o = arg3[1]
        zmm2[0].o = arg3[2]
        float temp0_86[0x8] = _mm256_broadcast_ss(*arg1)
        float temp0_87[0x8] = _mm256_broadcast_ss(*arg2)
        float temp0_88[0x8] = _mm256_broadcast_ss(arg2[1])
        float temp0_89[0x8] = _mm256_broadcast_ss(arg2[2])
        zmm4 = _mm256_broadcastss_ps(zmm4[0].o)
        float var_320_2[0x8] = zmm4
        rbx_1 = 0
        arg11 = __vpbroadcastd_ymmqq_memd(0xc)
        arg15 = _mm256_broadcastss_ps(arg5[0].o)
        arg16 = _mm256_broadcastss_ps(zmm2[0].o)
        zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
        float temp0_95[0x8] = _mm256_broadcast_ss(3f)
        arg12 = _mm256_broadcast_ss(0.5f)
        arg13 = _mm256_broadcast_ss(2f)
        arg14 = _mm256_broadcast_ss(-9.99999975e-05f)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        var_480_1 = zmm2
        
        do
            zmm4[0].o = zx.o(rbx_1)
            zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg11[0].o)
            zmm4 = _mm256_broadcastd_epi32(zmm4[0])
            arg6 = __vpaddd_ymmqq_ymmqq_memqq(zmm4, data_142fc93c0)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            float temp0_105[0x8]
            int32_t temp1_4
            temp0_105, temp1_4 = _mm256_i32gather_ps(arg7, *(arg4 + arg6[0].q), arg8)
            arg8 = temp1_4
            arg6 = __vpaddd_ymmqq_ymmqq_memqq(zmm4, data_142fc93e0)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            uint32_t temp0_108[0x8] = _mm256_cmpeq_epi32(arg10, arg10)
            float temp0_109[0x8]
            int32_t temp1_5
            temp0_109, temp1_5 = _mm256_i32gather_ps(arg8, *(arg4 + arg6[0].q), temp0_108)
            arg10 = temp1_5
            zmm4 = __vpaddd_ymmqq_ymmqq_memqq(zmm4, data_142fc9400)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            uint32_t temp0_112[0x8] = _mm256_cmpeq_epi32(arg10, arg10)
            float temp0_113[0x8]
            int32_t temp1_6
            temp0_113, temp1_6 = _mm256_i32gather_ps(arg6, *(arg4 + zmm4[0].q), temp0_112)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            float var_400_2[0x8] = zmm2
            float var_200_2[0x8] = temp0_85
            float var_1e0_2[0x8] = temp0_85
            float temp0_115[0x8] = _mm256_mul_ps(temp0_109, arg16)
            arg10 = _mm256_mul_ps(temp0_113, zmm0)
            float temp0_117[0x8] = _mm256_mul_ps(temp0_105, arg15)
            float temp0_118[0x8] = _mm256_fmsub_ps(temp0_113, arg15, temp0_115)
            float temp0_119[0x8] = _mm256_fmsub_ps(temp0_105, arg16, arg10)
            float temp0_120[0x8] = _mm256_fmsub_ps(temp0_109, zmm0, temp0_117)
            float temp0_121[0x8] = _mm256_add_ps(temp0_118, temp0_118)
            float temp0_122[0x8] = _mm256_add_ps(temp0_119, temp0_119)
            float temp0_123[0x8] = _mm256_add_ps(temp0_120, temp0_120)
            float temp0_124[0x8] = _mm256_fmadd_ps(temp0_113, temp0_85, temp0_123)
            float temp0_125[0x8] = _mm256_mul_ps(temp0_122, arg16)
            arg10 = _mm256_mul_ps(temp0_123, zmm0)
            float temp0_127[0x8] = _mm256_fmsub_ps(temp0_123, arg15, temp0_125)
            float temp0_129[0x8] =
                _mm256_add_ps(_mm256_fmadd_ps(temp0_105, temp0_85, temp0_121), temp0_127)
            float temp0_130[0x8] = _mm256_mul_ps(temp0_121, arg15)
            float temp0_131[0x8] = _mm256_fmsub_ps(temp0_121, arg16, arg10)
            arg10 = _mm256_add_ps(_mm256_fmadd_ps(temp0_109, temp0_85, temp0_122), temp0_131)
            float var_1c0_2[0x8] = temp0_85
            float temp0_135[0x8] =
                _mm256_add_ps(temp0_124, _mm256_fmsub_ps(temp0_122, zmm0, temp0_130))
            zmm4 = _mm256_add_ps(temp0_129, _mm256_broadcast_ss(arg3[4]))
            float temp0_139[0x8] = _mm256_add_ps(arg10, _mm256_broadcast_ss(arg3[5]))
            arg7 = _mm256_add_ps(temp0_135, _mm256_broadcast_ss(arg3[6]))
            float temp0_142[0x8] = __vsubps_ymmqq_ymmqq_memqq(zmm4, temp0_87)
            float temp0_143[0x8] = __vsubps_ymmqq_ymmqq_memqq(temp0_139, temp0_88)
            float temp0_145[0x8] =
                _mm256_fmadd_ps(_mm256_fmadd_ps(temp0_142, temp0_142, zmm2), temp0_143, temp0_143)
            float temp0_146[0x8] = __vsubps_ymmqq_ymmqq_memqq(arg7, temp0_89)
            float temp0_147[0x8] = _mm256_fmadd_ps(temp0_145, temp0_146, temp0_146)
            float temp0_148[0x8] = _mm256_rsqrt_ps(temp0_147)
            float temp0_152[0x8] = _mm256_mul_ps(
                _mm256_mul_ps(temp0_148, 
                    _mm256_fnmadd_ps(_mm256_mul_ps(temp0_147, temp0_148), temp0_148, temp0_95)), 
                arg12)
            arg9 = _mm256_rcp_ps(temp0_152)
            float var_1a0_2[0x8] = temp0_85
            arg10 = __vsubps_ymmqq_ymmqq_memqq(
                __vfnmadd213ps_ymmqq_ymmqq_memqq(_mm256_fnmadd_ps(temp0_152, arg9, arg13), arg9, 
                    temp0_86), 
                var_320_2)
            arg8 = _mm256_cmp_ps(arg10, arg14, 1)
            result = zx.q(_mm256_movemask_ps(arg8))
            
            if (result.b != 0)
                float temp0_159[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, arg10, var_3e0_1)
                float temp0_160[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_139, arg10, var_3c0_1)
                arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, arg10, var_3a0_1)
                var_3e0_1 = _mm256_maskstore_ps(arg8, temp0_159)
                var_3c0_1 = _mm256_maskstore_ps(arg8, temp0_160)
                var_3a0_1 = _mm256_maskstore_ps(arg8, arg7)
                zmm4 = _mm256_add_ps(var_480_1, arg10)
                zmm2 = _mm256_blendv_ps(var_480_1, zmm4, arg8)
                var_480_1 = zmm2
            
            rbx_1 += 8
        while (rbx_1 s< rdi_9)
        
        if (rbx_1 s< arg20)
            goto label_1400625c3
        
        zmm2 = var_480_1
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm0 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_180_1)
    arg5 = zmm0 & not.32(var_3e0_1)
    float temp0_378[0x8] = _mm256_hadd_ps(arg5, arg5)
    arg5 = _mm256_hadd_ps(temp0_378, temp0_378)
    zmm3 = zmm0 & not.32(var_3c0_1)
    zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    float temp0_381[0x8] = _mm256_hadd_ps(zmm3, zmm3)
    arg5[0].o = arg5[0].o f+ zmm4[0]
    float temp0_382[0x8] = _mm256_hadd_ps(temp0_381, temp0_381)
    zmm4[0].o = _mm256_extractf128_ps(temp0_382[0].o, 1)
    temp0_382[0].o = temp0_382[0].o f+ zmm4[0]
    zmm4 = zmm0 & not.32(var_3a0_1)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, temp0_382[0].o, 0x10)
    float temp0_385[0x8] = _mm256_hadd_ps(zmm4, zmm4)
    float temp0_386[0x8] = _mm256_hadd_ps(temp0_385, temp0_385)
    zmm4[0].o = _mm256_extractf128_ps(temp0_386[0].o, 1)
    temp0_386[0].o = temp0_386[0].o f+ zmm4[0]
    zmm4[0].o = __vmovsd_xmmdq_memq(*arg19)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, arg19[1].d, 0x20)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, temp0_386[0].o, 0x20)
    arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
    *arg19 = arg5[0]
    *(arg19 + 4) = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
    arg19[1].d = __vextractps_memd_xmmdq_immb(arg5[0].o, 2)
    zmm0 &= not.32(zmm2)
    zmm0 = _mm256_hadd_ps(zmm0, zmm0)
else
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    float var_340_1[0x8] = zmm0
    float var_360_1[0x8] = zmm0
    int32_t rdi_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
    float var_380_1[0x8] = zmm0
    float var_480[0x8]
    int32_t rbx
    
    if (rdi_4 s<= 0)
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        var_480 = zmm0
        rbx = 0
        
        if (0 s>= arg20)
            arg5 = var_480
        else
        label_140062246:
            zmm0[0].o = zx.o(rbx)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm2 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
            zmm0[0].o = zx.o(arg20)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm3 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(3))
            zmm0 = _mm256_cmpgt_epi32(zmm0, zmm2)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            float temp0_175[0x8]
            int32_t temp1_7
            temp0_175, temp1_7 = _mm256_i32gather_ps(arg6, *(arg4 + (zmm3[0].q << 2)), zmm0)
            zmm3 = _mm256_mullo_epi32(zmm2, __vpbroadcastd_ymmqq_memd(0xc))
            zmm2 = _mm256_add_epi32(zmm3, __vpbroadcastd_ymmqq_memd(4))
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_181[0x8]
            int32_t temp1_8
            temp0_181, temp1_8 = _mm256_i32gather_ps(arg7, *(arg4 + zmm2[0].q), zmm0)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm3 = _mm256_add_epi32(zmm3, __vpbroadcastd_ymmqq_memd(8))
            arg8[0].o = zx.o(0)
            float temp0_185[0x8]
            int32_t temp1_9
            temp0_185, temp1_9 = _mm256_i32gather_ps(arg8, *(arg4 + zmm3[0].q), zmm0)
            float temp0_186[0x8] = _mm256_broadcast_ss(arg3[3])
            float var_200_3[0x8] = temp0_186
            float var_1e0_3[0x8] = temp0_186
            float var_1c0_3[0x8] = temp0_186
            float var_1a0_3[0x8] = temp0_186
            float temp0_187[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_188[0x8] = _mm256_broadcast_ss(arg3[2])
            arg10 = _mm256_broadcast_ss(*arg3)
            float temp0_190[0x8] = _mm256_mul_ps(temp0_186, zmm2)
            float temp0_191[0x8] = _mm256_mul_ps(temp0_181, temp0_188)
            float temp0_192[0x8] = _mm256_mul_ps(temp0_185, arg10)
            float temp0_193[0x8] = _mm256_mul_ps(temp0_175, temp0_187)
            float temp0_194[0x8] = _mm256_fmsub_ps(temp0_191, temp0_187, temp0_185)
            float temp0_195[0x8] = _mm256_fmsub_ps(temp0_192, temp0_188, temp0_175)
            float temp0_196[0x8] = _mm256_fmsub_ps(temp0_193, arg10, temp0_181)
            float temp0_197[0x8] = _mm256_sub_ps(temp0_190, temp0_190)
            float temp0_198[0x8] = _mm256_add_ps(temp0_194, temp0_194)
            float temp0_199[0x8] = _mm256_add_ps(temp0_195, temp0_195)
            float temp0_200[0x8] = _mm256_add_ps(temp0_196, temp0_196)
            float temp0_201[0x8] = _mm256_add_ps(temp0_197, temp0_197)
            float var_460_3[0x8] = temp0_198
            float var_440_3[0x8] = temp0_199
            float var_420_3[0x8] = temp0_200
            float var_400_3[0x8] = temp0_201
            float temp0_202[0x8] = _mm256_fmadd_ps(temp0_175, temp0_186, temp0_198)
            arg10 = _mm256_fmadd_ps(temp0_181, temp0_186, temp0_199)
            arg11 = _mm256_fmadd_ps(temp0_185, temp0_186, temp0_200)
            float var_160_1[0x8] = temp0_202
            uint32_t var_140_1[0x8] = arg10
            float var_120_1[0x8] = arg11
            float var_100_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_201, temp0_186, zmm2)
            float temp0_206[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_207[0x8] = _mm256_broadcast_ss(arg3[2])
            arg12 = _mm256_broadcast_ss(*arg3)
            float temp0_209[0x8] = _mm256_mul_ps(temp0_199, temp0_207)
            float temp0_210[0x8] = _mm256_mul_ps(temp0_200, arg12)
            float temp0_211[0x8] = _mm256_mul_ps(temp0_198, temp0_206)
            arg13 = _mm256_fmsub_ps(temp0_209, temp0_200, temp0_206)
            arg14 = _mm256_fmsub_ps(temp0_210, temp0_198, temp0_207)
            arg15 = _mm256_fmsub_ps(temp0_211, temp0_199, arg12)
            float temp0_215[0x8] = _mm256_add_ps(temp0_202, arg13)
            float temp0_216[0x8] = _mm256_add_ps(arg10, arg14)
            float temp0_217[0x8] = _mm256_add_ps(arg11, arg15)
            float temp0_219[0x8] = _mm256_add_ps(temp0_215, _mm256_broadcast_ss(arg3[4]))
            zmm4 = _mm256_add_ps(temp0_216, _mm256_broadcast_ss(arg3[5]))
            float temp0_223[0x8] = _mm256_add_ps(temp0_217, _mm256_broadcast_ss(arg3[6]))
            float temp0_225[0x8] = _mm256_sub_ps(temp0_219, _mm256_broadcast_ss(*arg2))
            float temp0_227[0x8] = _mm256_sub_ps(zmm4, _mm256_broadcast_ss(arg2[1]))
            float temp0_229[0x8] = _mm256_sub_ps(temp0_223, _mm256_broadcast_ss(arg2[2]))
            float temp0_232[0x8] = _mm256_fmadd_ps(
                _mm256_fmadd_ps(_mm256_fmadd_ps(temp0_225, temp0_225, zmm2), temp0_227, temp0_227), 
                temp0_229, temp0_229)
            float temp0_233[0x8] = _mm256_rsqrt_ps(temp0_232)
            arg8 = _mm256_broadcast_ss(*arg1)
            float temp0_235[0x8] = _mm256_mul_ps(temp0_232, temp0_233)
            float temp0_240[0x8] = _mm256_mul_ps(
                _mm256_mul_ps(temp0_233, 
                    _mm256_fnmadd_ps(_mm256_broadcast_ss(3f), temp0_233, temp0_235)), 
                _mm256_broadcast_ss(0.5f))
            float temp0_241[0x8] = _mm256_rcp_ps(temp0_240)
            arg9 = _mm256_fnmadd_ps(
                _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), temp0_241, temp0_240), temp0_241, arg8)
            temp0_240[0].o = arg17
            float temp0_246[0x8] = _mm256_sub_ps(arg9, _mm256_broadcastss_ps(temp0_240[0].o))
            arg7 = _mm256_cmp_ps(temp0_246, _mm256_broadcast_ss(-9.99999975e-05f), 1)
            zmm0 = _mm256_and_ps(arg7, zmm0)
            arg7[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            arg7[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg7[0].o)
            arg8[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm0[0].o)
            result = zx.q(__vpmovmskb_gpr32d_xmmdq(arg8[0].o))
            
            if (result.b == 0)
                arg5 = var_480
            else
                float temp0_254[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_219, temp0_246, var_380_1)
                zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, temp0_246, var_360_1)
                float temp0_256[0x8] =
                    __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_223, temp0_246, var_340_1)
                var_380_1 = _mm256_maskstore_ps(zmm0, temp0_254)
                var_360_1 = _mm256_maskstore_ps(zmm0, zmm4)
                var_340_1 = _mm256_maskstore_ps(zmm0, temp0_256)
                arg5 = _mm256_blendv_ps(var_480, _mm256_add_ps(var_480, temp0_246), 
                    _mm256_cvtepi16_epi32(arg7[0].o))
    else
        float temp0_2[0x8] = _mm256_broadcast_ss(arg3[3])
        zmm0[0].o = *arg3
        arg5[0].o = arg3[1]
        zmm3[0].o = arg3[2]
        float temp0_3[0x8] = _mm256_broadcast_ss(*arg1)
        float temp0_4[0x8] = _mm256_broadcast_ss(*arg2)
        float temp0_5[0x8] = _mm256_broadcast_ss(arg2[1])
        arg6 = _mm256_broadcast_ss(arg2[2])
        float var_300_1[0x8] = arg6
        float temp0_7[0x8] = _mm256_broadcastss_ps(zmm4[0].o)
        rbx = 0
        arg10 = __vpbroadcastd_ymmqq_memd(0xc)
        arg14 = _mm256_broadcastss_ps(arg5[0].o)
        arg15 = _mm256_broadcastss_ps(zmm3[0].o)
        zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
        arg16 = _mm256_broadcast_ss(3f)
        arg11 = _mm256_broadcast_ss(0.5f)
        arg12 = _mm256_broadcast_ss(2f)
        arg13 = _mm256_broadcast_ss(-9.99999975e-05f)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        var_480 = arg5
        
        do
            zmm3[0].o = zx.o(rbx)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
            zmm3 = _mm256_broadcastd_epi32(zmm3[0])
            zmm4 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc93c0)
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
            arg7 = _mm256_cmpeq_epi32(arg7, arg7)
            float temp0_22[0x8]
            int32_t temp1_1
            temp0_22, temp1_1 = _mm256_i32gather_ps(arg6, *(arg4 + zmm4[0].q), arg7)
            arg7 = temp1_1
            zmm4 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc93e0)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            arg9 = _mm256_cmpeq_epi32(arg9, arg9)
            float temp0_26[0x8]
            int32_t temp1_2
            temp0_26, temp1_2 = _mm256_i32gather_ps(arg7, *(arg4 + zmm4[0].q), arg9)
            arg9 = temp1_2
            zmm3 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc9400)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            arg9 = _mm256_cmpeq_epi32(arg9, arg9)
            float temp0_30[0x8]
            int32_t temp1_3
            temp0_30, temp1_3 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm3[0].q), arg9)
            arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
            float var_400_1[0x8] = arg5
            float var_200_1[0x8] = temp0_2
            float var_1e0_1[0x8] = temp0_2
            float temp0_32[0x8] = _mm256_mul_ps(temp0_26, arg15)
            float temp0_33[0x8] = _mm256_mul_ps(temp0_30, zmm0)
            float temp0_34[0x8] = _mm256_mul_ps(temp0_22, arg14)
            float temp0_35[0x8] = _mm256_fmsub_ps(temp0_30, arg14, temp0_32)
            float temp0_36[0x8] = _mm256_fmsub_ps(temp0_22, arg15, temp0_33)
            float temp0_37[0x8] = _mm256_fmsub_ps(temp0_26, zmm0, temp0_34)
            float temp0_38[0x8] = _mm256_add_ps(temp0_35, temp0_35)
            float temp0_39[0x8] = _mm256_add_ps(temp0_36, temp0_36)
            float temp0_40[0x8] = _mm256_add_ps(temp0_37, temp0_37)
            float temp0_41[0x8] = _mm256_fmadd_ps(temp0_30, temp0_2, temp0_40)
            float temp0_42[0x8] = _mm256_mul_ps(temp0_39, arg15)
            float temp0_43[0x8] = _mm256_mul_ps(temp0_40, zmm0)
            float temp0_44[0x8] = _mm256_fmsub_ps(temp0_40, arg14, temp0_42)
            float temp0_46[0x8] =
                _mm256_add_ps(_mm256_fmadd_ps(temp0_22, temp0_2, temp0_38), temp0_44)
            float temp0_47[0x8] = _mm256_mul_ps(temp0_38, arg14)
            float temp0_48[0x8] = _mm256_fmsub_ps(temp0_38, arg15, temp0_43)
            float temp0_50[0x8] =
                _mm256_add_ps(_mm256_fmadd_ps(temp0_26, temp0_2, temp0_39), temp0_48)
            float var_1c0_1[0x8] = temp0_2
            float temp0_52[0x8] = _mm256_add_ps(temp0_41, _mm256_fmsub_ps(temp0_39, zmm0, temp0_47))
            zmm3 = _mm256_add_ps(temp0_46, _mm256_broadcast_ss(arg3[4]))
            zmm4 = _mm256_add_ps(temp0_50, _mm256_broadcast_ss(arg3[5]))
            arg6 = _mm256_add_ps(temp0_52, _mm256_broadcast_ss(arg3[6]))
            float temp0_59[0x8] = __vsubps_ymmqq_ymmqq_memqq(zmm3, temp0_4)
            float temp0_60[0x8] = __vsubps_ymmqq_ymmqq_memqq(zmm4, temp0_5)
            float temp0_62[0x8] =
                _mm256_fmadd_ps(_mm256_fmadd_ps(temp0_59, temp0_59, arg5), temp0_60, temp0_60)
            float temp0_63[0x8] = __vsubps_ymmqq_ymmqq_memqq(arg6, var_300_1)
            float temp0_64[0x8] = _mm256_fmadd_ps(temp0_62, temp0_63, temp0_63)
            float temp0_65[0x8] = _mm256_rsqrt_ps(temp0_64)
            float temp0_69[0x8] = _mm256_mul_ps(
                _mm256_mul_ps(temp0_65, 
                    _mm256_fnmadd_ps(_mm256_mul_ps(temp0_64, temp0_65), temp0_65, arg16)), 
                arg11)
            arg8 = _mm256_rcp_ps(temp0_69)
            float var_1a0_1[0x8] = temp0_2
            arg9 = __vsubps_ymmqq_ymmqq_memqq(
                __vfnmadd213ps_ymmqq_ymmqq_memqq(_mm256_fnmadd_ps(temp0_69, arg8, arg12), arg8, 
                    temp0_3), 
                temp0_7)
            arg7 = _mm256_cmp_ps(arg9, arg13, 1)
            result = zx.q(_mm256_movemask_ps(arg7))
            
            if (result.b != 0)
                float temp0_76[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, arg9, var_380_1)
                zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, arg9, var_360_1)
                arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, arg9, var_340_1)
                var_380_1 = _mm256_maskstore_ps(arg7, temp0_76)
                var_360_1 = _mm256_maskstore_ps(arg7, zmm4)
                var_340_1 = _mm256_maskstore_ps(arg7, arg6)
                zmm3 = _mm256_add_ps(var_480, arg9)
                arg5 = _mm256_blendv_ps(var_480, zmm3, arg7)
                var_480 = arg5
            
            rbx += 8
        while (rbx s< rdi_4)
        
        if (rbx s< arg20)
            goto label_140062246
        
        arg5 = var_480
    float temp0_263[0x8] = _mm256_hadd_ps(var_380_1, var_380_1)
    float temp0_264[0x8] = _mm256_hadd_ps(temp0_263, temp0_263)
    float temp0_265[0x8] = _mm256_hadd_ps(var_360_1, var_360_1)
    float temp0_266[0x8] = _mm256_hadd_ps(temp0_265, temp0_265)
    zmm4[0].o = _mm256_extractf128_ps(temp0_264[0].o, 1)
    temp0_264[0].o = temp0_264[0].o f+ zmm4[0]
    zmm4[0].o = _mm256_extractf128_ps(temp0_266[0].o, 1)
    temp0_266[0].o = temp0_266[0].o f+ zmm4[0]
    temp0_264[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_264[0].o, temp0_266[0].o, 0x10)
    float temp0_270[0x8] = _mm256_hadd_ps(var_340_1, var_340_1)
    float temp0_271[0x8] = _mm256_hadd_ps(temp0_270, temp0_270)
    var_340_1[0].o = _mm256_extractf128_ps(temp0_271[0].o, 1)
    temp0_271[0].o = temp0_271[0].o f+ var_340_1[0]
    var_340_1[0].o = __vmovsd_xmmdq_memq(*arg19)
    var_340_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_340_1[0].o, arg19[1].d, 0x20)
    temp0_264[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_264[0].o, temp0_271[0].o, 0x20)
    temp0_264[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_264[0].o, var_340_1[0].o)
    *arg19 = temp0_264[0]
    *(arg19 + 4) = __vextractps_memd_xmmdq_immb(temp0_264[0].o, 1)
    arg19[1].d = __vextractps_memd_xmmdq_immb(temp0_264[0].o, 2)
    zmm0 = _mm256_hadd_ps(arg5, arg5)
float temp0_395[0x8] = _mm256_hadd_ps(zmm0, zmm0)
arg5[0].o = _mm256_extractf128_ps(temp0_395[0].o, 1)
temp0_395[0].o = temp0_395[0].o f+ arg5[0]
temp0_395[0].o = temp0_395[0].o f+ *arg18
*arg18 = temp0_395[0]
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
