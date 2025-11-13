// 函数: sub_1400ebf70
// 地址: 0x1400ebf70
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
float zmm7[0x4]
float var_d8[0x4] = zmm7
int128_t var_e8 = arg6[0].o
uint64_t result = zx.q(arg15)
float zmm0[0x8] = *arg16
uint32_t var_1e8[0x4]
float var_1d8[0x4]
uint32_t var_1c8[0x4]
int128_t var_1b8
float var_1a8[0x4]
float var_198[0x4]
float var_188[0x4]
int128_t var_178
float var_168[0x4]
int128_t var_158
uint32_t var_148[0x4]
int128_t var_138
float var_128[0x4]
int128_t var_118
float var_108[0x4]
int128_t var_f8
float zmm1[0x8]
float zmm3[0x8]
float zmm4[0x8]
float zmm5[0x4]

if (_mm256_movemask_ps(zmm0) != 0xff)
    if (result.d s> 0)
        uint64_t rax_15 = zx.q(result.d)
        int64_t rbp_2 = 0
        zmm11 = data_142d3f7b0
        zmm14 = data_142d3f690
        int64_t r13_2 = 0
        int64_t r12_2 = 0
        
        do
            int64_t rdi_3 = sx.q(*(arg13 + (r13_2 << 1)))
            int64_t rsi_2 = sx.q(*(arg14 + r13_2))
            zmm15 = *(arg2 + (rbp_2 << 2))
            zmm13 = *(arg2 + (rbp_2 << 2) + 0x10)
            zmm12 = *(arg2 + (rbp_2 << 2) + 0x20)
            _mm256_zeroupper()
            int128_t* rax_20 = sub_141df0be0(arg3, rdi_3.d, r12_2.d)
            zmm4[0].o = *rax_20
            zmm9 = rax_20[1]
            zmm8 = rax_20[2]
            int32_t rax_25
            int32_t r11_2
            int32_t r15_2
            
            if (rsi_2 == -1)
                arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm15, arg5)
                zmm1[0].o = __vpbroadcastq_xmmdq_memq(0x3f800000bf800000)
                float temp0_265[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm15, 
                    _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o), 0x1b))
                zmm3[0].o = data_143442130
                arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                arg6[0].o = _mm_permute_pd(arg6[0].o, 1)
                float temp0_268[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_265)
                arg6[0].o = data_142fc92f0
                zmm7 = arg6[0].o
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
                zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xb1)
                zmm10 = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_268)
                float temp0_272[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5)
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_272, zmm1[0].o)
                zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x1b)
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_272, zmm3[0].o)
                arg6[0].o = _mm_permute_pd(arg6[0].o, 1)
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                float temp0_280[0x4] =
                    _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_272, zmm7), 0xb1)
                arg6[0].o = _mm_broadcast_ss(1f)
                zmm0[0].o = var_158
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm0[0].o, 8)
                float temp0_283[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm12, var_168, 8)
                var_158 = zmm0[0].o
                var_168 = temp0_283
                float temp0_284[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_283)
                r11_2 = __vextractps_gpr32_xmmdq_immb(temp0_284, 0)
                r15_2 = __vextractps_gpr32_xmmdq_immb(temp0_284, 1)
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_280, zmm1[0].o)
                rax_25 = __vextractps_gpr32_xmmdq_immb(temp0_284, 2)
                zmm0[0].o = var_178
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm0[0].o, 8)
                arg5 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm8, var_188, 8)
                var_178 = zmm0[0].o
                var_188 = arg5
            else
                zmm0[0].o = _mm_broadcast_ss(arg4[rsi_2 * 4 + 3])
                zmm1[0].o = _mm_broadcast_ss(arg4[rsi_2 * 4])
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm15, 0x1b), zmm1[0].o)
                zmm5 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5)
                zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm15, zmm0[0].o)
                zmm0[0].o = _mm_broadcast_ss(arg4[rsi_2 * 4 + 1])
                float temp0_228[0x4] =
                    __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm15, 1), zmm0[0].o)
                zmm0[0].o = data_142d3f7d0
                arg5 = zmm0[0].o
                float temp0_229[0x4] = _mm_fmadd_ps(temp0_228, zmm0[0].o, zmm1[0].o)
                zmm0[0].o = _mm_broadcast_ss(arg4[rsi_2 * 4 + 2])
                zmm1[0].o = _mm_permute_ps(zmm15, 0xb1)
                zmm10 =
                    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o), zmm11, temp0_229)
                zmm1[0].o = _mm_broadcast_ss(arg8[rsi_2 * 4 + 3])
                float temp0_235[0x4] = _mm_broadcast_ss(arg8[rsi_2 * 4])
                arg6[0].o = _mm_permute_ps(zmm4[0].o, 0x1b)
                arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_235)
                float temp0_239[0x4] =
                    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5), zmm4[0].o, zmm1[0].o)
                zmm1[0].o = _mm_broadcast_ss(arg8[rsi_2 * 4 + 1])
                arg6[0].o = _mm_permute_pd(zmm4[0].o, 1)
                arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
                arg6[0].o = _mm_fmadd_ps(arg6[0].o, arg5, temp0_239)
                zmm1[0].o = _mm_broadcast_ss(arg8[rsi_2 * 4 + 2])
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4[0].o, 0xb1), zmm1[0].o)
                zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm11, arg6[0].o)
                float temp0_250[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vinsertps_xmmdq_xmmdq_memd_immb(
                        __vblendps_xmmdq_xmmdq_memdq_immb(arg7[rsi_2 * 3], var_108, 0xe), 
                        arg7[rsi_2 * 3 + 1], 0x10), 
                    arg7[rsi_2 * 3 + 2], 0x20)
                zmm0[0].o = var_f8
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm12, zmm0[0].o, 8)
                var_f8 = zmm0[0].o
                var_108 = temp0_250
                float temp0_252[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_250)
                r11_2 = __vextractps_gpr32_xmmdq_immb(temp0_252, 0)
                r15_2 = __vextractps_gpr32_xmmdq_immb(temp0_252, 1)
                rax_25 = __vextractps_gpr32_xmmdq_immb(temp0_252, 2)
                arg5 = __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vinsertps_xmmdq_xmmdq_memd_immb(
                        __vblendps_xmmdq_xmmdq_memdq_immb(arg9[rsi_2 * 3], var_128, 0xe), 
                        arg9[rsi_2 * 3 + 1], 0x10), 
                    arg9[rsi_2 * 3 + 2], 0x20)
                zmm0[0].o = var_118
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm8, zmm0[0].o, 8)
                var_118 = zmm0[0].o
                var_128 = arg5
            
            float temp0_291[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5)
            int32_t temp0_292 = __vextractps_gpr32_xmmdq_immb(temp0_291, 0)
            int32_t temp0_293 = __vextractps_gpr32_xmmdq_immb(temp0_291, 1)
            int32_t temp0_294 = __vextractps_gpr32_xmmdq_immb(temp0_291, 2)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            float temp0_296[0x4] = __vmaxss_xmmdq_xmmdq_memd(zmm0[0].o, *(arg13 + (r13_2 << 1) + 4))
            zmm0[0].o = 0x3f800000
            float temp0_297[0x4] = __vminss_xmmdq_xmmdq_xmmd(temp0_296, 1f)
            arg6[0].o = __vmaxss_xmmdq_xmmdq_memd(temp0_297, *(arg12 + (rdi_3 << 2)))
            *(arg12 + (rdi_3 << 2)) = arg6[0]
            int32_t rcx_11
            int32_t rdx_7
            int32_t rdi_4
            
            if (temp0_297 f<= 9.99999975e-06f)
                arg5 = zmm10
                rdx_7 = rax_25
                rdi_4 = r15_2
                rcx_11 = r11_2
            else if (temp0_297 f>= 0.999989986f)
                zmm12 = zmm8
                zmm13 = zmm9
                zmm15 = zmm4[0].o
                arg5 = zmm1[0].o
                rdx_7 = temp0_294
                rdi_4 = temp0_293
                rcx_11 = temp0_292
            else
                arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm15, zmm4[0].o)
                zmm7 = _mm_permute_pd(arg6[0].o, 1)
                arg6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm7)
                float temp0_302[0x4] = _mm_permute_ps(arg6[0].o, 0x39)
                arg6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_302)
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(0x3f800000, 0x3f800000)
                arg6[0].o = _mm_cmp_ps(zmm0[0].o, arg6[0].o, 2)
                arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
                arg6 = _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 
                    0x1f)
                arg6[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(
                    __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm15), zmm15, arg6[0].o)
                zmm0[0].o = 0x3f800000
                zmm11 = 0x3f800000 - temp0_297[0]
                arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcastss_ps(zmm11), arg6[0].o)
                float temp0_314[0x4] = _mm_broadcastss_ps(temp0_297)
                zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, temp0_314, arg6[0].o)
                arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                zmm3[0].o = _mm_permute_pd(arg6[0].o, 1)
                zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
                arg6[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
                zmm3[0].o = zmm3[0].o f+ arg6[0]
                arg6[0].o = zmm3[0].o f* 0.5f
                float temp0_320[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm3[0].o, zmm3[0])
                zmm0[0].o = temp0_320 f* temp0_320[0]
                zmm0[0].o = _mm_fnmadd_ss(zmm0[0].o, arg6[0], 0.5f)
                zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, temp0_320[0], temp0_320[0])
                zmm0[0].o = _mm_broadcastss_ps(_mm_fmadd_ss(
                    _mm_fnmadd_ss(zmm0[0].o f* zmm0[0], arg6[0], 0.5f), zmm0[0], zmm0[0]))
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                zmm4[0].o = 0x322bcc77
                float temp0_327[0x4] = _mm_cmp_ss(0x322bcc77, zmm3[0], 6)
                arg6[0].o = 0xffffffff
                float temp0_329[0x4] =
                    _mm_broadcastss_ps(__vandnps_xmmdq_xmmdq_xmmdq(temp0_327, 0xffffffff))
                zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_329)
                zmm3[0].o = data_142d3f660
                arg5 = __vandnps_xmmdq_xmmdq_xmmdq(temp0_329, zmm3[0].o)
                zmm15 = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5)
                zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm9, zmm13)
                zmm13 = _mm_fmadd_ps(zmm13, temp0_314, zmm0[0].o)
                zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm8, zmm12)
                zmm12 = _mm_fmadd_ps(zmm12, temp0_314, zmm0[0].o)
                zmm0[0].o = __vmovshdup_xmmdq_xmmdq(zmm10)
                float temp0_338[0x4] = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
                zmm0[0].o = zmm0[0].o f* temp0_338[0]
                zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm10[0], zmm1[0])
                arg5 = _mm_permute_pd(zmm10, 1)
                zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
                zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, arg5[0], zmm0[0])
                zmm0[0].o = _mm_permute_ps(zmm10, 0xe7)
                float temp0_345[0x4] =
                    _mm_fmadd_ss(_mm_permute_ps(zmm1[0].o, 0xe7), zmm0[0], zmm3[0])
                zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm0[0].o = _mm_cmp_ss(zmm0[0].o, temp0_345[0], 2)
                zmm3[0].o = 0x3f800000
                zmm0[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm0[0].o)
                zmm0[0].o = zmm0[0].o f* zmm11[0]
                zmm11 = data_142d3f7b0
                zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm10, zmm0[0].o)
                zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm1[0].o, temp0_314)
                float temp0_352[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm3[0].o = _mm_permute_pd(temp0_352, 1)
                float temp0_354[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_352, zmm3[0].o)
                zmm3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_354)
                arg5 = temp0_354 f+ zmm3[0]
                zmm3[0].o = _mm_cmp_ss(0x322bcc77, arg5[0], 6)
                zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, 0xffffffff)
                zmm4[0].o = arg5 f* 0.5f
                float temp0_358[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5, arg5[0])
                arg6[0].o = temp0_358 f* temp0_358[0]
                arg6[0].o = _mm_fnmadd_ss(arg6[0].o, zmm4[0], 0.5f)
                arg6[0].o = _mm_fmadd_ss(arg6[0].o, temp0_358[0], temp0_358[0])
                float temp0_361[0x4] = _mm_fnmadd_ss(arg6[0].o f* arg6[0], zmm4[0], 0.5f)
                zmm14 = data_142d3f690
                float temp0_363[0x4] = _mm_broadcastss_ps(_mm_fmadd_ss(temp0_361, arg6[0], arg6[0]))
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_363)
                float temp0_365[0x4] = _mm_broadcastss_ps(zmm3[0].o)
                zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_365)
                arg5 = __vandnps_xmmdq_xmmdq_memdq(temp0_365, data_142d3f660)
                arg5 = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5)
                zmm0[0].o = zx.o(temp0_292)
                zmm0[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1d8, 0xe)
                zmm3[0].o = zx.o(temp0_293)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x10)
                zmm3[0].o = zx.o(temp0_294)
                float temp0_371[0x4] =
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x20)
                zmm0[0].o = zx.o(r11_2)
                zmm3[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1e8, 0xe)
                zmm4[0].o = zx.o(r15_2)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
                arg6[0].o = zx.o(rax_25)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg6[0].o, 0x20)
                var_1d8 = temp0_371
                var_1e8 = zmm3[0].o
                zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_371, zmm3[0].o)
                float temp0_376[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, var_198, 8)
                zmm3[0].o = __vshufps_xmmdq_xmmdq_memdq_immb(temp0_297, var_1a8, 0xe0)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, temp0_297, 0x20)
                zmm0[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1c8, 0xe)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 0x10)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg6[0].o, 0x20)
                var_198 = temp0_376
                var_1a8 = zmm3[0].o
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_376, zmm3[0].o)
                zmm3[0].o = var_1b8
                zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 8)
                var_1b8 = zmm3[0].o
                var_1c8 = zmm4[0].o
                zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                rcx_11 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0)
                rdi_4 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
                rdx_7 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
            
            *(arg4 + (r13_2 << 2)) = zmm10
            *(arg8 + (r13_2 << 2)) = zmm1[0].o
            *(arg7 + rbp_2) = r11_2
            *(arg7 + rbp_2 + 4) = r15_2
            *(arg7 + rbp_2 + 8) = rax_25
            *(arg9 + rbp_2) = temp0_292
            *(arg9 + rbp_2 + 4) = temp0_293
            *(arg9 + rbp_2 + 8) = temp0_294
            float (* rbx_7)[0x4]
            int32_t* rsi_3
            
            if (rsi_2.d == 0xffffffff)
                rsi_3 = arg11
                rbx_7 = arg10
            else
                rbx_7 = arg10
                zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm14, rbx_7[rsi_2])
                zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
                zmm3[0].o = _mm_broadcastss_ps(zmm0[0].o)
                zmm4[0].o = _mm_permute_ps(arg5, 0x1b)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f7c0)
                zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, arg5, zmm1[0].o)
                zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0x55)
                zmm4[0].o = _mm_permute_pd(arg5, 1)
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
                zmm1[0].o = __vfmadd132ps_xmmdq_xmmdq_memdq(zmm1[0].o, zmm3[0].o, data_142d3f7d0)
                zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
                zmm3[0].o = _mm_permute_ps(arg5, 0xb1)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm1[0].o, zmm11)
                zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
                zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
                zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
                zmm1[0].o = zmm1[0].o f+ zmm3[0]
                zmm3[0].o = 0x322bcc77
                arg6[0].o = 0x322bcc77
                zmm3[0].o = _mm_cmp_ss(0x322bcc77, zmm1[0], 6)
                zmm4[0].o = 0xffffffff
                zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, 0xffffffff)
                zmm4[0].o = 0x3f000000
                zmm4[0].o = zmm1[0].o f* 0.5f
                zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
                float temp0_411[0x4] = _mm_fmadd_ss(
                    _mm_fnmadd_ss(zmm1[0].o f* zmm1[0], zmm4[0], 0.5f), zmm1[0], zmm1[0])
                zmm1[0].o = temp0_411 f* temp0_411[0]
                zmm1[0].o = _mm_fnmadd_ss(zmm1[0].o, zmm4[0], 0.5f)
                zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, temp0_411[0], temp0_411[0])
                zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = _mm_broadcastss_ps(zmm3[0].o)
                zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
                zmm15 = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
                int64_t rax_29 = rsi_2 * 3
                rsi_3 = arg11
                zmm0[0].o = __vmovsd_xmmdq_memq(*(rsi_3 + (rax_29 << 2)))
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, rsi_3[rax_29 + 2], 0x28)
                zmm1 = _mm256_cmp_ps(_mm256_and_ps(zmm0, _mm256_broadcast_ss(nanf)), 
                    _mm256_broadcastss_ps(0x322bcc77), 6)
                zmm3 = _mm256_rcp_ps(zmm0)
                zmm4 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), zmm3, zmm0)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
                zmm3[0].o = var_138
                zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 8)
                zmm0[0].o = zx.o(rcx_11)
                zmm0[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_148, 0xe)
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
            *(result + (rbp_2 << 2) + 0x10) = zmm13
            *(result + (rbp_2 << 2) + 0x20) = zmm12
            r12_2 += 1
            r13_2 += 4
            rbp_2 += 0xc
        while (rax_15 != r12_2)
