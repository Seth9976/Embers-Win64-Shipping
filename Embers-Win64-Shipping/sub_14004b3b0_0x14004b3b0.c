// 函数: sub_14004b3b0
// 地址: 0x14004b3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg13[0].o
int128_t var_68 = arg12[0].o
int128_t var_78 = arg11[0].o
int128_t var_88 = arg10[0].o
int128_t var_98 = arg9[0].o
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
int32_t r13_4 = ((arg22 s>> 0x1f u>> 0x1d) + arg22) & 0xfffffff8
int32_t result
uint64_t rdi
float zmm3[0x8]
uint32_t zmm18[0x8]
float zmm19[0x8]
float zmm20[0x8]
float zmm21[0x8]
float zmm22[0x8]
float zmm23[0x8]
float zmm24[0x8]
uint32_t zmm25[0x8]
uint32_t zmm26[0x8]
float zmm27[0x8]
float zmm28[0x8]
float zmm29[0x8]
float zmm30[0x8]
float zmm31[0x8]

if (r13_4 s<= 0)
    rdi = 0
    result = 0
else
    result = 0
    zmm0[0].o = zx.o(0)
    arg12 = _mm256_broadcast_ss(2f)
    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
    rdi = 0
    
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
            zmm3 = *(arg19 + sx.q((rdi << 2).d))
            arg7 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 3)
            int64_t k1_1 = _kxnor_mask16(arg5, arg5)
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            int64_t k1_2
            int64_t temp0_17
            temp0_17, k1_2 = _mm256_mmask_i32gather_ps(k1_1, *(arg18 + (arg7[0].q << 2)))
            arg8 = temp0_17
            arg7 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 0xc)
            arg14 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg7, 4)
            int64_t k1_3 = _kxnor_mask16(arg5, arg5)
            arg15[0].o = _mm_mask_xor_ps(arg5, arg15[0].o, arg15[0].o)
            int64_t k1_4
            int64_t temp0_21
            temp0_21, k1_4 = _mm256_mmask_i32gather_ps(k1_3, *(arg18 + arg14[0].q))
            arg15 = temp0_21
            arg7 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg7, 8)
            int64_t k1_5 = _kxnor_mask16(arg5, arg5)
            arg14[0].o = _mm_mask_xor_ps(arg5, arg14[0].o, arg14[0].o)
            int64_t k1_6
            int64_t temp0_24
            temp0_24, k1_6 = _mm256_mmask_i32gather_ps(k1_5, *(arg18 + arg7[0].q))
            arg14 = temp0_24
            float var_2a0_1[0x8] = arg8
            float var_280_1[0x8] = _mm256_mask_store_ps(arg5, arg15)
            float var_260_1[0x8] = _mm256_mask_store_ps(arg5, arg14)
            float var_240_1[0x8] = zmm0
            arg7 = _mm256_broadcast_ss(arg17[3])
            float var_320_1[0x8] = arg7
            float var_300_1[0x8] = arg7
            float var_2e0_1[0x8] = arg7
            float var_2c0_1[0x8] = arg7
            zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg17[1])
            zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg17[2])
            zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg17)
            zmm21 = _mm256_mask_mul_ps(arg5, arg15, zmm19)
            zmm22 = _mm256_mask_mul_ps(arg5, arg14, zmm20)
            zmm23 = _mm256_mask_mul_ps(arg5, arg8, zmm18)
            arg14 = _mm256_mask3_fmsub_ps(arg14, arg5, zmm18, zmm21)
            arg8 = _mm256_mask3_fmsub_ps(arg8, arg5, zmm19, zmm22)
            arg15 = _mm256_mask3_fmsub_ps(arg15, arg5, zmm20, zmm23)
            arg14 = _mm256_mask_add_ps(arg5, arg14, arg14)
            arg8 = _mm256_add_ps(arg8, arg8)
            arg15 = _mm256_mask_add_ps(arg5, arg15, arg15)
            zmm21 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_2a0_1), arg5, arg7, arg14)
            zmm22 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_280_1), arg5, arg7, arg8)
            arg7 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg7, arg5, arg15, var_260_1)
            zmm23 = _mm256_mask_mul_ps(arg5, arg8, zmm19)
            zmm24 = _mm256_mask_mul_ps(arg5, arg15, zmm20)
            zmm25 = _mm256_mask_mul_ps(arg5, arg14, zmm18)
            arg15 =
                _mm256_mask_add_ps(arg5, zmm21, _mm256_mask3_fmsub_ps(zmm23, arg5, arg15, zmm18))
            zmm18 =
                _mm256_mask_add_ps(arg5, zmm22, _mm256_mask3_fmsub_ps(zmm24, arg5, arg14, zmm19))
            arg8 = _mm256_mask_add_ps(arg5, arg7, _mm256_mask3_fmsub_ps(zmm25, arg5, arg8, zmm20))
            arg14 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg15, arg17[4])
            arg7 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm18, arg17[5])
            arg8 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg8, arg17[6])
            arg15 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, var_330)
            int64_t k1_7 = _mm256_cmp_ps_mask(arg5, arg15, arg14, 1)
            _kortest_mask8_u8(k1_7, k1_7)
            
            if (temp1_1 != 0)
                var_320_1 = _mm256_mask_storeu_ps(k1_7, arg15)
            
            int64_t k1_8 = _mm256_cmp_ps_mask(arg5, arg15, arg14, 5)
            _kortest_mask8_u8(k1_8, k1_8)
            
            if (temp1_1 != 0)
                arg15 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, var_340)
                int64_t k2_1 = _mm256_cmp_ps_mask(k1_8, arg14, arg15, 1)
                _kortest_mask8_u8(k2_1, k2_1)
                
                if (temp1_1 != 0)
                    var_320_1 = _mm256_mask_storeu_ps(k2_1, arg15)
                
                int64_t k1_9 = _mm256_cmp_ps_mask(k1_8, arg14, arg15, 5)
                _kortest_mask8_u8(k1_9, k1_9)
                
                if (temp1_1 != 0)
                    var_320_1 = _mm256_mask_storeu_ps(k1_9, arg14)
            
            arg15 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, temp0_6)
            int64_t k1_10 = _mm256_cmp_ps_mask(arg5, arg15, arg7, 1)
            _kortest_mask8_u8(k1_10, k1_10)
            
            if (temp1_1 != 0)
                var_300_1 = _mm256_mask_storeu_ps(k1_10, arg15)
            
            int64_t k1_11 = _mm256_cmp_ps_mask(arg5, arg15, arg7, 5)
            _kortest_mask8_u8(k1_11, k1_11)
            
            if (temp1_1 != 0)
                arg15 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, temp0_11)
                int64_t k2_2 = _mm256_cmp_ps_mask(k1_11, arg7, arg15, 1)
                _kortest_mask8_u8(k2_2, k2_2)
                
                if (temp1_1 != 0)
                    var_300_1 = _mm256_mask_storeu_ps(k2_2, arg15)
                
                int64_t k1_12 = _mm256_cmp_ps_mask(k1_11, arg7, arg15, 5)
                _kortest_mask8_u8(k1_12, k1_12)
                
                if (temp1_1 != 0)
                    var_300_1 = _mm256_mask_storeu_ps(k1_12, arg7)
            
            arg15 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, temp0_7)
            int64_t k1_13 = _mm256_cmp_ps_mask(arg5, arg15, arg8, 1)
            _kortest_mask8_u8(k1_13, k1_13)
            
            if (temp1_1 != 0)
                var_2e0_1 = _mm256_mask_storeu_ps(k1_13, arg15)
            
            int64_t k1_14 = _mm256_cmp_ps_mask(arg5, arg15, arg8, 5)
            _kortest_mask8_u8(k1_14, k1_14)
            
            if (temp1_1 != 0)
                arg15 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, temp0_12)
                int64_t k2_3 = _mm256_cmp_ps_mask(k1_14, arg8, arg15, 1)
                _kortest_mask8_u8(k2_3, k2_3)
                
                if (temp1_1 != 0)
                    var_2e0_1 = _mm256_mask_storeu_ps(k2_3, arg15)
                
                int64_t k1_15 = _mm256_cmp_ps_mask(k1_14, arg8, arg15, 5)
                _kortest_mask8_u8(k1_15, k1_15)
                
                if (temp1_1 != 0)
                    var_2e0_1 = _mm256_mask_storeu_ps(k1_15, arg8)
            
            zmm19 = _mm256_mask_load_ps(arg5, var_320_1)
            arg15 = _mm256_mask_load_ps(arg5, var_300_1)
            zmm18 = _mm256_mask_load_ps(arg5, var_2e0_1)
            zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
            zmm21 = _mm256_mask_sub_ps(arg5, zmm19, zmm23)
            zmm24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *(arg1 + 4))
            zmm22 = _mm256_mask_sub_ps(arg5, arg15, zmm24)
            zmm25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1].d)
            zmm26 = _mm256_mask_sub_ps(arg5, zmm18, zmm25)
            zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
            zmm27 = _mm256_mask_div_ps(arg5, zmm21, zmm20)
            zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *(arg3 + 4))
            zmm28 = _mm256_mask_div_ps(arg5, zmm22, zmm21)
            zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1].d)
            zmm26 = _mm256_mask_div_ps(arg5, zmm26, zmm22)
            zmm27 = _mm256_mask_cvttps_epi32(arg5, zmm27)
            arg10 = _mm256_mask_cvttps_epi32(arg5, zmm28)
            zmm30 = _mm256_mask_cvttps_epi32(arg5, zmm26)
            zmm26 = _mm256_mask_cvtepi32_ps(arg5, zmm27)
            zmm31 = _mm256_mask_cvtepi32_ps(arg5, arg10)
            arg11 = _mm256_mask_cvtepi32_ps(arg5, zmm30)
            zmm26 = _mm256_mask3_fmadd_ps(zmm26, arg5, zmm20, zmm23)
            zmm31 = _mm256_mask3_fmadd_ps(zmm31, arg5, zmm21, zmm24)
            arg11 = _mm256_mask3_fmadd_ps(arg11, arg5, zmm22, zmm25)
            arg9[0].o = __vmovsd_xmmdq_memq(*arg3)
            arg9[0].o = __vdivps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg12[0].o)
            zmm28 = _mm256_mask_broadcastss_ps(arg5, arg9[0].o)
            zmm26 = _mm256_mask_add_ps(arg5, zmm28, zmm26)
            zmm1[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
            zmm29 = _mm256_mask_broadcastsd_pd(arg5, zmm1[0].o)
            zmm1 = _mm256_mask_add_ps(arg5, zmm29, zmm31)
            arg9[0].o = _mm_permute_ps(arg9[0].o, 0xea)
            zmm31 = _mm256_mask_broadcastsd_pd(arg5, arg9[0].o)
            int64_t k1_16 = _mm256_cmp_ps_mask(arg5, zmm26, zmm19, 1)
            arg9 = _mm256_mask_add_epi32(arg5, zmm27, arg6)
            zmm26 = _mm256_mask_blend_epi32(k1_16, arg9, zmm27)
            uint64_t var_320_2[0x4] = _mm256_mask_store_epi64(arg5, zmm26)
            int64_t k1_17 = _mm256_cmp_ps_mask(arg5, zmm1, arg15, 1)
            _kortest_mask8_u8(k1_17, k1_17)
            
            if (temp1_1 != 0)
                zmm27 = _mm256_mask_mov_epi64(arg5, arg10)
            
            arg11 = _mm256_mask_add_ps(arg5, zmm31, arg11)
            
            if (temp1_1 u>= 0)
                arg9 = _mm256_add_epi32(arg10, arg6)
            
            arg10 = _mm256_mask_blend_epi32(k1_17, arg9, zmm27)
            int32_t var_300_2[0x8] = arg10
            int64_t k1_18 = _mm256_cmp_ps_mask(arg5, arg11, zmm18, 1)
            _kortest_mask8_u8(k1_18, k1_18)
            
            if (temp1_1 != 0)
                zmm27 = _mm256_mask_mov_epi64(arg5, zmm30)
            
            if (temp1_1 u>= 0)
                _mm256_mask_add_epi32(arg5, zmm30, arg6)
            
            arg9 = _mm256_mask_mov_epi32(k1_18, zmm27)
            zmm1 = _mm256_mask_cvtepi32_ps(arg5, zmm26)
            zmm27 = _mm256_mask_cvtepi32_ps(arg5, arg10)
            zmm30 = _mm256_mask_cvtepi32_ps(arg5, arg9)
            zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, zmm20, zmm23)
            zmm27 = _mm256_mask3_fmadd_ps(zmm27, arg5, zmm21, zmm24)
            zmm30 = _mm256_mask3_fmadd_ps(zmm30, arg5, zmm22, zmm25)
            zmm1 = _mm256_mask_add_ps(arg5, zmm28, zmm1)
            zmm23 = _mm256_mask_add_ps(arg5, zmm29, zmm27)
            zmm24 = _mm256_mask_add_ps(arg5, zmm31, zmm30)
            zmm1 = _mm256_mask_sub_ps(arg5, zmm19, zmm1)
            zmm23 = _mm256_mask_sub_ps(arg5, arg15, zmm23)
            zmm24 = _mm256_mask_sub_ps(arg5, zmm18, zmm24)
            zmm1 = _mm256_mask_div_ps(arg5, zmm1, zmm20)
            zmm20 = _mm256_mask_div_ps(arg5, zmm23, zmm21)
            zmm21 = _mm256_mask_div_ps(arg5, zmm24, zmm22)
            float var_2a0_2[0x8] = zmm1
            float var_280_2[0x8] = _mm256_mask_store_ps(arg5, zmm20)
            float var_260_2[0x8] = _mm256_mask_store_ps(arg5, zmm21)
            int64_t k1_19 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm26, arg6)
            _kortest_mask8_u8(k1_19, k1_19)
            
            if (temp1_1 != 0)
                var_320_2 = _mm256_mask_storeu_epi32(k1_19, zmm0)
                var_2a0_2 = _mm256_mask_storeu_ps(k1_19, zmm0)
                zmm26 = _mm256_mask_load_epi64(arg5, var_320_2)
            
            int32_t rax_4 = *arg4
            int64_t k1_20 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm26, 
                _mm256_mask_set1_epi32(arg5, rax_4 - 1))
            _kortest_mask8_u8(k1_20, k1_20)
            
            if (temp1_1 != 0)
                cond:38_1 = rax_4 == 2
                cond:40_1 = rax_4 == 2
                cond:42_1 = rax_4 == 2
                cond:44_1 = rax_4 == 2
                cond:46_1 = rax_4 == 2
                cond:48_1 = rax_4 == 2
                var_320_2 = _mm256_mask_storeu_epi32(k1_20, _mm256_mask_set1_epi32(arg5, rax_4 - 2))
                var_2a0_2 = _mm256_mask_storeu_ps(k1_20, 
                    __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1f))
            
            zmm20 = _mm256_mask_load_epi64(arg5, var_300_2)
            int64_t k1_21 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm20, arg6)
            _kortest_mask8_u8(k1_21, k1_21)
            
            if (not(cond:38_1))
                var_300_2 = _mm256_mask_storeu_epi32(k1_21, zmm0)
                var_280_2 = _mm256_mask_storeu_ps(k1_21, zmm0)
                zmm20 = _mm256_mask_load_epi64(arg5, var_300_2)
            
            zmm19 = _mm256_mask_sub_ps(arg5, zmm19, arg14)
            int32_t rax_6 = arg4[1]
            int64_t k1_22 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm20, 
                _mm256_mask_set1_epi32(arg5, rax_6 - 1))
            _kortest_mask8_u8(k1_22, k1_22)
            
            if (not(cond:40_1))
                cond:42_1 = rax_6 == 2
                cond:44_1 = rax_6 == 2
                cond:46_1 = rax_6 == 2
                cond:48_1 = rax_6 == 2
                var_300_2 = _mm256_mask_storeu_epi32(k1_22, _mm256_mask_set1_epi32(arg5, rax_6 - 2))
                var_280_2 = _mm256_mask_storeu_ps(k1_22, _mm256_broadcast_ss(1f))
            
            arg8 = _mm256_mask_sub_ps(arg5, zmm18, arg8)
            arg7 = _mm256_mask_sub_ps(arg5, arg15, arg7)
            zmm19 = _mm256_mask3_fmadd_ps(zmm19, arg5, zmm19, zmm0)
            arg14 = _mm256_mask_load_epi64(arg5, arg9)
            int64_t k1_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg14, arg6)
            _kortest_mask8_u8(k1_23, k1_23)
            
            if (not(cond:42_1))
                uint64_t var_2e0_3[0x4] = _mm256_mask_storeu_epi32(k1_23, zmm0)
                var_260_2 = _mm256_mask_storeu_ps(k1_23, zmm0)
                arg14 = _mm256_mask_load_epi64(arg5, var_2e0_3)
            
            arg8 = _mm256_mul_ps(arg8, arg8)
            arg7 = _mm256_mask3_fmadd_ps(arg7, arg5, arg7, zmm19)
            int32_t rax_8 = arg4[2]
            int64_t k1_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg14, 
                _mm256_mask_set1_epi32(arg5, rax_8 - 1))
            _kortest_mask8_u8(k1_24, k1_24)
            
            if (not(cond:44_1))
                cond:46_1 = rax_8 == 2
                cond:48_1 = rax_8 == 2
                uint64_t var_2e0_4[0x4] =
                    _mm256_mask_storeu_epi32(k1_24, _mm256_mask_set1_epi32(arg5, rax_8 - 2))
                var_260_2 = _mm256_mask_storeu_ps(k1_24, _mm256_broadcast_ss(1f))
                arg14 = _mm256_mask_load_epi64(arg5, var_2e0_4)
            
            zmm1 = __vpbroadcastd_ymmqq_memd(*(arg16 + 4))
            arg15 = _mm256_mask_load_epi64(arg5, var_320_2)
            zmm18 = _mm256_mask_load_epi64(arg5, var_300_2)
            zmm19 = _mm256_mask_mullo_epi32(arg5, zmm1, arg15)
            zmm20 = _mm256_mask_add_epi32(arg5, zmm19, zmm18)
            zmm21 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, *(arg16 + 8))
            zmm20 = _mm256_mask_mullo_epi32(arg5, zmm20, zmm21)
            zmm22 = _mm256_mask_add_epi32(arg5, zmm20, arg14)
            int64_t rax_11 = *(arg16 + 0x10)
            zmm22 = _mm256_mask_slli_epi32(arg5, zmm22, 2)
            zmm23[0].o = _mm_mask_xor_ps(arg5, zmm23[0].o, zmm23[0].o)
            int64_t k1_26
            int64_t temp0_175
            temp0_175, k1_26 =
                _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rax_11 + zmm22[0].q))
            zmm23 = temp0_175
            zmm1 = _mm256_mask_mullo_epi32(arg5, zmm1, _mm256_mask_sub_epi32(arg5, arg15, arg6))
            arg15 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm1, zmm18), zmm21)
            zmm22 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, arg15, arg14), 2)
            zmm24[0].o = _mm_mask_xor_ps(arg5, zmm24[0].o, zmm24[0].o)
            int64_t k1_28
            int64_t temp0_183
            temp0_183, k1_28 =
                _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rax_11 + zmm22[0].q))
            zmm22 = _mm256_mask_load_ps(arg5, var_2a0_2)
            zmm25 = _mm256_mask_load_ps(arg5, var_280_2)
            zmm18 = _mm256_mask_sub_epi32(arg5, zmm18, arg6)
            zmm19 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm19, zmm18), zmm21)
            zmm26 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm19, arg14), 2)
            zmm27[0].o = _mm_mask_xor_ps(arg5, zmm27[0].o, zmm27[0].o)
            int64_t k1_30
            int64_t temp0_192
            temp0_192, k1_30 =
                _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rax_11 + zmm26[0].q))
            zmm27 = temp0_192
            zmm1 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm1, zmm18), zmm21)
            zmm18 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm1, arg14), 2)
            zmm21[0].o = _mm_mask_xor_epi32(arg5, zmm21[0].o, zmm21[0].o)
            int64_t k1_32
            int64_t temp0_198
            temp0_198, k1_32 =
                _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rax_11 + zmm18[0].q))
            arg14 = _mm256_mask_sub_epi32(arg5, arg14, arg6)
            zmm18 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm20, arg14), 2)
            zmm20[0].o = _mm_mask_xor_epi32(arg5, zmm20[0].o, zmm20[0].o)
            int64_t k1_34
            int64_t temp0_203
            temp0_203, k1_34 =
                _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rax_11 + zmm18[0].q))
            zmm20 = temp0_203
            arg15 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, arg15, arg14), 2)
            zmm18[0].o = _mm_mask_xor_ps(arg5, zmm18[0].o, zmm18[0].o)
            int64_t k1_36
            int64_t temp0_207
            temp0_207, k1_36 =
                _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rax_11 + arg15[0].q))
            arg8 = _mm256_add_ps(arg7, arg8)
            arg7 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_183, zmm23), arg5, zmm22, 
                zmm23)
            arg15 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm19, arg14), 2)
            zmm19[0].o = _mm_mask_xor_epi32(arg5, zmm19[0].o, zmm19[0].o)
            int64_t k1_38
            int64_t temp0_214
            temp0_214, k1_38 =
                _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rax_11 + arg15[0].q))
            zmm19 = temp0_214
            arg15 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_198, zmm27), arg5, zmm22, 
                zmm27)
            zmm18 = _mm256_mask_sub_ps(arg5, temp0_207, zmm20)
            zmm1 = _mm256_slli_epi32(_mm256_mask_add_epi32(arg5, zmm1, arg14), 2)
            arg14[0].o = _mm_mask_xor_epi32(arg5, arg14[0].o, arg14[0].o)
            int64_t k1_40
            int64_t temp0_221
            temp0_221, k1_40 =
                _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rax_11 + zmm1[0].q))
            zmm18 = _mm256_mask3_fmadd_ps(zmm18, arg5, zmm22, zmm20)
            zmm1 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_221, zmm19), arg5, zmm22, 
                zmm19)
            arg14 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, arg15, arg7), arg5, zmm25, arg7)
            zmm1 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, zmm1, zmm18), arg5, zmm25, zmm18)
            arg7 = __vfmadd132ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                _mm256_mask_sub_ps(arg5, zmm1, arg14), arg5, arg14, var_260_2)
            int64_t k1_41 = _mm256_cmp_ps_mask(arg5, arg8, zmm0, 0xc)
            _kortest_mask8_u8(k1_41, k1_41)
            
            if (not(cond:46_1))
                arg14 = _mm256_mask_rsqrt14_ps(arg5, arg8)
                arg8 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                    _mm256_mask_mul_ps(arg5, arg14, 
                        __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                            _mm256_mask_mul_ps(arg5, arg8, arg14), arg5, arg14, 0x40400000)), 
                    0x3f000000)
                arg14 = _mm256_mask_rcp14_ps(arg5, arg8)
                arg8 = __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg8, arg5, arg14, 
                    0x40000000)
                arg7 = _mm256_mask3_fmadd_ps(arg7, k1_41, arg14, arg8)
            
            arg5 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, arg7, *arg21, 1)
            _kortest_mask8_u8(arg5, arg5)
            
            if (cond:48_1)
                result = 0
                rdi = zx.q(rdi.d + 8)
                
                if (rdi.d s>= r13_4)
                    break
                
                continue
            else
                uint64_t i = zx.q(_cvtmask32_u32(arg5))
                result = 0
                
                do
                    uint64_t r12_1 = _tzcnt_u64(i)
                    i &= not.q(1 << (r12_1 u% 0x40))
                    
                    if ((result.b & 1) == 0)
                        float var_1e0[0x8] = arg7
                        uint64_t r12_2 = zx.q(r12_1.d) & 7
                        arg8[0].o = var_1e0[r12_2]
                        *arg21 = arg8[0]
                        float var_1c0[0x8] = zmm3
                        *arg20 = var_1c0[r12_2]
                    
                    result.b = 1
                while (i != 0)
        
        rdi = zx.q(rdi.d + 8)
        
        if (rdi.d s>= r13_4)
            break

