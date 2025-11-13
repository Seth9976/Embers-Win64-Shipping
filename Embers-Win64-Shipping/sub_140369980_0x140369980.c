// 函数: sub_140369980
// 地址: 0x140369980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4]
float var_48[0x4] = zmm8
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm6[0x4]
float var_68[0x4] = zmm6
int32_t r10_4 = ((arg2 s>> 0x1f u>> 0x1d) + arg2) & 0xfffffff8
uint32_t rbx
uint64_t rdi_2
int32_t zmm0[0x8]
float zmm1[0x8]
float zmm2[0x8]
double zmm3[0x4]
uint32_t zmm4[0x8]
uint32_t zmm5[0x8]
float zmm16[0x8]
float zmm17[0x8]
float zmm18[0x8]
float zmm19[0x8]
float zmm20[0x8]
float zmm21[0x8]
float zmm22[0x8]
float zmm23[0x8]
float zmm24[0x8]
float zmm25[0x8]
float zmm26[0x8]

if (r10_4 s<= 0)
    rbx = 0
    rdi_2 = 0
    
    if (0 s< arg2)
    label_140369d32:
        zmm0 = __vpaddd_ymmqq_ymmqq_memqq(_mm256_mask_set1_epi32(arg5, rbx), data_142fc93a0)
        zmm1 = _mm256_mask_set1_epi32(arg5, arg2)
        uint64_t r10_5 = rdi_2 * 3
        zmm2[0].o = *(arg7 + (r10_5 << 2))
        zmm3[0].o = *(arg7 + (r10_5 << 2) + 0x10)
        zmm17[0].o = _mm_mask_loadu_ps(arg5, *(arg7 + (r10_5 << 2) + 0x20))
        zmm5[0].o = *(arg7 + (r10_5 << 2) + 0x30)
        zmm7 = *(arg7 + (r10_5 << 2) + 0x40)
        zmm16[0].o = _mm_mask_loadu_ps(arg5, *(arg7 + (r10_5 << 2) + 0x50))
        int64_t k1_2 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(arg5, zmm1, zmm0)
        zmm6 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x10)
        zmm6 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm6, 0x2c)
        zmm4[0].o = _mm_mask_shuffle_ps(arg5, zmm3[0].o, zmm17[0].o, 0x9e)
        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xd8)
        zmm18[0].o = zmm6[0].q | zmm4[0].q << 0x40
        zmm4[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm6, zmm4[0].o)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x8c)
        zmm17[0].o = _mm_mask_shuffle_ps(arg5, zmm2[0].o, zmm17[0].o, 0xc4)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm5[0].o, 0x10)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm2[0].o, 0x2c)
        zmm2[0].o = _mm_mask_shuffle_ps(arg5, zmm7, zmm16[0].o, 0x9e)
        zmm6 = _mm_permute_ps(zmm2[0].o, 0xd8)
        zmm2[0].o = zmm3[0] | zmm6[0].q << 0x40
        zmm2 = _mm256_insertf32x4(arg5, zmm18, zmm2[0].o, 1)
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6)
        zmm3 = _mm256_insertf128_ps(zmm4, zmm3[0].o, 1)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm5[0].o, 0x8c)
        zmm4[0].o = _mm_mask_shuffle_ps(arg5, zmm4[0].o, zmm16[0].o, 0xc4)
        zmm4 = _mm256_insertf32x4(arg5, zmm17, zmm4[0].o, 1)
        zmm5 = _mm256_mask_loadu_epi32(k1_2, *(arg4 + sx.q(rbx << 2)))
        uint64_t i = zx.q(_cvtmask32_u32(k1_2))
        uint32_t var_1c0[0x8] = zmm5
        zmm16 = __vbroadcastss_ymmf32_maskmskw_memf32_avx512(arg5, 1f)
        int256_t var_280_1
        int256_t var_260_1
        int256_t var_240_1
        
        do
            int64_t rsi_7 = sx.q(var_1c0[_tzcnt_u64(i)])
            int64_t k1_3 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, 
                _mm256_mask_set1_epi32(arg5, rsi_7.d), zmm5)
            uint32_t var_2a0_2[0x8] = zmm4
            float var_380_2[0x8] = _mm256_mask_store_ps(arg5, zmm16)
            float var_360_2[0x8] = _mm256_mask_store_ps(arg5, zmm16)
            float var_340_2[0x8] = _mm256_mask_store_ps(arg5, zmm16)
            int256_t var_320_2 = _mm256_mask_store_ps(arg5, zmm16)
            int64_t k1_4 = __vpcmpgtd_maskmskw_maskmskw_ymmi32_ymmi32_avx512(k1_3, zmm1, zmm0)
            zmm17 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg6[rsi_7 * 2][0])
            zmm18 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg6[rsi_7 * 2][1])
            zmm19 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg6[rsi_7 * 2][2])
            zmm20 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, arg6[rsi_7 * 2][4])
            zmm21 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, arg6[rsi_7 * 2][5])
            zmm22 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, arg6[rsi_7 * 2][6])
            zmm23 = _mm256_mask_load_ps(arg5, zmm4)
            zmm24 = _mm256_mask_load_ps(arg5, zmm4)
            zmm25 = _mm256_mask_load_ps(arg5, zmm4)
            zmm26 = _mm256_mask_load_ps(arg5, var_380_2)
            float zmm27[0x8] = _mm256_mask_load_ps(arg5, var_360_2)
            float zmm28[0x8] = _mm256_mask_load_ps(arg5, var_340_2)
            zmm26 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm26, arg6[rsi_7 * 2][0xc])
            zmm27 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm27, arg6[rsi_7 * 2][0xd])
            zmm28 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm28, arg6[rsi_7 * 2][0xe])
            zmm26 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm26, arg5, zmm23, 
                arg6[rsi_7 * 2 + 1][0])
            zmm23 = _mm256_mask_add_ps(arg5, _mm256_mask_add_ps(arg5, zmm17, zmm20), zmm26)
            zmm26 = _mm256_mask_add_ps(arg5, zmm18, zmm21)
            zmm27 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm27, arg5, zmm24, 
                arg6[rsi_7 * 2][9])
            zmm24 = _mm256_mask_add_ps(arg5, zmm19, zmm22)
            zmm28 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm28, arg5, zmm25, 
                arg6[rsi_7 * 2][0xa])
            zmm25 = _mm256_mask_add_ps(arg5, zmm26, zmm27)
            zmm24 = _mm256_mask_add_ps(arg5, zmm24, zmm28)
            var_280_1 = _mm256_mask_storeu_ps(k1_4, zmm23)
            var_260_1 = _mm256_mask_storeu_ps(k1_4, zmm25)
            var_240_1 = _mm256_mask_storeu_ps(k1_4, zmm24)
            char temp0_136 = _cvtmask32_u32(k1_4)
            zmm23 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg6[rsi_7 * 2][3])
            int256_t var_100_2 = _mm256_mask_store_ps(arg5, zmm17)
            int256_t var_e0_2 = _mm256_mask_store_ps(arg5, zmm18)
            int256_t var_c0_2 = _mm256_mask_store_ps(arg5, zmm19)
            int256_t var_a0_2 = _mm256_mask_store_ps(arg5, zmm23)
            zmm17 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm3, arg6[rsi_7 * 2][7])
            int256_t var_180_2 = _mm256_mask_store_ps(arg5, zmm20)
            int256_t var_160_2 = _mm256_mask_store_ps(arg5, zmm21)
            int256_t var_140_2 = _mm256_mask_store_ps(arg5, zmm22)
            int256_t var_120_2 = _mm256_mask_store_ps(arg5, zmm17)
            i &= not.q(zx.q(temp0_136))
        while (i != 0)
        
        zmm0[0].o = var_280_1.o
        zmm1[0].o = var_280_1:0x10.o
        zmm2[0].o = var_260_1.o
        zmm3[0].o = var_260_1:0x10.o
        zmm4[0].o = var_240_1.o
        zmm5[0].o = var_240_1:0x10.o
        zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x30)
        zmm7 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 0x49)
        *(arg1 + (r10_5 << 2)) =
            _mm_permute_ps(__vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm7, 4), 0x6c)
        *(arg1 + (r10_5 << 2) + 0x10) =
            _mm_permute_ps(__vblendps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm0[0].o, 4), 0x6c)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0x33)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0xe2)
        zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 3)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
        *(arg1 + (r10_5 << 2) + 0x20) = zmm0[0].o
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x30)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm5[0].o, 0x49)
        zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 4)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x6c)
        *(arg1 + (r10_5 << 2) + 0x30) = zmm0[0].o
        zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 4)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x6c)
        *(arg1 + (r10_5 << 2) + 0x40) = zmm0[0].o
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x33)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0xe2)
        zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm0[0].o, 3)
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
        *(arg1 + (r10_5 << 2) + 0x50) = zmm0[0].o
