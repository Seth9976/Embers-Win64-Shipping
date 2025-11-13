// 函数: sub_140045560
// 地址: 0x140045560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = arg12[0].o
int128_t var_38 = arg11[0].o
int128_t var_48 = arg10[0].o
uint16_t zmm6[0x8] = *arg20
float zmm31[0x4] = _mm_mask_load_ss(arg5, arg16)
arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
float var_280[0x8] = arg6
int32_t rsi_4 = ((arg19 s>> 0x1f u>> 0x1d) + arg19) & 0xfffffff8
float var_2a0_1[0x8] = arg6
float var_2c0[0x8] = arg6
double* rsi_5
int32_t* r11
float zmm0[0x8]
float zmm2[0x8]
uint32_t rdi
float zmm16[0x8]
float zmm17[0x8]
float zmm18[0x8]
float zmm20[0x8]
float zmm21[0x8]
float zmm22[0x8]
uint32_t zmm23[0x8]
bool cond:0

if (rsi_4 s<= 0)
    rdi = 0
    rsi_5 = arg18
    r11 = arg17
    cond:0 = 0 == arg19
    
    if (0 s< arg19)
    label_140045884:
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rdi), data_142fc93a0)
        uint64_t k1_8 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, 
            _mm256_mask_set1_epi32(arg5, arg19), zmm0)
        zmm2 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 3)
        int64_t k2_1 = __kmovq_maskmskw_masku64_avx512(k1_8)
        arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
        int64_t k2_2
        char temp0_85
        temp0_85, k2_2 = _mm256_mmask_i32gather_ps(k2_1, *(arg4 + (zmm2[0].q << 2)))
        arg8 = temp0_85
        zmm0 = __vpmulld_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 0xc)
        zmm2 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 4)
        int64_t k2_3 = __kmovq_maskmskw_masku64_avx512(k1_8)
        arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
        int64_t k2_4
        char temp0_89
        temp0_89, k2_4 = _mm256_mmask_i32gather_ps(k2_3, *(arg4 + zmm2[0].q))
        arg9 = temp0_89
        arg7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
        zmm0 = __vpaddd_ymmu32_maskmskw_ymmu32_memu32_avx512(arg5, zmm0, 8)
        int64_t k2_5 = __kmovq_maskmskw_masku64_avx512(k1_8)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int64_t k2_6
        char temp0_93
        temp0_93, k2_6 = _mm256_mmask_i32gather_ps(k2_5, *(arg4 + zmm0[0].q))
        zmm2 = temp0_93
        float var_1e0_1[0x8] = arg8
        float var_1c0_1[0x8] = arg9
        float var_1a0_1[0x8] = zmm2
        zmm0 = _mm256_broadcast_ss(arg3[3])
        float var_160_2[0x8] = zmm0
        float var_140_2[0x8] = zmm0
        float var_120_2[0x8] = zmm0
        float var_100_2[0x8] = zmm0
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[1])
        zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg3[2])
        zmm18 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        arg13 = _mm256_mask_mul_ps(arg5, zmm0, arg7)
        zmm20 = _mm256_mask_mul_ps(arg5, arg9, zmm17)
        zmm21 = _mm256_mask_mul_ps(arg5, zmm2, zmm18)
        zmm22 = _mm256_mask_mul_ps(arg5, arg8, zmm16)
        zmm20 = _mm256_mask3_fmsub_ps(zmm20, arg5, zmm16, zmm2)
        zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm17, arg8)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, zmm18, arg9)
        zmm2 = _mm256_mask_sub_ps(arg5, arg13, arg13)
        arg8 = _mm256_mask_add_ps(arg5, zmm20, zmm20)
        arg9 = _mm256_mask_add_ps(arg5, zmm21, zmm21)
        zmm16 = _mm256_mask_add_ps(arg5, zmm22, zmm22)
        float var_260_2[0x8] = arg8
        float var_240_2[0x8] = arg9
        int256_t var_220_2 = _mm256_mask_store_ps(arg5, zmm16)
        zmm2 = _mm256_add_ps(zmm2, zmm2)
        float var_200_2[0x8] = zmm2
        zmm17 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1e0_1), arg5, zmm0, arg8)
        zmm18 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1c0_1), arg5, zmm0, arg9)
        arg13 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_1a0_1), arg5, zmm0, zmm16)
        zmm2 = __vfmadd213ps_ymmqq_ymmqq_memqq(zmm2, zmm0, arg7)
        int256_t var_e0_1 = _mm256_mask_store_ps(arg5, zmm17)
        int256_t var_c0_1 = _mm256_mask_store_ps(arg5, zmm18)
        int256_t var_a0_1 = _mm256_mask_store_ps(arg5, arg13)
        float var_80_1[0x8] = zmm2
        zmm0 = _mm256_broadcast_ss(arg3[1])
        zmm2 = _mm256_broadcast_ss(arg3[2])
        zmm20 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, *arg3)
        zmm21 = _mm256_mask_mul_ps(arg5, arg9, zmm2)
        zmm22 = _mm256_mask_mul_ps(arg5, zmm16, zmm20)
        zmm23 = _mm256_mask_mul_ps(arg5, arg8, zmm0)
        zmm21 = _mm256_mask3_fmsub_ps(zmm21, arg5, zmm16, zmm0)
        zmm22 = _mm256_mask3_fmsub_ps(zmm22, arg5, arg8, zmm2)
        zmm23 = _mm256_mask3_fmsub_ps(zmm23, arg5, arg9, zmm20)
        zmm0 = _mm256_mask_add_ps(arg5, zmm17, zmm21)
        zmm2 = _mm256_mask_add_ps(arg5, zmm18, zmm22)
        zmm16 = _mm256_mask_add_ps(arg5, arg13, zmm23)
        arg8 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, arg3[4])
        arg9 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg3[5])
        zmm16 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm16, arg3[6])
        zmm0 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg8, *arg2)
        zmm2 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg9, arg2[1])
        zmm17 = __vsubps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm16, arg2[2])
        zmm0 = _mm256_mask3_fmadd_ps(
            _mm256_fmadd_ps(_mm256_fmadd_ps(zmm0, zmm0, arg7), zmm2, zmm2), arg5, zmm17, zmm17)
        zmm2 = _mm256_mask_rsqrt14_ps(arg5, zmm0)
        zmm0 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
            _mm256_mul_ps(zmm2, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(_mm256_mul_ps(zmm0, zmm2), 
                    arg5, zmm2, 0x40400000)), 
            0x3f000000)
        zmm2 = _mm256_mask_rcp14_ps(arg5, zmm0)
        zmm2 = _mm256_sub_ps(
            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, zmm2, 0x40000000), 
                arg5, zmm2, *arg1), 
            _mm256_mask_broadcastss_ps(arg5, zmm31))
        int64_t k1_9 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(k1_8, zmm2, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_9, k1_9)
        
        if (not(cond:0))
            arg8 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg8, zmm2, var_2c0)
            arg9 = __vfmadd213ps_ymmqq_ymmqq_memqq(arg9, zmm2, var_2a0_1)
            zmm16 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm16, arg5, zmm2, var_280)
            var_2c0 = _mm256_mask_storeu_ps(k1_9, arg8)
            var_2a0_1 = _mm256_mask_storeu_ps(k1_9, arg9)
            var_280 = _mm256_mask_storeu_ps(k1_9, zmm16)
            arg6 = _mm256_mask_add_ps(k1_9, arg6, zmm2)