if (rdi.d s< arg22)
    bool cond:0_1 = result.b != 0
    result.b = 1
    
    if (not(cond:0_1))
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rdi.d), data_142fc93a0)
        arg6 = _mm256_mask_set1_epi32(arg5, arg22)
        uint64_t k1_42 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, arg6, zmm1)
        int32_t rdi_1 = rdi.d << 2
        bool cond:39_1 = rdi_1 == 0
        bool cond:41_1 = rdi_1 == 0
        bool cond:43_1 = rdi_1 == 0
        bool cond:45_1 = rdi_1 == 0
        bool cond:47_1 = rdi_1 == 0
        bool cond:49_1 = rdi_1 == 0
        zmm0 = _mm256_mask_loadu_epi32(k1_42, *(arg19 + sx.q(rdi_1)))
        zmm3 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 3)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k2_5
        int64_t temp0_246
        temp0_246, k2_5 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), 
            *(arg18 + (zmm3[0].q << 2)))
        arg7 = temp0_246
        zmm3 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        arg8 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 4)
        arg14[0].o = _mm_mask_xor_ps(arg5, arg14[0].o, arg14[0].o)
        int64_t k2_7
        int64_t temp0_250
        temp0_250, k2_7 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), *(arg18 + arg8[0].q))
        arg14 = temp0_250
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm3, 8)
        arg15[0].o = _mm_mask_xor_ps(arg5, arg15[0].o, arg15[0].o)
        int64_t k2_9
        int64_t temp0_254
        temp0_254, k2_9 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), *(arg18 + zmm3[0].q))
        arg15 = temp0_254
        float var_1a0_1[0x8] = arg7
        float var_180_1[0x8] = _mm256_mask_store_ps(arg5, arg14)
        float var_160_1[0x8] = _mm256_mask_store_ps(arg5, arg15)
        float var_140_1[0x8] = arg8
        zmm3 = _mm256_broadcast_ss(arg17[3])
        float var_320_3[0x8] = zmm3
        float var_300_3[0x8] = zmm3
        float var_2e0_5[0x8] = zmm3
        float var_2c0_2[0x8] = zmm3
        zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg17[1])
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg17[2])
        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg17)
        arg8 = _mm256_mul_ps(zmm3, arg8)
        zmm21 = _mm256_mask_mul_ps(arg5, arg14, zmm19)
        zmm22 = _mm256_mask_mul_ps(arg5, arg15, zmm20)
        zmm23 = _mm256_mask_mul_ps(arg5, arg7, zmm18)
        zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm18, arg15)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm19, arg7)
        zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, zmm20, arg14)
        arg7 = _mm256_sub_ps(arg8, arg8)
        arg8 = _mm256_mask_add_ps(arg5, zmm21, zmm21)
        arg14 = _mm256_mask_add_ps(arg5, zmm22, zmm22)
        arg15 = _mm256_mask_add_ps(arg5, zmm23, zmm23)
        float var_2a0_3[0x8] = arg8
        int256_t var_280_3 = _mm256_mask_store_ps(arg5, arg14)
        int256_t var_260_3 = _mm256_mask_store_ps(arg5, arg15)
        arg7 = _mm256_add_ps(arg7, arg7)
        float var_240_2[0x8] = arg7
        zmm18 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1a0_1), arg5, zmm3, arg8)
        zmm19 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_180_1), arg5, zmm3, arg14)
        zmm20 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_160_1), arg5, zmm3, arg15)
        arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, zmm3, var_140_1)
        int256_t var_120_1 = _mm256_mask_store_ps(arg5, zmm18)
        int256_t var_100_1 = _mm256_mask_store_ps(arg5, zmm19)
        int256_t var_e0_1 = _mm256_mask_store_ps(arg5, zmm20)
        float var_c0_1[0x8] = arg7
        zmm3 = _mm256_broadcast_ss(arg17[1])
        arg7 = _mm256_broadcast_ss(arg17[2])
        zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg17)
        zmm22 = _mm256_mask_mul_ps(arg5, arg14, arg7)
        zmm23 = _mm256_mask_mul_ps(arg5, arg15, zmm21)
        zmm24 = _mm256_mask_mul_ps(arg5, arg8, zmm3)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, arg15, zmm3)
        zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, arg8, arg7)
        zmm24 = _mm256_mask3_fmsub_ps(zmm24, arg5, arg14, zmm21)
        zmm3 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
        arg7 = _mm256_mask_add_ps(arg5, zmm19, zmm23)
        arg14 = _mm256_mask_add_ps(arg5, zmm20, zmm24)
        arg8 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, arg17[4])
        arg7 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg7, arg17[5])
        arg13 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg14, arg17[6])
        arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, var_330)
        int64_t k0 = _mm256_cmp_ps_mask(k1_42, arg14, arg8, 1)
        _kortest_mask8_u8(k0, k0)
        
        if (rdi_1 != 0)
            var_320_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0, arg14, arg8, 1), arg14)
        
        int64_t k0_1 = _mm256_cmp_ps_mask(k1_42, arg14, arg8, 5)
        _kortest_mask8_u8(k0_1, k0_1)
        
        if (rdi_1 != 0)
            int64_t k2_11 = _mm256_cmp_ps_mask(k0_1, arg14, arg8, 5)
            arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_1, var_340)
            int64_t k3_1 = _mm256_cmp_ps_mask(k2_11, arg8, arg14, 1)
            int64_t k0_2 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_1, arg6, zmm1)
            _kortest_mask8_u8(k0_2, k0_2)
            
            if (rdi_1 != 0)
                var_320_3 = _mm256_mask_storeu_ps(k3_1, arg14)
            
            int64_t k2_12 = _mm256_cmp_ps_mask(k2_11, arg8, arg14, 5)
            k0_1 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_12, arg6, zmm1)
            _kortest_mask8_u8(k0_1, k0_1)
            
            if (rdi_1 != 0)
                var_320_3 = _mm256_mask_storeu_ps(k2_12, arg8)
        
        arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_1, temp0_6)
        int64_t k0_3 = _mm256_cmp_ps_mask(k1_42, arg14, arg7, 1)
        _kortest_mask8_u8(k0_3, k0_3)
        
        if (rdi_1 != 0)
            var_300_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_3, arg14, arg7, 1), arg14)
        
        int64_t k0_4 = _mm256_cmp_ps_mask(k1_42, arg14, arg7, 5)
        _kortest_mask8_u8(k0_4, k0_4)
        
        if (rdi_1 != 0)
            int64_t k2_14 = _mm256_cmp_ps_mask(k0_4, arg14, arg7, 5)
            arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_4, temp0_11)
            int64_t k3_2 = _mm256_cmp_ps_mask(k2_14, arg7, arg14, 1)
            int64_t k0_5 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_2, arg6, zmm1)
            _kortest_mask8_u8(k0_5, k0_5)
            
            if (rdi_1 != 0)
                var_300_3 = _mm256_mask_storeu_ps(k3_2, arg14)
            
            int64_t k2_15 = _mm256_cmp_ps_mask(k2_14, arg7, arg14, 5)
            k0_4 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_15, arg6, zmm1)
            _kortest_mask8_u8(k0_4, k0_4)
            
            if (rdi_1 != 0)
                var_300_3 = _mm256_mask_storeu_ps(k2_15, arg7)
        
        arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_4, temp0_7)
        int64_t k0_6 = _mm256_cmp_ps_mask(k1_42, arg14, arg13, 1)
        _kortest_mask8_u8(k0_6, k0_6)
        
        if (rdi_1 != 0)
            var_2e0_5 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_6, arg14, arg13, 1), arg14)
        
        int64_t k0_7 = _mm256_cmp_ps_mask(k1_42, arg14, arg13, 5)
        _kortest_mask8_u8(k0_7, k0_7)
        
        if (rdi_1 != 0)
            int64_t k2_17 = _mm256_cmp_ps_mask(k0_7, arg14, arg13, 5)
            arg14 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, temp0_12)
            int64_t k3_3 = _mm256_cmp_ps_mask(k2_17, arg13, arg14, 1)
            int64_t k0_8 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_3, arg6, zmm1)
            _kortest_mask8_u8(k0_8, k0_8)
            
            if (rdi_1 != 0)
                var_2e0_5 = _mm256_mask_storeu_ps(k3_3, arg14)
            
            int64_t k2_18 = _mm256_cmp_ps_mask(k2_17, arg13, arg14, 5)
            k0_7 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_18, arg6, zmm1)
            _kortest_mask8_u8(k0_7, k0_7)
            
            if (rdi_1 != 0)
                var_2e0_5 = _mm256_mask_storeu_ps(k2_18, arg13)
        
        zmm18 = _mm256_mask_load_ps(k0_7, var_320_3)
        arg15 = _mm256_mask_load_ps(k0_7, var_300_3)
        arg14 = _mm256_mask_load_ps(k0_7, var_2e0_5)
        zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, *arg1)
        zmm19 = _mm256_mask_sub_ps(k0_7, zmm18, zmm22)
        zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, *(arg1 + 4))
        zmm25 = _mm256_mask_sub_ps(k0_7, arg15, zmm23)
        zmm24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, arg1[1].d)
        zmm26 = _mm256_mask_sub_ps(k0_7, arg14, zmm24)
        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, *arg3)
        zmm27 = _mm256_mask_div_ps(k0_7, zmm19, zmm20)
        zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, *(arg3 + 4))
        zmm25 = _mm256_mask_div_ps(k0_7, zmm25, zmm21)
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, arg3[1].d)
        zmm28 = _mm256_mask_div_ps(k0_7, zmm26, zmm19)
        zmm26 = _mm256_mask_cvttps_epi32(k0_7, zmm27)
        arg10 = _mm256_mask_cvttps_epi32(k0_7, zmm25)
        zmm28 = _mm256_mask_cvttps_epi32(k0_7, zmm28)
        zmm25 = _mm256_mask_cvtepi32_ps(k0_7, zmm26)
        zmm30 = _mm256_mask_cvtepi32_ps(k0_7, arg10)
        arg11 = _mm256_mask_cvtepi32_ps(k0_7, zmm28)
        zmm25 = _mm256_mask3_fmadd_ps(zmm25, k0_7, zmm20, zmm22)
        zmm30 = _mm256_mask3_fmadd_ps(zmm30, k0_7, zmm21, zmm23)
        arg11 = _mm256_mask3_fmadd_ps(arg11, k0_7, zmm19, zmm24)
        arg9[0].o = __vmovsd_xmmdq_memq(*arg3)
        zmm27 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, 2f)
        arg9[0].o = _mm_mask_div_ps(k0_7, arg9[0].o, zmm27[0].o)
        zmm27 = _mm256_mask_broadcastss_ps(k0_7, arg9[0].o)
        zmm25 = _mm256_mask_add_ps(k0_7, zmm27, zmm25)
        zmm3[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
        zmm29 = _mm256_mask_broadcastsd_pd(k0_7, zmm3[0].o)
        arg12 = _mm256_mask_add_ps(k0_7, zmm29, zmm30)
        zmm3[0].o = _mm_permute_ps(arg9[0].o, 0xea)
        zmm30 = _mm256_mask_broadcastsd_pd(k0_7, zmm3[0].o)
        int64_t k2_19 = _mm256_cmp_ps_mask(k0_7, zmm25, zmm18, 1)
        arg9 = _mm256_cmpeq_epi32(arg9, arg9)
        zmm31 = _mm256_mask_add_epi32(k0_7, zmm26, arg9)
        zmm25 = _mm256_mask_blend_epi32(k2_19, zmm31, zmm26)
        uint64_t var_320_4[0x4] = _mm256_mask_store_epi64(k0_7, zmm25)
        int64_t k0_9 = _mm256_cmp_ps_mask(k1_42, arg12, arg15, 1)
        _kortest_mask8_u8(k0_9, k0_9)
        
        if (rdi_1 != 0)
            zmm26 = _mm256_mask_mov_epi64(k0_9, arg10)
        
        arg11 = _mm256_mask_add_ps(k0_9, zmm30, arg11)
        int64_t k2_20 = _mm256_cmp_ps_mask(k0_9, arg12, arg15, 1)
        int64_t k0_10 = _mm256_cmp_ps_mask(k1_42, arg12, arg15, 5)
        _kortest_mask8_u8(k0_10, k0_10)
        
        if (rdi_1 != 0)
            zmm31 = _mm256_mask_add_epi32(k0_10, arg10, arg9)
        
        arg10 = _mm256_mask_blend_epi32(k2_20, zmm31, zmm26)
        int32_t var_300_4[0x8] = arg10
        int64_t k0_11 = _mm256_cmp_ps_mask(k1_42, arg11, arg14, 1)
        _kortest_mask8_u8(k0_11, k0_11)
        
        if (rdi_1 != 0)
            zmm26 = _mm256_mask_mov_epi64(k0_11, zmm28)
        
        int64_t k2_21 = _mm256_cmp_ps_mask(k0_11, arg11, arg14, 1)
        int64_t k0_12 = _mm256_cmp_ps_mask(k1_42, arg11, arg14, 5)
        _kortest_mask8_u8(k0_12, k0_12)
        
        if (rdi_1 != 0)
            _mm256_mask_add_epi32(k0_12, zmm28, arg9)
        
        zmm31 = _mm256_mask_mov_epi32(k2_21, zmm26)
        float var_2e0_6[0x8] = _mm256_mask_store_epi64(k0_12, zmm31)
        zmm3 = _mm256_mask_cvtepi32_ps(k0_12, zmm25)
        zmm26 = _mm256_mask_cvtepi32_ps(k0_12, arg10)
        zmm28 = _mm256_mask_cvtepi32_ps(k0_12, zmm31)
        zmm3 = _mm256_mask3_fmadd_ps(zmm3, k0_12, zmm20, zmm22)
        zmm26 = _mm256_mask3_fmadd_ps(zmm26, k0_12, zmm21, zmm23)
        zmm28 = _mm256_mask3_fmadd_ps(zmm28, k0_12, zmm19, zmm24)
        zmm3 = _mm256_mask_add_ps(k0_12, zmm27, zmm3)
        zmm22 = _mm256_mask_add_ps(k0_12, zmm29, zmm26)
        zmm23 = _mm256_mask_add_ps(k0_12, zmm30, zmm28)
        zmm3 = _mm256_mask_sub_ps(k0_12, zmm18, zmm3)
        zmm22 = _mm256_mask_sub_ps(k0_12, arg15, zmm22)
        zmm23 = _mm256_mask_sub_ps(k0_12, arg14, zmm23)
        float var_2a0_4[0x8] = _mm256_mask_div_ps(k0_12, zmm3, zmm20)
        float var_280_4[0x8] = _mm256_mask_store_ps(k0_12, _mm256_mask_div_ps(k0_12, zmm22, zmm21))
        float var_260_4[0x8] = _mm256_mask_div_ps(k0_12, zmm23, zmm19)
        int64_t k0_13 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
            __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_12, zmm25, arg9), arg6, zmm1)
        _kortest_mask8_u8(k0_13, k0_13)
        
        if (rdi_1 != 0)
            arg9 = _mm256_cmpeq_epi32(arg9, arg9)
            int64_t k2_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_13, zmm25, arg9)
            zmm19[0].o = _mm_mask_xor_ps(k0_13, zmm19[0].o, zmm19[0].o)
            var_320_4 = _mm256_mask_storeu_epi32(k2_23, zmm19)
            var_2a0_4 = _mm256_mask_storeu_ps(k2_23, zmm19)
            zmm25 = _mm256_mask_load_epi64(k0_13, var_320_4)
        
        int32_t rax_15 = *arg4
        zmm19 = _mm256_mask_set1_epi32(k0_13, rax_15 - 1)
        int64_t k2_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_13, zmm25, zmm19)
        int64_t k0_14 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_24, arg6, zmm1)
        _kortest_mask8_u8(k0_14, k0_14)
        
        if (rdi_1 != 0)
            cond:39_1 = rax_15 == 2
            cond:41_1 = rax_15 == 2
            cond:43_1 = rax_15 == 2
            cond:45_1 = rax_15 == 2
            cond:47_1 = rax_15 == 2
            cond:49_1 = rax_15 == 2
            var_320_4 = _mm256_mask_storeu_epi32(k2_24, _mm256_mask_set1_epi32(k0_14, rax_15 - 2))
            zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_14, 1f)
            var_2a0_4 = _mm256_mask_storeu_ps(k2_24, zmm19)
        
        zmm18 = _mm256_mask_sub_ps(k0_14, zmm18, arg8)
        zmm19[0].o = _mm_mask_xor_epi32(k0_14, zmm19[0].o, zmm19[0].o)
        zmm20 = _mm256_mask_load_epi64(k0_14, var_300_4)
        arg8 = _mm256_cmpeq_epi32(arg8, arg8)
        int64_t k2_25 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_14, zmm20, arg8)
        int64_t k0_15 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_25, arg6, zmm1)
        _kortest_mask8_u8(k0_15, k0_15)
        
        if (not(cond:39_1))
            arg8[0].o = zx.o(0)
            var_300_4 = _mm256_mask_storeu_epi32(k2_25, arg8)
            var_280_4 = _mm256_mask_storeu_ps(k2_25, arg8)
            zmm20 = _mm256_mask_load_epi64(k0_15, var_300_4)
        
        arg8 = _mm256_mask_sub_ps(k0_15, arg15, arg7)
        zmm18 = _mm256_mask3_fmadd_ps(zmm18, k0_15, zmm18, zmm19)
        int32_t rdx_2 = arg4[1]
        int64_t k2_26 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_15, zmm20, 
            _mm256_mask_set1_epi32(k0_15, rdx_2 - 1))
        int64_t k0_16 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_26, arg6, zmm1)
        _kortest_mask8_u8(k0_16, k0_16)
        
        if (not(cond:41_1))
            cond:43_1 = rdx_2 == 2
            cond:45_1 = rdx_2 == 2
            cond:47_1 = rdx_2 == 2
            cond:49_1 = rdx_2 == 2
            var_300_4 = _mm256_mask_storeu_epi32(k2_26, _mm256_mask_set1_epi32(k0_16, rdx_2 - 2))
            var_280_4 = _mm256_mask_storeu_ps(k2_26, _mm256_broadcast_ss(1f))
        
        zmm3 = _mm256_mask_sub_ps(k0_16, arg14, arg13)
        arg8 = _mm256_mask3_fmadd_ps(arg8, k0_16, arg8, zmm18)
        arg7 = var_2e0_6
        arg9 = _mm256_cmpeq_epi32(arg9, arg9)
        int64_t k2_27 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_16, arg7, arg9)
        int64_t k0_17 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_27, arg6, zmm1)
        _kortest_mask8_u8(k0_17, k0_17)
        
        if (not(cond:43_1))
            arg7[0].o = zx.o(0)
            float var_2e0_7[0x8] = _mm256_mask_storeu_epi32(k2_27, arg7)
            var_260_4 = _mm256_mask_storeu_ps(k2_27, arg7)
            arg7 = var_2e0_7
        
        zmm3 = _mm256_fmadd_ps(zmm3, zmm3, arg8)
        int32_t rdx_4 = arg4[2]
        int64_t k2_28 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_17, arg7, 
            _mm256_mask_set1_epi32(k0_17, rdx_4 - 1))
        int64_t k0_18 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_28, arg6, zmm1)
        _kortest_mask8_u8(k0_18, k0_18)
        
        if (not(cond:45_1))
            cond:47_1 = rdx_4 == 2
            cond:49_1 = rdx_4 == 2
            float var_2e0_8[0x8] =
                _mm256_mask_storeu_epi32(k2_28, _mm256_mask_set1_epi32(k0_18, rdx_4 - 2))
            var_260_4 = _mm256_mask_storeu_ps(k2_28, _mm256_broadcast_ss(1f))
            arg7 = var_2e0_8
        
        arg6 = __vpbroadcastd_ymmqq_memd(*(arg16 + 4))
        arg8 = var_320_4
        arg14 = _mm256_mask_load_epi64(k0_18, var_300_4)
        arg15 = _mm256_mask_mullo_epi32(k0_18, arg6, arg8)
        zmm18 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(k0_18, *(arg16 + 8))
        zmm19 = _mm256_mask_mullo_epi32(k0_18, _mm256_mask_add_epi32(k0_18, arg15, arg14), zmm18)
        zmm1 = _mm256_mask_add_epi32(k0_18, zmm19, arg7)
        int64_t rax_18 = *(arg16 + 0x10)
        zmm1 = _mm256_slli_epi32(zmm1, 2)
        int64_t k2_29 = __kmovq_maskmskw_masku64_avx512(k1_42)
        zmm20[0].o = _mm_mask_xor_epi32(k0_18, zmm20[0].o, zmm20[0].o)
        int64_t k2_30
        int64_t temp0_421
        temp0_421, k2_30 = _mm256_mmask_i32gather_ps(k2_29, *(rax_18 + zmm1[0].q))
        zmm20 = temp0_421
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        arg6 = _mm256_mullo_epi32(arg6, _mm256_sub_epi32(arg8, zmm1))
        arg8 = _mm256_mask_mullo_epi32(k0_18, _mm256_mask_add_epi32(k0_18, arg6, arg14), zmm18)
        zmm21 = _mm256_mask_slli_epi32(k0_18, _mm256_mask_add_epi32(k0_18, arg8, arg7), 2)
        int64_t k2_31 = __kmovq_maskmskw_masku64_avx512(k1_42)
        zmm22[0].o = _mm_mask_xor_ps(k0_18, zmm22[0].o, zmm22[0].o)
        int64_t k2_32
        int64_t temp0_430
        temp0_430, k2_32 = _mm256_mmask_i32gather_ps(k2_31, *(rax_18 + zmm21[0].q))
        zmm22 = temp0_430
        zmm21 = _mm256_mask_load_ps(k0_18, var_2a0_4)
        zmm23 = _mm256_mask_load_ps(k0_18, var_280_4)
        arg14 = _mm256_mask_sub_epi32(k0_18, arg14, zmm1)
        arg15 = _mm256_mask_mullo_epi32(k0_18, _mm256_mask_add_epi32(k0_18, arg15, arg14), zmm18)
        zmm24 = _mm256_mask_slli_epi32(k0_18, _mm256_mask_add_epi32(k0_18, arg15, arg7), 2)
        int64_t k2_33 = __kmovq_maskmskw_masku64_avx512(k1_42)
        zmm25[0].o = _mm_mask_xor_epi32(k0_18, zmm25[0].o, zmm25[0].o)
        int64_t k2_34
        int64_t temp0_439
        temp0_439, k2_34 = _mm256_mmask_i32gather_ps(k2_33, *(rax_18 + zmm24[0].q))
        zmm25 = temp0_439
        arg6 = _mm256_mask_mullo_epi32(k0_18, _mm256_mask_add_epi32(k0_18, arg6, arg14), zmm18)
        arg14 = _mm256_mask_slli_epi32(k0_18, _mm256_mask_add_epi32(k0_18, arg6, arg7), 2)
        int64_t k2_35 = __kmovq_maskmskw_masku64_avx512(k1_42)
        zmm18[0].o = _mm_mask_xor_epi32(k0_18, zmm18[0].o, zmm18[0].o)
        int64_t k2_36
        int64_t temp0_445
        temp0_445, k2_36 = _mm256_mmask_i32gather_ps(k2_35, *(rax_18 + arg14[0].q))
        zmm1 = _mm256_sub_epi32(arg7, zmm1)
        arg7 = _mm256_slli_epi32(_mm256_mask_add_epi32(k0_18, zmm19, zmm1), 2)
        int64_t k2_37 = __kmovq_maskmskw_masku64_avx512(k1_42)
        arg14[0].o = _mm_mask_xor_ps(k0_18, arg14[0].o, arg14[0].o)
        int64_t k2_38
        int64_t temp0_450
        temp0_450, k2_38 = _mm256_mmask_i32gather_ps(k2_37, *(rax_18 + arg7[0].q))
        arg14 = temp0_450
        arg7 = _mm256_slli_epi32(_mm256_add_epi32(arg8, zmm1), 2)
        int64_t k2_40
        int64_t temp0_453
        temp0_453, k2_40 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), *(rax_18 + arg7[0].q))
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        zmm19 = _mm256_mask_sub_ps(k0_18, zmm22, zmm20)
        arg15 = _mm256_mask_slli_epi32(k0_18, _mm256_mask_add_epi32(k0_18, arg15, zmm1), 2)
        int64_t k2_41 = __kmovq_maskmskw_masku64_avx512(k1_42)
        zmm22[0].o = _mm_mask_xor_ps(k0_18, zmm22[0].o, zmm22[0].o)
        int64_t k2_42
        int64_t temp0_459
        temp0_459, k2_42 = _mm256_mmask_i32gather_ps(k2_41, *(rax_18 + arg15[0].q))
        zmm22 = temp0_459
        zmm19 = _mm256_mask3_fmadd_ps(zmm19, k0_18, zmm21, zmm20)
        arg15 =
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_18, temp0_445, zmm25), k0_18, zmm21, zmm25)
        arg8 = _mm256_mask_sub_ps(k0_18, temp0_453, arg14)
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg6, zmm1), 2)
        int64_t k2_44
        int64_t temp0_466
        temp0_466, k2_44 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_42), *(rax_18 + zmm1[0].q))
        arg8 = _mm256_mask3_fmadd_ps(arg8, k0_18, zmm21, arg14)
        zmm1 =
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_18, temp0_466, zmm22), k0_18, zmm21, zmm22)
        arg6 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_18, arg15, zmm19), k0_18, zmm23, zmm19)
        zmm1 = __vfmadd132ps_ymmqq_ymmqq_memqq(
            _mm256_sub_ps(_mm256_mask3_fmadd_ps(_mm256_sub_ps(zmm1, arg8), k0_18, zmm23, arg8), 
                arg6), 
            arg6, var_260_4)
        int64_t k2_45 = _mm256_cmp_ps_mask(k1_42, zmm3, arg7, 0xc)
        _kortest_mask8_u8(k2_45, k2_45)
        
        if (not(cond:47_1))
            arg6 = _mm256_mask_rsqrt14_ps(k0_18, zmm3)
            arg6 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_18, 
                _mm256_mul_ps(arg6, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(_mm256_mul_ps(zmm3, arg6), 
                        k0_18, arg6, 0x40400000)), 
                0x3f000000)
            zmm3 = _mm256_mask_rcp14_ps(k0_18, arg6)
            arg6 =
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, k0_18, zmm3, 0x40000000)
            zmm1 = _mm256_mask3_fmadd_ps(zmm1, k2_45, zmm3, arg6)
        
        int64_t k0_19 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_42, zmm1, *arg21, 1)
        _kortest_mask8_u8(k0_19, k0_19)
        
        if (cond:49_1)
            result = 0
        else
            uint64_t i_1 = zx.q(_cvtmask32_u32(k0_19))
            result = 0
            
            do
                uint64_t rdx_6 = _tzcnt_u64(i_1)
                i_1 &= not.q(1 << (rdx_6 u% 0x40))
                
                if ((result.b & 1) == 0)
                    float var_220[0x8] = zmm1
                    uint64_t rdx_7 = zx.q(rdx_6.d) & 7
                    arg6[0].o = var_220[rdx_7]
                    *arg21 = arg6[0]
                    float var_200[0x8] = zmm0
                    *arg20 = var_200[rdx_7]
                
                result.b = 1
            while (i_1 != 0)

arg9[0].o = var_98
arg10[0].o = var_88
arg11[0].o = var_78
arg12[0].o = var_68
arg13[0].o = var_58
_mm256_zeroupper()
return result
