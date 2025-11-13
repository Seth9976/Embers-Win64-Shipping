// 函数: sub_14003fbe0
// 地址: 0x14003fbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg19[0].o
int128_t var_68 = arg18[0].o
int128_t var_78 = arg17[0].o
int128_t var_88 = arg16[0].o
int128_t var_98 = arg15[0].o
int128_t var_a8 = arg14[0].o
int128_t var_b8 = arg13[0].o
int128_t var_c8 = arg12[0].o
int128_t var_d8 = arg11[0].o
int128_t var_e8 = arg10[0].o
int32_t zmm1[0x8]
zmm1[0].o = *arg30
float zmm21[0x8]
zmm21[0].o = zx.o(arg26)
arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
float var_260[0x8] = arg6
float var_280_1[0x8] = arg6
float var_2a0[0x8] = arg6
arg6[0].o = __vmovsd_xmmdq_memq(*arg3)
arg6[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg6[0].o, arg3[1].d, 0x20)
arg6 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, 0x3f000000)
float zmm2[0x8]
zmm2[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, arg2[1].d, 0x20)
zmm2[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
float var_410 = zmm2[0]
float temp0_7 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 1)
float temp0_8 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 2)
zmm2[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, arg1[1].d, 0x20)
arg6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
float var_420 = arg6[0]
float temp0_12 = __vextractps_memd_xmmdq_immb(arg6[0].o, 1)
float temp0_13 = __vextractps_memd_xmmdq_immb(arg6[0].o, 2)
int32_t r12_4 = ((arg29 s>> 0x1f u>> 0x1d) + arg29) & 0xfffffff8
int128_t var_2b0 = zmm1[0].o
float var_2e0[0x8]
float (* rcx)[0x8]
uint32_t rbx
uint32_t zmm16[0x8]
float zmm17[0x8]
float zmm18[0x8]
float zmm19[0x8]
float zmm20[0x8]
float zmm22[0x8]
float zmm23[0x8]
float zmm24[0x8]
float zmm25[0x8]
float zmm26[0x8]
float zmm27[0x8]
float zmm28[0x8]
float zmm29[0x8]

if (r12_4 s<= 0)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    var_2e0 = arg6
    rbx = 0
    rcx = arg25