else
    arg7 = _mm256_broadcast_ss(arg3[3])
    arg6[0].o = *arg3
    zmm2[0].o = arg3[1]
    zmm0[0].o = arg3[2]
    arg8 = _mm256_broadcast_ss(*arg1)
    arg9 = _mm256_broadcast_ss(*arg2)
    zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[1])
    zmm17 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, arg2[2])
    zmm18 = _mm256_mask_broadcastss_ps(arg5, zmm31)
    arg13[0].o = _mm_mask_xor_ps(arg5, arg13[0].o, arg13[0].o)
    rdi = 0
    bool cond:1_1 = true
    zmm20 = __vpbroadcastd_ymmu32_maskmskw_memu32_avx512(arg5, 0xc)
    zmm21 = _mm256_mask_load_epi64(arg5, data_142fc93c0)
    zmm22 = _mm256_mask_load_epi64(arg5, data_142fc93e0)
    zmm23 = _mm256_mask_load_epi64(arg5, data_142fc9400)
    float zmm24[0x8] = _mm256_mask_broadcastss_ps(arg5, zmm2[0].o)
    float zmm25[0x8] = _mm256_mask_broadcastss_ps(arg5, zmm0[0].o)
    float zmm26[0x8] = _mm256_mask_broadcastss_ps(arg5, arg6[0].o)
    arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
    
    do
        zmm0[0].o = zx.o(rdi)
        zmm0[0].o = _mm_mask_mullo_epi32(arg5, zmm0[0].o, zmm20[0].o)
        zmm0 = _mm256_broadcastd_epi32(zmm0[0])
        zmm2 = _mm256_mask_add_epi32(arg5, zmm0, zmm21)
        arg14[0].o = _mm_mask_xor_ps(arg5, arg14[0].o, arg14[0].o)
        int64_t k1_2
        char temp0_21
        temp0_21, k1_2 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm2[0].q))
        arg14 = temp0_21
        zmm2 = _mm256_mask_add_epi32(arg5, zmm0, zmm22)
        arg15[0].o = _mm_mask_xor_ps(arg5, arg15[0].o, arg15[0].o)
        int64_t k1_4
        char temp0_24
        temp0_24, k1_4 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm2[0].q))
        arg15 = temp0_24
        zmm0 = _mm256_mask_add_epi32(arg5, zmm0, zmm23)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        int64_t k1_6
        char temp0_27
        temp0_27, k1_6 = _mm256_mmask_i32gather_ps(_kxnor_mask16(arg5, arg5), *(arg4 + zmm0[0].q))
        zmm2 = temp0_27
        float var_260_1[0x8] = _mm256_mask_store_ps(arg5, arg14)
        float var_240_1[0x8] = _mm256_mask_store_ps(arg5, arg15)
        float var_220_1[0x8] = zmm2
        int256_t var_200_1 = _mm256_mask_store_ps(arg5, arg13)
        float var_160_1[0x8] = arg7
        float var_140_1[0x8] = arg7
        float var_120_1[0x8] = arg7
        float var_100_1[0x8] = arg7
        zmm0 = _mm256_mask_mul_ps(arg5, arg15, zmm25)
        float zmm29[0x8] = _mm256_mask_mul_ps(arg5, zmm2, zmm26)
        float zmm30[0x8] = _mm256_mask_mul_ps(arg5, arg14, zmm24)
        zmm2 = _mm256_mask3_fmsub_ps(zmm2, arg5, zmm24, zmm0)
        arg14 = _mm256_mask3_fmsub_ps(arg14, arg5, zmm25, zmm29)
        arg15 = _mm256_mask3_fmsub_ps(arg15, arg5, zmm26, zmm30)
        zmm0 = _mm256_add_ps(zmm2, zmm2)
        zmm2 = _mm256_mask_add_ps(arg5, arg14, arg14)
        arg14 = _mm256_mask_add_ps(arg5, arg15, arg15)
        arg15 = _mm256_mask_load_ps(arg5, var_260_1)
        zmm29 = _mm256_mask_load_ps(arg5, var_240_1)
        arg15 = _mm256_mask3_fmadd_ps(arg15, arg5, arg7, zmm0)
        zmm29 = _mm256_mask3_fmadd_ps(zmm29, arg5, arg7, zmm2)
        zmm30 = _mm256_mask3_fmadd_ps(_mm256_mask_load_ps(arg5, var_220_1), arg5, arg7, arg14)
        arg10 = _mm256_mask_mul_ps(arg5, zmm2, zmm25)
        arg11 = _mm256_mask_mul_ps(arg5, arg14, zmm26)
        arg12 = _mm256_mask_mul_ps(arg5, zmm0, zmm24)
        arg14 = _mm256_mask_add_ps(arg5, arg15, _mm256_mask3_fmsub_ps(arg14, arg5, zmm24, arg10))
        zmm0 = _mm256_mask_add_ps(arg5, zmm29, _mm256_mask3_fmsub_ps(zmm0, arg5, zmm25, arg11))
        zmm2 = _mm256_mask_add_ps(arg5, zmm30, _mm256_mask3_fmsub_ps(zmm2, arg5, zmm26, arg12))
        arg14 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, arg14, arg3[4])
        arg15 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm0, arg3[5])
        zmm29 = __vaddps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg3[6])
        zmm0 = _mm256_mask_sub_ps(arg5, arg14, arg9)
        zmm2 = _mm256_mask_sub_ps(arg5, arg15, zmm16)
        zmm30 = _mm256_mask_sub_ps(arg5, zmm29, zmm17)
        zmm0 = _mm256_mask3_fmadd_ps(
            _mm256_fmadd_ps(_mm256_mask3_fmadd_ps(zmm0, arg5, zmm0, arg13), zmm2, zmm2), arg5, 
            zmm30, zmm30)
        zmm2 = _mm256_mask_rsqrt14_ps(arg5, zmm0)
        zmm0 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, 
            _mm256_mul_ps(zmm2, 
                __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(_mm256_mul_ps(zmm0, zmm2), 
                    arg5, zmm2, 0x40400000)), 
            0x3f000000)
        zmm2 = _mm256_mask_rcp14_ps(arg5, zmm0)
        zmm0 = _mm256_fnmadd_ps(
            __vfnmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm0, arg5, zmm2, 0x40000000), 
            zmm2, arg8)
        zmm30 = _mm256_mask_sub_ps(arg5, zmm0, zmm18)
        int64_t k1_7 =
            __vcmpps_maskmskw_maskmskw_ymmf32_memf32_imm8_avx512(arg5, zmm30, 0xb8d1b717, 1)
        _kortest_mask8_u8(k1_7, k1_7)
        
        if (not(cond:1_1))
            arg14 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg14, arg5, zmm30, var_2c0)
            arg15 =
                __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg15, arg5, zmm30, var_2a0_1)
            zmm29 = __vfmadd213ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm29, arg5, zmm30, var_280)
            var_2c0 = _mm256_mask_storeu_ps(k1_7, arg14)
            var_2a0_1 = _mm256_mask_storeu_ps(k1_7, arg15)
            var_280 = _mm256_mask_storeu_ps(k1_7, zmm29)
            arg6 = _mm256_mask_add_ps(k1_7, arg6, zmm30)
        
        rdi += 8
        cond:1_1 = rdi == rsi_4
    while (rdi s< rsi_4)
    
    rsi_5 = arg18
    r11 = arg17
    cond:0 = rdi == arg19
    
    if (rdi s< arg19)
        goto label_140045884
int64_t k1_10 = __vptestmw_maskmskw_maskmskw_xmmu16_memu16_avx512(arg5, zmm6, data_142fc92e0)
zmm0 = _mm256_mask_load_ps(k1_10, var_2c0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm0 = _mm256_hadd_ps(zmm0, zmm0)
zmm2[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
zmm0[0].o = zmm0[0].o f+ zmm2[0]
zmm2 = _mm256_mask_load_ps(k1_10, var_2a0_1)
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
zmm2 = _mm256_hadd_ps(zmm2, zmm2)
arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
arg8 = _mm256_mask_load_ps(k1_10, var_280)
arg8 = _mm256_hadd_ps(arg8, arg8)
zmm2[0].o = zmm2[0].o f+ arg7[0]
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x10)
zmm2 = _mm256_hadd_ps(arg8, arg8)
arg7[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
zmm2[0].o = zmm2[0].o f+ arg7[0]
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
arg10[0].o = var_48
arg11[0].o = var_38
arg12[0].o = var_28
_mm256_zeroupper()
