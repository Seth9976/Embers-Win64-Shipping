// 函数: sub_140321160
// 地址: 0x140321160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2 & 0xfffffff8
uint64_t i_2
float zmm0[0x8]
float zmm2[0x8]
uint32_t zmm4[0x8]
float zmm5[0x8]
float zmm16[0x8]
float zmm18[0x8]
double zmm19[0x4]

if (i s> 0)
    i_2 = 0
    zmm0 = _mm256_broadcast_ss(9.99999994e-09f)
    arg4 = _mm256_cmpeq_epi32(arg4, arg4)
    zmm2 = _mm256_broadcast_ss(3f)
    float zmm3[0x8] = _mm256_broadcast_ss(0.5f)
    zmm4 = _mm_broadcastsi128_si256(data_142d3f660)
    
    do
        int64_t rax = sx.q(i_2.d)
        zmm5[0].o = arg1[rax * 3]
        zmm16 = __vinsertf32x4_ymmf32_maskmskw_ymmf32_memf32_imm8_avx512(arg3, zmm5, 
            arg1[rax * 3 + 3], 1)
        zmm5[0].o = arg1[sx.q((rax + 2).d) * 3]
        arg5 = __vinsertf32x4_ymmf32_maskmskw_ymmf32_memf32_imm8_avx512(arg3, zmm5, 
            arg1[sx.q((rax + 2).d) * 3 + 3], 1)
        zmm5[0].o = arg1[sx.q((rax + 4).d) * 3]
        zmm18 = __vinsertf32x4_ymmf32_maskmskw_ymmf32_memf32_imm8_avx512(arg3, zmm5, 
            arg1[sx.q((rax + 4).d) * 3 + 3], 1)
        zmm5[0].o = arg1[sx.q((rax + 6).d) * 3]
        zmm5 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm5, arg1[sx.q((rax + 6).d) * 3 + 3], 1)
        zmm19 = _mm256_mask_mul_ps(arg3, zmm16, zmm16)
        zmm19 = _mm256_mask_add_ps(arg3, zmm19, _mm256_mask_permute_pd(arg3, zmm19, 5))
        zmm19 = _mm256_mask_add_ps(arg3, zmm19, _mm256_mask_permute_ps(arg3, zmm19, 0x39))
        float zmm20[0x8] = _mm256_mask_mov_ps(_mm256_cmp_ps_mask(arg3, zmm0, zmm19, 2), arg4)
        float zmm21[0x8] = _mm256_mask_rsqrt14_ps(arg3, zmm19)
        zmm19 = _mm256_mask_mul_ps(arg3, zmm21, 
            _mm256_mask3_fnmadd_ps(_mm256_mask_mul_ps(arg3, zmm21, zmm19), arg3, zmm21, zmm2))
        zmm21 = _mm256_mask_andnot_ps(arg3, zmm20, zmm4)
        float zmm22[0x8] = _mm256_mask_mul_ps(arg3, arg5, arg5)
        zmm22 = _mm256_mask_add_ps(arg3, zmm22, _mm256_mask_permute_pd(arg3, zmm22, 5))
        zmm19 = _mm256_mask_mul_ps(arg3, zmm19, zmm3)
        zmm22 = _mm256_mask_add_ps(arg3, zmm22, _mm256_mask_permute_ps(arg3, zmm22, 0x39))
        float zmm23[0x8] = _mm256_mask_mov_ps(_mm256_cmp_ps_mask(arg3, zmm0, zmm22, 2), arg4)
        float zmm24[0x8] = _mm256_mask_rsqrt14_ps(arg3, zmm22)
        zmm16 = _mm256_mask_mul_ps(arg3, zmm16, zmm19)
        arg5 = _mm256_mask_mul_ps(arg3, arg5, 
            _mm256_mask_mul_ps(arg3, 
                _mm256_mask_mul_ps(arg3, zmm24, 
                    _mm256_mask3_fnmadd_ps(_mm256_mask_mul_ps(arg3, zmm24, zmm22), arg3, zmm24, 
                        zmm2)), 
                zmm3))
        zmm16 = _mm256_mask_and_ps(arg3, zmm16, zmm20)
        zmm19 = _mm256_mask_andnot_ps(arg3, zmm23, zmm4)
        zmm20 = _mm256_mask_mul_ps(arg3, zmm18, zmm18)
        zmm20 = _mm256_mask_add_ps(arg3, zmm20, _mm256_mask_permute_pd(arg3, zmm20, 5))
        zmm22 = _mm256_mask_permute_ps(arg3, zmm20, 0x39)
        zmm16 = _mm256_mask_or_ps(arg3, zmm16, zmm21)
        zmm20 = _mm256_mask_add_ps(arg3, zmm20, zmm22)
        zmm21 = _mm256_mask_mov_ps(_mm256_cmp_ps_mask(arg3, zmm0, zmm20, 2), arg4)
        zmm22 = _mm256_mask_rsqrt14_ps(arg3, zmm20)
        zmm20 = _mm256_mask_mul_ps(arg3, zmm22, zmm20)
        arg5 = _mm256_mask_and_ps(arg3, arg5, zmm23)
        zmm18 = _mm256_mask_mul_ps(arg3, zmm18, 
            _mm256_mask_mul_ps(arg3, 
                _mm256_mask_mul_ps(arg3, zmm22, _mm256_mask3_fnmadd_ps(zmm20, arg3, zmm22, zmm2)), 
                zmm3))
        zmm20 = _mm256_mask_andnot_ps(arg3, zmm21, zmm4)
        zmm18 = _mm256_mask_and_ps(arg3, zmm18, zmm21)
        zmm21 = _mm256_mask_mul_ps(arg3, zmm5, zmm5)
        zmm21 = _mm256_mask_add_ps(arg3, zmm21, _mm256_mask_permute_pd(arg3, zmm21, 5))
        zmm21 = _mm256_mask_add_ps(arg3, zmm21, _mm256_mask_permute_ps(arg3, zmm21, 0x39))
        arg5 = _mm256_mask_or_ps(arg3, arg5, zmm19)
        zmm19 = _mm256_mask_mov_ps(_mm256_cmp_ps_mask(arg3, zmm0, zmm21, 2), arg4)
        zmm22 = _mm256_mask_rsqrt14_ps(arg3, zmm21)
        zmm21 = _mm256_mask3_fnmadd_ps(_mm256_mask_mul_ps(arg3, zmm22, zmm21), arg3, zmm22, zmm2)
        zmm18 = _mm256_mask_or_ps(arg3, zmm18, zmm20)
        zmm5 = _mm256_mask_and_ps(arg3, 
            _mm256_mask_mul_ps(arg3, zmm5, 
                _mm256_mask_mul_ps(arg3, _mm256_mask_mul_ps(arg3, zmm22, zmm21), zmm3)), 
            zmm19)
        zmm19 = _mm256_mask_andnot_ps(arg3, zmm19, zmm4)
        zmm5 = _mm256_mask_or_ps(arg3, zmm5, zmm19)
        arg1[rax * 3] = _mm_mask_store_ps(arg3, zmm16[0].o)
        arg1[rax * 3 + 3] = __vextractf32x4_memf32_maskmskw_ymmf32_imm8_avx512(arg3, zmm16, 1)
        arg1[sx.q((rax + 2).d) * 3] = _mm_mask_store_ps(arg3, arg5[0].o)
        arg1[sx.q((rax + 2).d) * 3 + 3] =
            __vextractf32x4_memf32_maskmskw_ymmf32_imm8_avx512(arg3, arg5, 1)
        arg1[sx.q((rax + 4).d) * 3] = _mm_mask_store_ps(arg3, zmm18[0].o)
        arg1[sx.q((rax + 4).d) * 3 + 3] =
            __vextractf32x4_memf32_maskmskw_ymmf32_imm8_avx512(arg3, zmm18, 1)
        arg1[sx.q((rax + 6).d) * 3] = zmm5[0].o
        arg1[sx.q((rax + 6).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(zmm5[0].o, 1)
        i_2 = zx.q(rax.d + 8)
    while (i_2.d s< i)

if (i s< arg2)
    int64_t i_3 = sx.q(i)
    int128_t* rcx = &arg1[i_3 * 3]
    i_2 = sx.q(arg2) - i_3
    zmm16[0].o = _mm_mask_load_ss(arg3, 9.99999994e-09f)
    arg5[0].o = _mm_mask_xor_ps(arg3, arg5[0].o, arg5[0].o)
    zmm18[0].o = _mm_mask_load_ss(arg3, -nanf)
    zmm19[0].o = _mm_mask_load_ps(arg3, data_142d3f660)
    uint64_t i_1
    
    do
        zmm5[0].o = *rcx
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        arg4[0].o = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
        arg4[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        zmm0[0].o = zmm0[0].o f+ arg4[0]
        int64_t k1_5 = _mm_cmp_round_ss_mask(arg3, zmm16[0].o, zmm0[0].o, 6)
        arg4[0].o = _mm_mask_mov_ps(arg3, zmm18[0].o)
        arg4[0].o = _mm_mask_move_ss(k1_5, zmm0[0].o, arg5[0].o)
        zmm2[0].o = zmm0[0].o f* 0.5f
        zmm0[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
        zmm4[0].o = zmm0[0].o f* zmm0[0]
        zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, zmm2[0], 0.5f)
        zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, zmm0[0], zmm0[0])
        zmm0[0].o = zmm4[0].o f* zmm4[0]
        zmm0[0].o = _mm_fnmadd_ss(zmm0[0].o, zmm2[0], 0.5f)
        zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm4[0], zmm4[0])
        zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
        arg4[0].o = _mm_broadcastss_ps(arg4[0].o)
        zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
        arg4[0].o = _mm_mask_andnot_ps(arg3, arg4[0].o, zmm19[0].o)
        zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg4[0].o)
        *rcx = zmm0[0].o
        rcx = &rcx[3]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

_mm256_zeroupper()
