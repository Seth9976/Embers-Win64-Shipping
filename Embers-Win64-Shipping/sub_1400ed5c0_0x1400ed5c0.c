// 函数: sub_1400ed5c0
// 地址: 0x1400ed5c0
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
int128_t var_e8 = arg6[0].o
uint64_t result = zx.q(arg15)

if (result.d s> 0)
    uint64_t rax = zx.q(result.d)
    int64_t rbp_1 = 0
    zmm11 = data_142d3f7b0
    zmm12 = data_142d3f690
    int64_t r13_1 = 0
    int64_t r12_1 = 0
    
    do
        int64_t rdi_1 = sx.q(*(arg13 + (r13_1 << 1)))
        int64_t r14_1 = sx.q(*(arg14 + r13_1))
        zmm13 = *(arg2 + (rbp_1 << 2))
        zmm8 = *(arg2 + (rbp_1 << 2) + 0x10)
        zmm9 = *(arg2 + (rbp_1 << 2) + 0x20)
        _mm256_zeroupper()
        int128_t* rax_5 = sub_141df0be0(arg3, rdi_1.d, r12_1.d)
        float zmm4[0x8]
        zmm4[0].o = *rax_5
        zmm14 = rax_5[1]
        zmm15 = rax_5[2]
        int32_t rax_10
        int32_t rsi_1
        int32_t r11_1
        int32_t zmm0[0x8]
        int32_t zmm1[0x8]
        float zmm3[0x8]
        
        if (r14_1 == -1)
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
            int128_t var_158
            zmm0[0].o = var_158
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm0[0].o, 8)
            float var_168[0x4]
            float temp0_65[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm9, var_168, 8)
            var_158 = zmm0[0].o
            var_168 = temp0_65
            zmm7 = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_65)
            r11_1 = __vextractps_gpr32_xmmdq_immb(zmm7, 0)
            rax_10 = __vextractps_gpr32_xmmdq_immb(zmm7, 1)
            zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_62, zmm1[0].o)
            rsi_1 = __vextractps_gpr32_xmmdq_immb(zmm7, 2)
            int128_t var_178
            zmm0[0].o = var_178
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm0[0].o, 8)
            float var_188[0x4]
            arg5 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm15, var_188, 8)
            var_178 = zmm0[0].o
            var_188 = arg5
        else
            zmm0[0].o = _mm_broadcast_ss(arg4[r14_1 * 4 + 3])
            zmm1[0].o = _mm_broadcast_ss(arg4[r14_1 * 4])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm13, 0x1b), zmm1[0].o)
            float zmm5[0x4] = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5)
            zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm13, zmm0[0].o)
            zmm0[0].o = _mm_broadcast_ss(arg4[r14_1 * 4 + 1])
            zmm7 = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm13, 1), zmm0[0].o)
            zmm0[0].o = data_142d3f7d0
            arg5 = zmm0[0].o
            zmm7 = _mm_fmadd_ps(zmm7, zmm0[0].o, zmm1[0].o)
            zmm0[0].o = _mm_broadcast_ss(arg4[r14_1 * 4 + 2])
            zmm1[0].o = _mm_permute_ps(zmm13, 0xb1)
            zmm10 = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o), zmm11, zmm7)
            zmm1[0].o = _mm_broadcast_ss(arg8[r14_1 * 4 + 3])
            zmm7 = _mm_broadcast_ss(arg8[r14_1 * 4])
            arg6[0].o = _mm_permute_ps(zmm4[0].o, 0x1b)
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm7)
            float temp0_21[0x4] =
                _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm5), zmm4[0].o, zmm1[0].o)
            zmm1[0].o = _mm_broadcast_ss(arg8[r14_1 * 4 + 1])
            arg6[0].o = _mm_permute_pd(zmm4[0].o, 1)
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm1[0].o)
            arg6[0].o = _mm_fmadd_ps(arg6[0].o, arg5, temp0_21)
            zmm1[0].o = _mm_broadcast_ss(arg8[r14_1 * 4 + 2])
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4[0].o, 0xb1), zmm1[0].o)
            zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm11, arg6[0].o)
            float (* rax_9)[0x4] = arg7
            float var_128[0x4]
            float temp0_32[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(
                __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vblendps_xmmdq_xmmdq_memdq_immb((*rax_9)[r14_1 * 3], var_128, 0xe), 
                    (*rax_9)[r14_1 * 3 + 1], 0x10), 
                (*rax_9)[r14_1 * 3 + 2], 0x20)
            int128_t var_118
            zmm0[0].o = var_118
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm9, zmm0[0].o, 8)
            var_118 = zmm0[0].o
            var_128 = temp0_32
            float temp0_34[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_32)
            r11_1 = __vextractps_gpr32_xmmdq_immb(temp0_34, 0)
            rax_10 = __vextractps_gpr32_xmmdq_immb(temp0_34, 1)
            rsi_1 = __vextractps_gpr32_xmmdq_immb(temp0_34, 2)
            float var_108[0x4]
            arg5 = __vinsertps_xmmdq_xmmdq_memd_immb(
                __vinsertps_xmmdq_xmmdq_memd_immb(
                    __vblendps_xmmdq_xmmdq_memdq_immb((*arg9)[r14_1 * 3], var_108, 0xe), 
                    (*arg9)[r14_1 * 3 + 1], 0x10), 
                (*arg9)[r14_1 * 3 + 2], 0x20)
            int128_t var_f8
            zmm0[0].o = var_f8
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm15, zmm0[0].o, 8)
            var_f8 = zmm0[0].o
            var_108 = arg5
        
        float temp0_73[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5)
        int32_t temp0_74 = __vextractps_gpr32_xmmdq_immb(temp0_73, 0)
        int32_t temp0_75 = __vextractps_gpr32_xmmdq_immb(temp0_73, 1)
        int32_t temp0_76 = __vextractps_gpr32_xmmdq_immb(temp0_73, 2)
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        float temp0_78[0x4] = __vmaxss_xmmdq_xmmdq_memd(zmm0[0].o, *(arg13 + (r13_1 << 1) + 4))
        zmm0[0].o = 0x3f800000
        float temp0_79[0x4] = __vminss_xmmdq_xmmdq_xmmd(temp0_78, 1f)
        arg6[0].o = __vmaxss_xmmdq_xmmdq_memd(temp0_79, *(arg12 + (rdi_1 << 2)))
        *(arg12 + (rdi_1 << 2)) = arg6[0]
        int32_t rcx_5
        int32_t rdx_2
        int32_t rdi_2
        
        if (temp0_79 f<= 9.99999975e-06f)
            arg5 = zmm10
            rdx_2 = rsi_1
            rcx_5 = rax_10
            rdi_2 = r11_1
        else if (temp0_79 f>= 0.999989986f)
            zmm9 = zmm15
            zmm8 = zmm14
            zmm13 = zmm4[0].o
            arg5 = zmm1[0].o
            rdx_2 = temp0_76
            rcx_5 = temp0_75
            rdi_2 = temp0_74
        else
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm13, zmm4[0].o)
            double temp0_82[0x2] = _mm_permute_pd(arg6[0].o, 1)
            arg6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, temp0_82)
            zmm7 = _mm_permute_ps(arg6[0].o, 0x39)
            arg6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, zmm7)
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
            zmm7 = _mm_broadcastss_ps(temp0_79)
            zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm7, arg6[0].o)
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
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm14, zmm8)
            zmm8 = _mm_fmadd_ps(zmm8, zmm7, zmm0[0].o)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm15, zmm9)
            zmm9 = _mm_fmadd_ps(zmm9, zmm7, zmm0[0].o)
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
            zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm1[0].o, zmm7)
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
            zmm12 = data_142d3f690
            float temp0_145[0x4] = _mm_broadcastss_ps(_mm_fmadd_ss(temp0_143, arg6[0], arg6[0]))
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_145)
            float temp0_147[0x4] = _mm_broadcastss_ps(zmm3[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_147)
            arg5 = __vandnps_xmmdq_xmmdq_memdq(temp0_147, data_142d3f660)
            arg5 = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5)
            zmm0[0].o = zx.o(temp0_74)
            uint32_t var_1d8[0x4]
            zmm0[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1d8, 0xe)
            zmm3[0].o = zx.o(temp0_75)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x10)
            zmm3[0].o = zx.o(temp0_76)
            zmm7 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x20)
            zmm0[0].o = zx.o(r11_1)
            uint32_t var_1e8[0x4]
            zmm3[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1e8, 0xe)
            zmm4[0].o = zx.o(rax_10)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
            arg6[0].o = zx.o(rsi_1)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg6[0].o, 0x20)
            var_1d8 = zmm7
            var_1e8 = zmm3[0].o
            zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm7, zmm3[0].o)
            double var_198[0x2]
            zmm7 = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, var_198, 8)
            float var_1a8[0x4]
            zmm3[0].o = __vshufps_xmmdq_xmmdq_memdq_immb(temp0_79, var_1a8, 0xe0)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, temp0_79, 0x20)
            uint32_t var_1c8[0x4]
            zmm0[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_1c8, 0xe)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 0x10)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg6[0].o, 0x20)
            var_198 = zmm7
            var_1a8 = zmm3[0].o
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7, zmm3[0].o)
            int128_t var_1b8
            zmm3[0].o = var_1b8
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 8)
            var_1b8 = zmm3[0].o
            var_1c8 = zmm4[0].o
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
            rdi_2 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0)
            rcx_5 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
            rdx_2 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
        
        *(arg4 + (r13_1 << 2)) = zmm10
        *(arg8 + (r13_1 << 2)) = zmm1[0].o
        *(arg7 + rbp_1) = r11_1
        *(arg7 + rbp_1 + 4) = rax_10
        *(arg7 + rbp_1 + 8) = rsi_1
        *(arg9 + rbp_1) = temp0_74
        *(arg9 + rbp_1 + 4) = temp0_75
        *(arg9 + rbp_1 + 8) = temp0_76
        float (* rbx_3)[0x4]
        int32_t* rsi_2
        
        if (r14_1.d == 0xffffffff)
            rsi_2 = arg11
            rbx_3 = arg10
        else
            rbx_3 = arg10
            zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm12, rbx_3[r14_1])
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
            int64_t rax_14 = r14_1 * 3
            rsi_2 = arg11
            zmm0[0].o = __vmovsd_xmmdq_memq(*(rsi_2 + (rax_14 << 2)))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, rsi_2[rax_14 + 2], 0x28)
            zmm1 = _mm256_cmp_ps(_mm256_and_ps(zmm0, _mm256_broadcast_ss(nanf)), 
                _mm256_broadcastss_ps(0x322bcc77), 6)
            zmm3 = _mm256_rcp_ps(zmm0)
            zmm4 = _mm256_fnmadd_ps(_mm256_broadcast_ss(2f), zmm3, zmm0)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            int128_t var_138
            zmm3[0].o = var_138
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 8)
            zmm0[0].o = zx.o(rdi_2)
            uint32_t var_148[0x4]
            zmm0[0].o = __vpblendd_xmmdq_xmmdq_memdq_immb(zmm0[0].o, var_148, 0xe)
            zmm1[0].o = zx.o(rcx_5)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x10)
            zmm1[0].o = zx.o(rdx_2)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
            var_138 = zmm3[0].o
            var_148 = zmm0[0].o
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
            zmm9 = __vblendps_xmmdq_xmmdq_memdq_immb(zmm0[0].o, data_142d8f750, 8)
        
        *(rbx_3 + (r13_1 << 2)) = arg5
        *(rsi_2 + rbp_1) = rdi_2
        *(rsi_2 + rbp_1 + 4) = rcx_5
        *(rsi_2 + rbp_1 + 8) = rdx_2
        result = arg1
        *(result + (rbp_1 << 2)) = zmm13
        *(result + (rbp_1 << 2) + 0x10) = zmm8
        *(result + (rbp_1 << 2) + 0x20) = zmm9
        r12_1 += 1
        r13_1 += 4
        rbp_1 += 0xc
    while (rax != r12_1)

arg6[0].o = var_e8
_mm256_zeroupper()
return result
