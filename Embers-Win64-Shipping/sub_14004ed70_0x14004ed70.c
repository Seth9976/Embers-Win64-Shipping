// 函数: sub_14004ed70
// 地址: 0x14004ed70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = arg12[0].o
int128_t var_38 = arg11[0].o
int128_t var_48 = arg10[0].o
int128_t var_68 = arg9[0].o
float zmm7[0x4] = arg16
arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
float var_2a0[0x8] = arg6
int32_t rsi_4 = ((arg19 s>> 0x1f u>> 0x1d) + arg19) & 0xfffffff8
float var_2c0_1[0x8] = arg6
float var_2e0[0x8] = arg6
double* rsi_5
int32_t* r11
float zmm1[0x8]
float zmm2[0x8]
uint32_t rdi
float zmm5[0x8]
float zmm16[0x8]
float zmm17[0x8]
float zmm18[0x8]
float zmm19[0x8]
float zmm21[0x8]
uint32_t zmm22[0x8]
bool cond:0

if (rsi_4 s<= 0)
    rdi = 0
    rsi_5 = arg18
    r11 = arg17
    cond:0 = 0 == arg19
    
    if (0 s< arg19)
    label_14004f072:
        zmm1 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rdi), data_142fc93a0)
        uint64_t k1_8 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, arg19), zmm1)
        zmm2 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 3)
        int64_t k2_1 = __kmovq_maskmskw_masku64_avx512(k1_8)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k2_2
        int128_t temp0_78
        temp0_78, k2_2 = _mm256_mmask_i32gather_ps(k2_1, *(arg4 + (zmm2[0].q << 2)))
        arg7 = temp0_78
        zmm1 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 0xc)
        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 4)
        int64_t k2_3 = __kmovq_maskmskw_masku64_avx512(k1_8)
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        int64_t k2_4
        int128_t temp0_82
        temp0_82, k2_4 = _mm256_mmask_i32gather_ps(k2_3, *(arg4 + zmm2[0].q))
        arg8 = temp0_82
        zmm1 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm1, 8)
        int64_t k2_5 = __kmovq_maskmskw_masku64_avx512(k1_8)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int64_t k2_6
        int128_t temp0_85
        temp0_85, k2_6 = _mm256_mmask_i32gather_ps(k2_5, *(arg4 + zmm1[0].q))
        zmm2 = temp0_85
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        float var_200_1[0x8] = arg7
        float var_1e0_1[0x8] = arg8
        float var_1c0_1[0x8] = zmm2
        float var_1a0_1[0x8] = zmm1
        zmm5 = _mm256_broadcast_ss(arg3[3])
        float var_180_2[0x8] = zmm5
        float var_160_2[0x8] = zmm5
        float var_140_2[0x8] = zmm5
        float var_120_2[0x8] = zmm5
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1])
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
        zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm1 = _mm256_mul_ps(zmm5, zmm1)
        zmm19 = _mm256_mask_mul_ps(arg5, arg8, zmm17)
        arg13 = _mm256_mask_mul_ps(arg5, zmm2, zmm18)
        zmm21 = _mm256_mask_mul_ps(arg5, arg7, zmm16)
        zmm19 = _mm256_mask3_fmsub_ps(zmm19, arg5, zmm16, zmm2)
        arg13 = _mm256_mask3_fmsub_ps(arg13, arg5, zmm17, arg7)
        zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm18, arg8)
        zmm1 = _mm256_sub_ps(zmm1, zmm1)
        zmm2 = _mm256_mask_add_ps(arg5, zmm19, zmm19)
        arg7 = _mm256_mask_add_ps(arg5, arg13, arg13)
        arg8 = _mm256_mask_add_ps(arg5, zmm21, zmm21)
        zmm1 = _mm256_add_ps(zmm1, zmm1)
        float var_280_2[0x8] = zmm2
        float var_260_2[0x8] = arg7
        float var_240_2[0x8] = arg8
        float var_220_2[0x8] = zmm1
        zmm16 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_200_1), arg5, zmm5, zmm2)
        zmm17 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1e0_1), arg5, zmm5, arg7)
        zmm18 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1c0_1), arg5, zmm5, arg8)
        zmm1 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm1, zmm5, var_1a0_1)
        int256_t var_100_1 = _mm256_mask_store_ps(arg5, zmm16)
        int256_t var_e0_1 = _mm256_mask_store_ps(arg5, zmm17)
        int256_t var_c0_1 = _mm256_mask_store_ps(arg5, zmm18)
        float var_a0_1[0x8] = zmm1
        zmm1 = _mm256_broadcast_ss(arg3[1])
        zmm5 = _mm256_broadcast_ss(arg3[2])
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        arg13 = _mm256_mask_mul_ps(arg5, arg7, zmm5)
        zmm21 = _mm256_mask_mul_ps(arg5, arg8, zmm19)
        zmm22 = _mm256_mask_mul_ps(arg5, zmm2, zmm1)
        arg13 = _mm256_mask3_fmsub_ps(arg13, arg5, arg8, zmm1)
        zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm2, zmm5)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, arg7, zmm19)
        zmm1 = _mm256_mask_add_ps(arg5, zmm16, arg13)
        arg7 = _mm256_mask_add_ps(arg5, zmm17, zmm21)
        arg8 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
        zmm2 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg3[4])
        arg7 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg7, arg3[5])
        arg8 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg8, arg3[6])
        zmm1 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, *arg2)
        zmm5 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg7, arg2[1])
        zmm16 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg8, arg2[2])
        zmm1 = _mm256_sub_ps(
            __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm5, arg1[1]), arg5, zmm1, 
                    *arg1), 
                arg5, zmm16, arg1[2]), 
            _mm256_broadcastss_ps(zmm7))
        int64_t k1_9 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_8, zmm1, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_9, k1_9)
        
        if (not(cond:0))
            zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, zmm1, var_2e0)
            arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, zmm1, var_2c0_1)
            arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg8, zmm1, var_2a0)
            var_2e0 = _mm256_mask_storeu_ps(k1_9, zmm2)
            var_2c0_1 = _mm256_mask_storeu_ps(k1_9, arg7)
            var_2a0 = _mm256_mask_storeu_ps(k1_9, arg8)
            arg6 = _mm256_mask_add_ps(k1_9, arg6, zmm1)
