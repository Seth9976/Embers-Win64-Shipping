// 函数: sub_1400ee720
// 地址: 0x1400ee720
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
float zmm0[0x8] = *arg15
uint16_t var_1e8[0x8]
uint16_t var_1d8[0x8]
uint16_t var_1c8[0x8]
int128_t var_1b8
float var_1a8[0x4]
int128_t var_198
float var_188[0x4]
int128_t var_178
float var_168[0x4]
int128_t var_158
uint16_t var_148[0x8]
int128_t var_138
float var_128[0x4]
float var_118[0x4]
float var_108[0x4]
float var_f8[0x4]
int32_t zmm1[0x8]
float zmm3[0x8]
double zmm4[0x2]
float zmm5[0x4]

if (_mm256_movemask_ps(zmm0) != 0xff)
    if (result.d s> 0)
        uint64_t rax_15 = zx.q(result.d)
        int64_t rbp_2 = 0
        zmm11 = data_142d3f7d0
        zmm13 = data_142d3f690
        int64_t r13_2 = 0
        int64_t r12_2 = 0
        
        do
            int64_t rdi_3 = sx.q(*(arg12 + (r13_2 << 1)))
            int64_t rsi_2 = sx.q(*(arg13 + r13_2))
            zmm15 = *(arg2 + (rbp_2 << 2))
            zmm6 = *(arg2 + (rbp_2 << 2) + 0x10)
            zmm12 = *(arg2 + (rbp_2 << 2) + 0x20)
            _mm256_zeroupper()
            double (* rax_20)[0x2] = sub_141df0be0(arg3, rdi_3.d, r12_2.d)
            zmm4 = *rax_20
            zmm8 = rax_20[1]
            zmm10 = rax_20[2]
            float var_218_2[0x4] = zmm6
            int32_t rax_25
            int32_t r11_2
            int32_t r15_2
            
            if (rsi_2 == -1)
                arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm15, arg5)
                zmm1[0].o = __vmovddup_xmmdq_memq(0.0078125055733835325)
                float temp0_268[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm15, 
                    _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o), 0x1b))
                zmm3[0].o = data_143442130
                float temp0_271[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
                    _mm_permute_pd(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o), 1), temp0_268)
                zmm6 = data_142fc92f0
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6)
                zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xb1)
                zmm9 = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_271)
                float temp0_275[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg5)
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_275, zmm1[0].o)
                zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x1b)
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
                    _mm_permute_pd(__vmulps_xmmdq_xmmdq_xmmdq(temp0_275, zmm3[0].o), 1), zmm1[0].o)
                float temp0_283[0x4] =
                    _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_275, zmm6), 0xb1)
                arg5 = data_142e6da00
                zmm3[0].o = var_158
                zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5, zmm3[0].o, 8)
                float temp0_285[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm12, var_168, 8)
                var_158 = zmm3[0].o
                var_168 = temp0_285
                float temp0_286[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_285)
                r11_2 = __vextractps_gpr32_xmmdq_immb(temp0_286, 0)
                r15_2 = __vextractps_gpr32_xmmdq_immb(temp0_286, 1)
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_283, zmm1[0].o)
                rax_25 = __vextractps_gpr32_xmmdq_immb(temp0_286, 2)
                zmm3[0].o = var_178
                zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5, zmm3[0].o, 8)
                arg5 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm10, var_188, 8)
                var_178 = zmm3[0].o
                var_188 = arg5
                zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5)
            else
                zmm0[0].o = _mm_broadcast_ss(arg4[rsi_2 * 4 + 3])
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm15, zmm0[0].o)
                zmm1[0].o = _mm_broadcast_ss(arg4[rsi_2 * 4])
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm15, 0x1b), zmm1[0].o)
                zmm5 = __vmovddup_xmmdq_memq(-0.007812501848093234)
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5)
                zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = _mm_broadcast_ss(arg4[rsi_2 * 4 + 1])
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm15, 1), zmm1[0].o)
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm11)
                zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                zmm1[0].o = _mm_broadcast_ss(arg4[rsi_2 * 4 + 2])
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm15, 0xb1), zmm1[0].o)
                arg5 = data_142d3f7b0
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5)
                zmm9 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                zmm1[0].o = _mm_broadcast_ss(arg7[rsi_2 * 4 + 3])
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
                zmm7 = _mm_broadcast_ss(arg7[rsi_2 * 4])
                float temp0_238[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0x1b), zmm7), zmm5)
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_238)
                float temp0_240[0x4] = _mm_broadcast_ss(arg7[rsi_2 * 4 + 1])
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
                    __vmulps_xmmdq_xmmdq_xmmdq(
                        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm4, 1), temp0_240), zmm11), 
                    zmm1[0].o)
                float temp0_245[0x4] = _mm_broadcast_ss(arg7[rsi_2 * 4 + 2])
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
                    __vmulps_xmmdq_xmmdq_xmmdq(
                        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0xb1), temp0_245), arg5), 
                    zmm1[0].o)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vinsertps_xmmdq_xmmdq_memd_immb(
                        __vblendps_xmmdq_xmmdq_memdq_immb(arg6[rsi_2 * 3], var_118, 0xe), 
                        arg6[rsi_2 * 3 + 1], 0x10), 
                    arg6[rsi_2 * 3 + 2], 0x20)
                float temp0_253[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm12, var_f8, 8)
                var_f8 = temp0_253
                var_118 = zmm3[0].o
                float temp0_254[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_253, zmm3[0].o)
                r11_2 = __vextractps_gpr32_xmmdq_immb(temp0_254, 0)
                r15_2 = __vextractps_gpr32_xmmdq_immb(temp0_254, 1)
                rax_25 = __vextractps_gpr32_xmmdq_immb(temp0_254, 2)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vinsertps_xmmdq_xmmdq_memd_immb(
                        __vblendps_xmmdq_xmmdq_memdq_immb((*arg8)[rsi_2 * 3], var_128, 0xe), 
                        (*arg8)[rsi_2 * 3 + 1], 0x10), 
                    (*arg8)[rsi_2 * 3 + 2], 0x20)
                arg5 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm10, var_108, 8)
                var_108 = arg5
                var_128 = zmm3[0].o
                zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(arg5, zmm3[0].o)
            
            int32_t temp0_294 = __vextractps_gpr32_xmmdq_immb(zmm5, 0)
            int32_t temp0_295 = __vextractps_gpr32_xmmdq_immb(zmm5, 1)
            int32_t temp0_296 = __vextractps_gpr32_xmmdq_immb(zmm5, 2)
            arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
            float temp0_299[0x4] = __vminss_xmmdq_xmmdq_xmmd(
                __vmaxss_xmmdq_xmmdq_memd(arg5, *(arg12 + (r13_2 << 1) + 4)), 1f)
            *(arg11 + (rdi_3 << 2)) =
                __vmaxss_xmmdq_xmmdq_memd(temp0_299, *(arg11 + (rdi_3 << 2)))[0]
            int32_t rcx_11
            int32_t rdx_7
            int32_t rdi_4
            
            if (temp0_299 f<= 9.99999975e-06f)
                arg5 = zmm9
                rdx_7 = rax_25
                rdi_4 = r15_2
                rcx_11 = r11_2
                zmm8 = var_218_2
            else if (temp0_299 f>= 0.999989986f)
                zmm12 = zmm10
                zmm15 = zmm4
                arg5 = zmm1[0].o
                rdx_7 = temp0_296
                rdi_4 = temp0_295
                rcx_11 = temp0_294
            else
                zmm0[0].o = 0x3f800000 f- temp0_299[0]
                float temp0_301[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm15, zmm4)
                zmm3[0].o = _mm_permute_pd(temp0_301, 1)
                zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_301, zmm3[0].o)
                float temp0_304[0x4] = _mm_permute_ps(zmm3[0].o, 0x39)
                zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_304)
                arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
                zmm3[0].o = _mm_cmp_ps(arg5, zmm3[0].o, 2)
                zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                zmm3[0].o = __vpmovzxwd_xmmdq_xmmq(zmm3[0].q)
                zmm3[0].o = __vpslld_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                zmm3[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm3[0].o, 0x1f)
                float temp0_312[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(arg5, zmm15)
                float temp0_313[0x4] = _mm_permute_ps(temp0_299, 0)
                zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, temp0_313)
                zmm3[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(temp0_312, zmm15, zmm3[0].o)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm0[0].o, 0), zmm3[0].o)
                zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4)
                zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                zmm4 = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, _mm_permute_pd(zmm4, 1))
                zmm4 = zmm4 f+ __vmovshdup_xmmdq_xmmdq(zmm4)[0]
                zmm6 = zmm4 f* 0.5f
                float temp0_323[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm4, zmm4[0].d)
                arg5 = temp0_323 f+ (temp0_323
                    f* (0x3f000000 f- (zmm6 f* (temp0_323 f* temp0_323[0])[0].d)[0].d)[0].d)[0].d
                float temp0_324[0x4] = _mm_permute_ps(
                    arg5 f+ (arg5 f* (0x3f000000 - (zmm6 f* (arg5 f* arg5[0])[0].d)[0])[0])[0], 0)
                float temp0_325[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_324)
                zmm3[0].o = _mm_cmp_ss(0x322bcc77, zmm4[0].d, 6)
                zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, 0xffffffff)
                zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0)
                arg5 = __vandps_xmmdq_xmmdq_xmmdq(temp0_325, zmm3[0].o)
                zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, data_142d3f660)
                zmm15 = __vorps_xmmdq_xmmdq_xmmdq(arg5, zmm3[0].o)
                zmm8 = __vaddps_xmmdq_xmmdq_xmmdq(var_218_2, 
                    __vmulps_xmmdq_xmmdq_xmmdq(__vsubps_xmmdq_xmmdq_xmmdq(zmm8, var_218_2), 
                        temp0_313))
                zmm12 = __vaddps_xmmdq_xmmdq_xmmdq(zmm12, 
                    __vmulps_xmmdq_xmmdq_xmmdq(__vsubps_xmmdq_xmmdq_xmmdq(zmm10, zmm12), temp0_313))
                arg5 = zmm9 f* zmm1[0]
                zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm9)
                zmm4 = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
                zmm3[0].o = zmm3[0].o f* zmm4[0].d
                arg5 = arg5 f+ zmm3[0]
                zmm3[0].o = _mm_permute_pd(zmm9, 1)
                double temp0_341[0x2] = _mm_permute_pd(zmm1[0].o, 1)
                zmm3[0].o = zmm3[0].o f* temp0_341[0].d
                arg5 = zmm3[0].o f+ arg5[0]
                zmm3[0].o = _mm_permute_ps(zmm9, 0xe7)
                zmm4 = _mm_permute_ps(zmm1[0].o, 0xe7)
                zmm3[0].o = zmm3[0].o f* zmm4[0].d
                arg5 = zmm3[0].o f+ arg5[0]
                zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
                float temp0_345[0x4] = _mm_cmp_ss(zmm3[0].o, arg5[0], 2)
                zmm3[0].o = 0xbf800000
                float temp0_346[0x4] =
                    __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, temp0_345)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_313)
                zmm11 = data_142d3f7d0
                float temp0_349[0x4] =
                    __vmulps_xmmdq_xmmdq_xmmdq(zmm9, _mm_permute_ps(temp0_346 f* zmm0[0], 0))
                float temp0_350[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_349)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_350, temp0_350)
                double temp0_352[0x2] = _mm_permute_pd(zmm3[0].o, 1)
                zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_352)
                zmm4 = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
                zmm3[0].o = zmm3[0].o f+ zmm4[0].d
                zmm4 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm3[0], 6), 0xffffffff)
                zmm6 = zmm3[0].o f* 0.5f
                zmm3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm3[0].o, zmm3[0])
                zmm3[0].o = zmm3[0].o f+ (zmm3[0].o
                    f* (0x3f000000 f- (zmm6 f* (zmm3[0].o f* zmm3[0])[0].d)[0].d)[0].d)[0].d
                zmm13 = data_142d3f690
                zmm3[0].o = zmm3[0].o
                    f+ (zmm3[0].o f* (0x3f000000 - (zmm6 f* (zmm3[0].o f* zmm3[0])[0].d)[0])[0])[0]
                zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0)
                float temp0_359[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_350, zmm3[0].o)
                zmm3[0].o = _mm_permute_ps(zmm4, 0)
                arg5 = __vandps_xmmdq_xmmdq_xmmdq(temp0_359, zmm3[0].o)
                zmm3[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f660)
                arg5 = __vorps_xmmdq_xmmdq_xmmdq(arg5, zmm3[0].o)
                zmm3[0].o = zx.o(temp0_294)
                zmm3[0].o = __vpblendw_xmmdq_xmmdq_memdq_immb(zmm3[0].o, var_1d8, 0xfc)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zx.o(temp0_295), 0x10)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zx.o(temp0_296), 0x20)
                zmm3[0].o = zx.o(r11_2)
                zmm6 = zx.o(r15_2)
                zmm7 = zx.o(rax_25)
                zmm4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                        __vpblendw_xmmdq_xmmdq_memdq_immb(zmm3[0].o, var_1e8, 0xfc), zmm6, 0x10), 
                    zmm7, 0x20)
                var_1d8 = zmm0[0].o
                var_1e8 = zmm4
                zmm4 = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
                zmm0[0].o = var_198
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm0[0].o, 8)
                zmm4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vshufps_xmmdq_xmmdq_memdq_immb(temp0_299, var_1a8, 0xe0), temp0_299, 0x20)
                zmm3[0].o = __vpblendw_xmmdq_xmmdq_memdq_immb(zmm3[0].o, var_1c8, 0xfc)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm6, 0x10)
                float temp0_376[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm7, 0x20)
                var_198 = zmm0[0].o
                var_1a8 = zmm4
                zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
                zmm0[0].o = var_1b8
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 8)
                var_1b8 = zmm0[0].o
                var_1c8 = temp0_376
                zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_376, zmm0[0].o)
                rcx_11 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 0)
                rdi_4 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
                rdx_7 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
            
            *(arg4 + (r13_2 << 2)) = zmm9
            *(arg7 + (r13_2 << 2)) = zmm1[0].o
            *(arg6 + rbp_2) = r11_2
            *(arg6 + rbp_2 + 4) = r15_2
            *(arg6 + rbp_2 + 8) = rax_25
            *(arg8 + rbp_2) = temp0_294
            *(arg8 + rbp_2 + 4) = temp0_295
            *(arg8 + rbp_2 + 8) = temp0_296
            float (* rbx_7)[0x4]
            int32_t* rsi_3
            
            if (rsi_2.d == 0xffffffff)
                rsi_3 = arg10
                rbx_7 = arg9
            else
                rbx_7 = arg9
                zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm13, rbx_7[rsi_2])
                zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5, zmm1[0].o)
                zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg5, 0x1b), zmm3[0].o)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f7c0)
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0x55)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(arg5, 1), zmm3[0].o)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm11)
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
                zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
                zmm3[0].o = _mm_permute_ps(arg5, 0xb1)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d3f7b0)
                zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
                zmm1[0].o = zmm1[0].o f+ zmm3[0]
                zmm3[0].o = 0x3f000000
                zmm3[0].o = zmm1[0].o f* 0.5f
                zmm4 = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
                zmm4 = zmm4 f+ (zmm4 f* (0x3f000000 - (zmm4 f* zmm4[0].d f* zmm3[0])[0])[0])[0]
                zmm3[0].o = zmm3[0].o f* (zmm4 f* zmm4[0].d)[0]
                zmm1[0].o = _mm_cmp_ss(0x322bcc77, zmm1[0], 6)
                zmm1[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm1[0].o, 0xffffffff)
                zmm3[0].o = 0x3f000000 f- zmm3[0]
                zmm3[0].o = zmm4 f* zmm3[0]
                zmm3[0].o = zmm4 f+ zmm3[0]
                zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
                zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                int64_t rax_29 = rsi_2 * 3
                rsi_3 = arg10
                zmm3[0].o = __vmovsd_xmmdq_memq(*(rsi_3 + (rax_29 << 2)))
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, rsi_3[rax_29 + 2], 0x28)
                zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
                double temp0_415[0x2] = _mm256_rcp_ps(zmm3)
                zmm15 = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_415, zmm3[0].o)
                zmm1[0].o = data_142fc94c0.o
                zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_415, zmm0[0].o)
                zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(
                    __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc9320), data_142fc9340, 6)
                zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                zmm3[0].o = var_138
                zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 8)
                zmm0[0].o = zx.o(rcx_11)
                zmm0[0].o = __vpblendw_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_148, 0xfc)
                zmm1[0].o = zx.o(rdi_4)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
                zmm1[0].o = zx.o(rdx_7)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
                var_138 = zmm3[0].o
                var_148 = zmm0[0].o
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                zmm12 = __vblendps_xmmdq_xmmdq_memdq_immb(zmm0[0].o, data_142d8f750, 8)
            
            *(rbx_7 + (r13_2 << 2)) = arg5
            *(rsi_3 + rbp_2) = rcx_11
            *(rsi_3 + rbp_2 + 4) = rdi_4
            *(rsi_3 + rbp_2 + 8) = rdx_7
            result = arg1
            *(result + (rbp_2 << 2)) = zmm15
            *(result + (rbp_2 << 2) + 0x10) = zmm8
            *(result + (rbp_2 << 2) + 0x20) = zmm12
            r12_2 += 1
            r13_2 += 4
            rbp_2 += 0xc
        while (rax_15 != r12_2)
