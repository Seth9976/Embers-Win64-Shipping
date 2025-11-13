// 函数: sub_14032e790
// 地址: 0x14032e790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_88[0x4] = arg5
float zmm12[0x4] = arg9
int224_t zmm13
zmm13.o = arg8
int32_t zmm0[0x8]
zmm0[0].o = *arg4
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg4[1], 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg4[2], 0x20)
float zmm1[0x8]
zmm1[0].o = data_142d3f730
float zmm3[0x8]
zmm3[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float zmm10[0x8]
zmm10[0].o = data_142d3f770
int32_t zmm4[0x8]
zmm4[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm10[0].o)
int32_t zmm5[0x8]
zmm5[0].o = data_142d3f740
zmm4[0].o = _mm_cmp_ps(zmm5[0].o, zmm4[0].o, 2)
zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
zmm5 = _mm256_cvtepi32_ps(_mm256_cvttps_epi32(zmm3))
zmm3[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm3[0].o, zmm4[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d3f5f0)
zmm1[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d3f620)
zmm1 = _mm256_cvtepi32_ps(_mm256_cvttps_epi32(zmm1))
zmm1[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f6e0)
float zmm14[0x4] = arg7
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = data_142d3f780
zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm3[0].o = __vorps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f6d0)
zmm4[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm10[0].o)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
zmm5[0].o = data_142d3f6a0
zmm4[0].o = _mm_cmp_ps(zmm5[0].o, zmm4[0].o, 1)
zmm4[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
zmm4[0].o = __vpmovzxwd_xmmdq_xmmq(zmm4[0].q)
zmm4[0].o = __vpslld_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
zmm4[0].o = __vpsrad_xmmdq_xmmdq_immb(zmm4[0].o, 0x1f)
zmm0[0].o = __vpblendvb_xmmdq_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o, zmm4[0].o)
zmm1[0].o &= zmm4[0].o
zmm1[0].o |= data_142d3f670
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm4[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_143443100)
zmm4[0].o = __vaddps_xmmdq_xmmdq_memdq(zmm4[0].o, data_143443110)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
zmm4[0].o = __vaddps_xmmdq_xmmdq_memdq(zmm4[0].o, data_143443120)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
zmm4[0].o = __vaddps_xmmdq_xmmdq_memdq(zmm4[0].o, data_143443130)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
zmm4[0].o = __vaddps_xmmdq_xmmdq_memdq(zmm4[0].o, data_143443140)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
double zmm7[0x4]
zmm7[0].o = data_142d3f670
zmm5[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_143443150)
zmm5[0].o = __vaddps_xmmdq_xmmdq_memdq(zmm5[0].o, data_143443160)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm7[0].o)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
zmm5[0].o = __vaddps_xmmdq_xmmdq_memdq(zmm5[0].o, data_143443170)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
zmm4[0].o = __vaddps_xmmdq_xmmdq_memdq(zmm4[0].o, data_143443180)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
zmm4[0].o = __vaddps_xmmdq_xmmdq_memdq(zmm4[0].o, data_142d3f790)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
zmm4[0].o = _mm_permute_ps(zmm1[0].o, 0xaa)
zmm5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0)
float zmm6[0x8]
zmm6[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x55)
zmm6[0].o = _mm_permute_ps(zmm6[0].o, 0xd8)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6[0].o)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
zmm5[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x55)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xd8)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
zmm1 = __vxorps_ymmqq_ymmqq_memqq(zmm4, data_143443020)
zmm0 = __vxorps_ymmqq_ymmqq_memqq(zmm0, data_143443040)
zmm1 = _mm256_add_ps(zmm1, zmm0)
zmm0[0].o = *arg6
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg6[1], 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, arg6[2], 0x20)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(arg3, arg3, 0x1c)
float var_c0[0x4] = arg3
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg3, 0x20)
float zmm11[0x8]
zmm11[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
float zmm15[0x8]
zmm15[0].o = arg2[2]
zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
zmm4 = _mm256_cmp_ps(zmm15, zmm4, 1)
uint64_t result = zx.q(_mm256_movemask_ps(zmm4))
float zmm9[0x8]

if (result.b == 0)
    zmm0[0].o = *(arg2 + 0xc)
    arg5 = _mm_permute_ps(zmm0[0].o, 0)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg5)
    zmm5[0].o = *arg2
    zmm6[0].o = _mm_permute_ps(zmm5[0].o, 0)
    arg3 = zmm7[0].o
    zmm7[0].o = _mm_permute_ps(zmm1[0].o, 0x1b)
    zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
    zmm6[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm6[0].o, data_142d3f7c0)
    zmm7[0].o = *(arg2 + 4)
    zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
    zmm6[0].o = _mm_permute_ps(zmm7[0].o, 0)
    zmm4[0].o = _mm_permute_pd(zmm1[0].o, 1)
    zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm6[0].o)
    zmm4[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm4[0].o, data_142d3f7d0)
    zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
    zmm4[0].o = *(arg2 + 8)
    zmm6[0].o = _mm_permute_ps(zmm4[0].o, 0)
    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xb1)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6[0].o)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f7b0)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm11[0].o)
    zmm6[0].o = __vmovsd_xmmdq_memq(*(arg2 + 4))
    zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm5[0].o, 0x20)
    zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm0[0].o, 0x30)
    zmm9[0].o = _mm_permute_ps(zmm3[0].o, 0xd2)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0x10)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm7[0].o, 0x20)
    zmm7[0].o = arg3
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 0x30)
    zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0xc9)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm9[0].o, zmm6[0].o)
    zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
    zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
    zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(arg5, zmm4[0].o)
    zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm5[0].o = _mm_permute_ps(zmm4[0].o, 0xd2)
    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xc9)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm5[0].o)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4[0].o)
    zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_memdq(zmm0[0].o, arg2[1])
    zmm15[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm15[0].o, data_142e6da00)
