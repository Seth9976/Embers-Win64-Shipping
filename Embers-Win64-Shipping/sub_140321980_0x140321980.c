// 函数: sub_140321980
// 地址: 0x140321980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = arg13[0].o
int128_t var_28 = arg12[0].o
int128_t var_38 = arg11[0].o
int128_t var_48 = arg10[0].o
int128_t var_58 = arg9[0].o
int128_t var_68 = arg8[0].o
int128_t var_78 = arg7[0].o
int128_t var_88 = arg6[0].o
int128_t var_98 = arg5[0].o
int128_t var_a8 = arg4[0].o
float zmm0[0x8] = *arg3
uint64_t result = zx.q(_mm256_movemask_ps(zmm0))
int32_t i = arg2 & 0xfffffff8
double zmm3[0x4]
uint32_t zmm4[0x8]
double zmm5[0x4]

if (result.d != 0xff)
    if (i s> 0)
        result = 0
        zmm0 = _mm256_broadcast_ss(9.99999994e-09f)
        float temp0_95[0x8] = _mm256_broadcast_ss(3f)
        float temp0_96[0x8] = _mm256_broadcast_ss(0.5f)
        zmm3 = _mm256_broadcast_ps(data_142d3f660)
        
        do
            int64_t rax_4 = sx.q(result.d)
            zmm4[0].o = arg1[rax_4 * 3]
            zmm5[0].o = arg1[sx.q((rax_4 + 2).d) * 3]
            arg6[0].o = arg1[sx.q((rax_4 + 4).d) * 3]
            double temp0_98[0x4] =
                __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, arg1[rax_4 * 3 + 3], 1)
            double temp0_99[0x4] =
                __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm5, arg1[sx.q((rax_4 + 2).d) * 3 + 3], 1)
            zmm4[0].o = arg1[sx.q((rax_4 + 6).d) * 3]
            double temp0_100[0x4] =
                __vinsertf128_ymmqq_ymmqq_memdq_immb(arg6, arg1[sx.q((rax_4 + 4).d) * 3 + 3], 1)
            zmm4 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, arg1[sx.q((rax_4 + 6).d) * 3 + 3], 1)
            arg6 = _mm256_mul_ps(temp0_98, temp0_98)
            arg6 = _mm256_add_ps(arg6, _mm256_permute_pd(arg6, 5))
            float temp0_106[0x8] = _mm256_add_ps(arg6, _mm256_permute_ps(arg6, 0x39))
            float temp0_107[0x8] = _mm256_cmp_ps(zmm0, temp0_106, 6)
            arg6 = _mm256_cmp_ps(zmm0, temp0_106, 2)
            float temp0_109[0x8] = _mm256_rsqrt_ps(temp0_106)
            float temp0_110[0x8] = _mm256_mul_ps(temp0_99, temp0_99)
            float temp0_112[0x8] = _mm256_add_ps(temp0_110, _mm256_permute_pd(temp0_110, 5))
            arg7 = _mm256_and_ps(temp0_107, zmm3)
            float temp0_115[0x8] = _mm256_add_ps(temp0_112, _mm256_permute_ps(temp0_112, 0x39))
            arg11 = _mm256_cmp_ps(zmm0, temp0_115, 6)
            float temp0_117[0x8] = _mm256_mul_ps(temp0_109, temp0_106)
            float temp0_118[0x8] = _mm256_rsqrt_ps(temp0_115)
            float temp0_119[0x8] = _mm256_fnmadd_ps(temp0_117, temp0_109, temp0_95)
            float temp0_120[0x8] = _mm256_cmp_ps(zmm0, temp0_115, 2)
            float temp0_122[0x8] =
                _mm256_fnmadd_ps(_mm256_mul_ps(temp0_118, temp0_115), temp0_118, temp0_95)
            float temp0_123[0x8] = _mm256_mul_ps(temp0_109, temp0_119)
            float temp0_124[0x8] = _mm256_mul_ps(temp0_118, temp0_122)
            float temp0_125[0x8] = _mm256_mul_ps(temp0_100, temp0_100)
            float temp0_126[0x8] = _mm256_permute_pd(temp0_125, 5)
            float temp0_127[0x8] = _mm256_mul_ps(temp0_123, temp0_96)
            float temp0_128[0x8] = _mm256_add_ps(temp0_125, temp0_126)
            arg12 = _mm256_add_ps(temp0_128, _mm256_permute_ps(temp0_128, 0x39))
            float temp0_131[0x8] = _mm256_mul_ps(temp0_124, temp0_96)
            arg13 = _mm256_rsqrt_ps(arg12)
            arg5 = _mm256_mul_ps(temp0_98, temp0_127)
            arg9 = _mm256_and_ps(arg11, zmm3)
            arg11 = _mm256_fnmadd_ps(_mm256_mul_ps(arg13, arg12), arg13, temp0_95)
            arg4 = _mm256_mul_ps(temp0_99, temp0_131)
            float temp0_139[0x8] = _mm256_mul_ps(_mm256_mul_ps(arg13, arg11), temp0_96)
            arg11 = _mm256_mul_ps(zmm4, zmm4)
            zmm5 = _mm256_mul_ps(temp0_100, temp0_139)
            float temp0_143[0x8] = _mm256_add_ps(arg11, _mm256_permute_pd(arg11, 5))
            arg11 = _mm256_permute_ps(temp0_143, 0x39)
            arg5 = _mm256_and_ps(arg5, arg6)
            arg6 = _mm256_add_ps(temp0_143, arg11)
            float temp0_147[0x8] = _mm256_cmp_ps(zmm0, arg12, 6)
            arg11 = _mm256_cmp_ps(zmm0, arg12, 2)
            arg5 = _mm256_or_ps(arg5, arg7)
            float temp0_150[0x8] = _mm256_rsqrt_ps(arg6)
            arg4 = _mm256_and_ps(arg4, temp0_120)
            arg8 = _mm256_and_ps(temp0_147, zmm3)
            float temp0_154[0x8] =
                _mm256_fnmadd_ps(_mm256_mul_ps(temp0_150, arg6), temp0_150, temp0_95)
            zmm5 = _mm256_and_ps(zmm5, arg11)
            float temp0_156[0x8] = _mm256_mul_ps(temp0_150, temp0_154)
            arg10 = _mm256_cmp_ps(zmm0, arg6, 6)
            arg6 = _mm256_cmp_ps(zmm0, arg6, 2)
            arg4 = _mm256_or_ps(arg4, arg9)
            arg7 = _mm256_mul_ps(temp0_156, temp0_96)
            zmm4 = _mm256_and_ps(_mm256_mul_ps(zmm4, arg7), arg6)
            zmm5 = _mm256_or_ps(zmm5, arg8)
            arg6 = _mm256_and_ps(arg10, zmm3)
            arg1[rax_4 * 3] = arg5[0].o
            zmm4 = _mm256_or_ps(zmm4, arg6)
            arg1[rax_4 * 3 + 3] = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
            arg1[sx.q((rax_4 + 2).d) * 3] = arg4[0].o
            arg1[sx.q((rax_4 + 2).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(arg4[0].o, 1)
            arg1[sx.q((rax_4 + 4).d) * 3] = zmm5[0].o
            arg1[sx.q((rax_4 + 4).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(zmm5[0].o, 1)
            arg1[sx.q((rax_4 + 6).d) * 3] = zmm4[0].o
            arg1[sx.q((rax_4 + 6).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(zmm4[0].o, 1)
            result = zx.q(rax_4.d + 8)
        while (result.d s< i)
    
    if (i s< arg2)
        int64_t i_4 = sx.q(i)
        void* rcx_1 = &arg1[i_4 * 3]
        result = sx.q(arg2) - i_4
        arg6[0].o = 0x322bcc77
        zmm3[0].o = data_142d3f660
        uint64_t i_1
        
        do
            zmm4[0].o = *rcx_1
            zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            arg4[0].o = _mm_permute_pd(zmm5[0].o, 1)
            zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg4[0].o)
            arg4[0].o = __vmovshdup_xmmdq_xmmdq(zmm5[0].o)
            zmm5[0].o = zmm5[0].o f+ arg4[0].d
            arg4[0].o = _mm_cmp_ss(0x322bcc77, zmm5[0].d, 6)
            arg4[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg4[0].o, 0xffffffff)
            arg5[0].o = zmm5[0].o f* 0.5f
            zmm5[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm5[0].o, zmm5[0].d)
            zmm0[0].o = zmm5[0].o f* zmm5[0].d
            zmm0[0].o = _mm_fnmadd_ss(zmm0[0].o, arg5[0].d, 0.5f)
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm5[0].d, zmm5[0].d)
            zmm5[0].o = zmm0[0].o f* zmm0[0]
            zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, arg5[0].d, 0.5f)
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm0[0], zmm0[0])
            zmm0[0].o = _mm_broadcastss_ps(zmm5[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm4[0].o = _mm_broadcastss_ps(arg4[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            zmm4[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
            zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            *rcx_1 = zmm0[0].o
            rcx_1 += 0x30
            i_1 = result
            result -= 1
        while (i_1 != 1)
else
    if (i s> 0)
        result = 0
        zmm0 = _mm256_broadcast_ss(9.99999994e-09f)
        float temp0_2[0x8] = _mm256_broadcast_ss(3f)
        float temp0_3[0x8] = _mm256_broadcast_ss(0.5f)
        zmm3 = _mm256_broadcast_ps(data_142d3f660)
        
        do
            int64_t rax = sx.q(result.d)
            zmm4[0].o = arg1[rax * 3]
            zmm5[0].o = arg1[sx.q((rax + 2).d) * 3]
            arg6[0].o = arg1[sx.q((rax + 4).d) * 3]
            double temp0_5[0x4] = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, arg1[rax * 3 + 3], 1)
            double temp0_6[0x4] =
                __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm5, arg1[sx.q((rax + 2).d) * 3 + 3], 1)
            zmm4[0].o = arg1[sx.q((rax + 6).d) * 3]
            double temp0_7[0x4] =
                __vinsertf128_ymmqq_ymmqq_memdq_immb(arg6, arg1[sx.q((rax + 4).d) * 3 + 3], 1)
            zmm4 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, arg1[sx.q((rax + 6).d) * 3 + 3], 1)
            arg6 = _mm256_mul_ps(temp0_5, temp0_5)
            arg6 = _mm256_add_ps(arg6, _mm256_permute_pd(arg6, 5))
            float temp0_13[0x8] = _mm256_add_ps(arg6, _mm256_permute_ps(arg6, 0x39))
            float temp0_14[0x8] = _mm256_cmp_ps(zmm0, temp0_13, 6)
            arg6 = _mm256_cmp_ps(zmm0, temp0_13, 2)
            float temp0_16[0x8] = _mm256_rsqrt_ps(temp0_13)
            float temp0_17[0x8] = _mm256_mul_ps(temp0_6, temp0_6)
            float temp0_19[0x8] = _mm256_add_ps(temp0_17, _mm256_permute_pd(temp0_17, 5))
            arg7 = _mm256_and_ps(temp0_14, zmm3)
            float temp0_22[0x8] = _mm256_add_ps(temp0_19, _mm256_permute_ps(temp0_19, 0x39))
            arg11 = _mm256_cmp_ps(zmm0, temp0_22, 6)
            float temp0_24[0x8] = _mm256_mul_ps(temp0_16, temp0_13)
            float temp0_25[0x8] = _mm256_rsqrt_ps(temp0_22)
            float temp0_26[0x8] = _mm256_fnmadd_ps(temp0_24, temp0_16, temp0_2)
            float temp0_27[0x8] = _mm256_cmp_ps(zmm0, temp0_22, 2)
            float temp0_29[0x8] =
                _mm256_fnmadd_ps(_mm256_mul_ps(temp0_25, temp0_22), temp0_25, temp0_2)
            float temp0_30[0x8] = _mm256_mul_ps(temp0_16, temp0_26)
            float temp0_31[0x8] = _mm256_mul_ps(temp0_25, temp0_29)
            float temp0_32[0x8] = _mm256_mul_ps(temp0_7, temp0_7)
            arg13 = _mm256_permute_pd(temp0_32, 5)
            float temp0_34[0x8] = _mm256_mul_ps(temp0_30, temp0_3)
            float temp0_35[0x8] = _mm256_add_ps(temp0_32, arg13)
            arg12 = _mm256_add_ps(temp0_35, _mm256_permute_ps(temp0_35, 0x39))
            float temp0_38[0x8] = _mm256_mul_ps(temp0_31, temp0_3)
            arg13 = _mm256_rsqrt_ps(arg12)
            arg5 = _mm256_mul_ps(temp0_5, temp0_34)
            arg9 = _mm256_and_ps(arg11, zmm3)
            arg11 = _mm256_fnmadd_ps(_mm256_mul_ps(arg13, arg12), arg13, temp0_2)
            arg4 = _mm256_mul_ps(temp0_6, temp0_38)
            float temp0_46[0x8] = _mm256_mul_ps(_mm256_mul_ps(arg13, arg11), temp0_3)
            arg11 = _mm256_mul_ps(zmm4, zmm4)
            zmm5 = _mm256_mul_ps(temp0_7, temp0_46)
            float temp0_50[0x8] = _mm256_add_ps(arg11, _mm256_permute_pd(arg11, 5))
            arg11 = _mm256_permute_ps(temp0_50, 0x39)
            arg5 = _mm256_and_ps(arg5, arg6)
            arg6 = _mm256_add_ps(temp0_50, arg11)
            float temp0_54[0x8] = _mm256_cmp_ps(zmm0, arg12, 6)
            arg11 = _mm256_cmp_ps(zmm0, arg12, 2)
            arg5 = _mm256_or_ps(arg5, arg7)
            float temp0_57[0x8] = _mm256_rsqrt_ps(arg6)
            arg4 = _mm256_and_ps(arg4, temp0_27)
            arg8 = _mm256_and_ps(temp0_54, zmm3)
            float temp0_61[0x8] = _mm256_fnmadd_ps(_mm256_mul_ps(temp0_57, arg6), temp0_57, temp0_2)
            zmm5 = _mm256_and_ps(zmm5, arg11)
            float temp0_63[0x8] = _mm256_mul_ps(temp0_57, temp0_61)
            arg10 = _mm256_cmp_ps(zmm0, arg6, 6)
            arg6 = _mm256_cmp_ps(zmm0, arg6, 2)
            arg4 = _mm256_or_ps(arg4, arg9)
            arg7 = _mm256_mul_ps(temp0_63, temp0_3)
            zmm4 = _mm256_and_ps(_mm256_mul_ps(zmm4, arg7), arg6)
            zmm5 = _mm256_or_ps(zmm5, arg8)
            arg6 = _mm256_and_ps(arg10, zmm3)
            arg1[rax * 3] = arg5[0].o
            zmm4 = _mm256_or_ps(zmm4, arg6)
            arg1[rax * 3 + 3] = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
            arg1[sx.q((rax + 2).d) * 3] = arg4[0].o
            arg1[sx.q((rax + 2).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(arg4[0].o, 1)
            arg1[sx.q((rax + 4).d) * 3] = zmm5[0].o
            arg1[sx.q((rax + 4).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(zmm5[0].o, 1)
            arg1[sx.q((rax + 6).d) * 3] = zmm4[0].o
            arg1[sx.q((rax + 6).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(zmm4[0].o, 1)
            result = zx.q(rax.d + 8)
        while (result.d s< i)
    
    if (i s< arg2)
        int64_t i_3 = sx.q(i)
        int128_t* rcx = &arg1[i_3 * 3]
        result = sx.q(arg2) - i_3
        arg6[0].o = 0x322bcc77
        zmm3[0].o = data_142d3f660
        uint64_t i_2
        
        do
            zmm4[0].o = *rcx
            zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            arg4[0].o = _mm_permute_pd(zmm5[0].o, 1)
            zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg4[0].o)
            arg4[0].o = __vmovshdup_xmmdq_xmmdq(zmm5[0].o)
            zmm5[0].o = zmm5[0].o f+ arg4[0].d
            arg4[0].o = _mm_cmp_ss(0x322bcc77, zmm5[0].d, 6)
            arg4[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg4[0].o, 0xffffffff)
            arg5[0].o = zmm5[0].o f* 0.5f
            zmm5[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm5[0].o, zmm5[0].d)
            zmm0[0].o = zmm5[0].o f* zmm5[0].d
            zmm0[0].o = _mm_fnmadd_ss(zmm0[0].o, arg5[0].d, 0.5f)
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm5[0].d, zmm5[0].d)
            zmm5[0].o = zmm0[0].o f* zmm0[0]
            zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, arg5[0].d, 0.5f)
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm0[0], zmm0[0])
            zmm0[0].o = _mm_broadcastss_ps(zmm5[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm4[0].o = _mm_broadcastss_ps(arg4[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            zmm4[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
            zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            *rcx = zmm0[0].o
            rcx = &rcx[3]
            i_2 = result
            result -= 1
        while (i_2 != 1)
arg4[0].o = var_a8
arg5[0].o = var_98
arg6[0].o = var_88
arg7[0].o = var_78
arg8[0].o = var_68
arg9[0].o = var_58
arg10[0].o = var_48
arg11[0].o = var_38
arg12[0].o = var_28
arg13[0].o = var_18
_mm256_zeroupper()
return result