else if (result.d s> 0)
    uint64_t rax = zx.q(result.d)
    int64_t rbp_1 = 0
    zmm11 = data_142d3f7b0
    zmm12 = 0x3727c5ac
    zmm13 = data_142d3f690
    int64_t rsi_1 = 0
    int64_t r12_1 = 0
    
    do
        int64_t rdi_1 = sx.q(*(arg12 + (rsi_1 << 1)))
        int64_t r13_1 = sx.q(*(arg13 + rsi_1))
        zmm9 = *(arg2 + (rbp_1 << 2))
        zmm6 = *(arg2 + (rbp_1 << 2) + 0x10)
        zmm8 = *(arg2 + (rbp_1 << 2) + 0x20)
        _mm256_zeroupper()
        double (* rax_5)[0x2] = sub_141df0be0(arg3, rdi_1.d, r12_1.d)
        zmm4 = *rax_5
        zmm15 = rax_5[1]
        zmm10 = rax_5[2]
        float var_218_1[0x4] = zmm6
        int32_t rax_10
        int32_t rcx_4
        int32_t r15_1
        
        if (r13_1 == -1)
            arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, arg5)
            zmm1[0].o = __vmovddup_xmmdq_memq(0.0078125055733835325)
            float temp0_54[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm9, 
                _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o), 0x1b))
            zmm3[0].o = data_143442130
            float temp0_57[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
                _mm_permute_pd(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o), 1), temp0_54)
            zmm6 = data_142fc92f0
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xb1)
            zmm14 = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_57)
            float temp0_61[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, arg5)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_61, zmm1[0].o)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x1b)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
                _mm_permute_pd(__vmulps_xmmdq_xmmdq_xmmdq(temp0_61, zmm3[0].o), 1), zmm1[0].o)
            float temp0_69[0x4] = _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_61, zmm6), 0xb1)
            arg5 = data_142e6da00
            zmm3[0].o = var_158
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5, zmm3[0].o, 8)
            float temp0_71[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm8, var_168, 8)
            var_158 = zmm3[0].o
            var_168 = temp0_71
            float temp0_72[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_71)
            r15_1 = __vextractps_gpr32_xmmdq_immb(temp0_72, 0)
            rcx_4 = __vextractps_gpr32_xmmdq_immb(temp0_72, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_69, zmm1[0].o)
            rax_10 = __vextractps_gpr32_xmmdq_immb(temp0_72, 2)
            zmm3[0].o = var_178
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5, zmm3[0].o, 8)
            arg5 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm10, var_188, 8)
            var_178 = zmm3[0].o
            var_188 = arg5
            zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5)
        else
            zmm0[0].o = _mm_broadcast_ss(arg4[r13_1 * 4 + 3])
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, zmm0[0].o)
            zmm1[0].o = _mm_broadcast_ss(arg4[r13_1 * 4])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm9, 0x1b), zmm1[0].o)
            zmm5 = __vmovddup_xmmdq_memq(-0.007812501848093234)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = _mm_broadcast_ss(arg4[r13_1 * 4 + 1])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm9, 1), zmm1[0].o)
            arg5 = data_142d3f7d0
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm1[0].o = _mm_broadcast_ss(arg4[r13_1 * 4 + 2])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm9, 0xb1), zmm1[0].o)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm11)
            zmm14 = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm1[0].o = _mm_broadcast_ss(arg7[r13_1 * 4 + 3])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
            zmm7 = _mm_broadcast_ss(arg7[r13_1 * 4])
            float temp0_24[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0x1b), zmm7), zmm5)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_24)
            float temp0_26[0x4] = _mm_broadcast_ss(arg7[r13_1 * 4 + 1])
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm4, 1), temp0_26), arg5), 
                zmm1[0].o)
            float temp0_31[0x4] = _mm_broadcast_ss(arg7[r13_1 * 4 + 2])
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0xb1), temp0_31), zmm11), 
                zmm1[0].o)
            float (* rax_9)[0x4] = arg6
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vblendps_xmmdq_xmmdq_memdq_immb((*rax_9)[r13_1 * 3], var_128, 0xe), 
                    (*rax_9)[r13_1 * 3 + 1], 0x10), 
                (*rax_9)[r13_1 * 3 + 2], 0x20)
            float temp0_39[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm8, var_118, 8)
            var_118 = temp0_39
            var_128 = zmm3[0].o
            float temp0_40[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_39, zmm3[0].o)
            r15_1 = __vextractps_gpr32_xmmdq_immb(temp0_40, 0)
            rcx_4 = __vextractps_gpr32_xmmdq_immb(temp0_40, 1)
            rax_10 = __vextractps_gpr32_xmmdq_immb(temp0_40, 2)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(
                __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vblendps_xmmdq_xmmdq_memdq_immb((*arg8)[r13_1 * 3], var_108, 0xe), 
                    (*arg8)[r13_1 * 3 + 1], 0x10), 
                (*arg8)[r13_1 * 3 + 2], 0x20)
            arg5 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm10, var_f8, 8)
            var_f8 = arg5
            var_108 = zmm3[0].o
            zmm5 = __vmulps_xmmdq_xmmdq_xmmdq(arg5, zmm3[0].o)
        
        int32_t temp0_80 = __vextractps_gpr32_xmmdq_immb(zmm5, 0)
        int32_t temp0_81 = __vextractps_gpr32_xmmdq_immb(zmm5, 1)
        int32_t temp0_82 = __vextractps_gpr32_xmmdq_immb(zmm5, 2)
        arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
        float temp0_84[0x4] = __vmaxss_xmmdq_xmmdq_memd(arg5, *(arg12 + (rsi_1 << 1) + 4))
        zmm0[0].o = 0x3f800000
        float temp0_85[0x4] = __vminss_xmmdq_xmmdq_xmmd(temp0_84, 1f)
        *(arg11 + (rdi_1 << 2)) = __vmaxss_xmmdq_xmmdq_memd(temp0_85, *(arg11 + (rdi_1 << 2)))[0]
        int32_t rdx_4
        int32_t rdi_2
        int32_t r11_1
        
        if (temp0_85 f<= zmm12[0])
            arg5 = zmm14
            rdx_4 = rax_10
            rdi_2 = rcx_4
            r11_1 = r15_1
            zmm15 = var_218_1
        else if (temp0_85 f>= 0.999989986f)
            zmm8 = zmm10
            zmm9 = zmm4
            arg5 = zmm1[0].o
            rdx_4 = temp0_82
            rdi_2 = temp0_81
            r11_1 = temp0_80
        else
            zmm0[0].o = 0x3f800000
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
            zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, temp0_99)
            zmm3[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(temp0_98, zmm9, zmm3[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm12, 0), zmm3[0].o)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4)
            zmm4 = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm4 = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, _mm_permute_pd(zmm4, 1))
            zmm4 = zmm4 f+ __vmovshdup_xmmdq_xmmdq(zmm4)[0]
            zmm6 = zmm4 f* 0.5f
            float temp0_109[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm4, zmm4[0].d)
            arg5 = temp0_109 f+ (temp0_109
                f* (0x3f000000 f- (zmm6 f* (temp0_109 f* temp0_109[0])[0].d)[0].d)[0].d)[0].d
            float temp0_110[0x4] = _mm_permute_ps(
                arg5 f+ (arg5 f* (0x3f000000 - (zmm6 f* (arg5 f* arg5[0])[0].d)[0])[0])[0], 0)
            float temp0_111[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_110)
            zmm3[0].o = _mm_cmp_ss(0x322bcc77, zmm4[0].d, 6)
            zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, 0xffffffff)
            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0)
            arg5 = __vandps_xmmdq_xmmdq_xmmdq(temp0_111, zmm3[0].o)
            zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, data_142d3f660)
            zmm9 = __vorps_xmmdq_xmmdq_xmmdq(arg5, zmm3[0].o)
            zmm15 = __vaddps_xmmdq_xmmdq_xmmdq(var_218_1, 
                __vmulps_xmmdq_xmmdq_xmmdq(__vsubps_xmmdq_xmmdq_xmmdq(zmm15, var_218_1), temp0_99))
            zmm8 = __vaddps_xmmdq_xmmdq_xmmdq(zmm8, 
                __vmulps_xmmdq_xmmdq_xmmdq(__vsubps_xmmdq_xmmdq_xmmdq(zmm10, zmm8), temp0_99))
            arg5 = zmm14 f* zmm1[0]
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm14)
            zmm4 = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
            zmm3[0].o = zmm3[0].o f* zmm4[0].d
            arg5 = arg5 f+ zmm3[0]
            zmm3[0].o = _mm_permute_pd(zmm14, 1)
            double temp0_127[0x2] = _mm_permute_pd(zmm1[0].o, 1)
            zmm3[0].o = zmm3[0].o f* temp0_127[0].d
            arg5 = zmm3[0].o f+ arg5[0]
            zmm3[0].o = _mm_permute_ps(zmm14, 0xe7)
            zmm4 = _mm_permute_ps(zmm1[0].o, 0xe7)
            zmm3[0].o = zmm3[0].o f* zmm4[0].d
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
            double temp0_138[0x2] = _mm_permute_pd(zmm3[0].o, 1)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_138)
            zmm4 = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
            zmm3[0].o = zmm3[0].o f+ zmm4[0].d
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
            zmm3[0].o = __vpblendw_xmmdq_xmmdq_memdq_immb(zmm3[0].o, var_1d8, 0xfc)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zx.o(temp0_81), 0x10)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zx.o(temp0_82), 0x20)
            zmm3[0].o = zx.o(r15_1)
            zmm6 = zx.o(rcx_4)
            zmm7 = zx.o(rax_10)
            zmm4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vpblendw_xmmdq_xmmdq_memdq_immb(zmm3[0].o, var_1e8, 0xfc), zmm6, 0x10), 
                zmm7, 0x20)
            var_1d8 = zmm0[0].o
            var_1e8 = zmm4
            zmm4 = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
            zmm0[0].o = var_198
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4, zmm0[0].o, 8)
            zmm4 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vshufps_xmmdq_xmmdq_memdq_immb(temp0_85, var_1a8, 0xe0), temp0_85, 0x20)
            zmm3[0].o = __vpblendw_xmmdq_xmmdq_memdq_immb(zmm3[0].o, var_1c8, 0xfc)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm6, 0x10)
            float temp0_162[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm7, 0x20)
            var_198 = zmm0[0].o
            var_1a8 = zmm4
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
            zmm0[0].o = var_1b8
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 8)
            var_1b8 = zmm0[0].o
            var_1c8 = temp0_162
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_162, zmm0[0].o)
            r11_1 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 0)
            rdi_2 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 1)
            rdx_4 = __vextractps_gpr32_xmmdq_immb(zmm3[0].o, 2)
        
        *(arg4 + (rsi_1 << 2)) = zmm14
        *(arg7 + (rsi_1 << 2)) = zmm1[0].o
        *(arg6 + rbp_1) = r15_1
        *(arg6 + rbp_1 + 4) = rcx_4
        *(arg6 + rbp_1 + 8) = rax_10
        int32_t* rax_11 = arg8
        *(rax_11 + rbp_1) = temp0_80
        *(rax_11 + rbp_1 + 4) = temp0_81
        *(rax_11 + rbp_1 + 8) = temp0_82
        int32_t* rcx_5
        float (* rbx_4)[0x4]
        
        if (r13_1.d == 0xffffffff)
            rcx_5 = arg10
            rbx_4 = arg9
        else
            rbx_4 = arg9
            zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm13, rbx_4[r13_1])
            zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5, zmm1[0].o)
            zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(arg5, 0x1b), zmm3[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f7c0)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0x55)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(arg5, 1), zmm3[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f7d0)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
            zmm3[0].o = _mm_permute_ps(arg5, 0xb1)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm11)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
            zmm1[0].o = zmm1[0].o f+ zmm3[0]
            zmm3[0].o = 0x3f000000
            zmm3[0].o = zmm1[0].o f* 0.5f
            zmm4 = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
            zmm4 = zmm4 f+ (zmm4 f* (0x3f000000 - (zmm4 f* zmm4[0].d f* zmm3[0])[0])[0])[0]
            zmm3[0].o = zmm3[0].o f* (zmm4 f* zmm4[0].d)[0]
            zmm1[0].o = _mm_cmp_ss(0x322bcc77, zmm1[0], 6)
            zmm1[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm1[0].o, 0xffffffff)
            zmm3[0].o = 0x3f000000 f- zmm3[0]
            zmm3[0].o = zmm4 f* zmm3[0]
            zmm3[0].o = zmm4 f+ zmm3[0]
            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            int64_t rax_14 = r13_1 * 3
            rcx_5 = arg10
            zmm3[0].o = __vmovsd_xmmdq_memq(*(rcx_5 + (rax_14 << 2)))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, rcx_5[rax_14 + 2], 0x28)
            zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
            double temp0_201[0x2] = _mm256_rcp_ps(zmm3)
            zmm9 = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_201, zmm3[0].o)
            zmm1[0].o = data_142fc94c0.o
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_201, zmm0[0].o)
            zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(
                __vandps_ymmqq_ymmqq_memqq(zmm3, data_142fc9320), data_142fc9340, 6)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm3[0].o = var_138
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 8)
            zmm0[0].o = zx.o(r11_1)
            zmm0[0].o = __vpblendw_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_148, 0xfc)
            zmm1[0].o = zx.o(rdi_2)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
            zmm1[0].o = zx.o(rdx_4)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
            var_138 = zmm3[0].o
            var_148 = zmm0[0].o
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm8 = __vblendps_xmmdq_xmmdq_memdq_immb(zmm0[0].o, data_142d8f750, 8)
        
        *(rbx_4 + (rsi_1 << 2)) = arg5
        *(rcx_5 + rbp_1) = r11_1
        *(rcx_5 + rbp_1 + 4) = rdi_2
        *(rcx_5 + rbp_1 + 8) = rdx_4
        result = arg1
        *(result + (rbp_1 << 2)) = zmm9
        *(result + (rbp_1 << 2) + 0x10) = zmm15
        *(result + (rbp_1 << 2) + 0x20) = zmm8
        r12_1 += 1
        rsi_1 += 4
        rbp_1 += 0xc
    while (rax != r12_1)
_mm256_zeroupper()
return result