else
    arg7 = _mm256_broadcast_ss(arg23[3])
    arg6[0].o = *arg23
    zmm1[0].o = arg23[1]
    zmm2[0].o = arg23[2]
    arg8 = _mm256_broadcast_ss(*arg1)
    arg9 = _mm256_broadcast_ss(*(arg1 + 4))
    zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1].d)
    zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *(arg3 + 4))
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1].d)
    arg11[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 2f)
    arg11[0].o = _mm_mask_div_ps(arg5, arg11[0].o, zmm20[0].o)
    zmm20 = _mm256_mask_broadcastss_ps(arg5, arg11[0].o)
    arg10[0].o = __vmovshdup_xmmdq_xmmdq(arg11[0].o)
    zmm22 = _mm256_mask_broadcastsd_pd(arg5, arg10[0].o)
    arg11[0].o = _mm_permute_ps(arg11[0].o, 0xea)
    zmm23 = _mm256_mask_broadcastsd_pd(arg5, arg11[0].o)
    uint64_t var_220_1[0x4] =
        _mm256_mask_store_ps(arg5, __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *(arg22 + 4)))
    zmm24 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, *(arg22 + 8))
    int64_t rsi_1 = *(arg22 + 0x10)
    zmm21 = _mm256_mask_broadcastd_epi32(arg5, zmm21[0].o)
    float var_240_1[0x8] = _mm256_mask_store_epi64(arg5, zmm21)
    zmm21[0].o = _mm_mask_xor_epi32(arg5, zmm21[0].o, zmm21[0].o)
    int32_t r10_1 = 0
    zmm27 = _mm256_mask_broadcastss_ps(arg5, zmm1[0].o)
    zmm28 = _mm256_mask_broadcastss_ps(arg5, zmm2[0].o)
    zmm29 = _mm256_mask_broadcastss_ps(arg5, arg6[0].o)
    arg10 = _mm256_cmpeq_epi32(arg10, arg10)
    rbx = 0
    bool cond:2_1 = true
    bool cond:4_1 = true
    bool cond:5_1 = true
    bool cond:8_1 = true
    bool cond:9_1 = true
    bool cond:12_1 = true
    bool cond:13_1 = true
    bool cond:16_1 = true
    bool cond:17_1 = true
    bool cond:20_1 = true
    bool cond:21_1 = true
    bool cond:24_1 = false
    bool cond:25_1 = true
    bool cond:28_1 = true
    bool cond:30_1 = false
    bool cond:32_1 = true
    bool cond:34_1 = true
    bool cond:36_1 = true
    bool cond:38_1 = true
    bool cond:40_1 = true
    bool cond:42_1 = true
    bool cond:44_1 = true
    bool cond:46_1 = true
    bool cond:48_1 = true
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    var_2e0 = arg6
    rcx = arg25
    
    do
        arg6 = *(rcx + sx.q(r10_1))
        zmm2 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 3)
        arg20[0].o = _mm_mask_xor_ps(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_2
        int128_t temp0_42
        temp0_42, k1_2 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg24 + (zmm2[0].q << 2)))
        arg20 = temp0_42
        arg6 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0xc)
        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 4)
        arg21[0].o = _mm_mask_xor_ps(arg5, arg21[0].o, arg21[0].o)
        int64_t k1_4
        int128_t temp0_46
        temp0_46, k1_4 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg24 + zmm2[0].q))
        arg21 = temp0_46
        arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 8)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int64_t k1_6
        int128_t temp0_49
        temp0_49, k1_6 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg24 + arg6[0].q))
        zmm2 = temp0_49
        float var_360_1[0x8] = _mm256_mask_store_ps(arg5, arg20)
        float var_340_1[0x8] = _mm256_mask_store_ps(arg5, arg21)
        float var_320_1[0x8] = zmm2
        int256_t var_300_1 = _mm256_mask_store_epi64(arg5, zmm21)
        float var_400_1[0x8] = arg7
        float var_3e0_1[0x8] = arg7
        float var_3c0_1[0x8] = arg7
        float var_3a0_1[0x8] = arg7
        arg6 = _mm256_mask_mul_ps(arg5, arg21, zmm28)
        arg11 = _mm256_mask_mul_ps(arg5, zmm2, zmm29)
        arg12 = _mm256_mask_mul_ps(arg5, arg20, zmm27)
        zmm2 = _mm256_mask3_fmsub_ps(zmm2, arg5, zmm27, arg6)
        arg20 = _mm256_mask3_fmsub_ps(arg20, arg5, zmm28, arg11)
        arg21 = _mm256_mask3_fmsub_ps(arg21, arg5, zmm29, arg12)
        arg6 = _mm256_add_ps(zmm2, zmm2)
        zmm2 = _mm256_mask_add_ps(arg5, arg20, arg20)
        arg20 = _mm256_mask_add_ps(arg5, arg21, arg21)
        arg21 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_360_1), arg5, arg7, arg6)
        arg11 = _mm256_fmadd_ps(var_340_1, arg7, zmm2)
        arg12 = _mm256_mask3_fmadd_ps(var_320_1, arg5, arg7, arg20)
        arg13 = _mm256_mask_mul_ps(arg5, zmm2, zmm28)
        arg14 = _mm256_mask_mul_ps(arg5, arg20, zmm29)
        arg15 = _mm256_mask_mul_ps(arg5, arg6, zmm27)
        arg20 = _mm256_mask_add_ps(arg5, arg21, _mm256_mask3_fmsub_ps(arg20, arg5, zmm27, arg13))
        arg6 = _mm256_add_ps(arg11, _mm256_mask3_fmsub_ps(arg6, arg5, zmm28, arg14))
        zmm2 = _mm256_add_ps(arg12, _mm256_mask3_fmsub_ps(zmm2, arg5, zmm29, arg15))
        arg20 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg20, arg23[4])
        arg21 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg23[5])
        arg11 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg23[6])
        arg6 = _mm256_broadcast_ss(var_410)
        int64_t k1_7 = _mm256_cmp_ps_mask(arg5, arg6, arg20, 1)
        _kortest_mask8_u8(k1_7, k1_7)
        
        if (not(cond:48_1))
            var_400_1 = _mm256_mask_storeu_ps(k1_7, arg6)
        
        int64_t k1_8 = _mm256_cmp_ps_mask(arg5, arg6, arg20, 5)
        _kortest_mask8_u8(k1_8, k1_8)
        
        if (not(cond:2_1))
            arg6 = _mm256_broadcast_ss(var_420)
            int64_t k2_1 = _mm256_cmp_ps_mask(k1_8, arg20, arg6, 1)
            _kortest_mask8_u8(k2_1, k2_1)
            
            if (not(cond:5_1))
                var_400_1 = _mm256_mask_storeu_ps(k2_1, arg6)
            
            int64_t k1_9 = _mm256_cmp_ps_mask(k1_8, arg20, arg6, 5)
            _kortest_mask8_u8(k1_9, k1_9)
            
            if (not(cond:9_1))
                var_400_1 = _mm256_mask_storeu_ps(k1_9, arg20)
        
        arg6 = _mm256_broadcast_ss(temp0_7)
        int64_t k1_10 = _mm256_cmp_ps_mask(arg5, arg6, arg21, 1)
        _kortest_mask8_u8(k1_10, k1_10)
        
        if (not(cond:4_1))
            var_3e0_1 = _mm256_mask_storeu_ps(k1_10, arg6)
        
        int64_t k1_11 = _mm256_cmp_ps_mask(arg5, arg6, arg21, 5)
        _kortest_mask8_u8(k1_11, k1_11)
        
        if (not(cond:8_1))
            arg6 = _mm256_broadcast_ss(temp0_12)
            int64_t k2_2 = _mm256_cmp_ps_mask(k1_11, arg21, arg6, 1)
            _kortest_mask8_u8(k2_2, k2_2)
            
            if (not(cond:13_1))
                var_3e0_1 = _mm256_mask_storeu_ps(k2_2, arg6)
            
            int64_t k1_12 = _mm256_cmp_ps_mask(k1_11, arg21, arg6, 5)
            _kortest_mask8_u8(k1_12, k1_12)
            
            if (not(cond:17_1))
                var_3e0_1 = _mm256_mask_storeu_ps(k1_12, arg21)
        
        arg6 = _mm256_broadcast_ss(temp0_8)
        int64_t k1_13 = _mm256_cmp_ps_mask(arg5, arg6, arg11, 1)
        _kortest_mask8_u8(k1_13, k1_13)
        
        if (not(cond:12_1))
            var_3c0_1 = _mm256_mask_storeu_ps(k1_13, arg6)
        
        int64_t k1_14 = _mm256_cmp_ps_mask(arg5, arg6, arg11, 5)
        _kortest_mask8_u8(k1_14, k1_14)
        
        if (not(cond:16_1))
            arg6 = _mm256_broadcast_ss(temp0_13)
            int64_t k2_3 = _mm256_cmp_ps_mask(k1_14, arg11, arg6, 1)
            _kortest_mask8_u8(k2_3, k2_3)
            
            if (not(cond:21_1))
                var_3c0_1 = _mm256_mask_storeu_ps(k2_3, arg6)
            
            int64_t k1_15 = _mm256_cmp_ps_mask(k1_14, arg11, arg6, 5)
            _kortest_mask8_u8(k1_15, k1_15)
            
            if (not(cond:25_1))
                var_3c0_1 = _mm256_mask_storeu_ps(k1_15, arg11)
        
        arg14 = var_400_1
        arg6 = _mm256_sub_ps(arg14, arg8)
        zmm2 = _mm256_sub_ps(var_3e0_1, arg9)
        arg15 = _mm256_mask_sub_ps(arg5, var_3c0_1, zmm16)
        arg6 = _mm256_mask_div_ps(arg5, arg6, zmm17)
        zmm2 = _mm256_mask_div_ps(arg5, zmm2, zmm18)
        arg15 = _mm256_mask_div_ps(arg5, arg15, zmm19)
        arg16 = _mm256_cvttps_epi32(arg6)
        arg19 = _mm256_cvttps_epi32(zmm2)
        arg17 = _mm256_cvttps_epi32(arg15)
        arg6 = _mm256_cvtepi32_ps(arg16)
        arg15 = _mm256_cvtepi32_ps(arg19)
        zmm2 = _mm256_cvtepi32_ps(arg17)
        arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, zmm17, arg8)
        arg15 = _mm256_mask3_fmadd_ps(arg15, arg5, zmm18, arg9)
        zmm2 = _mm256_mask3_fmadd_ps(zmm2, arg5, zmm19, zmm16)
        arg6 = _mm256_mask_add_ps(arg5, zmm20, arg6)
        zmm1 = _mm256_mask_add_ps(arg5, zmm22, arg15)
        int64_t k1_16 = _mm256_cmp_ps_mask(arg5, arg6, arg14, 1)
        arg18 = _mm256_add_epi32(arg16, arg10)
        arg15 = _mm256_mask_blend_epi32(k1_16, arg18, arg16)
        float var_400_2[0x8] = arg15
        int64_t k1_17 = _mm256_cmp_ps_mask(arg5, zmm1, var_3e0_1, 1)
        _kortest_mask8_u8(k1_17, k1_17)
        
        if (not(cond:20_1))
            arg16 = arg19
        
        arg6 = _mm256_mask_add_ps(arg5, zmm23, zmm2)
        
        if (not(cond:24_1))
            arg18 = _mm256_add_epi32(arg19, arg10)
        
        zmm2 = _mm256_mask_blend_epi32(k1_17, arg18, arg16)
        float var_3e0_2[0x8] = zmm2
        int64_t k1_18 = _mm256_cmp_ps_mask(arg5, arg6, var_3c0_1, 1)
        _kortest_mask8_u8(k1_18, k1_18)
        
        if (not(cond:28_1))
            arg16 = arg17
        
        if (not(cond:30_1))
            _mm256_add_epi32(arg17, arg10)
        
        arg18 = _mm256_mask_mov_epi32(k1_18, arg16)
        arg6 = _mm256_cvtepi32_ps(arg15)
        zmm1 = _mm256_cvtepi32_ps(zmm2)
        zmm2 = _mm256_cvtepi32_ps(arg18)
        arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, zmm17, arg8)
        zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, zmm18, arg9)
        zmm26 = _mm256_mask_mov_ps(arg5, zmm16)
        zmm2 = _mm256_mask3_fmadd_ps(zmm2, arg5, zmm19, zmm16)
        arg6 = _mm256_mask_add_ps(arg5, zmm20, arg6)
        zmm1 = _mm256_mask_add_ps(arg5, zmm22, zmm1)
        zmm2 = _mm256_mask_add_ps(arg5, zmm23, zmm2)
        arg6 = _mm256_sub_ps(arg14, arg6)
        zmm1 = _mm256_sub_ps(var_3e0_1, zmm1)
        zmm2 = _mm256_sub_ps(var_3c0_1, zmm2)
        float var_360_2[0x8] = _mm256_mask_div_ps(arg5, arg6, zmm17)
        int32_t var_340_2[0x8] = _mm256_mask_div_ps(arg5, zmm1, zmm18)
        float var_320_2[0x8] = _mm256_mask_div_ps(arg5, zmm2, zmm19)
        int64_t k1_19 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg15, arg10)
        _kortest_mask8_u8(k1_19, k1_19)
        
        if (not(cond:32_1))
            var_400_2 = _mm256_mask_storeu_epi32(k1_19, zmm21)
            var_360_2 = _mm256_mask_storeu_ps(k1_19, zmm21)
            arg15 = var_400_2
        
        zmm16 = _mm256_mask_mov_ps(arg5, arg9)
        int32_t rdx_2 = *arg4
        int64_t k1_20 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg15, 
            _mm256_mask_set1_epi32(arg5, rdx_2 - 1))
        _kortest_mask8_u8(k1_20, k1_20)
        
        if (not(cond:34_1))
            cond:36_1 = rdx_2 == 2
            cond:38_1 = rdx_2 == 2
            cond:40_1 = rdx_2 == 2
            cond:42_1 = rdx_2 == 2
            cond:44_1 = rdx_2 == 2
            cond:46_1 = rdx_2 == 2
            var_400_2 = _mm256_mask_storeu_epi32(k1_20, _mm256_mask_set1_epi32(arg5, rdx_2 - 2))
            var_360_2 = _mm256_mask_storeu_ps(k1_20, _mm256_broadcast_ss(1f))
        
        arg9 = arg8
        zmm2 = var_3e0_2
        int64_t k1_21 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm2, arg10)
        _kortest_mask8_u8(k1_21, k1_21)
        
        if (not(cond:36_1))
            var_3e0_2 = _mm256_mask_storeu_epi32(k1_21, zmm21)
            var_340_2 = _mm256_mask_storeu_ps(k1_21, zmm21)
            zmm2 = var_3e0_2
        
        arg8 = _mm256_mask_mov_ps(arg5, zmm23)
        arg15 = _mm256_mask_sub_ps(arg5, arg14, arg20)
        int32_t rdx_4 = arg4[1]
        int64_t k1_22 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm2, 
            _mm256_mask_set1_epi32(arg5, rdx_4 - 1))
        _kortest_mask8_u8(k1_22, k1_22)
        
        if (not(cond:38_1))
            cond:40_1 = rdx_4 == 2
            cond:42_1 = rdx_4 == 2
            cond:44_1 = rdx_4 == 2
            cond:46_1 = rdx_4 == 2
            var_3e0_2 = _mm256_mask_storeu_epi32(k1_22, _mm256_mask_set1_epi32(arg5, rdx_4 - 2))
            var_340_2 = _mm256_mask_storeu_ps(k1_22, _mm256_broadcast_ss(1f))
        
        zmm23 = _mm256_mask_mov_ps(arg5, zmm22)
        zmm2 = _mm256_sub_ps(var_3c0_1, arg11)
        arg12 = _mm256_mask_sub_ps(arg5, var_3e0_1, arg21)
        arg15 = _mm256_mask3_fmadd_ps(arg15, arg5, arg15, zmm21)
        arg14 = arg18
        int64_t k1_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg14, arg10)
        _kortest_mask8_u8(k1_23, k1_23)
        
        if (not(cond:40_1))
            int32_t var_3c0_3[0x8] = _mm256_mask_storeu_epi32(k1_23, zmm21)
            var_320_2 = _mm256_mask_storeu_ps(k1_23, zmm21)
            arg14 = var_3c0_3
        
        zmm22 = _mm256_mask_mov_ps(arg5, zmm20)
        arg13 = _mm256_mul_ps(zmm2, zmm2)
        arg12 = _mm256_fmadd_ps(arg12, arg12, arg15)
        int32_t r14_1 = arg4[2]
        int64_t k1_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg14, 
            _mm256_mask_set1_epi32(arg5, r14_1 - 1))
        _kortest_mask8_u8(k1_24, k1_24)
        
        if (not(cond:42_1))
            cond:44_1 = r14_1 == 2
            cond:46_1 = r14_1 == 2
            int32_t var_3c0_4[0x8] =
                _mm256_mask_storeu_epi32(k1_24, _mm256_mask_set1_epi32(arg5, r14_1 - 2))
            var_320_2 = _mm256_mask_storeu_ps(k1_24, _mm256_broadcast_ss(1f))
            arg14 = var_3c0_4
        
        zmm1 = var_3e0_2
        zmm20 = _mm256_mask_load_epi64(arg5, var_220_1)
        zmm2 = _mm256_mask_mullo_epi32(arg5, zmm20, var_400_2)
        arg15 = _mm256_mask_mullo_epi32(arg5, _mm256_add_epi32(zmm2, zmm1), zmm24)
        arg16 = _mm256_slli_epi32(_mm256_add_epi32(arg15, arg14), 2)
        int64_t k1_26
        int128_t temp0_170
        temp0_170, k1_26 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg16[0].q))
        arg17 = temp0_170
        arg6 = _mm256_mask_mullo_epi32(arg5, zmm20, _mm256_sub_epi32(var_400_2, arg10))
        arg16 = _mm256_mask_mullo_epi32(arg5, _mm256_add_epi32(arg6, zmm1), zmm24)
        arg18 = _mm256_slli_epi32(_mm256_add_epi32(arg16, arg14), 2)
        int64_t k1_28
        int128_t temp0_177
        temp0_177, k1_28 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg18[0].q))
        arg19 = temp0_177
        arg18 = var_360_2
        zmm25 = _mm256_mask_load_ps(arg5, var_340_2)
        zmm1 = _mm256_sub_epi32(zmm1, arg10)
        zmm2 = _mm256_mask_mullo_epi32(arg5, _mm256_add_epi32(zmm2, zmm1), zmm24)
        zmm20 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm2, arg14), 2)
        int64_t k1_29 = _kxnor_mask16(arg5, arg5)
        zmm21[0].o = _mm_mask_xor_ps(arg5, zmm21[0].o, zmm21[0].o)
        int64_t k1_30
        int128_t temp0_185
        temp0_185, k1_30 = _mm256_mmask_i32gather_ps(k1_29, *(rsi_1 + zmm20[0].q))
        zmm21 = temp0_185
        arg6 = _mm256_mask_mullo_epi32(arg5, _mm256_add_epi32(arg6, zmm1), zmm24)
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(arg6, arg14), 2)
        int64_t k1_31 = _kxnor_mask16(arg5, arg5)
        zmm20[0].o = _mm_mask_xor_ps(arg5, zmm20[0].o, zmm20[0].o)
        int64_t k1_32
        int128_t temp0_191
        temp0_191, k1_32 = _mm256_mmask_i32gather_ps(k1_31, *(rsi_1 + zmm1[0].q))
        zmm1 = _mm256_sub_epi32(arg14, arg10)
        arg14 = _mm256_slli_epi32(_mm256_add_epi32(arg15, zmm1), 2)
        int64_t k1_34
        int128_t temp0_195
        temp0_195, k1_34 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg14[0].q))
        arg15 = temp0_195
        arg14 = _mm256_slli_epi32(_mm256_add_epi32(arg16, zmm1), 2)
        int64_t k1_36
        int128_t temp0_198
        temp0_198, k1_36 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg14[0].q))
        arg16 = temp0_198
        arg12 = _mm256_add_ps(arg12, arg13)
        arg13 = _mm256_fmadd_ps(_mm256_sub_ps(arg19, arg17), arg18, arg17)
        zmm2 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, zmm1), 2)
        int64_t k1_37 = _kxnor_mask16(arg5, arg5)
        arg14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg14[0].o)
        int64_t k1_38
        int128_t temp0_205
        temp0_205, k1_38 = _mm256_mmask_i32gather_ps(k1_37, *(rsi_1 + zmm2[0].q))
        arg14 = temp0_205
        zmm2 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_191, zmm21), arg5, arg18, zmm21)
        zmm20 = _mm256_mask_sub_ps(arg5, arg16, arg15)
        arg6 = _mm256_slli_epi32(_mm256_add_epi32(arg6, zmm1), 2)
        int64_t k1_40
        int128_t temp0_211
        temp0_211, k1_40 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg6[0].q))
        zmm20 = _mm256_mask3_fmadd_ps(zmm20, arg5, arg18, arg15)
        arg6 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_211, arg14), arg18, arg14)
        zmm1 = _mm256_mask3_fmadd_ps(_mm256_sub_ps(zmm2, arg13), arg5, zmm25, arg13)
        arg13 = __vfmadd132ps_ymmqq_ymmqq_memqq(
            _mm256_sub_ps(
                _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, arg6, zmm20), arg5, zmm25, zmm20), 
                zmm1), 
            zmm1, var_320_2)
        zmm21[0].o = _mm_mask_xor_ps(arg5, zmm21[0].o, zmm21[0].o)
        int64_t k1_41 = _mm256_cmp_ps_mask(arg5, arg12, zmm21, 0xc)
        _kortest_mask8_u8(k1_41, k1_41)
        
        if (not(cond:44_1))
            arg6 = _mm256_mask_rsqrt14_ps(arg5, arg12)
            arg6 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                _mm256_mul_ps(arg6, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(_mm256_mul_ps(arg12, arg6), 
                        arg5, arg6, 0x40400000)), 
                0x3f000000)
            zmm2 = _mm256_mask_rcp14_ps(arg5, arg6)
            arg13 = _mm256_mask3_fmadd_ps(arg13, k1_41, zmm2, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, zmm2, 0x40000000))
        
        zmm20 = _mm256_mask_mov_ps(arg5, zmm22)
        zmm22 = _mm256_mask_mov_ps(arg5, zmm23)
        zmm23 = _mm256_mask_mov_ps(arg5, arg8)
        arg8 = arg9
        arg9 = _mm256_mask_mov_ps(arg5, zmm16)
        zmm16 = _mm256_mask_mov_ps(arg5, zmm26)
        zmm2 = __vsubps_ymmqq_ymmqq_memqq(arg13, var_240_1)
        int64_t k1_42 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm2, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_42, k1_42)
        
        if (not(cond:46_1))
            arg20 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg20, arg5, zmm2, var_2a0)
            arg21 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg21, arg5, zmm2, var_280_1)
            arg11 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg11, zmm2, var_260)
            var_2a0 = _mm256_mask_storeu_ps(k1_42, arg20)
            var_280_1 = _mm256_mask_storeu_ps(k1_42, arg21)
            var_260 = _mm256_mask_storeu_ps(k1_42, arg11)
            var_2e0 = _mm256_mask_add_ps(k1_42, var_2e0, zmm2)
        
        rbx += 8
        r10_1 += 0x20
        cond:2_1 = rbx == r12_4
        cond:4_1 = rbx == r12_4
        cond:5_1 = rbx == r12_4
        cond:8_1 = rbx == r12_4
        cond:9_1 = rbx == r12_4
        cond:12_1 = rbx == r12_4
        cond:13_1 = rbx == r12_4
        cond:16_1 = rbx == r12_4
        cond:17_1 = rbx == r12_4
        cond:20_1 = rbx == r12_4
        cond:21_1 = rbx == r12_4
        cond:24_1 = rbx u< r12_4
        cond:25_1 = rbx == r12_4
        cond:28_1 = rbx == r12_4
        cond:30_1 = rbx u< r12_4
        cond:32_1 = rbx == r12_4
        cond:34_1 = rbx == r12_4
        cond:36_1 = rbx == r12_4
        cond:38_1 = rbx == r12_4
        cond:40_1 = rbx == r12_4
        cond:42_1 = rbx == r12_4
        cond:44_1 = rbx == r12_4
        cond:46_1 = rbx == r12_4
        cond:48_1 = rbx == r12_4
    while (rbx s< r12_4)