else if (result.d s> 0)
    uint64_t rax = zx.q(result.d)
    int64_t rbp_1 = 0
    zmm11 = data_142d3f7b0
    zmm8 = data_142d3f690
    int64_t rsi_1 = 0
    int64_t r12_1 = 0
    
    do
        int64_t rdi_1 = sx.q(*(arg13 + (rsi_1 << 1)))
        int64_t r13_1 = sx.q(*(arg14 + rsi_1))
        zmm13 = *(arg2 + (rbp_1 << 2))
        zmm14 = *(arg2 + (rbp_1 << 2) + 0x10)
        zmm9 = *(arg2 + (rbp_1 << 2) + 0x20)
        _mm256_zeroupper()
        int128_t* rax_5 = sub_141df0be0(arg3, rdi_1.d, r12_1.d)
        zmm4[0].o = *rax_5
        zmm12 = rax_5[1]
        zmm15 = rax_5[2]
        int32_t rax_10
        int32_t rcx_4
        int32_t r15_1
        
        if (r13_1 == -1)
            arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm13, arg5)
            zmm1[0].o = __vpbroadcastq_xmmdq_memq(0x3f800000bf800000)
            float temp0_47[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm13, 
                _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o), 0x1b))
            zmm3[0].o = data_143442130
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            arg6[0].o = _mm_permute_pd(arg6[0].o, 1)
            float temp0_50[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_47)
            arg6[0].o = data_142fc92f0
            zmm7 = arg6[0].o
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg6[0].o)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xb1)
            zmm10 = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_50)
            float temp0_54[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_54, zmm1[0].o)
            zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x1b)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_54, zmm3[0].o)
            arg6[0].o = _mm_permute_pd(arg6[0].o, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            float temp0_62[0x4] = _mm_permute_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_54, zmm7), 0xb1)
            arg6[0].o = _mm_broadcast_ss(1f)
            zmm0[0].o = var_158
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm0[0].o, 8)
            float temp0_65[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm9, var_168, 8)
            var_158 = zmm0[0].o
            var_168 = temp0_65
            float temp0_66[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_65)
            r15_1 = __vextractps_gpr32_xmmdq_immb(temp0_66, 0)
            rcx_4 = __vextractps_gpr32_xmmdq_immb(temp0_66, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_62, zmm1[0].o)
            rax_10 = __vextractps_gpr32_xmmdq_immb(temp0_66, 2)
            zmm0[0].o = var_178
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm0[0].o, 8)
            arg5 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm15, var_188, 8)
            var_178 = zmm0[0].o
            var_188 = arg5
        else
            zmm0[0].o = _mm_broadcast_ss(arg4[r13_1 * 4 + 3])
            zmm1[0].o = _mm_broadcast_ss(arg4[r13_1 * 4])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm13, 0x1b), zmm1[0].o)
            zmm5 = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5)
            zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm13, zmm0[0].o)
            zmm0[0].o = _mm_broadcast_ss(arg4[r13_1 * 4 + 1])
            float temp0_10[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm13, 1), zmm0[0].o)
            zmm0[0].o = data_142d3f7d0
            arg5 = zmm0[0].o
            float temp0_11[0x4] = _mm_fmadd_ps(temp0_10, zmm0[0].o, zmm1[0].o)
            zmm0[0].o = _mm_broadcast_ss(arg4[r13_1 * 4 + 2])
            zmm1[0].o = _mm_permute_ps(zmm13, 0xb1)
            zmm10 = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o), zmm11, temp0_11)
            zmm1[0].o = _mm_broadcast_ss(arg8[r13_1 * 4 + 3])
            float temp0_17[0x4] = _mm_broadcast_ss(arg8[r13_1 * 4])
            arg6[0].o = _mm_permute_ps(zmm4[0].o, 0x1b)
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_17)
            float temp0_21[0x4] =
                _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5), zmm4[0].o, zmm1[0].o)
            zmm1[0].o = _mm_broadcast_ss(arg8[r13_1 * 4 + 1])
            arg6[0].o = _mm_permute_pd(zmm4[0].o, 1)
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            arg6[0].o = _mm_fmadd_ps(arg6[0].o, arg5, temp0_21)
            zmm1[0].o = _mm_broadcast_ss(arg8[r13_1 * 4 + 2])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4[0].o, 0xb1), zmm1[0].o)
            zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm11, arg6[0].o)
            float (* rax_9)[0x4] = arg7
            float temp0_32[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(
                __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vblendps_xmmdq_xmmdq_memdq_immb((*rax_9)[r13_1 * 3], var_128, 0xe), 
                    (*rax_9)[r13_1 * 3 + 1], 0x10), 
                (*rax_9)[r13_1 * 3 + 2], 0x20)
            zmm0[0].o = var_118
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm9, zmm0[0].o, 8)
            var_118 = zmm0[0].o
            var_128 = temp0_32
            float temp0_34[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_32)
            r15_1 = __vextractps_gpr32_xmmdq_immb(temp0_34, 0)
            rcx_4 = __vextractps_gpr32_xmmdq_immb(temp0_34, 1)
            rax_10 = __vextractps_gpr32_xmmdq_immb(temp0_34, 2)
            float (* rbx_1)[0x4] = arg9
            arg5 = __vinsertps_xmmdq_xmmdq_memd_immb(
                __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vblendps_xmmdq_xmmdq_memdq_immb((*rbx_1)[r13_1 * 3], var_108, 0xe), 
                    (*rbx_1)[r13_1 * 3 + 1], 0x10), 
                (*rbx_1)[r13_1 * 3 + 2], 0x20)
            zmm0[0].o = var_f8
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm15, zmm0[0].o, 8)
            var_f8 = zmm0[0].o
            var_108 = arg5
        
        float temp0_73[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5)
        int32_t temp0_74 = __vextractps_gpr32_xmmdq_immb(temp0_73, 0)
        int32_t temp0_75 = __vextractps_gpr32_xmmdq_immb(temp0_73, 1)
        int32_t temp0_76 = __vextractps_gpr32_xmmdq_immb(temp0_73, 2)
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        float temp0_78[0x4] = __vmaxss_xmmdq_xmmdq_memd(zmm0[0].o, *(arg13 + (rsi_1 << 1) + 4))
        zmm0[0].o = 0x3f800000
        float temp0_79[0x4] = __vminss_xmmdq_xmmdq_xmmd(temp0_78, 1f)
        arg6[0].o = __vmaxss_xmmdq_xmmdq_memd(temp0_79, *(arg12 + (rdi_1 << 2)))
        *(arg12 + (rdi_1 << 2)) = arg6[0]
        int32_t rdx_4
        int32_t rdi_2
        int32_t r11_1
        
        if (temp0_79 f<= 9.99999975e-06f)
            arg5 = zmm10
            rdx_4 = rax_10
            rdi_2 = rcx_4
            r11_1 = r15_1
            zmm12 = zmm14
        else if (temp0_79 f>= 0.999989986f)
            zmm9 = zmm15
            zmm13 = zmm4[0].o
            arg5 = zmm1[0].o
            rdx_4 = temp0_76
            rdi_2 = temp0_75
            r11_1 = temp0_74
        else
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm13, zmm4[0].o)
            zmm7 = _mm_permute_pd(arg6[0].o, 1)
            arg6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm7)
            float temp0_84[0x4] = _mm_permute_ps(arg6[0].o, 0x39)
            arg6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_84)
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(0x3f800000, 0x3f800000)
            arg6[0].o = _mm_cmp_ps(zmm0[0].o, arg6[0].o, 2)
            arg6[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm0[0].o)
            arg6 =
                _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(arg6[0].o), 0x1f), 0x1f)
            arg6[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(
                __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm13), zmm13, arg6[0].o)
            zmm0[0].o = 0x3f800000
            zmm11 = 0x3f800000 - temp0_79[0]
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcastss_ps(zmm11), arg6[0].o)
            float temp0_96[0x4] = _mm_broadcastss_ps(temp0_79)
            zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, temp0_96, arg6[0].o)
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            zmm3[0].o = _mm_permute_pd(arg6[0].o, 1)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm3[0].o)
            arg6[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
            zmm3[0].o = zmm3[0].o f+ arg6[0]
            arg6[0].o = zmm3[0].o f* 0.5f
            float temp0_102[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm3[0].o, zmm3[0])
            zmm0[0].o = temp0_102 f* temp0_102[0]
            zmm0[0].o = _mm_fnmadd_ss(zmm0[0].o, arg6[0], 0.5f)
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, temp0_102[0], temp0_102[0])
            zmm0[0].o = _mm_broadcastss_ps(_mm_fmadd_ss(
                _mm_fnmadd_ss(zmm0[0].o f* zmm0[0], arg6[0], 0.5f), zmm0[0], zmm0[0]))
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm4[0].o = 0x322bcc77
            float temp0_109[0x4] = _mm_cmp_ss(0x322bcc77, zmm3[0], 6)
            arg6[0].o = 0xffffffff
            float temp0_111[0x4] =
                _mm_broadcastss_ps(__vandnps_xmmdq_xmmdq_xmmdq(temp0_109, 0xffffffff))
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_111)
            zmm3[0].o = data_142d3f660
            arg5 = __vandnps_xmmdq_xmmdq_xmmdq(temp0_111, zmm3[0].o)
            zmm13 = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm12, zmm14)
            zmm12 = _mm_fmadd_ps(zmm14, temp0_96, zmm0[0].o)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm15, zmm9)
            zmm9 = _mm_fmadd_ps(zmm9, temp0_96, zmm0[0].o)
            zmm0[0].o = __vmovshdup_xmmdq_xmmdq(zmm10)
            float temp0_120[0x4] = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
            zmm0[0].o = zmm0[0].o f* temp0_120[0]
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm10[0], zmm1[0])
            arg5 = _mm_permute_pd(zmm10, 1)
            zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
            zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, arg5[0], zmm0[0])
            zmm0[0].o = _mm_permute_ps(zmm10, 0xe7)
            float temp0_127[0x4] = _mm_fmadd_ss(_mm_permute_ps(zmm1[0].o, 0xe7), zmm0[0], zmm3[0])
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0[0].o = _mm_cmp_ss(zmm0[0].o, temp0_127[0], 2)
            zmm3[0].o = 0x3f800000
            zmm0[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm0[0].o)
            zmm0[0].o = zmm0[0].o f* zmm11[0]
            zmm11 = data_142d3f7b0
            zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm10, zmm0[0].o)
            zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm1[0].o, temp0_96)
            float temp0_134[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm3[0].o = _mm_permute_pd(temp0_134, 1)
            float temp0_136[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_134, zmm3[0].o)
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(temp0_136)
            arg5 = temp0_136 f+ zmm3[0]
            zmm3[0].o = _mm_cmp_ss(0x322bcc77, arg5[0], 6)
            zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, 0xffffffff)
            zmm4[0].o = arg5 f* 0.5f
            float temp0_140[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5, arg5[0])
            arg6[0].o = temp0_140 f* temp0_140[0]
            arg6[0].o = _mm_fnmadd_ss(arg6[0].o, zmm4[0], 0.5f)
            arg6[0].o = _mm_fmadd_ss(arg6[0].o, temp0_140[0], temp0_140[0])
            float temp0_143[0x4] = _mm_fnmadd_ss(arg6[0].o f* arg6[0], zmm4[0], 0.5f)
            zmm8 = data_142d3f690
            float temp0_145[0x4] = _mm_broadcastss_ps(_mm_fmadd_ss(temp0_143, arg6[0], arg6[0]))
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_145)
            float temp0_147[0x4] = _mm_broadcastss_ps(zmm3[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_147)
            arg5 = __vandnps_xmmdq_xmmdq_memdq(temp0_147, data_142d3f660)
            arg5 = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5)
            zmm0[0].o = zx.o(temp0_74)
            zmm0[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1d8, 0xe)
            zmm3[0].o = zx.o(temp0_75)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x10)
            zmm3[0].o = zx.o(temp0_76)
            float temp0_153[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x20)
            zmm0[0].o = zx.o(r15_1)
            zmm3[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1e8, 0xe)
            zmm4[0].o = zx.o(rcx_4)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
            arg6[0].o = zx.o(rax_10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg6[0].o, 0x20)
            var_1d8 = temp0_153
            var_1e8 = zmm3[0].o
            zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_153, zmm3[0].o)
            float temp0_158[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, var_198, 8)
            zmm3[0].o = __vshufps_xmmdq_xmmdq_memdq_immb(temp0_79, var_1a8, 0xe0)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, temp0_79, 0x20)
            zmm0[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1c8, 0xe)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 0x10)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg6[0].o, 0x20)
            var_198 = temp0_158
            var_1a8 = zmm3[0].o
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_158, zmm3[0].o)
            zmm3[0].o = var_1b8
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 8)
            var_1b8 = zmm3[0].o
            var_1c8 = zmm4[0].o
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
            r11_1 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0)
            rdi_2 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
            rdx_4 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
        
        *(arg4 + (rsi_1 << 2)) = zmm10
        *(arg8 + (rsi_1 << 2)) = zmm1[0].o
        *(arg7 + rbp_1) = r15_1
        *(arg7 + rbp_1 + 4) = rcx_4
        *(arg7 + rbp_1 + 8) = rax_10
        *(arg9 + rbp_1) = temp0_74
        *(arg9 + rbp_1 + 4) = temp0_75
        *(arg9 + rbp_1 + 8) = temp0_76
        int32_t* rcx_5
        float (* rbx_4)[0x4]
        
        if (r13_1.d == 0xffffffff)
            rcx_5 = arg11
            rbx_4 = arg10
        else
            rbx_4 = arg10
            zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm8, rbx_4[r13_1])
            zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
            zmm3[0].o = _mm_broadcastss_ps(zmm0[0].o)
            zmm4[0].o = _mm_permute_ps(arg5, 0x1b)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f7c0)
            zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, arg5, zmm1[0].o)
            zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0x55)
            zmm4[0].o = _mm_permute_pd(arg5, 1)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
            zmm1[0].o = __vfmadd132ps_xmmdq_xmmdq_memdq(zmm1[0].o, zmm3[0].o, data_142d3f7d0)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
            zmm3[0].o = _mm_permute_ps(arg5, 0xb1)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
            zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm1[0].o, zmm11)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
            zmm1[0].o = zmm1[0].o f+ zmm3[0]
            zmm3[0].o = 0x322bcc77
            arg6[0].o = 0x322bcc77
            zmm3[0].o = _mm_cmp_ss(0x322bcc77, zmm1[0], 6)
            zmm4[0].o = 0xffffffff
            zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, 0xffffffff)
            zmm4[0].o = 0x3f000000
            zmm4[0].o = zmm1[0].o f* 0.5f
            zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
            float temp0_193[0x4] =
                _mm_fmadd_ss(_mm_fnmadd_ss(zmm1[0].o f* zmm1[0], zmm4[0], 0.5f), zmm1[0], zmm1[0])
            zmm1[0].o = temp0_193 f* temp0_193[0]
            zmm1[0].o = _mm_fnmadd_ss(zmm1[0].o, zmm4[0], 0.5f)
            zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, temp0_193[0], temp0_193[0])
            zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = _mm_broadcastss_ps(zmm3[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
            zmm13 = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
            int64_t rax_14 = r13_1 * 3
            rcx_5 = arg11
            zmm0[0].o = __vmovsd_xmmdq_memq(*(rcx_5 + (rax_14 << 2)))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, rcx_5[rax_14 + 2], 0x28)
            zmm1 = _mm256_cmp_ps(_mm256_and_ps(zmm0, _mm256_broadcast_ss(nanf)), 
                _mm256_broadcastss_ps(0x322bcc77), 6)
            zmm3 = _mm256_rcp_ps(zmm0)
            zmm4 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), zmm3, zmm0)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm3[0].o = var_138
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 8)
            zmm0[0].o = zx.o(r11_1)
            zmm0[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_148, 0xe)
            zmm1[0].o = zx.o(rdi_2)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
            zmm1[0].o = zx.o(rdx_4)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
            var_138 = zmm3[0].o
            var_148 = zmm0[0].o
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm9 = __vblendps_xmmdq_xmmdq_memdq_immb(zmm0[0].o, data_142d8f750, 8)
        
        *(rbx_4 + (rsi_1 << 2)) = arg5
        *(rcx_5 + rbp_1) = r11_1
        *(rcx_5 + rbp_1 + 4) = rdi_2
        *(rcx_5 + rbp_1 + 8) = rdx_4
        result = arg1
        *(result + (rbp_1 << 2)) = zmm13
        *(result + (rbp_1 << 2) + 0x10) = zmm12
        *(result + (rbp_1 << 2) + 0x20) = zmm9
        r12_1 += 1
        rsi_1 += 4
        rbp_1 += 0xc
    while (rax != r12_1)
arg6[0].o = var_e8
_mm256_zeroupper()
return result
