// 函数: sub_14004c680
// 地址: 0x14004c680
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
float zmm20[0x8]
zmm20[0].o = zx.o(arg25)
arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
float var_280[0x8] = arg6
float var_2a0[0x8] = arg6
float var_2c0[0x8] = arg6
float zmm1[0x8]
zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg3[1].d, 0x20)
zmm1 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, 0x3f000000)
float zmm2[0x8]
zmm2[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, arg2[1].d, 0x20)
zmm2[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
float var_3f0 = zmm2[0]
float temp0_7 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 1)
float temp0_8 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 2)
zmm2[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, arg1[1].d, 0x20)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
float var_400 = zmm1[0]
float temp0_12 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
float temp0_13 = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
int32_t i = ((arg28 s>> 0x1f u>> 0x1d) + arg28) & 0xfffffff8
float var_2e0[0x8]
uint64_t result
float zmm3[0x8]
float zmm5[0x8]
float zmm16[0x8]
float zmm18[0x8]
float zmm19[0x8]
float zmm21[0x8]
float zmm22[0x8]
uint32_t zmm23[0x8]
float zmm25[0x8]
float zmm26[0x8]
float zmm27[0x8]
float zmm30[0x8]
float zmm31[0x8]

if (i s<= 0)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    var_2e0 = arg6
    result = 0