else
    zmm2 = _mm256_broadcast_ss(arg3[3])
    arg6[0].o = *arg3
    zmm1[0].o = arg3[1]
    arg9[0].o = arg3[2]
    arg7 = _mm256_broadcast_ss(*arg2)
    arg8 = _mm256_broadcast_ss(arg2[1])
    zmm5 = _mm256_broadcast_ss(arg2[2])
    zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
    zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
    zmm19 = _mm256_mask_broadcastss_ps(arg5, zmm7)
    arg13[0].o = _mm_mask_xor_ps(arg5, arg13[0].o, arg13[0].o)
    rdi = 0
    bool cond:1_1 = true
    zmm21 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xc)
    zmm22 = _mm256_mask_load_epi64(arg5, data_142fc93c0)
    uint32_t zmm23[0x8] = _mm256_mask_load_epi64(arg5, data_142fc93e0)
    uint32_t zmm24[0x8] = _mm256_mask_load_epi64(arg5, data_142fc9400)
    float zmm25[0x8] = _mm256_mask_broadcastss_ps(arg5, zmm1[0].o)
    float zmm26[0x8] = _mm256_mask_broadcastss_ps(arg5, arg9[0].o)
    float zmm27[0x8] = _mm256_mask_broadcastss_ps(arg5, arg6[0].o)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    
    do
        zmm1[0].o = zx.o(rdi)
        zmm1[0].o = _mm_mask_mullo_epi32(arg5, zmm1[0].o, zmm21[0].o)
        zmm1 = _mm256_broadcastd_epi32(zmm1[0])
        float zmm28[0x8] = _mm256_mask_add_epi32(arg5, zmm1, zmm22)
        arg14[0].o = _mm_mask_xor_ps(arg5, arg14[0].o, arg14[0].o)
        int64_t k1_2
        int128_t temp0_22
        temp0_22, k1_2 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm28[0].q))
        arg14 = temp0_22
        zmm28 = _mm256_mask_add_epi32(arg5, zmm1, zmm23)
        arg15[0].o = _mm_mask_xor_ps(arg5, arg15[0].o, arg15[0].o)
        int64_t k1_4
        int128_t temp0_25
        temp0_25, k1_4 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm28[0].q))
        arg15 = temp0_25
        zmm1 = _mm256_mask_add_epi32(arg5, zmm1, zmm24)
        zmm28[0].o = _mm_mask_xor_ps(arg5, zmm28[0].o, zmm28[0].o)
        int64_t k1_6
        int128_t temp0_28
        temp0_28, k1_6 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm1[0].q))
        zmm28 = temp0_28
        float var_280_1[0x8] = _mm256_mask_store_ps(arg5, arg14)
        float var_260_1[0x8] = _mm256_mask_store_ps(arg5, arg15)
        float var_240_1[0x8] = _mm256_mask_store_ps(arg5, zmm28)
        int256_t var_220_1 = _mm256_mask_store_ps(arg5, arg13)
        float var_180_1[0x8] = zmm2
        float var_160_1[0x8] = zmm2
        float var_140_1[0x8] = zmm2
        float var_120_1[0x8] = zmm2
        zmm1 = _mm256_mask_mul_ps(arg5, arg15, zmm26)
        float zmm31[0x8] = _mm256_mask_mul_ps(arg5, zmm28, zmm27)
        arg9 = _mm256_mask_mul_ps(arg5, arg14, zmm25)
        zmm28 = _mm256_mask3_fmsub_ps(zmm28, arg5, zmm25, zmm1)
        arg14 = _mm256_mask3_fmsub_ps(arg14, arg5, zmm26, zmm31)
        arg15 = _mm256_mask3_fmsub_ps(arg15, arg5, zmm27, arg9)
        zmm1 = _mm256_mask_add_ps(arg5, zmm28, zmm28)
        zmm28 = _mm256_mask_add_ps(arg5, arg14, arg14)
        arg14 = _mm256_mask_add_ps(arg5, arg15, arg15)
        arg15 = _mm256_mask_load_ps(arg5, var_280_1)
        zmm31 = _mm256_mask_load_ps(arg5, var_260_1)
        arg15 = _mm256_mask3_fmadd_ps(arg15, arg5, zmm2, zmm1)
        zmm31 = _mm256_mask3_fmadd_ps(zmm31, arg5, zmm2, zmm28)
        arg9 = _mm256_mask3_fmadd_ps(var_240_1, arg5, zmm2, arg14)
        arg10 = _mm256_mask_mul_ps(arg5, zmm28, zmm26)
        arg11 = _mm256_mask_mul_ps(arg5, arg14, zmm27)
        arg12 = _mm256_mask_mul_ps(arg5, zmm1, zmm25)
        arg14 = _mm256_mask_add_ps(arg5, arg15, _mm256_mask3_fmsub_ps(arg14, arg5, zmm25, arg10))
        zmm1 = _mm256_mask_add_ps(arg5, zmm31, _mm256_mask3_fmsub_ps(zmm1, arg5, zmm26, arg11))
        arg15 = _mm256_mask_add_ps(arg5, arg9, _mm256_mask3_fmsub_ps(zmm28, arg5, zmm27, arg12))
        zmm28 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg14, arg3[4])
        arg14 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg3[5])
        arg15 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg15, arg3[6])
        zmm1 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, zmm28, arg7), arg5, zmm16, 
            _mm256_mask_mul_ps(arg5, _mm256_mask_sub_ps(arg5, arg14, arg8), zmm17))
        zmm31 = _mm256_mask_sub_ps(arg5, 
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, arg15, zmm5), arg5, zmm18, zmm1), zmm19)
        int64_t k1_7 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm31, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_7, k1_7)
        
        if (not(cond:1_1))
            zmm28 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm28, arg5, zmm31, var_2e0)
            arg14 =
                __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg14, arg5, zmm31, var_2c0_1)
            arg15 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg15, arg5, zmm31, var_2a0)
            var_2e0 = _mm256_mask_storeu_ps(k1_7, zmm28)
            var_2c0_1 = _mm256_mask_storeu_ps(k1_7, arg14)
            var_2a0 = _mm256_mask_storeu_ps(k1_7, arg15)
            arg6 = _mm256_mask_add_ps(k1_7, arg6, zmm31)
        
        rdi += 8
        cond:1_1 = rdi == rsi_4
    while (rdi s< rsi_4)
    
    rsi_5 = arg18
    r11 = arg17
    cond:0 = rdi == arg19
    
    if (rdi s< arg19)
        goto label_14004f072
