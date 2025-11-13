// 函数: sub_14033d460
// 地址: 0x14033d460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg14[0].o
int128_t var_68 = arg13[0].o
int128_t var_78 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t zmm9
int128_t var_b8 = zmm9
int128_t var_c8 = arg8[0].o
int128_t var_d8 = arg7[0].o
int128_t var_e8 = arg6[0].o
uint64_t result = zx.q(arg17)

if (result.d s>= 2)
    uint64_t rdi_1 = zx.q(result.d)
    int64_t rsi_1 = 1
    arg8[0].o = 0x322bcc77
    arg7[0].o = 0xffffffff
    arg10[0].o = data_142d3f660
    int64_t var_148_1 = arg3
    
    do
        uint64_t rax = zx.q(*(arg3 + (rsi_1 << 1)))
        *(arg4 + sx.q(rax.d * arg15 + arg16))
        arg9[0].o = arg1[sx.q(*(arg4 + sx.q(rax.d * arg15 + arg16))) * 3]
        arg11[0].o = arg1[sx.q(*(arg4 + sx.q(rax.d * arg15 + arg16))) * 3 + 1]
        arg13[0].o = arg1[sx.q(*(arg4 + sx.q(rax.d * arg15 + arg16))) * 3 + 2]
        uint64_t rbx_2 = rax * 0x30
        float zmm0[0x8]
        zmm0[0].o = *(arg2 + rbx_2)
        arg12[0].o = *(arg2 + rbx_2 + 0x10)
        arg14[0].o = *(arg2 + rbx_2 + 0x20)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        uint32_t zmm1[0x8] = _mm256_cmp_ps(arg14, arg5, 1)
        arg5 = _mm256_cmp_ps(arg13, arg5, 1)
        zmm1 = _mm256_or_ps(zmm1, arg5)
        arg5[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
        zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
        zmm1[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
        result = zx.q(__vpmovmskb_gpr32d_xmmdq(zmm1[0].o))
        float zmm3[0x8]
        float zmm4[0x4]
        
        if (result.b == 0)
            zmm1[0].o = _mm_permute_ps(arg9[0].o, 0xff)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm3[0].o = _mm_permute_ps(arg9[0].o, 0)
            float temp0_189[0x4] = _mm_permute_ps(zmm0[0].o, 0x1b)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_189)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f7c0)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            zmm3[0].o = _mm_permute_ps(arg9[0].o, 0x55)
            zmm4 = _mm_permute_pd(zmm0[0].o, 1)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f7d0)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm3[0].o = _mm_permute_ps(arg9[0].o, 0xaa)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xb1)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d3f7b0)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg12[0].o)
            zmm3[0].o = _mm_permute_ps(arg9[0].o, 0xc9)
            float temp0_205[0x4] = _mm_permute_ps(arg5[0].o, 0xd2)
            float temp0_206[0x4] = _mm_permute_ps(arg9[0].o, 0xd2)
            arg6[0].o = _mm_permute_ps(arg5[0].o, 0xc9)
            float temp0_208[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_205)
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_206, arg6[0].o)
            float temp0_210[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_208, arg6[0].o)
            float temp0_211[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_210, temp0_210)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_211)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            arg5[0].o = _mm_permute_ps(temp0_211, 0xd2)
            float temp0_215[0x4] = _mm_permute_ps(temp0_211, 0xc9)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_206, temp0_215)
            arg5[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm1[0].o)
            arg13[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
        else
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm3[0].o = _mm_permute_ps(arg5[0].o, 1)
            arg5[0].o = _mm_permute_ps(arg5[0].o, 0x1a)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm4 = data_142d3f670
            arg5[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4, arg5[0].o)
            float temp0_15[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg14[0].o, arg5[0].o)
            arg5[0].o = _mm_permute_ps(zmm0[0].o, 4)
            zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0x29)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x12)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            arg8[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg14[0].o, zmm1[0].o)
            zmm1[0].o = _mm_permute_ps(arg14[0].o, 0xc9)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            arg10[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = _mm_permute_pd(arg8[0].o, 1)
            zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_15, 1)
            arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg8[0].o, 0x10)
            arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg10[0].o, 4)
            arg5 = _mm256_blend_ps(zmm1, arg5, 0xf)
            zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg10[0].o, 1)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_15, 2)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg8[0].o, 0x60)
            zmm1 = _mm256_insertf128_ps(arg5, zmm1[0].o, 1)
            arg6 = data_143443080
            zmm0 = _mm256_blend_ps(arg6, zmm0, 1)
            arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg10[0].o, 2)
            arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, temp0_15, 4)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg12[0].o, zmm0[0].o, 8)
            zmm0 = _mm256_insertf128_ps(arg5, zmm0[0].o, 1)
            uint32_t var_140_1[0x8] = zmm1
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
            arg5[0].o = _mm_permute_ps(zmm1[0].o, 0xc1)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xda)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm1[0].o)
            zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm1[0].o)
            arg5[0].o = _mm_permute_ps(arg9[0].o, 4)
            zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0x29)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            zmm3[0].o = _mm_permute_ps(arg9[0].o, 0xff)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x12)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm3[0].o)
            float temp0_59[0x4] = _mm_permute_ps(arg13[0].o, 0xc9)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_59, zmm0[0].o)
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg9[0].o, zmm1[0].o, 1)
            float temp0_64[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x10)
            zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 1)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 2)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x60)
            arg7[0].o = _mm_permute_pd(zmm3[0].o, 1)
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_64, arg5[0].o, 4)
            zmm4 = _mm256_blend_ps(arg6, arg7, 1)
            arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4, arg5[0].o, 2)
            arg7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm1[0].o, 4)
            zmm1[0].o = _mm256_extractf128_ps(zmm4, 1)
            zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg11[0].o, zmm1[0].o, 8)
            arg5[0].o = _mm_permute_ps(temp0_15, 0)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            float temp0_78[0x4] = _mm_permute_ps(arg10[0].o, 0xaa)
            float temp0_79[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_78)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_79)
            float temp0_81[0x4] = _mm_permute_ps(arg8[0].o, 0)
            float temp0_82[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_81)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_82)
            float temp0_84[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg9[0].o)
            arg9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg9[0].o, arg9[0].o)
            arg11[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_84)
            arg5[0].o = _mm_permute_ps(arg10[0].o, 0)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            float temp0_89[0x4] = _mm_permute_ps(arg8[0].o, 0x55)
            float temp0_90[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_89)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_90)
            float var_12c
            float temp0_92[0x4] = _mm_broadcast_ss(var_12c)
            float temp0_93[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_92)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_93)
            float var_124
            float temp0_95[0x4] = _mm_broadcast_ss(var_124)
            float temp0_96[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_95)
            float temp0_97[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_96)
            arg5[0].o = _mm_broadcast_ss(zmm0[0])
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            float temp0_100[0x4] = _mm_broadcast_ss(zmm0[2])
            float temp0_101[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(arg7[0].o, temp0_100)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_101)
            float temp0_103[0x4] = _mm_broadcast_ss(zmm0[1])
            float temp0_104[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_103)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_104)
            float temp0_106[0x4] = _mm_broadcast_ss(zmm0[3])
            float temp0_107[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_106)
            float temp0_108[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_107)
            arg5[0].o = _mm_broadcast_ss(zmm0[4])
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm3[0].o = _mm_broadcast_ss(zmm0[6])
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            zmm3[0].o = _mm_broadcast_ss(zmm0[5])
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm0[0].o)
            arg5[0].o = _mm_broadcast_ss(zmm0[7])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            arg13[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg14[0].o)
            zmm1[0].o = __vmovshdup_xmmdq_xmmdq(arg11[0].o)
            int32_t temp0_122 = __vextractps_gpr32_xmmdq_immb(temp0_97, 0)
            arg5[0].o = _mm_permute_pd(arg11[0].o, 1)
            zmm3[0].o = zx.o(temp0_122)
            arg7[0].o = zx.o(__vextractps_gpr32_xmmdq_immb(temp0_108, 0))
            arg8[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_108, arg7[0].o, 1)
            zmm0 = _mm256_insertf128_ps(arg8, zmm0[0].o, 1)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_97, zmm3[0].o, 1)
            arg6 = _mm256_insertf128_ps(arg11, arg6[0].o, 1)
            float var_1c0[0x8] = arg6
            arg6[0].o = __vmovshdup_xmmdq_xmmdq(temp0_97)
            float zmm5[0x4] = _mm_permute_pd(temp0_97, 1)
            int224_t var_1a0_1 = zmm0[0].28
            zmm0[0].o = arg11[0].o f* arg11[0].d
            zmm1[0].o = zmm1[0].o f* zmm1[0]
            zmm0[0].o = zmm0[0].o f+ zmm1[0]
            zmm1[0].o = __vmovshdup_xmmdq_xmmdq(temp0_108)
            zmm4 = _mm_permute_pd(temp0_108, 1)
            arg5[0].o = arg5[0].o f* arg5[0]
            zmm0[0].o = zmm0[0].o f+ arg5[0]
            arg5[0].o = zmm3[0].o f* zmm3[0]
            zmm3[0].o = arg6[0].o f* arg6[0]
            arg5[0].o = arg5[0].o f+ zmm3[0]
            zmm3[0].o = zmm5 f* zmm5[0]
            arg5[0].o = arg5[0].o f+ zmm3[0]
            zmm3[0].o = arg7[0].o f* arg7[0]
            zmm1[0].o = zmm1[0].o f* zmm1[0]
            zmm1[0].o = zmm3[0].o f+ zmm1[0]
            zmm3[0].o = zmm4 f* zmm4[0]
            zmm1[0].o = zmm1[0].o f+ zmm3[0]
            zmm3[0].o = 0xb22bcc77
            arg6[0].o = 0xb22bcc77
            zmm3[0].o = zmm0[0].o f+ -9.99999994e-09f
            float temp0_133[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
            zmm0[0].o = zmm0[0].o f* 0.5f
            zmm4 = temp0_133 f+
                (temp0_133 f* (0x3f000000 - (zmm0[0].o f* (temp0_133 f* temp0_133[0])[0])[0])[0])[0]
            zmm0[0].o = zmm0[0].o f* (zmm4 f* zmm4[0])[0]
            zmm0[0].o = 0x3f000000 f- zmm0[0]
            zmm0[0].o = zmm4 f* zmm0[0]
            zmm0[0].o = zmm4 f+ zmm0[0]
            arg8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg8[0].o, arg8[0].o)
            zmm3[0].o = _mm_cmp_ss(arg8[0].o, zmm3[0], 2)
            arg7[0].o = 0x3f800000
            zmm0[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm0[0].o, zmm3[0].o)
            zmm3[0].o = arg5[0].o f+ -9.99999994e-09f
            float temp0_137[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
            arg5[0].o = arg5[0].o f* 0.5f
            zmm4 = temp0_137 f+
                (temp0_137 f* (0x3f000000 - (arg5[0].o f* (temp0_137 f* temp0_137[0])[0])[0])[0])[0]
            arg5[0].o = arg5[0].o f* (zmm4 f* zmm4[0])[0]
            arg5[0].o = 0x3f000000 f- arg5[0]
            arg5[0].o = zmm4 f* arg5[0]
            arg5[0].o = zmm4 f+ arg5[0]
            zmm3[0].o = _mm_cmp_ss(arg8[0].o, zmm3[0], 2)
            arg5[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, arg5[0].o, zmm3[0].o)
            zmm3[0].o = zmm1[0].o f+ -9.99999994e-09f
            float temp0_140[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
            zmm1[0].o = zmm1[0].o f* 0.5f
            zmm4 = temp0_140 f+
                (temp0_140 f* (0x3f000000 - (zmm1[0].o f* (temp0_140 f* temp0_140[0])[0])[0])[0])[0]
            zmm1[0].o = zmm1[0].o f* (zmm4 f* zmm4[0])[0]
            zmm1[0].o = 0x3f000000 f- zmm1[0]
            zmm1[0].o = zmm4 f* zmm1[0]
            zmm1[0].o = zmm4 f+ zmm1[0]
            arg6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(0xb22bcc77, 0xb22bcc77)
            zmm3[0].o = _mm_cmp_ss(arg8[0].o, zmm3[0], 2)
            zmm1[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm1[0].o, zmm3[0].o)
            zmm3[0].o = zmm0[0].o f* var_1c0[1]
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o f* arg11[0].d, zmm3[0].o, 0x10)
            float var_1b8
            zmm0[0].o = zmm0[0].o f* var_1b8
            float var_1b0
            zmm4 = arg5[0].o f* var_1b0
            float var_1ac
            zmm5 = arg5[0].o f* var_1ac
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm5, 0x10)
            uint32_t var_1a8
            arg5[0].o = arg5[0].o f* var_1a8
            zmm4 = zmm1[0].o f* var_1a0_1.d
            zmm5 = zmm1[0].o f* var_1a0_1:4.d
            arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg5[0].o, 0x20)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm5, 0x10)
            zmm1[0].o = zmm1[0].o f* var_1a0_1:8.d
            arg7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x20)
            zmm1[0].o = _mm_cmp_ps(arg9[0].o, arg13[0].o, 2)
            zmm1[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm1[0].o = __vpmovzxwd_xmmdq_xmmq(zmm1[0].q)
            zmm1[0].o = __vpslld_xmmdq_xmmdq_immb(zmm1[0].o, 0x1f)
            zmm3 = data_1434431a0
            zmm4 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm3, data_1434430a0, zmm1)
            zmm1[0].o = _mm_permute_ps(zmm4, 0)
            zmm1 = _mm256_insertf128_ps(zmm1, zmm1[0].o, 1)
            arg8 = _mm256_mul_ps(zmm1, zmm0)
            float temp0_158[0x4] = __vmovshdup_xmmdq_xmmdq(arg8[0].o)
            zmm3[0].o = _mm_permute_pd(arg8[0].o, 1)
            var_1c0[0] = arg8[0].d
            var_1c0[1] = temp0_158[0]
            var_1b8 = zmm3[0]
            zmm0[0].o = _mm_permute_ps(zmm4, 0x55)
            zmm0 = _mm256_insertf128_ps(zmm0, zmm0[0].o, 1)
            arg9 = _mm256_mul_ps(zmm0, arg5)
            zmm0[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
            zmm1[0].o = _mm_permute_pd(arg9[0].o, 1)
            var_1b0 = arg9[0]
            var_1ac = zmm0[0]
            var_1a8 = zmm1[0]
            arg5[0].o = _mm_permute_ps(zmm4, 0xaa)
            arg10 = _mm256_mul_ps(_mm256_insertf128_ps(arg5, arg5[0].o, 1), arg7)
            arg7[0].o = __vmovshdup_xmmdq_xmmdq(arg10[0].o)
            arg11 = data_142fc9300
            arg5 = _mm256_blend_ps(arg8, arg11, 0xf8)
            arg12 = data_142fc9320
            arg5 = _mm256_and_ps(arg5, arg12)
            arg14 = data_1434431c0
            arg5 = _mm256_cmp_ps(arg5, arg14, 2)
            result = zx.q(_mm256_movemask_ps(arg5))
            zmm4 = _mm_permute_pd(arg10[0].o, 1)
            var_1a0_1.d = arg10[0]
            var_1a0_1:4.d = arg7[0]
            var_1a0_1:8.d = zmm4[0]
            
            if (result.b == 0xff)
            label_14033db50:
                arg10[0].o = data_142d3f660
                zmm0[0].o = arg10[0].o
                arg7[0].o = 0x322bcc77
                arg8[0].o = 0x322bcc77
                arg7[0].o = 0xffffffff
            else
                arg5 = _mm256_cmp_ps(_mm256_and_ps(_mm256_blend_ps(arg9, arg11, 0xf8), arg12), 
                    arg14, 2)
                result = zx.q(_mm256_movemask_ps(arg5))
                
                if (result.b == 0xff)
                    goto label_14033db50
                
                arg5 = _mm256_cmp_ps(_mm256_and_ps(_mm256_blend_ps(arg10, arg11, 0xf8), arg12), 
                    arg14, 2)
                result = zx.q(_mm256_movemask_ps(arg5))
                
                if (result.b == 0xff)
                    goto label_14033db50
                
                arg5[0].o = arg8[0].o f+ zmm0[0]
                arg5[0].o = zmm4 f+ arg5[0]
                
                if (arg5[0].o f<= arg6[0])
                    zmm0[0].o f- arg8[0].d
                    int64_t r10_1
                    r10_1.b = zmm0[0].o f> arg8[0].d
                    int64_t rax_9 = 0
                    
                    if (zmm0[0].o f> arg8[0].d)
                        rax_9 = 0x14
                    
                    if (zmm4 f> *(&var_1c0 + rax_9))
                        r10_1 = 2
                    
                    int64_t r14_1 = sx.q(*(&data_14344321c + (r10_1 << 2)))
                    int64_t r12_1 = sx.q(*(&data_14344321c + (r14_1 << 2)))
                    zmm0[0].o = var_1c0[zx.q((r10_1 * 5).d)]
                    zmm0[0].o = zmm0[0].o f- var_1c0[sx.q((r14_1 * 5).d)]
                    zmm0[0].o = zmm0[0].o f- var_1c0[sx.q((r12_1 * 5).d)]
                    zmm1[0].o = 0x3f800000
                    arg5[0].o = 0x3f800000
                    zmm0[0].o = zmm0[0].o f+ 1f
                    zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    zmm1[0].o = zmm0[0].o f* 0.5f
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    zmm0[0].o = zmm0[0].o f* 0.5f
                    int128_t var_160
                    *(&var_160 + (r10_1 << 2)) = zmm0[0]
                    zmm0[0].o = var_1c0[sx.q((r14_1 + (r10_1 << 2)).d)]
                    zmm0[0].o = zmm0[0].o f+ var_1c0[sx.q((r10_1 + (r14_1 << 2)).d)]
                    zmm0[0].o = zmm0[0].o f* zmm1[0]
                    *(&var_160 + (r14_1 << 2)) = zmm0[0]
                    zmm0[0].o = var_1c0[sx.q((r12_1 + (r10_1 << 2)).d)]
                    arg3 = var_148_1
                    zmm0[0].o = zmm0[0].o f+ var_1c0[sx.q((r10_1 + (r12_1 << 2)).d)]
                    zmm0[0].o = zmm1[0].o f* zmm0[0]
                    arg5[0].o = var_1c0[sx.q((r12_1 + (r14_1 << 2)).d)]
                    result = sx.q((r14_1 + (r12_1 << 2)).d)
                    arg5[0].o = arg5[0].o f- var_1c0[result]
                    *(&var_160 + (r12_1 << 2)) = zmm0[0]
                    zmm0[0].o = zmm1[0].o f* arg5[0]
                    float var_154_1 = zmm0[0]
                    zmm0[0].o = var_160
                else
                    zmm0[0].o = 0x3f800000
                    zmm0[0].o = arg5[0].o f+ 1f
                    zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    arg5[0].o = zmm0[0].o f* 0.5f
                    zmm1[0].o = zmm1[0].o f- arg7[0]
                    zmm1[0].o = zmm1[0].o f* arg5[0]
                    zmm3[0].o = arg10[0].o f- zmm3[0]
                    zmm3[0].o = zmm3[0].o f* arg5[0]
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x10)
                    zmm3[0].o = temp0_158 f- arg9[0]
                    arg5[0].o = zmm3[0].o f* arg5[0]
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5[0].o, 0x20)
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    zmm0[0].o = zmm0[0].o f* 0.5f
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x30)
                
                arg7[0].o = 0x322bcc77
                arg8[0].o = 0x322bcc77
                arg7[0].o = 0xffffffff
                arg10[0].o = data_142d3f660
            
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            arg5[0].o = _mm_permute_pd(zmm1[0].o, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5[0].o)
            arg5[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
            zmm1[0].o = zmm1[0].o f+ arg5[0]
            arg5[0].o = _mm_cmp_ss(arg8[0].o, zmm1[0], 6)
            arg5[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
            zmm3[0].o = zmm1[0].o f* 0.5f
            zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
            zmm1[0].o = zmm1[0].o
                f+ (zmm1[0].o f* (0x3f000000 - (zmm1[0].o f* zmm1[0] f* zmm3[0])[0])[0])[0]
            zmm3[0].o = zmm3[0].o f* (zmm1[0].o f* zmm1[0])[0]
            zmm3[0].o = 0x3f000000 f- zmm3[0]
            zmm3[0].o = zmm1[0].o f* zmm3[0]
            zmm1[0].o = zmm1[0].o f+ zmm3[0]
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = _mm_permute_ps(arg5[0].o, 0)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg10[0].o)
            zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vmovsd_xmmdq_memq(var_1a0_1:0x10.q)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, var_1a0_1:0x18.d, 0x28)
        
        arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm3[0].o = _mm_permute_pd(arg5[0].o, 1)
        arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
        zmm3[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
        arg5[0].o = arg5[0].o f+ zmm3[0]
        zmm3[0].o = _mm_cmp_ss(arg8[0].o, arg5[0], 6)
        zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg7[0].o)
        zmm4 = arg5[0].o f* 0.5f
        arg5[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
        arg5[0].o =
            arg5[0].o f+ (arg5[0].o f* (0x3f000000 - (arg5[0].o f* arg5[0] f* zmm4[0])[0])[0])[0]
        arg5[0].o =
            arg5[0].o f+ (arg5[0].o f* (0x3f000000 - (zmm4 f* (arg5[0].o f* arg5[0])[0])[0])[0])[0]
        arg5[0].o = _mm_permute_ps(arg5[0].o, 0)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg5[0].o = _mm_permute_ps(zmm3[0].o, 0)
        zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg5[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg10[0].o)
        zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg1[rax * 3] = zmm0[0].o
        arg1[rax * 3 + 1] = zmm1[0].o
        arg1[rax * 3 + 2] = arg13[0].o
        rsi_1 += 1
    while (rdi_1 != rsi_1)

arg6[0].o = var_e8
arg7[0].o = var_d8
arg8[0].o = var_c8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_78
arg13[0].o = var_68
arg14[0].o = var_58
_mm256_zeroupper()
return result