else
    rbx = 0
    zmm0 = _mm256_broadcast_ss(1f)
    
    do
        uint64_t r14_1 = zx.q(rbx)
        uint64_t r15_1 = r14_1 * 3
        zmm1[0].o = *(arg7 + (r15_1 << 2))
        zmm2[0].o = *(arg7 + (r15_1 << 2) + 0x10)
        zmm17[0].o = _mm_mask_loadu_ps(arg5, *(arg7 + (r15_1 << 2) + 0x20))
        zmm18[0].o = _mm_mask_loadu_ps(arg5, *(arg7 + (r15_1 << 2) + 0x30))
        zmm5[0].o = *(arg7 + (r15_1 << 2) + 0x40)
        zmm16[0].o = _mm_mask_loadu_ps(arg5, *(arg7 + (r15_1 << 2) + 0x50))
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x10)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x2c)
        zmm4[0].o = _mm_mask_shuffle_ps(arg5, zmm2[0].o, zmm17[0].o, 0x9e)
        zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xd8)
        zmm19[0].o = zmm3[0] | zmm4[0].q << 0x40
        zmm3[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x8c)
        zmm17[0].o = _mm_mask_shuffle_ps(arg5, zmm1[0].o, zmm17[0].o, 0xc4)
        zmm1[0].o = _mm_mask_shuffle_ps(arg5, zmm5[0].o, zmm18[0].o, 0x10)
        zmm2[0].o = _mm_mask_shuffle_ps(arg5, zmm18[0].o, zmm1[0].o, 0x2c)
        zmm1[0].o = _mm_mask_shuffle_ps(arg5, zmm5[0].o, zmm16[0].o, 0x9e)
        zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0xd8)
        zmm1[0].o = zmm2[0].q | zmm4[0].q << 0x40
        zmm1 = _mm256_insertf32x4(arg5, zmm19, zmm1[0].o, 1)
        zmm2[0].o = __vunpckhpd_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm2 = _mm256_insertf128_ps(zmm3, zmm2[0].o, 1)
        zmm3[0].o = __vinsertps_xmmf32_xmmf32_xmmf32_imm8_avx512(zmm5[0].o, zmm18[0].o, 0x8c)
        zmm3[0].o = _mm_mask_shuffle_ps(arg5, zmm3[0].o, zmm16[0].o, 0xc4)
        zmm3 = _mm256_insertf32x4(arg5, zmm17, zmm3[0].o, 1)
        zmm4 = *(arg4 + sx.q(rbx << 2))
        uint32_t var_1a0[0x8] = zmm4
        int256_t var_220_1
        int256_t var_200_1
        int256_t var_1e0_1
        char temp0_50
        
        for (uint64_t i_1 = 0xff; i_1 != 0; i_1 &= not.q(zx.q(temp0_50)))
            int64_t rsi_3 = sx.q(var_1a0[_tzcnt_u64(i_1)])
            double var_2a0_1[0x4] = zmm3
            int32_t var_320_1[0x8] = zmm0
            int64_t k1_1 = __vpcmpeqd_maskmskw_maskmskw_ymmu32_ymmu32_avx512(arg5, 
                _mm256_mask_set1_epi32(arg5, rsi_3.d), zmm4)
            zmm5 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg6[rsi_3 * 2][0])
            zmm16 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg6[rsi_3 * 2][1])
            zmm17 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg6[rsi_3 * 2][2])
            zmm18 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg6[rsi_3 * 2][4])
            zmm19 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg6[rsi_3 * 2][5])
            zmm20 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg6[rsi_3 * 2][6])
            zmm21 = _mm256_mask_load_ps(arg5, zmm3)
            zmm22 = _mm256_mask_load_ps(arg5, zmm3)
            zmm23 = _mm256_mask_load_ps(arg5, zmm3)
            zmm24 = _mm256_mask_load_ps(arg5, zmm0)
            zmm25 = _mm256_mask_load_ps(arg5, zmm0)
            zmm26 = _mm256_mask_load_ps(arg5, zmm0)
            zmm24 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm24, arg6[rsi_3 * 2][0xc])
            zmm25 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm25, arg6[rsi_3 * 2][0xd])
            zmm26 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm26, arg6[rsi_3 * 2][0xe])
            zmm24 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm24, arg5, zmm21, 
                arg6[rsi_3 * 2 + 1][0])
            zmm21 = _mm256_mask_add_ps(arg5, _mm256_mask_add_ps(arg5, zmm5, zmm18), zmm24)
            zmm24 = _mm256_mask_add_ps(arg5, zmm16, zmm19)
            zmm25 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm25, arg5, zmm22, 
                arg6[rsi_3 * 2][9])
            zmm22 = _mm256_mask_add_ps(arg5, zmm17, zmm20)
            zmm26 = __vfmadd231ps_ymmf32_maskmskw_ymmf32_memf32_avx512(zmm26, arg5, zmm23, 
                arg6[rsi_3 * 2][0xa])
            zmm23 = _mm256_mask_add_ps(arg5, zmm24, zmm25)
            zmm22 = _mm256_mask_add_ps(arg5, zmm22, zmm26)
            var_220_1 = _mm256_mask_storeu_ps(k1_1, zmm21)
            var_200_1 = _mm256_mask_storeu_ps(k1_1, zmm23)
            var_1e0_1 = _mm256_mask_storeu_ps(k1_1, zmm22)
            temp0_50 = _cvtmask32_u32(k1_1)
            zmm21 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm1, arg6[rsi_3 * 2][3])
            uint32_t var_100_1[0x8] = zmm5
            int256_t var_e0_1 = _mm256_mask_store_ps(arg5, zmm16)
            int256_t var_c0_1 = _mm256_mask_store_ps(arg5, zmm17)
            int256_t var_a0_1 = _mm256_mask_store_ps(arg5, zmm21)
            zmm5 = __vmulps_ymmf32_maskmskw_ymmf32_memf32_avx512(arg5, zmm2, arg6[rsi_3 * 2][7])
            int256_t var_180_1 = _mm256_mask_store_ps(arg5, zmm18)
            int256_t var_160_1 = _mm256_mask_store_ps(arg5, zmm19)
            int256_t var_140_1 = _mm256_mask_store_ps(arg5, zmm20)
            uint32_t var_120_1[0x8] = zmm5
        
        zmm1[0].o = var_220_1.o
        zmm2[0].o = var_220_1:0x10.o
        zmm3[0].o = var_200_1.o
        zmm4[0].o = var_200_1:0x10.o
        zmm5[0].o = var_1e0_1.o
        zmm8 = var_1e0_1:0x10.o
        zmm7 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x30)
        zmm6 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm5[0].o, 0x49)
        *(arg1 + (r15_1 << 2)) =
            _mm_permute_ps(__vblendps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm6, 4), 0x6c)
        *(arg1 + (r15_1 << 2) + 0x10) =
            _mm_permute_ps(__vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm1[0].o, 4), 0x6c)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x33)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0xe2)
        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm1[0].o, 3)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xd2)
        *(arg1 + (r15_1 << 2) + 0x20) = zmm1[0].o
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 0x30)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm8, 0x49)
        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 4)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x6c)
        *(arg1 + (r15_1 << 2) + 0x30) = zmm1[0].o
        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 4)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x6c)
        *(arg1 + (r15_1 << 2) + 0x40) = zmm1[0].o
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 0x33)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0xe2)
        zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm8, zmm1[0].o, 3)
        zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xd2)
        *(arg1 + (r15_1 << 2) + 0x50) = zmm1[0].o
        rbx = r14_1.d + 8
    while (rbx s< r10_4)
    
    rdi_2 = zx.q(rbx)
    
    if (rbx s< arg2)
        goto label_140369d32
_mm256_zeroupper()
return arg6