zmm1 = _mm256_hadd_ps(var_2e0, var_2e0)
zmm1 = _mm256_hadd_ps(zmm1, zmm1)
zmm2 = _mm256_hadd_ps(var_2c0_1, var_2c0_1)
arg8[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f+ arg8[0]
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
arg8[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
arg7 = _mm256_hadd_ps(var_2a0, var_2a0)
arg7 = _mm256_hadd_ps(arg7, arg7)
zmm2[0].o = zmm2[0].o f+ arg8[0]
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x10)
zmm2[0].o = _mm256_extractf128_ps(arg7[0].o, 1)
zmm2[0].o = arg7[0].o f+ zmm2[0]
arg7[0].o = __vmovsd_xmmdq_memq(*rsi_5)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x20)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg7[0].o, rsi_5[1].d, 0x20)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
*rsi_5 = zmm1[0]
*(rsi_5 + 4) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
rsi_5[1].d = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
arg6 = _mm256_hadd_ps(arg6, arg6)
arg6 = _mm256_hadd_ps(arg6, arg6)
zmm1[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
arg6[0].o = arg6[0].o f+ zmm1[0]
arg6[0].o = arg6[0].o f+ *r11
*r11 = arg6[0]
arg9[0].o = var_68
arg10[0].o = var_48
arg11[0].o = var_38
arg12[0].o = var_28
_mm256_zeroupper()
