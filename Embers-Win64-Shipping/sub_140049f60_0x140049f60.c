// 函数: sub_140049f60
// 地址: 0x140049f60
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
float zmm20[0x8]
zmm20[0].o = zx.o(arg24)
float zmm0[0x8]
zmm0[0].o = zx.o(0)
float var_260[0x8] = zmm0
float var_280_1[0x8] = zmm0
float var_2a0[0x8] = zmm0
float zmm2[0x8]
zmm2[0].o = __vmovsd_xmmdq_memq(*arg3)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, arg3[1].d, 0x20)
zmm2 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, 0x3f000000)
float zmm3[0x8]
zmm3[0].o = __vmovsd_xmmdq_memq(*arg2)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, arg2[1].d, 0x20)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
float var_3f0 = zmm3[0]
float temp0_6 = __vextractps_memd_xmmdq_immb(zmm3[0].o, 1)
float temp0_7 = __vextractps_memd_xmmdq_immb(zmm3[0].o, 2)
zmm3[0].o = __vmovsd_xmmdq_memq(*arg1)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, arg1[1].d, 0x20)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
float var_400 = zmm2[0]
float temp0_11 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 1)
float temp0_12 = __vextractps_memd_xmmdq_immb(zmm2[0].o, 2)
int32_t r12_4 = ((arg27 s>> 0x1f u>> 0x1d) + arg27) & 0xfffffff8
float var_2c0[0x8]
float (* rcx)[0x8]
uint32_t rbx
float zmm1[0x8]
float zmm5[0x8]
float zmm16[0x8]
float zmm18[0x8]
float zmm19[0x8]
float zmm21[0x8]
float zmm22[0x8]
uint32_t zmm23[0x8]
float zmm24[0x8]
float zmm25[0x8]
float zmm26[0x8]
float zmm27[0x8]
float zmm28[0x8]
float zmm29[0x8]

if (r12_4 s<= 0)
    zmm0[0].o = zx.o(0)
    var_2c0 = zmm0
    rbx = 0
    rcx = arg23
