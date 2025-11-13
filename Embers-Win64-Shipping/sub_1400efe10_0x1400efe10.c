// 函数: sub_1400efe10
// 地址: 0x1400efe10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
float zmm9[0x4]
float var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
double zmm7[0x2]
double var_d8[0x2] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
uint64_t result = zx.q(arg14)

if (result.d s> 0)
    uint64_t rax = zx.q(result.d)
    int64_t rbp_1 = 0
    zmm11 = data_142d3f7b0
    zmm12 = 0x3727c5ac
    zmm13 = data_142d3f690
    int64_t r13_1 = 0
    int64_t r12_1 = 0
    
    do
        int64_t rdi_1 = sx.q(*(arg12 + (r13_1 << 1)))
        int64_t r14_1 = sx.q(*(arg13 + r13_1))
        zmm9 = *(arg2 + (rbp_1 << 2))
        zmm6 = *(arg2 + (rbp_1 << 2) + 0x10)
        zmm8 = *(arg2 + (rbp_1 << 2) + 0x20)
        _mm256_zeroupper()
        int128_t* rax_5 = sub_141df0be0(arg3, rdi_1.d, r12_1.d)
        float zmm4[0x4] = *rax_5
        zmm15 = rax_5[1]
        zmm10 = rax_5[2]
        float var_1f8_1[0x4] = zmm6
        int32_t rax_10
        int32_t rsi_1
        int32_t r11_1
        float zmm1[0x8]
        float zmm3[0x8]
        float zmm5[0x4]
        
        if (r14_1 == -1)
            arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
            float temp0_50[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, arg5)
            zmm1[0].o = __vmovddup_xmmdq_memq(0.0078125055733835325)
            float temp0_54[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm9, 
                _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_50, zmm1[0].o), 0x1b))
            zmm3[0].o = data_143442130
            float temp0_57[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
                _mm_permute_pd(__vmulps_xmmdq_xmmdq_xmmdq(temp0_50, zmm3[0].o), 1), temp0_54)
            zmm6 = data_142fc92f0
            zmm14 = __vaddps_xmmdq_xmmdq_xmmdq(
                _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_50, zmm6), 0xb1), temp0_57)
            float temp0_61[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg5)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_61, zmm1[0].o)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x1b)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
                _mm_permute_pd(__vmulps_xmmdq_xmmdq_xmmdq(temp0_61, zmm3[0].o), 1), zmm1[0].o)
            float temp0_69[0x4] = _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_61, zmm6), 0xb1)
            arg5 = data_142e6da00
            int128_t var_158
            zmm3[0].o = var_158
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5, zmm3[0].o, 8)
            float var_168[0x4]
            float temp0_71[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm8, var_168, 8)
            var_158 = zmm3[0].o
            var_168 = temp0_71
            float temp0_72[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_71)
            r11_1 = __vextractps_gpr32_xmmdq_immb(temp0_72, 0)
            rax_10 = __vextractps_gpr32_xmmdq_immb(temp0_72, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_69, zmm1[0].o)
            rsi_1 = __vextractps_gpr32_xmmdq_immb(temp0_72, 2)
            int128_t var_178
            zmm3[0].o = var_178
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5, zmm3[0].o, 8)
            float var_188[0x4]
            arg5 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm10, var_188, 8)
            var_178 = zmm3[0].o
            var_188 = arg5
            zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5)
        else
            float temp0_2[0x4] =
                __vmulps_xmmdq_xmmdq_xmmdq(zmm9, _mm_broadcast_ss(arg4[r14_1 * 4 + 3]))
            zmm1[0].o = _mm_broadcast_ss(arg4[r14_1 * 4])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm9, 0x1b), zmm1[0].o)
            zmm5 = __vmovddup_xmmdq_memq(-0.007812501848093234)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5)
            float temp0_8[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_2, zmm1[0].o)
            zmm1[0].o = _mm_broadcast_ss(arg4[r14_1 * 4 + 1])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm9, 1), zmm1[0].o)
            arg5 = data_142d3f7d0
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5)
            float temp0_13[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_8)
            zmm1[0].o = _mm_broadcast_ss(arg4[r14_1 * 4 + 2])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm9, 0xb1), zmm1[0].o)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm11)
            zmm14 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_13)
            zmm1[0].o = _mm_broadcast_ss(arg7[r14_1 * 4 + 3])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
            zmm7 = _mm_broadcast_ss(arg7[r14_1 * 4])
            float temp0_24[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0x1b), zmm7), zmm5)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_24)
            float temp0_26[0x4] = _mm_broadcast_ss(arg7[r14_1 * 4 + 1])
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm4, 1), temp0_26), arg5), 
                zmm1[0].o)
            float temp0_31[0x4] = _mm_broadcast_ss(arg7[r14_1 * 4 + 2])
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0xb1), temp0_31), zmm11), 
                zmm1[0].o)
            float (* rax_9)[0x4] = arg6
            float var_128[0x4]
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vblendps_xmmdq_xmmdq_memdq_immb((*rax_9)[r14_1 * 3], var_128, 0xe), 
                    (*rax_9)[r14_1 * 3 + 1], 0x10), 
                (*rax_9)[r14_1 * 3 + 2], 0x20)
            float var_118[0x4]
            float temp0_39[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm8, var_118, 8)
            var_118 = temp0_39
            var_128 = zmm3[0].o
            float temp0_40[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_39, zmm3[0].o)
            r11_1 = __vextractps_gpr32_xmmdq_immb(temp0_40, 0)
            rax_10 = __vextractps_gpr32_xmmdq_immb(temp0_40, 1)
            rsi_1 = __vextractps_gpr32_xmmdq_immb(temp0_40, 2)
            float var_108[0x4]
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vblendps_xmmdq_xmmdq_memdq_immb((*arg8)[r14_1 * 3], var_108, 0xe), 
                    (*arg8)[r14_1 * 3 + 1], 0x10), 
                (*arg8)[r14_1 * 3 + 2], 0x20)
            float var_f8[0x4]
            arg5 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm10, var_f8, 8)
            var_f8 = arg5
            var_108 = zmm3[0].o
            zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(arg5, zmm3[0].o)
        
        int32_t temp0_80 = __vextractps_gpr32_xmmdq_immb(zmm5, 0)
        int32_t temp0_81 = __vextractps_gpr32_xmmdq_immb(zmm5, 1)
        int32_t temp0_82 = __vextractps_gpr32_xmmdq_immb(zmm5, 2)
        arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
        float temp0_85[0x4] = __vminss_xmmdq_xmmdq_xmmd(
            __vmaxss_xmmdq_xmmdq_memd(arg5, *(arg12 + (r13_1 << 1) + 4)), 1f)
        *(arg11 + (rdi_1 << 2)) = __vmaxss_xmmdq_xmmdq_memd(temp0_85, *(arg11 + (rdi_1 << 2)))[0]
        int32_t rcx_5
        int32_t rdx_2
        int32_t rdi_2
        
        if (temp0_85 f<= zmm12[0])
            arg5 = zmm14
            rdx_2 = rsi_1
            rcx_5 = rax_10
            rdi_2 = r11_1
            zmm15 = var_1f8_1
        else if (temp0_85 f>= 0.999989986f)
            zmm8 = zmm10
            zmm9 = zmm4
            arg5 = zmm1[0].o
            rdx_2 = temp0_82
            rcx_5 = temp0_81
            rdi_2 = temp0_80
        else
            zmm12 = 0x3f800000 - temp0_85[0]
            float temp0_87[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, zmm4)
            zmm3[0].o = _mm_permute_pd(temp0_87, 1)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_87, zmm3[0].o)
            float temp0_90[0x4] = _mm_permute_ps(zmm3[0].o, 0x39)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_90)
            arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
            zmm3[0].o = _mm_cmp_ps(arg5, zmm3[0].o, 2)
            zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, 0x3f800000)
            zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
            zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
            zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
            float temp0_98[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(arg5, zmm9)
            float temp0_99[0x4] = _mm_permute_ps(temp0_85, 0)
            float temp0_100[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, temp0_99)
            zmm3[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(temp0_98, zmm9, zmm3[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm12, 0), zmm3[0].o)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_100)
            float temp0_105[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            float temp0_107[0x4] =
                __vaddps_xmmdq_xmmdq_xmmdq(temp0_105, _mm_permute_pd(temp0_105, 1))
            zmm4 = temp0_107 f+ __vmovshdup_xmmdq_xmmdq(temp0_107)[0]
            zmm6 = zmm4 f* 0.5f
            float temp0_109[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm4, zmm4[0])
            arg5 = temp0_109 f+ (temp0_109
                f* (0x3f000000 f- (zmm6 f* (temp0_109 f* temp0_109[0])[0].d)[0].d)[0].d)[0].d
            float temp0_110[0x4] = _mm_permute_ps(
                arg5 f+ (arg5 f* (0x3f000000 - (zmm6 f* (arg5 f* arg5[0])[0].d)[0])[0])[0], 0)
            float temp0_111[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_110)
            zmm3[0].o = _mm_cmp_ss(0x322bcc77, zmm4[0], 6)
            zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, 0xffffffff)
            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0)
            arg5 = __vandps_xmmdq_xmmdq_xmmdq(temp0_111, zmm3[0].o)
            zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, data_142d3f660)
            zmm9 = __vorps_xmmdq_xmmdq_xmmdq(arg5, zmm3[0].o)
            zmm15 = __vaddps_xmmdq_xmmdq_xmmdq(var_1f8_1, 
                __vmulps_xmmdq_xmmdq_xmmdq(__vsubps_xmmdq_xmmdq_xmmdq(zmm15, var_1f8_1), temp0_99))
            zmm8 = __vaddps_xmmdq_xmmdq_xmmdq(zmm8, 
                __vmulps_xmmdq_xmmdq_xmmdq(__vsubps_xmmdq_xmmdq_xmmdq(zmm10, zmm8), temp0_99))
            arg5 = zmm14 f* zmm1[0]
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm14)
            float temp0_125[0x4] = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
            zmm3[0].o = zmm3[0].o f* temp0_125[0]
            arg5 = arg5 f+ zmm3[0]
            zmm3[0].o = _mm_permute_pd(zmm14, 1)
            zmm4 = _mm_permute_pd(zmm1[0].o, 1)
            zmm3[0].o = zmm3[0].o f* zmm4[0]
            arg5 = zmm3[0].o f+ arg5[0]
            zmm3[0].o = _mm_permute_ps(zmm14, 0xe7)
            float temp0_129[0x4] = _mm_permute_ps(zmm1[0].o, 0xe7)
            zmm3[0].o = zmm3[0].o f* temp0_129[0]
            arg5 = zmm3[0].o f+ arg5[0]
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            float temp0_131[0x4] = _mm_cmp_ss(zmm3[0].o, arg5[0], 2)
            zmm3[0].o = 0xbf800000
            float temp0_132[0x4] =
                __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, temp0_131)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_99)
            zmm11 = data_142d3f7b0
            arg5 = temp0_132 f* zmm12[0]
            zmm12 = 0x3727c5ac
            float temp0_135[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm14, _mm_permute_ps(arg5, 0))
            float temp0_136[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_135)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_136, temp0_136)
            zmm4 = _mm_permute_pd(zmm3[0].o, 1)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4)
            float temp0_140[0x4] = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
            zmm3[0].o = zmm3[0].o f+ temp0_140[0]
            zmm4 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm3[0], 6), 0xffffffff)
            zmm6 = zmm3[0].o f* 0.5f
            zmm3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm3[0].o, zmm3[0])
            zmm3[0].o = zmm3[0].o f+
                (zmm3[0].o f* (0x3f000000 f- (zmm6 f* (zmm3[0].o f* zmm3[0])[0].d)[0].d)[0].d)[0].d
            zmm13 = data_142d3f690
            zmm3[0].o = zmm3[0].o
                f+ (zmm3[0].o f* (0x3f000000 - (zmm6 f* (zmm3[0].o f* zmm3[0])[0].d)[0])[0])[0]
            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0)
            float temp0_145[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_136, zmm3[0].o)
            zmm3[0].o = _mm_permute_ps(zmm4, 0)
            arg5 = __vandps_xmmdq_xmmdq_xmmdq(temp0_145, zmm3[0].o)
            zmm3[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f660)
            arg5 = __vorps_xmmdq_xmmdq_xmmdq(arg5, zmm3[0].o)
            zmm3[0].o = zx.o(temp0_80)
            uint16_t var_1d8[0x8]
            zmm3[0].o = __vpblendw_xmmdq_xmmdq_memdq_immb(zmm3[0].o, var_1d8, 0xfc)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zx.o(temp0_81), 0x10)
            float temp0_152[0x4] =
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zx.o(temp0_82), 0x20)
            zmm3[0].o = zx.o(r11_1)
            zmm6 = zx.o(rax_10)
            zmm7 = zx.o(rsi_1)
            uint16_t var_1e8[0x8]
            float temp0_155[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vpblendw_xmmdq_xmmdq_memdq_immb(zmm3[0].o, var_1e8, 0xfc), zmm6, 0x10), 
                zmm7, 0x20)
            var_1d8 = temp0_152
            var_1e8 = temp0_155
            float var_198[0x4]
            float temp0_157[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(
                __vsubps_xmmdq_xmmdq_xmmdq(temp0_152, temp0_155), var_198, 8)
            float var_1a8[0x4]
            float temp0_159[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vshufps_xmmdq_xmmdq_memdq_immb(temp0_85, var_1a8, 0xe0), temp0_85, 0x20)
            uint16_t var_1c8[0x8]
            zmm3[0].o = __vpblendw_xmmdq_xmmdq_memdq_immb(zmm3[0].o, var_1c8, 0xfc)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm6, 0x10)
            float temp0_162[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm7, 0x20)
            var_198 = temp0_157
            var_1a8 = temp0_159
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_157, temp0_159)
            float var_1b8[0x4]
            float temp0_164[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, var_1b8, 8)
            var_1b8 = temp0_164
            var_1c8 = temp0_162
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_162, temp0_164)
            rdi_2 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 0)
            rcx_5 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
            rdx_2 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
        
        *(arg4 + (r13_1 << 2)) = zmm14
        *(arg7 + (r13_1 << 2)) = zmm1[0].o
        *(arg6 + rbp_1) = r11_1
        *(arg6 + rbp_1 + 4) = rax_10
        *(arg6 + rbp_1 + 8) = rsi_1
        *(arg8 + rbp_1) = temp0_80
        *(arg8 + rbp_1 + 4) = temp0_81
        *(arg8 + rbp_1 + 8) = temp0_82
        float (* rbx_3)[0x4]
        int32_t* rsi_2
        
        if (r14_1.d == 0xffffffff)
            rsi_2 = arg10
            rbx_3 = arg9
        else
            rbx_3 = arg9
            float temp0_169[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm13, rbx_3[r14_1])
            zmm1[0].o = _mm_permute_ps(temp0_169, 0xff)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5, zmm1[0].o)
            zmm3[0].o = _mm_permute_ps(temp0_169, 0)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg5, 0x1b), zmm3[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f7c0)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = _mm_permute_ps(temp0_169, 0x55)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(arg5, 1), zmm3[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f7d0)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            float temp0_182[0x4] = _mm_permute_ps(temp0_169, 0xaa)
            zmm3[0].o = _mm_permute_ps(arg5, 0xb1)
            float temp0_186[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_182), 
                    zmm11), 
                zmm1[0].o)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_186, temp0_186)
            zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
            zmm1[0].o = zmm1[0].o f+ zmm3[0]
            zmm3[0].o = 0x3f000000
            zmm3[0].o = zmm1[0].o f* 0.5f
            float temp0_191[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
            zmm4 = temp0_191
                f+ (temp0_191 f* (0x3f000000 - (temp0_191 f* temp0_191[0] f* zmm3[0])[0])[0])[0]
            zmm3[0].o = zmm3[0].o f* (zmm4 f* zmm4[0])[0]
            zmm1[0].o = _mm_cmp_ss(0x322bcc77, zmm1[0], 6)
            zmm1[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm1[0].o, 0xffffffff)
            zmm3[0].o = 0x3f000000 f- zmm3[0]
            zmm3[0].o = zmm4 f* zmm3[0]
            zmm3[0].o = zmm4 f+ zmm3[0]
            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0)
            float temp0_195[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_186, zmm3[0].o)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
            float zmm0[0x4] = __vandps_xmmdq_xmmdq_xmmdq(temp0_195, zmm1[0].o)
            int64_t rax_14 = r14_1 * 3
            rsi_2 = arg10
            zmm3[0].o = __vmovsd_xmmdq_memq(*(rsi_2 + (rax_14 << 2)))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, rsi_2[rax_14 + 2], 0x28)
            zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
            zmm4 = _mm256_rcp_ps(zmm3)
            zmm9 = __vorps_xmmdq_xmmdq_xmmdq(zmm0, zmm1[0].o)
            float temp0_203[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm3[0].o)
            zmm1[0].o = data_142fc94c0.o
            float temp0_205[0x4] =
                __vmulps_xmmdq_xmmdq_xmmdq(zmm4, __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_203))
            zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(
                __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc9320), data_142fc9340, 6)
            zmm0 = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_205)
            int128_t var_138
            zmm3[0].o = var_138
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0, zmm3[0].o, 8)
            uint16_t var_148[0x8]
            zmm0 = __vpblendw_xmmdq_xmmdq_memdq_immb(zx.o(rdi_2), var_148, 0xfc)
            zmm1[0].o = zx.o(rcx_5)
            float temp0_211[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0, zmm1[0].o, 0x10)
            zmm1[0].o = zx.o(rdx_2)
            float temp0_212[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_211, zmm1[0].o, 0x20)
            var_138 = zmm3[0].o
            var_148 = temp0_212
            zmm8 = __vblendps_xmmdq_xmmdq_memdq_immb(
                __vmulps_xmmdq_xmmdq_xmmdq(temp0_212, zmm3[0].o), data_142d8f750, 8)
        
        *(rbx_3 + (r13_1 << 2)) = arg5
        *(rsi_2 + rbp_1) = rdi_2
        *(rsi_2 + rbp_1 + 4) = rcx_5
        *(rsi_2 + rbp_1 + 8) = rdx_2
        result = arg1
        *(result + (rbp_1 << 2)) = zmm9
        *(result + (rbp_1 << 2) + 0x10) = zmm15
        *(result + (rbp_1 << 2) + 0x20) = zmm8
        r12_1 += 1
        r13_1 += 4
        rbp_1 += 0xc
    while (rax != r12_1)

_mm256_zeroupper()
return result
