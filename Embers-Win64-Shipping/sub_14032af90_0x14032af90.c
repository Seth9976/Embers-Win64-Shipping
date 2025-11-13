// 函数: sub_14032af90
// 地址: 0x14032af90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_18[0x4] = zmm15
float zmm9[0x8]
zmm9[0].o = arg3[0].o
float zmm11[0x8]
zmm11[0].o = arg7
float zmm10[0x8]
zmm10[0].o = arg6
int32_t zmm0[0x8]
zmm0[0].o = *arg4
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg4[1], 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg4[2], 0x20)
float zmm1[0x8]
zmm1[0].o = _mm_broadcast_ss(360f)
float zmm3[0x8]
zmm3[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float zmm12[0x4] = _mm_broadcast_ss(nanf)
uint32_t zmm4[0x8]
zmm4[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm12)
int32_t zmm5[0x8]
zmm5[0].o = _mm_broadcast_ss(8388608f)
zmm4[0].o = _mm_cmp_ps(zmm5[0].o, zmm4[0].o, 2)
zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
zmm4 = _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm4[0].o), 0x1f), 0x1f)
zmm5 = _mm256_cvtepi32_ps(_mm256_cvttps_epi32(zmm3))
zmm3[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm3[0].o, zmm4[0].o)
zmm3[0].o = _mm_fnmadd_ps(zmm3[0].o, zmm1[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcast_ss(0.00872664619f)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
zmm1[0].o = _mm_broadcast_ss(0.159154937f)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1 = _mm256_cvtepi32_ps(_mm256_cvttps_epi32(zmm1))
zmm3[0].o = _mm_broadcast_ss(6.28318548f)
zmm3[0].o = _mm_fnmadd_ps(zmm3[0].o, zmm1[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcast_ss(-0f)
zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
zmm4[0].o = _mm_broadcast_ss(3.14159274f)
zmm1[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
zmm4[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm12)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
zmm5[0].o = _mm_broadcast_ss(1.57079637f)
zmm4[0].o = _mm_cmp_ps(zmm5[0].o, zmm4[0].o, 1)
zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
zmm4 = _mm256_srai_epi32(_mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm4[0].o), 0x1f), 0x1f)
zmm1[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o, zmm4[0].o)
zmm0[0].o &= zmm4[0].o
zmm3[0].o = __vpbroadcastd_xmmdq_memd(0x3f800000)
zmm0[0].o |= zmm3[0].o
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
zmm4[0].o = _mm_broadcast_ss(-2.3889859e-08f)
zmm5[0].o = _mm_broadcast_ss(2.75255616e-06f)
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm3[0].o, zmm4[0].o)
zmm4[0].o = _mm_broadcast_ss(-0.000198408743f)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm3[0].o, zmm5[0].o)
zmm5[0].o = _mm_broadcast_ss(0.00833333097f)
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm3[0].o, zmm4[0].o)
zmm4[0].o = _mm_broadcast_ss(-0.166666672f)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm3[0].o, zmm5[0].o)
zmm5[0].o = _mm_broadcast_ss(1f)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm3[0].o, zmm5[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
zmm4[0].o = _mm_broadcast_ss(-2.60516146e-07f)
float zmm6[0x8]
zmm6[0].o = _mm_broadcast_ss(2.47604949e-05f)
zmm6[0].o = _mm_fmadd_ps(zmm6[0].o, zmm3[0].o, zmm4[0].o)
zmm4[0].o = _mm_broadcast_ss(-0.00138883782f)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm3[0].o, zmm6[0].o)
zmm6[0].o = _mm_broadcast_ss(0.0416666381f)
zmm6[0].o = _mm_fmadd_ps(zmm6[0].o, zmm3[0].o, zmm4[0].o)
zmm4[0].o = _mm_broadcast_ss(-0.5f)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm3[0].o, zmm6[0].o)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm3[0].o, zmm5[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
zmm4[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
zmm5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0)
zmm6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x55)
zmm6[0].o = _mm_permute_ps(zmm6[0].o, 0xd8)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6[0].o)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
zmm5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x55)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
zmm1 = __vxorps_ymmqq_ymmqq_memqq(zmm4, data_143443020)
zmm0 = _mm256_add_ps(zmm1, __vxorps_ymmqq_ymmqq_memqq(zmm0, data_143443040))
zmm1[0].o = *arg5
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg5[1], 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, arg5[2], 0x20)
zmm3[0].o = __vpshufb_xmmdq_xmmdq_memdq(arg3[0].o, data_143443060)
float temp0_80[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
float zmm14[0x8]
zmm14[0].o = arg2[2]
zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
zmm3 = _mm256_cmp_ps(zmm14, zmm3, 1)
uint64_t result = zx.q(_mm256_movemask_ps(zmm3))
float zmm13[0x4]
double zmm7[0x4]
double zmm8[0x4]

if (result.b == 0)
    zmm1[0].o = *(arg2 + 0xc)
    zmm3[0].o = _mm_broadcastss_ps(zmm1[0].o)
    arg3[0].o = *arg2
    zmm8[0].o = *(arg2 + 4)
    zmm5[0].o = _mm_broadcastss_ps(arg3[0].o)
    zmm6[0].o = _mm_permute_ps(zmm0[0].o, 0x1b)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm5[0].o)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm5[0].o, data_142d3f7c0)
    zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm0[0].o, zmm3[0].o)
    zmm6[0].o = _mm_broadcastss_ps(zmm8[0].o)
    zmm7[0].o = _mm_permute_pd(zmm0[0].o, 1)
    zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
    zmm6[0].o = __vfmadd132ps_xmmdq_xmmdq_memdq(zmm6[0].o, zmm5[0].o, data_142d3f7d0)
    zmm5[0].o = *(arg2 + 8)
    zmm7[0].o = _mm_broadcastss_ps(zmm5[0].o)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xb1)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
    zmm0[0].o = __vfmadd132ps_xmmdq_xmmdq_memdq(zmm0[0].o, zmm6[0].o, data_142d3f7b0)
    zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm14[0].o, temp0_80)
    zmm7[0].o = __vmovsd_xmmdq_memq(*(arg2 + 4))
    zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, arg3[0].o, 0x20)
    zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm1[0].o, 0x30)
    zmm4[0].o = _mm_permute_ps(zmm6[0].o, 0xd2)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, arg3[0].o, 0x10)
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm8[0].o, 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm1[0].o, 0x30)
    arg3[0].o = _mm_permute_ps(zmm6[0].o, 0xc9)
    arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm1[0].o)
    zmm4[0].o = _mm_fmsub_ps(zmm4[0].o, zmm7[0].o, arg3[0].o)
    arg3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
    zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, arg3[0].o, zmm6[0].o)
    zmm4[0].o = _mm_permute_ps(arg3[0].o, 0xd2)
    arg3[0].o = _mm_permute_ps(arg3[0].o, 0xc9)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
    zmm1[0].o = _mm_fmsub_ps(zmm1[0].o, zmm7[0].o, zmm4[0].o)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_memdq(zmm1[0].o, arg2[1])
    zmm13 = __vmulps_xmmdq_xmmdq_memdq(zmm14[0].o, data_142e6da00)
