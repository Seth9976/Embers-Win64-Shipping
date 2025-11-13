// 函数: sub_140044a10
// 地址: 0x140044a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = arg13[0].o
int128_t var_38 = arg12[0].o
int128_t var_48 = arg11[0].o
int128_t var_58 = arg10[0].o
int128_t var_78 = arg9[0].o
float zmm0[0x8]
zmm0[0].o = *arg21
float zmm7[0x4] = arg17
arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
float var_2a0[0x8] = arg6
int32_t rsi_4 = ((arg20 s>> 0x1f u>> 0x1d) + arg20) & 0xfffffff8
float var_2c0_1[0x8] = arg6
float var_2e0[0x8] = arg6
double* rsi_5
float* r11
float zmm2[0x8]
float zmm3[0x8]
uint32_t rdi
float zmm16[0x8]
float zmm17[0x8]
float zmm18[0x8]
float zmm19[0x8]
float zmm20[0x8]
float zmm22[0x8]
uint32_t zmm23[0x8]
bool cond:0

if (rsi_4 s<= 0)
    rdi = 0
    rsi_5 = arg19
    r11 = arg18
    cond:0 = 0 == arg20
    
    if (0 s< arg20)
    label_140044d21:
        zmm2 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rdi), data_142fc93a0)
        uint64_t k1_8 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, arg20), zmm2)
        zmm3 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 3)
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        int64_t k2_2
        int128_t temp0_77
        temp0_77, k2_2 = _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_8), 
            *(arg4 + (zmm3[0].q << 2)))
        arg7 = temp0_77
        zmm2 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 0xc)
        zmm3 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 4)
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        int64_t k2_4
        int128_t temp0_81
        temp0_81, k2_4 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_8), *(arg4 + zmm3[0].q))
        arg8 = temp0_81
        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm2, 8)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        int64_t k2_6
        int128_t temp0_84
        temp0_84, k2_6 =
            _mm256_mmask_i32gather_ps(__kmovq_maskmskw_masku64_avx512(k1_8), *(arg4 + zmm2[0].q))
        zmm3 = temp0_84
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        float var_200_1[0x8] = arg7
        float var_1e0_1[0x8] = arg8
        float var_1c0_1[0x8] = zmm3
        float var_1a0_1[0x8] = zmm2
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[3])
        int256_t var_180_2 = _mm256_mask_store_ps(arg5, zmm16)
        int256_t var_160_2 = _mm256_mask_store_ps(arg5, zmm16)
        int256_t var_140_2 = _mm256_mask_store_ps(arg5, zmm16)
        int256_t var_120_2 = _mm256_mask_store_ps(arg5, zmm16)
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1])
        zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
        zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm2 = _mm256_mask_mul_ps(arg5, zmm16, zmm2)
        zmm20 = _mm256_mask_mul_ps(arg5, arg8, zmm18)
        arg14 = _mm256_mask_mul_ps(arg5, zmm3, zmm19)
        zmm22 = _mm256_mask_mul_ps(arg5, arg7, zmm17)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, zmm17, zmm3)
        arg14 = _mm256_mask3_fmsub_ps(arg14, arg5, zmm18, arg7)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm19, arg8)
        zmm2 = _mm256_sub_ps(zmm2, zmm2)
        zmm3 = _mm256_mask_add_ps(arg5, zmm20, zmm20)
        arg7 = _mm256_mask_add_ps(arg5, arg14, arg14)
        arg8 = _mm256_mask_add_ps(arg5, zmm22, zmm22)
        zmm2 = _mm256_add_ps(zmm2, zmm2)
        float var_280_2[0x8] = zmm3
        float var_260_2[0x8] = arg7
        float var_240_2[0x8] = arg8
        float var_220_2[0x8] = zmm2
        zmm17 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_200_1), arg5, zmm16, zmm3)
        zmm18 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1e0_1), arg5, zmm16, arg7)
        zmm19 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1c0_1), arg5, zmm16, arg8)
        zmm2 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm2, arg5, zmm16, var_1a0_1)
        int256_t var_100_1 = _mm256_mask_store_ps(arg5, zmm17)
        int256_t var_e0_1 = _mm256_mask_store_ps(arg5, zmm18)
        int256_t var_c0_1 = _mm256_mask_store_ps(arg5, zmm19)
        float var_a0_1[0x8] = zmm2
        zmm2 = _mm256_broadcast_ss(arg3[1])
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        arg14 = _mm256_mask_mul_ps(arg5, arg7, zmm16)
        zmm22 = _mm256_mask_mul_ps(arg5, arg8, zmm20)
        zmm23 = _mm256_mask_mul_ps(arg5, zmm3, zmm2)
        arg14 = _mm256_mask3_fmsub_ps(arg14, arg5, arg8, zmm2)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm3, zmm16)
        zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, arg7, zmm20)
        zmm2 = _mm256_mask_add_ps(arg5, zmm17, arg14)
        arg7 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
        arg8 = _mm256_mask_add_ps(arg5, zmm19, zmm23)
        zmm3 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg3[4])
        arg7 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg7, arg3[5])
        arg8 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg8, arg3[6])
        zmm2 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, *arg2)
        zmm16 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg7, arg2[1])
        zmm17 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg8, arg2[2])
        zmm2 = _mm256_mask_sub_ps(arg5, 
            __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                    __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm16, arg1[1]), arg5, 
                    zmm2, *arg1), 
                arg5, zmm17, arg1[2]), 
            _mm256_broadcastss_ps(zmm7))
        int64_t k1_9 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_8, zmm2, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_9, k1_9)
        
        if (not(cond:0))
            zmm3 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm3, zmm2, var_2e0)
            arg7 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg7, zmm2, var_2c0_1)
            arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg8, zmm2, var_2a0)
            var_2e0 = _mm256_mask_storeu_ps(k1_9, zmm3)
            var_2c0_1 = _mm256_mask_storeu_ps(k1_9, arg7)
            var_2a0 = _mm256_mask_storeu_ps(k1_9, arg8)
            arg6 = _mm256_mask_add_ps(k1_9, arg6, zmm2)