else
    zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
    zmm6[0].o = _mm_permute_ps(zmm5[0].o, 1)
    zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0x1a)
    zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm5[0].o)
    zmm5[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm5[0].o)
    zmm9[0].o = data_142e6da00
    float temp0_82[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm9[0].o)
    zmm5[0].o = _mm_permute_ps(zmm1[0].o, 4)
    zmm6[0].o = _mm_permute_ps(zmm4[0].o, 0x29)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6[0].o)
    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xff)
    zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0x12)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4[0].o)
    zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
    float temp0_90[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm9[0].o)
    zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm9[0].o)
    zmm1[0].o = _mm_permute_pd(temp0_90, 1)
    int32_t temp0_94[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
    zmm6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_94, temp0_82, 1)
    zmm10 = data_143443080
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, temp0_90, 0x10)
    zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 4)
    zmm0 = _mm256_blend_ps(zmm6, zmm0, 0xf)
    zmm6[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
    zmm6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm5[0].o, 1)
    zmm6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, temp0_82, 2)
    zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, temp0_90, 0x60)
    zmm0 = _mm256_insertf128_ps(zmm0, zmm6[0].o, 1)
    zmm1 = _mm256_blend_ps(zmm10, zmm1, 1)
    zmm6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 2)
    zmm6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, temp0_82, 4)
    zmm1[0].o = _mm256_extractf128_ps(zmm1[0].o, 1)
    zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm11[0].o, zmm1[0].o, 8)
    zmm1 = _mm256_insertf128_ps(zmm6, zmm1[0].o, 1)
    int32_t var_100_1[0x8] = zmm0
    zmm0[0].o = *arg2
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    arg3 = zmm7[0].o
    zmm7[0].o = _mm_permute_ps(zmm6[0].o, 0xc1)
    zmm6[0].o = _mm_permute_ps(zmm6[0].o, 0xda)
    zmm6[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
    zmm6[0].o = __vsubps_xmmdq_xmmdq_xmmdq(arg3, zmm6[0].o)
    zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg2 + 4), 0x10)
    zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm6[0].o)
    zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm0[0].o, 4)
    zmm7[0].o = _mm_permute_ps(zmm1[0].o, 0x29)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm0[0].o)
    zmm7[0].o = _mm_broadcast_ss(*(arg2 + 0xc))
    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0x12)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
    zmm7[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm7[0].o)
    zmm3[0].o = *(arg2 + 0x24)
    zmm4[0].o = __vmovddup_xmmdq_xmmq(zmm15[0].q)
    zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 1)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg2 + 0x28), 0x10)
    zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
    zmm4[0].o = arg2[1].d
    zmm11[0].o = _mm_permute_pd(zmm7[0].o, 1)
    zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_94, zmm6[0].o, 1)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm7[0].o, 0x10)
    zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 4)
    zmm0[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
    zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 1)
    zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6[0].o, 2)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm7[0].o, 0x60)
    zmm7 = _mm256_blend_ps(zmm10, zmm11, 1)
    zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm1[0].o, 2)
    zmm6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm6[0].o, 4)
    zmm1[0].o = _mm256_extractf128_ps(zmm7[0].o, 1)
    zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4[0].o, 1)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + 0x14), 0x10)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg2 + 0x18), 0x20)
    zmm15[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm9[0].o, arg2[2])
    zmm4[0].o = _mm_permute_ps(temp0_82, 0)
    zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
    zmm5[0].o = _mm_permute_ps(zmm5[0].o, 0xaa)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm5[0].o)
    zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
    zmm5[0].o = _mm_permute_ps(temp0_90, 0)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
    zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
    float var_f4
    zmm5[0].o = _mm_broadcast_ss(var_f4)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
    zmm10[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
    float var_f0
    zmm4[0].o = _mm_broadcast_ss(var_f0)
    zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
    float var_e8
    zmm5[0].o = _mm_broadcast_ss(var_e8)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm5[0].o)
    zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
    float var_ec
    zmm5[0].o = _mm_broadcast_ss(var_ec)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm5[0].o)
    zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
    float var_e4
    zmm5[0].o = _mm_broadcast_ss(var_e4)
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm5[0].o)
    zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm5[0].o)
    zmm5[0].o = _mm_broadcast_ss(zmm1[0])
    zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm7[0].o = _mm_broadcast_ss(zmm1[2])
    zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm7[0].o)
    zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm7[0].o)
    zmm7[0].o = _mm_broadcast_ss(zmm1[1])
    zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
    zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm7[0].o)
    zmm7[0].o = _mm_broadcast_ss(zmm1[3])
    zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm7[0].o)
    zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm7[0].o)
    zmm7[0].o = _mm_broadcast_ss(zmm1[4])
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm7[0].o)
    zmm7[0].o = _mm_broadcast_ss(zmm1[6])
    zmm6[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm7[0].o)
    zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm6[0].o)
    zmm6[0].o = _mm_broadcast_ss(zmm1[5])
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    zmm3[0].o = _mm_broadcast_ss(zmm1[7])
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm10[0].o)
    zmm9[0].o = _mm_permute_pd(zmm10[0].o, 1)
    zmm6[0].o = zx.o(__vextractps_gpr32_xmmdq_immb(zmm4[0].o, 0))
    zmm11[0].o = __vmovshdup_xmmdq_xmmdq(zmm4[0].o)
    int32_t temp0_195 = __vextractps_gpr32_xmmdq_immb(zmm5[0].o, 0)
    zmm12 = _mm_permute_pd(zmm4[0].o, 1)
    zmm7[0].o = zx.o(temp0_195)
    zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm6[0].o, 1)
    zmm4 = _mm256_insertf128_ps(zmm10, zmm4[0].o, 1)
    zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm5[0].o)
    zmm14 = _mm_permute_pd(zmm5[0].o, 1)
    zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm7[0].o, 1)
    zmm13 = _mm256_insertf128_ps(zmm5, zmm0[0].o, 1).28
    int32_t var_180[0x8] = zmm4
    zmm4[0].o = zmm10[0].o f* zmm10[0]
    zmm1[0].o = zmm1[0].o f* zmm1[0]
    zmm1[0].o = zmm4[0].o f+ zmm1[0]
    zmm4[0].o = zmm9[0].o f* zmm9[0]
    zmm5[0].o = zmm1[0].o f+ zmm4[0]
    zmm1[0].o = zmm6[0].o f* zmm6[0]
    zmm4[0].o = zmm11[0].o f* zmm11[0]
    zmm1[0].o = zmm1[0].o f+ zmm4[0]
    zmm4[0].o = zmm12 f* zmm12[0]
    zmm6[0].o = zmm1[0].o f+ zmm4[0]
    zmm1[0].o = zmm7[0].o f* zmm7[0].d
    zmm3[0].o = zmm3[0].o f* zmm3[0]
    zmm1[0].o = zmm1[0].o f+ zmm3[0]
    zmm3[0].o = zmm14 f* zmm14[0]
    zmm1[0].o = zmm1[0].o f+ zmm3[0]
    zmm9[0].o = 0xb22bcc77
    zmm3[0].o = zmm5[0].o f+ -9.99999994e-09f
    zmm7[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm5[0].o, zmm5[0])
    zmm5[0].o = zmm5[0].o f* 0.5f
    zmm0[0].o = zmm7[0].o f* zmm7[0].d
    zmm0[0].o = zmm5[0].o f* zmm0[0]
    zmm0[0].o = 0x3f000000 f- zmm0[0]
    zmm0[0].o = zmm7[0].o f* zmm0[0]
    zmm0[0].o = zmm7[0].o f+ zmm0[0]
    zmm7[0].o = zmm0[0].o f* zmm0[0]
    zmm5[0].o = zmm5[0].o f* zmm7[0].d
    zmm5[0].o = 0x3f000000 f- zmm5[0]
    zmm5[0].o = zmm0[0].o f* zmm5[0]
    zmm0[0].o = zmm0[0].o f+ zmm5[0]
    zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
    zmm3[0].o = _mm_cmp_ss(zmm5[0].o, zmm3[0], 2)
    zmm3[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm0[0].o, zmm3[0].o)
    zmm0[0].o = zmm6[0].o f+ -9.99999994e-09f
    zmm7[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm6[0].o, zmm6[0])
    zmm6[0].o = zmm6[0].o f* 0.5f
    zmm4[0].o = zmm7[0].o f* zmm7[0].d
    zmm4[0].o = zmm6[0].o f* zmm4[0]
    zmm4[0].o = 0x3f000000 f- zmm4[0]
    zmm4[0].o = zmm7[0].o f* zmm4[0]
    zmm4[0].o = zmm7[0].o f+ zmm4[0]
    zmm7[0].o = zmm4[0].o f* zmm4[0]
    zmm6[0].o = zmm6[0].o f* zmm7[0].d
    zmm6[0].o = 0x3f000000 f- zmm6[0]
    zmm6[0].o = zmm4[0].o f* zmm6[0]
    zmm4[0].o = zmm4[0].o f+ zmm6[0]
    zmm0[0].o = _mm_cmp_ss(zmm5[0].o, zmm0[0], 2)
    zmm0[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm4[0].o, zmm0[0].o)
    zmm4[0].o = zmm1[0].o f+ -9.99999994e-09f
    zmm6[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
    zmm1[0].o = zmm1[0].o f* 0.5f
    zmm7[0].o = zmm6[0].o f* zmm6[0]
    zmm7[0].o = zmm1[0].o f* zmm7[0].d
    zmm7[0].o = 0x3f000000 f- zmm7[0].d
    zmm7[0].o = zmm6[0].o f* zmm7[0].d
    zmm6[0].o = zmm6[0].o f+ zmm7[0].d
    zmm7[0].o = zmm6[0].o f* zmm6[0]
    zmm1[0].o = zmm1[0].o f* zmm7[0].d
    zmm1[0].o = 0x3f000000 f- zmm1[0]
    zmm1[0].o = zmm6[0].o f* zmm1[0]
    zmm1[0].o = zmm6[0].o f+ zmm1[0]
    zmm4[0].o = _mm_cmp_ss(zmm5[0].o, zmm4[0], 2)
    zmm1[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0x3f800000, zmm1[0].o, zmm4[0].o)
    zmm4[0].o = zmm3[0].o f* zmm10[0]
    zmm5[0].o = zmm3[0].o f* var_180[1]
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0x10)
    int32_t var_178
    zmm3[0].o = zmm3[0].o f* var_178
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x20)
    int32_t var_170
    zmm4[0].o = zmm0[0].o f* var_170
    int32_t var_16c
    zmm5[0].o = zmm0[0].o f* var_16c
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0x10)
    int32_t var_168
    zmm0[0].o = zmm0[0].o f* var_168
    zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 0x20)
    zmm0[0].o = zmm1[0].o f* zmm13.d
    zmm4[0].o = zmm1[0].o f* zmm13:4.d
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 0x10)
    zmm1[0].o = zmm1[0].o f* zmm13:8.d
    zmm9[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
    zmm0[0].o = _mm_cmp_ps(temp0_94, zmm15[0].o, 2)
    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm0[0].o = __vpmovzxwd_xmmdq_xmmq(zmm0[0].q)
    zmm0[0].o = __vpslld_xmmdq_xmmdq_immb(zmm0[0].o, 0x1f)
    zmm1 = data_1434431a0
    zmm7 = __vblendvps_ymmqq_ymmqq_memqq_ymmqq(zmm1, data_1434430a0, zmm0)
    zmm0[0].o = _mm_permute_ps(zmm7[0].o, 0)
    zmm0 = _mm256_mul_ps(_mm256_insertf128_ps(zmm0, zmm0[0].o, 1), zmm3)
    zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
    zmm4[0].o = _mm_permute_pd(zmm0[0].o, 1)
    var_180[0] = zmm0[0]
    var_180[1] = zmm1[0]
    int32_t var_178_1 = zmm4[0]
    zmm3[0].o = _mm_permute_ps(zmm7[0].o, 0x55)
    zmm3 = _mm256_insertf128_ps(zmm3, zmm3[0].o, 1)
    zmm5 = _mm256_mul_ps(zmm3, zmm5)
    zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm5[0].o)
    zmm6[0].o = _mm_permute_pd(zmm5[0].o, 1)
    int32_t var_170_1 = zmm5[0]
    float var_16c_1 = zmm3[0]
    float var_168_1 = zmm6[0]
    zmm7[0].o = _mm_permute_ps(zmm7[0].o, 0xaa)
    zmm10 = _mm256_mul_ps(_mm256_insertf128_ps(zmm7, zmm7[0].o, 1), zmm9)
    zmm9[0].o = __vmovshdup_xmmdq_xmmdq(zmm10[0].o)
    arg5 = _mm_permute_pd(zmm10[0].o, 1)
    int224_t var_160_1
    var_160_1.d = zmm10[0]
    var_160_1:4.d = zmm9[0]
    var_160_1:8.d = arg5[0]
    zmm7 = __vcmpps_ymmqq_ymmqq_memqq_immb(
        __vandps_ymmqq_ymmqq_memqq(__vblendps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc9300, 0xf8), 
            data_142fc9320), 
        data_1434431c0, 2)
    result = zx.q(_mm256_movemask_ps(zmm7))
    
    if (result.b == 0xff)
        zmm0[0].o = data_142d3f660
    else
        zmm7 = __vcmpps_ymmqq_ymmqq_memqq_immb(
            __vandps_ymmqq_ymmqq_memqq(
                __vblendps_ymmqq_ymmqq_memqq_immb(zmm5, data_142fc9300, 0xf8), data_142fc9320), 
            data_1434431c0, 2)
        result = zx.q(_mm256_movemask_ps(zmm7))
        
        if (result.b == 0xff)
            zmm0[0].o = data_142d3f660
        else
            zmm7 = __vcmpps_ymmqq_ymmqq_memqq_immb(
                __vandps_ymmqq_ymmqq_memqq(
                    __vblendps_ymmqq_ymmqq_memqq_immb(zmm10, data_142fc9300, 0xf8), 
                    data_142fc9320), 
                data_1434431c0, 2)
            result = zx.q(_mm256_movemask_ps(zmm7))
            
            if (result.b == 0xff)
                zmm0[0].o = data_142d3f660
            else
                zmm7[0].o = zmm0[0].o f+ zmm3[0]
                zmm11[0].o = arg5 f+ zmm7[0].d
                zmm7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
                
                if (zmm11[0].o f<= zmm7[0].d)
                    zmm3[0].o f- zmm0[0]
                    int32_t rdx
                    rdx.b = zmm3[0].o f> zmm0[0]
                    int64_t rax_3 = 0x14
                    
                    if (zmm3[0].o f<= zmm0[0])
                        rax_3 = 0
                    
                    uint64_t rax_4 = 2
                    
                    if (arg5 f<= *(&var_180 + rax_3))
                        rax_4 = zx.q(rdx)
                    
                    int64_t r9 = sx.q(*(&data_1434431e0 + (rax_4 << 2)))
                    int64_t r8_1 = sx.q(*(&data_1434431e0 + (r9 << 2)))
                    zmm0[0].o = var_180[zx.q((rax_4 * 5).d)]
                    zmm0[0].o = zmm0[0].o f- var_180[sx.q((r9 * 5).d)]
                    zmm0[0].o = zmm0[0].o f- var_180[sx.q((r8_1 * 5).d)]
                    zmm0[0].o = zmm0[0].o f+ 1f
                    zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    zmm1[0].o = zmm0[0].o f* 0.5f
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    zmm0[0].o = zmm0[0].o f* 0.5f
                    int128_t var_110
                    *(&var_110 + (rax_4 << 2)) = zmm0[0]
                    zmm0[0].o = var_180[sx.q((r9 + (rax_4 << 2)).d)]
                    zmm0[0].o = zmm0[0].o f+ var_180[sx.q((rax_4 + (r9 << 2)).d)]
                    zmm0[0].o = zmm0[0].o f* zmm1[0]
                    *(&var_110 + (r9 << 2)) = zmm0[0]
                    zmm0[0].o = var_180[sx.q((r8_1 + (rax_4 << 2)).d)]
                    zmm0[0].o = zmm0[0].o f+ var_180[sx.q((rax_4 + (r8_1 << 2)).d)]
                    zmm0[0].o = zmm1[0].o f* zmm0[0]
                    zmm3[0].o = var_180[sx.q((r8_1 + (r9 << 2)).d)]
                    result = sx.q((r9 + (r8_1 << 2)).d)
                    zmm3[0].o = zmm3[0].o f- var_180[result]
                    *(&var_110 + (r8_1 << 2)) = zmm0[0]
                    zmm0[0].o = zmm1[0].o f* zmm3[0]
                    int32_t var_104_1 = zmm0[0]
                    zmm0[0].o = var_110
                else
                    zmm0[0].o = zmm11[0].o f+ 1f
                    zmm0[0].o = __vsqrtss_xmmdq_xmmdq_xmmd(zmm0[0].o, zmm0[0])
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    zmm3[0].o = zmm0[0].o f* 0.5f
                    zmm6[0].o = zmm6[0].o f- zmm9[0]
                    zmm6[0].o = zmm6[0].o f* zmm3[0]
                    zmm4[0].o = zmm10[0].o f- zmm4[0]
                    zmm4[0].o = zmm4[0].o f* zmm3[0]
                    zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm4[0].o, 0x10)
                    zmm1[0].o = zmm1[0].o f- zmm5[0]
                    zmm1[0].o = zmm1[0].o f* zmm3[0]
                    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 0x20)
                    zmm0[0].o = 0x3f800000 f/ zmm0[0]
                    zmm0[0].o = zmm0[0].o f* 0.5f
                    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x30)
    
    zmm10[0].o = data_142d3f770
    zmm13.o = arg8
    zmm7[0].o = data_142d3f670
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm3[0].o = _mm_permute_pd(zmm1[0].o, 1)
    zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
    zmm1[0].o = zmm1[0].o f+ zmm3[0]
    zmm3[0].o = 0x322bcc77
    zmm3[0].o = _mm_cmp_ss(0x322bcc77, zmm1[0], 6)
    zmm4[0].o = 0xffffffff
    zmm3[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm3[0].o, 0xffffffff)
    zmm4[0].o = zmm1[0].o f* 0.5f
    zmm1[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm1[0].o, zmm1[0])
    zmm5[0].o = zmm1[0].o f* zmm1[0]
    zmm5[0].o = zmm5[0].o f* zmm4[0]
    zmm5[0].o = 0x3f000000 f- zmm5[0]
    zmm5[0].o = zmm1[0].o f* zmm5[0]
    zmm1[0].o = zmm1[0].o f+ zmm5[0]
    zmm5[0].o = zmm1[0].o f* zmm1[0]
    zmm4[0].o = zmm4[0].o f* zmm5[0]
    zmm4[0].o = 0x3f000000 f- zmm4[0]
    zmm4[0].o = zmm1[0].o f* zmm4[0]
    zmm1[0].o = zmm1[0].o f+ zmm4[0]
    zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0)
    zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm1[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f660)
    zmm1[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
    zmm0[0].o = __vmovsd_xmmdq_memq(var_160_1:0x10.q)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, var_160_1:0x18.d, 0x28)
    zmm12 = arg9
    zmm14 = arg7