uint64_t result = zx.q(arg29)

if (rbx s>= result.d)
    zmm1[0].o = var_2b0
    arg9 = var_2e0
else
    zmm16 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, _mm256_mask_set1_epi32(arg5, rbx), 
        data_142fc93a0)
    zmm17 = _mm256_mask_set1_epi32(arg5, result.d)
    uint64_t k1_43 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm17, zmm16)
    uint32_t rbx_1 = rbx << 2
    bool cond:37_1 = rbx_1 == 0
    bool cond:39_1 = rbx_1 == 0
    bool cond:41_1 = rbx_1 == 0
    bool cond:43_1 = rbx_1 == 0
    bool cond:45_1 = rbx_1 == 0
    bool cond:47_1 = rbx_1 == 0
    arg6 = _mm256_mask_loadu_epi32(k1_43, *(rcx + sx.q(rbx_1)))
    zmm2 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 3)
    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
    int64_t k2_5
    int128_t temp0_250
    temp0_250, k2_5 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), 
        *(arg24 + (zmm2[0].q << 2)))
    arg7 = temp0_250
    arg6 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 0xc)
    zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 4)
    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
    int64_t k2_7
    int128_t temp0_254
    temp0_254, k2_7 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(arg24 + zmm2[0].q))
    arg8 = temp0_254
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 8)
    arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
    int64_t k2_9
    int128_t temp0_258
    temp0_258, k2_9 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(arg24 + arg6[0].q))
    arg9 = temp0_258
    float var_200_1[0x8] = arg7
    float var_1e0_1[0x8] = arg8
    float var_1c0_1[0x8] = arg9
    float var_1a0_1[0x8] = zmm2
    arg6 = _mm256_broadcast_ss(arg23[3])
    float var_400_3[0x8] = arg6
    float var_3e0_3[0x8] = arg6
    float var_3c0_5[0x8] = arg6
    float var_3a0_2[0x8] = arg6
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg23[1])
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg23[2])
    zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg23)
    zmm2 = _mm256_mul_ps(arg6, zmm2)
    zmm21 = _mm256_mask_mul_ps(arg5, arg8, zmm19)
    zmm22 = _mm256_mask_mul_ps(arg5, arg9, zmm20)
    zmm23 = _mm256_mask_mul_ps(arg5, arg7, zmm18)
    zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm18, arg9)
    zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm19, arg7)
    zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, zmm20, arg8)
    zmm2 = _mm256_sub_ps(zmm2, zmm2)
    arg7 = _mm256_mask_add_ps(arg5, zmm21, zmm21)
    arg8 = _mm256_mask_add_ps(arg5, zmm22, zmm22)
    arg9 = _mm256_mask_add_ps(arg5, zmm23, zmm23)
    float var_360_3[0x8] = arg7
    float var_340_3[0x8] = arg8
    float var_320_3[0x8] = arg9
    zmm2 = _mm256_add_ps(zmm2, zmm2)
    float var_300_2[0x8] = zmm2
    zmm18 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_200_1), arg5, arg6, arg7)
    zmm19 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1e0_1), arg5, arg6, arg8)
    zmm20 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1c0_1), arg5, arg6, arg9)
    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg6, var_1a0_1)
    int256_t var_180_1 = _mm256_mask_store_ps(arg5, zmm18)
    int256_t var_160_1 = _mm256_mask_store_ps(arg5, zmm19)
    int256_t var_140_1 = _mm256_mask_store_ps(arg5, zmm20)
    float var_120_1[0x8] = zmm2
    arg6 = _mm256_broadcast_ss(arg23[1])
    zmm2 = _mm256_broadcast_ss(arg23[2])
    zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg23)
    zmm22 = _mm256_mask_mul_ps(arg5, arg8, zmm2)
    zmm23 = _mm256_mask_mul_ps(arg5, arg9, zmm21)
    zmm24 = _mm256_mask_mul_ps(arg5, arg7, arg6)
    zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, arg9, arg6)
    zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, arg7, zmm2)
    zmm24 = _mm256_mask3_fmsub_ps(zmm24, arg5, arg8, zmm21)
    arg6 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
    zmm2 = _mm256_mask_add_ps(arg5, zmm19, zmm23)
    arg9 = _mm256_mask_add_ps(arg5, zmm20, zmm24)
    arg7 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg23[4])
    arg8 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg23[5])
    arg9 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg9, arg23[6])
    zmm2 = _mm256_broadcast_ss(var_410)
    int64_t k0 = _mm256_cmp_ps_mask(k1_43, zmm2, arg7, 1)
    _kortest_mask8_u8(k0, k0)
    zmm1[0].o = var_2b0
    
    if (rbx_1 != 0)
        var_400_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0, zmm2, arg7, 1), zmm2)
    
    int64_t k0_1 = _mm256_cmp_ps_mask(k1_43, zmm2, arg7, 5)
    _kortest_mask8_u8(k0_1, k0_1)
    
    if (rbx_1 != 0)
        int64_t k2_11 = _mm256_cmp_ps_mask(k0_1, zmm2, arg7, 5)
        zmm2 = _mm256_broadcast_ss(var_420)
        int64_t k3_1 = _mm256_cmp_ps_mask(k2_11, arg7, zmm2, 1)
        int64_t k0_2 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_1, zmm17, zmm16)
        _kortest_mask8_u8(k0_2, k0_2)
        
        if (rbx_1 != 0)
            var_400_3 = _mm256_mask_storeu_ps(k3_1, zmm2)
        
        int64_t k2_12 = _mm256_cmp_ps_mask(k2_11, arg7, zmm2, 5)
        int64_t k0_3 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_12, zmm17, zmm16)
        _kortest_mask8_u8(k0_3, k0_3)
        
        if (rbx_1 != 0)
            var_400_3 = _mm256_mask_storeu_ps(k2_12, arg7)
    
    zmm2 = _mm256_broadcast_ss(temp0_7)
    int64_t k0_4 = _mm256_cmp_ps_mask(k1_43, zmm2, arg8, 1)
    _kortest_mask8_u8(k0_4, k0_4)
    
    if (rbx_1 != 0)
        var_3e0_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_4, zmm2, arg8, 1), zmm2)
    
    int64_t k0_5 = _mm256_cmp_ps_mask(k1_43, zmm2, arg8, 5)
    _kortest_mask8_u8(k0_5, k0_5)
    
    if (rbx_1 != 0)
        int64_t k2_14 = _mm256_cmp_ps_mask(k0_5, zmm2, arg8, 5)
        arg6 = _mm256_broadcast_ss(temp0_12)
        int64_t k3_2 = _mm256_cmp_ps_mask(k2_14, arg8, arg6, 1)
        int64_t k0_6 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_2, zmm17, zmm16)
        _kortest_mask8_u8(k0_6, k0_6)
        
        if (rbx_1 != 0)
            var_3e0_3 = _mm256_mask_storeu_ps(k3_2, arg6)
        
        int64_t k2_15 = _mm256_cmp_ps_mask(k2_14, arg8, arg6, 5)
        int64_t k0_7 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_15, zmm17, zmm16)
        _kortest_mask8_u8(k0_7, k0_7)
        
        if (rbx_1 != 0)
            var_3e0_3 = _mm256_mask_storeu_ps(k2_15, arg8)
    
    zmm2 = _mm256_broadcast_ss(temp0_8)
    int64_t k0_8 = _mm256_cmp_ps_mask(k1_43, zmm2, arg9, 1)
    _kortest_mask8_u8(k0_8, k0_8)
    
    if (rbx_1 != 0)
        var_3c0_5 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_8, zmm2, arg9, 1), zmm2)
    
    int64_t k0_9 = _mm256_cmp_ps_mask(k1_43, zmm2, arg9, 5)
    _kortest_mask8_u8(k0_9, k0_9)
    
    if (rbx_1 != 0)
        int64_t k2_17 = _mm256_cmp_ps_mask(k0_9, zmm2, arg9, 5)
        arg6 = _mm256_broadcast_ss(temp0_13)
        int64_t k3_3 = _mm256_cmp_ps_mask(k2_17, arg9, arg6, 1)
        int64_t k0_10 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_3, zmm17, zmm16)
        _kortest_mask8_u8(k0_10, k0_10)
        
        if (rbx_1 != 0)
            var_3c0_5 = _mm256_mask_storeu_ps(k3_3, arg6)
        
        int64_t k2_18 = _mm256_cmp_ps_mask(k2_17, arg9, arg6, 5)
        k0_9 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_18, zmm17, zmm16)
        _kortest_mask8_u8(k0_9, k0_9)
        
        if (rbx_1 != 0)
            var_3c0_5 = _mm256_mask_storeu_ps(k2_18, arg9)
    
    zmm20 = _mm256_mask_load_ps(k0_9, var_400_3)
    zmm19 = _mm256_mask_load_ps(k0_9, var_3e0_3)
    zmm18 = _mm256_mask_load_ps(k0_9, var_3c0_5)
    zmm24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *arg1)
    arg6 = _mm256_mask_sub_ps(k0_9, zmm20, zmm24)
    zmm25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *(arg1 + 4))
    zmm2 = _mm256_mask_sub_ps(k0_9, zmm19, zmm25)
    zmm26 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, arg1[1].d)
    zmm27 = _mm256_mask_sub_ps(k0_9, zmm18, zmm26)
    zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *arg3)
    arg6 = _mm256_mask_div_ps(k0_9, arg6, zmm22)
    zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, *(arg3 + 4))
    zmm2 = _mm256_mask_div_ps(k0_9, zmm2, zmm23)
    zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, arg3[1].d)
    zmm27 = _mm256_mask_div_ps(k0_9, zmm27, zmm21)
    zmm28 = _mm256_mask_cvttps_epi32(k0_9, arg6)
    arg13 = _mm256_cvttps_epi32(zmm2)
    arg20 = _mm256_mask_cvttps_epi32(k0_9, zmm27)
    arg6 = _mm256_mask_cvtepi32_ps(k0_9, zmm28)
    zmm2 = _mm256_cvtepi32_ps(arg13)
    arg14 = _mm256_mask_cvtepi32_ps(k0_9, arg20)
    arg6 = _mm256_mask3_fmadd_ps(arg6, k0_9, zmm22, zmm24)
    zmm2 = _mm256_mask3_fmadd_ps(zmm2, k0_9, zmm23, zmm25)
    arg14 = _mm256_mask3_fmadd_ps(arg14, k0_9, zmm21, zmm26)
    arg11[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm27 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, 2f)
    arg11[0].o = _mm_mask_div_ps(k0_9, arg11[0].o, zmm27[0].o)
    zmm29 = _mm256_mask_broadcastss_ps(k0_9, arg11[0].o)
    arg6 = _mm256_mask_add_ps(k0_9, zmm29, arg6)
    arg10[0].o = __vmovshdup_xmmdq_xmmdq(arg11[0].o)
    arg21 = _mm256_mask_broadcastsd_pd(k0_9, arg10[0].o)
    zmm2 = _mm256_mask_add_ps(k0_9, arg21, zmm2)
    arg11[0].o = _mm_permute_ps(arg11[0].o, 0xea)
    arg11 = _mm256_broadcastsd_pd(arg11[0].o)
    int64_t k2_19 = _mm256_cmp_ps_mask(k0_9, arg6, zmm20, 1)
    arg10 = _mm256_cmpeq_epi32(arg10, arg10)
    arg12 = _mm256_mask_add_epi32(k0_9, zmm28, arg10)
    zmm27 = _mm256_mask_blend_epi32(k2_19, arg12, zmm28)
    uint64_t var_400_4[0x4] = _mm256_mask_store_epi64(k0_9, zmm27)
    int64_t k0_11 = _mm256_cmp_ps_mask(k1_43, zmm2, zmm19, 1)
    _kortest_mask8_u8(k0_11, k0_11)
    
    if (rbx_1 != 0)
        zmm28 = _mm256_mask_mov_epi64(k0_11, arg13)
    
    arg14 = _mm256_add_ps(arg11, arg14)
    int64_t k2_20 = _mm256_cmp_ps_mask(k0_11, zmm2, zmm19, 1)
    int64_t k0_12 = _mm256_cmp_ps_mask(k1_43, zmm2, zmm19, 5)
    _kortest_mask8_u8(k0_12, k0_12)
    
    if (rbx_1 != 0)
        arg12 = _mm256_add_epi32(arg13, arg10)
    
    arg13 = _mm256_mask_blend_epi32(k2_20, arg12, zmm28)
    float var_3e0_4[0x8] = arg13
    int64_t k0_13 = _mm256_cmp_ps_mask(k1_43, arg14, zmm18, 1)
    _kortest_mask8_u8(k0_13, k0_13)
    
    if (rbx_1 != 0)
        zmm28 = _mm256_mask_mov_epi64(k0_13, arg20)
    
    int64_t k2_21 = _mm256_cmp_ps_mask(k0_13, arg14, zmm18, 1)
    int64_t k0_14 = _mm256_cmp_ps_mask(k1_43, arg14, zmm18, 5)
    _kortest_mask8_u8(k0_14, k0_14)
    
    if (rbx_1 != 0)
        _mm256_mask_add_epi32(k0_14, arg20, arg10)
    
    arg12 = _mm256_mask_mov_epi32(k2_21, zmm28)
    arg6 = _mm256_mask_cvtepi32_ps(k0_14, zmm27)
    zmm2 = _mm256_cvtepi32_ps(arg13)
    zmm28 = _mm256_mask_cvtepi32_ps(k0_14, arg12)
    arg6 = _mm256_mask3_fmadd_ps(arg6, k0_14, zmm22, zmm24)
    zmm2 = _mm256_mask3_fmadd_ps(zmm2, k0_14, zmm23, zmm25)
    zmm28 = _mm256_mask3_fmadd_ps(zmm28, k0_14, zmm21, zmm26)
    arg6 = _mm256_mask_add_ps(k0_14, zmm29, arg6)
    zmm2 = _mm256_mask_add_ps(k0_14, arg21, zmm2)
    zmm24 = _mm256_mask_add_ps(k0_14, arg11, zmm28)
    arg6 = _mm256_mask_sub_ps(k0_14, zmm20, arg6)
    zmm2 = _mm256_mask_sub_ps(k0_14, zmm19, zmm2)
    zmm24 = _mm256_mask_sub_ps(k0_14, zmm18, zmm24)
    arg6 = _mm256_mask_div_ps(k0_14, arg6, zmm22)
    zmm2 = _mm256_mask_div_ps(k0_14, zmm2, zmm23)
    float var_360_4[0x8] = arg6
    float var_340_4[0x8] = zmm2
    arg6 = _mm256_mask_div_ps(k0_14, zmm24, zmm21)
    float var_320_4[0x8] = arg6
    int64_t k0_15 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
        __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_14, zmm27, arg10), zmm17, zmm16)
    _kortest_mask8_u8(k0_15, k0_15)
    
    if (rbx_1 != 0)
        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
        int64_t k2_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_15, zmm27, arg6)
        arg6[0].o = zx.o(0)
        var_400_4 = _mm256_mask_storeu_epi32(k2_23, arg6)
        var_360_4 = _mm256_mask_storeu_ps(k2_23, arg6)
        zmm27 = _mm256_mask_load_epi64(k0_15, var_400_4)
    
    int32_t rax_4 = *arg4
    arg6 = _mm256_mask_set1_epi32(k0_15, rax_4 - 1)
    int64_t k2_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_15, zmm27, arg6)
    int64_t k0_16 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_24, zmm17, zmm16)
    _kortest_mask8_u8(k0_16, k0_16)
    
    if (rbx_1 != 0)
        cond:37_1 = rax_4 == 2
        cond:39_1 = rax_4 == 2
        cond:41_1 = rax_4 == 2
        cond:43_1 = rax_4 == 2
        cond:45_1 = rax_4 == 2
        cond:47_1 = rax_4 == 2
        var_400_4 = _mm256_mask_storeu_epi32(k2_24, _mm256_mask_set1_epi32(k0_16, rax_4 - 2))
        arg6 = _mm256_broadcast_ss(1f)
        var_360_4 = _mm256_mask_storeu_ps(k2_24, arg6)
    
    zmm21 = _mm256_mask_sub_ps(k0_16, zmm20, arg7)
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
    zmm22 = _mm256_mask_load_epi64(k0_16, var_3e0_4)
    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
    int64_t k2_25 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_16, zmm22, arg6)
    int64_t k0_17 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_25, zmm17, zmm16)
    _kortest_mask8_u8(k0_17, k0_17)
    
    if (not(cond:37_1))
        arg6[0].o = zx.o(0)
        var_3e0_4 = _mm256_mask_storeu_epi32(k2_25, arg6)
        var_340_4 = _mm256_mask_storeu_ps(k2_25, arg6)
        zmm22 = _mm256_mask_load_epi64(k0_17, var_3e0_4)
    
    zmm20 = _mm256_mask_sub_ps(k0_17, zmm19, arg8)
    zmm21 = _mm256_mask3_fmadd_ps(zmm21, k0_17, zmm21, zmm2)
    int32_t rdx_8 = arg4[1]
    arg6 = _mm256_mask_set1_epi32(k0_17, rdx_8 - 1)
    int64_t k2_26 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_17, zmm22, arg6)
    int64_t k0_18 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_26, zmm17, zmm16)
    _kortest_mask8_u8(k0_18, k0_18)
    
    if (not(cond:39_1))
        cond:41_1 = rdx_8 == 2
        cond:43_1 = rdx_8 == 2
        cond:45_1 = rdx_8 == 2
        cond:47_1 = rdx_8 == 2
        var_3e0_4 = _mm256_mask_storeu_epi32(k2_26, _mm256_mask_set1_epi32(k0_18, rdx_8 - 2))
        arg6 = _mm256_broadcast_ss(1f)
        var_340_4 = _mm256_mask_storeu_ps(k2_26, arg6)
    
    zmm18 = _mm256_mask_sub_ps(k0_18, zmm18, arg9)
    zmm20 = _mm256_mask3_fmadd_ps(zmm20, k0_18, zmm20, zmm21)
    zmm19 = _mm256_mask_load_epi64(k0_18, arg12)
    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
    int64_t k2_27 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_18, zmm19, arg6)
    int64_t k0_19 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_27, zmm17, zmm16)
    _kortest_mask8_u8(k0_19, k0_19)
    
    if (not(cond:41_1))
        arg6[0].o = zx.o(0)
        uint64_t var_3c0_7[0x4] = _mm256_mask_storeu_epi32(k2_27, arg6)
        var_320_4 = _mm256_mask_storeu_ps(k2_27, arg6)
        zmm19 = _mm256_mask_load_epi64(k0_19, var_3c0_7)
    
    zmm18 = _mm256_mask3_fmadd_ps(zmm18, k0_19, zmm18, zmm20)
    int32_t rdx_10 = arg4[2]
    int64_t k2_28 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_19, zmm19, 
        _mm256_mask_set1_epi32(k0_19, rdx_10 - 1))
    arg5 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_28, zmm17, zmm16)
    _kortest_mask8_u8(arg5, arg5)
    
    if (not(cond:43_1))
        cond:45_1 = rdx_10 == 2
        cond:47_1 = rdx_10 == 2
        uint64_t var_3c0_8[0x4] =
            _mm256_mask_storeu_epi32(k2_28, _mm256_mask_set1_epi32(arg5, rdx_10 - 2))
        var_320_4 = _mm256_mask_storeu_ps(k2_28, _mm256_broadcast_ss(1f))
        zmm19 = _mm256_mask_load_epi64(arg5, var_3c0_8)
    
    arg6 = __vpbroadcastd_ymmqq_memd(*(arg22 + 4))
    zmm2 = var_400_4
    zmm16 = _mm256_mask_load_epi64(arg5, var_3e0_4)
    zmm17 = _mm256_mask_mullo_epi32(arg5, arg6, zmm2)
    zmm20 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, *(arg22 + 8))
    zmm21 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm17, zmm16), zmm20)
    zmm22 = _mm256_mask_add_epi32(arg5, zmm21, zmm19)
    result = *(arg22 + 0x10)
    zmm22 = _mm256_mask_slli_epi32(arg5, zmm22, 2)
    zmm23[0].o = _mm_mask_xor_ps(arg5, zmm23[0].o, zmm23[0].o)
    int64_t k2_30
    int128_t temp0_421
    temp0_421, k2_30 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm22[0].q))
    zmm23 = temp0_421
    arg10 = _mm256_cmpeq_epi32(arg10, arg10)
    arg6 = _mm256_mullo_epi32(arg6, _mm256_sub_epi32(zmm2, arg10))
    zmm2 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, arg6, zmm16), zmm20)
    zmm22 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm2, zmm19), 2)
    zmm24[0].o = _mm_mask_xor_ps(arg5, zmm24[0].o, zmm24[0].o)
    int64_t k2_32
    int128_t temp0_430
    temp0_430, k2_32 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm22[0].q))
    zmm22 = _mm256_mask_load_ps(arg5, var_360_4)
    zmm25 = _mm256_mask_load_ps(arg5, var_340_4)
    zmm16 = _mm256_mask_sub_epi32(arg5, zmm16, arg10)
    zmm17 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm17, zmm16), zmm20)
    zmm26 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm17, zmm19), 2)
    zmm27[0].o = _mm_mask_xor_epi32(arg5, zmm27[0].o, zmm27[0].o)
    int64_t k2_34
    int128_t temp0_439
    temp0_439, k2_34 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm26[0].q))
    zmm27 = temp0_439
    arg6 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, arg6, zmm16), zmm20)
    zmm16 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, arg6, zmm19), 2)
    zmm20[0].o = _mm_mask_xor_epi32(arg5, zmm20[0].o, zmm20[0].o)
    int64_t k2_36
    int128_t temp0_445
    temp0_445, k2_36 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm16[0].q))
    zmm16 = _mm256_mask_sub_epi32(arg5, zmm19, arg10)
    zmm19 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm21, zmm16), 2)
    zmm21[0].o = _mm_mask_xor_epi32(arg5, zmm21[0].o, zmm21[0].o)
    int64_t k2_38
    int128_t temp0_450
    temp0_450, k2_38 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm19[0].q))
    zmm21 = temp0_450
    zmm2 = _mm256_slli_epi32(_mm256_mask_add_epi32(arg5, zmm2, zmm16), 2)
    zmm19[0].o = _mm_mask_xor_ps(arg5, zmm19[0].o, zmm19[0].o)
    int64_t k2_40
    int128_t temp0_454
    temp0_454, k2_40 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm2[0].q))
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
    zmm24 = _mm256_mask_sub_ps(arg5, temp0_430, zmm23)
    zmm17 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm17, zmm16), 2)
    zmm26[0].o = _mm_mask_xor_ps(arg5, zmm26[0].o, zmm26[0].o)
    int64_t k2_42
    int128_t temp0_460
    temp0_460, k2_42 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm17[0].q))
    zmm26 = temp0_460
    zmm24 = _mm256_mask3_fmadd_ps(zmm24, arg5, zmm22, zmm23)
    zmm17 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_445, zmm27), arg5, zmm22, zmm27)
    zmm19 = _mm256_mask_sub_ps(arg5, temp0_454, zmm21)
    arg6 = _mm256_slli_epi32(_mm256_mask_add_epi32(arg5, arg6, zmm16), 2)
    zmm16[0].o = _mm_mask_xor_epi32(arg5, zmm16[0].o, zmm16[0].o)
    int64_t k2_44
    int128_t temp0_468
    temp0_468, k2_44 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + arg6[0].q))
    zmm19 = _mm256_mask3_fmadd_ps(zmm19, arg5, zmm22, zmm21)
    arg6 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_468, zmm26), arg5, zmm22, zmm26)
    zmm17 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, zmm17, zmm24), arg5, zmm25, zmm24)
    arg6 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, arg6, zmm19), arg5, zmm25, zmm19)
    zmm16 = __vfmadd132ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
        _mm256_mask_sub_ps(arg5, arg6, zmm17), arg5, zmm17, var_320_4)
    int64_t k2_45 = _mm256_cmp_ps_mask(k1_43, zmm18, zmm2, 0xc)
    _kortest_mask8_u8(k2_45, k2_45)
    
    if (not(cond:45_1))
        arg6 = _mm256_mask_rsqrt14_ps(arg5, zmm18)
        arg6 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
            _mm256_mul_ps(arg6, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    _mm256_mask_mul_ps(arg5, zmm18, arg6), arg5, arg6, 0x40400000)), 
            0x3f000000)
        zmm2 = _mm256_mask_rcp14_ps(arg5, arg6)
        arg6 = __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, zmm2, 0x40000000)
        zmm16 = _mm256_mask3_fmadd_ps(zmm16, k2_45, zmm2, arg6)
    
    arg6[0].o = arg26
    zmm2 = _mm256_mask_sub_ps(arg5, zmm16, _mm256_broadcastss_ps(arg6[0].o))
    int64_t k1_44 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_43, zmm2, 0xb8d1b717, 1)
    _kortest_mask8_u8(k1_44, k1_44)
    
    if (cond:47_1)
        arg9 = var_2e0
    else
        arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, zmm2, var_2a0)
        arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg8, zmm2, var_280_1)
        arg9 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg9, zmm2, var_260)
        var_2a0 = _mm256_mask_storeu_ps(k1_44, arg7)
        int256_t var_280
        result = &var_280
        var_280_1 = _mm256_mask_storeu_ps(k1_44, arg8)
        var_260 = _mm256_mask_storeu_ps(k1_44, arg9)
        arg9 = _mm256_mask_add_ps(k1_44, var_2e0, zmm2)