else
    zmm3 = _mm256_broadcast_ss(arg3[3])
    arg6[0].o = *arg3
    arg9[0].o = arg3[1]
    zmm2[0].o = arg3[2]
    arg7 = _mm256_broadcast_ss(*arg2)
    arg8 = _mm256_broadcast_ss(arg2[1])
    zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[2])
    zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg1)
    zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[1])
    zmm19 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg1[2])
    zmm20 = _mm256_mask_broadcastss_ps(arg5, zmm7)
    arg14[0].o = _mm_mask_xor_ps(arg5, arg14[0].o, arg14[0].o)
    rdi = 0
    bool cond:1_1 = true
    zmm22 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xc)
    zmm23 = _mm256_mask_load_epi64(arg5, data_142fc93c0)
    uint32_t zmm24[0x8] = _mm256_mask_load_epi64(arg5, data_142fc93e0)
    uint32_t zmm25[0x8] = _mm256_mask_load_epi64(arg5, data_142fc9400)
    float zmm26[0x8] = _mm256_mask_broadcastss_ps(arg5, arg9[0].o)
    float zmm27[0x8] = _mm256_mask_broadcastss_ps(arg5, zmm2[0].o)
    float zmm28[0x8] = _mm256_mask_broadcastss_ps(arg5, arg6[0].o)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    
    do
        zmm2[0].o = zx.o(rdi)
        zmm2[0].o = _mm_mask_mullo_epi32(arg5, zmm2[0].o, zmm22[0].o)
        zmm2 = _mm256_broadcastd_epi32(zmm2[0])
        float zmm29[0x8] = _mm256_mask_add_epi32(arg5, zmm2, zmm23)
        arg15[0].o = _mm_mask_xor_ps(arg5, arg15[0].o, arg15[0].o)
        int64_t k1_2
        int128_t temp0_22
        temp0_22, k1_2 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm29[0].q))
        arg15 = temp0_22
        zmm29 = _mm256_mask_add_epi32(arg5, zmm2, zmm24)
        arg16[0].o = _mm_mask_xor_ps(arg5, arg16[0].o, arg16[0].o)
        int64_t k1_4
        int128_t temp0_25
        temp0_25, k1_4 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm29[0].q))
        arg16 = temp0_25
        zmm2 = _mm256_mask_add_epi32(arg5, zmm2, zmm25)
        zmm29[0].o = _mm_mask_xor_ps(arg5, zmm29[0].o, zmm29[0].o)
        int64_t k1_6
        int128_t temp0_28
        temp0_28, k1_6 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm2[0].q))
        zmm29 = temp0_28
        float var_280_1[0x8] = _mm256_mask_store_ps(arg5, arg15)
        float var_260_1[0x8] = _mm256_mask_store_ps(arg5, arg16)
        float var_240_1[0x8] = _mm256_mask_store_ps(arg5, zmm29)
        int256_t var_220_1 = _mm256_mask_store_ps(arg5, arg14)
        float var_180_1[0x8] = zmm3
        float var_160_1[0x8] = zmm3
        float var_140_1[0x8] = zmm3
        float var_120_1[0x8] = zmm3
        zmm2 = _mm256_mask_mul_ps(arg5, arg16, zmm27)
        arg9 = _mm256_mask_mul_ps(arg5, zmm29, zmm28)
        arg10 = _mm256_mask_mul_ps(arg5, arg15, zmm26)
        zmm29 = _mm256_mask3_fmsub_ps(zmm29, arg5, zmm26, zmm2)
        arg15 = _mm256_mask3_fmsub_ps(arg15, arg5, zmm27, arg9)
        arg16 = _mm256_mask3_fmsub_ps(arg16, arg5, zmm28, arg10)
        zmm2 = _mm256_mask_add_ps(arg5, zmm29, zmm29)
        zmm29 = _mm256_mask_add_ps(arg5, arg15, arg15)
        arg15 = _mm256_mask_add_ps(arg5, arg16, arg16)
        arg16 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_280_1), arg5, zmm3, zmm2)
        arg9 = _mm256_mask3_fmadd_ps(var_260_1, arg5, zmm3, zmm29)
        arg10 = _mm256_mask3_fmadd_ps(var_240_1, arg5, zmm3, arg15)
        arg11 = _mm256_mask_mul_ps(arg5, zmm29, zmm27)
        arg12 = _mm256_mask_mul_ps(arg5, arg15, zmm28)
        arg13 = _mm256_mask_mul_ps(arg5, zmm2, zmm26)
        arg15 = _mm256_mask_add_ps(arg5, arg16, _mm256_mask3_fmsub_ps(arg15, arg5, zmm26, arg11))
        zmm2 = _mm256_add_ps(arg9, _mm256_mask3_fmsub_ps(zmm2, arg5, zmm27, arg12))
        arg16 = _mm256_mask_add_ps(arg5, arg10, _mm256_mask3_fmsub_ps(zmm29, arg5, zmm28, arg13))
        zmm29 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg15, arg3[4])
        arg15 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg3[5])
        arg16 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg16, arg3[6])
        zmm2 = _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, zmm29, arg7), arg5, zmm17, 
            _mm256_mask_mul_ps(arg5, _mm256_mask_sub_ps(arg5, arg15, arg8), zmm18))
        arg9 = _mm256_mask_sub_ps(arg5, 
            _mm256_mask3_fmadd_ps(_mm256_mask_sub_ps(arg5, arg16, zmm16), arg5, zmm19, zmm2), zmm20)
        int64_t k1_7 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, arg9, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_7, k1_7)
        
        if (not(cond:1_1))
            zmm29 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm29, arg5, arg9, var_2e0)
            arg15 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg15, arg5, arg9, var_2c0_1)
            arg16 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg16, arg5, arg9, var_2a0)
            var_2e0 = _mm256_mask_storeu_ps(k1_7, zmm29)
            var_2c0_1 = _mm256_mask_storeu_ps(k1_7, arg15)
            var_2a0 = _mm256_mask_storeu_ps(k1_7, arg16)
            arg6 = _mm256_mask_add_ps(k1_7, arg6, arg9)
        
        rdi += 8
        cond:1_1 = rdi == rsi_4
    while (rdi s< rsi_4)
    
    rsi_5 = arg19
    r11 = arg18
    cond:0 = rdi == arg20
    
    if (rdi s< arg20)
        goto label_140044d21
int64_t k1_10 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm0[0].o, data_142fc92e0)
zmm0 = _mm256_mask_load_ps(k1_10, var_2e0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm2[0]
zmm2 = _mm256_mask_load_ps(k1_10, var_2c0_1)
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
arg7 = _mm256_mask_load_ps(k1_10, var_2a0)
arg7 = _mm256_hadd_ps(arg7, arg7)
zmm2[0].o = zmm2[0].o f+ zmm3[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x10)
zmm2 = _mm256_hadd_ps(arg7, arg7)
zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm2[0].o = zmm2[0].o f+ zmm3[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x20)
zmm2[0].o = __vmovsd_xmmdq_memq(*rsi_5)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, rsi_5[1].d, 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
*rsi_5 = zmm0[0]
*(rsi_5 + 4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
rsi_5[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0 = _mm256_mask_mov_ps(k1_10, arg6)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
arg6[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ arg6[0]
zmm0[0].o = zmm0[0].o f+ *r11
*r11 = zmm0[0]
arg9[0].o = var_78
arg10[0].o = var_58
arg11[0].o = var_48
arg12[0].o = var_38
arg13[0].o = var_28
_mm256_zeroupper()