else
    zmm2 = _mm256_broadcast_ss(arg23[3])
    zmm27[0].o = _mm_mask_load_ss(arg5, *arg23)
    zmm1[0].o = arg23[1]
    arg9[0].o = zx.o(arg23[2])
    zmm3 = _mm256_broadcast_ss(*arg1)
    arg7 = _mm256_broadcast_ss(*(arg1 + 4))
    zmm5 = _mm256_broadcast_ss(arg1[1].d)
    zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
    arg18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *(arg3 + 4))
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1].d)
    arg8[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 2f)
    arg8[0].o = _mm_mask_div_ps(arg5, arg8[0].o, zmm19[0].o)
    zmm19 = _mm256_mask_broadcastss_ps(arg5, arg8[0].o)
    arg6[0].o = __vmovshdup_xmmdq_xmmdq(arg8[0].o)
    zmm21 = _mm256_mask_broadcastsd_pd(arg5, arg6[0].o)
    arg6[0].o = _mm_permute_ps(arg8[0].o, 0xea)
    zmm22 = _mm256_mask_broadcastsd_pd(arg5, arg6[0].o)
    float var_220_1[0x8] = _mm256_broadcast_ss(*(arg22 + 4))
    zmm23 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, *(arg22 + 8))
    int64_t rsi_1 = *(arg22 + 0x10)
    float var_240_1[0x8] = _mm256_mask_broadcastd_epi32(arg5, zmm20[0].o)
    zmm20[0].o = _mm_mask_xor_epi32(arg5, zmm20[0].o, zmm20[0].o)
    arg6 = _mm256_broadcast_ss(1.68155816e-44f)
    int32_t var_260_1[0x4] = arg6[0].o
    result = 0
    bool cond:1_1 = true
    bool cond:3_1 = true
    bool cond:4_1 = true
    bool cond:7_1 = true
    bool cond:8_1 = true
    bool cond:11_1 = true
    bool cond:12_1 = true
    bool cond:15_1 = true
    bool cond:16_1 = true
    bool cond:19_1 = true
    bool cond:20_1 = true
    bool cond:23_1 = false
    bool cond:24_1 = true
    bool cond:27_1 = true
    bool cond:29_1 = false
    bool cond:31_1 = true
    bool cond:33_1 = true
    bool cond:35_1 = true
    bool cond:37_1 = true
    bool cond:39_1 = true
    bool cond:41_1 = true
    bool cond:43_1 = true
    bool cond:45_1 = true
    bool cond:47_1 = true
    zmm30 = _mm256_mask_broadcastss_ps(arg5, zmm1[0].o)
    zmm31 = _mm256_mask_broadcastd_epi32(arg5, arg9[0].o)
    arg8 = _mm256_mask_broadcastss_ps(arg5, zmm27[0].o)
    arg9 = _mm256_cmpeq_epi32(arg9, arg9)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    var_2e0 = arg6
    
    do
        zmm1[0].o = zx.o(result.d)
        zmm1[0].o = __vpmulld_xmmdq_xmmdq_memdq(zmm1[0].o, var_260_1)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        zmm27 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, data_142fc93c0)
        arg20[0].o = _mm_mask_xor_ps(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_2
        int128_t temp0_44
        temp0_44, k1_2 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg24 + zmm27[0].q))
        arg20 = temp0_44
        zmm27 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, data_142fc93e0)
        arg21[0].o = _mm_mask_xor_ps(arg5, arg21[0].o, arg21[0].o)
        int64_t k1_4
        int128_t temp0_47
        temp0_47, k1_4 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg24 + zmm27[0].q))
        arg21 = temp0_47
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(zmm1, data_142fc9400)
        zmm27[0].o = _mm_mask_xor_ps(arg5, zmm27[0].o, zmm27[0].o)
        int64_t k1_6
        int128_t temp0_50
        temp0_50, k1_6 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg24 + zmm1[0].q))
        zmm27 = temp0_50
        float var_360_1[0x8] = _mm256_mask_store_ps(arg5, arg20)
        float var_340_1[0x8] = _mm256_mask_store_ps(arg5, arg21)
        float var_320_1[0x8] = _mm256_mask_store_ps(arg5, zmm27)
        int256_t var_300_1 = _mm256_mask_store_epi64(arg5, zmm20)
        int32_t var_3e0_1[0x8] = zmm2
        float var_3c0_1[0x8] = zmm2
        float var_3a0_1[0x8] = zmm2
        float var_380_1[0x8] = zmm2
        zmm1 = _mm256_mask_mul_ps(arg5, arg21, zmm31)
        arg10 = _mm256_mask_mul_ps(arg5, zmm27, arg8)
        arg11 = _mm256_mask_mul_ps(arg5, arg20, zmm30)
        zmm27 = _mm256_mask3_fmsub_ps(zmm27, arg5, zmm30, zmm1)
        arg20 = _mm256_mask3_fmsub_ps(arg20, arg5, zmm31, arg10)
        arg21 = _mm256_mask3_fmsub_ps(arg21, arg5, arg8, arg11)
        zmm1 = _mm256_mask_add_ps(arg5, zmm27, zmm27)
        zmm27 = _mm256_mask_add_ps(arg5, arg20, arg20)
        arg20 = _mm256_mask_add_ps(arg5, arg21, arg21)
        arg21 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_360_1), arg5, zmm2, zmm1)
        arg10 = _mm256_mask3_fmadd_ps(var_340_1, arg5, zmm2, zmm27)
        arg11 = _mm256_mask3_fmadd_ps(var_320_1, arg5, zmm2, arg20)
        arg12 = _mm256_mask_mul_ps(arg5, zmm27, zmm31)
        arg13 = _mm256_mask_mul_ps(arg5, arg20, arg8)
        arg14 = _mm256_mask_mul_ps(arg5, zmm1, zmm30)
        arg20 = _mm256_mask_add_ps(arg5, arg21, _mm256_mask3_fmsub_ps(arg20, arg5, zmm30, arg12))
        zmm1 = _mm256_add_ps(arg10, _mm256_mask3_fmsub_ps(zmm1, arg5, zmm31, arg13))
        zmm27 = _mm256_mask_add_ps(arg5, arg11, _mm256_mask3_fmsub_ps(zmm27, arg5, arg8, arg14))
        arg10 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg20, arg23[4])
        arg11 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg23[5])
        arg12 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm27, arg23[6])
        zmm1 = _mm256_broadcast_ss(var_3f0)
        int64_t k1_7 = _mm256_cmp_ps_mask(arg5, zmm1, arg10, 1)
        _kortest_mask8_u8(k1_7, k1_7)
        
        if (not(cond:47_1))
            var_3e0_1 = _mm256_mask_storeu_ps(k1_7, zmm1)
        
        int64_t k1_8 = _mm256_cmp_ps_mask(arg5, zmm1, arg10, 5)
        _kortest_mask8_u8(k1_8, k1_8)
        
        if (not(cond:1_1))
            zmm1 = _mm256_broadcast_ss(var_400)
            int64_t k2_1 = _mm256_cmp_ps_mask(k1_8, arg10, zmm1, 1)
            _kortest_mask8_u8(k2_1, k2_1)
            
            if (not(cond:4_1))
                var_3e0_1 = _mm256_mask_storeu_ps(k2_1, zmm1)
            
            int64_t k1_9 = _mm256_cmp_ps_mask(k1_8, arg10, zmm1, 5)
            _kortest_mask8_u8(k1_9, k1_9)
            
            if (not(cond:8_1))
                var_3e0_1 = _mm256_mask_storeu_ps(k1_9, arg10)
        
        zmm1 = _mm256_broadcast_ss(temp0_7)
        int64_t k1_10 = _mm256_cmp_ps_mask(arg5, zmm1, arg11, 1)
        _kortest_mask8_u8(k1_10, k1_10)
        
        if (not(cond:3_1))
            var_3c0_1 = _mm256_mask_storeu_ps(k1_10, zmm1)
        
        int64_t k1_11 = _mm256_cmp_ps_mask(arg5, zmm1, arg11, 5)
        _kortest_mask8_u8(k1_11, k1_11)
        
        if (not(cond:7_1))
            zmm1 = _mm256_broadcast_ss(temp0_12)
            int64_t k2_2 = _mm256_cmp_ps_mask(k1_11, arg11, zmm1, 1)
            _kortest_mask8_u8(k2_2, k2_2)
            
            if (not(cond:12_1))
                var_3c0_1 = _mm256_mask_storeu_ps(k2_2, zmm1)
            
            int64_t k1_12 = _mm256_cmp_ps_mask(k1_11, arg11, zmm1, 5)
            _kortest_mask8_u8(k1_12, k1_12)
            
            if (not(cond:16_1))
                var_3c0_1 = _mm256_mask_storeu_ps(k1_12, arg11)
        
        zmm1 = _mm256_broadcast_ss(temp0_8)
        int64_t k1_13 = _mm256_cmp_ps_mask(arg5, zmm1, arg12, 1)
        _kortest_mask8_u8(k1_13, k1_13)
        
        if (not(cond:11_1))
            var_3a0_1 = _mm256_mask_storeu_ps(k1_13, zmm1)
        
        int64_t k1_14 = _mm256_cmp_ps_mask(arg5, zmm1, arg12, 5)
        _kortest_mask8_u8(k1_14, k1_14)
        
        if (not(cond:15_1))
            zmm1 = _mm256_broadcast_ss(temp0_13)
            int64_t k2_3 = _mm256_cmp_ps_mask(k1_14, arg12, zmm1, 1)
            _kortest_mask8_u8(k2_3, k2_3)
            
            if (not(cond:20_1))
                var_3a0_1 = _mm256_mask_storeu_ps(k2_3, zmm1)
            
            int64_t k1_15 = _mm256_cmp_ps_mask(k1_14, arg12, zmm1, 5)
            _kortest_mask8_u8(k1_15, k1_15)
            
            if (not(cond:24_1))
                var_3a0_1 = _mm256_mask_storeu_ps(k1_15, arg12)
        
        zmm1 = _mm256_sub_ps(var_3e0_1, zmm3)
        zmm27 = _mm256_mask_sub_ps(arg5, var_3c0_1, arg7)
        arg20 = _mm256_mask_sub_ps(arg5, var_3a0_1, zmm5)
        zmm1 = _mm256_mask_div_ps(arg5, zmm1, zmm16)
        zmm27 = _mm256_mask_div_ps(arg5, zmm27, arg18)
        arg21 = _mm256_mask_div_ps(arg5, arg20, zmm18)
        arg17 = _mm256_cvttps_epi32(zmm1)
        arg20 = _mm256_mask_cvttps_epi32(arg5, zmm27)
        zmm1 = _mm256_mask_cvttps_epi32(arg5, arg21)
        zmm27 = _mm256_mask_cvtepi32_ps(arg5, arg17)
        arg16 = _mm256_mask_cvtepi32_ps(arg5, arg20)
        arg21 = _mm256_mask_cvtepi32_ps(arg5, zmm1)
        zmm27 = _mm256_mask3_fmadd_ps(zmm27, arg5, zmm16, zmm3)
        arg16 = _mm256_mask3_fmadd_ps(arg16, arg5, arg18, arg7)
        arg21 = _mm256_mask3_fmadd_ps(arg21, arg5, zmm18, zmm5)
        zmm27 = _mm256_mask_add_ps(arg5, zmm19, zmm27)
        arg6 = _mm256_mask_add_ps(arg5, zmm21, arg16)
        int64_t k1_16 = _mm256_cmp_ps_mask(arg5, zmm27, var_3e0_1, 1)
        zmm27 = _mm256_mask_add_epi32(arg5, arg17, arg9)
        arg16 = _mm256_mask_blend_epi32(k1_16, zmm27, arg17)
        float var_3e0_2[0x8] = arg16
        int64_t k1_17 = _mm256_cmp_ps_mask(arg5, arg6, var_3c0_1, 1)
        _kortest_mask8_u8(k1_17, k1_17)
        
        if (not(cond:19_1))
            arg17 = _mm256_mask_mov_epi64(arg5, arg20)
        
        arg21 = _mm256_mask_add_ps(arg5, zmm22, arg21)
        
        if (not(cond:23_1))
            zmm27 = _mm256_mask_add_epi32(arg5, arg20, arg9)
        
        arg20 = _mm256_mask_blend_epi32(k1_17, zmm27, arg17)
        uint64_t var_3c0_2[0x4] = _mm256_mask_store_epi64(arg5, arg20)
        int64_t k1_18 = _mm256_cmp_ps_mask(arg5, arg21, var_3a0_1, 1)
        _kortest_mask8_u8(k1_18, k1_18)
        
        if (not(cond:27_1))
            arg17 = zmm1
        
        if (not(cond:29_1))
            _mm256_mask_add_epi32(arg5, zmm1, arg9)
        
        zmm27 = _mm256_mask_mov_epi32(k1_18, arg17)
        int32_t var_3a0_2[0x8] = _mm256_mask_store_epi64(arg5, zmm27)
        arg6 = _mm256_cvtepi32_ps(arg16)
        zmm1 = _mm256_mask_cvtepi32_ps(arg5, arg20)
        zmm27 = _mm256_mask_cvtepi32_ps(arg5, zmm27)
        arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, zmm16, zmm3)
        zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, arg18, arg7)
        zmm25 = _mm256_mask_mov_ps(arg5, zmm5)
        zmm27 = _mm256_mask3_fmadd_ps(zmm27, arg5, zmm18, zmm5)
        arg6 = _mm256_mask_add_ps(arg5, zmm19, arg6)
        zmm1 = _mm256_mask_add_ps(arg5, zmm21, zmm1)
        zmm27 = _mm256_mask_add_ps(arg5, zmm22, zmm27)
        arg6 = _mm256_sub_ps(var_3e0_1, arg6)
        zmm1 = _mm256_sub_ps(var_3c0_1, zmm1)
        zmm27 = _mm256_mask_sub_ps(arg5, var_3a0_1, zmm27)
        float var_360_2[0x8] = _mm256_mask_div_ps(arg5, arg6, zmm16)
        float var_340_2[0x8] = _mm256_mask_div_ps(arg5, zmm1, arg18)
        float var_320_2[0x8] = _mm256_mask_store_ps(arg5, _mm256_mask_div_ps(arg5, zmm27, zmm18))
        int64_t k1_19 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg16, arg9)
        _kortest_mask8_u8(k1_19, k1_19)
        
        if (not(cond:31_1))
            var_3e0_2 = _mm256_mask_storeu_epi32(k1_19, zmm20)
            var_360_2 = _mm256_mask_storeu_ps(k1_19, zmm20)
            arg16 = var_3e0_2
        
        zmm5 = arg7
        int32_t rdx = *arg4
        int64_t k1_20 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg16, 
            _mm256_mask_set1_epi32(arg5, rdx - 1))
        _kortest_mask8_u8(k1_20, k1_20)
        
        if (not(cond:33_1))
            cond:35_1 = rdx == 2
            cond:37_1 = rdx == 2
            cond:39_1 = rdx == 2
            cond:41_1 = rdx == 2
            cond:43_1 = rdx == 2
            cond:45_1 = rdx == 2
            var_3e0_2 = _mm256_mask_storeu_epi32(k1_20, _mm256_mask_set1_epi32(arg5, rdx - 2))
            var_360_2 = _mm256_mask_storeu_ps(k1_20, _mm256_broadcast_ss(1f))
        
        arg7 = zmm3
        zmm27 = _mm256_mask_load_epi64(arg5, var_3c0_2)
        int64_t k1_21 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm27, arg9)
        _kortest_mask8_u8(k1_21, k1_21)
        
        if (not(cond:35_1))
            var_3c0_2 = _mm256_mask_storeu_epi32(k1_21, zmm20)
            var_340_2 = _mm256_mask_storeu_ps(k1_21, zmm20)
            zmm27 = _mm256_mask_load_epi64(arg5, var_3c0_2)
        
        zmm3 = _mm256_mask_mov_ps(arg5, zmm22)
        zmm1 = _mm256_sub_ps(var_3e0_1, arg10)
        int32_t rdx_2 = arg4[1]
        int64_t k1_22 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm27, 
            _mm256_mask_set1_epi32(arg5, rdx_2 - 1))
        _kortest_mask8_u8(k1_22, k1_22)
        
        if (not(cond:37_1))
            cond:39_1 = rdx_2 == 2
            cond:41_1 = rdx_2 == 2
            cond:43_1 = rdx_2 == 2
            cond:45_1 = rdx_2 == 2
            var_3c0_2 = _mm256_mask_storeu_epi32(k1_22, _mm256_mask_set1_epi32(arg5, rdx_2 - 2))
            var_340_2 = _mm256_mask_storeu_ps(k1_22, _mm256_broadcast_ss(1f))
        
        zmm22 = _mm256_mask_mov_ps(arg5, zmm21)
        zmm27 = _mm256_mask_sub_ps(arg5, var_3a0_1, arg12)
        arg13 = _mm256_sub_ps(var_3c0_1, arg11)
        zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, zmm1, zmm20)
        arg15 = var_3a0_2
        int64_t k1_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg15, arg9)
        _kortest_mask8_u8(k1_23, k1_23)
        
        if (not(cond:39_1))
            int32_t var_3a0_3[0x8] = _mm256_mask_storeu_epi32(k1_23, zmm20)
            var_320_2 = _mm256_mask_storeu_ps(k1_23, zmm20)
            arg15 = var_3a0_3
        
        zmm21 = _mm256_mask_mov_ps(arg5, zmm19)
        arg14 = _mm256_mask_mul_ps(arg5, zmm27, zmm27)
        arg13 = _mm256_fmadd_ps(arg13, arg13, zmm1)
        int32_t rdx_4 = arg4[2]
        int64_t k1_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg15, 
            _mm256_mask_set1_epi32(arg5, rdx_4 - 1))
        _kortest_mask8_u8(k1_24, k1_24)
        
        if (not(cond:41_1))
            cond:43_1 = rdx_4 == 2
            cond:45_1 = rdx_4 == 2
            int32_t var_3a0_4[0x8] =
                _mm256_mask_storeu_epi32(k1_24, _mm256_mask_set1_epi32(arg5, rdx_4 - 2))
            var_320_2 = _mm256_mask_storeu_ps(k1_24, _mm256_broadcast_ss(1f))
            arg15 = var_3a0_4
        
        zmm1 = var_3c0_2
        zmm19 = _mm256_mask_load_epi64(arg5, var_220_1)
        zmm27 = _mm256_mask_mullo_epi32(arg5, zmm19, var_3e0_2)
        arg20 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm27, zmm1), zmm23)
        arg21 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, arg20, arg15), 2)
        int64_t k1_26
        int128_t temp0_177
        temp0_177, k1_26 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg21[0].q))
        arg16 = temp0_177
        arg6 = _mm256_mask_mullo_epi32(arg5, zmm19, _mm256_sub_epi32(var_3e0_2, arg9))
        arg21 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, arg6, zmm1), zmm23)
        arg17 = _mm256_slli_epi32(_mm256_mask_add_epi32(arg5, arg21, arg15), 2)
        arg19[0].o = _mm_mask_xor_ps(arg5, arg19[0].o, arg19[0].o)
        int64_t k1_28
        int128_t temp0_185
        temp0_185, k1_28 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg17[0].q))
        arg17 = var_360_2
        zmm26 = _mm256_mask_load_ps(arg5, var_340_2)
        zmm1 = _mm256_sub_epi32(zmm1, arg9)
        zmm27 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm27, zmm1), zmm23)
        zmm19 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm27, arg15), 2)
        zmm20[0].o = _mm_mask_xor_ps(arg5, zmm20[0].o, zmm20[0].o)
        int64_t k1_30
        int128_t temp0_193
        temp0_193, k1_30 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + zmm19[0].q))
        zmm20 = temp0_193
        arg6 = _mm256_mask_mullo_epi32(arg5, _mm256_add_epi32(arg6, zmm1), zmm23)
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg6, arg15), 2)
        zmm19[0].o = _mm_mask_xor_ps(arg5, zmm19[0].o, zmm19[0].o)
        int64_t k1_32
        int128_t temp0_199
        temp0_199, k1_32 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + zmm1[0].q))
        arg15 = _mm256_sub_epi32(arg15, arg9)
        zmm1 = _mm256_slli_epi32(_mm256_mask_add_epi32(arg5, arg20, arg15), 2)
        arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_34
        int128_t temp0_204
        temp0_204, k1_34 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + zmm1[0].q))
        arg20 = temp0_204
        zmm1 = _mm256_slli_epi32(_mm256_mask_add_epi32(arg5, arg21, arg15), 2)
        arg21[0].o = _mm_mask_xor_epi32(arg5, arg21[0].o, arg21[0].o)
        int64_t k1_36
        int128_t temp0_208
        temp0_208, k1_36 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + zmm1[0].q))
        arg21 = temp0_208
        zmm1 = _mm256_add_ps(arg13, arg14)
        arg19 =
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_185, arg16), arg5, arg17, arg16)
        zmm27 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm27, arg15), 2)
        arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
        int64_t k1_38
        int128_t temp0_215
        temp0_215, k1_38 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + zmm27[0].q))
        arg13 = temp0_215
        zmm19 =
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_199, zmm20), arg5, arg17, zmm20)
        zmm20 = _mm256_mask_sub_ps(arg5, arg21, arg20)
        arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg6, arg15), 2)
        zmm27[0].o = _mm_mask_xor_ps(arg5, zmm27[0].o, zmm27[0].o)
        int64_t k1_40
        int128_t temp0_222
        temp0_222, k1_40 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg6[0].q))
        zmm20 = _mm256_mask3_fmadd_ps(zmm20, arg5, arg17, arg20)
        arg6 = _mm256_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_222, arg13), arg17, arg13)
        zmm19 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, zmm19, arg19), arg5, zmm26, arg19)
        arg6 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, arg6, zmm20), arg5, zmm26, zmm20)
        zmm27 = __vfmadd132ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
            _mm256_mask_sub_ps(arg5, arg6, zmm19), arg5, zmm19, var_320_2)
        zmm20[0].o = _mm_mask_xor_ps(arg5, zmm20[0].o, zmm20[0].o)
        int64_t k1_41 = _mm256_cmp_ps_mask(arg5, zmm1, zmm20, 0xc)
        _kortest_mask8_u8(k1_41, k1_41)
        
        if (not(cond:43_1))
            arg20 = _mm256_mask_rsqrt14_ps(arg5, zmm1)
            zmm1 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                _mm256_mask_mul_ps(arg5, arg20, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        _mm256_mask_mul_ps(arg5, zmm1, arg20), arg5, arg20, 0x40400000)), 
                0x3f000000)
            arg20 = _mm256_mask_rcp14_ps(arg5, zmm1)
            zmm27 = _mm256_mask3_fmadd_ps(zmm27, k1_41, arg20, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm1, arg5, arg20, 0x40000000))
        
        zmm19 = _mm256_mask_mov_ps(arg5, zmm21)
        zmm21 = _mm256_mask_mov_ps(arg5, zmm22)
        zmm22 = _mm256_mask_mov_ps(arg5, zmm3)
        zmm3 = arg7
        arg7 = zmm5
        zmm5 = _mm256_mask_mov_ps(arg5, zmm25)
        zmm1 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm27, var_240_1)
        int64_t k1_42 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm1, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_42, k1_42)
        
        if (not(cond:45_1))
            arg10 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg10, zmm1, var_2c0)
            arg11 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg11, zmm1, var_2a0)
            arg12 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg12, zmm1, var_280)
            var_2c0 = _mm256_mask_storeu_ps(k1_42, arg10)
            var_2a0 = _mm256_mask_storeu_ps(k1_42, arg11)
            var_280 = _mm256_mask_storeu_ps(k1_42, arg12)
            arg6 = _mm256_mask_add_ps(k1_42, var_2e0, zmm1)
            var_2e0 = arg6
        
        result = zx.q(result.d + 8)
        cond:1_1 = result.d == i
        cond:3_1 = result.d == i
        cond:4_1 = result.d == i
        cond:7_1 = result.d == i
        cond:8_1 = result.d == i
        cond:11_1 = result.d == i
        cond:12_1 = result.d == i
        cond:15_1 = result.d == i
        cond:16_1 = result.d == i
        cond:19_1 = result.d == i
        cond:20_1 = result.d == i
        cond:23_1 = result.d u< i
        cond:24_1 = result.d == i
        cond:27_1 = result.d == i
        cond:29_1 = result.d u< i
        cond:31_1 = result.d == i
        cond:33_1 = result.d == i
        cond:35_1 = result.d == i
        cond:37_1 = result.d == i
        cond:39_1 = result.d == i
        cond:41_1 = result.d == i
        cond:43_1 = result.d == i
        cond:45_1 = result.d == i
        cond:47_1 = result.d == i
    while (result.d s< i)