zmm3[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(zmm14, zmm13.o)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm12, 0x28)
float temp0_314[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(var_c0 f* 0.5f, 0), zmm3[0].o)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
zmm5[0].o = _mm_permute_ps(zmm4[0].o, 1)
zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0x1a)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm4[0].o)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm4[0].o)
zmm5[0].o = _mm_permute_ps(zmm1[0].o, 4)
zmm6[0].o = _mm_permute_ps(zmm3[0].o, 0x29)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xff)
zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0x12)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm15[0].o, zmm3[0].o)
zmm6[0].o = _mm_permute_ps(zmm15[0].o, 0xc9)
zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm1[0].o)
zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
zmm5[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm4[0].o, 3)
zmm5 = _mm256_shuffle_ps(zmm3, zmm5, 0)
zmm6[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm6[0].o, zmm6[0].o)
zmm5 = _mm256_shuffle_ps(zmm5, zmm6, 0x42)
zmm6 = _mm256_blend_ps(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1), zmm5, 0xc0)
zmm6[0].o = _mm256_extractf128_ps(zmm6[0].o, 1)
zmm6[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm4[0].o, 2)
zmm6[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6[0].o, zmm3[0].o, 0x60)
zmm3 = _mm256_blend_ps(
    _mm256_blend_ps(__vunpckhpd_ymmqq_ymmqq_memqq(zmm3, data_143443080), zmm1, 2), zmm4, 4)
