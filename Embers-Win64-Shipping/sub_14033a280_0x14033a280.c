// 函数: sub_14033a280
// 地址: 0x14033a280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = arg13[0].o
int128_t var_68 = arg12[0].o
int128_t var_88 = arg11[0].o
int128_t var_98 = arg10[0].o
int128_t var_a8 = arg9[0].o
int128_t var_b8 = arg8[0].o
int32_t zmm8[0x4]
int32_t var_c8[0x4] = zmm8
int128_t var_d8 = arg7[0].o
int128_t var_e8 = arg6[0].o
float zmm13[0x8] = *arg17
uint64_t result = zx.q(arg16)
float var_240[0x8]
float var_238
float var_230
float var_22c
float var_228
int128_t var_1d0
float var_1ac
float var_1a4
float zmm0[0x8]
float zmm2[0x8]
float zmm3[0x8]
float zmm4[0x8]
float zmm5[0x8]

if (_mm256_movemask_ps(zmm13) != 0xff)
    if (result.d s>= 2)
        uint64_t r13_2 = zx.q(result.d)
        int64_t rsi_2 = 1
        arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
        arg12[0].o = 0x322bcc77
        arg13[0].o = 0xffffffff
        float var_140_1[0x8] = zmm13
        
        do
            uint64_t rax_25 = zx.q(*(arg3 + (rsi_2 << 1)))
            *(arg4 + sx.q(rax_25.d * arg14 + arg15))
            arg6[0].o = arg1[sx.q(*(arg4 + sx.q(rax_25.d * arg14 + arg15))) * 3]
            arg9[0].o = arg1[sx.q(*(arg4 + sx.q(rax_25.d * arg14 + arg15))) * 3 + 1]
            arg10[0].o = arg1[sx.q(*(arg4 + sx.q(rax_25.d * arg14 + arg15))) * 3 + 2]
            uint64_t rbx_4 = rax_25 * 0x30
            zmm2[0].o = *(arg2 + rbx_4)
            arg5[0].o = *(arg2 + rbx_4 + 0x10)
            arg8[0].o = *(arg2 + rbx_4 + 0x20)
            float temp0_264[0x8] = _mm256_cmp_ps(arg8, arg11, 1)
            zmm3 = _mm256_cmp_ps(arg10, arg11, 1)
            zmm0 = _mm256_and_ps(_mm256_or_ps(temp0_264, zmm3), zmm13)
            result = zx.q(_mm256_movemask_ps(zmm0))
            
            if (result.d == 0)
                zmm0[0].o = _mm_permute_ps(arg6[0].o, 0xff)
                zmm3[0].o = _mm_broadcastss_ps(arg6[0].o)
                zmm4[0].o = _mm_permute_ps(zmm2[0].o, 0x1b)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f7c0)
                zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, zmm0[0].o, zmm2[0].o)
                zmm4[0].o = _mm_permute_ps(arg6[0].o, 0x55)
                zmm5[0].o = _mm_permute_pd(zmm2[0].o, 1)
                zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
                zmm4[0].o = __vfmadd132ps_xmmdq_xmmdq_memdq(zmm4[0].o, zmm3[0].o, data_142d3f7d0)
                zmm3[0].o = _mm_permute_ps(arg6[0].o, 0xaa)
                zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xb1)
                zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
                zmm2[0].o = __vfmadd132ps_xmmdq_xmmdq_memdq(zmm2[0].o, zmm4[0].o, data_142d3f7b0)
                arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg5[0].o)
                zmm3[0].o = _mm_permute_ps(arg6[0].o, 0xc9)
                zmm4[0].o = _mm_permute_ps(arg5[0].o, 0xd2)
                zmm5[0].o = _mm_permute_ps(arg6[0].o, 0xd2)
                arg6[0].o = _mm_permute_ps(arg5[0].o, 0xc9)
                arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg6[0].o)
                arg6[0].o = _mm_fmsub_ps(arg6[0].o, zmm3[0].o, zmm4[0].o)
                zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm4[0].o, arg5[0].o)
                arg5[0].o = _mm_permute_ps(zmm4[0].o, 0xd2)
                zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xc9)
                zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
                zmm4[0].o = _mm_fmsub_ps(zmm4[0].o, zmm3[0].o, arg5[0].o)
                zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg9[0].o, zmm0[0].o)
                arg7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg8[0].o)
                arg6[0].o = data_142d3f660
            else
                zmm0 = _mm256_cmpeq_epi32(zmm13, arg11)
                float var_120_1[0x8] = zmm0
                zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                zmm4[0].o = _mm_permute_ps(zmm0[0].o, 1)
                zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x1a)
                zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
                zmm0[0].o = _mm_broadcastss_ps(0x3f800000)
                zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
                arg11[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm4[0].o)
                zmm4[0].o = _mm_permute_ps(zmm2[0].o, 4)
                arg7[0].o = _mm_permute_ps(zmm3[0].o, 0x29)
                zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg7[0].o)
                zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xff)
                zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0x12)
                zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
                zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg8[0].o, zmm2[0].o)
                arg7[0].o = _mm_permute_ps(arg8[0].o, 0xc9)
                zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
                zmm13[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg7[0].o, zmm3[0].o)
                zmm3[0].o = _mm_permute_pd(zmm2[0].o, 1)
                zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
                zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg11[0].o, 1)
                arg13[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg13[0].o, arg13[0].o)
                arg7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 0x10)
                arg7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm13[0].o, 4)
                float temp0_295[0x8] = _mm256_blend_ps(zmm4, arg7, 0xf)
                zmm4[0].o = _mm256_extractf128_ps(zmm4[0].o, 1)
                zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm13[0].o, 1)
                zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg11[0].o, 2)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 0x60)
                zmm4 = _mm256_insertf128_ps(temp0_295, zmm4[0].o, 1)
                zmm5 = data_143443080
                float temp0_301[0x8] = _mm256_blend_ps(zmm5, zmm3, 1)
                temp0_295[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_301[0].o, zmm13[0].o, 2)
                temp0_295[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_295[0].o, arg11[0].o, 4)
                temp0_301[0].o = _mm256_extractf128_ps(temp0_301[0].o, 1)
                arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, temp0_301[0].o, 8)
                arg5 = _mm256_insertf128_ps(temp0_295, arg5[0].o, 1)
                float var_1c0_2[0x8] = zmm4
                arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg6[0].o)
                temp0_301[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                zmm4[0].o = _mm_permute_ps(temp0_301[0].o, 0xc1)
                temp0_301[0].o = _mm_permute_ps(temp0_301[0].o, 0xda)
                temp0_301[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_301[0].o)
                zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_301[0].o)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm0[0].o)
                temp0_301[0].o = _mm_permute_ps(arg6[0].o, 4)
                zmm4[0].o = _mm_permute_ps(arg5[0].o, 0x29)
                temp0_301[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_301[0].o, zmm4[0].o)
                zmm4[0].o = _mm_permute_ps(arg6[0].o, 0xff)
                arg5[0].o = _mm_permute_ps(arg5[0].o, 0x12)
                arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
                zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_301[0].o, arg5[0].o)
                zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg10[0].o, zmm4[0].o)
                arg6[0].o = _mm_permute_ps(arg10[0].o, 0xc9)
                arg5[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_301[0].o, arg5[0].o)
                temp0_301[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg6[0].o, arg5[0].o)
                arg6[0].o = _mm_permute_pd(zmm4[0].o, 1)
                temp0_295[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg13[0].o, zmm0[0].o, 1)
                arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_295[0].o, zmm4[0].o, 0x10)
                arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, temp0_301[0].o, 4)
                temp0_295[0].o = _mm256_extractf128_ps(temp0_295[0].o, 1)
                temp0_295[0].o =
                    __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_295[0].o, temp0_301[0].o, 1)
                temp0_295[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_295[0].o, zmm0[0].o, 2)
                zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_295[0].o, zmm4[0].o, 0x60)
                arg6 = _mm256_blend_ps(zmm5, arg6, 1)
                temp0_301[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, temp0_301[0].o, 2)
                temp0_301[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_301[0].o, zmm0[0].o, 4)
                zmm0[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
                zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg9[0].o, zmm0[0].o, 8)
                arg6[0].o = _mm_broadcastss_ps(arg11[0].o)
                temp0_295[0].o = _mm_permute_ps(zmm13[0].o, 0xaa)
                temp0_295[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_301[0].o, temp0_295[0].o)
                temp0_295[0].o = _mm_fmadd_ps(temp0_295[0].o, arg5[0].o, arg6[0].o)
                arg9[0].o = _mm_broadcastss_ps(zmm2[0].o)
                arg9[0].o = _mm_fmadd_ps(arg9[0].o, zmm4[0].o, temp0_295[0].o)
                arg9[0].o = _mm_fmadd_ps(arg9[0].o, zmm0[0].o, arg13[0].o)
                arg6[0].o = _mm_broadcastss_ps(zmm13[0].o)
                zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0x55)
                zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_301[0].o, zmm2[0].o)
                zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, arg5[0].o, arg6[0].o)
                arg6[0].o = _mm_broadcast_ss(var_1ac)
                arg6[0].o = _mm_fmadd_ps(arg6[0].o, zmm4[0].o, zmm2[0].o)
                zmm2[0].o = _mm_broadcast_ss(var_1a4)
                zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, zmm0[0].o, arg6[0].o)
                arg6[0].o = _mm_broadcast_ss(arg5[0])
                temp0_295[0].o = _mm_broadcast_ss(arg5[2])
                temp0_295[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_301[0].o, temp0_295[0].o)
                temp0_295[0].o = _mm_fmadd_ps(temp0_295[0].o, arg5[0].o, arg6[0].o)
                arg6[0].o = _mm_broadcast_ss(arg5[1])
                arg6[0].o = _mm_fmadd_ps(arg6[0].o, zmm4[0].o, temp0_295[0].o)
                temp0_295[0].o = _mm_broadcast_ss(arg5[3])
                temp0_295[0].o = _mm_fmadd_ps(temp0_295[0].o, zmm0[0].o, arg6[0].o)
                arg6[0].o = _mm_broadcast_ss(arg5[4])
                zmm5[0].o = _mm_broadcast_ss(arg5[6])
                temp0_301[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_301[0].o, zmm5[0].o)
                temp0_301[0].o = _mm_fmadd_ps(temp0_301[0].o, arg5[0].o, arg6[0].o)
                arg5[0].o = _mm_broadcast_ss(arg5[5])
                arg5[0].o = _mm_fmadd_ps(arg5[0].o, zmm4[0].o, temp0_301[0].o)
                temp0_301[0].o = _mm_broadcast_ss(arg5[7])
                temp0_301[0].o = _mm_fmadd_ps(temp0_301[0].o, zmm0[0].o, arg5[0].o)
                zmm13[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg10[0].o, arg8[0].o)
                zmm0[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
                int32_t temp0_371 = __vextractps_gpr32_xmmdq_immb(zmm2[0].o, 0)
                arg10[0].o = _mm_permute_pd(arg9[0].o, 1)
                zmm4[0].o = zx.o(temp0_371)
                zmm5[0].o = __vmovshdup_xmmdq_xmmdq(zmm2[0].o)
                arg8[0].o = _mm_permute_pd(zmm2[0].o, 1)
                arg6[0].o = zx.o(__vextractps_gpr32_xmmdq_immb(temp0_295[0].o, 0))
                zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 1)
                zmm2 = _mm256_insertf128_ps(arg9, zmm2[0].o, 1)
                arg5[0].o = __vmovshdup_xmmdq_xmmdq(temp0_295[0].o)
                arg11[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_295[0].o, arg6[0].o, 1)
                zmm3 = _mm256_insertf128_ps(arg11, temp0_301[0].o, 1)
                var_240 = zmm2
                int224_t var_220_2 = zmm3[0].28
                zmm2[0].o = _mm_permute_pd(temp0_295[0].o, 1)
                zmm3[0].o = zmm0[0].o f* zmm0[0]
                zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, arg9[0], arg9[0])
                zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, arg10[0], arg10[0])
                zmm5[0].o = zmm5[0].o f* zmm5[0]
                zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm4[0], zmm4[0])
                zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, arg8[0].d, arg8[0].d)
                zmm0[0].o = arg5[0].o f* arg5[0]
                zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, arg6[0], arg6[0])
                zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm2[0], zmm2[0])
                arg5[0].o = 0xb22bcc77
                arg5[0].o = zmm3[0].o f+ -9.99999994e-09f
                zmm2[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm3[0].o, zmm3[0])
                zmm3[0].o = zmm3[0].o f* 0.5f
                zmm4[0].o = zmm2[0].o f* zmm2[0]
                zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, zmm3[0], 0.5f)
                zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, zmm2[0], zmm2[0])
                zmm2[0].o = zmm4[0].o f* zmm4[0]
                zmm2[0].o = _mm_fnmadd_ss(zmm2[0].o, zmm3[0], 0.5f)
                zmm2[0].o = _mm_fmadd_ss(zmm2[0].o, zmm4[0], zmm4[0])
                temp0_295[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_295[0].o, temp0_295[0].o)
                arg5[0].o = _mm_cmp_ss(temp0_295[0].o, arg5[0], 2)
                arg5[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm2[0].o, arg5[0].o)
                zmm2[0].o = zmm5[0].o f+ -9.99999994e-09f
                zmm3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm5[0].o, zmm5[0])
                zmm4[0].o = zmm5[0].o f* 0.5f
                zmm5[0].o = zmm3[0].o f* zmm3[0]
                zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm4[0], 0.5f)
                zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm3[0], zmm3[0])
                zmm3[0].o = zmm5[0].o f* zmm5[0]
                zmm3[0].o = _mm_fnmadd_ss(zmm3[0].o, zmm4[0], 0.5f)
                zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, zmm5[0], zmm5[0])
                zmm2[0].o = _mm_cmp_ss(temp0_295[0].o, zmm2[0], 2)
                zmm2[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm3[0].o, zmm2[0].o)
                zmm3[0].o = zmm0[0].o f+ -9.99999994e-09f
                zmm4[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                zmm0[0].o = zmm0[0].o f* 0.5f
                zmm5[0].o = zmm4[0].o f* zmm4[0]
                zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm0[0], 0.5f)
                zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm4[0], zmm4[0])
                zmm4[0].o = zmm5[0].o f* zmm5[0]
                zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, zmm0[0], 0.5f)
                zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, zmm5[0], zmm5[0])
                zmm0[0].o = _mm_cmp_ss(temp0_295[0].o, zmm3[0], 2)
                zmm0[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm4[0].o, zmm0[0].o)
                zmm3[0].o = arg5[0].o f* var_240[1]
                zmm4[0].o = arg5[0].o f* arg9[0]
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x10)
                arg5[0].o = arg5[0].o f* var_238
                zmm4[0].o = zmm2[0].o f* var_230
                zmm5[0].o = zmm2[0].o f* var_22c
                arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg5[0].o, 0x20)
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0x10)
                zmm2[0].o = zmm2[0].o f* var_228
                zmm4[0].o = zmm0[0].o f* var_220_2.d
                zmm5[0].o = zmm0[0].o f* var_220_2:4.d
                zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x20)
                zmm0[0].o = zmm0[0].o f* var_220_2:8.d
                int128_t var_150_1 = zmm13[0].o
                zmm2[0].o = _mm_cmp_ps(arg13[0].o, zmm13[0].o, 2)
                zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
                zmm2 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm2[0].o), 0x1f)
                arg6 = _mm256_broadcast_ss(-1f)
                arg7 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(arg6, data_1434430a0, zmm2)
                zmm2 = _mm256_broadcastss_ps(arg7[0].o)
                arg8 = _mm256_mul_ps(zmm2, arg5)
                arg6[0].o = __vmovshdup_xmmdq_xmmdq(arg8[0].o)
                zmm2[0].o = _mm_permute_pd(arg8[0].o, 1)
                var_240[0] = arg8[0].d
                var_240[1] = arg6[0]
                var_238 = zmm2[0]
                zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0x10)
                arg5[0].o = __vmovshdup_xmmdq_xmmdq(arg7[0].o)
                arg5 = _mm256_broadcastsd_pd(arg5[0].o)
                arg9 = _mm256_mul_ps(arg5, zmm3)
                zmm4[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
                arg5[0].o = _mm_permute_pd(arg9[0].o, 1)
                var_230 = arg9[0]
                var_22c = zmm4[0]
                var_228 = arg5[0]
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm0[0].o, 0x20)
                zmm3[0].o = _mm_permute_ps(arg7[0].o, 0xea)
                arg11 = _mm256_mul_ps(_mm256_broadcastsd_pd(zmm3[0].o), zmm0)
                float temp0_434[0x8] = _mm256_broadcast_ss(1.17549435e-38f)
                float temp0_435[0x8] = _mm256_blend_ps(temp0_434, arg8, 7)
                arg12 = _mm256_broadcast_ss(nanf)
                zmm0 = _mm256_and_ps(temp0_435, arg12)
                arg10 = _mm256_broadcast_ss(9.99999975e-05f)
                zmm3 = var_120_1
                arg13 = zmm3
                zmm0 = _mm256_or_ps(_mm256_cmp_ps(zmm0, arg10, 2), zmm3)
                zmm3[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
                zmm3[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
                zmm0[0].o = __vmovshdup_xmmdq_xmmdq(arg11[0].o)
                var_220_2.d = arg11[0]
                var_220_2:4.d = zmm0[0]
                zmm3[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
                result = zx.q(__vpmovmskb_gpr32d_xmmdq(zmm3[0].o))
                zmm3[0].o = _mm_permute_pd(arg11[0].o, 1)
                var_220_2:8.d = zmm3[0]
                
                if (result.b == 0xff)
                label_14033b270:
                    arg6[0].o = data_142d3f660
                    zmm0[0].o = arg6[0].o
                    zmm13 = var_140_1
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    arg7[0].o = 0x322bcc77
                    arg12[0].o = 0x322bcc77
                    arg7[0].o = 0xffffffff
                    arg13[0].o = 0xffffffff
                else
                    zmm5 = _mm256_or_ps(
                        _mm256_cmp_ps(_mm256_and_ps(_mm256_blend_ps(temp0_434, arg9, 7), arg12), 
                            arg10, 2), 
                        arg13)
                    arg7[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                    zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    result = zx.q(__vpmovmskb_gpr32d_xmmdq(zmm5[0].o))
                    
                    if (result.b == 0xff)
                        goto label_14033b270
                    
                    zmm5 = _mm256_or_ps(
                        _mm256_cmp_ps(_mm256_and_ps(_mm256_blend_ps(temp0_434, arg11, 7), arg12), 
                            arg10, 2), 
                        arg13)
                    arg7[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
                    zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg7[0].o)
                    zmm5[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
                    result = zx.q(__vpmovmskb_gpr32d_xmmdq(zmm5[0].o))
                    
                    if (result.b == 0xff)
                        goto label_14033b270
                    
                    zmm5[0].o = arg8[0].o f+ zmm4[0]
                    zmm5[0].o = zmm3[0].o f+ zmm5[0]
                    
                    if (zmm5[0].o f<= 0f)
                        zmm4[0].o f- arg8[0].d
                        int64_t r14_3 = 0
                        
                        if (zmm4[0].o f> arg8[0].d)
                            r14_3 = 0x14
                        
                        int64_t rdi_2
                        rdi_2.b = zmm4[0].o f> arg8[0].d
                        
                        if (zmm3[0].o f> *(&var_240 + r14_3))
                            rdi_2 = 2
                        
                        int64_t r12_2 = sx.q(*(&data_143443210 + (rdi_2 << 2)))
                        int64_t r14_4 = sx.q(*(&data_143443210 + (r12_2 << 2)))
                        zmm0[0].o = var_240[zx.q((rdi_2 * 5).d)]
                        zmm0[0].o = zmm0[0].o f- var_240[sx.q((r12_2 * 5).d)]
                        zmm0[0].o = zmm0[0].o f- var_240[sx.q((r14_4 * 5).d)]
                        arg5[0].o = 0x3f800000
                        zmm0[0].o = zmm0[0].o f+ 1f
                        zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                        zmm0[0].o = 0x3f800000 f/ zmm0[0]
                        arg5[0].o = 0x3f800000 f/ zmm0[0]
                        arg5[0].o = arg5[0].o f* 0.5f
                        *(&var_1d0 + (rdi_2 << 2)) = arg5[0]
                        arg5[0].o = var_240[sx.q((r12_2 + (rdi_2 << 2)).d)]
                        arg5[0].o = arg5[0].o f+ var_240[sx.q((rdi_2 + (r12_2 << 2)).d)]
                        zmm0[0].o = zmm0[0].o f* 0.5f
                        arg5[0].o = arg5[0].o f* zmm0[0]
                        *(&var_1d0 + (r12_2 << 2)) = arg5[0]
                        arg5[0].o = var_240[sx.q((r14_4 + (rdi_2 << 2)).d)]
                        arg5[0].o = arg5[0].o f+ var_240[sx.q((rdi_2 + (r14_4 << 2)).d)]
                        arg5[0].o = zmm0[0].o f* arg5[0]
                        *(&var_1d0 + (r14_4 << 2)) = arg5[0]
                        arg5[0].o = var_240[sx.q((r14_4 + (r12_2 << 2)).d)]
                        result = sx.q((r12_2 + (r14_4 << 2)).d)
                        arg5[0].o = arg5[0].o f- var_240[result]
                        zmm0[0].o = zmm0[0].o f* arg5[0]
                        float var_1c4_2 = zmm0[0]
                        zmm0[0].o = var_1d0
                    else
                        zmm3[0].o = 0x3f800000
                        arg7[0].o = 0x3f800000
                        zmm3[0].o = zmm5[0].o f+ 1f
                        zmm3[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm3[0].o, zmm3[0])
                        zmm3[0].o = 0x3f800000 f/ zmm3[0]
                        zmm4[0].o = zmm3[0].o f* 0.5f
                        zmm0[0].o = arg5[0].o f- zmm0[0]
                        zmm0[0].o = zmm0[0].o f* zmm4[0]
                        arg5[0].o = arg11[0].o f- zmm2[0]
                        arg5[0].o = arg5[0].o f* zmm4[0]
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 0x10)
                        arg5[0].o = arg6[0].o f- arg9[0]
                        arg5[0].o = arg5[0].o f* zmm4[0]
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 0x20)
                        arg5[0].o = 0x3f800000 f/ zmm3[0]
                        arg5[0].o = arg5[0].o f* 0.5f
                        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 0x30)
                    
                    zmm13 = var_140_1
                    arg11[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg11[0].o, arg11[0].o)
                    arg7[0].o = 0x322bcc77
                    arg12[0].o = 0x322bcc77
                    arg7[0].o = 0xffffffff
                    arg13[0].o = 0xffffffff
                    arg6[0].o = data_142d3f660
                
                arg7[0].o = var_150_1
                arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
                zmm2[0].o = _mm_permute_pd(arg5[0].o, 1)
                arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
                zmm2[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
                arg5[0].o = arg5[0].o f+ zmm2[0]
                zmm2[0].o = _mm_cmp_ss(arg12[0].o, arg5[0], 6)
                zmm2[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg13[0].o)
                zmm3[0].o = arg5[0].o f* 0.5f
                arg5[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
                zmm4[0].o = arg5[0].o f* arg5[0]
                zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, zmm3[0], 0.5f)
                zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, arg5[0], arg5[0])
                arg5[0].o = zmm4[0].o f* zmm4[0]
                arg5[0].o = _mm_fnmadd_ss(arg5[0].o, zmm3[0], 0.5f)
                arg5[0].o = _mm_fmadd_ss(arg5[0].o, zmm4[0], zmm4[0])
                arg5[0].o = _mm_broadcastss_ps(arg5[0].o)
                zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                arg5[0].o = _mm_broadcastss_ps(zmm2[0].o)
                zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                arg5[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
                zmm2[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
                zmm0[0].o = __vmovsd_xmmdq_memq(var_220_2:0x10.q)
                zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, var_220_2:0x18.d, 0x28)
            
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm3[0].o = _mm_permute_pd(arg5[0].o, 1)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
            arg5[0].o = arg5[0].o f+ zmm3[0]
            zmm3[0].o = _mm_cmp_ss(arg12[0].o, arg5[0], 6)
            zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg13[0].o)
            zmm4[0].o = arg5[0].o f* 0.5f
            arg5[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
            zmm5[0].o = arg5[0].o f* arg5[0]
            zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm4[0], 0.5f)
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, arg5[0], arg5[0])
            arg5[0].o = zmm5[0].o f* zmm5[0]
            arg5[0].o = _mm_fnmadd_ss(arg5[0].o, zmm4[0], 0.5f)
            arg5[0].o = _mm_fmadd_ss(arg5[0].o, zmm5[0], zmm5[0])
            arg5[0].o = _mm_broadcastss_ps(arg5[0].o)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            zmm2[0].o = _mm_broadcastss_ps(zmm3[0].o)
            arg5[0].o = __vandps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
            zmm2[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg6[0].o)
            arg5[0].o = __vorps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
            arg1[rax_25 * 3] = arg5[0].o
            arg1[rax_25 * 3 + 1] = zmm0[0].o
            arg1[rax_25 * 3 + 2] = arg7[0].o
            rsi_2 += 1
        while (r13_2 != rsi_2)
else if (result.d s>= 2)
    uint64_t r13_1 = zx.q(result.d)
    int64_t rsi_1 = 1
    zmm8 = 0x322bcc77
    zmm13[0].o = 0xffffffff
    arg8[0].o = 0x3f000000
    arg9[0].o = data_142d3f660
    
    do
        uint64_t rax_1 = zx.q(*(arg3 + (rsi_1 << 1)))
        *(arg4 + sx.q(rax_1.d * arg14 + arg15))
        zmm3[0].o = arg1[sx.q(*(arg4 + sx.q(rax_1.d * arg14 + arg15))) * 3]
        zmm5[0].o = arg1[sx.q(*(arg4 + sx.q(rax_1.d * arg14 + arg15))) * 3 + 1]
        arg12[0].o = arg1[sx.q(*(arg4 + sx.q(rax_1.d * arg14 + arg15))) * 3 + 2]
        uint64_t rbx_2 = rax_1 * 0x30
        zmm2[0].o = *(arg2 + rbx_2)
        arg11[0].o = *(arg2 + rbx_2 + 0x10)
        arg13[0].o = *(arg2 + rbx_2 + 0x20)
        arg5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg5[0].o)
        float temp0_2[0x8] = _mm256_cmp_ps(arg13, arg5, 1)
        arg5 = _mm256_cmp_ps(arg12, arg5, 1)
        zmm0 = _mm256_or_ps(temp0_2, arg5)
        arg5[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        result = zx.q(__vpmovmskb_gpr32d_xmmdq(zmm0[0].o))
        
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
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg11[0].o)
            zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0xc9)
            arg6[0].o = _mm_permute_ps(zmm2[0].o, 0xd2)
            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xd2)
            arg7[0].o = _mm_permute_ps(zmm2[0].o, 0xc9)
            arg7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg7[0].o)
            arg7[0].o = _mm_fmsub_ps(arg7[0].o, zmm4[0].o, arg6[0].o)
            arg6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg7[0].o, arg7[0].o)
            arg5[0].o = _mm_fmadd_ps(arg5[0].o, arg6[0].o, zmm2[0].o)
            zmm2[0].o = _mm_permute_ps(arg6[0].o, 0xd2)
            arg6[0].o = _mm_permute_ps(arg6[0].o, 0xc9)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg6[0].o)
            zmm3[0].o = _mm_fmsub_ps(zmm3[0].o, zmm4[0].o, zmm2[0].o)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
            zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, arg5[0].o)
            arg10[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
        else
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            zmm4[0].o = _mm_permute_ps(zmm0[0].o, 1)
            zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x1a)
            zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
            zmm0[0].o = _mm_broadcastss_ps(0x3f800000)
            zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
            arg7[0].o = zmm5[0].o
            arg10[0].o = arg8[0].o
            arg8[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm4[0].o)
            zmm4[0].o = _mm_permute_ps(zmm2[0].o, 4)
            arg6[0].o = _mm_permute_ps(arg5[0].o, 0x29)
            zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg6[0].o)
            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xff)
            arg5[0].o = _mm_permute_ps(arg5[0].o, 0x12)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
            zmm13[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg13[0].o, zmm2[0].o)
            zmm2[0].o = _mm_permute_ps(arg13[0].o, 0xc9)
            arg5[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4[0].o, arg5[0].o)
            arg9[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, arg5[0].o)
            arg5[0].o = _mm_permute_pd(zmm13[0].o, 1)
            zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg8[0].o, 1)
            int32_t temp0_31[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(0x3f800000, 0x3f800000)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm13[0].o, 0x10)
            zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg9[0].o, 4)
            float temp0_34[0x8] = _mm256_blend_ps(zmm2, zmm4, 0xf)
            zmm2[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg9[0].o, 1)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, arg8[0].o, 2)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm13[0].o, 0x60)
            zmm2 = _mm256_insertf128_ps(temp0_34, zmm2[0].o, 1)
            zmm5 = data_143443080
            float temp0_40[0x8] = _mm256_blend_ps(zmm5, arg5, 1)
            temp0_34[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_40[0].o, arg9[0].o, 2)
            temp0_34[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_34[0].o, arg8[0].o, 4)
            temp0_40[0].o = _mm256_extractf128_ps(temp0_40[0].o, 1)
            temp0_40[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg11[0].o, temp0_40[0].o, 8)
            arg5 = _mm256_insertf128_ps(temp0_34, temp0_40[0].o, 1)
            float var_1c0_1[0x8] = zmm2
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            temp0_34[0].o = _mm_permute_ps(zmm2[0].o, 0xc1)
            zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xda)
            zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_34[0].o, zmm2[0].o)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm0[0].o)
            zmm0[0].o = _mm_permute_ps(zmm3[0].o, 4)
            temp0_34[0].o = _mm_permute_ps(arg5[0].o, 0x29)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_34[0].o)
            zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xff)
            arg5[0].o = _mm_permute_ps(arg5[0].o, 0x12)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg5[0].o)
            zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg12[0].o, zmm3[0].o)
            temp0_34[0].o = _mm_permute_ps(arg12[0].o, 0xc9)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_34[0].o, zmm0[0].o)
            temp0_34[0].o = _mm_permute_pd(zmm3[0].o, 1)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_31, zmm2[0].o, 1)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm3[0].o, 0x10)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 4)
            arg6[0].o = _mm256_extractf128_ps(arg6[0].o, 1)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg5[0].o, 1)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm2[0].o, 2)
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, zmm3[0].o, 0x60)
            float temp0_72[0x8] = _mm256_blend_ps(zmm5, temp0_34, 1)
            arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_72[0].o, arg5[0].o, 2)
            arg5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg5[0].o, zmm2[0].o, 4)
            zmm2[0].o = _mm256_extractf128_ps(temp0_72[0].o, 1)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg7[0].o, zmm2[0].o, 8)
            temp0_72[0].o = _mm_broadcastss_ps(arg8[0].o)
            zmm5[0].o = _mm_permute_ps(arg9[0].o, 0xaa)
            zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm0[0].o, temp0_72[0].o)
            arg8[0].o = _mm_broadcastss_ps(zmm13[0].o)
            arg8[0].o = _mm_fmadd_ps(arg8[0].o, zmm3[0].o, zmm5[0].o)
            arg8[0].o = _mm_fmadd_ps(arg8[0].o, zmm2[0].o, temp0_31)
            temp0_72[0].o = _mm_broadcastss_ps(arg9[0].o)
            zmm5[0].o = _mm_permute_ps(zmm13[0].o, 0x55)
            zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm5[0].o)
            zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm0[0].o, temp0_72[0].o)
            arg6[0].o = _mm_broadcast_ss(var_1ac)
            arg6[0].o = _mm_fmadd_ps(arg6[0].o, zmm3[0].o, zmm5[0].o)
            temp0_72[0].o = _mm_broadcast_ss(var_1a4)
            temp0_72[0].o = _mm_fmadd_ps(temp0_72[0].o, zmm2[0].o, arg6[0].o)
            zmm5[0].o = _mm_broadcast_ss(arg5[0])
            arg6[0].o = _mm_broadcast_ss(arg5[2])
            arg6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg6[0].o)
            arg6[0].o = _mm_fmadd_ps(arg6[0].o, zmm0[0].o, zmm5[0].o)
            zmm5[0].o = _mm_broadcast_ss(arg5[1])
            zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm3[0].o, arg6[0].o)
            arg6[0].o = _mm_broadcast_ss(arg5[3])
            arg6[0].o = _mm_fmadd_ps(arg6[0].o, zmm2[0].o, zmm5[0].o)
            zmm5[0].o = _mm_broadcast_ss(arg5[4])
            arg7[0].o = _mm_broadcast_ss(arg5[6])
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg7[0].o)
            arg5[0].o = _mm_fmadd_ps(arg5[0].o, zmm0[0].o, zmm5[0].o)
            zmm0[0].o = _mm_broadcast_ss(arg5[5])
            zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm3[0].o, arg5[0].o)
            arg5[0].o = _mm_broadcast_ss(arg5[7])
            arg5[0].o = _mm_fmadd_ps(arg5[0].o, zmm2[0].o, zmm0[0].o)
            zmm0[0].o = __vmovshdup_xmmdq_xmmdq(arg8[0].o)
            arg11[0].o = _mm_permute_pd(arg8[0].o, 1)
            zmm3[0].o = zx.o(__vextractps_gpr32_xmmdq_immb(temp0_72[0].o, 0))
            zmm5[0].o = __vmovshdup_xmmdq_xmmdq(temp0_72[0].o)
            arg9[0].o = _mm_permute_pd(temp0_72[0].o, 1)
            arg7[0].o = zx.o(__vextractps_gpr32_xmmdq_immb(arg6[0].o, 0))
            temp0_72[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_72[0].o, zmm3[0].o, 1)
            zmm4 = _mm256_insertf128_ps(arg8, temp0_72[0].o, 1)
            zmm2[0].o = __vmovshdup_xmmdq_xmmdq(arg6[0].o)
            var_240 = zmm4
            zmm4[0].o = _mm_permute_pd(arg6[0].o, 1)
            arg6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(arg6[0].o, arg7[0].o, 1)
            arg5 = _mm256_insertf128_ps(arg6, arg5[0].o, 1)
            int224_t var_220_1 = arg5[0].28
            arg5[0].o = zmm0[0].o f* zmm0[0]
            arg5[0].o = _mm_fmadd_ss(arg5[0].o, arg8[0].d, arg8[0].d)
            arg5[0].o = _mm_fmadd_ss(arg5[0].o, arg11[0], arg11[0])
            zmm5[0].o = zmm5[0].o f* zmm5[0]
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm3[0], zmm3[0])
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, arg9[0], arg9[0])
            zmm0[0].o = zmm2[0].o f* zmm2[0]
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, arg7[0], arg7[0])
            zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm4[0], zmm4[0])
            zmm2[0].o = 0xb22bcc77
            arg6[0].o = 0xb22bcc77
            zmm2[0].o = arg5[0].o f+ -9.99999994e-09f
            zmm3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
            arg5[0].o = arg5[0].o f* arg10[0]
            zmm4[0].o = zmm3[0].o f* zmm3[0]
            zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, arg5[0], arg10[0])
            zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, zmm3[0], zmm3[0])
            zmm3[0].o = zmm4[0].o f* zmm4[0]
            zmm3[0].o = _mm_fnmadd_ss(zmm3[0].o, arg5[0], arg10[0])
            zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, zmm4[0], zmm4[0])
            int32_t temp0_131[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_31, temp0_31)
            arg5[0].o = _mm_cmp_ss(temp0_131, zmm2[0], 2)
            arg7[0].o = 0x3f800000
            arg5[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm3[0].o, arg5[0].o)
            zmm2[0].o = zmm5[0].o f+ -9.99999994e-09f
            zmm3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm5[0].o, zmm5[0])
            zmm4[0].o = zmm5[0].o f* arg10[0]
            zmm5[0].o = zmm3[0].o f* zmm3[0]
            zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm4[0], arg10[0])
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm3[0], zmm3[0])
            zmm3[0].o = zmm5[0].o f* zmm5[0]
            zmm3[0].o = _mm_fnmadd_ss(zmm3[0].o, zmm4[0], arg10[0])
            zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, zmm5[0], zmm5[0])
            zmm2[0].o = _mm_cmp_ss(temp0_131, zmm2[0], 2)
            zmm2[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm3[0].o, zmm2[0].o)
            zmm3[0].o = zmm0[0].o f+ -9.99999994e-09f
            zmm4[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
            zmm0[0].o = zmm0[0].o f* arg10[0]
            zmm5[0].o = zmm4[0].o f* zmm4[0]
            zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm0[0], arg10[0])
            zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm4[0], zmm4[0])
            zmm4[0].o = zmm5[0].o f* zmm5[0]
            zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, zmm0[0], arg10[0])
            zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, zmm5[0], zmm5[0])
            zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
            zmm0[0].o = _mm_cmp_ss(temp0_131, zmm3[0], 2)
            zmm0[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm4[0].o, zmm0[0].o)
            arg10[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg12[0].o, arg13[0].o)
            zmm3[0].o = arg5[0].o f* arg8[0].d
            zmm4[0].o = arg5[0].o f* var_240[1]
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
            arg5[0].o = arg5[0].o f* var_238
            arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg5[0].o, 0x20)
            zmm3[0].o = zmm2[0].o f* var_230
            zmm4[0].o = zmm2[0].o f* var_22c
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
            zmm2[0].o = zmm2[0].o f* var_228
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x20)
            zmm3[0].o = zmm0[0].o f* var_220_1.d
            zmm4[0].o = zmm0[0].o f* var_220_1:4.d
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
            arg6[0].o = zmm0[0].o f* var_220_1:8.d
            zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0[0].o = _mm_cmp_ps(zmm0[0].o, arg10[0].o, 2)
            zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm0 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm0[0].o), 0x1f)
            zmm3 = _mm256_broadcast_ss(-1f)
            float temp0_161[0x8] = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm3, data_1434430a0, zmm0)
            zmm0 = _mm256_broadcastss_ps(temp0_161[0].o)
            arg8 = _mm256_mul_ps(zmm0, arg5)
            zmm3[0].o = __vmovshdup_xmmdq_xmmdq(arg8[0].o)
            zmm0[0].o = _mm_permute_pd(arg8[0].o, 1)
            var_240[0] = arg8[0].d
            var_240[1] = zmm3[0]
            var_238 = zmm0[0]
            arg5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, arg6[0].o, 0x20)
            zmm4[0].o = __vmovshdup_xmmdq_xmmdq(temp0_161[0].o)
            zmm4 = _mm256_broadcastsd_pd(zmm4[0].o)
            arg9 = _mm256_mul_ps(zmm4, zmm2)
            zmm4[0].o = __vmovshdup_xmmdq_xmmdq(arg9[0].o)
            arg7[0].o = _mm_permute_pd(arg9[0].o, 1)
            var_230 = arg9[0]
            var_22c = zmm4[0]
            var_228 = arg7[0]
            zmm2[0].o = _mm_permute_ps(temp0_161[0].o, 0xea)
            zmm2 = _mm256_broadcastsd_pd(zmm2[0].o)
            arg11 = _mm256_mul_ps(zmm2, arg5)
            zmm2[0].o = __vmovshdup_xmmdq_xmmdq(arg11[0].o)
            var_220_1.d = arg11[0]
            var_220_1:4.d = zmm2[0]
            zmm13 = _mm256_broadcast_ss(1.17549435e-38f)
            float temp0_177[0x8] = _mm256_blend_ps(zmm13, arg8, 7)
            arg12 = _mm256_broadcast_ss(nanf)
            arg5 = _mm256_and_ps(temp0_177, arg12)
            arg13 = _mm256_broadcast_ss(9.99999975e-05f)
            arg5 = _mm256_cmp_ps(arg5, arg13, 2)
            result = zx.q(_mm256_movemask_ps(arg5))
            arg5[0].o = _mm_permute_pd(arg11[0].o, 1)
            var_220_1:8.d = arg5[0]
            
            if (result.b == 0xff)
            label_14033a940:
                arg9[0].o = data_142d3f660
                zmm0[0].o = arg9[0].o
                zmm8 = 0x322bcc77
                zmm5[0].o = 0xffffffff
                zmm13[0].o = 0xffffffff
                arg8[0].o = 0x3f000000
            else
                arg6 =
                    _mm256_cmp_ps(_mm256_and_ps(_mm256_blend_ps(zmm13, arg9, 7), arg12), arg13, 2)
                result = zx.q(_mm256_movemask_ps(arg6))
                
                if (result.b == 0xff)
                    goto label_14033a940
                
                arg6 =
                    _mm256_cmp_ps(_mm256_and_ps(_mm256_blend_ps(zmm13, arg11, 7), arg12), arg13, 2)
                result = zx.q(_mm256_movemask_ps(arg6))
                
                if (result.b == 0xff)
                    goto label_14033a940
                
                arg6[0].o = arg8[0].o f+ zmm4[0]
                arg6[0].o = arg5[0].o f+ arg6[0]
                
                if (arg6[0].o f<= zmm5[0])
                    zmm4[0].o f- arg8[0].d
                    int64_t r14_1 = 0
                    
                    if (zmm4[0].o f> arg8[0].d)
                        r14_1 = 0x14
                    
                    int64_t rdi_1
                    rdi_1.b = zmm4[0].o f> arg8[0].d
                    
                    if (arg5[0].o f> *(&var_240 + r14_1))
                        rdi_1 = 2
                    
                    int64_t r12_1 = sx.q(*(&data_143443210 + (rdi_1 << 2)))
                    int64_t r14_2 = sx.q(*(&data_143443210 + (r12_1 << 2)))
                    zmm0[0].o = var_240[zx.q((rdi_1 * 5).d)]
                    zmm0[0].o = zmm0[0].o f- var_240[sx.q((r12_1 * 5).d)]
                    zmm0[0].o = zmm0[0].o f- var_240[sx.q((r14_2 * 5).d)]
                    arg5[0].o = 0x3f800000
                    zmm0[0].o = zmm0[0].o f+ 1f
                    zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    arg5[0].o = 0x3f800000 f/ zmm0[0]
                    arg8[0].o = 0x3f000000
                    arg5[0].o = arg5[0].o f* 0.5f
                    *(&var_1d0 + (rdi_1 << 2)) = arg5[0]
                    arg5[0].o = var_240[sx.q((r12_1 + (rdi_1 << 2)).d)]
                    arg5[0].o = arg5[0].o f+ var_240[sx.q((rdi_1 + (r12_1 << 2)).d)]
                    zmm0[0].o = zmm0[0].o f* 0.5f
                    arg5[0].o = arg5[0].o f* zmm0[0]
                    *(&var_1d0 + (r12_1 << 2)) = arg5[0]
                    arg5[0].o = var_240[sx.q((r14_2 + (rdi_1 << 2)).d)]
                    arg5[0].o = arg5[0].o f+ var_240[sx.q((rdi_1 + (r14_2 << 2)).d)]
                    arg5[0].o = zmm0[0].o f* arg5[0]
                    *(&var_1d0 + (r14_2 << 2)) = arg5[0]
                    arg5[0].o = var_240[sx.q((r14_2 + (r12_1 << 2)).d)]
                    result = sx.q((r12_1 + (r14_2 << 2)).d)
                    arg5[0].o = arg5[0].o f- var_240[result]
                    zmm0[0].o = zmm0[0].o f* arg5[0]
                    float var_1c4_1 = zmm0[0]
                    zmm0[0].o = var_1d0
                else
                    arg5[0].o = 0x3f800000
                    zmm5[0].o = 0x3f800000
                    arg5[0].o = arg6[0].o f+ 1f
                    arg5[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
                    arg5[0].o = 0x3f800000 f/ arg5[0]
                    arg8[0].o = 0x3f000000
                    zmm4[0].o = arg5[0].o f* 0.5f
                    zmm2[0].o = arg7[0].o f- zmm2[0]
                    zmm2[0].o = zmm2[0].o f* zmm4[0]
                    zmm0[0].o = arg11[0].o f- zmm0[0]
                    zmm0[0].o = zmm0[0].o f* zmm4[0]
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0x10)
                    zmm2[0].o = zmm3[0].o f- arg9[0]
                    zmm2[0].o = zmm2[0].o f* zmm4[0]
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x20)
                    arg5[0].o = 0x3f800000 f/ arg5[0]
                    arg5[0].o = arg5[0].o f* 0.5f
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5[0].o, 0x30)
                
                zmm8 = 0x322bcc77
                zmm5[0].o = 0xffffffff
                zmm13[0].o = 0xffffffff
                arg9[0].o = data_142d3f660
            
            arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
            zmm2[0].o = _mm_permute_pd(arg5[0].o, 1)
            arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm2[0].o)
            zmm2[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
            arg5[0].o = arg5[0].o f+ zmm2[0]
            zmm2[0].o = _mm_cmp_ss(zmm8, arg5[0], 6)
            zmm2[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm13[0].o)
            zmm3[0].o = arg5[0].o f* arg8[0].d
            arg5[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
            zmm4[0].o = arg5[0].o f* arg5[0]
            zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, zmm3[0], arg8[0].d)
            zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, arg5[0], arg5[0])
            arg5[0].o = zmm4[0].o f* zmm4[0]
            arg5[0].o = _mm_fnmadd_ss(arg5[0].o, zmm3[0], arg8[0].d)
            arg5[0].o = _mm_fmadd_ss(arg5[0].o, zmm4[0], zmm4[0])
            arg5[0].o = _mm_broadcastss_ps(arg5[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = _mm_broadcastss_ps(zmm2[0].o)
            zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
            zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
            arg5[0].o = __vmovsd_xmmdq_memq(var_220_1:0x10.q)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5[0].o, var_220_1:0x18.d, 0x28)
        
        arg5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm3[0].o = _mm_permute_pd(arg5[0].o, 1)
        arg5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg5[0].o, zmm3[0].o)
        zmm3[0].o = __vmovshdup_xmmdq_xmmdq(arg5[0].o)
        arg5[0].o = arg5[0].o f+ zmm3[0]
        zmm3[0].o = _mm_cmp_ss(zmm8, arg5[0], 6)
        zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm13[0].o)
        zmm4[0].o = arg5[0].o f* arg8[0].d
        arg5[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg5[0].o, arg5[0])
        arg6[0].o = arg5[0].o f* arg5[0]
        arg6[0].o = _mm_fnmadd_ss(arg6[0].o, zmm4[0], arg8[0].d)
        arg6[0].o = _mm_fmadd_ss(arg6[0].o, arg5[0], arg5[0])
        arg5[0].o = arg6[0].o f* arg6[0]
        arg5[0].o = _mm_fnmadd_ss(arg5[0].o, zmm4[0], arg8[0].d)
        arg5[0].o = _mm_fmadd_ss(arg5[0].o, arg6[0], arg6[0])
        arg5[0].o = _mm_broadcastss_ps(arg5[0].o)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg5[0].o = _mm_broadcastss_ps(zmm3[0].o)
        zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg5[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg5[0].o, arg9[0].o)
        zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, arg5[0].o)
        arg1[rax_1 * 3] = zmm0[0].o
        arg1[rax_1 * 3 + 1] = zmm2[0].o
        arg1[rax_1 * 3 + 2] = arg10[0].o
        rsi_1 += 1
    while (r13_1 != rsi_1)
arg6[0].o = var_e8
arg7[0].o = var_d8
arg8[0].o = var_b8
arg9[0].o = var_a8
arg10[0].o = var_98
arg11[0].o = var_88
arg12[0].o = var_68
arg13[0].o = var_58
_mm256_zeroupper()
return result
