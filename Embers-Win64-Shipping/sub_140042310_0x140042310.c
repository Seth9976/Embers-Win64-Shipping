// 函数: sub_140042310
// 地址: 0x140042310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg18[0].o
int128_t var_68 = arg17[0].o
int128_t var_78 = arg16[0].o
int128_t var_88 = arg15[0].o
int128_t var_98 = arg14[0].o
int128_t var_a8 = arg13[0].o
int128_t var_b8 = arg12[0].o
int128_t var_c8 = arg11[0].o
int128_t var_d8 = arg10[0].o
int128_t var_e8 = arg9[0].o
float zmm1[0x8]
zmm1[0].o = *arg28
uint64_t zmm21[0x4]
zmm21[0].o = zx.o(arg24)
arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
float var_280[0x8] = arg6
float var_2a0[0x8] = arg6
float var_2c0[0x8] = arg6
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
int32_t i = ((arg27 s>> 0x1f u>> 0x1d) + arg27) & 0xfffffff8
int128_t var_2d0 = zmm1[0].o
float var_300[0x8]
uint64_t result
float zmm3[0x8]
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
uint32_t zmm27[0x8]
float zmm30[0x8]
float zmm31[0x8]

if (i s<= 0)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    var_300 = arg6
    result = 0
else
    zmm3 = _mm256_broadcast_ss(arg22[3])
    arg6[0].o = *arg22
    zmm1[0].o = arg22[1]
    zmm2[0].o = arg22[2]
    arg7 = _mm256_broadcast_ss(*arg1)
    arg8 = _mm256_broadcast_ss(*(arg1 + 4))
    zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1].d)
    zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *(arg3 + 4))
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1].d)
    arg10[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 2f)
    arg10[0].o = _mm_mask_div_ps(arg5, arg10[0].o, zmm20[0].o)
    zmm20 = _mm256_mask_broadcastss_ps(arg5, arg10[0].o)
    arg9[0].o = __vmovshdup_xmmdq_xmmdq(arg10[0].o)
    zmm22 = _mm256_mask_broadcastsd_pd(arg5, arg9[0].o)
    arg10[0].o = _mm_permute_ps(arg10[0].o, 0xea)
    zmm23 = _mm256_mask_broadcastsd_pd(arg5, arg10[0].o)
    uint64_t var_220_1[0x4] =
        _mm256_mask_store_ps(arg5, __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *(arg21 + 4)))
    zmm24 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, *(arg21 + 8))
    int64_t rsi_1 = *(arg21 + 0x10)
    zmm21 = _mm256_mask_broadcastd_epi32(arg5, zmm21[0].o)
    float var_240_1[0x8] = _mm256_mask_store_epi64(arg5, zmm21)
    zmm21[0].o = _mm_mask_xor_epi32(arg5, zmm21[0].o, zmm21[0].o)
    zmm25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1.68155816e-44f)
    int32_t var_260_1[0x4] = _mm256_mask_store_ps(arg5, zmm25)
    result = 0
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
    zmm31 = _mm256_mask_broadcastss_ps(arg5, zmm1[0].o)
    arg9 = _mm256_broadcastss_ps(zmm2[0].o)
    arg10 = _mm256_broadcastss_ps(arg6[0].o)
    arg11 = _mm256_cmpeq_epi32(arg11, arg11)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    var_300 = arg6
    
    do
        arg6[0].o = zx.o(result.d)
        arg6[0].o = __vpmulld_xmmdq_xmmdq_memdq(arg6[0].o, var_260_1)
        arg6 = _mm256_broadcastd_epi32(arg6[0])
        zmm2 = __vpaddd_ymmqq_ymmqq_memqq(arg6, data_142fc93c0)
        arg19[0].o = _mm_mask_xor_ps(arg5, arg19[0].o, arg19[0].o)
        int64_t k1_2
        int128_t temp0_46
        temp0_46, k1_2 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg23 + zmm2[0].q))
        arg19 = temp0_46
        zmm2 = __vpaddd_ymmqq_ymmqq_memqq(arg6, data_142fc93e0)
        arg20[0].o = _mm_mask_xor_ps(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_4
        int128_t temp0_49
        temp0_49, k1_4 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg23 + zmm2[0].q))
        arg20 = temp0_49
        arg6 = __vpaddd_ymmqq_ymmqq_memqq(arg6, data_142fc9400)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int64_t k1_6
        int128_t temp0_52
        temp0_52, k1_6 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg23 + arg6[0].q))
        zmm2 = temp0_52
        float var_380_1[0x8] = _mm256_mask_store_ps(arg5, arg19)
        float var_360_1[0x8] = _mm256_mask_store_ps(arg5, arg20)
        float var_340_1[0x8] = zmm2
        int256_t var_320_1 = _mm256_mask_store_epi64(arg5, zmm21)
        float var_400_1[0x8] = zmm3
        float var_3e0_1[0x8] = zmm3
        float var_3c0_1[0x8] = zmm3
        float var_3a0_1[0x8] = zmm3
        arg6 = _mm256_mask_mul_ps(arg5, arg20, arg9)
        zmm30 = _mm256_mask_mul_ps(arg5, zmm2, arg10)
        arg12 = _mm256_mask_mul_ps(arg5, arg19, zmm31)
        zmm2 = _mm256_mask3_fmsub_ps(zmm2, arg5, zmm31, arg6)
        arg19 = _mm256_mask3_fmsub_ps(arg19, arg5, arg9, zmm30)
        arg20 = _mm256_mask3_fmsub_ps(arg20, arg5, arg10, arg12)
        arg6 = _mm256_add_ps(zmm2, zmm2)
        zmm2 = _mm256_mask_add_ps(arg5, arg19, arg19)
        arg19 = _mm256_mask_add_ps(arg5, arg20, arg20)
        arg20 = _mm256_mask_load_ps(arg5, var_380_1)
        zmm30 = _mm256_mask_load_ps(arg5, var_360_1)
        arg20 = _mm256_mask3_fmadd_ps(arg20, arg5, zmm3, arg6)
        zmm30 = _mm256_mask3_fmadd_ps(zmm30, arg5, zmm3, zmm2)
        arg12 = _mm256_mask3_fmadd_ps(var_340_1, arg5, zmm3, arg19)
        arg13 = _mm256_mul_ps(zmm2, arg9)
        arg14 = _mm256_mask_mul_ps(arg5, arg19, arg10)
        arg15 = _mm256_mask_mul_ps(arg5, arg6, zmm31)
        arg19 = _mm256_mask_add_ps(arg5, arg20, _mm256_mask3_fmsub_ps(arg19, arg5, zmm31, arg13))
        arg6 = _mm256_mask_add_ps(arg5, zmm30, _mm256_fmsub_ps(arg6, arg9, arg14))
        zmm2 = _mm256_add_ps(arg12, _mm256_fmsub_ps(zmm2, arg10, arg15))
        arg12 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg19, arg22[4])
        arg13 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg22[5])
        arg14 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg22[6])
        arg6 = _mm256_broadcast_ss(var_410)
        int64_t k1_7 = _mm256_cmp_ps_mask(arg5, arg6, arg12, 1)
        _kortest_mask8_u8(k1_7, k1_7)
        
        if (not(cond:48_1))
            var_400_1 = _mm256_mask_storeu_ps(k1_7, arg6)
        
        int64_t k1_8 = _mm256_cmp_ps_mask(arg5, arg6, arg12, 5)
        _kortest_mask8_u8(k1_8, k1_8)
        
        if (not(cond:2_1))
            arg6 = _mm256_broadcast_ss(var_420)
            int64_t k2_1 = _mm256_cmp_ps_mask(k1_8, arg12, arg6, 1)
            _kortest_mask8_u8(k2_1, k2_1)
            
            if (not(cond:5_1))
                var_400_1 = _mm256_mask_storeu_ps(k2_1, arg6)
            
            int64_t k1_9 = _mm256_cmp_ps_mask(k1_8, arg12, arg6, 5)
            _kortest_mask8_u8(k1_9, k1_9)
            
            if (not(cond:9_1))
                var_400_1 = _mm256_mask_storeu_ps(k1_9, arg12)
        
        arg6 = _mm256_broadcast_ss(temp0_7)
        int64_t k1_10 = _mm256_cmp_ps_mask(arg5, arg6, arg13, 1)
        _kortest_mask8_u8(k1_10, k1_10)
        
        if (not(cond:4_1))
            var_3e0_1 = _mm256_mask_storeu_ps(k1_10, arg6)
        
        int64_t k1_11 = _mm256_cmp_ps_mask(arg5, arg6, arg13, 5)
        _kortest_mask8_u8(k1_11, k1_11)
        
        if (not(cond:8_1))
            arg6 = _mm256_broadcast_ss(temp0_12)
            int64_t k2_2 = _mm256_cmp_ps_mask(k1_11, arg13, arg6, 1)
            _kortest_mask8_u8(k2_2, k2_2)
            
            if (not(cond:13_1))
                var_3e0_1 = _mm256_mask_storeu_ps(k2_2, arg6)
            
            int64_t k1_12 = _mm256_cmp_ps_mask(k1_11, arg13, arg6, 5)
            _kortest_mask8_u8(k1_12, k1_12)
            
            if (not(cond:17_1))
                var_3e0_1 = _mm256_mask_storeu_ps(k1_12, arg13)
        
        arg6 = _mm256_broadcast_ss(temp0_8)
        int64_t k1_13 = _mm256_cmp_ps_mask(arg5, arg6, arg14, 1)
        _kortest_mask8_u8(k1_13, k1_13)
        
        if (not(cond:12_1))
            var_3c0_1 = _mm256_mask_storeu_ps(k1_13, arg6)
        
        int64_t k1_14 = _mm256_cmp_ps_mask(arg5, arg6, arg14, 5)
        _kortest_mask8_u8(k1_14, k1_14)
        
        if (not(cond:16_1))
            arg6 = _mm256_broadcast_ss(temp0_13)
            int64_t k2_3 = _mm256_cmp_ps_mask(k1_14, arg14, arg6, 1)
            _kortest_mask8_u8(k2_3, k2_3)
            
            if (not(cond:21_1))
                var_3c0_1 = _mm256_mask_storeu_ps(k2_3, arg6)
            
            int64_t k1_15 = _mm256_cmp_ps_mask(k1_14, arg14, arg6, 5)
            _kortest_mask8_u8(k1_15, k1_15)
            
            if (not(cond:25_1))
                var_3c0_1 = _mm256_mask_storeu_ps(k1_15, arg14)
        
        arg17 = var_400_1
        arg6 = _mm256_sub_ps(arg17, arg7)
        zmm2 = _mm256_sub_ps(var_3e0_1, arg8)
        arg19 = _mm256_mask_sub_ps(arg5, var_3c0_1, zmm16)
        arg6 = _mm256_mask_div_ps(arg5, arg6, zmm17)
        arg20 = _mm256_mask_div_ps(arg5, zmm2, zmm18)
        arg19 = _mm256_mask_div_ps(arg5, arg19, zmm19)
        zmm2 = _mm256_cvttps_epi32(arg6)
        arg20 = _mm256_mask_cvttps_epi32(arg5, arg20)
        arg6 = _mm256_mask_cvttps_epi32(arg5, arg19)
        arg19 = _mm256_mask_cvtepi32_ps(arg5, zmm2)
        arg18 = _mm256_mask_cvtepi32_ps(arg5, arg20)
        zmm30 = _mm256_mask_cvtepi32_ps(arg5, arg6)
        arg19 = _mm256_mask3_fmadd_ps(arg19, arg5, zmm17, arg7)
        arg18 = _mm256_mask3_fmadd_ps(arg18, arg5, zmm18, arg8)
        zmm30 = _mm256_mask3_fmadd_ps(zmm30, arg5, zmm19, zmm16)
        arg19 = _mm256_mask_add_ps(arg5, zmm20, arg19)
        zmm1 = _mm256_mask_add_ps(arg5, zmm22, arg18)
        int64_t k1_16 = _mm256_cmp_ps_mask(arg5, arg19, arg17, 1)
        arg19 = _mm256_mask_add_epi32(arg5, zmm2, arg11)
        arg18 = _mm256_mask_blend_epi32(k1_16, arg19, zmm2)
        float var_400_2[0x8] = arg18
        int64_t k1_17 = _mm256_cmp_ps_mask(arg5, zmm1, var_3e0_1, 1)
        _kortest_mask8_u8(k1_17, k1_17)
        
        if (not(cond:20_1))
            zmm2 = _mm256_mask_mov_epi64(arg5, arg20)
        
        zmm30 = _mm256_mask_add_ps(arg5, zmm23, zmm30)
        
        if (not(cond:24_1))
            arg19 = _mm256_mask_add_epi32(arg5, arg20, arg11)
        
        arg20 = _mm256_mask_blend_epi32(k1_17, arg19, zmm2)
        float var_3e0_2[0x8] = _mm256_mask_store_epi64(arg5, arg20)
        int64_t k1_18 = _mm256_cmp_ps_mask(arg5, zmm30, var_3c0_1, 1)
        _kortest_mask8_u8(k1_18, k1_18)
        
        if (not(cond:28_1))
            zmm2 = arg6
        
        if (not(cond:30_1))
            _mm256_mask_add_epi32(arg5, arg6, arg11)
        
        arg19 = _mm256_mask_mov_epi32(k1_18, zmm2)
        int32_t var_3c0_2[0x8] = _mm256_mask_store_epi64(arg5, arg19)
        arg6 = _mm256_cvtepi32_ps(arg18)
        zmm1 = _mm256_mask_cvtepi32_ps(arg5, arg20)
        zmm2 = _mm256_mask_cvtepi32_ps(arg5, arg19)
        arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, zmm17, arg7)
        zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, zmm18, arg8)
        zmm26 = _mm256_mask_mov_ps(arg5, zmm16)
        zmm2 = _mm256_mask3_fmadd_ps(zmm2, arg5, zmm19, zmm16)
        arg6 = _mm256_mask_add_ps(arg5, zmm20, arg6)
        zmm1 = _mm256_mask_add_ps(arg5, zmm22, zmm1)
        zmm2 = _mm256_mask_add_ps(arg5, zmm23, zmm2)
        arg6 = _mm256_sub_ps(arg17, arg6)
        zmm1 = _mm256_sub_ps(var_3e0_1, zmm1)
        zmm2 = _mm256_sub_ps(var_3c0_1, zmm2)
        float var_380_2[0x8] = _mm256_mask_div_ps(arg5, arg6, zmm17)
        float var_360_2[0x8] = _mm256_mask_div_ps(arg5, zmm1, zmm18)
        float var_340_2[0x8] = _mm256_mask_div_ps(arg5, zmm2, zmm19)
        int64_t k1_19 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg18, arg11)
        _kortest_mask8_u8(k1_19, k1_19)
        
        if (not(cond:32_1))
            var_400_2 = _mm256_mask_storeu_epi32(k1_19, zmm21)
            var_380_2 = _mm256_mask_storeu_ps(k1_19, zmm21)
            arg18 = var_400_2
        
        zmm16 = _mm256_mask_mov_ps(arg5, arg8)
        int32_t rdx = *arg4
        int64_t k1_20 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg18, 
            _mm256_mask_set1_epi32(arg5, rdx - 1))
        _kortest_mask8_u8(k1_20, k1_20)
        
        if (not(cond:34_1))
            cond:36_1 = rdx == 2
            cond:38_1 = rdx == 2
            cond:40_1 = rdx == 2
            cond:42_1 = rdx == 2
            cond:44_1 = rdx == 2
            cond:46_1 = rdx == 2
            var_400_2 = _mm256_mask_storeu_epi32(k1_20, _mm256_mask_set1_epi32(arg5, rdx - 2))
            var_380_2 = _mm256_mask_storeu_ps(k1_20, _mm256_broadcast_ss(1f))
        
        arg8 = arg7
        zmm2 = var_3e0_2
        int64_t k1_21 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm2, arg11)
        _kortest_mask8_u8(k1_21, k1_21)
        
        if (not(cond:36_1))
            var_3e0_2 = _mm256_mask_storeu_epi32(k1_21, zmm21)
            var_360_2 = _mm256_mask_storeu_ps(k1_21, zmm21)
            zmm2 = var_3e0_2
        
        arg7 = _mm256_mask_mov_ps(arg5, zmm23)
        arg6 = _mm256_sub_ps(arg17, arg12)
        int32_t rdx_2 = arg4[1]
        int64_t k1_22 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, zmm2, 
            _mm256_mask_set1_epi32(arg5, rdx_2 - 1))
        _kortest_mask8_u8(k1_22, k1_22)
        
        if (not(cond:38_1))
            cond:40_1 = rdx_2 == 2
            cond:42_1 = rdx_2 == 2
            cond:44_1 = rdx_2 == 2
            cond:46_1 = rdx_2 == 2
            var_3e0_2 = _mm256_mask_storeu_epi32(k1_22, _mm256_mask_set1_epi32(arg5, rdx_2 - 2))
            var_360_2 = _mm256_mask_storeu_ps(k1_22, _mm256_broadcast_ss(1f))
        
        zmm23 = _mm256_mask_mov_ps(arg5, zmm22)
        zmm2 = _mm256_sub_ps(var_3c0_1, arg14)
        arg15 = _mm256_sub_ps(var_3e0_1, arg13)
        arg6 = _mm256_mask3_fmadd_ps(arg6, arg5, arg6, zmm21)
        arg17 = var_3c0_2
        int64_t k1_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg17, arg11)
        _kortest_mask8_u8(k1_23, k1_23)
        
        if (not(cond:40_1))
            int32_t var_3c0_3[0x8] = _mm256_mask_storeu_epi32(k1_23, zmm21)
            var_340_2 = _mm256_mask_storeu_ps(k1_23, zmm21)
            arg17 = var_3c0_3
        
        zmm22 = _mm256_mask_mov_ps(arg5, zmm20)
        arg16 = _mm256_mul_ps(zmm2, zmm2)
        arg15 = _mm256_fmadd_ps(arg15, arg15, arg6)
        int32_t rdx_4 = arg4[2]
        int64_t k1_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg17, 
            _mm256_mask_set1_epi32(arg5, rdx_4 - 1))
        _kortest_mask8_u8(k1_24, k1_24)
        
        if (not(cond:42_1))
            cond:44_1 = rdx_4 == 2
            cond:46_1 = rdx_4 == 2
            int32_t var_3c0_4[0x8] =
                _mm256_mask_storeu_epi32(k1_24, _mm256_mask_set1_epi32(arg5, rdx_4 - 2))
            var_340_2 = _mm256_mask_storeu_ps(k1_24, _mm256_broadcast_ss(1f))
            arg17 = var_3c0_4
        
        zmm20 = _mm256_mask_load_epi64(arg5, var_220_1)
        zmm2 = _mm256_mask_mullo_epi32(arg5, zmm20, var_400_2)
        arg19 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm2, var_3e0_2), zmm24)
        arg20 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, arg19, arg17), 2)
        zmm30[0].o = _mm_mask_xor_ps(arg5, zmm30[0].o, zmm30[0].o)
        int64_t k1_26
        int128_t temp0_178
        temp0_178, k1_26 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg20[0].q))
        zmm30 = temp0_178
        arg6 = _mm256_mask_mullo_epi32(arg5, zmm20, _mm256_sub_epi32(var_400_2, arg11))
        arg20 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, arg6, var_3e0_2), zmm24)
        arg18 = _mm256_slli_epi32(_mm256_mask_add_epi32(arg5, arg20, arg17), 2)
        zmm25[0].o = _mm_mask_xor_ps(arg5, zmm25[0].o, zmm25[0].o)
        int64_t k1_28
        int128_t temp0_186
        temp0_186, k1_28 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg18[0].q))
        arg18 = var_380_2
        zmm27 = _mm256_mask_load_ps(arg5, var_360_2)
        zmm1 = _mm256_sub_epi32(var_3e0_2, arg11)
        zmm2 = _mm256_mask_mullo_epi32(arg5, _mm256_add_epi32(zmm2, zmm1), zmm24)
        zmm20 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm2, arg17), 2)
        zmm21[0].o = _mm_mask_xor_ps(arg5, zmm21[0].o, zmm21[0].o)
        int64_t k1_30
        int128_t temp0_194
        temp0_194, k1_30 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + zmm20[0].q))
        zmm21 = temp0_194
        zmm1 = _mm256_mask_mullo_epi32(arg5, _mm256_add_epi32(arg6, zmm1), zmm24)
        arg6 = _mm256_slli_epi32(_mm256_add_epi32(zmm1, arg17), 2)
        zmm20[0].o = _mm_mask_xor_ps(arg5, zmm20[0].o, zmm20[0].o)
        int64_t k1_32
        int128_t temp0_200
        temp0_200, k1_32 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg6[0].q))
        arg17 = _mm256_sub_epi32(arg17, arg11)
        arg6 = _mm256_slli_epi32(_mm256_mask_add_epi32(arg5, arg19, arg17), 2)
        arg19[0].o = _mm_mask_xor_epi32(arg5, arg19[0].o, arg19[0].o)
        int64_t k1_34
        int128_t temp0_205
        temp0_205, k1_34 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg6[0].q))
        arg19 = temp0_205
        arg6 = _mm256_slli_epi32(_mm256_mask_add_epi32(arg5, arg20, arg17), 2)
        arg20[0].o = _mm_mask_xor_epi32(arg5, arg20[0].o, arg20[0].o)
        int64_t k1_36
        int128_t temp0_209
        temp0_209, k1_36 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg6[0].q))
        arg20 = temp0_209
        arg6 = _mm256_add_ps(arg15, arg16)
        zmm25 =
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_186, zmm30), arg5, arg18, zmm30)
        zmm2 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, arg17), 2)
        zmm30[0].o = _mm_mask_xor_ps(arg5, zmm30[0].o, zmm30[0].o)
        int64_t k1_38
        int128_t temp0_216
        temp0_216, k1_38 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + zmm2[0].q))
        zmm30 = temp0_216
        zmm2 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_200, zmm21), arg5, arg18, zmm21)
        zmm20 = _mm256_mask_sub_ps(arg5, arg20, arg19)
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(zmm1, arg17), 2)
        zmm21[0].o = _mm_mask_xor_ps(arg5, zmm21[0].o, zmm21[0].o)
        int64_t k1_40
        int128_t temp0_223
        temp0_223, k1_40 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + zmm1[0].q))
        zmm20 = _mm256_mask3_fmadd_ps(zmm20, arg5, arg18, arg19)
        zmm1 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_223, zmm30), arg5, arg18, zmm30)
        zmm21 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, zmm2, zmm25), arg5, zmm27, zmm25)
        zmm1 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, zmm1, zmm20), arg5, zmm27, zmm20)
        zmm2 = __vfmadd132ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
            _mm256_mask_sub_ps(arg5, zmm1, zmm21), arg5, zmm21, var_340_2)
        zmm21[0].o = _mm_mask_xor_ps(arg5, zmm21[0].o, zmm21[0].o)
        int64_t k1_41 = _mm256_cmp_ps_mask(arg5, arg6, zmm21, 0xc)
        _kortest_mask8_u8(k1_41, k1_41)
        
        if (not(cond:44_1))
            arg19 = _mm256_mask_rsqrt14_ps(arg5, arg6)
            arg6 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                _mm256_mask_mul_ps(arg5, arg19, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                        _mm256_mask_mul_ps(arg5, arg6, arg19), arg5, arg19, 0x40400000)), 
                0x3f000000)
            arg19 = _mm256_mask_rcp14_ps(arg5, arg6)
            zmm2 = _mm256_mask3_fmadd_ps(zmm2, k1_41, arg19, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg6, arg5, arg19, 0x40000000))
        
        zmm20 = _mm256_mask_mov_ps(arg5, zmm22)
        zmm22 = _mm256_mask_mov_ps(arg5, zmm23)
        zmm23 = _mm256_mask_mov_ps(arg5, arg7)
        arg7 = arg8
        arg8 = _mm256_mask_mov_ps(arg5, zmm16)
        zmm16 = _mm256_mask_mov_ps(arg5, zmm26)
        arg6 = __vsubps_ymmqq_ymmqq_memqq(zmm2, var_240_1)
        int64_t k1_42 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, arg6, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_42, k1_42)
        
        if (not(cond:46_1))
            arg12 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg12, arg6, var_2c0)
            arg13 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg13, arg6, var_2a0)
            arg14 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg14, arg6, var_280)
            var_2c0 = _mm256_mask_storeu_ps(k1_42, arg12)
            var_2a0 = _mm256_mask_storeu_ps(k1_42, arg13)
            var_280 = _mm256_mask_storeu_ps(k1_42, arg14)
            zmm1 = _mm256_mask_add_ps(k1_42, var_300, arg6)
            var_300 = zmm1
        
        result = zx.q(result.d + 8)
        cond:2_1 = result.d == i
        cond:4_1 = result.d == i
        cond:5_1 = result.d == i
        cond:8_1 = result.d == i
        cond:9_1 = result.d == i
        cond:12_1 = result.d == i
        cond:13_1 = result.d == i
        cond:16_1 = result.d == i
        cond:17_1 = result.d == i
        cond:20_1 = result.d == i
        cond:21_1 = result.d == i
        cond:24_1 = result.d u< i
        cond:25_1 = result.d == i
        cond:28_1 = result.d == i
        cond:30_1 = result.d u< i
        cond:32_1 = result.d == i
        cond:34_1 = result.d == i
        cond:36_1 = result.d == i
        cond:38_1 = result.d == i
        cond:40_1 = result.d == i
        cond:42_1 = result.d == i
        cond:44_1 = result.d == i
        cond:46_1 = result.d == i
        cond:48_1 = result.d == i
    while (result.d s< i)

