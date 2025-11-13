// 函数: sub_140060950
// 地址: 0x140060950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = arg17[0].o
int128_t var_48 = arg16[0].o
int128_t var_58 = arg15[0].o
int128_t var_68 = arg14[0].o
int128_t var_78 = arg13[0].o
int128_t var_88 = arg12[0].o
int128_t var_98 = arg11[0].o
int128_t var_a8 = arg10[0].o
int128_t var_b8 = arg9[0].o
int128_t var_c8 = arg8[0].o
int256_t* result = arg22
float zmm0[0x8] = *result
float zmm4[0x8]
zmm4[0].o = arg18
float zmm3[0x8]

if (_mm256_movemask_ps(zmm0) != 0xff)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    float var_380_1[0x8] = arg6
    uint32_t var_3a0_1[0x8] = arg6
    int32_t rdi_9 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
    uint32_t var_3c0_1[0x8] = arg6
    float var_180_1[0x8] = zmm0
    int32_t rbx_1
    
    if (rdi_9 s<= 0)
        rbx_1 = 0
        
        if (0 s< arg21)
        label_140061244:
            zmm0[0].o = zx.o(rbx_1)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            arg5 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
            zmm0[0].o = zx.o(arg21)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm3 = _mm256_mullo_epi32(arg5, __vpbroadcastd_ymmqq_memd(3))
            zmm0 = _mm256_cmpgt_epi32(zmm0, arg5)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_259[0x8]
            int32_t temp1_10
            temp0_259, temp1_10 = _mm256_i32gather_ps(arg7, *(arg4 + (zmm3[0].q << 2)), zmm0)
            arg7 = temp0_259
            arg5 = _mm256_mullo_epi32(arg5, __vpbroadcastd_ymmqq_memd(0xc))
            zmm3 = _mm256_add_epi32(arg5, __vpbroadcastd_ymmqq_memd(4))
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            float temp0_265[0x8]
            int32_t temp1_11
            temp0_265, temp1_11 = _mm256_i32gather_ps(arg8, *(arg4 + zmm3[0].q), zmm0)
            arg8 = temp0_265
            zmm4 = temp1_11
            arg5 = _mm256_add_epi32(arg5, __vpbroadcastd_ymmqq_memd(8))
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            float temp0_269[0x8]
            int32_t temp1_12
            temp0_269, temp1_12 = _mm256_i32gather_ps(zmm4, *(arg4 + arg5[0].q), zmm0)
            zmm3 = temp1_12
            int32_t var_280_2[0x8] = arg7
            int32_t var_260_2[0x8] = arg8
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            float temp0_271[0x8] = _mm256_broadcast_ss(arg3[3])
            float var_200_4[0x8] = temp0_271
            float var_1e0_4[0x8] = temp0_271
            float var_1c0_4[0x8] = temp0_271
            float var_1a0_4[0x8] = temp0_271
            float temp0_272[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_273[0x8] = _mm256_broadcast_ss(arg3[2])
            float temp0_274[0x8] = _mm256_broadcast_ss(*arg3)
            float temp0_275[0x8] = _mm256_mul_ps(temp0_271, zmm3)
            float temp0_276[0x8] = _mm256_mul_ps(arg8, temp0_273)
            arg13 = _mm256_mul_ps(temp0_269, temp0_274)
            float temp0_278[0x8] = _mm256_mul_ps(arg7, temp0_272)
            float temp0_279[0x8] = _mm256_fmsub_ps(temp0_276, temp0_272, temp0_269)
            arg13 = _mm256_fmsub_ps(arg13, temp0_273, arg7)
            float temp0_281[0x8] = _mm256_fmsub_ps(temp0_278, temp0_274, arg8)
            float temp0_282[0x8] = _mm256_sub_ps(temp0_275, temp0_275)
            arg7 = _mm256_add_ps(temp0_279, temp0_279)
            float temp0_284[0x8] = _mm256_add_ps(arg13, arg13)
            arg8 = _mm256_add_ps(temp0_281, temp0_281)
            float temp0_286[0x8] = _mm256_add_ps(temp0_282, temp0_282)
            int32_t var_440_4[0x8] = arg7
            float var_420_4[0x8] = temp0_284
            int32_t var_400_4[0x8] = arg8
            float var_3e0_4[0x8] = temp0_286
            float temp0_287[0x8] = _mm256_fmadd_ps(var_280_2, temp0_271, arg7)
            float temp0_288[0x8] = _mm256_fmadd_ps(var_260_2, temp0_271, temp0_284)
            float temp0_289[0x8] = _mm256_fmadd_ps(temp0_269, temp0_271, arg8)
            float var_160_2[0x8] = temp0_287
            float var_140_2[0x8] = temp0_288
            float var_120_2[0x8] = temp0_289
            float var_100_2[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_286, temp0_271, zmm3)
            float temp0_291[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_292[0x8] = _mm256_broadcast_ss(arg3[2])
            arg12 = _mm256_broadcast_ss(*arg3)
            arg13 = _mm256_mul_ps(temp0_284, temp0_292)
            float temp0_295[0x8] = _mm256_mul_ps(arg8, arg12)
            float temp0_296[0x8] = _mm256_mul_ps(arg7, temp0_291)
            arg13 = _mm256_fmsub_ps(arg13, arg8, temp0_291)
            arg14 = _mm256_fmsub_ps(temp0_295, arg7, temp0_292)
            arg15 = _mm256_fmsub_ps(temp0_296, temp0_284, arg12)
            float temp0_300[0x8] = _mm256_add_ps(temp0_287, arg13)
            float temp0_301[0x8] = _mm256_add_ps(temp0_288, arg14)
            float temp0_302[0x8] = _mm256_add_ps(temp0_289, arg15)
            float temp0_304[0x8] = _mm256_add_ps(temp0_300, _mm256_broadcast_ss(arg3[4]))
            float temp0_306[0x8] = _mm256_add_ps(temp0_301, _mm256_broadcast_ss(arg3[5]))
            zmm4 = _mm256_add_ps(temp0_302, _mm256_broadcast_ss(arg3[6]))
            arg7 = _mm256_sub_ps(temp0_304, _mm256_broadcast_ss(*arg2))
            arg8 = _mm256_sub_ps(temp0_306, _mm256_broadcast_ss(arg2[1]))
            arg9 = _mm256_sub_ps(zmm4, _mm256_broadcast_ss(arg2[2]))
            arg10 = _mm256_broadcast_ss(*arg1)
            arg11 = _mm256_broadcast_ss(arg1[1])
            arg8 = _mm256_fmadd_ps(_mm256_mul_ps(arg8, arg11), arg7, arg10)
            arg7 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg1[2]), arg9, arg8)
            arg8[0].o = arg18
            arg7 = _mm256_sub_ps(arg7, _mm256_broadcastss_ps(arg8[0].o))
            arg8 = _mm256_cmp_ps(arg7, _mm256_broadcast_ss(-9.99999975e-05f), 1)
            zmm0 = _mm256_and_ps(arg8, zmm0)
            arg8[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            arg8[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
            arg9[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
            result = zx.q(__vpmovmskb_gpr32d_xmmdq(arg9[0].o))
            
            if (result.b != 0)
                float temp0_330[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_304, arg7, var_3c0_1)
                float temp0_331[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_306, arg7, var_3a0_1)
                zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, arg7, var_380_1)
                var_3c0_1 = _mm256_maskstore_ps(zmm0, temp0_330)
                var_3a0_1 = _mm256_maskstore_ps(zmm0, temp0_331)
                var_380_1 = _mm256_maskstore_ps(zmm0, zmm4)
                zmm0 = _mm256_add_ps(arg6, arg7)
                arg6 = _mm256_blendv_ps(arg6, zmm0, _mm256_cvtepi16_epi32(arg8[0].o))
    else
        float temp0_76[0x8] = _mm256_broadcast_ss(arg3[3])
        arg6[0].o = *arg3
        zmm0[0].o = arg3[1]
        arg5[0].o = arg3[2]
        int32_t var_2a0_2[0x8] = _mm256_broadcast_ss(*arg2)
        int32_t var_2c0_2[0x8] = _mm256_broadcast_ss(arg2[1])
        int32_t var_2e0_2[0x8] = _mm256_broadcast_ss(arg2[2])
        int32_t var_300_2[0x8] = _mm256_broadcast_ss(*arg1)
        arg10 = _mm256_broadcast_ss(arg1[1])
        arg11 = _mm256_broadcast_ss(arg1[2])
        arg12 = _mm256_broadcastss_ps(zmm4[0].o)
        rbx_1 = 0
        arg14 = __vpbroadcastd_ymmqq_memd(0xc)
        zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
        float temp0_86[0x8] = _mm256_broadcastss_ps(arg5[0].o)
        arg13 = _mm256_broadcastss_ps(arg6[0].o)
        arg15 = _mm256_broadcast_ss(-9.99999975e-05f)
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        
        do
            zmm4[0].o = zx.o(rbx_1)
            zmm4[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg14[0].o)
            zmm4 = _mm256_broadcastd_epi32(zmm4[0])
            int32_t temp0_92[0x8] = __vpaddd_ymmqq_ymmqq_memqq(zmm4, data_142fc93c0)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            arg16 = _mm256_cmpeq_epi32(arg16, arg16)
            float temp0_95[0x8]
            int32_t temp1_4
            temp0_95, temp1_4 = _mm256_i32gather_ps(arg8, *(arg4 + temp0_92[0].q), arg16)
            arg8 = temp0_95
            arg16 = temp1_4
            int32_t temp0_96[0x8] = __vpaddd_ymmqq_ymmqq_memqq(zmm4, data_142fc93e0)
            arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
            arg17 = _mm256_cmpeq_epi32(arg17, arg17)
            float temp0_99[0x8]
            int32_t temp1_5
            temp0_99, temp1_5 = _mm256_i32gather_ps(arg16, *(arg4 + temp0_96[0].q), arg17)
            arg17 = temp1_5
            zmm4 = __vpaddd_ymmqq_ymmqq_memqq(zmm4, data_142fc9400)
            temp0_96[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_96[0].o, temp0_96[0].o)
            arg17 = _mm256_cmpeq_epi32(arg17, arg17)
            float temp0_103[0x8]
            int32_t temp1_6
            temp0_103, temp1_6 = _mm256_i32gather_ps(temp0_96, *(arg4 + zmm4[0].q), arg17)
            arg7 = temp0_103
            int32_t var_440_2[0x8] = arg8
            int32_t var_400_2[0x8] = arg7
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            float var_3e0_2[0x8] = zmm4
            float temp0_105[0x8] = _mm256_mul_ps(temp0_99, temp0_86)
            float temp0_106[0x8] = _mm256_mul_ps(arg7, arg13)
            float temp0_107[0x8] = _mm256_mul_ps(arg8, zmm0)
            arg7 = _mm256_fmsub_ps(arg7, zmm0, temp0_105)
            arg8 = _mm256_fmsub_ps(arg8, temp0_86, temp0_106)
            float temp0_110[0x8] = _mm256_fmsub_ps(temp0_99, arg13, temp0_107)
            float temp0_111[0x8] = _mm256_add_ps(arg7, arg7)
            arg7 = _mm256_add_ps(arg8, arg8)
            arg8 = _mm256_add_ps(temp0_110, temp0_110)
            float temp0_114[0x8] = _mm256_fmadd_ps(var_400_2, temp0_76, arg8)
            float temp0_115[0x8] = _mm256_mul_ps(arg7, temp0_86)
            float temp0_116[0x8] = _mm256_mul_ps(arg8, arg13)
            arg8 = _mm256_fmsub_ps(arg8, zmm0, temp0_115)
            arg8 = _mm256_add_ps(_mm256_fmadd_ps(var_440_2, temp0_76, temp0_111), arg8)
            float temp0_120[0x8] = _mm256_mul_ps(temp0_111, zmm0)
            float temp0_121[0x8] = _mm256_fmsub_ps(temp0_111, temp0_86, temp0_116)
            float temp0_123[0x8] =
                _mm256_add_ps(_mm256_fmadd_ps(temp0_99, temp0_76, arg7), temp0_121)
            float var_200_2[0x8] = temp0_76
            float var_1e0_2[0x8] = temp0_76
            float var_1c0_2[0x8] = temp0_76
            float var_1a0_2[0x8] = temp0_76
            arg7 = _mm256_add_ps(temp0_114, _mm256_fmsub_ps(arg7, arg13, temp0_120))
            arg9 = _mm256_broadcast_ss(arg3[4])
            arg16 = _mm256_add_ps(arg8, arg9)
            arg17 = _mm256_add_ps(temp0_123, _mm256_broadcast_ss(arg3[5]))
            zmm4 = _mm256_add_ps(arg7, _mm256_broadcast_ss(arg3[6]))
            arg7 = __vfmadd132ps_ymmqq_ymmqq_memqq(__vsubps_ymmqq_ymmqq_memqq(arg16, var_2a0_2), 
                _mm256_mul_ps(__vsubps_ymmqq_ymmqq_memqq(arg17, var_2c0_2), arg10), var_300_2)
            arg7 = _mm256_sub_ps(
                _mm256_fmadd_ps(__vsubps_ymmqq_ymmqq_memqq(zmm4, var_2e0_2), arg11, arg7), arg12)
            arg8 = _mm256_cmp_ps(arg7, arg15, 1)
            result = zx.q(_mm256_movemask_ps(arg8))
            
            if (result.b != 0)
                arg16 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg16, arg7, var_3c0_1)
                arg17 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg17, arg7, var_3a0_1)
                float temp0_143[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, arg7, var_380_1)
                var_3c0_1 = _mm256_maskstore_ps(arg8, arg16)
                var_3a0_1 = _mm256_maskstore_ps(arg8, arg17)
                var_380_1 = _mm256_maskstore_ps(arg8, temp0_143)
                zmm4 = _mm256_add_ps(arg6, arg7)
                arg6 = _mm256_blendv_ps(arg6, zmm4, arg8)
            
            rbx_1 += 8
        while (rbx_1 s< rdi_9)
        
        if (rbx_1 s< arg21)
            goto label_140061244
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm0 = __vpcmpeqd_ymmqq_ymmqq_memqq(zmm0, var_180_1)
    arg5 = zmm0 & not.32(var_3c0_1)
    float temp0_341[0x8] = _mm256_hadd_ps(arg5, arg5)
    arg5 = _mm256_hadd_ps(temp0_341, temp0_341)
    zmm3 = zmm0 & not.32(var_3a0_1)
    zmm4[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
    float temp0_344[0x8] = _mm256_hadd_ps(zmm3, zmm3)
    arg5[0].o = arg5[0].o f+ zmm4[0]
    float temp0_345[0x8] = _mm256_hadd_ps(temp0_344, temp0_344)
    zmm4[0].o = _mm256_extractf128_ps(temp0_345[0].o, 1)
    temp0_345[0].o = temp0_345[0].o f+ zmm4[0]
    zmm4 = zmm0 & not.32(var_380_1)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, temp0_345[0].o, 0x10)
    float temp0_348[0x8] = _mm256_hadd_ps(zmm4, zmm4)
    float temp0_349[0x8] = _mm256_hadd_ps(temp0_348, temp0_348)
    zmm4[0].o = _mm256_extractf128_ps(temp0_349[0].o, 1)
    temp0_349[0].o = temp0_349[0].o f+ zmm4[0]
    zmm4[0].o = __vmovsd_xmmdq_memq(*arg20)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm4[0].o, arg20[1].d, 0x20)
    arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, temp0_349[0].o, 0x20)
    arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm4[0].o)
    *arg20 = arg5[0]
    *(arg20 + 4) = __vextractps_memd_xmmdq_immb(arg5[0].o, 1)
    arg20[1].d = __vextractps_memd_xmmdq_immb(arg5[0].o, 2)
    zmm0 &= not.32(arg6)
    zmm0 = _mm256_hadd_ps(zmm0, zmm0)