else
    int128_t var_110_1 = zmm9[0].o
    zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
    zmm6[0].o = _mm_permute_ps(zmm4[0].o, 1)
    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0x1a)
    zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm4[0].o)
    zmm1[0].o = 0x3f800000
    float temp0_89[0x4] = _mm_broadcastss_ps(0x3f800000)
    zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_89, zmm4[0].o)
    zmm9[0].o = data_142e6da00
    zmm8[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm9[0].o)
    zmm4[0].o = _mm_permute_ps(zmm0[0].o, 4)
    zmm6[0].o = _mm_permute_ps(zmm3[0].o, 0x29)
    zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm6[0].o)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
    zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0x12)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
    float temp0_99[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm9[0].o)
    zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
    zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm9[0].o)
    zmm6[0].o = _mm_permute_pd(temp0_99, 1)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm10[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm8[0].o, 1)
    arg3[0].o = zx.o(0)
    zmm11 = data_143443080
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm10[0].o, temp0_99, 0x10)
    zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 4)
    zmm3 = _mm256_blend_ps(zmm10, zmm3, 0xf)
    zmm1[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
    zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4[0].o, 1)
    zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm8[0].o, 2)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_99, 0x60)
    zmm6 = _mm256_blend_ps(zmm11, zmm6, 1)
    zmm7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm4[0].o, 2)
    zmm7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm8[0].o, 4)
    zmm6[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
    zmm6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_80, zmm6[0].o, 8)
    zmm6 = _mm256_insertf128_ps(zmm7, zmm6[0].o, 1)
    zmm1 = _mm256_insertf128_ps(zmm3, zmm1[0].o, 1)
    float var_100_1[0x8] = zmm1
    zmm1[0].o = *arg2
    zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm7[0].o = _mm_permute_ps(zmm6[0].o, 0xc1)
    zmm6[0].o = _mm_permute_ps(zmm6[0].o, 0xda)
    zmm6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
    zmm6[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_89, zmm6[0].o)
    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + 4), 0x10)
    zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm6[0].o)
    zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm1[0].o, 4)
    zmm7[0].o = _mm_permute_ps(zmm3[0].o, 0x29)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm1[0].o)
    zmm7[0].o = _mm_broadcast_ss(*(arg2 + 0xc))
    zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0x12)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7[0].o)
    zmm7[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm7[0].o)
    zmm5[0].o = *(arg2 + 0x24)
    zmm0[0].o = _mm_broadcastss_ps(zmm14[0].o)
    zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 1)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + 0x28), 0x10)
    zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
    zmm3[0].o = arg2[1].d
    zmm10[0].o = _mm_permute_pd(zmm7[0].o, 1)
    zmm5[0].o = _mm_blend_epi32(zx.o(0), zmm6[0].o, 1)
    zmm14[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm14[0].o, zmm14[0].o)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm7[0].o, 0x10)
    zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 4)
    zmm5[0].o = _mm256_extractf128_ps(zmm5[0].o, 1)
    zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm0[0].o, 1)
    zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm6[0].o, 2)
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm7[0].o, 0x60)
    zmm10 = _mm256_blend_ps(zmm11, zmm10, 1)
    zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm10[0].o, zmm0[0].o, 2)
    zmm7[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 4)
    zmm0[0].o = _mm256_extractf128_ps(zmm10[0].o, 1)
    zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 1)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + 0x14), 0x10)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + 0x18), 0x20)
    zmm13 = __vmulps_xmmdq_xmmdq_memdq(zmm9[0].o, arg2[2])
    zmm0[0].o = _mm_broadcastss_ps(zmm8[0].o)
    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xaa)
    zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
    zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm1[0].o, zmm0[0].o)
    zmm0[0].o = _mm_broadcastss_ps(temp0_99)
    zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm5[0].o, zmm4[0].o)
    float var_f4
    zmm8[0].o = _mm_broadcast_ss(var_f4)
    zmm8[0].o = _mm_fmadd_ps(zmm8[0].o, zmm3[0].o, zmm0[0].o)
    float var_f0
    zmm0[0].o = _mm_broadcast_ss(var_f0)
    float var_e8
    zmm4[0].o = _mm_broadcast_ss(var_e8)
    zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
    zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm1[0].o, zmm0[0].o)
    float var_ec
    zmm6[0].o = _mm_broadcast_ss(var_ec)
    zmm6[0].o = _mm_fmadd_ps(zmm6[0].o, zmm5[0].o, zmm4[0].o)
    float var_e4
    zmm0[0].o = _mm_broadcast_ss(var_e4)
    zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm3[0].o, zmm6[0].o)
    zmm4[0].o = _mm_broadcast_ss(zmm6[0])
    zmm6[0].o = _mm_broadcast_ss(zmm6[2])
    zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
    zmm6[0].o = _mm_fmadd_ps(zmm6[0].o, zmm1[0].o, zmm4[0].o)
    zmm4[0].o = _mm_broadcast_ss(zmm6[1])
    zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm5[0].o, zmm6[0].o)
    zmm6[0].o = _mm_broadcast_ss(zmm6[3])
    zmm6[0].o = _mm_fmadd_ps(zmm6[0].o, zmm3[0].o, zmm4[0].o)
    zmm4[0].o = _mm_broadcast_ss(zmm6[4])
    arg3[0].o = _mm_broadcast_ss(zmm6[6])
    arg3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, arg3[0].o)
    arg3[0].o = _mm_fmadd_ps(arg3[0].o, zmm1[0].o, zmm4[0].o)
    zmm1[0].o = _mm_broadcast_ss(zmm6[5])
    zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm5[0].o, arg3[0].o)
    arg3[0].o = _mm_broadcast_ss(zmm6[7])
    arg3[0].o = _mm_fmadd_ps(arg3[0].o, zmm3[0].o, zmm1[0].o)
    zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm8[0].o)
    zmm9[0].o = _mm_permute_pd(zmm8[0].o, 1)
    zmm4[0].o = zx.o(__vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0))
    zmm5[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
    int32_t temp0_193 = __vextractps_gpr32_xmmdq_immb(zmm6[0].o, 0)
    zmm10[0].o = _mm_permute_pd(zmm0[0].o, 1)
    zmm3[0].o = zx.o(temp0_193)
    zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 1)
    zmm0 = _mm256_insertf128_ps(zmm8, zmm0[0].o, 1)
    zmm7[0].o = __vmovshdup_xmmdq_xmmdq(zmm6[0].o)
    zmm11[0].o = _mm_permute_pd(zmm6[0].o, 1)
    zmm6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm3[0].o, 1)
    arg3 = _mm256_insertf128_ps(zmm6, arg3[0].o, 1)
    int32_t var_180[0x8] = zmm0
    int224_t var_160_1 = arg3[0].28
    zmm1[0].o = zmm1[0].o f* zmm1[0]
    zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, zmm8[0].d, zmm8[0].d)
    zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, zmm9[0], zmm9[0])
    arg3[0].o = zmm5[0].o f* zmm5[0]
    arg3[0].o = _mm_fmadd_ss(arg3[0].o, zmm4[0], zmm4[0])
    arg3[0].o = _mm_fmadd_ss(arg3[0].o, zmm10[0], zmm10[0])
    zmm0[0].o = zmm7[0].o f* zmm7[0].d
    zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm3[0], zmm3[0])
    zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm11[0], zmm11[0])
    zmm5[0].o = zmm1[0].o f+ -9.99999994e-09f
    zmm4[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
    zmm1[0].o = zmm1[0].o f* 0.5f
    zmm7[0].o = zmm4[0].o f* zmm4[0]
    zmm7[0].o = _mm_fnmadd_ss(zmm7[0].o, zmm1[0], 0.5f)
    zmm7[0].o = _mm_fmadd_ss(zmm7[0].o, zmm4[0], zmm4[0])
    zmm6[0].o = zmm7[0].o f* zmm7[0].d
    zmm6[0].o = _mm_fnmadd_ss(zmm6[0].o, zmm1[0], 0.5f)
    zmm6[0].o = _mm_fmadd_ss(zmm6[0].o, zmm7[0].d, zmm7[0].d)
    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
    zmm1[0].o = _mm_cmp_ss(zmm4[0].o, zmm5[0], 2)
    zmm3[0].o = 0x3f800000
    zmm1[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm6[0].o, zmm1[0].o)
    zmm5[0].o = arg3[0].o f+ -9.99999994e-09f
    zmm6[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(arg3[0].o, arg3[0])
    arg3[0].o = arg3[0].o f* 0.5f
    zmm7[0].o = zmm6[0].o f* zmm6[0]
    zmm7[0].o = _mm_fnmadd_ss(zmm7[0].o, arg3[0], 0.5f)
    zmm7[0].o = _mm_fmadd_ss(zmm7[0].o, zmm6[0], zmm6[0])
    zmm6[0].o = zmm7[0].o f* zmm7[0].d
    zmm6[0].o = _mm_fnmadd_ss(zmm6[0].o, arg3[0], 0.5f)
    zmm6[0].o = _mm_fmadd_ss(zmm6[0].o, zmm7[0].d, zmm7[0].d)
    arg3[0].o = _mm_cmp_ss(zmm4[0].o, zmm5[0], 2)
    arg3[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm6[0].o, arg3[0].o)
    zmm3[0].o = zmm0[0].o f+ -9.99999994e-09f
    zmm5[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
    zmm0[0].o = zmm0[0].o f* 0.5f
    zmm6[0].o = zmm5[0].o f* zmm5[0]
    zmm6[0].o = _mm_fnmadd_ss(zmm6[0].o, zmm0[0], 0.5f)
    zmm6[0].o = _mm_fmadd_ss(zmm6[0].o, zmm5[0], zmm5[0])
    zmm5[0].o = zmm6[0].o f* zmm6[0]
    zmm5[0].o = _mm_fnmadd_ss(zmm5[0].o, zmm0[0], 0.5f)
    zmm5[0].o = _mm_fmadd_ss(zmm5[0].o, zmm6[0], zmm6[0])
    zmm0[0].o = _mm_cmp_ss(zmm4[0].o, zmm3[0], 2)
    zmm0[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm5[0].o, zmm0[0].o)
    zmm3[0].o = zmm1[0].o f* zmm8[0].d
    zmm4[0].o = zmm1[0].o f* var_180[1]
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
    int32_t var_178
    zmm1[0].o = zmm1[0].o f* var_178
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x20)
    int32_t var_170
    zmm3[0].o = arg3[0].o f* var_170
    int32_t var_16c
    zmm4[0].o = arg3[0].o f* var_16c
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
    int32_t var_168
    arg3[0].o = arg3[0].o f* var_168
    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg3[0].o, 0x20)
    zmm3[0].o = zmm0[0].o f* var_160_1.d
    zmm4[0].o = zmm0[0].o f* var_160_1:4.d
    zmm5[0].o = _mm_cmp_ps(zmm14[0].o, zmm13, 2)
    zmm5[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
    zmm5 = _mm256_slli_epi32(_mm256_cvtepu16_epi32(zmm5[0].o), 0x1f)
    zmm6 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(_mm256_broadcast_ss(-1f), data_1434430a0, zmm5)
    zmm0[0].o = zmm0[0].o f* var_160_1:8.d
    zmm5 = _mm256_broadcastss_ps(zmm6[0].o)
    zmm1 = _mm256_mul_ps(zmm5, zmm1)
    zmm14[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
    zmm15 = _mm_permute_pd(zmm1[0].o, 1)
    var_180[0] = zmm1[0]
    var_180[1] = zmm14[0]
    float var_178_1 = zmm15[0]
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10)
    zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm6[0].o)
    zmm3 = _mm256_broadcastsd_pd(zmm3[0].o)
    zmm7 = _mm256_mul_ps(zmm3, arg3)
    zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm7[0].o)
    zmm5[0].o = _mm_permute_pd(zmm7[0].o, 1)
    int32_t var_170_1 = zmm7[0].d
    float var_16c_1 = zmm3[0]
    int32_t var_168_1 = zmm5[0]
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 0x20)
    arg3[0].o = _mm_permute_ps(zmm6[0].o, 0xea)
    zmm8 = _mm256_mul_ps(_mm256_broadcastsd_pd(arg3[0].o), zmm0)
    zmm4[0].o = __vmovshdup_xmmdq_xmmdq(zmm8[0].o)
    zmm0[0].o = _mm_permute_pd(zmm8[0].o, 1)
    var_160_1.d = zmm8[0].d
    var_160_1:4.d = zmm4[0]
    var_160_1:8.d = zmm0[0]
    zmm9 = _mm256_broadcast_ss(1.17549435e-38f)
    arg3 = _mm256_blend_ps(zmm9, zmm1, 7)
    zmm10 = _mm256_broadcast_ss(nanf)
    arg3 = _mm256_and_ps(arg3, zmm10)
    zmm11 = _mm256_broadcast_ss(9.99999975e-05f)
    arg3 = _mm256_cmp_ps(arg3, zmm11, 2)
    result = zx.q(_mm256_movemask_ps(arg3))
    
    if (result.b == 0xff)
        zmm0[0].o = data_142d3f660
    else
        arg3 = _mm256_cmp_ps(_mm256_and_ps(_mm256_blend_ps(zmm9, zmm7, 7), zmm10), zmm11, 2)
        result = zx.q(_mm256_movemask_ps(arg3))
        
        if (result.b == 0xff)
            zmm0[0].o = data_142d3f660
        else
            arg3 = _mm256_cmp_ps(_mm256_and_ps(_mm256_blend_ps(zmm9, zmm8, 7), zmm10), zmm11, 2)
            result = zx.q(_mm256_movemask_ps(arg3))
            
            if (result.b == 0xff)
                zmm0[0].o = data_142d3f660
            else
                arg3[0].o = zmm1[0].o f+ zmm3[0]
                zmm9[0].o = zmm0[0].o f+ arg3[0]
                arg3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(arg3[0].o, arg3[0].o)
                
                if (zmm9[0].o f<= arg3[0])
                    zmm3[0].o f- zmm1[0]
                    int32_t rax_3
                    rax_3.b = zmm3[0].o f> zmm1[0]
                    int64_t rdx = 0x14
                    
                    if (zmm3[0].o f<= zmm1[0])
                        rdx = 0
                    
                    uint64_t rdx_1 = 2
                    
                    if (zmm0[0].o f<= *(&var_180 + rdx))
                        rdx_1 = zx.q(rax_3)
                    
                    int64_t r9 = sx.q(*(&data_1434430ec + (rdx_1 << 2)))
                    int64_t r8_1 = sx.q(*(&data_1434430ec + (r9 << 2)))
                    zmm0[0].o = var_180[zx.q((rdx_1 * 5).d)]
                    zmm0[0].o = zmm0[0].o f- var_180[sx.q((r9 * 5).d)]
                    zmm0[0].o = zmm0[0].o f- var_180[sx.q((r8_1 * 5).d)]
                    zmm1[0].o = 0x3f800000
                    zmm0[0].o = zmm0[0].o f+ 1f
                    zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    zmm1[0].o = 0x3f800000 f/ zmm0[0]
                    zmm1[0].o = zmm1[0].o f* 0.5f
                    int128_t var_120
                    *(&var_120 + (rdx_1 << 2)) = zmm1[0]
                    zmm1[0].o = var_180[sx.q((r9 + (rdx_1 << 2)).d)]
                    zmm1[0].o = zmm1[0].o f+ var_180[sx.q((rdx_1 + (r9 << 2)).d)]
                    zmm0[0].o = zmm0[0].o f* 0.5f
                    zmm1[0].o = zmm1[0].o f* zmm0[0]
                    *(&var_120 + (r9 << 2)) = zmm1[0]
                    zmm1[0].o = var_180[sx.q((r8_1 + (rdx_1 << 2)).d)]
                    zmm1[0].o = zmm1[0].o f+ var_180[sx.q((rdx_1 + (r8_1 << 2)).d)]
                    zmm1[0].o = zmm0[0].o f* zmm1[0]
                    *(&var_120 + (r8_1 << 2)) = zmm1[0]
                    zmm1[0].o = var_180[sx.q((r8_1 + (r9 << 2)).d)]
                    result = sx.q((r9 + (r8_1 << 2)).d)
                    zmm1[0].o = zmm1[0].o f- var_180[result]
                    zmm0[0].o = zmm0[0].o f* zmm1[0]
                    int32_t var_114_1 = zmm0[0]
                    zmm0[0].o = var_120
                else
                    zmm0[0].o = 0x3f800000
                    zmm6[0].o = 0x3f800000
                    zmm0[0].o = zmm9[0].o f+ 1f
                    zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    zmm1[0].o = zmm0[0].o f* 0.5f
                    arg3[0].o = zmm5[0].o f- zmm4[0]
                    arg3[0].o = arg3[0].o f* zmm1[0]
                    zmm3[0].o = zmm8[0].o f- zmm15[0]
                    zmm3[0].o = zmm3[0].o f* zmm1[0]
                    arg3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm3[0].o, 0x10)
                    zmm3[0].o = zmm14[0].o f- zmm7[0].d
                    zmm1[0].o = zmm3[0].o f* zmm1[0]
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3[0].o, zmm1[0].o, 0x20)
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    zmm0[0].o = zmm0[0].o f* 0.5f
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x30)
    
    zmm9[0].o = var_110_1
    zmm10[0].o = arg6
    zmm11[0].o = arg7
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    arg3[0].o = _mm_permute_pd(zmm1[0].o, 1)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3[0].o)
    arg3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
    zmm1[0].o = zmm1[0].o f+ arg3[0]
    arg3[0].o = 0x322bcc77
    arg3[0].o = _mm_cmp_ss(0x322bcc77, zmm1[0], 6)
    zmm3[0].o = 0xffffffff
    arg3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(arg3[0].o, 0xffffffff)
    zmm3[0].o = zmm1[0].o f* 0.5f
    zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
    zmm4[0].o = zmm1[0].o f* zmm1[0]
    zmm4[0].o = _mm_fnmadd_ss(zmm4[0].o, zmm3[0], 0.5f)
    zmm4[0].o = _mm_fmadd_ss(zmm4[0].o, zmm1[0], zmm1[0])
    zmm1[0].o = zmm4[0].o f* zmm4[0]
    zmm1[0].o = _mm_fnmadd_ss(zmm1[0].o, zmm3[0], 0.5f)
    zmm1[0].o = _mm_fmadd_ss(zmm1[0].o, zmm4[0], zmm4[0])
    zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = _mm_broadcastss_ps(arg3[0].o)
    zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
    zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = __vmovsd_xmmdq_memq(var_160_1:0x10.q)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, var_160_1:0x18.d, 0x28)
    zmm12 = zmm12
arg3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm13, data_142d4cc30)
zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0xff)
zmm4[0].o = _mm_permute_ps(zmm0[0].o, 0xc9)
zmm5[0].o = _mm_permute_ps(arg3[0].o, 0xd2)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
zmm6[0].o = _mm_permute_ps(arg3[0].o, 0xc9)
zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm0[0].o)
zmm5[0].o = _mm_fmsub_ps(zmm5[0].o, zmm4[0].o, zmm6[0].o)
zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, zmm5[0].o, arg3[0].o)
arg3[0].o = _mm_permute_ps(zmm5[0].o, 0xd2)
zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, zmm4[0].o, arg3[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm12)
arg3[0].o = zmm9[0].o f* 0.5f
arg3[0].o = arg3[0].o f* zmm11[0]
arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
arg3[0].o = zmm9[0].o f* zmm10[0]
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
arg3[0].o = _mm_broadcastss_ps(arg3[0].o)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, arg3[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(arg3[0].o, zmm0[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x30)
*arg1 = zmm1[0].o
arg1[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x14) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
*(arg1 + 0x18) = 1
_mm256_zeroupper()
return result