else
    zmm2 = _mm256_broadcast_ss(arg21[3])
    zmm28[0].o = _mm_mask_load_ss(arg5, *arg21)
    arg8[0].o = arg21[1]
    arg7[0].o = zx.o(arg21[2])
    zmm3 = _mm256_broadcast_ss(*arg1)
    arg6 = _mm256_broadcast_ss(*(arg1 + 4))
    zmm5 = _mm256_broadcast_ss(arg1[1].d)
    zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
    arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *(arg3 + 4))
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1].d)
    zmm1[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 2f)
    zmm1[0].o = _mm_mask_div_ps(arg5, zmm1[0].o, zmm19[0].o)
    zmm19 = _mm256_mask_broadcastss_ps(arg5, zmm1[0].o)
    zmm0[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
    zmm21 = _mm256_mask_broadcastsd_pd(arg5, zmm0[0].o)
    zmm0[0].o = _mm_permute_ps(zmm1[0].o, 0xea)
    zmm22 = _mm256_mask_broadcastsd_pd(arg5, zmm0[0].o)
    float var_220_1[0x8] = _mm256_broadcast_ss(*(arg20 + 4))
    zmm23 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, *(arg20 + 8))
    int64_t rsi_1 = *(arg20 + 0x10)
    zmm0 = _mm256_mask_broadcastd_epi32(arg5, zmm20[0].o)
    float var_240_1[0x8] = zmm0
    zmm20[0].o = _mm_mask_xor_epi32(arg5, zmm20[0].o, zmm20[0].o)
    int32_t r10_1 = 0
    zmm26 = _mm256_mask_broadcastss_ps(arg5, arg8[0].o)
    zmm27 = _mm256_mask_broadcastd_epi32(arg5, arg7[0].o)
    zmm28 = _mm256_mask_broadcastss_ps(arg5, zmm28[0].o)
    arg7 = _mm256_cmpeq_epi32(arg7, arg7)
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
    zmm0[0].o = zx.o(0)
    var_2c0 = zmm0
    rcx = arg23
    
    do
        zmm1 = *(rcx + sx.q(r10_1))
        zmm29 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 3)
        int64_t k1_1 = _kxnor_mask16(arg5, arg5)
        arg18[0].o = _mm_mask_xor_ps(arg5, arg18[0].o, arg18[0].o)
        int64_t k1_2
        int64_t temp0_39
        temp0_39, k1_2 = _mm256_mmask_i32gather_ps(k1_1, *(arg22 + (zmm29[0].q << 2)))
        arg18 = temp0_39
        zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 0xc)
        zmm29 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 4)
        int64_t k1_3 = _kxnor_mask16(arg5, arg5)
        arg19[0].o = _mm_mask_xor_ps(arg5, arg19[0].o, arg19[0].o)
        int64_t k1_4
        int64_t temp0_43
        temp0_43, k1_4 = _mm256_mmask_i32gather_ps(k1_3, *(arg22 + zmm29[0].q))
        arg19 = temp0_43
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 8)
        int64_t k1_5 = _kxnor_mask16(arg5, arg5)
        zmm29[0].o = _mm_mask_xor_ps(arg5, zmm29[0].o, zmm29[0].o)
        int64_t k1_6
        int64_t temp0_46
        temp0_46, k1_6 = _mm256_mmask_i32gather_ps(k1_5, *(arg22 + zmm1[0].q))
        zmm29 = temp0_46
        float var_340_1[0x8] = _mm256_mask_store_ps(arg5, arg18)
        float var_320_1[0x8] = _mm256_mask_store_ps(arg5, arg19)
        float var_300_1[0x8] = _mm256_mask_store_ps(arg5, zmm29)
        int256_t var_2e0_1 = _mm256_mask_store_epi64(arg5, zmm20)
        float var_3e0_1[0x8] = zmm2
        float var_3c0_1[0x8] = zmm2
        float var_3a0_1[0x8] = zmm2
        float var_380_1[0x8] = zmm2
        zmm1 = _mm256_mask_mul_ps(arg5, arg19, zmm27)
        arg8 = _mm256_mask_mul_ps(arg5, zmm29, zmm28)
        arg9 = _mm256_mask_mul_ps(arg5, arg18, zmm26)
        zmm29 = _mm256_mask3_fmsub_ps(zmm29, arg5, zmm26, zmm1)
        arg18 = _mm256_mask3_fmsub_ps(arg18, arg5, zmm27, arg8)
        arg19 = _mm256_mask3_fmsub_ps(arg19, arg5, zmm28, arg9)
        zmm1 = _mm256_mask_add_ps(arg5, zmm29, zmm29)
        zmm29 = _mm256_mask_add_ps(arg5, arg18, arg18)
        arg18 = _mm256_mask_add_ps(arg5, arg19, arg19)
        arg19 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_340_1), arg5, zmm2, zmm1)
        arg8 = _mm256_mask3_fmadd_ps(var_320_1, arg5, zmm2, zmm29)
        arg9 = _mm256_mask3_fmadd_ps(var_300_1, arg5, zmm2, arg18)
        arg10 = _mm256_mask_mul_ps(arg5, zmm29, zmm27)
        arg11 = _mm256_mask_mul_ps(arg5, arg18, zmm28)
        arg12 = _mm256_mask_mul_ps(arg5, zmm1, zmm26)
        arg18 = _mm256_mask_add_ps(arg5, arg19, _mm256_mask3_fmsub_ps(arg18, arg5, zmm26, arg10))
        zmm1 = _mm256_add_ps(arg8, _mm256_mask3_fmsub_ps(zmm1, arg5, zmm27, arg11))
        arg19 = _mm256_mask_add_ps(arg5, arg9, _mm256_mask3_fmsub_ps(zmm29, arg5, zmm28, arg12))
        zmm29 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg18, arg21[4])
        arg18 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg21[5])
        arg19 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg19, arg21[6])
        arg8 = _mm256_broadcast_ss(var_3f0)
        int64_t k1_7 = _mm256_cmp_ps_mask(arg5, arg8, zmm29, 1)
        _kortest_mask8_u8(k1_7, k1_7)
        
        if (not(cond:48_1))
            var_3e0_1 = _mm256_mask_storeu_ps(k1_7, arg8)
        
        int64_t k1_8 = _mm256_cmp_ps_mask(arg5, arg8, zmm29, 5)
        _kortest_mask8_u8(k1_8, k1_8)
        
        if (not(cond:2_1))
            arg8 = _mm256_broadcast_ss(var_400)
            int64_t k2_1 = _mm256_cmp_ps_mask(k1_8, zmm29, arg8, 1)
            _kortest_mask8_u8(k2_1, k2_1)
            
            if (not(cond:5_1))
                var_3e0_1 = _mm256_mask_storeu_ps(k2_1, arg8)
            
            int64_t k1_9 = _mm256_cmp_ps_mask(k1_8, zmm29, arg8, 5)
            _kortest_mask8_u8(k1_9, k1_9)
            
            if (not(cond:9_1))
                var_3e0_1 = _mm256_mask_storeu_ps(k1_9, zmm29)
        
        arg8 = _mm256_broadcast_ss(temp0_6)
        int64_t k1_10 = _mm256_cmp_ps_mask(arg5, arg8, arg18, 1)
        _kortest_mask8_u8(k1_10, k1_10)
        
        if (not(cond:4_1))
            var_3c0_1 = _mm256_mask_storeu_ps(k1_10, arg8)
        
        int64_t k1_11 = _mm256_cmp_ps_mask(arg5, arg8, arg18, 5)
        _kortest_mask8_u8(k1_11, k1_11)
        
        if (not(cond:8_1))
            arg8 = _mm256_broadcast_ss(temp0_11)
            int64_t k2_2 = _mm256_cmp_ps_mask(k1_11, arg18, arg8, 1)
            _kortest_mask8_u8(k2_2, k2_2)
            
            if (not(cond:13_1))
                var_3c0_1 = _mm256_mask_storeu_ps(k2_2, arg8)
            
            int64_t k1_12 = _mm256_cmp_ps_mask(k1_11, arg18, arg8, 5)
            _kortest_mask8_u8(k1_12, k1_12)
            
            if (not(cond:17_1))
                var_3c0_1 = _mm256_mask_storeu_ps(k1_12, arg18)
        
        arg8 = _mm256_broadcast_ss(temp0_7)
        int64_t k1_13 = _mm256_cmp_ps_mask(arg5, arg8, arg19, 1)
        _kortest_mask8_u8(k1_13, k1_13)
        
        if (not(cond:12_1))
            var_3a0_1 = _mm256_mask_storeu_ps(k1_13, arg8)
        
        int64_t k1_14 = _mm256_cmp_ps_mask(arg5, arg8, arg19, 5)
        _kortest_mask8_u8(k1_14, k1_14)
        
        if (not(cond:16_1))
            arg8 = _mm256_broadcast_ss(temp0_12)
            int64_t k2_3 = _mm256_cmp_ps_mask(k1_14, arg19, arg8, 1)
            _kortest_mask8_u8(k2_3, k2_3)
            
            if (not(cond:21_1))
                var_3a0_1 = _mm256_mask_storeu_ps(k2_3, arg8)
            
            int64_t k1_15 = _mm256_cmp_ps_mask(k1_14, arg19, arg8, 5)
            _kortest_mask8_u8(k1_15, k1_15)
            
            if (not(cond:25_1))
                var_3a0_1 = _mm256_mask_storeu_ps(k1_15, arg19)
        
        arg10 = var_3e0_1
        zmm1 = _mm256_sub_ps(arg10, zmm3)
        arg11 = _mm256_sub_ps(var_3c0_1, arg6)
        arg12 = _mm256_sub_ps(var_3a0_1, zmm5)
        zmm1 = _mm256_mask_div_ps(arg5, zmm1, zmm16)
        arg11 = _mm256_mask_div_ps(arg5, arg11, arg17)
        arg13 = _mm256_mask_div_ps(arg5, arg12, zmm18)
        arg12 = _mm256_cvttps_epi32(zmm1)
        arg15 = _mm256_cvttps_epi32(arg11)
        arg13 = _mm256_cvttps_epi32(arg13)
        zmm1 = _mm256_cvtepi32_ps(arg12)
        arg11 = _mm256_cvtepi32_ps(arg15)
        arg16 = _mm256_cvtepi32_ps(arg13)
        zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, zmm16, zmm3)
        arg11 = _mm256_mask3_fmadd_ps(arg11, arg5, arg17, arg6)
        arg16 = _mm256_mask3_fmadd_ps(arg16, arg5, zmm18, zmm5)
        zmm1 = _mm256_mask_add_ps(arg5, zmm19, zmm1)
        zmm0 = _mm256_mask_add_ps(arg5, zmm21, arg11)
        int64_t k1_16 = _mm256_cmp_ps_mask(arg5, zmm1, arg10, 1)
        arg14 = _mm256_add_epi32(arg12, arg7)
        arg11 = _mm256_mask_blend_epi32(k1_16, arg14, arg12)
        uint32_t var_3e0_2[0x8] = arg11
        int64_t k1_17 = _mm256_cmp_ps_mask(arg5, zmm0, var_3c0_1, 1)
        _kortest_mask8_u8(k1_17, k1_17)
        
        if (not(cond:20_1))
            arg12 = arg15
        
        arg16 = _mm256_mask_add_ps(arg5, zmm22, arg16)
        
        if (not(cond:24_1))
            arg14 = _mm256_add_epi32(arg15, arg7)
        
        arg15 = _mm256_mask_blend_epi32(k1_17, arg14, arg12)
        float var_3c0_2[0x8] = arg15
        int64_t k1_18 = _mm256_cmp_ps_mask(arg5, arg16, var_3a0_1, 1)
        _kortest_mask8_u8(k1_18, k1_18)
        
        if (not(cond:28_1))
            arg12 = arg13
        
        if (not(cond:30_1))
            _mm256_add_epi32(arg13, arg7)
        
        arg14 = _mm256_mask_mov_epi32(k1_18, arg12)
        zmm0 = _mm256_cvtepi32_ps(arg11)
        zmm1 = _mm256_cvtepi32_ps(arg15)
        arg12 = _mm256_cvtepi32_ps(arg14)
        zmm0 = _mm256_mask3_fmadd_ps(zmm0, arg5, zmm16, zmm3)
        zmm1 = _mm256_mask3_fmadd_ps(zmm1, arg5, arg17, arg6)
        zmm25 = _mm256_mask_mov_ps(arg5, zmm5)
        arg12 = _mm256_mask3_fmadd_ps(arg12, arg5, zmm18, zmm5)
        zmm0 = _mm256_mask_add_ps(arg5, zmm19, zmm0)
        zmm1 = _mm256_mask_add_ps(arg5, zmm21, zmm1)
        arg12 = _mm256_mask_add_ps(arg5, zmm22, arg12)
        zmm0 = _mm256_sub_ps(arg10, zmm0)
        zmm1 = _mm256_sub_ps(var_3c0_1, zmm1)
        arg12 = _mm256_sub_ps(var_3a0_1, arg12)
        float var_340_2[0x8] = _mm256_mask_div_ps(arg5, zmm0, zmm16)
        float var_320_2[0x8] = _mm256_mask_div_ps(arg5, zmm1, arg17)
        float var_300_2[0x8] = _mm256_mask_div_ps(arg5, arg12, zmm18)
        int64_t k1_19 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg11, arg7)
        _kortest_mask8_u8(k1_19, k1_19)
        
        if (not(cond:32_1))
            var_3e0_2 = _mm256_mask_storeu_epi32(k1_19, zmm20)
            var_340_2 = _mm256_mask_storeu_ps(k1_19, zmm20)
            arg11 = var_3e0_2
        
        zmm5 = arg6
        int32_t rdx_2 = *arg4
        int64_t k1_20 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg11, 
            _mm256_mask_set1_epi32(arg5, rdx_2 - 1))
        _kortest_mask8_u8(k1_20, k1_20)
        
        if (not(cond:34_1))
            cond:36_1 = rdx_2 == 2
            cond:38_1 = rdx_2 == 2
            cond:40_1 = rdx_2 == 2
            cond:42_1 = rdx_2 == 2
            cond:44_1 = rdx_2 == 2
            cond:46_1 = rdx_2 == 2
            var_3e0_2 = _mm256_mask_storeu_epi32(k1_20, _mm256_mask_set1_epi32(arg5, rdx_2 - 2))
            var_340_2 = _mm256_mask_storeu_ps(k1_20, _mm256_broadcast_ss(1f))
        
        arg6 = zmm3
        arg12 = var_3c0_2
        int64_t k1_21 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg12, arg7)
        _kortest_mask8_u8(k1_21, k1_21)
        
        if (not(cond:36_1))
            var_3c0_2 = _mm256_mask_storeu_epi32(k1_21, zmm20)
            var_320_2 = _mm256_mask_storeu_ps(k1_21, zmm20)
            arg12 = var_3c0_2
        
        zmm3 = _mm256_mask_mov_ps(arg5, zmm22)
        arg11 = _mm256_mask_sub_ps(arg5, arg10, zmm29)
        int32_t rdx_4 = arg4[1]
        int64_t k1_22 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg12, 
            _mm256_mask_set1_epi32(arg5, rdx_4 - 1))
        _kortest_mask8_u8(k1_22, k1_22)
        
        if (not(cond:38_1))
            cond:40_1 = rdx_4 == 2
            cond:42_1 = rdx_4 == 2
            cond:44_1 = rdx_4 == 2
            cond:46_1 = rdx_4 == 2
            var_3c0_2 = _mm256_mask_storeu_epi32(k1_22, _mm256_mask_set1_epi32(arg5, rdx_4 - 2))
            var_320_2 = _mm256_mask_storeu_ps(k1_22, _mm256_broadcast_ss(1f))
        
        zmm22 = _mm256_mask_mov_ps(arg5, zmm21)
        arg9 = _mm256_mask_sub_ps(arg5, var_3a0_1, arg19)
        arg8 = _mm256_mask_sub_ps(arg5, var_3c0_1, arg18)
        arg11 = _mm256_mask3_fmadd_ps(arg11, arg5, arg11, zmm20)
        arg10 = arg14
        int64_t k1_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg10, arg7)
        _kortest_mask8_u8(k1_23, k1_23)
        
        if (not(cond:40_1))
            int32_t var_3a0_3[0x8] = _mm256_mask_storeu_epi32(k1_23, zmm20)
            var_300_2 = _mm256_mask_storeu_ps(k1_23, zmm20)
            arg10 = var_3a0_3
        
        zmm21 = _mm256_mask_mov_ps(arg5, zmm19)
        arg9 = _mm256_mul_ps(arg9, arg9)
        arg8 = _mm256_fmadd_ps(arg8, arg8, arg11)
        int32_t r14_1 = arg4[2]
        int64_t k1_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, arg10, 
            _mm256_mask_set1_epi32(arg5, r14_1 - 1))
        _kortest_mask8_u8(k1_24, k1_24)
        
        if (not(cond:42_1))
            cond:44_1 = r14_1 == 2
            cond:46_1 = r14_1 == 2
            int32_t var_3a0_4[0x8] =
                _mm256_mask_storeu_epi32(k1_24, _mm256_mask_set1_epi32(arg5, r14_1 - 2))
            var_300_2 = _mm256_mask_storeu_ps(k1_24, _mm256_broadcast_ss(1f))
            arg10 = var_3a0_4
        
        zmm0 = var_3e0_2
        zmm19 = _mm256_mask_load_epi64(arg5, var_220_1)
        arg11 = _mm256_mask_mullo_epi32(arg5, zmm19, zmm0)
        arg12 = _mm256_mask_mullo_epi32(arg5, _mm256_add_epi32(arg11, var_3c0_2), zmm23)
        arg13 = _mm256_slli_epi32(_mm256_add_epi32(arg12, arg10), 2)
        int64_t k1_26
        int64_t temp0_167
        temp0_167, k1_26 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg13[0].q))
        arg14 = temp0_167
        zmm0 = _mm256_mask_mullo_epi32(arg5, zmm19, _mm256_sub_epi32(zmm0, arg7))
        arg13 = _mm256_mask_mullo_epi32(arg5, _mm256_add_epi32(zmm0, var_3c0_2), zmm23)
        arg15 = _mm256_slli_epi32(_mm256_add_epi32(arg13, arg10), 2)
        int64_t k1_27 = _kxnor_mask16(arg5, arg5)
        arg16[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg16[0].o, arg16[0].o)
        int64_t k1_28
        int64_t temp0_175
        temp0_175, k1_28 = _mm256_mmask_i32gather_ps(k1_27, *(rsi_1 + arg15[0].q))
        arg16 = temp0_175
        arg15 = var_340_2
        zmm24 = _mm256_mask_load_ps(arg5, var_320_2)
        zmm1 = _mm256_sub_epi32(var_3c0_2, arg7)
        arg11 = _mm256_mask_mullo_epi32(arg5, _mm256_add_epi32(arg11, zmm1), zmm23)
        zmm19 = _mm256_mask_slli_epi32(arg5, _mm256_mask_add_epi32(arg5, arg11, arg10), 2)
        int64_t k1_29 = _kxnor_mask16(arg5, arg5)
        zmm20[0].o = _mm_mask_xor_ps(arg5, zmm20[0].o, zmm20[0].o)
        int64_t k1_30
        int64_t temp0_183
        temp0_183, k1_30 = _mm256_mmask_i32gather_ps(k1_29, *(rsi_1 + zmm19[0].q))
        zmm20 = temp0_183
        zmm0 = _mm256_mask_mullo_epi32(arg5, _mm256_add_epi32(zmm0, zmm1), zmm23)
        zmm1 = _mm256_slli_epi32(_mm256_add_epi32(zmm0, arg10), 2)
        int64_t k1_31 = _kxnor_mask16(arg5, arg5)
        zmm19[0].o = _mm_mask_xor_ps(arg5, zmm19[0].o, zmm19[0].o)
        int64_t k1_32
        int64_t temp0_189
        temp0_189, k1_32 = _mm256_mmask_i32gather_ps(k1_31, *(rsi_1 + zmm1[0].q))
        zmm1 = _mm256_sub_epi32(arg10, arg7)
        arg10 = _mm256_slli_epi32(_mm256_add_epi32(arg12, zmm1), 2)
        int64_t k1_34
        int64_t temp0_193
        temp0_193, k1_34 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg10[0].q))
        arg12 = temp0_193
        arg10 = _mm256_slli_epi32(_mm256_add_epi32(arg13, zmm1), 2)
        int64_t k1_36
        int64_t temp0_196
        temp0_196, k1_36 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg10[0].q))
        arg13 = temp0_196
        arg8 = _mm256_add_ps(arg8, arg9)
        arg9 = _mm256_fmadd_ps(_mm256_sub_ps(arg16, arg14), arg15, arg14)
        arg10 = _mm256_slli_epi32(_mm256_add_epi32(arg11, zmm1), 2)
        int64_t k1_38
        int64_t temp0_202
        temp0_202, k1_38 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + arg10[0].q))
        arg11 = temp0_202
        zmm19 =
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, temp0_189, zmm20), arg5, arg15, zmm20)
        zmm20 = _mm256_mask_sub_ps(arg5, arg13, arg12)
        zmm0 = _mm256_slli_epi32(_mm256_add_epi32(zmm0, zmm1), 2)
        int64_t k1_40
        int64_t temp0_208
        temp0_208, k1_40 =
            _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(rsi_1 + zmm0[0].q))
        zmm20 = _mm256_mask3_fmadd_ps(zmm20, arg5, arg15, arg12)
        zmm0 = _mm256_fmadd_ps(_mm256_sub_ps(temp0_208, arg11), arg15, arg11)
        zmm1 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, zmm19, arg9), arg5, zmm24, arg9)
        zmm0 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, zmm0, zmm20), arg5, zmm24, zmm20)
        arg9 = __vfmadd132ps_ymmqq_ymmqq_memqq(_mm256_sub_ps(zmm0, zmm1), zmm1, var_300_2)
        zmm20[0].o = _mm_mask_xor_ps(arg5, zmm20[0].o, zmm20[0].o)
        int64_t k1_41 = _mm256_cmp_ps_mask(arg5, arg8, zmm20, 0xc)
        _kortest_mask8_u8(k1_41, k1_41)
        
        if (not(cond:44_1))
            zmm1 = _mm256_mask_rsqrt14_ps(arg5, arg8)
            zmm1 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
                _mm256_mul_ps(zmm1, 
                    __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(_mm256_mul_ps(arg8, zmm1), 
                        arg5, zmm1, 0x40400000)), 
                0x3f000000)
            arg8 = _mm256_mask_rcp14_ps(arg5, zmm1)
            arg9 = _mm256_mask3_fmadd_ps(arg9, k1_41, arg8, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm1, arg5, arg8, 0x40000000))
        
        zmm19 = _mm256_mask_mov_ps(arg5, zmm21)
        zmm21 = _mm256_mask_mov_ps(arg5, zmm22)
        zmm22 = _mm256_mask_mov_ps(arg5, zmm3)
        zmm3 = arg6
        arg6 = zmm5
        zmm5 = _mm256_mask_mov_ps(arg5, zmm25)
        arg8 = __vsubps_ymmqq_ymmqq_memqq(arg9, var_240_1)
        int64_t k1_42 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, arg8, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_42, k1_42)
        
        if (not(cond:46_1))
            zmm29 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm29, arg5, arg8, var_2a0)
            arg18 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg18, arg5, arg8, var_280_1)
            arg19 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg19, arg5, arg8, var_260)
            var_2a0 = _mm256_mask_storeu_ps(k1_42, zmm29)
            var_280_1 = _mm256_mask_storeu_ps(k1_42, arg18)
            var_260 = _mm256_mask_storeu_ps(k1_42, arg19)
            zmm0 = _mm256_mask_add_ps(k1_42, var_2c0, arg8)
            var_2c0 = zmm0
        
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