else
    arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
    float var_320_1[0x8] = arg5
    float var_340_1[0x8] = arg5
    int32_t rdi_4 = ((arg21 s>> 0x1f u>> 0x1d) + arg21) & 0xfffffff8
    float var_360_1[0x8] = arg5
    int32_t rbx
    
    if (rdi_4 s<= 0)
        rbx = 0
        
        if (0 s< arg21)
        label_140060f15:
            zmm0[0].o = zx.o(rbx)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            arg6 = __vpaddd_ymmqq_ymmqq_memqq(zmm0, data_142fc93a0)
            zmm0[0].o = zx.o(arg21)
            zmm0 = _mm256_broadcastd_epi32(zmm0[0])
            zmm3 = _mm256_mullo_epi32(arg6, __vpbroadcastd_ymmqq_memd(3))
            zmm0 = _mm256_cmpgt_epi32(zmm0, arg6)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            float temp0_156[0x8]
            int32_t temp1_7
            temp0_156, temp1_7 = _mm256_i32gather_ps(zmm4, *(arg4 + (zmm3[0].q << 2)), zmm0)
            arg7 = temp1_7
            arg6 = _mm256_mullo_epi32(arg6, __vpbroadcastd_ymmqq_memd(0xc))
            zmm3 = _mm256_add_epi32(arg6, __vpbroadcastd_ymmqq_memd(4))
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            float temp0_162[0x8]
            int32_t temp1_8
            temp0_162, temp1_8 = _mm256_i32gather_ps(arg7, *(arg4 + zmm3[0].q), zmm0)
            arg7 = temp0_162
            zmm3 = __vpbroadcastd_ymmqq_memd(8)
            arg6 = _mm256_add_epi32(arg6, zmm3)
            zmm3[0].o = zx.o(0)
            float temp0_165[0x8]
            int32_t temp1_9
            temp0_165, temp1_9 = _mm256_i32gather_ps(zmm3, *(arg4 + arg6[0].q), zmm0)
            arg8 = temp1_9
            int32_t var_260_1[0x8] = arg7
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            int32_t var_220_1[0x8] = arg8
            arg6 = _mm256_broadcast_ss(arg3[3])
            uint32_t var_200_3[0x8] = arg6
            uint32_t var_1e0_3[0x8] = arg6
            uint32_t var_1c0_3[0x8] = arg6
            uint32_t var_1a0_3[0x8] = arg6
            float temp0_168[0x8] = _mm256_broadcast_ss(arg3[1])
            float temp0_169[0x8] = _mm256_broadcast_ss(arg3[2])
            float temp0_170[0x8] = _mm256_broadcast_ss(*arg3)
            arg8 = _mm256_mul_ps(arg6, arg8)
            float temp0_172[0x8] = _mm256_mul_ps(arg7, temp0_169)
            arg13 = _mm256_mul_ps(temp0_165, temp0_170)
            float temp0_174[0x8] = _mm256_mul_ps(temp0_156, temp0_168)
            float temp0_175[0x8] = _mm256_fmsub_ps(temp0_172, temp0_168, temp0_165)
            arg13 = _mm256_fmsub_ps(arg13, temp0_169, temp0_156)
            float temp0_177[0x8] = _mm256_fmsub_ps(temp0_174, temp0_170, arg7)
            float temp0_178[0x8] = _mm256_sub_ps(arg8, arg8)
            arg7 = _mm256_add_ps(temp0_175, temp0_175)
            float temp0_180[0x8] = _mm256_add_ps(arg13, arg13)
            arg8 = _mm256_add_ps(temp0_177, temp0_177)
            float temp0_182[0x8] = _mm256_add_ps(temp0_178, temp0_178)
            int32_t var_440_3[0x8] = arg7
            float var_420_3[0x8] = temp0_180
            int32_t var_400_3[0x8] = arg8
            float var_3e0_3[0x8] = temp0_182
            float temp0_183[0x8] = _mm256_fmadd_ps(temp0_156, arg6, arg7)
            float temp0_184[0x8] = _mm256_fmadd_ps(var_260_1, arg6, temp0_180)
            float temp0_185[0x8] = _mm256_fmadd_ps(temp0_165, arg6, arg8)
            float var_160_1[0x8] = temp0_183
            float var_140_1[0x8] = temp0_184
            float var_120_1[0x8] = temp0_185
            float var_100_1[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_182, arg6, var_220_1)
            arg6 = _mm256_broadcast_ss(arg3[1])
            float temp0_188[0x8] = _mm256_broadcast_ss(arg3[2])
            arg12 = _mm256_broadcast_ss(*arg3)
            arg13 = _mm256_mul_ps(temp0_180, temp0_188)
            float temp0_191[0x8] = _mm256_mul_ps(arg8, arg12)
            float temp0_192[0x8] = _mm256_mul_ps(arg7, arg6)
            arg13 = _mm256_fmsub_ps(arg13, arg8, arg6)
            arg14 = _mm256_fmsub_ps(temp0_191, arg7, temp0_188)
            arg15 = _mm256_fmsub_ps(temp0_192, temp0_180, arg12)
            arg6 = _mm256_add_ps(temp0_183, arg13)
            float temp0_197[0x8] = _mm256_add_ps(temp0_184, arg14)
            float temp0_198[0x8] = _mm256_add_ps(temp0_185, arg15)
            arg6 = _mm256_add_ps(arg6, _mm256_broadcast_ss(arg3[4]))
            float temp0_202[0x8] = _mm256_add_ps(temp0_197, _mm256_broadcast_ss(arg3[5]))
            zmm4 = _mm256_add_ps(temp0_198, _mm256_broadcast_ss(arg3[6]))
            arg7 = _mm256_sub_ps(arg6, _mm256_broadcast_ss(*arg2))
            arg8 = _mm256_sub_ps(temp0_202, _mm256_broadcast_ss(arg2[1]))
            arg9 = _mm256_sub_ps(zmm4, _mm256_broadcast_ss(arg2[2]))
            arg10 = _mm256_broadcast_ss(*arg1)
            arg11 = _mm256_broadcast_ss(arg1[1])
            arg8 = _mm256_fmadd_ps(_mm256_mul_ps(arg8, arg11), arg7, arg10)
            arg7 = _mm256_fmadd_ps(_mm256_broadcast_ss(arg1[2]), arg9, arg8)
            arg8[0].o = arg18
            arg7 = _mm256_sub_ps(arg7, _mm256_broadcastss_ps(arg8[0].o))
            arg8 = _mm256_cmp_ps(arg7, _mm256_broadcast_ss(-9.99999975e-05f), 1)
            zmm0 = _mm256_and_ps(arg8, zmm0)
            arg8[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            arg8[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg8[0].o)
            arg9[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm0[0].o)
            result = zx.q(__vpmovmskb_gpr32d_xmmdq(arg9[0].o))
            
            if (result.b != 0)
                arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, arg7, var_360_1)
                float temp0_227[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(temp0_202, arg7, var_340_1)
                zmm4 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm4, arg7, var_320_1)
                var_360_1 = _mm256_maskstore_ps(zmm0, arg6)
                var_340_1 = _mm256_maskstore_ps(zmm0, temp0_227)
                var_320_1 = _mm256_maskstore_ps(zmm0, zmm4)
                arg5 = _mm256_blendv_ps(arg5, _mm256_add_ps(arg5, arg7), 
                    _mm256_cvtepi16_epi32(arg8[0].o))
    else
        arg6 = _mm256_broadcast_ss(arg3[3])
        arg5[0].o = *arg3
        zmm0[0].o = arg3[1]
        zmm3[0].o = arg3[2]
        int32_t var_2a0_1[0x8] = _mm256_broadcast_ss(*arg2)
        int32_t var_2c0_1[0x8] = _mm256_broadcast_ss(arg2[1])
        int32_t var_2e0_1[0x8] = _mm256_broadcast_ss(arg2[2])
        arg7 = _mm256_broadcast_ss(*arg1)
        int32_t var_300_1[0x8] = arg7
        arg9 = _mm256_broadcast_ss(arg1[1])
        arg10 = _mm256_broadcast_ss(arg1[2])
        arg11 = _mm256_broadcastss_ps(zmm4[0].o)
        rbx = 0
        arg13 = __vpbroadcastd_ymmqq_memd(0xc)
        zmm0 = _mm256_broadcastss_ps(zmm0[0].o)
        arg17 = _mm256_broadcastss_ps(zmm3[0].o)
        arg12 = _mm256_broadcastss_ps(arg5[0].o)
        arg14 = _mm256_broadcast_ss(-9.99999975e-05f)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        
        do
            zmm3[0].o = zx.o(rbx)
            zmm3[0].o = __vpmulld_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            zmm3 = _mm256_broadcastd_epi32(zmm3[0])
            zmm4 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc93c0)
            arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            arg15 = _mm256_cmpeq_epi32(arg15, arg15)
            float temp0_21[0x8]
            int32_t temp1_1
            temp0_21, temp1_1 = _mm256_i32gather_ps(arg7, *(arg4 + zmm4[0].q), arg15)
            arg7 = temp0_21
            arg15 = temp1_1
            zmm4 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc93e0)
            arg15[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg15[0].o, arg15[0].o)
            arg16 = _mm256_cmpeq_epi32(arg16, arg16)
            float temp0_25[0x8]
            int32_t temp1_2
            temp0_25, temp1_2 = _mm256_i32gather_ps(arg15, *(arg4 + zmm4[0].q), arg16)
            arg16 = temp1_2
            zmm3 = __vpaddd_ymmqq_ymmqq_memqq(zmm3, data_142fc9400)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            arg16 = _mm256_cmpeq_epi32(arg16, arg16)
            float temp0_29[0x8]
            int32_t temp1_3
            temp0_29, temp1_3 = _mm256_i32gather_ps(zmm4, *(arg4 + zmm3[0].q), arg16)
            int32_t var_440_1[0x8] = arg7
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            float var_3e0_1[0x8] = zmm3
            float temp0_31[0x8] = _mm256_mul_ps(temp0_25, arg17)
            float temp0_32[0x8] = _mm256_mul_ps(temp0_29, arg12)
            arg8 = _mm256_mul_ps(arg7, zmm0)
            float temp0_34[0x8] = _mm256_fmsub_ps(temp0_29, zmm0, temp0_31)
            arg7 = _mm256_fmsub_ps(arg7, arg17, temp0_32)
            float temp0_36[0x8] = _mm256_fmsub_ps(temp0_25, arg12, arg8)
            float temp0_37[0x8] = _mm256_add_ps(temp0_34, temp0_34)
            float temp0_38[0x8] = _mm256_add_ps(arg7, arg7)
            arg7 = _mm256_add_ps(temp0_36, temp0_36)
            arg8 = _mm256_fmadd_ps(temp0_29, arg6, arg7)
            float temp0_41[0x8] = _mm256_mul_ps(temp0_38, arg17)
            float temp0_42[0x8] = _mm256_mul_ps(arg7, arg12)
            arg7 = _mm256_fmsub_ps(arg7, zmm0, temp0_41)
            arg7 = _mm256_add_ps(_mm256_fmadd_ps(var_440_1, arg6, temp0_37), arg7)
            float temp0_46[0x8] = _mm256_mul_ps(temp0_37, zmm0)
            float temp0_47[0x8] = _mm256_fmsub_ps(temp0_37, arg17, temp0_42)
            float temp0_49[0x8] = _mm256_add_ps(_mm256_fmadd_ps(temp0_25, arg6, temp0_38), temp0_47)
            uint32_t var_200_1[0x8] = arg6
            uint32_t var_1e0_1[0x8] = arg6
            uint32_t var_1c0_1[0x8] = arg6
            uint32_t var_1a0_1[0x8] = arg6
            float temp0_51[0x8] = _mm256_add_ps(arg8, _mm256_fmsub_ps(temp0_38, arg12, temp0_46))
            arg8 = _mm256_broadcast_ss(arg3[4])
            arg15 = _mm256_add_ps(arg7, arg8)
            arg16 = _mm256_add_ps(temp0_49, _mm256_broadcast_ss(arg3[5]))
            zmm3 = _mm256_add_ps(temp0_51, _mm256_broadcast_ss(arg3[6]))
            float temp0_61[0x8] = __vfmadd132ps_ymmqq_ymmqq_memqq(
                __vsubps_ymmqq_ymmqq_memqq(arg15, var_2a0_1), 
                _mm256_mul_ps(__vsubps_ymmqq_ymmqq_memqq(arg16, var_2c0_1), arg9), var_300_1)
            zmm4 = _mm256_sub_ps(
                _mm256_fmadd_ps(__vsubps_ymmqq_ymmqq_memqq(zmm3, var_2e0_1), arg10, temp0_61), 
                arg11)
            arg7 = _mm256_cmp_ps(zmm4, arg14, 1)
            result = zx.q(_mm256_movemask_ps(arg7))
            
            if (result.b != 0)
                arg15 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg15, zmm4, var_360_1)
                arg16 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg16, zmm4, var_340_1)
                float temp0_69[0x8] = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, zmm4, var_320_1)
                var_360_1 = _mm256_maskstore_ps(arg7, arg15)
                var_340_1 = _mm256_maskstore_ps(arg7, arg16)
                var_320_1 = _mm256_maskstore_ps(arg7, temp0_69)
                zmm3 = _mm256_add_ps(arg5, zmm4)
                arg5 = _mm256_blendv_ps(arg5, zmm3, arg7)
            
            rbx += 8
        while (rbx s< rdi_4)
        
        if (rbx s< arg21)
            goto label_140060f15
    float temp0_235[0x8] = _mm256_hadd_ps(var_360_1, var_360_1)
    float temp0_236[0x8] = _mm256_hadd_ps(temp0_235, temp0_235)
    arg6 = var_340_1
    arg6 = _mm256_hadd_ps(arg6, arg6)
    arg6 = _mm256_hadd_ps(arg6, arg6)
    zmm4[0].o = _mm256_extractf128_ps(temp0_236[0].o, 1)
    temp0_236[0].o = temp0_236[0].o f+ zmm4[0]
    zmm4[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
    arg6[0].o = arg6[0].o f+ zmm4[0]
    temp0_236[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_236[0].o, arg6[0].o, 0x10)
    arg6 = _mm256_hadd_ps(var_320_1, var_320_1)
    arg6 = _mm256_hadd_ps(arg6, arg6)
    var_320_1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
    arg6[0].o = arg6[0].o f+ var_320_1[0]
    var_320_1[0].o = __vmovsd_xmmdq_memq(*arg20)
    var_320_1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(var_320_1[0].o, arg20[1].d, 0x20)
    temp0_236[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_236[0].o, arg6[0].o, 0x20)
    temp0_236[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_236[0].o, var_320_1[0].o)
    *arg20 = temp0_236[0]
    *(arg20 + 4) = __vextractps_memd_xmmdq_immb(temp0_236[0].o, 1)
    arg20[1].d = __vextractps_memd_xmmdq_immb(temp0_236[0].o, 2)
    zmm0 = _mm256_hadd_ps(arg5, arg5)
float temp0_358[0x8] = _mm256_hadd_ps(zmm0, zmm0)
arg5[0].o = _mm256_extractf128_ps(temp0_358[0].o, 1)
temp0_358[0].o = temp0_358[0].o f+ arg5[0]
temp0_358[0].o = temp0_358[0].o f+ *arg19
*arg19 = temp0_358[0]
arg8[0].o = var_c8
arg9[0].o = var_b8
arg10[0].o = var_a8
arg11[0].o = var_98
arg12[0].o = var_88
arg13[0].o = var_78
arg14[0].o = var_68
arg15[0].o = var_58
arg16[0].o = var_48
arg17[0].o = var_38
_mm256_zeroupper()
return result
