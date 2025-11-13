// 函数: sub_140043760
// 地址: 0x140043760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg12[0].o
int128_t var_68 = arg11[0].o
int128_t var_78 = arg10[0].o
int128_t var_88 = arg9[0].o
int128_t var_98 = arg8[0].o
float zmm0[0x8]
zmm0[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg3[1].d, 0x20)
zmm0 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, 0x3f000000)
float zmm1[0x8]
zmm1[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg2[1].d, 0x20)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float var_330 = zmm1[0]
float temp0_6 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float temp0_7 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm1[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg1[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float var_340 = zmm0[0]
float temp0_11 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
float temp0_12 = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
int32_t r12_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
int32_t result
uint32_t rdx
float zmm2[0x8]
float zmm4[0x8]
float zmm17[0x8]
float zmm19[0x8]
float zmm20[0x8]
float zmm21[0x8]
float zmm22[0x8]
float zmm23[0x8]
float zmm24[0x8]
float zmm25[0x8]
float zmm26[0x8]
uint32_t zmm27[0x8]
float zmm28[0x8]
float zmm29[0x8]
float zmm30[0x8]
float zmm31[0x8]

if (r12_4 s<= 0)
    rdx = 0
    result = 0
else
    arg12 = data_142fc93a0
    result = 0
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm2 = _mm256_broadcast_ss(2f)
    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
    rdx = 0
    
    while (true)
        char temp1_1 = result.b & 1
        bool cond:38_1 = temp1_1 == 0
        bool cond:40_1 = temp1_1 == 0
        bool cond:42_1 = temp1_1 == 0
        bool cond:44_1 = temp1_1 == 0
        bool cond:46_1 = temp1_1 == 0
        bool cond:48_1 = temp1_1 == 0
        result.b = 1
        
        if (temp1_1 == 0)
            zmm4 = _mm256_add_epi32(_mm256_mask_set1_epi32(arg5, rdx), arg12)
            arg7 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm4, 3)
            int64_t k1_1 = _kxnor_mask16(arg5, arg5)
            arg13[0].o = _mm_mask_xor_ps(arg5, arg13[0].o, arg13[0].o)
            int64_t k1_2
            int64_t temp0_20
            temp0_20, k1_2 = _mm256_mmask_i32gather_ps(k1_1, *(arg17 + (arg7[0].q << 2)))
            arg13 = temp0_20
            arg7 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm4, 0xc)
            zmm17 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg7, 4)
            int64_t k1_3 = _kxnor_mask16(arg5, arg5)
            arg14[0].o = _mm_mask_xor_ps(arg5, arg14[0].o, arg14[0].o)
            int64_t k1_4
            int64_t temp0_24
            temp0_24, k1_4 = _mm256_mmask_i32gather_ps(k1_3, *(arg17 + zmm17[0].q))
            arg14 = temp0_24
            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg7, 8)
            int64_t k1_5 = _kxnor_mask16(arg5, arg5)
            zmm17[0].o = _mm_mask_xor_ps(arg5, zmm17[0].o, zmm17[0].o)
            int64_t k1_6
            int64_t temp0_27
            temp0_27, k1_6 = _mm256_mmask_i32gather_ps(k1_5, *(arg17 + arg7[0].q))
            zmm17 = temp0_27
            float var_2a0_1[0x8] = _mm256_mask_store_ps(arg5, arg13)
            float var_280_1[0x8] = _mm256_mask_store_ps(arg5, arg14)
            float var_260_1[0x8] = _mm256_mask_store_ps(arg5, zmm17)
            float var_240_1[0x8] = zmm1
            arg7 = _mm256_broadcast_ss(arg16[3])
            float var_320_1[0x8] = arg7
            float var_300_1[0x8] = arg7
            float var_2e0_1[0x8] = arg7
            float var_2c0_1[0x8] = arg7
            zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg16[1])
            zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg16[2])
            zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg16)
            zmm22 = _mm256_mask_mul_ps(arg5, arg14, zmm20)
            zmm23 = _mm256_mask_mul_ps(arg5, zmm17, zmm21)
            zmm24 = _mm256_mask_mul_ps(arg5, arg13, zmm19)
            zmm17 = _mm256_mask3_fmsub_ps(zmm17, arg5, zmm19, zmm22)
            arg13 = _mm256_mask3_fmsub_ps(arg13, arg5, zmm20, zmm23)
            arg14 = _mm256_mask3_fmsub_ps(arg14, arg5, zmm21, zmm24)
            zmm17 = _mm256_mask_add_ps(arg5, zmm17, zmm17)
            arg13 = _mm256_mask_add_ps(arg5, arg13, arg13)
            arg14 = _mm256_mask_add_ps(arg5, arg14, arg14)
            zmm22 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_2a0_1), arg5, arg7, zmm17)
            zmm23 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_280_1), arg5, arg7, arg13)
            arg7 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg7, arg5, arg14, var_260_1)
            zmm24 = _mm256_mask_mul_ps(arg5, arg13, zmm20)
            zmm25 = _mm256_mask_mul_ps(arg5, arg14, zmm21)
            zmm26 = _mm256_mask_mul_ps(arg5, zmm17, zmm19)
            arg14 =
                _mm256_mask_add_ps(arg5, zmm22, _mm256_mask3_fmsub_ps(zmm24, arg5, arg14, zmm19))
            zmm19 =
                _mm256_mask_add_ps(arg5, zmm23, _mm256_mask3_fmsub_ps(zmm25, arg5, zmm17, zmm20))
            arg13 = _mm256_mask_add_ps(arg5, arg7, _mm256_mask3_fmsub_ps(zmm26, arg5, arg13, zmm21))
            zmm17 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg14, arg16[4])
            arg7 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm19, arg16[5])
            arg13 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg13, arg16[6])
            arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, var_330)
            int64_t k1_7 = _mm256_cmp_ps_mask(arg5, arg14, zmm17, 1)
            _kortest_mask8_u8(k1_7, k1_7)
            
            if (temp1_1 != 0)
                var_320_1 = _mm256_mask_storeu_ps(k1_7, arg14)
            
            int64_t k1_8 = _mm256_cmp_ps_mask(arg5, arg14, zmm17, 5)
            _kortest_mask8_u8(k1_8, k1_8)
            
            if (temp1_1 != 0)
                arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, var_340)
                int64_t k2_1 = _mm256_cmp_ps_mask(k1_8, zmm17, arg14, 1)
                _kortest_mask8_u8(k2_1, k2_1)
                
                if (temp1_1 != 0)
                    var_320_1 = _mm256_mask_storeu_ps(k2_1, arg14)
                
                int64_t k1_9 = _mm256_cmp_ps_mask(k1_8, zmm17, arg14, 5)
                _kortest_mask8_u8(k1_9, k1_9)
                
                if (temp1_1 != 0)
                    var_320_1 = _mm256_mask_storeu_ps(k1_9, zmm17)
            
            arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, temp0_6)
            int64_t k1_10 = _mm256_cmp_ps_mask(arg5, arg14, arg7, 1)
            _kortest_mask8_u8(k1_10, k1_10)
            
            if (temp1_1 != 0)
                var_300_1 = _mm256_mask_storeu_ps(k1_10, arg14)
            
            int64_t k1_11 = _mm256_cmp_ps_mask(arg5, arg14, arg7, 5)
            _kortest_mask8_u8(k1_11, k1_11)
            
            if (temp1_1 != 0)
                arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, temp0_11)
                int64_t k2_2 = _mm256_cmp_ps_mask(k1_11, arg7, arg14, 1)
                _kortest_mask8_u8(k2_2, k2_2)
                
                if (temp1_1 != 0)
                    var_300_1 = _mm256_mask_storeu_ps(k2_2, arg14)
                
                int64_t k1_12 = _mm256_cmp_ps_mask(k1_11, arg7, arg14, 5)
                _kortest_mask8_u8(k1_12, k1_12)
                
                if (temp1_1 != 0)
                    var_300_1 = _mm256_mask_storeu_ps(k1_12, arg7)
            
            arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, temp0_7)
            int64_t k1_13 = _mm256_cmp_ps_mask(arg5, arg14, arg13, 1)
            _kortest_mask8_u8(k1_13, k1_13)
            
            if (temp1_1 != 0)
                var_2e0_1 = _mm256_mask_storeu_ps(k1_13, arg14)
            
            int64_t k1_14 = _mm256_cmp_ps_mask(arg5, arg14, arg13, 5)
            _kortest_mask8_u8(k1_14, k1_14)
            
            if (temp1_1 != 0)
                arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, temp0_12)
                int64_t k2_3 = _mm256_cmp_ps_mask(k1_14, arg13, arg14, 1)
                _kortest_mask8_u8(k2_3, k2_3)
                
                if (temp1_1 != 0)
                    var_2e0_1 = _mm256_mask_storeu_ps(k2_3, arg14)
                
                int64_t k1_15 = _mm256_cmp_ps_mask(k1_14, arg13, arg14, 5)
                _kortest_mask8_u8(k1_15, k1_15)
                
                if (temp1_1 != 0)
                    var_2e0_1 = _mm256_mask_storeu_ps(k1_15, arg13)
            
            zmm20 = _mm256_mask_load_ps(arg5, var_320_1)
            arg14 = _mm256_mask_load_ps(arg5, var_300_1)
            zmm19 = _mm256_mask_load_ps(arg5, var_2e0_1)
            zmm24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
            zmm22 = _mm256_mask_sub_ps(arg5, zmm20, zmm24)
            zmm25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *(arg1 + 4))
            zmm23 = _mm256_mask_sub_ps(arg5, arg14, zmm25)
            zmm26 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1].d)
            zmm27 = _mm256_mask_sub_ps(arg5, zmm19, zmm26)
            zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
            zmm28 = _mm256_mask_div_ps(arg5, zmm22, zmm21)
            zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *(arg3 + 4))
            zmm29 = _mm256_mask_div_ps(arg5, zmm23, zmm22)
            zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1].d)
            zmm27 = _mm256_mask_div_ps(arg5, zmm27, zmm23)
            zmm28 = _mm256_mask_cvttps_epi32(arg5, zmm28)
            arg10 = _mm256_mask_cvttps_epi32(arg5, zmm29)
            zmm31 = _mm256_mask_cvttps_epi32(arg5, zmm27)
            zmm27 = _mm256_mask_cvtepi32_ps(arg5, zmm28)
            arg8 = _mm256_cvtepi32_ps(arg10)
            arg11 = _mm256_mask_cvtepi32_ps(arg5, zmm31)
            zmm27 = _mm256_mask3_fmadd_ps(zmm27, arg5, zmm21, zmm24)
            arg8 = _mm256_mask3_fmadd_ps(arg8, arg5, zmm22, zmm25)
            arg11 = _mm256_mask3_fmadd_ps(arg11, arg5, zmm23, zmm26)
            arg9[0].o = __vmovsd_xmmdq_memq(*arg3)
            arg9[0].o = __vdivps_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm2[0].o)
            zmm29 = _mm256_mask_broadcastss_ps(arg5, arg9[0].o)
            zmm27 = _mm256_mask_add_ps(arg5, zmm29, zmm27)
            zmm0[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
            zmm30 = _mm256_mask_broadcastsd_pd(arg5, zmm0[0].o)
            zmm0 = _mm256_mask_add_ps(arg5, zmm30, arg8)
            arg8[0].o = _mm_permute_ps(arg9[0].o, 0xea)
            arg8 = _mm256_broadcastsd_pd(arg8[0].o)
            int64_t k1_16 = _mm256_cmp_ps_mask(arg5, zmm27, zmm20, 1)
            arg9 = _mm256_mask_add_epi32(arg5, zmm28, arg6)
            zmm27 = _mm256_mask_blend_epi32(k1_16, arg9, zmm28)
            uint64_t var_320_2[0x4] = _mm256_mask_store_epi64(arg5, zmm27)
            int64_t k1_17 = _mm256_cmp_ps_mask(arg5, zmm0, arg14, 1)
            _kortest_mask8_u8(k1_17, k1_17)
            
            if (temp1_1 != 0)
                zmm28 = _mm256_mask_mov_epi64(arg5, arg10)
            
            arg11 = _mm256_add_ps(arg8, arg11)
            
            if (temp1_1 u>= 0)
                arg9 = _mm256_add_epi32(arg10, arg6)
            
            arg10 = _mm256_mask_blend_epi32(k1_17, arg9, zmm28)
            int32_t var_300_2[0x8] = arg10
            int64_t k1_18 = _mm256_cmp_ps_mask(arg5, arg11, zmm19, 1)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (temp1_1 != 0)
                zmm28 = _mm256_mask_mov_epi64(arg5, zmm31)
            
            if (temp1_1 u>= 0)
                _mm256_mask_add_epi32(arg5, zmm31, arg6)
            
            arg9 = _mm256_mask_mov_epi32(k1_18, zmm28)
            zmm0 = _mm256_mask_cvtepi32_ps(arg5, zmm27)
            zmm28 = _mm256_mask_cvtepi32_ps(arg5, arg10)
            zmm31 = _mm256_mask_cvtepi32_ps(arg5, arg9)
            zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, zmm21, zmm24)
            zmm28 = _mm256_mask3_fmadd_ps(zmm28, arg5, zmm22, zmm25)
            zmm31 = _mm256_mask3_fmadd_ps(zmm31, arg5, zmm23, zmm26)
            zmm0 = _mm256_mask_add_ps(arg5, zmm29, zmm0)
            zmm24 = _mm256_mask_add_ps(arg5, zmm30, zmm28)
            zmm25 = _mm256_mask_add_ps(arg5, arg8, zmm31)
            zmm0 = _mm256_mask_sub_ps(arg5, zmm20, zmm0)
            zmm24 = _mm256_mask_sub_ps(arg5, arg14, zmm24)
            zmm25 = _mm256_mask_sub_ps(arg5, zmm19, zmm25)
            zmm0 = _mm256_mask_div_ps(arg5, zmm0, zmm21)
            zmm21 = _mm256_mask_div_ps(arg5, zmm24, zmm22)
            zmm22 = _mm256_mask_div_ps(arg5, zmm25, zmm23)
            float var_2a0_2[0x8] = zmm0
            float var_280_2[0x8] = _mm256_mask_store_ps(arg5, zmm21)
            float var_260_2[0x8] = _mm256_mask_store_ps(arg5, zmm22)
            int64_t k1_19 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm27, arg6)
            _kortest_mask8_u8(k1_19, k1_19)
            
            if (temp1_1 != 0)
                var_320_2 = _mm256_mask_storeu_epi32(k1_19, zmm1)
                var_2a0_2 = _mm256_mask_storeu_ps(k1_19, zmm1)
                zmm27 = _mm256_mask_load_epi64(arg5, var_320_2)
            
            int32_t rax_2 = *arg4
            int64_t k1_20 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm27, 
                _mm256_mask_set1_epi32(arg5, rax_2 - 1))
            _kortest_mask8_u8(k1_20, k1_20)
            
            if (temp1_1 != 0)
                cond:38_1 = rax_2 == 2
                cond:40_1 = rax_2 == 2
                cond:42_1 = rax_2 == 2
                cond:44_1 = rax_2 == 2
                cond:46_1 = rax_2 == 2
                cond:48_1 = rax_2 == 2
                var_320_2 = _mm256_mask_storeu_epi32(k1_20, _mm256_mask_set1_epi32(arg5, rax_2 - 2))
                var_2a0_2 = _mm256_mask_storeu_ps(k1_20, 
                    __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1f))
            
            zmm21 = _mm256_mask_load_epi64(arg5, var_300_2)
            int64_t k1_21 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm21, arg6)
            _kortest_mask8_u8(k1_21, k1_21)
            
            if (not(cond:38_1))
                var_300_2 = _mm256_mask_storeu_epi32(k1_21, zmm1)
                var_280_2 = _mm256_mask_storeu_ps(k1_21, zmm1)
                zmm21 = _mm256_mask_load_epi64(arg5, var_300_2)
            
            zmm20 = _mm256_mask_sub_ps(arg5, zmm20, zmm17)
            int32_t rax_4 = arg4[1]
            int64_t k1_22 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm21, 
                _mm256_mask_set1_epi32(arg5, rax_4 - 1))
            _kortest_mask8_u8(k1_22, k1_22)
            
            if (not(cond:40_1))
                cond:42_1 = rax_4 == 2
                cond:44_1 = rax_4 == 2
                cond:46_1 = rax_4 == 2
                cond:48_1 = rax_4 == 2
                var_300_2 = _mm256_mask_storeu_epi32(k1_22, _mm256_mask_set1_epi32(arg5, rax_4 - 2))
                var_280_2 = _mm256_mask_storeu_ps(k1_22, _mm256_broadcast_ss(1f))
            
            arg13 = _mm256_mask_sub_ps(arg5, zmm19, arg13)
            arg7 = _mm256_mask_sub_ps(arg5, arg14, arg7)
            zmm20 = _mm256_mask3_fmadd_ps(zmm20, arg5, zmm20, zmm1)
            zmm17 = _mm256_mask_load_epi64(arg5, arg9)
            int64_t k1_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm17, arg6)
            _kortest_mask8_u8(k1_23, k1_23)
            
            if (not(cond:42_1))
                uint64_t var_2e0_3[0x4] = _mm256_mask_storeu_epi32(k1_23, zmm1)
                var_260_2 = _mm256_mask_storeu_ps(k1_23, zmm1)
                zmm17 = _mm256_mask_load_epi64(arg5, var_2e0_3)
            
            arg13 = _mm256_mask_mul_ps(arg5, arg13, arg13)
            arg7 = _mm256_mask3_fmadd_ps(arg7, arg5, arg7, zmm20)
            int32_t rax_6 = arg4[2]
            int64_t k1_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm17, 
                _mm256_mask_set1_epi32(arg5, rax_6 - 1))
            _kortest_mask8_u8(k1_24, k1_24)
            
            if (not(cond:44_1))
                cond:46_1 = rax_6 == 2
                cond:48_1 = rax_6 == 2
                uint64_t var_2e0_4[0x4] =
                    _mm256_mask_storeu_epi32(k1_24, _mm256_mask_set1_epi32(arg5, rax_6 - 2))
                var_260_2 = _mm256_mask_storeu_ps(k1_24, _mm256_broadcast_ss(1f))
                zmm17 = _mm256_mask_load_epi64(arg5, var_2e0_4)
            
            zmm0 = __vpbroadcastd_ymmqq_memd(*(arg15 + 4))
            arg14 = _mm256_mask_load_epi64(arg5, var_320_2)
            zmm19 = _mm256_mask_load_epi64(arg5, var_300_2)
            zmm20 = _mm256_mask_mullo_epi32(arg5, zmm0, arg14)
            zmm21 = _mm256_mask_add_epi32(arg5, zmm20, zmm19)
            zmm22 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, *(arg15 + 8))
            zmm21 = _mm256_mask_mullo_epi32(arg5, zmm21, zmm22)
            zmm23 = _mm256_mask_add_epi32(arg5, zmm21, zmm17)
            int64_t rax_9 = *(arg15 + 0x10)
            zmm23 = _mm256_mask_slli_epi32(arg5, zmm23, 2)
            int64_t k1_25 = _kxnor_mask16(arg5, arg5)
            zmm24[0].o = _mm_mask_xor_ps(arg5, zmm24[0].o, zmm24[0].o)
            int64_t k1_26
            int64_t temp0_179
            temp0_179, k1_26 = _mm256_mmask_i32gather_ps(k1_25, *(rax_9 + zmm23[0].q))
            zmm24 = temp0_179
            zmm0 = _mm256_mask_mullo_epi32(arg5, zmm0, _mm256_mask_sub_epi32(arg5, arg14, arg6))
            arg14 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm0, zmm19), zmm22)
            zmm23 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, arg14, zmm17), 2)
            int64_t k1_27 = _kxnor_mask16(arg5, arg5)
            zmm25[0].o = _mm_mask_xor_ps(arg5, zmm25[0].o, zmm25[0].o)
            int64_t k1_28
            int64_t temp0_187
            temp0_187, k1_28 = _mm256_mmask_i32gather_ps(k1_27, *(rax_9 + zmm23[0].q))
            zmm23 = _mm256_mask_load_ps(arg5, var_2a0_2)
            zmm26 = _mm256_mask_load_ps(arg5, var_280_2)
            zmm19 = _mm256_mask_sub_epi32(arg5, zmm19, arg6)
            zmm20 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm20, zmm19), zmm22)
            zmm27 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm20, zmm17), 2)
            int64_t k1_29 = _kxnor_mask16(arg5, arg5)
            zmm28[0].o = _mm_mask_xor_ps(arg5, zmm28[0].o, zmm28[0].o)
            int64_t k1_30
            int64_t temp0_196
            temp0_196, k1_30 = _mm256_mmask_i32gather_ps(k1_29, *(rax_9 + zmm27[0].q))
            zmm28 = temp0_196
            zmm0 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm0, zmm19), zmm22)
            zmm19 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm0, zmm17), 2)
            int64_t k1_31 = _kxnor_mask16(arg5, arg5)
            zmm22[0].o = _mm_mask_xor_epi32(arg5, zmm22[0].o, zmm22[0].o)
            int64_t k1_32
            int64_t temp0_202
            temp0_202, k1_32 = _mm256_mmask_i32gather_ps(k1_31, *(rax_9 + zmm19[0].q))
            zmm17 = _mm256_mask_sub_epi32(arg5, zmm17, arg6)
            zmm19 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm21, zmm17), 2)
            int64_t k1_33 = _kxnor_mask16(arg5, arg5)
            zmm21[0].o = _mm_mask_xor_epi32(arg5, zmm21[0].o, zmm21[0].o)
            int64_t k1_34
            int64_t temp0_207
            temp0_207, k1_34 = _mm256_mmask_i32gather_ps(k1_33, *(rax_9 + zmm19[0].q))
            zmm21 = temp0_207
            arg14 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, arg14, zmm17), 2)
            int64_t k1_35 = _kxnor_mask16(arg5, arg5)
            zmm19[0].o = _mm_mask_xor_ps(arg5, zmm19[0].o, zmm19[0].o)
            int64_t k1_36
            int64_t temp0_211
            temp0_211, k1_36 = _mm256_mmask_i32gather_ps(k1_35, *(rax_9 + arg14[0].q))
            arg13 = _mm256_mask_add_ps(arg5, arg7, arg13)
            arg7 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_187, zmm24), arg5, zmm23, 
                zmm24)
            arg14 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm20, zmm17), 2)
            int64_t k1_37 = _kxnor_mask16(arg5, arg5)
            zmm20[0].o = _mm_mask_xor_epi32(arg5, zmm20[0].o, zmm20[0].o)
            int64_t k1_38
            int64_t temp0_218
            temp0_218, k1_38 = _mm256_mmask_i32gather_ps(k1_37, *(rax_9 + arg14[0].q))
            zmm20 = temp0_218
            arg14 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_202, zmm28), arg5, zmm23, 
                zmm28)
            zmm19 = _mm256_mask_sub_ps(arg5, temp0_211, zmm21)
            zmm0 = _mm256_slli_epi32(_mm256_mask_add_epi32(arg5, zmm0, zmm17), 2)
            int64_t k1_39 = _kxnor_mask16(arg5, arg5)
            zmm17[0].o = _mm_mask_xor_epi32(arg5, zmm17[0].o, zmm17[0].o)
            int64_t k1_40
            int64_t temp0_225
            temp0_225, k1_40 = _mm256_mmask_i32gather_ps(k1_39, *(rax_9 + zmm0[0].q))
            zmm19 = _mm256_mask3_fmadd_ps(zmm19, arg5, zmm23, zmm21)
            zmm0 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_225, zmm20), arg5, zmm23, 
                zmm20)
            zmm17 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, arg14, arg7), arg5, zmm26, arg7)
            zmm0 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, zmm0, zmm19), arg5, zmm26, zmm19)
            arg7 = __vfmadd132ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                _mm256_mask_sub_ps(arg5, zmm0, zmm17), arg5, zmm17, var_260_2)
            int64_t k1_41 = _mm256_cmp_ps_mask(arg5, arg13, zmm1, 0xc)
            _kortest_mask8_u8(k1_41, k1_41)
            
            if (not(cond:46_1))
                zmm17 = _mm256_mask_rsqrt14_ps(arg5, arg13)
                arg13 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                    _mm256_mask_mul_ps(arg5, zmm17, 
                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            _mm256_mask_mul_ps(arg5, arg13, zmm17), arg5, zmm17, 0x40400000)), 
                    0x3f000000)
                zmm17 = _mm256_mask_rcp14_ps(arg5, arg13)
                arg13 = __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg13, arg5, zmm17, 
                    0x40000000)
                arg7 = _mm256_mask3_fmadd_ps(arg7, k1_41, zmm17, arg13)
            
            arg5 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, arg7, *arg19, 1)
            _kortest_mask8_u8(arg5, arg5)
            
            if (cond:48_1)
                result = 0
                rdx += 8
                
                if (rdx s>= r12_4)
                    break
                
                continue
            else
                uint64_t i = zx.q(_cvtmask32_u32(arg5))
                result = 0
                
                do
                    uint64_t r15_1 = _tzcnt_u64(i)
                    i &= not.q(1 << (r15_1 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        float var_1e0[0x8] = arg7
                        uint64_t r15_2 = zx.q(r15_1.d) & 7
                        arg9[0].o = zx.o(var_1e0[r15_2])
                        *arg19 = arg9[0]
                        float var_1c0[0x8] = zmm4
                        *arg18 = var_1c0[r15_2]
                    
                    result.b = 1
                while (i != 0)
        
        rdx += 8
        
        if (rdx s>= r12_4)
            break

if (rdx s< arg20)
    char temp2_1 = result.b
    bool cond:39_1 = temp2_1 == 0
    bool cond:41_1 = temp2_1 == 0
    bool cond:43_1 = temp2_1 == 0
    bool cond:45_1 = temp2_1 == 0
    bool cond:47_1 = temp2_1 == 0
    bool cond:49_1 = temp2_1 == 0
    result.b = 1
    
    if (temp2_1 == 0)
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rdx), data_142fc93a0)
        zmm1 = _mm256_mask_set1_epi32(arg5, arg20)
        uint64_t k1_42 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm1, zmm0)
        zmm2 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 3)
        int64_t k2_5
        int64_t temp0_248
        temp0_248, k2_5 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), 
            *(arg17 + (zmm2[0].q << 2)))
        arg6 = temp0_248
        zmm2 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        zmm4 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 4)
        int64_t k2_6 = __kmovq_maskmskw_masku64_avx512(k1_42)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k2_7
        int64_t temp0_252
        temp0_252, k2_7 = _mm256_mmask_i32gather_ps(k2_6, *(arg17 + zmm4[0].q))
        arg7 = temp0_252
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 8)
        int64_t k2_8 = __kmovq_maskmskw_masku64_avx512(k1_42)
        arg13[0].o = _mm_mask_xor_ps(arg5, arg13[0].o, arg13[0].o)
        int64_t k2_9
        int64_t temp0_256
        temp0_256, k2_9 = _mm256_mmask_i32gather_ps(k2_8, *(arg17 + zmm2[0].q))
        arg13 = temp0_256
        uint32_t var_1a0_1[0x8] = arg6
        float var_180_1[0x8] = arg7
        float var_160_1[0x8] = _mm256_mask_store_ps(arg5, arg13)
        float var_140_1[0x8] = zmm4
        zmm2 = _mm256_broadcast_ss(arg16[3])
        float var_320_3[0x8] = zmm2
        float var_300_3[0x8] = zmm2
        float var_2e0_5[0x8] = zmm2
        float var_2c0_2[0x8] = zmm2
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg16[1])
        arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg16[2])
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg16)
        zmm4 = _mm256_mul_ps(zmm2, zmm4)
        zmm20 = _mm256_mask_mul_ps(arg5, arg7, arg14)
        zmm21 = _mm256_mask_mul_ps(arg5, arg13, zmm19)
        zmm22 = _mm256_mask_mul_ps(arg5, arg6, zmm17)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, zmm17, arg13)
        zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, arg14, arg6)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm19, arg7)
        arg6 = _mm256_sub_ps(zmm4, zmm4)
        zmm4 = _mm256_mask_add_ps(arg5, zmm20, zmm20)
        arg7 = _mm256_mask_add_ps(arg5, zmm21, zmm21)
        arg13 = _mm256_mask_add_ps(arg5, zmm22, zmm22)
        float var_2a0_3[0x8] = zmm4
        float var_280_3[0x8] = arg7
        int256_t var_260_3 = _mm256_mask_store_ps(arg5, arg13)
        arg6 = _mm256_add_ps(arg6, arg6)
        uint32_t var_240_2[0x8] = arg6
        zmm17 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1a0_1), arg5, zmm2, zmm4)
        arg14 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_180_1), arg5, zmm2, arg7)
        zmm19 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_160_1), arg5, zmm2, arg13)
        arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, zmm2, var_140_1)
        int256_t var_120_1 = _mm256_mask_store_ps(arg5, zmm17)
        int256_t var_100_1 = _mm256_mask_store_ps(arg5, arg14)
        int256_t var_e0_1 = _mm256_mask_store_ps(arg5, zmm19)
        uint32_t var_c0_1[0x8] = arg6
        zmm2 = _mm256_broadcast_ss(arg16[1])
        arg6 = _mm256_broadcast_ss(arg16[2])
        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg16)
        zmm21 = _mm256_mask_mul_ps(arg5, arg7, arg6)
        zmm22 = _mm256_mask_mul_ps(arg5, arg13, zmm20)
        zmm23 = _mm256_mask_mul_ps(arg5, zmm4, zmm2)
        zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, arg13, zmm2)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm4, arg6)
        zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, arg7, zmm20)
        zmm2 = _mm256_mask_add_ps(arg5, zmm17, zmm21)
        arg6 = _mm256_mask_add_ps(arg5, arg14, zmm22)
        arg7 = _mm256_mask_add_ps(arg5, zmm19, zmm23)
        zmm4 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg16[4])
        arg6 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg16[5])
        arg11 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg7, arg16[6])
        arg7 = _mm256_broadcast_ss(var_330)
        int64_t k0 = _mm256_cmp_ps_mask(k1_42, arg7, zmm4, 1)
        _kortest_mask8_u8(k0, k0)
        
        if (temp2_1 != 0)
            var_320_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0, arg7, zmm4, 1), arg7)
        
        int64_t k0_1 = _mm256_cmp_ps_mask(k1_42, arg7, zmm4, 5)
        _kortest_mask8_u8(k0_1, k0_1)
        
        if (temp2_1 != 0)
            int64_t k2_11 = _mm256_cmp_ps_mask(k0_1, arg7, zmm4, 5)
            arg7 = _mm256_broadcast_ss(var_340)
            int64_t k3_1 = _mm256_cmp_ps_mask(k2_11, zmm4, arg7, 1)
            int64_t k0_2 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_1, zmm1, zmm0)
            _kortest_mask8_u8(k0_2, k0_2)
            
            if (temp2_1 != 0)
                var_320_3 = _mm256_mask_storeu_ps(k3_1, arg7)
            
            int64_t k2_12 = _mm256_cmp_ps_mask(k2_11, zmm4, arg7, 5)
            int64_t k0_3 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_12, zmm1, zmm0)
            _kortest_mask8_u8(k0_3, k0_3)
            
            if (temp2_1 != 0)
                var_320_3 = _mm256_mask_storeu_ps(k2_12, zmm4)
        
        arg7 = _mm256_broadcast_ss(temp0_6)
        int64_t k0_4 = _mm256_cmp_ps_mask(k1_42, arg7, arg6, 1)
        _kortest_mask8_u8(k0_4, k0_4)
        
        if (temp2_1 != 0)
            var_300_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_4, arg7, arg6, 1), arg7)
        
        int64_t k0_5 = _mm256_cmp_ps_mask(k1_42, arg7, arg6, 5)
        _kortest_mask8_u8(k0_5, k0_5)
        
        if (temp2_1 != 0)
            int64_t k2_14 = _mm256_cmp_ps_mask(k0_5, arg7, arg6, 5)
            arg7 = _mm256_broadcast_ss(temp0_11)
            int64_t k3_2 = _mm256_cmp_ps_mask(k2_14, arg6, arg7, 1)
            int64_t k0_6 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_2, zmm1, zmm0)
            _kortest_mask8_u8(k0_6, k0_6)
            
            if (temp2_1 != 0)
                var_300_3 = _mm256_mask_storeu_ps(k3_2, arg7)
            
            int64_t k2_15 = _mm256_cmp_ps_mask(k2_14, arg6, arg7, 5)
            int64_t k0_7 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_15, zmm1, zmm0)
            _kortest_mask8_u8(k0_7, k0_7)
            
            if (temp2_1 != 0)
                var_300_3 = _mm256_mask_storeu_ps(k2_15, arg6)
        
        arg7 = _mm256_broadcast_ss(temp0_7)
        int64_t k0_8 = _mm256_cmp_ps_mask(k1_42, arg7, arg11, 1)
        _kortest_mask8_u8(k0_8, k0_8)
        
        if (temp2_1 != 0)
            var_2e0_5 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_8, arg7, arg11, 1), arg7)
        
        int64_t k0_9 = _mm256_cmp_ps_mask(k1_42, arg7, arg11, 5)
        _kortest_mask8_u8(k0_9, k0_9)
        
        if (temp2_1 != 0)
            int64_t k2_17 = _mm256_cmp_ps_mask(k0_9, arg7, arg11, 5)
            arg7 = _mm256_broadcast_ss(temp0_12)
            int64_t k3_3 = _mm256_cmp_ps_mask(k2_17, arg11, arg7, 1)
            int64_t k0_10 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_3, zmm1, zmm0)
            _kortest_mask8_u8(k0_10, k0_10)
            
            if (temp2_1 != 0)
                var_2e0_5 = _mm256_mask_storeu_ps(k3_3, arg7)
            
            int64_t k2_18 = _mm256_cmp_ps_mask(k2_17, arg11, arg7, 5)
            k0_9 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_18, zmm1, zmm0)
            _kortest_mask8_u8(k0_9, k0_9)
            
            if (temp2_1 != 0)
                var_2e0_5 = _mm256_mask_storeu_ps(k2_18, arg11)
        
        zmm17 = _mm256_mask_load_ps(k0_9, var_320_3)
        arg13 = _mm256_mask_load_ps(k0_9, var_300_3)
        zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *arg1)
        arg14 = _mm256_mask_sub_ps(k0_9, zmm17, zmm21)
        zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *(arg1 + 4))
        zmm24 = _mm256_mask_sub_ps(k0_9, arg13, zmm22)
        zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, arg1[1].d)
        zmm25 = _mm256_mask_sub_ps(k0_9, var_2e0_5, zmm23)
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *arg3)
        zmm26 = _mm256_mask_div_ps(k0_9, arg14, zmm19)
        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *(arg3 + 4))
        zmm24 = _mm256_mask_div_ps(k0_9, zmm24, zmm20)
        arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, arg3[1].d)
        zmm27 = _mm256_mask_div_ps(k0_9, zmm25, arg14)
        zmm25 = _mm256_mask_cvttps_epi32(k0_9, zmm26)
        zmm31 = _mm256_mask_cvttps_epi32(k0_9, zmm24)
        zmm27 = _mm256_mask_cvttps_epi32(k0_9, zmm27)
        zmm24 = _mm256_mask_cvtepi32_ps(k0_9, zmm25)
        zmm29 = _mm256_mask_cvtepi32_ps(k0_9, zmm31)
        arg9 = _mm256_mask_cvtepi32_ps(k0_9, zmm27)
        zmm24 = _mm256_mask3_fmadd_ps(zmm24, k0_9, zmm19, zmm21)
        zmm29 = _mm256_mask3_fmadd_ps(zmm29, k0_9, zmm20, zmm22)
        arg9 = _mm256_mask3_fmadd_ps(arg9, k0_9, arg14, zmm23)
        arg8[0].o = __vmovsd_xmmdq_memq(*arg3)
        zmm26 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, 2f)
        arg8[0].o = _mm_mask_div_ps(k0_9, arg8[0].o, zmm26[0].o)
        zmm26 = _mm256_mask_broadcastss_ps(k0_9, arg8[0].o)
        zmm24 = _mm256_mask_add_ps(k0_9, zmm26, zmm24)
        zmm2[0].o = __vmovshdup_xmmdq_xmmdq(arg8[0].o)
        zmm28 = _mm256_mask_broadcastsd_pd(k0_9, zmm2[0].o)
        arg10 = _mm256_mask_add_ps(k0_9, zmm28, zmm29)
        zmm2[0].o = _mm_permute_ps(arg8[0].o, 0xea)
        zmm29 = _mm256_mask_broadcastsd_pd(k0_9, zmm2[0].o)
        int64_t k2_19 = _mm256_cmp_ps_mask(k0_9, zmm24, zmm17, 1)
        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
        zmm30 = _mm256_mask_add_epi32(k0_9, zmm25, arg8)
        zmm24 = _mm256_mask_blend_epi32(k2_19, zmm30, zmm25)
        uint64_t var_320_4[0x4] = _mm256_mask_store_epi64(k0_9, zmm24)
        int64_t k0_11 = _mm256_cmp_ps_mask(k1_42, arg10, arg13, 1)
        _kortest_mask8_u8(k0_11, k0_11)
        
        if (temp2_1 != 0)
            zmm25 = _mm256_mask_mov_epi64(k0_11, zmm31)
        
        arg9 = _mm256_mask_add_ps(k0_11, zmm29, arg9)
        int64_t k2_20 = _mm256_cmp_ps_mask(k0_11, arg10, arg13, 1)
        int64_t k0_12 = _mm256_cmp_ps_mask(k1_42, arg10, arg13, 5)
        _kortest_mask8_u8(k0_12, k0_12)
        
        if (temp2_1 != 0)
            zmm30 = _mm256_mask_add_epi32(k0_12, zmm31, arg8)
        
        zmm31 = _mm256_mask_blend_epi32(k2_20, zmm30, zmm25)
        uint64_t var_300_4[0x4] = _mm256_mask_store_epi64(k0_12, zmm31)
        int64_t k0_13 = _mm256_cmp_ps_mask(k1_42, arg9, var_2e0_5, 1)
        _kortest_mask8_u8(k0_13, k0_13)
        
        if (temp2_1 != 0)
            zmm25 = _mm256_mask_mov_epi64(k0_13, zmm27)
        
        int64_t k2_21 = _mm256_cmp_ps_mask(k0_13, arg9, var_2e0_5, 1)
        int64_t k0_14 = _mm256_cmp_ps_mask(k1_42, arg9, var_2e0_5, 5)
        _kortest_mask8_u8(k0_14, k0_14)
        
        if (temp2_1 != 0)
            _mm256_mask_add_epi32(k0_14, zmm27, arg8)
        
        zmm30 = _mm256_mask_mov_epi32(k2_21, zmm25)
        uint32_t var_2e0_6[0x8] = _mm256_mask_store_epi64(k0_14, zmm30)
        zmm2 = _mm256_mask_cvtepi32_ps(k0_14, zmm24)
        zmm25 = _mm256_mask_cvtepi32_ps(k0_14, zmm31)
        zmm27 = _mm256_mask_cvtepi32_ps(k0_14, zmm30)
        zmm2 = _mm256_mask3_fmadd_ps(zmm2, k0_14, zmm19, zmm21)
        zmm25 = _mm256_mask3_fmadd_ps(zmm25, k0_14, zmm20, zmm22)
        zmm27 = _mm256_mask3_fmadd_ps(zmm27, k0_14, arg14, zmm23)
        zmm2 = _mm256_mask_add_ps(k0_14, zmm26, zmm2)
        zmm21 = _mm256_mask_add_ps(k0_14, zmm28, zmm25)
        zmm22 = _mm256_mask_add_ps(k0_14, zmm29, zmm27)
        zmm2 = _mm256_mask_sub_ps(k0_14, zmm17, zmm2)
        zmm21 = _mm256_mask_sub_ps(k0_14, arg13, zmm21)
        zmm22 = _mm256_mask_sub_ps(k0_14, var_2e0_5, zmm22)
        float var_2a0_4[0x8] = _mm256_mask_div_ps(k0_14, zmm2, zmm19)
        float var_280_4[0x8] = _mm256_mask_store_ps(k0_14, _mm256_mask_div_ps(k0_14, zmm21, zmm20))
        float var_260_4[0x8] = _mm256_mask_div_ps(k0_14, zmm22, arg14)
        int64_t k0_15 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
            __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_14, zmm24, arg8), zmm1, zmm0)
        _kortest_mask8_u8(k0_15, k0_15)
        
        if (temp2_1 != 0)
            arg8 = _mm256_cmpeq_epi32(arg8, arg8)
            int64_t k2_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_15, zmm24, arg8)
            arg14[0].o = _mm_mask_xor_ps(k0_15, arg14[0].o, arg14[0].o)
            var_320_4 = _mm256_mask_storeu_epi32(k2_23, arg14)
            var_2a0_4 = _mm256_mask_storeu_ps(k2_23, arg14)
            zmm24 = _mm256_mask_load_epi64(k0_15, var_320_4)
        
        int32_t rax_12 = *arg4
        arg14 = _mm256_mask_set1_epi32(k0_15, rax_12 - 1)
        int64_t k2_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_15, zmm24, arg14)
        int64_t k0_16 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_24, zmm1, zmm0)
        _kortest_mask8_u8(k0_16, k0_16)
        
        if (temp2_1 != 0)
            cond:39_1 = rax_12 == 2
            cond:41_1 = rax_12 == 2
            cond:43_1 = rax_12 == 2
            cond:45_1 = rax_12 == 2
            cond:47_1 = rax_12 == 2
            cond:49_1 = rax_12 == 2
            var_320_4 = _mm256_mask_storeu_epi32(k2_24, _mm256_mask_set1_epi32(k0_16, rax_12 - 2))
            arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_16, 1f)
            var_2a0_4 = _mm256_mask_storeu_ps(k2_24, arg14)
        
        zmm17 = _mm256_mask_sub_ps(k0_16, zmm17, zmm4)
        arg14[0].o = _mm_mask_xor_epi32(k0_16, arg14[0].o, arg14[0].o)
        zmm19 = _mm256_mask_load_epi64(k0_16, var_300_4)
        zmm4 = _mm256_cmpeq_epi32(zmm4, zmm4)
        int64_t k2_25 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_16, zmm19, zmm4)
        int64_t k0_17 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_25, zmm1, zmm0)
        _kortest_mask8_u8(k0_17, k0_17)
        
        if (not(cond:39_1))
            zmm4[0].o = zx.o(0)
            var_300_4 = _mm256_mask_storeu_epi32(k2_25, zmm4)
            var_280_4 = _mm256_mask_storeu_ps(k2_25, zmm4)
            zmm19 = _mm256_mask_load_epi64(k0_17, var_300_4)
        
        zmm4 = _mm256_mask_sub_ps(k0_17, arg13, arg6)
        zmm17 = _mm256_mask3_fmadd_ps(zmm17, k0_17, zmm17, arg14)
        int32_t rdx_1 = arg4[1]
        int64_t k2_26 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_17, zmm19, 
            _mm256_mask_set1_epi32(k0_17, rdx_1 - 1))
        int64_t k0_18 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_26, zmm1, zmm0)
        _kortest_mask8_u8(k0_18, k0_18)
        
        if (not(cond:41_1))
            cond:43_1 = rdx_1 == 2
            cond:45_1 = rdx_1 == 2
            cond:47_1 = rdx_1 == 2
            cond:49_1 = rdx_1 == 2
            var_300_4 = _mm256_mask_storeu_epi32(k2_26, _mm256_mask_set1_epi32(k0_18, rdx_1 - 2))
            var_280_4 = _mm256_mask_storeu_ps(k2_26, _mm256_broadcast_ss(1f))
        
        zmm2 = _mm256_sub_ps(var_2e0_5, arg11)
        zmm4 = _mm256_mask3_fmadd_ps(zmm4, k0_18, zmm4, zmm17)
        arg6 = var_2e0_6
        int64_t k2_27 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_18, arg6, 
            _mm256_cmpeq_epi32(var_2e0_5, var_2e0_5))
        int64_t k0_19 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_27, zmm1, zmm0)
        _kortest_mask8_u8(k0_19, k0_19)
        
        if (not(cond:43_1))
            arg6[0].o = zx.o(0)
            uint32_t var_2e0_7[0x8] = _mm256_mask_storeu_epi32(k2_27, arg6)
            var_260_4 = _mm256_mask_storeu_ps(k2_27, arg6)
            arg6 = var_2e0_7
        
        zmm2 = _mm256_fmadd_ps(zmm2, zmm2, zmm4)
        int32_t rdx_3 = arg4[2]
        int64_t k2_28 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_19, arg6, 
            _mm256_mask_set1_epi32(k0_19, rdx_3 - 1))
        int64_t k0_20 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_28, zmm1, zmm0)
        _kortest_mask8_u8(k0_20, k0_20)
        
        if (not(cond:45_1))
            cond:47_1 = rdx_3 == 2
            cond:49_1 = rdx_3 == 2
            uint32_t var_2e0_8[0x8] =
                _mm256_mask_storeu_epi32(k2_28, _mm256_mask_set1_epi32(k0_20, rdx_3 - 2))
            var_260_4 = _mm256_mask_storeu_ps(k2_28, _mm256_broadcast_ss(1f))
            arg6 = var_2e0_8
        
        zmm4 = __vpbroadcastd_ymmqq_memd(*(arg15 + 4))
        arg7 = var_320_4
        arg13 = _mm256_mask_load_epi64(k0_20, var_300_4)
        zmm17 = _mm256_mask_mullo_epi32(k0_20, zmm4, arg7)
        arg14 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(k0_20, *(arg15 + 8))
        zmm19 = _mm256_mask_mullo_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm17, arg13), arg14)
        zmm1 = _mm256_mask_add_epi32(k0_20, zmm19, arg6)
        int64_t rax_15 = *(arg15 + 0x10)
        zmm1 = _mm256_slli_epi32(zmm1, 2)
        zmm20[0].o = _mm_mask_xor_ps(k0_20, zmm20[0].o, zmm20[0].o)
        int64_t k2_30
        int64_t temp0_421
        temp0_421, k2_30 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), *(rax_15 + zmm1[0].q))
        zmm20 = temp0_421
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        zmm4 = _mm256_mullo_epi32(zmm4, _mm256_sub_epi32(arg7, zmm1))
        arg7 = _mm256_mask_mullo_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm4, arg13), arg14)
        zmm21 = _mm256_mask_slli_epi32(k0_20, _mm256_mask_add_epi32(k0_20, arg7, arg6), 2)
        zmm22[0].o = _mm_mask_xor_ps(k0_20, zmm22[0].o, zmm22[0].o)
        int64_t k2_32
        int64_t temp0_430
        temp0_430, k2_32 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), 
            *(rax_15 + zmm21[0].q))
        zmm22 = temp0_430
        zmm21 = _mm256_mask_load_ps(k0_20, var_2a0_4)
        zmm23 = _mm256_mask_load_ps(k0_20, var_280_4)
        arg13 = _mm256_mask_sub_epi32(k0_20, arg13, zmm1)
        zmm17 = _mm256_mask_mullo_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm17, arg13), arg14)
        zmm24 = _mm256_mask_slli_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm17, arg6), 2)
        zmm25[0].o = _mm_mask_xor_ps(k0_20, zmm25[0].o, zmm25[0].o)
        int64_t k2_34
        int64_t temp0_439
        temp0_439, k2_34 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), 
            *(rax_15 + zmm24[0].q))
        zmm25 = temp0_439
        zmm4 = _mm256_mask_mullo_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm4, arg13), arg14)
        arg13 = _mm256_mask_slli_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm4, arg6), 2)
        arg14[0].o = _mm_mask_xor_epi32(k0_20, arg14[0].o, arg14[0].o)
        int64_t k2_36
        int64_t temp0_445
        temp0_445, k2_36 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), 
            *(rax_15 + arg13[0].q))
        zmm1 = _mm256_sub_epi32(arg6, zmm1)
        arg6 = _mm256_slli_epi32(_mm256_mask_add_epi32(k0_20, zmm19, zmm1), 2)
        arg13[0].o = _mm_mask_xor_ps(k0_20, arg13[0].o, arg13[0].o)
        int64_t k2_38
        int64_t temp0_450
        temp0_450, k2_38 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), *(rax_15 + arg6[0].q))
        arg13 = temp0_450
        arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg7, zmm1), 2)
        int64_t k2_40
        int64_t temp0_453
        temp0_453, k2_40 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), *(rax_15 + arg6[0].q))
        arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
        zmm19 = _mm256_mask_sub_ps(k0_20, zmm22, zmm20)
        zmm17 = _mm256_mask_slli_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm17, zmm1), 2)
        zmm22[0].o = _mm_mask_xor_ps(k0_20, zmm22[0].o, zmm22[0].o)
        int64_t k2_42
        int64_t temp0_459
        temp0_459, k2_42 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), 
            *(rax_15 + zmm17[0].q))
        zmm22 = temp0_459
        zmm19 = _mm256_mask3_fmadd_ps(zmm19, k0_20, zmm21, zmm20)
        zmm17 =
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_20, temp0_445, zmm25), k0_20, zmm21, zmm25)
        arg7 = _mm256_mask_sub_ps(k0_20, temp0_453, arg13)
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(zmm4, zmm1), 2)
        int64_t k2_44
        int64_t temp0_466
        temp0_466, k2_44 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), *(rax_15 + zmm1[0].q))
        arg7 = _mm256_mask3_fmadd_ps(arg7, k0_20, zmm21, arg13)
        zmm1 =
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_20, temp0_466, zmm22), k0_20, zmm21, zmm22)
        zmm4 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_20, zmm17, zmm19), k0_20, zmm23, zmm19)
        zmm1 = __vfmadd132ps_ymmqq_ymmqq_memqq(
            _mm256_sub_ps(_mm256_mask3_fmadd_ps(_mm256_sub_ps(zmm1, arg7), k0_20, zmm23, arg7), 
                zmm4), 
            zmm4, var_260_4)
        int64_t k2_45 = _mm256_cmp_ps_mask(k1_42, zmm2, arg6, 0xc)
        _kortest_mask8_u8(k2_45, k2_45)
        
        if (not(cond:47_1))
            arg6 = _mm256_mask_rsqrt14_ps(k0_20, zmm2)
            zmm2 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_20, 
                _mm256_mul_ps(arg6, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(_mm256_mul_ps(zmm2, arg6), 
                        k0_20, arg6, 0x40400000)), 
                0x3f000000)
            arg6 = _mm256_mask_rcp14_ps(k0_20, zmm2)
            zmm2 =
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm2, k0_20, arg6, 0x40000000)
            zmm1 = _mm256_mask3_fmadd_ps(zmm1, k2_45, arg6, zmm2)
        
        int64_t k0_21 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_42, zmm1, *arg19, 1)
        _kortest_mask8_u8(k0_21, k0_21)
        
        if (cond:49_1)
            result = 0
        else
            uint64_t i_1 = zx.q(_cvtmask32_u32(k0_21))
            result = 0
            
            do
                uint64_t rdx_5 = _tzcnt_u64(i_1)
                i_1 &= not.q(1 << (rdx_5 u% 0x40))
                
                if ((result.b & 1) == 0)
                    float var_220[0x8] = zmm1
                    uint64_t rdx_6 = zx.q(rdx_5.d) & 7
                    zmm2[0].o = var_220[rdx_6]
                    *arg19 = zmm2[0]
                    float var_200[0x8] = zmm0
                    *arg18 = var_200[rdx_6]
                
                result.b = 1
            while (i_1 != 0)

arg8[0].o = var_98
arg9[0].o = var_88
arg10[0].o = var_78
arg11[0].o = var_68
arg12[0].o = var_58
_mm256_zeroupper()
return result