int64_t k1_45 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm1[0].o, data_142fc92e0)
arg6 = _mm256_mask_load_ps(k1_45, var_2a0)
arg6 = _mm256_hadd_ps(arg6, arg6)
arg6 = _mm256_hadd_ps(arg6, arg6)
zmm2[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
arg6[0].o = arg6[0].o f+ zmm2[0]
zmm2 = _mm256_mask_load_ps(k1_45, var_280_1)
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
arg8 = _mm256_mask_load_ps(k1_45, var_260)
arg8 = _mm256_hadd_ps(arg8, arg8)
zmm2[0].o = zmm2[0].o f+ arg7[0]
arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm2[0].o, 0x10)
zmm2 = _mm256_hadd_ps(arg8, arg8)
arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm2[0].o = zmm2[0].o f+ arg7[0]
arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm2[0].o, 0x20)
zmm2[0].o = __vmovsd_xmmdq_memq(*arg28)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, arg28[1].d, 0x20)
arg6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
*arg28 = arg6[0]
*(arg28 + 4) = __vextractps_memd_xmmdq_immb(arg6[0].o, 1)
arg28[1].d = __vextractps_memd_xmmdq_immb(arg6[0].o, 2)
arg6 = _mm256_mask_mov_ps(k1_45, arg9)
arg6 = _mm256_hadd_ps(arg6, arg6)
arg6 = _mm256_hadd_ps(arg6, arg6)
zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
arg6[0].o = arg6[0].o f+ zmm1[0]
arg6[0].o = arg6[0].o f+ *arg27
*arg27 = arg6[0]
arg10[0].o = var_e8
arg11[0].o = var_d8
arg12[0].o = var_c8
arg13[0].o = var_b8
arg14[0].o = var_a8
arg15[0].o = var_98
arg16[0].o = var_88
arg17[0].o = var_78
arg18[0].o = var_68
arg19[0].o = var_58
_mm256_zeroupper()
return result