bool cond:37 = result.d == arg27
bool cond:39 = result.d == arg27
bool cond:41 = result.d == arg27
bool cond:43 = result.d == arg27
bool cond:45 = result.d == arg27
bool cond:47 = result.d == arg27

if (result.d s>= arg27)
    zmm1[0].o = var_2d0
    arg8 = var_300
else
    zmm16 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, 
        _mm256_mask_set1_epi32(arg5, result.d), data_142fc93a0)
    zmm17 = _mm256_mask_set1_epi32(arg5, arg27)
    uint64_t k1_43 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm17, zmm16)
    arg6 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 3)
    int64_t k2_4 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
    int64_t k2_5
    int128_t temp0_261
    temp0_261, k2_5 = _mm256_mmask_i32gather_ps(k2_4, *(arg23 + (arg6[0].q << 2)))
    zmm2 = temp0_261
    arg6 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm16, 0xc)
    zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 4)
    int64_t k2_6 = __kmovq_maskmskw_masku64_avx512(k1_43)
    arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
    int64_t k2_7
    int128_t temp0_265
    temp0_265, k2_7 = _mm256_mmask_i32gather_ps(k2_6, *(arg23 + zmm3[0].q))
    arg7 = temp0_265
    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    arg6 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, arg6, 8)
    int64_t k2_8 = __kmovq_maskmskw_masku64_avx512(k1_43)
    arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
    int64_t k2_9
    int128_t temp0_269
    temp0_269, k2_9 = _mm256_mmask_i32gather_ps(k2_8, *(arg23 + arg6[0].q))
    arg8 = temp0_269
    float var_200_1[0x8] = zmm2
    float var_1e0_1[0x8] = arg7
    float var_1c0_1[0x8] = arg8
    float var_1a0_1[0x8] = zmm3
    arg6 = _mm256_broadcast_ss(arg22[3])
    float var_400_3[0x8] = arg6
    float var_3e0_3[0x8] = arg6
    float var_3c0_5[0x8] = arg6
    float var_3a0_2[0x8] = arg6
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg22[1])
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg22[2])
    zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg22)
    zmm3 = _mm256_mul_ps(arg6, zmm3)
    zmm21 = _mm256_mask_mul_ps(arg5, arg7, zmm19)
    zmm22 = _mm256_mask_mul_ps(arg5, arg8, zmm20)
    zmm23 = _mm256_mask_mul_ps(arg5, zmm2, zmm18)
    zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm18, arg8)
    zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm19, zmm2)
    zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, zmm20, arg7)
    zmm2 = _mm256_sub_ps(zmm3, zmm3)
    zmm3 = _mm256_mask_add_ps(arg5, zmm21, zmm21)
    arg7 = _mm256_mask_add_ps(arg5, zmm22, zmm22)
    arg8 = _mm256_mask_add_ps(arg5, zmm23, zmm23)
    float var_380_3[0x8] = zmm3
    float var_360_3[0x8] = arg7
    float var_340_3[0x8] = arg8
    zmm2 = _mm256_add_ps(zmm2, zmm2)
    float var_320_2[0x8] = zmm2
    zmm18 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_200_1), arg5, arg6, zmm3)
    zmm19 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1e0_1), arg5, arg6, arg7)
    zmm20 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1c0_1), arg5, arg6, arg8)
    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, arg6, var_1a0_1)
    int256_t var_180_1 = _mm256_mask_store_ps(arg5, zmm18)
    int256_t var_160_1 = _mm256_mask_store_ps(arg5, zmm19)
    int256_t var_140_1 = _mm256_mask_store_ps(arg5, zmm20)
    float var_120_1[0x8] = zmm2
    arg6 = _mm256_broadcast_ss(arg22[1])
    zmm2 = _mm256_broadcast_ss(arg22[2])
    zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg22)
    zmm22 = _mm256_mask_mul_ps(arg5, arg7, zmm2)
    zmm23 = _mm256_mask_mul_ps(arg5, arg8, zmm21)
    zmm24 = _mm256_mask_mul_ps(arg5, zmm3, arg6)
    zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, arg8, arg6)
    zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, zmm3, zmm2)
    zmm24 = _mm256_mask3_fmsub_ps(zmm24, arg5, arg7, zmm21)
    arg6 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
    zmm2 = _mm256_mask_add_ps(arg5, zmm19, zmm23)
    arg8 = _mm256_mask_add_ps(arg5, zmm20, zmm24)
    zmm3 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg22[4])
    arg7 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg22[5])
    arg8 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg8, arg22[6])
    arg6 = _mm256_broadcast_ss(var_410)
    int64_t k0 = _mm256_cmp_ps_mask(k1_43, arg6, zmm3, 1)
    _kortest_mask8_u8(k0, k0)
    zmm1[0].o = var_2d0
    
    if (result.d != arg27)
        var_400_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0, arg6, zmm3, 1), arg6)
    
    int64_t k0_1 = _mm256_cmp_ps_mask(k1_43, arg6, zmm3, 5)
    _kortest_mask8_u8(k0_1, k0_1)
    
    if (result.d != arg27)
        int64_t k2_11 = _mm256_cmp_ps_mask(k0_1, arg6, zmm3, 5)
        arg6 = _mm256_broadcast_ss(var_420)
        int64_t k3_1 = _mm256_cmp_ps_mask(k2_11, zmm3, arg6, 1)
        int64_t k0_2 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_1, zmm17, zmm16)
        _kortest_mask8_u8(k0_2, k0_2)
        
        if (result.d != arg27)
            var_400_3 = _mm256_mask_storeu_ps(k3_1, arg6)
        
        int64_t k2_12 = _mm256_cmp_ps_mask(k2_11, zmm3, arg6, 5)
        int64_t k0_3 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_12, zmm17, zmm16)
        _kortest_mask8_u8(k0_3, k0_3)
        
        if (result.d != arg27)
            var_400_3 = _mm256_mask_storeu_ps(k2_12, zmm3)
    
    arg6 = _mm256_broadcast_ss(temp0_7)
    int64_t k0_4 = _mm256_cmp_ps_mask(k1_43, arg6, arg7, 1)
    _kortest_mask8_u8(k0_4, k0_4)
    
    if (result.d != arg27)
        var_3e0_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_4, arg6, arg7, 1), arg6)
    
    int64_t k0_5 = _mm256_cmp_ps_mask(k1_43, arg6, arg7, 5)
    _kortest_mask8_u8(k0_5, k0_5)
    
    if (result.d != arg27)
        int64_t k2_14 = _mm256_cmp_ps_mask(k0_5, arg6, arg7, 5)
        arg6 = _mm256_broadcast_ss(temp0_12)
        int64_t k3_2 = _mm256_cmp_ps_mask(k2_14, arg7, arg6, 1)
        int64_t k0_6 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_2, zmm17, zmm16)
        _kortest_mask8_u8(k0_6, k0_6)
        
        if (result.d != arg27)
            var_3e0_3 = _mm256_mask_storeu_ps(k3_2, arg6)
        
        int64_t k2_15 = _mm256_cmp_ps_mask(k2_14, arg7, arg6, 5)
        int64_t k0_7 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_15, zmm17, zmm16)
        _kortest_mask8_u8(k0_7, k0_7)
        
        if (result.d != arg27)
            var_3e0_3 = _mm256_mask_storeu_ps(k2_15, arg7)
    
    arg6 = _mm256_broadcast_ss(temp0_8)
    int64_t k0_8 = _mm256_cmp_ps_mask(k1_43, arg6, arg8, 1)
    _kortest_mask8_u8(k0_8, k0_8)
    
    if (result.d != arg27)
        var_3c0_5 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_8, arg6, arg8, 1), arg6)
    
    int64_t k0_9 = _mm256_cmp_ps_mask(k1_43, arg6, arg8, 5)
    _kortest_mask8_u8(k0_9, k0_9)
    
    if (result.d != arg27)
        int64_t k2_17 = _mm256_cmp_ps_mask(k0_9, arg6, arg8, 5)
        arg6 = _mm256_broadcast_ss(temp0_13)
        int64_t k3_3 = _mm256_cmp_ps_mask(k2_17, arg8, arg6, 1)
        int64_t k0_10 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_3, zmm17, zmm16)
        _kortest_mask8_u8(k0_10, k0_10)
        
        if (result.d != arg27)
            var_3c0_5 = _mm256_mask_storeu_ps(k3_3, arg6)
        
        int64_t k2_18 = _mm256_cmp_ps_mask(k2_17, arg8, arg6, 5)
        k0_9 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_18, zmm17, zmm16)
        _kortest_mask8_u8(k0_9, k0_9)
        
        if (result.d != arg27)
            var_3c0_5 = _mm256_mask_storeu_ps(k2_18, arg8)
    
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
    arg19 = _mm256_mask_cvttps_epi32(k0_9, arg6)
    zmm2 = _mm256_cvttps_epi32(zmm2)
    zmm30 = _mm256_mask_cvttps_epi32(k0_9, zmm27)
    arg6 = _mm256_mask_cvtepi32_ps(k0_9, arg19)
    zmm27 = _mm256_mask_cvtepi32_ps(k0_9, zmm2)
    arg11 = _mm256_mask_cvtepi32_ps(k0_9, zmm30)
    arg6 = _mm256_mask3_fmadd_ps(arg6, k0_9, zmm22, zmm24)
    zmm27 = _mm256_mask3_fmadd_ps(zmm27, k0_9, zmm23, zmm25)
    arg11 = _mm256_mask3_fmadd_ps(arg11, k0_9, zmm21, zmm26)
    arg10[0].o = __vmovsd_xmmdq_memq(*arg3)
    arg20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_9, 2f)
    arg9[0].o = _mm_mask_div_ps(k0_9, arg10[0].o, arg20[0].o)
    arg20 = _mm256_mask_broadcastss_ps(k0_9, arg9[0].o)
    arg6 = _mm256_mask_add_ps(k0_9, arg20, arg6)
    arg10[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
    zmm31 = _mm256_mask_broadcastsd_pd(k0_9, arg10[0].o)
    arg12 = _mm256_mask_add_ps(k0_9, zmm31, zmm27)
    arg10[0].o = _mm_permute_ps(arg9[0].o, 0xea)
    arg10 = _mm256_broadcastsd_pd(arg10[0].o)
    int64_t k2_19 = _mm256_cmp_ps_mask(k0_9, arg6, zmm20, 1)
    arg9 = _mm256_cmpeq_epi32(arg9, arg9)
    arg6 = _mm256_mask_add_epi32(k0_9, arg19, arg9)
    zmm27 = _mm256_mask_blend_epi32(k2_19, arg6, arg19)
    uint64_t var_400_4[0x4] = _mm256_mask_store_epi64(k0_9, zmm27)
    int64_t k0_11 = _mm256_cmp_ps_mask(k1_43, arg12, zmm19, 1)
    _kortest_mask8_u8(k0_11, k0_11)
    
    if (result.d != arg27)
        arg19 = _mm256_mask_mov_epi64(k0_11, zmm2)
    
    arg11 = _mm256_add_ps(arg10, arg11)
    int64_t k2_20 = _mm256_cmp_ps_mask(k0_11, arg12, zmm19, 1)
    int64_t k0_12 = _mm256_cmp_ps_mask(k1_43, arg12, zmm19, 5)
    _kortest_mask8_u8(k0_12, k0_12)
    
    if (result.d != arg27)
        arg6 = _mm256_add_epi32(zmm2, arg9)
    
    zmm2 = _mm256_mask_blend_epi32(k2_20, arg6, arg19)
    float var_3e0_4[0x8] = zmm2
    int64_t k0_13 = _mm256_cmp_ps_mask(k1_43, arg11, zmm18, 1)
    _kortest_mask8_u8(k0_13, k0_13)
    
    if (result.d != arg27)
        arg19 = _mm256_mask_mov_epi64(k0_13, zmm30)
    
    int64_t k2_21 = _mm256_cmp_ps_mask(k0_13, arg11, zmm18, 1)
    int64_t k0_14 = _mm256_cmp_ps_mask(k1_43, arg11, zmm18, 5)
    _kortest_mask8_u8(k0_14, k0_14)
    
    if (result.d != arg27)
        _mm256_mask_add_epi32(k0_14, zmm30, arg9)
    
    arg6 = _mm256_mask_mov_epi32(k2_21, arg19)
    float var_3c0_6[0x8] = arg6
    arg19 = _mm256_mask_cvtepi32_ps(k0_14, zmm27)
    zmm2 = _mm256_cvtepi32_ps(zmm2)
    arg6 = _mm256_cvtepi32_ps(arg6)
    arg19 = _mm256_mask3_fmadd_ps(arg19, k0_14, zmm22, zmm24)
    zmm2 = _mm256_mask3_fmadd_ps(zmm2, k0_14, zmm23, zmm25)
    arg6 = _mm256_mask3_fmadd_ps(arg6, k0_14, zmm21, zmm26)
    zmm24 = _mm256_mask_add_ps(k0_14, arg20, arg19)
    zmm2 = _mm256_mask_add_ps(k0_14, zmm31, zmm2)
    arg6 = _mm256_add_ps(arg10, arg6)
    zmm24 = _mm256_mask_sub_ps(k0_14, zmm20, zmm24)
    zmm2 = _mm256_mask_sub_ps(k0_14, zmm19, zmm2)
    arg6 = _mm256_mask_sub_ps(k0_14, zmm18, arg6)
    zmm22 = _mm256_mask_div_ps(k0_14, zmm24, zmm22)
    zmm2 = _mm256_mask_div_ps(k0_14, zmm2, zmm23)
    float var_380_4[0x8] = _mm256_mask_store_ps(k0_14, zmm22)
    float var_360_4[0x8] = zmm2
    arg6 = _mm256_mask_div_ps(k0_14, arg6, zmm21)
    float var_340_4[0x8] = arg6
    int64_t k0_15 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
        __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_14, zmm27, arg9), zmm17, zmm16)
    _kortest_mask8_u8(k0_15, k0_15)
    
    if (result.d != arg27)
        arg6 = _mm256_cmpeq_epi32(arg6, arg6)
        int64_t k2_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_15, zmm27, arg6)
        arg6[0].o = zx.o(0)
        var_400_4 = _mm256_mask_storeu_epi32(k2_23, arg6)
        var_380_4 = _mm256_mask_storeu_ps(k2_23, arg6)
        zmm27 = _mm256_mask_load_epi64(k0_15, var_400_4)
    
    int32_t rax_2 = *arg4
    arg6 = _mm256_mask_set1_epi32(k0_15, rax_2 - 1)
    int64_t k2_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_15, zmm27, arg6)
    int64_t k0_16 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_24, zmm17, zmm16)
    _kortest_mask8_u8(k0_16, k0_16)
    
    if (result.d != arg27)
        cond:37 = rax_2 == 2
        cond:39 = rax_2 == 2
        cond:41 = rax_2 == 2
        cond:43 = rax_2 == 2
        cond:45 = rax_2 == 2
        cond:47 = rax_2 == 2
        var_400_4 = _mm256_mask_storeu_epi32(k2_24, _mm256_mask_set1_epi32(k0_16, rax_2 - 2))
        arg6 = _mm256_broadcast_ss(1f)
        var_380_4 = _mm256_mask_storeu_ps(k2_24, arg6)
    
    zmm2 = _mm256_mask_sub_ps(k0_16, zmm20, zmm3)
    zmm20[0].o = _mm_mask_xor_ps(k0_16, zmm20[0].o, zmm20[0].o)
    zmm21 = _mm256_mask_load_epi64(k0_16, var_3e0_4)
    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
    int64_t k2_25 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_16, zmm21, arg6)
    int64_t k0_17 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_25, zmm17, zmm16)
    _kortest_mask8_u8(k0_17, k0_17)
    
    if (not(cond:37))
        arg6[0].o = zx.o(0)
        var_3e0_4 = _mm256_mask_storeu_epi32(k2_25, arg6)
        var_360_4 = _mm256_mask_storeu_ps(k2_25, arg6)
        zmm21 = _mm256_mask_load_epi64(k0_17, var_3e0_4)
    
    arg6 = _mm256_mask_sub_ps(k0_17, zmm19, arg7)
    zmm2 = _mm256_mask3_fmadd_ps(zmm2, k0_17, zmm2, zmm20)
    int32_t rdx_7 = arg4[1]
    int64_t k2_26 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_17, zmm21, 
        _mm256_mask_set1_epi32(k0_17, rdx_7 - 1))
    int64_t k0_18 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_26, zmm17, zmm16)
    _kortest_mask8_u8(k0_18, k0_18)
    
    if (not(cond:39))
        cond:41 = rdx_7 == 2
        cond:43 = rdx_7 == 2
        cond:45 = rdx_7 == 2
        cond:47 = rdx_7 == 2
        var_3e0_4 = _mm256_mask_storeu_epi32(k2_26, _mm256_mask_set1_epi32(k0_18, rdx_7 - 2))
        var_360_4 =
            _mm256_mask_storeu_ps(k2_26, __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_18, 1f))
    
    zmm18 = _mm256_mask_sub_ps(k0_18, zmm18, arg8)
    arg6 = _mm256_fmadd_ps(arg6, arg6, zmm2)
    zmm19 = _mm256_mask_load_epi64(k0_18, var_3c0_6)
    zmm2 = _mm256_cmpeq_epi32(zmm2, zmm2)
    int64_t k2_27 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_18, zmm19, zmm2)
    int64_t k0_19 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_27, zmm17, zmm16)
    _kortest_mask8_u8(k0_19, k0_19)
    
    if (not(cond:41))
        zmm2[0].o = zx.o(0)
        uint64_t var_3c0_7[0x4] = _mm256_mask_storeu_epi32(k2_27, zmm2)
        var_340_4 = _mm256_mask_storeu_ps(k2_27, zmm2)
        zmm19 = _mm256_mask_load_epi64(k0_19, var_3c0_7)
    
    zmm18 = _mm256_mask3_fmadd_ps(zmm18, k0_19, zmm18, arg6)
    int32_t rdx_9 = arg4[2]
    int64_t k2_28 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_19, zmm19, 
        _mm256_mask_set1_epi32(k0_19, rdx_9 - 1))
    arg5 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_28, zmm17, zmm16)
    _kortest_mask8_u8(arg5, arg5)
    
    if (not(cond:43))
        cond:45 = rdx_9 == 2
        cond:47 = rdx_9 == 2
        uint64_t var_3c0_8[0x4] =
            _mm256_mask_storeu_epi32(k2_28, _mm256_mask_set1_epi32(arg5, rdx_9 - 2))
        var_340_4 = _mm256_mask_storeu_ps(k2_28, _mm256_broadcast_ss(1f))
        zmm19 = _mm256_mask_load_epi64(arg5, var_3c0_8)
    
    zmm2 = __vpbroadcastd_ymmqq_memd(*(arg21 + 4))
    zmm16 = _mm256_mask_load_epi64(arg5, var_400_4)
    zmm17 = _mm256_mask_load_epi64(arg5, var_3e0_4)
    zmm20 = _mm256_mask_mullo_epi32(arg5, zmm2, zmm16)
    zmm21 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, *(arg21 + 8))
    zmm22 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm20, zmm17), zmm21)
    arg6 = _mm256_mask_add_epi32(arg5, zmm22, zmm19)
    result = *(arg21 + 0x10)
    arg6 = _mm256_slli_epi32(arg6, 2)
    zmm23[0].o = _mm_mask_xor_ps(arg5, zmm23[0].o, zmm23[0].o)
    int64_t k2_30
    int128_t temp0_434
    temp0_434, k2_30 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + arg6[0].q))
    zmm23 = temp0_434
    arg6 = _mm256_cmpeq_epi32(arg6, arg6)
    zmm2 = _mm256_mask_mullo_epi32(arg5, zmm2, _mm256_mask_sub_epi32(arg5, zmm16, arg6))
    zmm16 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm2, zmm17), zmm21)
    zmm24 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm16, zmm19), 2)
    zmm25[0].o = _mm_mask_xor_ps(arg5, zmm25[0].o, zmm25[0].o)
    int64_t k2_32
    int128_t temp0_443
    temp0_443, k2_32 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm24[0].q))
    zmm25 = temp0_443
    zmm24 = _mm256_mask_load_ps(arg5, var_380_4)
    zmm26 = _mm256_mask_load_ps(arg5, var_360_4)
    zmm17 = _mm256_mask_sub_epi32(arg5, zmm17, arg6)
    zmm20 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm20, zmm17), zmm21)
    zmm27 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm20, zmm19), 2)
    arg19[0].o = _mm_mask_xor_ps(arg5, arg19[0].o, arg19[0].o)
    int64_t k2_34
    int128_t temp0_452
    temp0_452, k2_34 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm27[0].q))
    arg19 = temp0_452
    zmm2 = _mm256_mask_mullo_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm2, zmm17), zmm21)
    zmm17 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm2, zmm19), 2)
    zmm21[0].o = _mm_mask_xor_epi32(arg5, zmm21[0].o, zmm21[0].o)
    int64_t k2_36
    int128_t temp0_458
    temp0_458, k2_36 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm17[0].q))
    arg6 = _mm256_mask_sub_epi32(arg5, zmm19, arg6)
    zmm17 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm22, arg6), 2)
    zmm19[0].o = _mm_mask_xor_epi32(arg5, zmm19[0].o, zmm19[0].o)
    int64_t k2_38
    int128_t temp0_463
    temp0_463, k2_38 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm17[0].q))
    zmm19 = temp0_463
    zmm16 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm16, arg6), 2)
    zmm17[0].o = _mm_mask_xor_ps(arg5, zmm17[0].o, zmm17[0].o)
    int64_t k2_40
    int128_t temp0_467
    temp0_467, k2_40 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm16[0].q))
    zmm16[0].o = _mm_mask_xor_ps(arg5, zmm16[0].o, zmm16[0].o)
    zmm22 = _mm256_mask_sub_ps(arg5, zmm25, zmm23)
    zmm20 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, zmm20, arg6), 2)
    zmm25[0].o = _mm_mask_xor_ps(arg5, zmm25[0].o, zmm25[0].o)
    int64_t k2_42
    int128_t temp0_473
    temp0_473, k2_42 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm20[0].q))
    zmm25 = temp0_473
    zmm22 = _mm256_mask3_fmadd_ps(zmm22, arg5, zmm24, zmm23)
    zmm20 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_458, arg19), arg5, zmm24, arg19)
    zmm17 = _mm256_mask_sub_ps(arg5, temp0_467, zmm19)
    arg6 = _mm256_slli_epi32(_mm256_add_epi32(zmm2, arg6), 2)
    int64_t k2_44
    int128_t temp0_480
    temp0_480, k2_44 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + arg6[0].q))
    zmm17 = _mm256_mask3_fmadd_ps(zmm17, arg5, zmm24, zmm19)
    arg6 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_480, zmm25), arg5, zmm24, zmm25)
    zmm2 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, zmm20, zmm22), arg5, zmm26, zmm22)
    arg6 = __vfmadd132ps_ymmqq_ymmqq_memqq(
        _mm256_sub_ps(
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, arg6, zmm17), arg5, zmm26, zmm17), 
            zmm2), 
        zmm2, var_340_4)
    int64_t k2_45 = _mm256_cmp_ps_mask(k1_43, zmm18, zmm16, 0xc)
    _kortest_mask8_u8(k2_45, k2_45)
    
    if (not(cond:45))
        zmm2 = _mm256_mask_rsqrt14_ps(arg5, zmm18)
        zmm2 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
            _mm256_mask_mul_ps(arg5, zmm2, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    _mm256_mask_mul_ps(arg5, zmm18, zmm2), arg5, zmm2, 0x40400000)), 
            0x3f000000)
        zmm16 = _mm256_mask_rcp14_ps(arg5, zmm2)
        zmm2 = __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm2, arg5, zmm16, 0x40000000)
        arg6 = _mm256_mask3_fmadd_ps(arg6, k2_45, zmm16, zmm2)
    
    zmm2[0].o = arg24
    zmm2 = _mm256_broadcastss_ps(zmm2[0].o)
    arg6 = _mm256_sub_ps(arg6, zmm2)
    int64_t k1_44 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_43, arg6, 0xb8d1b717, 1)
    _kortest_mask8_u8(k1_44, k1_44)
    
    if (cond:47)
        arg8 = var_300
    else
        zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, arg6, var_2c0)
        arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, arg6, var_2a0)
        arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg8, arg6, var_280)
        var_2c0 = _mm256_mask_storeu_ps(k1_44, zmm3)
        var_2a0 = _mm256_mask_storeu_ps(k1_44, arg7)
        var_280 = _mm256_mask_storeu_ps(k1_44, arg8)
        arg8 = _mm256_mask_add_ps(k1_44, var_300, arg6)

