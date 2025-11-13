// 函数: sub_1403225c0
// 地址: 0x1403225c0
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
float zmm1[0x8]
float zmm2[0x8]
double zmm3[0x4]
float zmm4[0x8]
double zmm5[0x4]

if (result.d != 0xff)
    if (i s> 0)
        result = 0
        zmm0 = data_142fc9340
        zmm1 = data_142fc9480
        zmm2 = data_142fc94a0
        zmm3 = _mm256_broadcast_ps(data_142d3f660)
        
        do
            int64_t rax_4 = sx.q(result.d)
            zmm4[0].o = arg1[rax_4 * 3]
            arg4[0].o = arg1[sx.q((rax_4 + 2).d) * 3]
            arg5[0].o = arg1[sx.q((rax_4 + 4).d) * 3]
            double temp0_92[0x4] =
                __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, arg1[rax_4 * 3 + 3], 1)
            double temp0_93[0x4] =
                __vinsertf128_ymmqq_ymmqq_memdq_immb(arg4, arg1[sx.q((rax_4 + 2).d) * 3 + 3], 1)
            zmm4[0].o = arg1[sx.q((rax_4 + 6).d) * 3]
            double temp0_94[0x4] =
                __vinsertf128_ymmqq_ymmqq_memdq_immb(arg5, arg1[sx.q((rax_4 + 4).d) * 3 + 3], 1)
            zmm4 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, arg1[sx.q((rax_4 + 6).d) * 3 + 3], 1)
            float temp0_96[0x8] = _mm256_mul_ps(temp0_92, temp0_92)
            float temp0_98[0x8] = _mm256_add_ps(temp0_96, _mm256_permute_pd(temp0_96, 5))
            float temp0_99[0x8] = _mm256_permute_ps(temp0_98, 0x39)
            float temp0_100[0x8] = _mm256_mul_ps(temp0_93, temp0_93)
            float temp0_101[0x8] = _mm256_add_ps(temp0_98, temp0_99)
            arg7 = _mm256_permute_pd(temp0_100, 5)
            arg9 = _mm256_rsqrt_ps(temp0_101)
            float temp0_104[0x8] = _mm256_add_ps(temp0_100, arg7)
            float temp0_106[0x8] = _mm256_add_ps(temp0_104, _mm256_permute_ps(temp0_104, 0x39))
            float temp0_107[0x8] = _mm256_mul_ps(arg9, temp0_101)
            float temp0_108[0x8] = _mm256_rsqrt_ps(temp0_106)
            float temp0_109[0x8] = _mm256_mul_ps(arg9, temp0_107)
            float temp0_110[0x8] = _mm256_mul_ps(temp0_108, temp0_106)
            float temp0_111[0x8] = _mm256_mul_ps(temp0_94, temp0_94)
            double temp0_112[0x4] = _mm256_permute_pd(temp0_111, 5)
            float temp0_113[0x8] = _mm256_mul_ps(temp0_108, temp0_110)
            float temp0_114[0x8] = _mm256_add_ps(temp0_111, temp0_112)
            arg12 = _mm256_add_ps(temp0_114, _mm256_permute_ps(temp0_114, 0x39))
            float temp0_117[0x8] = _mm256_sub_ps(zmm1, temp0_109)
            double temp0_118[0x4] = _mm256_rsqrt_ps(arg12)
            float temp0_119[0x8] = _mm256_mul_ps(arg9, temp0_117)
            arg9 = _mm256_sub_ps(zmm1, temp0_113)
            float temp0_122[0x8] = _mm256_mul_ps(temp0_118, _mm256_mul_ps(temp0_118, arg12))
            arg9 = _mm256_mul_ps(temp0_108, arg9)
            float temp0_125[0x8] = _mm256_mul_ps(temp0_118, _mm256_sub_ps(zmm1, temp0_122))
            float temp0_126[0x8] = _mm256_mul_ps(zmm4, zmm4)
            float temp0_127[0x8] = _mm256_mul_ps(temp0_119, zmm2)
            float temp0_129[0x8] = _mm256_add_ps(temp0_126, _mm256_permute_pd(temp0_126, 5))
            arg13 = _mm256_permute_ps(temp0_129, 0x39)
            zmm5 = _mm256_mul_ps(temp0_92, temp0_127)
            float temp0_132[0x8] = _mm256_add_ps(temp0_129, arg13)
            float temp0_133[0x8] = _mm256_cmp_ps(zmm0, temp0_101, 6)
            arg4 = _mm256_mul_ps(temp0_93, _mm256_mul_ps(arg9, zmm2))
            float temp0_136[0x8] = _mm256_cmp_ps(zmm0, temp0_101, 2)
            int32_t temp0_137[0x8] = _mm256_and_ps(temp0_133, zmm3)
            arg5 = _mm256_mul_ps(temp0_94, _mm256_mul_ps(temp0_125, zmm2))
            float temp0_140[0x8] = _mm256_cmp_ps(zmm0, temp0_106, 6)
            float temp0_141[0x8] = _mm256_cmp_ps(zmm0, temp0_106, 2)
            arg10 = _mm256_and_ps(temp0_140, zmm3)
            zmm5 = _mm256_and_ps(zmm5, temp0_136)
            float temp0_144[0x8] = _mm256_cmp_ps(zmm0, arg12, 6)
            arg11 = _mm256_cmp_ps(zmm0, arg12, 2)
            arg6 = _mm256_and_ps(temp0_144, zmm3)
            zmm5 = _mm256_or_ps(zmm5, temp0_137)
            arg9 = _mm256_rsqrt_ps(temp0_132)
            arg4 = _mm256_and_ps(arg4, temp0_141)
            float temp0_152[0x8] =
                _mm256_sub_ps(zmm1, _mm256_mul_ps(arg9, _mm256_mul_ps(arg9, temp0_132)))
            arg5 = _mm256_and_ps(arg5, arg11)
            float temp0_154[0x8] = _mm256_mul_ps(arg9, temp0_152)
            arg9 = _mm256_cmp_ps(zmm0, temp0_132, 6)
            arg8 = _mm256_cmp_ps(zmm0, temp0_132, 2)
            arg4 = _mm256_or_ps(arg4, arg10)
            arg7 = _mm256_mul_ps(temp0_154, zmm2)
            zmm4 = _mm256_and_ps(_mm256_mul_ps(zmm4, arg7), arg8)
            arg5 = _mm256_or_ps(arg5, arg6)
            arg6 = _mm256_and_ps(arg9, zmm3)
            arg1[rax_4 * 3] = zmm5[0].o
            arg1[rax_4 * 3 + 3] = __vextractf128_memdq_ymmdq_immb(zmm5[0].o, 1)
            zmm4 = _mm256_or_ps(zmm4, arg6)
            arg1[sx.q((rax_4 + 2).d) * 3] = arg4[0].o
            arg1[sx.q((rax_4 + 2).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(arg4[0].o, 1)
            arg1[sx.q((rax_4 + 4).d) * 3] = arg5[0].o
            arg1[sx.q((rax_4 + 4).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
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
            zmm0[0].o = zmm0[0].o f* arg5[0].d
            zmm0[0].o = 0x3f000000 f- zmm0[0]
            zmm0[0].o = zmm5[0].o f* zmm0[0]
            zmm0[0].o = zmm5[0].o f+ zmm0[0]
            zmm5[0].o = zmm0[0].o f* zmm0[0]
            zmm5[0].o = arg5[0].o f* zmm5[0].d
            zmm5[0].o = 0x3f000000 f- zmm5[0].d
            zmm5[0].o = zmm0[0].o f* zmm5[0].d
            zmm0[0].o = zmm0[0].o f+ zmm5[0].d
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm4[0].o = _mm_permute_ps(arg4[0].o, 0)
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
        zmm0 = data_142fc9340
        zmm1 = data_142fc9480
        zmm2 = data_142fc94a0
        zmm3 = _mm256_broadcast_ps(data_142d3f660)
        
        do
            int64_t rax = sx.q(result.d)
            zmm4[0].o = arg1[rax * 3]
            arg4[0].o = arg1[sx.q((rax + 2).d) * 3]
            arg5[0].o = arg1[sx.q((rax + 4).d) * 3]
            double temp0_2[0x4] = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, arg1[rax * 3 + 3], 1)
            double temp0_3[0x4] =
                __vinsertf128_ymmqq_ymmqq_memdq_immb(arg4, arg1[sx.q((rax + 2).d) * 3 + 3], 1)
            zmm4[0].o = arg1[sx.q((rax + 6).d) * 3]
            double temp0_4[0x4] =
                __vinsertf128_ymmqq_ymmqq_memdq_immb(arg5, arg1[sx.q((rax + 4).d) * 3 + 3], 1)
            zmm4 = __vinsertf128_ymmqq_ymmqq_memdq_immb(zmm4, arg1[sx.q((rax + 6).d) * 3 + 3], 1)
            float temp0_6[0x8] = _mm256_mul_ps(temp0_2, temp0_2)
            float temp0_8[0x8] = _mm256_add_ps(temp0_6, _mm256_permute_pd(temp0_6, 5))
            float temp0_9[0x8] = _mm256_permute_ps(temp0_8, 0x39)
            float temp0_10[0x8] = _mm256_mul_ps(temp0_3, temp0_3)
            float temp0_11[0x8] = _mm256_add_ps(temp0_8, temp0_9)
            arg7 = _mm256_permute_pd(temp0_10, 5)
            arg9 = _mm256_rsqrt_ps(temp0_11)
            float temp0_14[0x8] = _mm256_add_ps(temp0_10, arg7)
            float temp0_16[0x8] = _mm256_add_ps(temp0_14, _mm256_permute_ps(temp0_14, 0x39))
            float temp0_17[0x8] = _mm256_mul_ps(arg9, temp0_11)
            float temp0_18[0x8] = _mm256_rsqrt_ps(temp0_16)
            float temp0_19[0x8] = _mm256_mul_ps(arg9, temp0_17)
            float temp0_20[0x8] = _mm256_mul_ps(temp0_18, temp0_16)
            float temp0_21[0x8] = _mm256_mul_ps(temp0_4, temp0_4)
            double temp0_22[0x4] = _mm256_permute_pd(temp0_21, 5)
            float temp0_23[0x8] = _mm256_mul_ps(temp0_18, temp0_20)
            float temp0_24[0x8] = _mm256_add_ps(temp0_21, temp0_22)
            arg12 = _mm256_add_ps(temp0_24, _mm256_permute_ps(temp0_24, 0x39))
            float temp0_27[0x8] = _mm256_sub_ps(zmm1, temp0_19)
            arg13 = _mm256_rsqrt_ps(arg12)
            float temp0_29[0x8] = _mm256_mul_ps(arg9, temp0_27)
            arg9 = _mm256_sub_ps(zmm1, temp0_23)
            float temp0_32[0x8] = _mm256_mul_ps(arg13, _mm256_mul_ps(arg13, arg12))
            arg9 = _mm256_mul_ps(temp0_18, arg9)
            float temp0_35[0x8] = _mm256_mul_ps(arg13, _mm256_sub_ps(zmm1, temp0_32))
            float temp0_36[0x8] = _mm256_mul_ps(zmm4, zmm4)
            float temp0_37[0x8] = _mm256_mul_ps(temp0_29, zmm2)
            float temp0_39[0x8] = _mm256_add_ps(temp0_36, _mm256_permute_pd(temp0_36, 5))
            arg13 = _mm256_permute_ps(temp0_39, 0x39)
            zmm5 = _mm256_mul_ps(temp0_2, temp0_37)
            float temp0_42[0x8] = _mm256_add_ps(temp0_39, arg13)
            float temp0_43[0x8] = _mm256_cmp_ps(zmm0, temp0_11, 6)
            arg4 = _mm256_mul_ps(temp0_3, _mm256_mul_ps(arg9, zmm2))
            float temp0_46[0x8] = _mm256_cmp_ps(zmm0, temp0_11, 2)
            int32_t temp0_47[0x8] = _mm256_and_ps(temp0_43, zmm3)
            arg5 = _mm256_mul_ps(temp0_4, _mm256_mul_ps(temp0_35, zmm2))
            float temp0_50[0x8] = _mm256_cmp_ps(zmm0, temp0_16, 6)
            float temp0_51[0x8] = _mm256_cmp_ps(zmm0, temp0_16, 2)
            arg10 = _mm256_and_ps(temp0_50, zmm3)
            zmm5 = _mm256_and_ps(zmm5, temp0_46)
            float temp0_54[0x8] = _mm256_cmp_ps(zmm0, arg12, 6)
            arg11 = _mm256_cmp_ps(zmm0, arg12, 2)
            arg6 = _mm256_and_ps(temp0_54, zmm3)
            zmm5 = _mm256_or_ps(zmm5, temp0_47)
            arg9 = _mm256_rsqrt_ps(temp0_42)
            arg4 = _mm256_and_ps(arg4, temp0_51)
            float temp0_62[0x8] =
                _mm256_sub_ps(zmm1, _mm256_mul_ps(arg9, _mm256_mul_ps(arg9, temp0_42)))
            arg5 = _mm256_and_ps(arg5, arg11)
            float temp0_64[0x8] = _mm256_mul_ps(arg9, temp0_62)
            arg9 = _mm256_cmp_ps(zmm0, temp0_42, 6)
            arg8 = _mm256_cmp_ps(zmm0, temp0_42, 2)
            arg4 = _mm256_or_ps(arg4, arg10)
            arg7 = _mm256_mul_ps(temp0_64, zmm2)
            zmm4 = _mm256_and_ps(_mm256_mul_ps(zmm4, arg7), arg8)
            arg5 = _mm256_or_ps(arg5, arg6)
            arg6 = _mm256_and_ps(arg9, zmm3)
            arg1[rax * 3] = zmm5[0].o
            arg1[rax * 3 + 3] = __vextractf128_memdq_ymmdq_immb(zmm5[0].o, 1)
            zmm4 = _mm256_or_ps(zmm4, arg6)
            arg1[sx.q((rax + 2).d) * 3] = arg4[0].o
            arg1[sx.q((rax + 2).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(arg4[0].o, 1)
            arg1[sx.q((rax + 4).d) * 3] = arg5[0].o
            arg1[sx.q((rax + 4).d) * 3 + 3] = __vextractf128_memdq_ymmdq_immb(arg5[0].o, 1)
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
            zmm0[0].o = zmm0[0].o f* arg5[0].d
            zmm0[0].o = 0x3f000000 f- zmm0[0]
            zmm0[0].o = zmm5[0].o f* zmm0[0]
            zmm0[0].o = zmm5[0].o f+ zmm0[0]
            zmm5[0].o = zmm0[0].o f* zmm0[0]
            zmm5[0].o = arg5[0].o f* zmm5[0].d
            zmm5[0].o = 0x3f000000 f- zmm5[0].d
            zmm5[0].o = zmm0[0].o f* zmm5[0].d
            zmm0[0].o = zmm0[0].o f+ zmm5[0].d
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm4[0].o = _mm_permute_ps(arg4[0].o, 0)
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
