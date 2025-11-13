// 函数: sub_14033b5d0
// 地址: 0x14033b5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg12[0].o
int128_t var_68 = arg11[0].o
int128_t var_78 = arg10[0].o
int128_t var_88 = arg9[0].o
float zmm11[0x4]
float var_98[0x4] = zmm11
int128_t var_a8 = arg8[0].o
int128_t var_b8 = arg7[0].o
int32_t zmm8[0x4]
int32_t var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
int128_t var_e8 = arg6[0].o
uint64_t result = zx.q(arg15)

if (result.d s>= 2)
    uint64_t r13_1 = zx.q(result.d)
    int64_t rsi_1 = 1
    zmm8 = 0x322bcc77
    arg10[0].o = 0xffffffff
    arg7[0].o = 0x3f000000
    arg8[0].o = data_142d3f660
    
    do
        uint64_t rax = zx.q(*(arg3 + (rsi_1 << 1)))
        *(arg4 + sx.q(rax.d * arg13 + arg14))
        float zmm3[0x8]
        zmm3[0].o = arg1[sx.q(*(arg4 + sx.q(rax.d * arg13 + arg14))) * 3]
        float zmm5[0x8]
        zmm5[0].o = arg1[sx.q(*(arg4 + sx.q(rax.d * arg13 + arg14))) * 3 + 1]
        arg11[0].o = arg1[sx.q(*(arg4 + sx.q(rax.d * arg13 + arg14))) * 3 + 2]
        uint64_t rbx_2 = rax * 0x30
        float zmm2[0x8]
        zmm2[0].o = *(arg2 + rbx_2)
        arg9[0].o = *(arg2 + rbx_2 + 0x10)
        arg12[0].o = *(arg2 + rbx_2 + 0x20)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        uint32_t zmm0[0x8] = _mm256_cmp_ps(arg12, arg5, 1)
        arg5 = _mm256_cmp_ps(arg11, arg5, 1)
        zmm0 = _mm256_or_ps(zmm0, arg5)
        arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        result = zx.q(__vpmovmskb_gpr32d_xmmdq(zmm0[0].o))
        float zmm4[0x8]
        
        if (result.b == 0)
            arg5[0].o = _mm_permute_ps(zmm3[0].o, 0xff)
            zmm0[0].o = _mm_broadcastss_ps(zmm3[0].o)
            zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0x1b)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d3f7c0)
            zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, arg5[0].o, zmm2[0].o)
            zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0x55)
            arg6[0].o = _mm_permute_pd(zmm2[0].o, 1)
            zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
            zmm4[0].o = __vfmadd132ps_xmmdq_xmmdq_memdq(zmm4[0].o, zmm0[0].o, data_142d3f7d0)
            zmm0[0].o = _mm_permute_ps(zmm3[0].o, 0xaa)
            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xb1)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm0[0].o = __vfmadd132ps_xmmdq_xmmdq_memdq(zmm0[0].o, zmm4[0].o, data_142d3f7b0)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg9[0].o)
            zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0xc9)
            arg6[0].o = _mm_permute_ps(zmm2[0].o, 0xd2)
            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xd2)
            float temp0_214[0x4] = _mm_permute_ps(zmm2[0].o, 0xc9)
            float temp0_216[0x4] =
                _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_214), zmm4[0].o, arg6[0].o)
            arg6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_216, temp0_216)
            arg5[0].o = _mm_fmadd_ps(arg5[0].o, arg6[0].o, zmm2[0].o)
            zmm2[0].o = _mm_permute_ps(arg6[0].o, 0xd2)
            arg6[0].o = _mm_permute_ps(arg6[0].o, 0xc9)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            zmm3[0].o = _mm_fmsub_ps(zmm3[0].o, zmm4[0].o, zmm2[0].o)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
            zmm11 = __vmulps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
        else
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            zmm4[0].o = _mm_permute_ps(zmm0[0].o, 1)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x1a)
            zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm0[0].o = _mm_broadcastss_ps(0x3f800000)
            zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            zmm7 = zmm5[0].o
            zmm11 = arg7[0].o
            arg7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm4[0].o)
            zmm4[0].o = _mm_permute_ps(zmm2[0].o, 4)
            arg6[0].o = _mm_permute_ps(arg5[0].o, 0x29)
            zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xff)
            arg5[0].o = _mm_permute_ps(arg5[0].o, 0x12)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
            arg10[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm2[0].o)
            zmm2[0].o = _mm_permute_ps(arg12[0].o, 0xc9)
            arg5[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
            arg8[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            arg5[0].o = _mm_permute_pd(arg10[0].o, 1)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg7[0].o, 1)
            int32_t temp0_31[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(0x3f800000, 0x3f800000)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg10[0].o, 0x10)
            zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg8[0].o, 4)
            zmm4 = _mm256_blend_ps(zmm2, zmm4, 0xf)
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg8[0].o, 1)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg7[0].o, 2)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg10[0].o, 0x60)
            zmm2 = _mm256_insertf128_ps(zmm4, zmm2[0].o, 1)
            zmm5 = data_143443080
            arg5 = _mm256_blend_ps(zmm5, arg5, 1)
            zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, arg8[0].o, 2)
            zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg7[0].o, 4)
            arg5[0].o = _mm256_extractf128_ps(arg5[0].o, 1)
            arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg9[0].o, arg5[0].o, 8)
            arg5 = _mm256_insertf128_ps(zmm4, arg5[0].o, 1)
            float var_140_1[0x8] = zmm2
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0xc1)
            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xda)
            zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm0[0].o)
            zmm0[0].o = _mm_permute_ps(zmm3[0].o, 4)
            zmm4[0].o = _mm_permute_ps(arg5[0].o, 0x29)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xff)
            arg5[0].o = _mm_permute_ps(arg5[0].o, 0x12)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg11[0].o, zmm3[0].o)
            zmm4[0].o = _mm_permute_ps(arg11[0].o, 0xc9)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm4[0].o = _mm_permute_pd(zmm3[0].o, 1)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_31, zmm2[0].o, 1)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm3[0].o, 0x10)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 4)
            arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg5[0].o, 1)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm2[0].o, 2)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm3[0].o, 0x60)
            zmm4 = _mm256_blend_ps(zmm5, zmm4, 1)
            arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg5[0].o, 2)
            arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm2[0].o, 4)
            zmm2[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm2[0].o, 8)
            zmm4[0].o = _mm_broadcastss_ps(arg7[0].o)
            zmm5[0].o = _mm_permute_ps(arg8[0].o, 0xaa)
            zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm0[0].o, zmm4[0].o)
            arg7[0].o = _mm_broadcastss_ps(arg10[0].o)
            arg7[0].o = _mm_fmadd_ps(arg7[0].o, zmm3[0].o, zmm5[0].o)
            arg7[0].o = _mm_fmadd_ps(arg7[0].o, zmm2[0].o, temp0_31)
            zmm4[0].o = _mm_broadcastss_ps(arg8[0].o)
            zmm5[0].o = _mm_permute_ps(arg10[0].o, 0x55)
            zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm0[0].o, zmm4[0].o)
            float var_12c
            arg6[0].o = _mm_broadcast_ss(var_12c)
            arg6[0].o = _mm_fmadd_ps(arg6[0].o, zmm3[0].o, zmm5[0].o)
            float var_124
            zmm4[0].o = _mm_broadcast_ss(var_124)
            zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm2[0].o, arg6[0].o)
            zmm5[0].o = _mm_broadcast_ss(arg5[0])
            arg6[0].o = _mm_broadcast_ss(arg5[2])
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            arg6[0].o = _mm_fmadd_ps(arg6[0].o, zmm0[0].o, zmm5[0].o)
            zmm5[0].o = _mm_broadcast_ss(arg5[1])
            zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm3[0].o, arg6[0].o)
            arg6[0].o = _mm_broadcast_ss(arg5[3])
            arg6[0].o = _mm_fmadd_ps(arg6[0].o, zmm2[0].o, zmm5[0].o)
            zmm5[0].o = _mm_broadcast_ss(arg5[4])
            float temp0_101[0x4] = _mm_broadcast_ss(arg5[6])
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5[0].o, temp0_101)
            arg5[0].o = _mm_fmadd_ps(arg5[0].o, zmm0[0].o, zmm5[0].o)
            zmm0[0].o = _mm_broadcast_ss(arg5[5])
            zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm3[0].o, arg5[0].o)
            arg5[0].o = _mm_broadcast_ss(arg5[7])
            arg5[0].o = _mm_fmadd_ps(arg5[0].o, zmm2[0].o, zmm0[0].o)
            zmm0[0].o = __vmovshdup_xmmdq_xmmdq(arg7[0].o)
            arg9[0].o = _mm_permute_pd(arg7[0].o, 1)
            zmm3[0].o = zx.o(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 0))
            zmm5[0].o = __vmovshdup_xmmdq_xmmdq(zmm4[0].o)
            arg8[0].o = _mm_permute_pd(zmm4[0].o, 1)
            zmm7 = zx.o(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 0))
            zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 1)
            zmm4 = _mm256_insertf128_ps(arg7, zmm4[0].o, 1)
            zmm2[0].o = __vmovshdup_xmmdq_xmmdq(arg6[0].o)
            float var_1c0[0x8] = zmm4
            zmm4[0].o = _mm_permute_pd(arg6[0].o, 1)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm7, 1)
            arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
            int224_t var_1a0_1 = arg5[0].28
            arg5[0].o = zmm0[0].o f* zmm0[0]
            arg5[0].o = _mm_fmadd_ss(arg5[0].o, arg7[0].d, arg7[0].d)
            arg5[0].o = _mm_fmadd_ss(arg5[0].o, arg9[0], arg9[0])
            zmm5[0].o = zmm5[0].o f* zmm5[0]
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm3[0], zmm3[0])
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, arg8[0], arg8[0])
            zmm0[0].o = zmm2[0].o f* zmm2[0]
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm7[0], zmm7[0])
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm4[0], zmm4[0])
            zmm2[0].o = 0xb22bcc77
            arg6[0].o = 0xb22bcc77
            zmm2[0].o = arg5[0].o f+ -9.99999994e-09f
            zmm3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
            arg5[0].o = arg5[0].o f* zmm11[0]
            zmm4[0].o = zmm3[0].o f* zmm3[0]
            zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, arg5[0], zmm11[0])
            zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, zmm3[0], zmm3[0])
            zmm3[0].o = zmm4[0].o f* zmm4[0]
            zmm3[0].o = _mm_fnmadd_ss(zmm3[0].o, arg5[0], zmm11[0])
            zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, zmm4[0], zmm4[0])
            int32_t temp0_131[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_31, temp0_31)
            arg5[0].o = _mm_cmp_ss(temp0_131, zmm2[0], 2)
            arg5[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm3[0].o, arg5[0].o)
            zmm2[0].o = zmm5[0].o f+ -9.99999994e-09f
            zmm3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm5[0].o, zmm5[0])
            zmm4[0].o = zmm5[0].o f* zmm11[0]
            zmm5[0].o = zmm3[0].o f* zmm3[0]
            zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm4[0], zmm11[0])
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm3[0], zmm3[0])
            zmm3[0].o = zmm5[0].o f* zmm5[0]
            zmm3[0].o = _mm_fnmadd_ss(zmm3[0].o, zmm4[0], zmm11[0])
            zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, zmm5[0], zmm5[0])
            zmm2[0].o = _mm_cmp_ss(temp0_131, zmm2[0], 2)
            zmm2[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm3[0].o, zmm2[0].o)
            zmm3[0].o = zmm0[0].o f+ -9.99999994e-09f
            zmm4[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
            zmm0[0].o = zmm0[0].o f* zmm11[0]
            zmm5[0].o = zmm4[0].o f* zmm4[0]
            zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm0[0], zmm11[0])
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm4[0], zmm4[0])
            zmm4[0].o = zmm5[0].o f* zmm5[0]
            zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, zmm0[0], zmm11[0])
            zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, zmm5[0], zmm5[0])
            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            zmm0[0].o = _mm_cmp_ss(temp0_131, zmm3[0], 2)
            zmm0[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm4[0].o, zmm0[0].o)
            zmm11 = __vmulps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg12[0].o)
            zmm3[0].o = arg5[0].o f* arg7[0].d
            zmm4[0].o = arg5[0].o f* var_1c0[1]
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
            uint32_t var_1b8
            arg5[0].o = arg5[0].o f* var_1b8
            arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg5[0].o, 0x20)
            float var_1b0
            zmm3[0].o = zmm2[0].o f* var_1b0
            float var_1ac
            zmm4[0].o = zmm2[0].o f* var_1ac
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
            float var_1a8
            zmm2[0].o = zmm2[0].o f* var_1a8
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x20)
            zmm3[0].o = zmm0[0].o f* var_1a0_1.d
            zmm4[0].o = zmm0[0].o f* var_1a0_1:4.d
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
            arg6[0].o = zmm0[0].o f* var_1a0_1:8.d
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0[0].o = _mm_cmp_ps(zmm0[0].o, zmm11, 2)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f)
            zmm3 = _mm256_broadcast_ss(-1f)
            arg9 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm3, data_1434430a0, zmm0)
            zmm0 = _mm256_broadcastss_ps(arg9[0].o)
            arg7 = _mm256_mul_ps(zmm0, arg5)
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(arg7[0].o)
            zmm0[0].o = _mm_permute_pd(arg7[0].o, 1)
            var_1c0[0] = arg7[0].d
            var_1c0[1] = zmm3[0]
            var_1b8 = zmm0[0]
            arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg6[0].o, 0x20)
            zmm4[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
            zmm4 = _mm256_broadcastsd_pd(zmm4[0].o)
            arg8 = _mm256_mul_ps(zmm4, zmm2)
            zmm4[0].o = __vmovshdup_xmmdq_xmmdq(arg8[0].o)
            zmm7 = _mm_permute_pd(arg8[0].o, 1)
            var_1b0 = arg8[0]
            var_1ac = zmm4[0]
            var_1a8 = zmm7[0]
            zmm2[0].o = _mm_permute_ps(arg9[0].o, 0xea)
            zmm2 = _mm256_broadcastsd_pd(zmm2[0].o)
            arg9 = _mm256_mul_ps(zmm2, arg5)
            zmm2[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
            var_1a0_1.d = arg9[0]
            var_1a0_1:4.d = zmm2[0]
            arg10 = _mm256_broadcast_ss(1.17549435e-38f)
            arg5 = _mm256_blend_ps(arg10, arg7, 7)
            arg11 = _mm256_broadcast_ss(nanf)
            arg5 = _mm256_and_ps(arg5, arg11)
            arg12 = _mm256_broadcast_ss(9.99999975e-05f)
            arg5 = _mm256_cmp_ps(arg5, arg12, 2)
            result = zx.q(_mm256_movemask_ps(arg5))
            arg5[0].o = _mm_permute_pd(arg9[0].o, 1)
            var_1a0_1:8.d = arg5[0]
            
            if (result.b == 0xff)
            label_14033bc70:
                arg8[0].o = data_142d3f660
                zmm0[0].o = arg8[0].o
                zmm8 = 0x322bcc77
                zmm5[0].o = 0xffffffff
                arg10[0].o = 0xffffffff
                arg7[0].o = 0x3f000000
            else
                arg6 =
                    _mm256_cmp_ps(_mm256_and_ps(_mm256_blend_ps(arg10, arg8, 7), arg11), arg12, 2)
                result = zx.q(_mm256_movemask_ps(arg6))
                
                if (result.b == 0xff)
                    goto label_14033bc70
                
                arg6 =
                    _mm256_cmp_ps(_mm256_and_ps(_mm256_blend_ps(arg10, arg9, 7), arg11), arg12, 2)
                result = zx.q(_mm256_movemask_ps(arg6))
                
                if (result.b == 0xff)
                    goto label_14033bc70
                
                arg6[0].o = arg7[0].o f+ zmm4[0]
                arg6[0].o = arg5[0].o f+ arg6[0]
                
                if (arg6[0].o f<= zmm5[0])
                    zmm4[0].o f- arg7[0].d
                    int64_t r14_1 = 0
                    
                    if (zmm4[0].o f> arg7[0].d)
                        r14_1 = 0x14
                    
                    int64_t rdi_1
                    rdi_1.b = zmm4[0].o f> arg7[0].d
                    
                    if (arg5[0].o f> *(&var_1c0 + r14_1))
                        rdi_1 = 2
                    
                    int64_t r12_1 = sx.q(*(&data_143443210 + (rdi_1 << 2)))
                    int64_t r14_2 = sx.q(*(&data_143443210 + (r12_1 << 2)))
                    zmm0[0].o = var_1c0[zx.q((rdi_1 * 5).d)]
                    zmm0[0].o = zmm0[0].o f- var_1c0[sx.q((r12_1 * 5).d)]
                    zmm0[0].o = zmm0[0].o f- var_1c0[sx.q((r14_2 * 5).d)]
                    arg5[0].o = 0x3f800000
                    zmm0[0].o = zmm0[0].o f+ 1f
                    zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    arg5[0].o = 0x3f800000 f/ zmm0[0]
                    arg7[0].o = 0x3f000000
                    arg5[0].o = arg5[0].o f* 0.5f
                    int128_t var_150
                    *(&var_150 + (rdi_1 << 2)) = arg5[0]
                    arg5[0].o = var_1c0[sx.q((r12_1 + (rdi_1 << 2)).d)]
                    arg5[0].o = arg5[0].o f+ var_1c0[sx.q((rdi_1 + (r12_1 << 2)).d)]
                    zmm0[0].o = zmm0[0].o f* 0.5f
                    arg5[0].o = arg5[0].o f* zmm0[0]
                    *(&var_150 + (r12_1 << 2)) = arg5[0]
                    arg5[0].o = var_1c0[sx.q((r14_2 + (rdi_1 << 2)).d)]
                    arg5[0].o = arg5[0].o f+ var_1c0[sx.q((rdi_1 + (r14_2 << 2)).d)]
                    arg5[0].o = zmm0[0].o f* arg5[0]
                    *(&var_150 + (r14_2 << 2)) = arg5[0]
                    arg5[0].o = var_1c0[sx.q((r14_2 + (r12_1 << 2)).d)]
                    result = sx.q((r12_1 + (r14_2 << 2)).d)
                    arg5[0].o = arg5[0].o f- var_1c0[result]
                    zmm0[0].o = zmm0[0].o f* arg5[0]
                    uint32_t var_144_1 = zmm0[0]
                    zmm0[0].o = var_150
                else
                    arg5[0].o = 0x3f800000
                    zmm5[0].o = 0x3f800000
                    arg5[0].o = arg6[0].o f+ 1f
                    arg5[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
                    arg5[0].o = 0x3f800000 f/ arg5[0]
                    arg7[0].o = 0x3f000000
                    zmm4[0].o = arg5[0].o f* 0.5f
                    zmm2[0].o = zmm7 f- zmm2[0]
                    zmm2[0].o = zmm2[0].o f* zmm4[0]
                    zmm0[0].o = arg9[0].o f- zmm0[0]
                    zmm0[0].o = zmm0[0].o f* zmm4[0]
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0x10)
                    zmm2[0].o = zmm3[0].o f- arg8[0]
                    zmm2[0].o = zmm2[0].o f* zmm4[0]
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x20)
                    arg5[0].o = 0x3f800000 f/ arg5[0]
                    arg5[0].o = arg5[0].o f* 0.5f
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 0x30)
                
                zmm8 = 0x322bcc77
                zmm5[0].o = 0xffffffff
                arg10[0].o = 0xffffffff
                arg8[0].o = data_142d3f660
            
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm2[0].o = _mm_permute_pd(arg5[0].o, 1)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
            zmm2[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
            arg5[0].o = arg5[0].o f+ zmm2[0]
            zmm2[0].o = _mm_cmp_ss(zmm8, arg5[0], 6)
            zmm2[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg10[0].o)
            zmm3[0].o = arg5[0].o f* arg7[0].d
            arg5[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
            zmm4[0].o = arg5[0].o f* arg5[0]
            zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, zmm3[0], arg7[0].d)
            zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, arg5[0], arg5[0])
            arg5[0].o = zmm4[0].o f* zmm4[0]
            arg5[0].o = _mm_fnmadd_ss(arg5[0].o, zmm3[0], arg7[0].d)
            arg5[0].o = _mm_fmadd_ss(arg5[0].o, zmm4[0], zmm4[0])
            arg5[0].o = _mm_broadcastss_ps(arg5[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = _mm_broadcastss_ps(zmm2[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
            zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vmovsd_xmmdq_memq(var_1a0_1:0x10.q)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, var_1a0_1:0x18.d, 0x28)
        
        arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm3[0].o = _mm_permute_pd(arg5[0].o, 1)
        arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
        zmm3[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
        arg5[0].o = arg5[0].o f+ zmm3[0]
        zmm3[0].o = _mm_cmp_ss(zmm8, arg5[0], 6)
        zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg10[0].o)
        zmm4[0].o = arg5[0].o f* arg7[0].d
        arg5[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
        arg6[0].o = arg5[0].o f* arg5[0]
        arg6[0].o = _mm_fnmadd_ss(arg6[0].o, zmm4[0], arg7[0].d)
        arg6[0].o = _mm_fmadd_ss(arg6[0].o, arg5[0], arg5[0])
        arg5[0].o = arg6[0].o f* arg6[0]
        arg5[0].o = _mm_fnmadd_ss(arg5[0].o, zmm4[0], arg7[0].d)
        arg5[0].o = _mm_fmadd_ss(arg5[0].o, arg6[0], arg6[0])
        arg5[0].o = _mm_broadcastss_ps(arg5[0].o)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg5[0].o = _mm_broadcastss_ps(zmm3[0].o)
        zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg5[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg8[0].o)
        zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg1[rax * 3] = zmm0[0].o
        arg1[rax * 3 + 1] = zmm2[0].o
        arg1[rax * 3 + 2] = zmm11
        rsi_1 += 1
    while (r13_1 != rsi_1)

arg6[0].o = var_e8
arg7[0].o = var_b8
arg8[0].o = var_a8
arg9[0].o = var_88
arg10[0].o = var_78
arg11[0].o = var_68
arg12[0].o = var_58
_mm256_zeroupper()
return result