zmm4[0].o = _mm256_extractf128_ps(zmm3[0].o, 1)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 8)
zmm4[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_314, temp0_314)
zmm7[0].o = data_142e6d9f0
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm7[0].o)
float temp0_351[0x4] =
    __vmulps_xmmdq_xmmdq_xmmdq(__vaddps_xmmdq_xmmdq_xmmdq(temp0_314, temp0_314), zmm7[0].o)
zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm1[0].o, 4)
zmm5[0].o = _mm_permute_ps(zmm4[0].o, 0)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
zmm7[0].o = _mm_permute_ps(zmm4[0].o, 0x55)
zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6[0].o)
zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm7[0].o)
zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xaa)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
zmm4[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm4[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
zmm4[0].o = _mm_permute_ps(temp0_351, 0)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm1[0].o)
zmm4[0].o = _mm_permute_ps(temp0_351, 0x55)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm6[0].o)
float temp0_367[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(temp0_351, 0xaa), zmm3[0].o)
zmm1[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm10[0].o)
zmm3[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm10[0].o)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
arg3 = __vandps_xmmdq_xmmdq_xmmdq(temp0_367, zmm10[0].o)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, arg3)
float temp0_373[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0x24)
zmm1[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(temp0_373, zmm1[0].o, 8)
*arg1 = zmm1[0].o
arg1[1].d = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + 0x14) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
*(arg1 + 0x18) = 1
_mm256_zeroupper()
return result
