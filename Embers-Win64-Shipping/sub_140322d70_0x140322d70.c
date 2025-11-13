// 函数: sub_140322d70
// 地址: 0x140322d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = arg12[0].o
int128_t var_28 = arg11[0].o
int128_t var_38 = arg10[0].o
int128_t var_48 = arg9[0].o
int128_t var_58 = arg8[0].o
int128_t var_68 = arg7[0].o
int128_t var_78 = arg6[0].o
int128_t var_88 = arg5[0].o
int128_t var_98 = arg4[0].o
int128_t var_a8 = arg3[0].o
int32_t i = arg2 & 0xfffffff8
uint64_t i_2
float zmm0[0x8]
int32_t zmm3[0x8]
double zmm4[0x4]
float zmm5[0x8]

if (i s> 0)
    i_2 = 0
    zmm0 = data_142fc9340
    float zmm1[0x8] = data_142fc9480
    float zmm2[0x8] = data_142fc94a0
    zmm3 = _mm256_broadcast_ps(data_142d3f660)
    
    do
        int64_t rax = sx.q(i_2.d)
        zmm4[0].o = arg1[rax * 3]
        arg3[0].o = arg1[sx.q((rax + 2).d) * 3]
        arg4[0].o = arg1[sx.q((rax + 4).d) * 3]
        zmm5 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, arg1[rax * 3 + 3], 1)
        arg3 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg3, arg1[sx.q((rax + 2).d) * 3 + 3], 1)
        zmm4[0].o = arg1[sx.q((rax + 6).d) * 3]
        arg4 = __vinsertf128_ymmqq_ymmqq_memdq_immb(arg4, arg1[sx.q((rax + 4).d) * 3 + 3], 1)
        zmm4 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, arg1[sx.q((rax + 6).d) * 3 + 3], 1)
        arg5 = _mm256_mul_ps(zmm5, zmm5)
        arg5 = _mm256_add_ps(arg5, _mm256_permute_pd(arg5, 5))
        arg6 = _mm256_permute_ps(arg5, 0x39)
        arg7 = _mm256_mul_ps(arg3, arg3)
        arg5 = _mm256_add_ps(arg5, arg6)
        arg6 = _mm256_permute_pd(arg7, 5)
        arg8 = _mm256_rsqrt_ps(arg5)
        arg6 = _mm256_add_ps(arg7, arg6)
        arg6 = _mm256_add_ps(arg6, _mm256_permute_ps(arg6, 0x39))
        arg7 = _mm256_mul_ps(arg8, arg5)
        arg9 = _mm256_rsqrt_ps(arg6)
        arg7 = _mm256_mul_ps(arg8, arg7)
        arg10 = _mm256_mul_ps(arg9, arg6)
        arg11 = _mm256_mul_ps(arg4, arg4)
        arg12 = _mm256_permute_pd(arg11, 5)
        arg10 = _mm256_mul_ps(arg9, arg10)
        arg11 = _mm256_add_ps(arg11, arg12)
        arg11 = _mm256_add_ps(arg11, _mm256_permute_ps(arg11, 0x39))
        arg7 = _mm256_sub_ps(zmm1, arg7)
        arg12 = _mm256_rsqrt_ps(arg11)
        arg7 = _mm256_mul_ps(arg8, arg7)
        arg8 = _mm256_sub_ps(zmm1, arg10)
        arg10 = _mm256_mul_ps(arg12, _mm256_mul_ps(arg12, arg11))
        arg8 = _mm256_mul_ps(arg9, arg8)
        arg9 = _mm256_mul_ps(arg12, _mm256_sub_ps(zmm1, arg10))
        arg10 = _mm256_mul_ps(zmm4, zmm4)
        arg7 = _mm256_mul_ps(arg7, zmm2)
        arg10 = _mm256_add_ps(arg10, _mm256_permute_pd(arg10, 5))
        arg12 = _mm256_permute_ps(arg10, 0x39)
        zmm5 = _mm256_mul_ps(zmm5, arg7)
        arg7 = _mm256_add_ps(arg10, arg12)
        arg10 = _mm256_cmp_ps(zmm0, arg5, 6)
        arg3 = _mm256_mul_ps(arg3, _mm256_mul_ps(arg8, zmm2))
        arg5 = _mm256_cmp_ps(zmm0, arg5, 2)
        arg8 = _mm256_and_ps(arg10, zmm3)
        arg4 = _mm256_mul_ps(arg4, _mm256_mul_ps(arg9, zmm2))
        arg9 = _mm256_cmp_ps(zmm0, arg6, 6)
        arg6 = _mm256_cmp_ps(zmm0, arg6, 2)
        arg9 = _mm256_and_ps(arg9, zmm3)
        zmm5 = _mm256_and_ps(zmm5, arg5)
        arg5 = _mm256_cmp_ps(zmm0, arg11, 6)
        arg10 = _mm256_cmp_ps(zmm0, arg11, 2)
        arg5 = _mm256_and_ps(arg5, zmm3)
        zmm5 = _mm256_or_ps(zmm5, arg8)
        arg8 = _mm256_rsqrt_ps(arg7)
        arg3 = _mm256_and_ps(arg3, arg6)
        arg6 = _mm256_sub_ps(zmm1, _mm256_mul_ps(arg8, _mm256_mul_ps(arg8, arg7)))
        arg4 = _mm256_and_ps(arg4, arg10)
        arg6 = _mm256_mul_ps(arg8, arg6)
        arg8 = _mm256_cmp_ps(zmm0, arg7, 6)
        arg7 = _mm256_cmp_ps(zmm0, arg7, 2)
        arg3 = _mm256_or_ps(arg3, arg9)
        arg6 = _mm256_mul_ps(arg6, zmm2)
        zmm4 = _mm256_and_ps(_mm256_mul_ps(zmm4, arg6), arg7)
        arg4 = _mm256_or_ps(arg4, arg5)
        arg5 = _mm256_and_ps(arg8, zmm3)
        arg1[rax * 3] = zmm5[0].o
        arg1[rax * 3 + 3] = __vextractf128_memdq_ymmdq_immb(zmm5[0].o, 1)
        zmm4 = _mm256_or_ps(zmm4, arg5)
        arg1[sx.q((rax + 2).d) * 3] = arg3[0].o
        arg1[sx.q((rax + 2).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(arg3[0].o, 1)
        arg1[sx.q((rax + 4).d) * 3] = arg4[0].o
        arg1[sx.q((rax + 4).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(arg4[0].o, 1)
        arg1[sx.q((rax + 6).d) * 3] = zmm4[0].o
        arg1[sx.q((rax + 6).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(zmm4[0].o, 1)
        i_2 = zx.q(rax.d + 8)
    while (i_2.d s< i)

if (i s< arg2)
    int64_t i_3 = sx.q(i)
    int128_t* rcx = &arg1[i_3 * 3]
    i_2 = sx.q(arg2) - i_3
    arg5[0].o = 0x322bcc77
    zmm3[0].o = data_142d3f660
    uint64_t i_1
    
    do
        zmm4[0].o = *rcx
        zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        arg3[0].o = _mm_permute_pd(zmm5[0].o, 1)
        zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg3[0].o)
        arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm5[0].o)
        zmm5[0].o = zmm5[0].o f+ arg3[0].d
        arg3[0].o = _mm_cmp_ss(0x322bcc77, zmm5[0], 6)
        arg3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg3[0].o, 0xffffffff)
        arg4[0].o = zmm5[0].o f* 0.5f
        zmm5[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm5[0].o, zmm5[0])
        zmm0[0].o = zmm5[0].o f* zmm5[0]
        zmm0[0].o = zmm0[0].o f* arg4[0].d
        zmm0[0].o = 0x3f000000 f- zmm0[0]
        zmm0[0].o = zmm5[0].o f* zmm0[0]
        zmm0[0].o = zmm5[0].o f+ zmm0[0]
        zmm5[0].o = zmm0[0].o f* zmm0[0]
        zmm5[0].o = arg4[0].o f* zmm5[0]
        zmm5[0].o = 0x3f000000 f- zmm5[0]
        zmm5[0].o = zmm0[0].o f* zmm5[0]
        zmm0[0].o = zmm0[0].o f+ zmm5[0]
        zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
        zmm4[0].o = _mm_permute_ps(arg3[0].o, 0)
        zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        zmm4[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
        zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
        *rcx = zmm0[0].o
        rcx = &rcx[3]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

arg3[0].o = var_a8
arg4[0].o = var_98
arg5[0].o = var_88
arg6[0].o = var_78
arg7[0].o = var_68
arg8[0].o = var_58
arg9[0].o = var_48
arg10[0].o = var_38
arg11[0].o = var_28
arg12[0].o = var_18
_mm256_zeroupper()