bool cond:36 = result.d == arg28
bool cond:38 = result.d == arg28
bool cond:40 = result.d == arg28
bool cond:42 = result.d == arg28
bool cond:44 = result.d == arg28
bool cond:46 = result.d == arg28

if (result.d s>= arg28)
    arg6 = var_2e0
else
    zmm5 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, result.d), data_142fc93a0)
    zmm16 = _mm256_mask_set1_epi32(arg5, arg28)
    uint64_t k1_43 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm16, zmm5)
    zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm5, 3)
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
    int64_t k2_5
    int128_t temp0_259
    temp0_259, k2_5 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), 
        *(arg24 + (zmm1[0].q << 2)))
    zmm2 = temp0_259
    zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm5, 0xc)
    zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 4)
    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
    int64_t k2_7
    int128_t temp0_263
    temp0_263, k2_7 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(arg24 + zmm3[0].q))
    arg7 = temp0_263
    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 8)
    arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
    int64_t k2_9
    int128_t temp0_267
    temp0_267, k2_9 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(arg24 + zmm1[0].q))
    arg18 = temp0_267
    float var_200_1[0x8] = zmm2
    float var_1e0_1[0x8] = arg7
    float var_1c0_1[0x8] = _mm256_mask_store_ps(arg5, arg18)
    float var_1a0_1[0x8] = zmm3
    zmm1 = _mm256_broadcast_ss(arg23[3])
    float var_3e0_3[0x8] = zmm1
    float var_3c0_3[0x8] = zmm1
    float var_3a0_5[0x8] = zmm1
    float var_380_2[0x8] = zmm1
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg23[1])
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg23[2])
    zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg23)
    zmm3 = _mm256_mul_ps(zmm1, zmm3)
    zmm21 = _mm256_mask_mul_ps(arg5, arg7, zmm19)
    zmm22 = _mm256_mask_mul_ps(arg5, arg18, zmm20)
    zmm23 = _mm256_mask_mul_ps(arg5, zmm2, zmm18)
    zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm18, arg18)
    zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm19, zmm2)
    zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, zmm20, arg7)
    zmm2 = _mm256_sub_ps(zmm3, zmm3)
    zmm3 = _mm256_mask_add_ps(arg5, zmm21, zmm21)
    arg7 = _mm256_mask_add_ps(arg5, zmm22, zmm22)
    arg18 = _mm256_mask_add_ps(arg5, zmm23, zmm23)
    float var_360_3[0x8] = zmm3
    float var_340_3[0x8] = arg7
    int256_t var_320_3 = _mm256_mask_store_ps(arg5, arg18)
    zmm2 = _mm256_add_ps(zmm2, zmm2)
    float var_300_2[0x8] = zmm2
    zmm18 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_200_1), arg5, zmm1, zmm3)
    zmm19 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1e0_1), arg5, zmm1, arg7)
    zmm20 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1c0_1), arg5, zmm1, arg18)
    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, zmm1, var_1a0_1)
    int256_t var_180_1 = _mm256_mask_store_ps(arg5, zmm18)
    int256_t var_160_1 = _mm256_mask_store_ps(arg5, zmm19)
    int256_t var_140_1 = _mm256_mask_store_ps(arg5, zmm20)
    float var_120_1[0x8] = zmm2
    zmm1 = _mm256_broadcast_ss(arg23[1])
    zmm2 = _mm256_broadcast_ss(arg23[2])
    zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg23)
    zmm22 = _mm256_mask_mul_ps(arg5, arg7, zmm2)
    zmm23 = _mm256_mask_mul_ps(arg5, arg18, zmm21)
    arg19 = _mm256_mask_mul_ps(arg5, zmm3, zmm1)
    zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, arg18, zmm1)
    zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, zmm3, zmm2)
    arg19 = _mm256_mask3_fmsub_ps(arg19, arg5, arg7, zmm21)
    zmm1 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
    zmm3 = _mm256_mask_add_ps(arg5, zmm19, zmm23)
    arg7 = _mm256_mask_add_ps(arg5, zmm20, arg19)
    arg12 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg23[4])
    zmm3 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, arg23[5])
    arg7 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg7, arg23[6])
    zmm1 = _mm256_broadcast_ss(var_3f0)
    int64_t k0 = _mm256_cmp_ps_mask(k1_43, zmm1, arg12, 1)
    _kortest_mask8_u8(k0, k0)
    
    if (result.d != arg28)
        var_3e0_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0, zmm1, arg12, 1), zmm1)
    
    int64_t k0_1 = _mm256_cmp_ps_mask(k1_43, zmm1, arg12, 5)
    _kortest_mask8_u8(k0_1, k0_1)
    
    if (result.d != arg28)
        int64_t k2_11 = _mm256_cmp_ps_mask(k0_1, zmm1, arg12, 5)
        zmm1 = _mm256_broadcast_ss(var_400)
        int64_t k3_1 = _mm256_cmp_ps_mask(k2_11, arg12, zmm1, 1)
        int64_t k0_2 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_1, zmm16, zmm5)
        _kortest_mask8_u8(k0_2, k0_2)
        
        if (result.d != arg28)
            var_3e0_3 = _mm256_mask_storeu_ps(k3_1, zmm1)
        
        int64_t k2_12 = _mm256_cmp_ps_mask(k2_11, arg12, zmm1, 5)
        int64_t k0_3 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_12, zmm16, zmm5)
        _kortest_mask8_u8(k0_3, k0_3)
        
        if (result.d != arg28)
            var_3e0_3 = _mm256_mask_storeu_ps(k2_12, arg12)
    
    zmm1 = _mm256_broadcast_ss(temp0_7)
    int64_t k0_4 = _mm256_cmp_ps_mask(k1_43, zmm1, zmm3, 1)
    _kortest_mask8_u8(k0_4, k0_4)
    
    if (result.d != arg28)
        var_3c0_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_4, zmm1, zmm3, 1), zmm1)
    
    int64_t k0_5 = _mm256_cmp_ps_mask(k1_43, zmm1, zmm3, 5)
    _kortest_mask8_u8(k0_5, k0_5)
    
    if (result.d != arg28)
        int64_t k2_14 = _mm256_cmp_ps_mask(k0_5, zmm1, zmm3, 5)
        zmm1 = _mm256_broadcast_ss(temp0_12)
        int64_t k3_2 = _mm256_cmp_ps_mask(k2_14, zmm3, zmm1, 1)
        int64_t k0_6 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_2, zmm16, zmm5)
        _kortest_mask8_u8(k0_6, k0_6)
        
        if (result.d != arg28)
            var_3c0_3 = _mm256_mask_storeu_ps(k3_2, zmm1)
        
        int64_t k2_15 = _mm256_cmp_ps_mask(k2_14, zmm3, zmm1, 5)
        int64_t k0_7 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_15, zmm16, zmm5)
        _kortest_mask8_u8(k0_7, k0_7)
        
        if (result.d != arg28)
            var_3c0_3 = _mm256_mask_storeu_ps(k2_15, zmm3)
    
    zmm1 = _mm256_broadcast_ss(temp0_8)
    int64_t k0_8 = _mm256_cmp_ps_mask(k1_43, zmm1, arg7, 1)
    _kortest_mask8_u8(k0_8, k0_8)
    
    if (result.d != arg28)
        var_3a0_5 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_8, zmm1, arg7, 1), zmm1)
    
    int64_t k0_9 = _mm256_cmp_ps_mask(k1_43, zmm1, arg7, 5)
    _kortest_mask8_u8(k0_9, k0_9)
    
    if (result.d != arg28)
        int64_t k2_17 = _mm256_cmp_ps_mask(k0_9, zmm1, arg7, 5)
        zmm1 = _mm256_broadcast_ss(temp0_13)
        int64_t k3_3 = _mm256_cmp_ps_mask(k2_17, arg7, zmm1, 1)
        int64_t k0_10 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_3, zmm16, zmm5)
        _kortest_mask8_u8(k0_10, k0_10)
        
        if (result.d != arg28)
            var_3a0_5 = _mm256_mask_storeu_ps(k3_3, zmm1)
        
        int64_t k2_18 = _mm256_cmp_ps_mask(k2_17, arg7, zmm1, 5)
        k0_9 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_18, zmm16, zmm5)
        _kortest_mask8_u8(k0_9, k0_9)
        
        if (result.d != arg28)
            var_3a0_5 = _mm256_mask_storeu_ps(k2_18, arg7)
    
    zmm19 = _mm256_mask_load_ps(k0_9, var_3e0_3)
    zmm18 = _mm256_mask_load_ps(k0_9, var_3c0_3)
    arg18 = _mm256_mask_load_ps(k0_9, var_3a0_5)
    zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *arg1)
    zmm1 = _mm256_mask_sub_ps(k0_9, zmm19, zmm23)
    arg19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *(arg1 + 4))
    zmm20 = _mm256_mask_sub_ps(k0_9, zmm18, arg19)
    zmm25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, arg1[1].d)
    zmm26 = _mm256_mask_sub_ps(k0_9, arg18, zmm25)
    zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *arg3)
    zmm1 = _mm256_mask_div_ps(k0_9, zmm1, zmm21)
    zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *(arg3 + 4))
    arg20 = _mm256_mask_div_ps(k0_9, zmm20, zmm22)
    zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, arg3[1].d)
    zmm26 = _mm256_mask_div_ps(k0_9, zmm26, zmm20)
    zmm27 = _mm256_mask_cvttps_epi32(k0_9, zmm1)
    arg9 = _mm256_mask_cvttps_epi32(k0_9, arg20)
    arg21 = _mm256_mask_cvttps_epi32(k0_9, zmm26)
    zmm1 = _mm256_mask_cvtepi32_ps(k0_9, zmm27)
    zmm26 = _mm256_mask_cvtepi32_ps(k0_9, arg9)
    arg10 = _mm256_mask_cvtepi32_ps(k0_9, arg21)
    zmm1 = _mm256_mask3_fmadd_ps(zmm1, k0_9, zmm21, zmm23)
    zmm26 = _mm256_mask3_fmadd_ps(zmm26, k0_9, zmm22, arg19)
    arg10 = _mm256_mask3_fmadd_ps(arg10, k0_9, zmm20, zmm25)
    arg8[0].o = __vmovsd_xmmdq_memq(*arg3)
    arg20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, 2f)
    arg8[0].o = _mm_mask_div_ps(k0_9, arg8[0].o, arg20[0].o)
    arg20 = _mm256_mask_broadcastss_ps(k0_9, arg8[0].o)
    zmm1 = _mm256_mask_add_ps(k0_9, arg20, zmm1)
    zmm2[0].o = __vmovshdup_xmmdq_xmmdq(arg8[0].o)
    zmm30 = _mm256_mask_broadcastsd_pd(k0_9, zmm2[0].o)
    arg11 = _mm256_mask_add_ps(k0_9, zmm30, zmm26)
    zmm2[0].o = _mm_permute_ps(arg8[0].o, 0xea)
    zmm31 = _mm256_mask_broadcastsd_pd(k0_9, zmm2[0].o)
    int64_t k2_19 = _mm256_cmp_ps_mask(k0_9, zmm1, zmm19, 1)
    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
    zmm1 = _mm256_mask_add_epi32(k0_9, zmm27, arg8)
    zmm26 = _mm256_mask_blend_epi32(k2_19, zmm1, zmm27)
    uint64_t var_3e0_4[0x4] = _mm256_mask_store_epi64(k0_9, zmm26)
    int64_t k0_11 = _mm256_cmp_ps_mask(k1_43, arg11, zmm18, 1)
    _kortest_mask8_u8(k0_11, k0_11)
    
    if (result.d != arg28)
        zmm27 = _mm256_mask_mov_epi64(k0_11, arg9)
    
    arg10 = _mm256_mask_add_ps(k0_11, zmm31, arg10)
    int64_t k2_20 = _mm256_cmp_ps_mask(k0_11, arg11, zmm18, 1)
    int64_t k0_12 = _mm256_cmp_ps_mask(k1_43, arg11, zmm18, 5)
    _kortest_mask8_u8(k0_12, k0_12)
    
    if (result.d != arg28)
        zmm1 = _mm256_add_epi32(arg9, arg8)
    
    arg9 = _mm256_mask_blend_epi32(k2_20, zmm1, zmm27)
    uint32_t var_3c0_4[0x8] = arg9
    int64_t k0_13 = _mm256_cmp_ps_mask(k1_43, arg10, arg18, 1)
    _kortest_mask8_u8(k0_13, k0_13)
    
    if (result.d != arg28)
        zmm27 = _mm256_mask_mov_epi64(k0_13, arg21)
    
    int64_t k2_21 = _mm256_cmp_ps_mask(k0_13, arg10, arg18, 1)
    int64_t k0_14 = _mm256_cmp_ps_mask(k1_43, arg10, arg18, 5)
    _kortest_mask8_u8(k0_14, k0_14)
    
    if (result.d != arg28)
        _mm256_mask_add_epi32(k0_14, arg21, arg8)
    
    zmm1 = _mm256_mask_mov_epi32(k2_21, zmm27)
    float var_3a0_6[0x8] = zmm1
    zmm2 = _mm256_mask_cvtepi32_ps(k0_14, zmm26)
    zmm27 = _mm256_mask_cvtepi32_ps(k0_14, arg9)
    zmm1 = _mm256_cvtepi32_ps(zmm1)
    zmm2 = _mm256_mask3_fmadd_ps(zmm2, k0_14, zmm21, zmm23)
    zmm27 = _mm256_mask3_fmadd_ps(zmm27, k0_14, zmm22, arg19)
    zmm1 = _mm256_mask3_fmadd_ps(zmm1, k0_14, zmm20, zmm25)
    zmm2 = _mm256_mask_add_ps(k0_14, arg20, zmm2)
    zmm23 = _mm256_mask_add_ps(k0_14, zmm30, zmm27)
    zmm1 = _mm256_mask_add_ps(k0_14, zmm31, zmm1)
    zmm2 = _mm256_mask_sub_ps(k0_14, zmm19, zmm2)
    zmm23 = _mm256_mask_sub_ps(k0_14, zmm18, zmm23)
    zmm1 = _mm256_mask_sub_ps(k0_14, arg18, zmm1)
    float var_360_4[0x8] = _mm256_mask_div_ps(k0_14, zmm2, zmm21)
    float var_340_4[0x8] = _mm256_mask_store_ps(k0_14, _mm256_mask_div_ps(k0_14, zmm23, zmm22))
    zmm1 = _mm256_mask_div_ps(k0_14, zmm1, zmm20)
    float var_320_4[0x8] = zmm1
    int64_t k0_15 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
        __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_14, zmm26, arg8), zmm16, zmm5)
    _kortest_mask8_u8(k0_15, k0_15)
    
    if (result.d != arg28)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        int64_t k2_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_15, zmm26, zmm1)
        zmm1[0].o = zx.o(0)
        var_3e0_4 = _mm256_mask_storeu_epi32(k2_23, zmm1)
        var_360_4 = _mm256_mask_storeu_ps(k2_23, zmm1)
        zmm26 = _mm256_mask_load_epi64(k0_15, var_3e0_4)
    
    int32_t rax_1 = *arg4
    zmm1 = _mm256_mask_set1_epi32(k0_15, rax_1 - 1)
    int64_t k2_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_15, zmm26, zmm1)
    int64_t k0_16 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_24, zmm16, zmm5)
    _kortest_mask8_u8(k0_16, k0_16)
    
    if (result.d != arg28)
        cond:36 = rax_1 == 2
        cond:38 = rax_1 == 2
        cond:40 = rax_1 == 2
        cond:42 = rax_1 == 2
        cond:44 = rax_1 == 2
        cond:46 = rax_1 == 2
        var_3e0_4 = _mm256_mask_storeu_epi32(k2_24, _mm256_mask_set1_epi32(k0_16, rax_1 - 2))
        zmm1 = _mm256_broadcast_ss(1f)
        var_360_4 = _mm256_mask_storeu_ps(k2_24, zmm1)
    
    zmm19 = _mm256_mask_sub_ps(k0_16, zmm19, arg12)
    zmm20[0].o = _mm_mask_xor_ps(k0_16, zmm20[0].o, zmm20[0].o)
    zmm21 = _mm256_mask_load_epi64(k0_16, var_3c0_4)
    zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
    int64_t k2_25 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_16, zmm21, zmm1)
    int64_t k0_17 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_25, zmm16, zmm5)
    _kortest_mask8_u8(k0_17, k0_17)
    
    if (not(cond:36))
        zmm1[0].o = zx.o(0)
        var_3c0_4 = _mm256_mask_storeu_epi32(k2_25, zmm1)
        var_340_4 = _mm256_mask_storeu_ps(k2_25, zmm1)
        zmm21 = _mm256_mask_load_epi64(k0_17, var_3c0_4)
    
    zmm1 = _mm256_mask_sub_ps(k0_17, zmm18, zmm3)
    zmm19 = _mm256_mask3_fmadd_ps(zmm19, k0_17, zmm19, zmm20)
    int32_t rdx_7 = arg4[1]
    int64_t k2_26 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_17, zmm21, 
        _mm256_mask_set1_epi32(k0_17, rdx_7 - 1))
    int64_t k0_18 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_26, zmm16, zmm5)
    _kortest_mask8_u8(k0_18, k0_18)
    
    if (not(cond:38))
        cond:40 = rdx_7 == 2
        cond:42 = rdx_7 == 2
        cond:44 = rdx_7 == 2
        cond:46 = rdx_7 == 2
        var_3c0_4 = _mm256_mask_storeu_epi32(k2_26, _mm256_mask_set1_epi32(k0_18, rdx_7 - 2))
        var_340_4 =
            _mm256_mask_storeu_ps(k2_26, __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_18, 1f))
    
    arg18 = _mm256_mask_sub_ps(k0_18, arg18, arg7)
    zmm1 = _mm256_mask3_fmadd_ps(zmm1, k0_18, zmm1, zmm19)
    zmm18 = _mm256_mask_load_epi64(k0_18, var_3a0_6)
    arg8 = _mm256_cmpeq_epi32(arg8, arg8)
    int64_t k2_27 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_18, zmm18, arg8)
    int64_t k0_19 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_27, zmm16, zmm5)
    _kortest_mask8_u8(k0_19, k0_19)
    
    if (not(cond:40))
        zmm18[0].o = _mm_mask_xor_epi32(k0_19, zmm18[0].o, zmm18[0].o)
        uint64_t var_3a0_7[0x4] = _mm256_mask_storeu_epi32(k2_27, zmm18)
        var_320_4 = _mm256_mask_storeu_ps(k2_27, zmm18)
        zmm18 = _mm256_mask_load_epi64(k0_19, var_3a0_7)
    
    arg18 = _mm256_mask3_fmadd_ps(arg18, k0_19, arg18, zmm1)
    int32_t rdx_9 = arg4[2]
    int64_t k2_28 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_19, zmm18, 
        _mm256_mask_set1_epi32(k0_19, rdx_9 - 1))
    int64_t k0_20 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_28, zmm16, zmm5)
    _kortest_mask8_u8(k0_20, k0_20)
    
    if (not(cond:42))
        cond:44 = rdx_9 == 2
        cond:46 = rdx_9 == 2
        uint64_t var_3a0_8[0x4] =
            _mm256_mask_storeu_epi32(k2_28, _mm256_mask_set1_epi32(k0_20, rdx_9 - 2))
        var_320_4 = _mm256_mask_storeu_ps(k2_28, _mm256_broadcast_ss(1f))
        zmm18 = _mm256_mask_load_epi64(k0_20, var_3a0_8)
    
    zmm5 = __vpbroadcastd_ymmqq_memd(*(arg22 + 4))
    zmm16 = _mm256_mask_load_epi64(k0_20, var_3e0_4)
    zmm19 = _mm256_mask_load_epi64(k0_20, var_3c0_4)
    zmm20 = _mm256_mask_mullo_epi32(k0_20, zmm5, zmm16)
    zmm21 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(k0_20, *(arg22 + 8))
    zmm22 = _mm256_mask_mullo_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm20, zmm19), zmm21)
    zmm1 = _mm256_mask_add_epi32(k0_20, zmm22, zmm18)
    result = *(arg22 + 0x10)
    zmm1 = _mm256_slli_epi32(zmm1, 2)
    int64_t k2_29 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm23[0].o = _mm_mask_xor_ps(k0_20, zmm23[0].o, zmm23[0].o)
    int64_t k2_30
    int128_t temp0_435
    temp0_435, k2_30 = _mm256_mmask_i32gather_ps(k2_29, *(result + zmm1[0].q))
    zmm23 = temp0_435
    zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
    zmm5 = _mm256_mask_mullo_epi32(k0_20, zmm5, _mm256_mask_sub_epi32(k0_20, zmm16, zmm1))
    zmm16 = _mm256_mask_mullo_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm5, zmm19), zmm21)
    arg19 = _mm256_mask_slli_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm16, zmm18), 2)
    int64_t k2_31 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm25[0].o = _mm_mask_xor_ps(k0_20, zmm25[0].o, zmm25[0].o)
    int64_t k2_32
    int128_t temp0_444
    temp0_444, k2_32 = _mm256_mmask_i32gather_ps(k2_31, *(result + arg19[0].q))
    zmm25 = temp0_444
    arg19 = _mm256_mask_load_ps(k0_20, var_360_4)
    zmm26 = _mm256_mask_load_ps(k0_20, var_340_4)
    zmm19 = _mm256_mask_sub_epi32(k0_20, zmm19, zmm1)
    zmm20 = _mm256_mask_mullo_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm20, zmm19), zmm21)
    zmm27 = _mm256_mask_slli_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm20, zmm18), 2)
    int64_t k2_33 = __kmovq_maskmskw_masku64_avx512(k1_43)
    arg20[0].o = _mm_mask_xor_ps(k0_20, arg20[0].o, arg20[0].o)
    int64_t k2_34
    int128_t temp0_453
    temp0_453, k2_34 = _mm256_mmask_i32gather_ps(k2_33, *(result + zmm27[0].q))
    arg20 = temp0_453
    zmm5 = _mm256_mask_mullo_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm5, zmm19), zmm21)
    zmm19 = _mm256_mask_slli_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm5, zmm18), 2)
    int64_t k2_35 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm21[0].o = _mm_mask_xor_epi32(k0_20, zmm21[0].o, zmm21[0].o)
    int64_t k2_36
    int128_t temp0_459
    temp0_459, k2_36 = _mm256_mmask_i32gather_ps(k2_35, *(result + zmm19[0].q))
    zmm1 = _mm256_mask_sub_epi32(k0_20, zmm18, zmm1)
    zmm18 = _mm256_mask_slli_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm22, zmm1), 2)
    int64_t k2_37 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm19[0].o = _mm_mask_xor_ps(k0_20, zmm19[0].o, zmm19[0].o)
    int64_t k2_38
    int128_t temp0_464
    temp0_464, k2_38 = _mm256_mmask_i32gather_ps(k2_37, *(result + zmm18[0].q))
    zmm19 = temp0_464
    zmm16 = _mm256_mask_slli_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm16, zmm1), 2)
    int64_t k2_39 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm18[0].o = _mm_mask_xor_ps(k0_20, zmm18[0].o, zmm18[0].o)
    int64_t k2_40
    int128_t temp0_468
    temp0_468, k2_40 = _mm256_mmask_i32gather_ps(k2_39, *(result + zmm16[0].q))
    zmm16[0].o = _mm_mask_xor_ps(k0_20, zmm16[0].o, zmm16[0].o)
    zmm22 = _mm256_mask_sub_ps(k0_20, zmm25, zmm23)
    zmm20 = _mm256_mask_slli_epi32(k0_20, _mm256_mask_add_epi32(k0_20, zmm20, zmm1), 2)
    int64_t k2_41 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm25[0].o = _mm_mask_xor_ps(k0_20, zmm25[0].o, zmm25[0].o)
    int64_t k2_42
    int128_t temp0_474
    temp0_474, k2_42 = _mm256_mmask_i32gather_ps(k2_41, *(result + zmm20[0].q))
    zmm25 = temp0_474
    zmm22 = _mm256_mask3_fmadd_ps(zmm22, k0_20, arg19, zmm23)
    zmm20 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_20, temp0_459, arg20), k0_20, arg19, arg20)
    zmm18 = _mm256_mask_sub_ps(k0_20, temp0_468, zmm19)
    zmm1 = _mm256_slli_epi32(_mm256_add_epi32(zmm5, zmm1), 2)
    int64_t k2_44
    int128_t temp0_481
    temp0_481, k2_44 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm1[0].q))
    zmm18 = _mm256_mask3_fmadd_ps(zmm18, k0_20, arg19, zmm19)
    zmm1 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_20, temp0_481, zmm25), k0_20, arg19, zmm25)
    zmm5 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_20, zmm20, zmm22), k0_20, zmm26, zmm22)
    zmm1 = __vfmadd132ps_ymmqq_ymmqq_memqq(
        _mm256_sub_ps(
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_20, zmm1, zmm18), k0_20, zmm26, zmm18), 
            zmm5), 
        zmm5, var_320_4)
    int64_t k2_45 = _mm256_cmp_ps_mask(k1_43, arg18, zmm16, 0xc)
    _kortest_mask8_u8(k2_45, k2_45)
    
    if (not(cond:44))
        zmm5 = _mm256_mask_rsqrt14_ps(k0_20, arg18)
        zmm5 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_20, 
            _mm256_mask_mul_ps(k0_20, zmm5, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    _mm256_mask_mul_ps(k0_20, arg18, zmm5), k0_20, zmm5, 0x40400000)), 
            0x3f000000)
        zmm16 = _mm256_mask_rcp14_ps(k0_20, zmm5)
        zmm1 = _mm256_mask3_fmadd_ps(zmm1, k2_45, zmm16, 
            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm5, k0_20, zmm16, 0x40000000))
    
    arg6[0].o = arg25
    zmm1 = _mm256_sub_ps(zmm1, _mm256_broadcastss_ps(arg6[0].o))
    int64_t k1_44 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_43, zmm1, 0xb8d1b717, 1)
    _kortest_mask8_u8(k1_44, k1_44)
    
    if (cond:46)
        arg6 = var_2e0
    else
        arg12 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg12, zmm1, var_2c0)
        zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, zmm1, var_2a0)
        arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, zmm1, var_280)
        var_2c0 = _mm256_mask_storeu_ps(k1_44, arg12)
        var_2a0 = _mm256_mask_storeu_ps(k1_44, zmm3)
        var_280 = _mm256_mask_storeu_ps(k1_44, arg7)
        arg6 = _mm256_mask_add_ps(k1_44, var_2e0, zmm1)

zmm1 = _mm256_hadd_ps(var_2c0, var_2c0)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm2 = _mm256_hadd_ps(var_2a0, var_2a0)
arg7[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ arg7[0]
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm3 = _mm256_hadd_ps(var_280, var_280)
zmm3 = _mm256_hadd_ps(zmm3, zmm3)
zmm2[0].o = zmm2[0].o f+ arg7[0]
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x10)
zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
zmm2[0].o = zmm3[0].o f+ zmm2[0]
zmm3[0].o = __vmovsd_xmmdq_memq(*arg27)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x20)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, arg27[1].d, 0x20)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
*arg27 = zmm1[0]
*(arg27 + 4) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
arg27[1].d = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
arg6 = _mm256_hadd_ps(arg6, arg6)
arg6 = _mm256_hadd_ps(arg6, arg6)
zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
arg6[0].o = arg6[0].o f+ zmm1[0]
arg6[0].o = arg6[0].o f+ *arg26
*arg26 = arg6[0]
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