int64_t k1_45 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm1[0].o, data_142fc92e0)
arg6 = _mm256_mask_load_ps(k1_45, var_2c0)
arg6 = _mm256_hadd_ps(arg6, arg6)
arg6 = _mm256_hadd_ps(arg6, arg6)
zmm2[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
arg6[0].o = arg6[0].o f+ zmm2[0]
zmm2 = _mm256_mask_load_ps(k1_45, var_2a0)
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
arg7 = _mm256_mask_load_ps(k1_45, var_280)
arg7 = _mm256_hadd_ps(arg7, arg7)
zmm2[0].o = zmm2[0].o f+ zmm3[0]
arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm2[0].o, 0x10)
zmm2 = _mm256_hadd_ps(arg7, arg7)
zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm2[0].o = zmm2[0].o f+ zmm3[0]
arg6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm2[0].o, 0x20)
zmm2[0].o = __vmovsd_xmmdq_memq(*arg26)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, arg26[1].d, 0x20)
arg6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm2[0].o)
*arg26 = arg6[0]
*(arg26 + 4) = __vextractps_memd_xmmdq_immb(arg6[0].o, 1)
arg26[1].d = __vextractps_memd_xmmdq_immb(arg6[0].o, 2)
arg6 = _mm256_mask_mov_ps(k1_45, arg8)
arg6 = _mm256_hadd_ps(arg6, arg6)
arg6 = _mm256_hadd_ps(arg6, arg6)
zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
arg6[0].o = arg6[0].o f+ zmm1[0]
arg6[0].o = arg6[0].o f+ *arg25
*arg25 = arg6[0]
arg9[0].o = var_e8
arg10[0].o = var_d8
arg11[0].o = var_c8
arg12[0].o = var_b8
arg13[0].o = var_a8
arg14[0].o = var_98
arg15[0].o = var_88
arg16[0].o = var_78
arg17[0].o = var_68
arg18[0].o = var_58
_mm256_zeroupper()
return result