uint64_t result = zx.q(arg27)

if (rbx s>= result.d)
    zmm0 = var_2c0
else
    zmm5 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rbx), data_142fc93a0)
    zmm16 = _mm256_mask_set1_epi32(arg5, result.d)
    uint64_t k1_43 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm16, zmm5)
    uint32_t rbx_1 = rbx << 2
    bool cond:37_1 = rbx_1 == 0
    bool cond:39_1 = rbx_1 == 0
    bool cond:41_1 = rbx_1 == 0
    bool cond:43_1 = rbx_1 == 0
    bool cond:45_1 = rbx_1 == 0
    bool cond:47_1 = rbx_1 == 0
    zmm1 = _mm256_mask_loadu_epi32(k1_43, *(rcx + sx.q(rbx_1)))
    zmm2 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 3)
    zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
    int64_t k2_5
    int64_t temp0_245
    temp0_245, k2_5 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), 
        *(arg22 + (zmm2[0].q << 2)))
    zmm3 = temp0_245
    zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 0xc)
    zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 4)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    int64_t k2_7
    int64_t temp0_249
    temp0_249, k2_7 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(arg22 + zmm2[0].q))
    arg6 = temp0_249
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
    zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 8)
    arg17[0].o = _mm_mask_xor_ps(arg5, arg17[0].o, arg17[0].o)
    int64_t k2_9
    int64_t temp0_253
    temp0_253, k2_9 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(arg22 + zmm1[0].q))
    arg17 = temp0_253
    float var_200_1[0x8] = zmm3
    float var_1e0_1[0x8] = arg6
    float var_1c0_1[0x8] = _mm256_mask_store_ps(arg5, arg17)
    float var_1a0_1[0x8] = zmm2
    zmm1 = _mm256_broadcast_ss(arg21[3])
    float var_3e0_3[0x8] = zmm1
    float var_3c0_3[0x8] = zmm1
    float var_3a0_5[0x8] = zmm1
    float var_380_2[0x8] = zmm1
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg21[1])
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg21[2])
    zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg21)
    zmm2 = _mm256_mul_ps(zmm1, zmm2)
    zmm21 = _mm256_mask_mul_ps(arg5, arg6, zmm19)
    zmm22 = _mm256_mask_mul_ps(arg5, arg17, zmm20)
    zmm23 = _mm256_mask_mul_ps(arg5, zmm3, zmm18)
    zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm18, arg17)
    zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm19, zmm3)
    zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, zmm20, arg6)
    zmm2 = _mm256_sub_ps(zmm2, zmm2)
    zmm3 = _mm256_mask_add_ps(arg5, zmm21, zmm21)
    arg6 = _mm256_mask_add_ps(arg5, zmm22, zmm22)
    arg17 = _mm256_mask_add_ps(arg5, zmm23, zmm23)
    float var_340_3[0x8] = zmm3
    float var_320_3[0x8] = arg6
    int256_t var_300_3 = _mm256_mask_store_ps(arg5, arg17)
    zmm2 = _mm256_add_ps(zmm2, zmm2)
    float var_2e0_2[0x8] = zmm2
    zmm18 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_200_1), arg5, zmm1, zmm3)
    zmm19 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1e0_1), arg5, zmm1, arg6)
    zmm20 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1c0_1), arg5, zmm1, arg17)
    zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, zmm1, var_1a0_1)
    int256_t var_180_1 = _mm256_mask_store_ps(arg5, zmm18)
    int256_t var_160_1 = _mm256_mask_store_ps(arg5, zmm19)
    int256_t var_140_1 = _mm256_mask_store_ps(arg5, zmm20)
    float var_120_1[0x8] = zmm2
    zmm1 = _mm256_broadcast_ss(arg21[1])
    zmm2 = _mm256_broadcast_ss(arg21[2])
    zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg21)
    zmm22 = _mm256_mask_mul_ps(arg5, arg6, zmm2)
    zmm23 = _mm256_mask_mul_ps(arg5, arg17, zmm21)
    zmm24 = _mm256_mask_mul_ps(arg5, zmm3, zmm1)
    zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, arg17, zmm1)
    zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, zmm3, zmm2)
    zmm24 = _mm256_mask3_fmsub_ps(zmm24, arg5, arg6, zmm21)
    zmm1 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
    zmm3 = _mm256_mask_add_ps(arg5, zmm19, zmm23)
    arg6 = _mm256_mask_add_ps(arg5, zmm20, zmm24)
    zmm2 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg21[4])
    zmm3 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, arg21[5])
    arg6 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg6, arg21[6])
    arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, var_3f0)
    int64_t k0 = _mm256_cmp_ps_mask(k1_43, arg17, zmm2, 1)
    _kortest_mask8_u8(k0, k0)
    
    if (rbx_1 != 0)
        var_3e0_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0, arg17, zmm2, 1), arg17)
    
    int64_t k0_1 = _mm256_cmp_ps_mask(k1_43, arg17, zmm2, 5)
    _kortest_mask8_u8(k0_1, k0_1)
    
    if (rbx_1 != 0)
        int64_t k2_11 = _mm256_cmp_ps_mask(k0_1, arg17, zmm2, 5)
        arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_1, var_400)
        int64_t k3_1 = _mm256_cmp_ps_mask(k2_11, zmm2, arg17, 1)
        int64_t k0_2 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_1, zmm16, zmm5)
        _kortest_mask8_u8(k0_2, k0_2)
        
        if (rbx_1 != 0)
            var_3e0_3 = _mm256_mask_storeu_ps(k3_1, arg17)
        
        int64_t k2_12 = _mm256_cmp_ps_mask(k2_11, zmm2, arg17, 5)
        k0_1 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_12, zmm16, zmm5)
        _kortest_mask8_u8(k0_1, k0_1)
        
        if (rbx_1 != 0)
            var_3e0_3 = _mm256_mask_storeu_ps(k2_12, zmm2)
    
    arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_1, temp0_6)
    int64_t k0_3 = _mm256_cmp_ps_mask(k1_43, arg17, zmm3, 1)
    _kortest_mask8_u8(k0_3, k0_3)
    
    if (rbx_1 != 0)
        var_3c0_3 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_3, arg17, zmm3, 1), arg17)
    
    int64_t k0_4 = _mm256_cmp_ps_mask(k1_43, arg17, zmm3, 5)
    _kortest_mask8_u8(k0_4, k0_4)
    
    if (rbx_1 != 0)
        int64_t k2_14 = _mm256_cmp_ps_mask(k0_4, arg17, zmm3, 5)
        arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_4, temp0_11)
        int64_t k3_2 = _mm256_cmp_ps_mask(k2_14, zmm3, arg17, 1)
        int64_t k0_5 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_2, zmm16, zmm5)
        _kortest_mask8_u8(k0_5, k0_5)
        
        if (rbx_1 != 0)
            var_3c0_3 = _mm256_mask_storeu_ps(k3_2, arg17)
        
        int64_t k2_15 = _mm256_cmp_ps_mask(k2_14, zmm3, arg17, 5)
        k0_4 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_15, zmm16, zmm5)
        _kortest_mask8_u8(k0_4, k0_4)
        
        if (rbx_1 != 0)
            var_3c0_3 = _mm256_mask_storeu_ps(k2_15, zmm3)
    
    arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_4, temp0_7)
    int64_t k0_6 = _mm256_cmp_ps_mask(k1_43, arg17, arg6, 1)
    _kortest_mask8_u8(k0_6, k0_6)
    
    if (rbx_1 != 0)
        var_3a0_5 = _mm256_mask_storeu_ps(_mm256_cmp_ps_mask(k0_6, arg17, arg6, 1), arg17)
    
    int64_t k0_7 = _mm256_cmp_ps_mask(k1_43, arg17, arg6, 5)
    _kortest_mask8_u8(k0_7, k0_7)
    
    if (rbx_1 != 0)
        int64_t k2_17 = _mm256_cmp_ps_mask(k0_7, arg17, arg6, 5)
        arg17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, temp0_12)
        int64_t k3_3 = _mm256_cmp_ps_mask(k2_17, arg6, arg17, 1)
        int64_t k0_8 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k3_3, zmm16, zmm5)
        _kortest_mask8_u8(k0_8, k0_8)
        
        if (rbx_1 != 0)
            var_3a0_5 = _mm256_mask_storeu_ps(k3_3, arg17)
        
        int64_t k2_18 = _mm256_cmp_ps_mask(k2_17, arg6, arg17, 5)
        k0_7 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_18, zmm16, zmm5)
        _kortest_mask8_u8(k0_7, k0_7)
        
        if (rbx_1 != 0)
            var_3a0_5 = _mm256_mask_storeu_ps(k2_18, arg6)
    
    zmm19 = _mm256_mask_load_ps(k0_7, var_3e0_3)
    zmm18 = _mm256_mask_load_ps(k0_7, var_3c0_3)
    arg17 = _mm256_mask_load_ps(k0_7, var_3a0_5)
    zmm23 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, *arg1)
    zmm1 = _mm256_mask_sub_ps(k0_7, zmm19, zmm23)
    zmm24 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, *(arg1 + 4))
    zmm20 = _mm256_mask_sub_ps(k0_7, zmm18, zmm24)
    zmm25 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, arg1[1].d)
    zmm26 = _mm256_mask_sub_ps(k0_7, arg17, zmm25)
    zmm21 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, *arg3)
    zmm1 = _mm256_mask_div_ps(k0_7, zmm1, zmm21)
    zmm22 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, *(arg3 + 4))
    zmm28 = _mm256_mask_div_ps(k0_7, zmm20, zmm22)
    zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, arg3[1].d)
    zmm26 = _mm256_mask_div_ps(k0_7, zmm26, zmm20)
    zmm27 = _mm256_mask_cvttps_epi32(k0_7, zmm1)
    arg9 = _mm256_mask_cvttps_epi32(k0_7, zmm28)
    zmm29 = _mm256_mask_cvttps_epi32(k0_7, zmm26)
    zmm1 = _mm256_mask_cvtepi32_ps(k0_7, zmm27)
    zmm26 = _mm256_mask_cvtepi32_ps(k0_7, arg9)
    arg10 = _mm256_mask_cvtepi32_ps(k0_7, zmm29)
    zmm1 = _mm256_mask3_fmadd_ps(zmm1, k0_7, zmm21, zmm23)
    zmm26 = _mm256_mask3_fmadd_ps(zmm26, k0_7, zmm22, zmm24)
    arg10 = _mm256_mask3_fmadd_ps(arg10, k0_7, zmm20, zmm25)
    arg8[0].o = __vmovsd_xmmdq_memq(*arg3)
    zmm28 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(k0_7, 2f)
    arg8[0].o = _mm_mask_div_ps(k0_7, arg8[0].o, zmm28[0].o)
    zmm28 = _mm256_mask_broadcastss_ps(k0_7, arg8[0].o)
    zmm1 = _mm256_mask_add_ps(k0_7, zmm28, zmm1)
    arg7[0].o = __vmovshdup_xmmdq_xmmdq(arg8[0].o)
    arg18 = _mm256_mask_broadcastsd_pd(k0_7, arg7[0].o)
    arg11 = _mm256_mask_add_ps(k0_7, arg18, zmm26)
    arg8[0].o = _mm_permute_ps(arg8[0].o, 0xea)
    arg19 = _mm256_mask_broadcastsd_pd(k0_7, arg8[0].o)
    int64_t k2_19 = _mm256_cmp_ps_mask(k0_7, zmm1, zmm19, 1)
    arg7 = _mm256_cmpeq_epi32(arg7, arg7)
    arg8 = _mm256_mask_add_epi32(k0_7, zmm27, arg7)
    zmm26 = _mm256_mask_blend_epi32(k2_19, arg8, zmm27)
    uint64_t var_3e0_4[0x4] = _mm256_mask_store_epi64(k0_7, zmm26)
    int64_t k0_9 = _mm256_cmp_ps_mask(k1_43, arg11, zmm18, 1)
    _kortest_mask8_u8(k0_9, k0_9)
    
    if (rbx_1 != 0)
        zmm27 = _mm256_mask_mov_epi64(k0_9, arg9)
    
    arg10 = _mm256_mask_add_ps(k0_9, arg19, arg10)
    int64_t k2_20 = _mm256_cmp_ps_mask(k0_9, arg11, zmm18, 1)
    int64_t k0_10 = _mm256_cmp_ps_mask(k1_43, arg11, zmm18, 5)
    _kortest_mask8_u8(k0_10, k0_10)
    
    if (rbx_1 != 0)
        arg8 = _mm256_add_epi32(arg9, arg7)
    
    arg9 = _mm256_mask_blend_epi32(k2_20, arg8, zmm27)
    float var_3c0_4[0x8] = arg9
    int64_t k0_11 = _mm256_cmp_ps_mask(k1_43, arg10, arg17, 1)
    _kortest_mask8_u8(k0_11, k0_11)
    
    if (rbx_1 != 0)
        zmm27 = _mm256_mask_mov_epi64(k0_11, zmm29)
    
    int64_t k2_21 = _mm256_cmp_ps_mask(k0_11, arg10, arg17, 1)
    int64_t k0_12 = _mm256_cmp_ps_mask(k1_43, arg10, arg17, 5)
    _kortest_mask8_u8(k0_12, k0_12)
    
    if (rbx_1 != 0)
        _mm256_mask_add_epi32(k0_12, zmm29, arg7)
    
    arg8 = _mm256_mask_mov_epi32(k2_21, zmm27)
    zmm1 = _mm256_mask_cvtepi32_ps(k0_12, zmm26)
    zmm27 = _mm256_mask_cvtepi32_ps(k0_12, arg9)
    zmm29 = _mm256_mask_cvtepi32_ps(k0_12, arg8)
    zmm1 = _mm256_mask3_fmadd_ps(zmm1, k0_12, zmm21, zmm23)
    zmm27 = _mm256_mask3_fmadd_ps(zmm27, k0_12, zmm22, zmm24)
    zmm29 = _mm256_mask3_fmadd_ps(zmm29, k0_12, zmm20, zmm25)
    zmm1 = _mm256_mask_add_ps(k0_12, zmm28, zmm1)
    zmm23 = _mm256_mask_add_ps(k0_12, arg18, zmm27)
    zmm24 = _mm256_mask_add_ps(k0_12, arg19, zmm29)
    zmm1 = _mm256_mask_sub_ps(k0_12, zmm19, zmm1)
    zmm23 = _mm256_mask_sub_ps(k0_12, zmm18, zmm23)
    zmm24 = _mm256_mask_sub_ps(k0_12, arg17, zmm24)
    zmm1 = _mm256_mask_div_ps(k0_12, zmm1, zmm21)
    zmm21 = _mm256_mask_div_ps(k0_12, zmm23, zmm22)
    float var_340_4[0x8] = zmm1
    float var_320_4[0x8] = _mm256_mask_store_ps(k0_12, zmm21)
    zmm1 = _mm256_mask_div_ps(k0_12, zmm24, zmm20)
    float var_300_4[0x8] = zmm1
    int64_t k0_13 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(
        __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_12, zmm26, arg7), zmm16, zmm5)
    _kortest_mask8_u8(k0_13, k0_13)
    
    if (rbx_1 != 0)
        zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
        int64_t k2_23 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_13, zmm26, zmm1)
        zmm1[0].o = zx.o(0)
        var_3e0_4 = _mm256_mask_storeu_epi32(k2_23, zmm1)
        var_340_4 = _mm256_mask_storeu_ps(k2_23, zmm1)
        zmm26 = _mm256_mask_load_epi64(k0_13, var_3e0_4)
    
    int32_t rax_3 = *arg4
    zmm1 = _mm256_mask_set1_epi32(k0_13, rax_3 - 1)
    int64_t k2_24 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_13, zmm26, zmm1)
    int64_t k0_14 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_24, zmm16, zmm5)
    _kortest_mask8_u8(k0_14, k0_14)
    
    if (rbx_1 != 0)
        cond:37_1 = rax_3 == 2
        cond:39_1 = rax_3 == 2
        cond:41_1 = rax_3 == 2
        cond:43_1 = rax_3 == 2
        cond:45_1 = rax_3 == 2
        cond:47_1 = rax_3 == 2
        var_3e0_4 = _mm256_mask_storeu_epi32(k2_24, _mm256_mask_set1_epi32(k0_14, rax_3 - 2))
        zmm1 = _mm256_broadcast_ss(1f)
        var_340_4 = _mm256_mask_storeu_ps(k2_24, zmm1)
    
    zmm20 = _mm256_mask_sub_ps(k0_14, zmm19, zmm2)
    zmm21[0].o = _mm_mask_xor_ps(k0_14, zmm21[0].o, zmm21[0].o)
    zmm22 = _mm256_mask_load_epi64(k0_14, var_3c0_4)
    zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
    int64_t k2_25 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_14, zmm22, zmm1)
    int64_t k0_15 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_25, zmm16, zmm5)
    _kortest_mask8_u8(k0_15, k0_15)
    
    if (not(cond:37_1))
        zmm1[0].o = zx.o(0)
        var_3c0_4 = _mm256_mask_storeu_epi32(k2_25, zmm1)
        var_320_4 = _mm256_mask_storeu_ps(k2_25, zmm1)
        zmm22 = _mm256_mask_load_epi64(k0_15, var_3c0_4)
    
    zmm19 = _mm256_mask_sub_ps(k0_15, zmm18, zmm3)
    zmm20 = _mm256_mask3_fmadd_ps(zmm20, k0_15, zmm20, zmm21)
    int32_t rdx_8 = arg4[1]
    zmm1 = _mm256_mask_set1_epi32(k0_15, rdx_8 - 1)
    int64_t k2_26 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_15, zmm22, zmm1)
    int64_t k0_16 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_26, zmm16, zmm5)
    _kortest_mask8_u8(k0_16, k0_16)
    
    if (not(cond:39_1))
        cond:41_1 = rdx_8 == 2
        cond:43_1 = rdx_8 == 2
        cond:45_1 = rdx_8 == 2
        cond:47_1 = rdx_8 == 2
        var_3c0_4 = _mm256_mask_storeu_epi32(k2_26, _mm256_mask_set1_epi32(k0_16, rdx_8 - 2))
        zmm1 = _mm256_broadcast_ss(1f)
        var_320_4 = _mm256_mask_storeu_ps(k2_26, zmm1)
    
    arg17 = _mm256_mask_sub_ps(k0_16, arg17, arg6)
    zmm19 = _mm256_mask3_fmadd_ps(zmm19, k0_16, zmm19, zmm20)
    zmm18 = _mm256_mask_load_epi64(k0_16, arg8)
    zmm1 = _mm256_cmpeq_epi32(zmm1, zmm1)
    int64_t k2_27 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_16, zmm18, zmm1)
    int64_t k0_17 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_27, zmm16, zmm5)
    _kortest_mask8_u8(k0_17, k0_17)
    
    if (not(cond:41_1))
        zmm1[0].o = zx.o(0)
        uint64_t var_3a0_7[0x4] = _mm256_mask_storeu_epi32(k2_27, zmm1)
        var_300_4 = _mm256_mask_storeu_ps(k2_27, zmm1)
        zmm18 = _mm256_mask_load_epi64(k0_17, var_3a0_7)
    
    arg17 = _mm256_mask3_fmadd_ps(arg17, k0_17, arg17, zmm19)
    int32_t rdx_10 = arg4[2]
    int64_t k2_28 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(k0_17, zmm18, 
        _mm256_mask_set1_epi32(k0_17, rdx_10 - 1))
    int64_t k0_18 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k2_28, zmm16, zmm5)
    _kortest_mask8_u8(k0_18, k0_18)
    
    if (not(cond:43_1))
        cond:45_1 = rdx_10 == 2
        cond:47_1 = rdx_10 == 2
        uint64_t var_3a0_8[0x4] =
            _mm256_mask_storeu_epi32(k2_28, _mm256_mask_set1_epi32(k0_18, rdx_10 - 2))
        var_300_4 = _mm256_mask_storeu_ps(k2_28, _mm256_broadcast_ss(1f))
        zmm18 = _mm256_mask_load_epi64(k0_18, var_3a0_8)
    
    zmm1 = __vpbroadcastd_ymmqq_memd(*(arg20 + 4))
    zmm16 = _mm256_mask_load_epi64(k0_18, var_3e0_4)
    zmm19 = _mm256_mask_load_epi64(k0_18, var_3c0_4)
    zmm20 = _mm256_mask_mullo_epi32(k0_18, zmm1, zmm16)
    zmm21 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(k0_18, *(arg20 + 8))
    zmm22 = _mm256_mask_mullo_epi32(k0_18, _mm256_mask_add_epi32(k0_18, zmm20, zmm19), zmm21)
    zmm5 = _mm256_mask_add_epi32(k0_18, zmm22, zmm18)
    result = *(arg20 + 0x10)
    zmm5 = _mm256_slli_epi32(zmm5, 2)
    int64_t k2_29 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm23[0].o = _mm_mask_xor_ps(k0_18, zmm23[0].o, zmm23[0].o)
    int64_t k2_30
    int64_t temp0_420
    temp0_420, k2_30 = _mm256_mmask_i32gather_ps(k2_29, *(result + zmm5[0].q))
    zmm23 = temp0_420
    zmm5 = _mm256_cmpeq_epi32(zmm5, zmm5)
    zmm1 = _mm256_mask_mullo_epi32(k0_18, zmm1, _mm256_mask_sub_epi32(k0_18, zmm16, zmm5))
    zmm16 = _mm256_mask_mullo_epi32(k0_18, _mm256_mask_add_epi32(k0_18, zmm1, zmm19), zmm21)
    zmm24 = _mm256_mask_slli_epi32(k0_18, _mm256_mask_add_epi32(k0_18, zmm16, zmm18), 2)
    int64_t k2_31 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm25[0].o = _mm_mask_xor_ps(k0_18, zmm25[0].o, zmm25[0].o)
    int64_t k2_32
    int64_t temp0_429
    temp0_429, k2_32 = _mm256_mmask_i32gather_ps(k2_31, *(result + zmm24[0].q))
    zmm25 = temp0_429
    zmm24 = _mm256_mask_load_ps(k0_18, var_340_4)
    zmm26 = _mm256_mask_load_ps(k0_18, var_320_4)
    zmm19 = _mm256_mask_sub_epi32(k0_18, zmm19, zmm5)
    zmm20 = _mm256_mask_mullo_epi32(k0_18, _mm256_mask_add_epi32(k0_18, zmm20, zmm19), zmm21)
    zmm27 = _mm256_mask_slli_epi32(k0_18, _mm256_mask_add_epi32(k0_18, zmm20, zmm18), 2)
    int64_t k2_33 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm28[0].o = _mm_mask_xor_ps(k0_18, zmm28[0].o, zmm28[0].o)
    int64_t k2_34
    int64_t temp0_438
    temp0_438, k2_34 = _mm256_mmask_i32gather_ps(k2_33, *(result + zmm27[0].q))
    zmm28 = temp0_438
    zmm1 = _mm256_mask_mullo_epi32(k0_18, _mm256_mask_add_epi32(k0_18, zmm1, zmm19), zmm21)
    zmm19 = _mm256_mask_slli_epi32(k0_18, _mm256_mask_add_epi32(k0_18, zmm1, zmm18), 2)
    int64_t k2_35 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm21[0].o = _mm_mask_xor_epi32(k0_18, zmm21[0].o, zmm21[0].o)
    int64_t k2_36
    int64_t temp0_444
    temp0_444, k2_36 = _mm256_mmask_i32gather_ps(k2_35, *(result + zmm19[0].q))
    zmm5 = _mm256_mask_sub_epi32(k0_18, zmm18, zmm5)
    zmm18 = _mm256_mask_slli_epi32(k0_18, _mm256_mask_add_epi32(k0_18, zmm22, zmm5), 2)
    int64_t k2_37 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm19[0].o = _mm_mask_xor_ps(k0_18, zmm19[0].o, zmm19[0].o)
    int64_t k2_38
    int64_t temp0_449
    temp0_449, k2_38 = _mm256_mmask_i32gather_ps(k2_37, *(result + zmm18[0].q))
    zmm19 = temp0_449
    zmm16 = _mm256_mask_slli_epi32(k0_18, _mm256_mask_add_epi32(k0_18, zmm16, zmm5), 2)
    int64_t k2_39 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm18[0].o = _mm_mask_xor_ps(k0_18, zmm18[0].o, zmm18[0].o)
    int64_t k2_40
    int64_t temp0_453
    temp0_453, k2_40 = _mm256_mmask_i32gather_ps(k2_39, *(result + zmm16[0].q))
    zmm16[0].o = _mm_mask_xor_ps(k0_18, zmm16[0].o, zmm16[0].o)
    zmm22 = _mm256_mask_sub_ps(k0_18, zmm25, zmm23)
    zmm20 = _mm256_mask_slli_epi32(k0_18, _mm256_mask_add_epi32(k0_18, zmm20, zmm5), 2)
    int64_t k2_41 = __kmovq_maskmskw_masku64_avx512(k1_43)
    zmm25[0].o = _mm_mask_xor_ps(k0_18, zmm25[0].o, zmm25[0].o)
    int64_t k2_42
    int64_t temp0_459
    temp0_459, k2_42 = _mm256_mmask_i32gather_ps(k2_41, *(result + zmm20[0].q))
    zmm25 = temp0_459
    zmm22 = _mm256_mask3_fmadd_ps(zmm22, k0_18, zmm24, zmm23)
    zmm20 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_18, temp0_444, zmm28), k0_18, zmm24, zmm28)
    zmm18 = _mm256_mask_sub_ps(k0_18, temp0_453, zmm19)
    zmm1 = _mm256_slli_epi32(_mm256_add_epi32(zmm1, zmm5), 2)
    int64_t k2_44
    int64_t temp0_466
    temp0_466, k2_44 =
        _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_43), *(result + zmm1[0].q))
    zmm18 = _mm256_mask3_fmadd_ps(zmm18, k0_18, zmm24, zmm19)
    zmm1 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_18, temp0_466, zmm25), k0_18, zmm24, zmm25)
    zmm19 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_18, zmm20, zmm22), k0_18, zmm26, zmm22)
    zmm5 = __vfmadd132ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
        _mm256_mask_sub_ps(k0_18, 
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(k0_18, zmm1, zmm18), k0_18, zmm26, zmm18), 
            zmm19), 
        k0_18, zmm19, var_300_4)
    int64_t k2_45 = _mm256_cmp_ps_mask(k1_43, arg17, zmm16, 0xc)
    _kortest_mask8_u8(k2_45, k2_45)
    
    if (not(cond:45_1))
        zmm1 = _mm256_mask_rsqrt14_ps(k0_18, arg17)
        zmm1 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(k0_18, 
            _mm256_mask_mul_ps(k0_18, zmm1, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    _mm256_mask_mul_ps(k0_18, arg17, zmm1), k0_18, zmm1, 0x40400000)), 
            0x3f000000)
        zmm16 = _mm256_mask_rcp14_ps(k0_18, zmm1)
        zmm5 = _mm256_mask3_fmadd_ps(zmm5, k2_45, zmm16, 
            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm1, k0_18, zmm16, 0x40000000))
    
    zmm0[0].o = arg24
    zmm1 = _mm256_sub_ps(zmm5, _mm256_broadcastss_ps(zmm0[0].o))
    int64_t k1_44 = __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_43, zmm1, 0xb8d1b717, 1)
    _kortest_mask8_u8(k1_44, k1_44)
    
    if (cond:47_1)
        zmm0 = var_2c0
    else
        zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, zmm1, var_2a0)
        zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, zmm1, var_280_1)
        arg6 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg6, zmm1, var_260)
        var_2a0 = _mm256_mask_storeu_ps(k1_44, zmm2)
        int256_t var_280
        result = &var_280
        var_280_1 = _mm256_mask_storeu_ps(k1_44, zmm3)
        var_260 = _mm256_mask_storeu_ps(k1_44, arg6)
        zmm0 = _mm256_mask_add_ps(k1_44, var_2c0, zmm1)

zmm1 = _mm256_hadd_ps(var_2a0, var_2a0)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm2 = _mm256_hadd_ps(var_280_1, var_280_1)
arg6[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ arg6[0]
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
arg6[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm3 = _mm256_hadd_ps(var_260, var_260)
zmm3 = _mm256_hadd_ps(zmm3, zmm3)
zmm2[0].o = zmm2[0].o f+ arg6[0]
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x10)
zmm2[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
zmm2[0].o = zmm3[0].o f+ zmm2[0]
zmm3[0].o = __vmovsd_xmmdq_memq(*arg26)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x20)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, arg26[2], 0x20)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
*arg26 = zmm1[0]
arg26[1] = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
arg26[2] = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm1[0]
zmm0[0].o = zmm0[0].o f+ *arg25
*arg25 = zmm0[0]
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
