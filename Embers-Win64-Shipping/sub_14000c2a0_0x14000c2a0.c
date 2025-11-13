// 函数: sub_14000c2a0
// 地址: 0x14000c2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg3)
int64_t rax = r8 * 3
float zmm13[0x4] = *(arg1 + (r8 << 2) + 0x78)
float zmm0[0x8]
zmm0[0].o = arg1[r8 + 0xe]
float zmm1[0x8]
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
int32_t zmm2[0x8]
zmm2[0].o = _mm_broadcast_ss(*(&arg1[r8] + 0xe4))
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
float zmm3[0x8]
zmm3[0].o = _mm_broadcast_ss(*(&arg1[r8] + 0xec))
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
zmm1[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f* *(&arg1[r8] + 0xe8)
float zmm4[0x8]
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x88)
zmm4[0].o = _mm_permute_ps(zmm4[0].o, 0xd8)
uint32_t zmm5[0x8]
zmm5[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x4e)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm1[0].o, 0x1c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_broadcast_ss(1f)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rax << 2) + 0x64), 0x1d)
zmm2[0].o = *(arg1 + (rax << 2) + 0x60)
float temp0_21[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rax << 2) + 0x68), 0x2b)
double zmm6[0x2] = _mm_broadcastss_ps(zmm0[0].o)
zmm6 = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm6)
float temp0_25[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm3[0].o, 0xea), zmm1[0].o, zmm6)
zmm6 = _mm_fmadd_ps(_mm_permute_ps(zmm5[0].o, 0xd5), temp0_21, temp0_25)
float temp0_28[0x4] = _mm_permute_ps(zmm5[0].o, 0xea)
float temp0_29[0x4] = _mm_permute_ps(zmm0[0].o, 0xd5)
float temp0_31[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_29), zmm2[0].o, temp0_28)
zmm4[0].o = _mm_broadcastss_ps(zmm3[0].o)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, temp0_21, temp0_31)
float temp0_34[0x4] = _mm_permute_ps(zmm3[0].o, 0xd5)
float temp0_35[0x4] = _mm_broadcastss_ps(zmm5[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_35)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm2[0].o, temp0_34)
float temp0_39[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm0[0].o, 0xea), temp0_21, zmm1[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 0x9c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x60)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x8c)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm5[0].o, 0x20)
zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 0x4e)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm3[0].o, 0x14)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 4)
zmm3[0].o = _mm_broadcastss_ps(zmm6)
zmm5[0].o = _mm_permute_ps(zmm6, 0xd5)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm1[0].o, zmm3[0].o)
float temp0_52[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm6, 0xea), zmm0[0].o, zmm5[0].o)
zmm3[0].o = _mm_broadcastss_ps(zmm4[0].o)
zmm5[0].o = _mm_permute_ps(zmm4[0].o, 0xd5)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm1[0].o, zmm3[0].o)
float zmm12[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm4[0].o, 0xea), zmm0[0].o, zmm5[0].o)
zmm3[0].o = _mm_broadcastss_ps(temp0_39)
zmm4[0].o = _mm_permute_ps(temp0_39, 0xd5)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm1[0].o, zmm3[0].o)
float temp0_63[0x4] = _mm_permute_ps(temp0_39, 0xea)
zmm1[0].o = __vmovsd_xmmdq_memq(*(arg1 + (rax << 2) + 0x80))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + (rax << 2) + 0x88), 0x20)
float zmm15[0x4] = _mm_fmadd_ps(temp0_63, zmm0[0].o, zmm4[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + (rax << 2) + 0xc0))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rax << 2) + 0xc8), 0x20)
float var_168[0x4] = zmm0[0].o
zmm5[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float temp0_70[0x4] = _mm_broadcast_ss(-0f)
float zmm8[0x4] = _mm_permute_pd(zmm5[0].o, 1)
zmm0[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(zmm8, temp0_70)
zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm5[0].o)
zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_70)
zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0x80)
float temp0_76[0x4] = _mm_permute_ps(zmm12, 0xc1)
zmm2[0].o = _mm_permute_ps(zmm5[0].o, 0xd5)
zmm6 = _mm_permute_ps(zmm15, 0xc1)
zmm6 = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm6), zmm1[0].o, temp0_76)
float temp0_81[0x4] = _mm_permute_ps(zmm15, 0xda)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_81)
float temp0_84[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovshdup_xmmdq_xmmdq(zmm15), zmm12, 0x68)
zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, zmm1[0].o, temp0_84)
float zmm10[0x8]
zmm10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, temp0_70)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5[0].o, 0x9c)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 0x20)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm10[0].o, 0x10)
zmm3[0].o = zmm3[0].q | zmm5[0].q << 0x40
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, zmm6, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0x4a)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 0x20)
zmm3[0].o = _mm_permute_ps(temp0_52, 0xc0)
zmm6 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm10[0].o, zmm5[0].o, 0x40)
float temp0_99[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm6, 
        __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm15, 
            __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm12, zmm15, 0x30), 0x80)), 
    zmm0[0].o, zmm3[0].o)
zmm3[0].o = _mm_permute_ps(zmm15, 0x46)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm12, 0x68)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm3[0].o)
zmm6 = _mm_permute_ps(__vshufps_xmmdq_xmmdq_xmmdq_immb(zmm15, zmm12, 0xc), 0x78)
zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, zmm0[0].o, zmm6)
zmm0 = *arg6
int32_t temp0_106 = _mm256_movemask_ps(zmm0)
int32_t temp0_107 = __vextractps_gpr32_xmmdq_immb(temp0_52, 1)
int32_t temp0_108 = __vextractps_gpr32_xmmdq_immb(temp0_52, 2)
int32_t temp0_109 = __vextractps_gpr32_xmmdq_immb(zmm12, 2)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm8, zmm4[0].o, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm4[0].o, 0x20)
float temp0_112[0x4] = __vmovshdup_xmmdq_xmmdq(zmm12)
zmm4[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm10[0].o, zmm5[0].o, 0)
double var_198[0x2] = zmm5[0].o
zmm4[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm5[0].o, 0xc8)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm3[0].o)
zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, temp0_99, zmm1[0].o)
zmm1[0].o = __vmovddup_xmmdq_xmmq(zmm13[0].q)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
int32_t temp0_119 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 0)
int32_t temp0_120 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 1)
int32_t temp0_121 = __vextractps_gpr32_xmmdq_immb(zmm1[0].o, 2)
zmm10[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm13, zmm2[0].o)
zmm6 = __vmovshdup_xmmdq_xmmdq(zmm10[0].o)
double temp0_124[0x2] = _mm_permute_pd(zmm10[0].o, 1)
zmm2 = _mm256_blend_ps(_mm256_broadcast_ss(1.17549435e-38f), zmm10, 7)
zmm1 = _mm256_broadcast_ss(nanf)
zmm4 = _mm256_and_ps(zmm2, zmm1)
float var_178[0x4] = zmm15
float var_128[0x4] = zmm13
float var_138 = temp0_112[0]
double var_158[0x2] = zmm6
float zmm7[0x4]
float zmm9[0x4]
double zmm11[0x2]
float zmm14[0x4]

if (temp0_106 != 0xff)
    zmm3 = _mm256_broadcast_ss(9.99999994e-09f)
    zmm2 = _mm256_cmp_ps(zmm4, zmm3, 2)
    zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
    zmm5 = _mm256_cmpeq_epi32(zmm0, zmm4)
    zmm2 = _mm256_or_ps(zmm2, zmm5)
    zmm4[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
    zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
    zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    char temp0_229 = __vpmovmskb_gpr32d_xmmdq(zmm2[0].o)
    zmm2[0].o = zx.o(temp0_119)
    int128_t var_1a8_2 = zmm2[0].o
    zmm4[0].o = zx.o(temp0_120)
    
    if (temp0_229 != 0xff)
    label_14000c9f1:
        float temp0_255[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_124, zmm4[0].o, 0x2a)
        float temp0_256[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_124, zmm4[0].o, 0x1c)
        zmm1[0].o = zx.o(temp0_121)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm10[0].o, temp0_124, 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, temp0_124, 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x30)
        zmm0[0].o = var_1a8_2
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, 1f, 0x36)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm4[0].o, 0x2a)
        zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm4[0].o, 0x1c)
        zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm6)
        zmm5[0].o = _mm_fmsub_ps(zmm5[0].o, zmm2[0].o, zmm3[0].o)
        float temp0_265[0x4] = _mm_broadcastss_ps(zmm5[0].o)
        float temp0_266[0x4] = _mm_permute_ps(zmm5[0].o, 0x55)
        float temp0_267[0x4] = _mm_permute_ps(zmm5[0].o, 0xaa)
        float temp0_268[0x4] = _mm_permute_ps(zmm5[0].o, 0xff)
        zmm3[0].o = 0x3f800000
        zmm6 = __vshufps_xmmdq_xmmdq_xmmdq_immb(0x3f800000, zmm1[0].o, 0)
        zmm5[0].o = __vunpcklps_xmmdq_xmmdq_xmmdq(temp0_124, zmm4[0].o)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm5[0].o = zmm2[0].q | zmm5[0].q << 0x40
        zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm2[0].o)
        zmm5[0].o = _mm_fmsub_ps(zmm5[0].o, temp0_256, zmm6)
        zmm6 = __vshufps_xmmdq_xmmdq_xmmdq_immb(_mm_broadcastss_ps(zmm0[0].o), zmm10[0].o, 4)
        zmm0[0].o = _mm_permute_ps(zmm10[0].o, 0x55)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm10[0].o, 0xaa)
        float temp0_279[0x4] =
            _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o), temp0_255, zmm6)
        zmm0[0].o = _mm_permute_ps(zmm5[0].o, 0xd8)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_279, zmm0[0].o)
        zmm2[0].o = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm2[0].o = _mm_permute_ps(zmm0[0].o, 0x39)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_266, temp0_267)
        zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, temp0_265, temp0_268)
        zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm0[0].o f- zmm2[0]
        
        if (zmm0[0].o f!= zmm2[0] || not(is_ordered.d(zmm0[0].o, zmm2[0])))
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 1f, 0x36)
            zmm3[0].o = data_142d4cc30
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1[0].o, 0x10)
            zmm3[0].o = _mm_permute_ps(temp0_279, 0x66)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = _mm_permute_ps(temp0_279, 0x33)
            zmm1[0].o = _mm_fmsub_ps(zmm1[0].o, zmm2[0].o, zmm3[0].o)
            float temp0_296[0x4] = _mm_fmsub_ps(temp0_266, temp0_256, zmm1[0].o)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm10[0].o, 0x9d)
            zmm3[0].o = __vmovddup_xmmdq_xmmq(temp0_279[0].q)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
            zmm3[0].o = _mm_permute_pd(temp0_279, 3)
            zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, temp0_256, zmm3[0].o)
            float temp0_302[0x4] = _mm_fmsub_ps(temp0_265, zmm2[0].o, zmm1[0].o)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm10[0].o, var_158[0].d, 0x20)
            zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, var_1a8_2.d, 0x30)
            zmm2[0].o = _mm_permute_ps(zmm10[0].o, 0x60)
            zmm3[0].o = __vmovddup_xmmdq_xmmq(zmm5[0].q)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm3[0].o = _mm_broadcastss_ps(zmm5[0].o)
            zmm2[0].o = _mm_fmsub_ps(zmm2[0].o, zmm1[0].o, zmm3[0].o)
            float temp0_310[0x4] = _mm_fmsub_ps(temp0_267, temp0_255, zmm2[0].o)
            zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
            zmm2[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 1)
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, temp0_124, 1)
            zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x11)
            zmm3[0].o = _mm_permute_ps(zmm5[0].o, 0x66)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
            zmm3[0].o = _mm_permute_ps(zmm5[0].o, 0xcc)
            zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, temp0_255, zmm3[0].o)
            float temp0_319[0x4] = _mm_fmsub_ps(temp0_268, zmm1[0].o, zmm2[0].o)
            zmm1[0].o = data_142fc92f0
            zmm0[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_319, zmm0[0].o)
            zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_296, zmm0[0].o)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_310, zmm0[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_302, zmm0[0].o)
            zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x77)
            zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 0x77)
            zmm4[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 0x22)
        else
            zmm4[0].o = data_142d4cc20
            zmm1[0].o = data_142d4cc30
        
        zmm15 = var_178
        zmm8 = var_168
        zmm12 = zmm12
        zmm6 = var_198
        zmm2[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
        zmm9 = _mm_permute_pd(zmm3[0].o, 1)
        zmm10[0].o = _mm_permute_ps(zmm3[0].o, 0xe7)
        zmm11 = __vmovshdup_xmmdq_xmmdq(zmm4[0].o)
        zmm13 = _mm_permute_pd(zmm4[0].o, 1)
        zmm14 = _mm_permute_ps(zmm4[0].o, 0xe7)
        zmm5[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
        zmm0[0].o = _mm_permute_pd(zmm1[0].o, 1)
        zmm7 = _mm_permute_ps(zmm1[0].o, 0xe7)
    else
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm6, var_1a8_2.d, 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm4[0].o, 0x20)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, 0x800000, 0x30)
        zmm6 = var_158
        zmm2 = _mm256_or_ps(
            _mm256_cmp_ps(
                _mm256_and_ps(_mm256_insertf128_ps(zmm2, _mm_broadcastss_ps(0x800000), 1), zmm1), 
                zmm3, 2), 
            zmm5)
        zmm5[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm5[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0xff)
            goto label_14000c9f1
        
        zmm2[0].o = zx.o(0)
        zmm0 = _mm256_cmpeq_epi32(zmm0, zmm2)
        zmm2[0].o = zx.o(temp0_121)
        zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_124, zmm4[0].o, 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm2[0].o, 0x20)
        zmm5[0].o = 0x800000
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, 0x800000, 0x30)
        zmm5[0].o = _mm_broadcastss_ps(0x800000)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm5[0].o, 1)
        zmm1 = _mm256_cmp_ps(_mm256_and_ps(zmm2, zmm1), zmm3, 2)
        zmm0 = _mm256_or_ps(zmm1, zmm0)
        zmm1[0].o = _mm256_extractf128_ps(zmm0[0].o, 1)
        zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm0[0].o) != 0xff)
            goto label_14000c9f1
        
        zmm0[0].o = 0x3f800000
        zmm7 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_99, temp0_99)
        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm14 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_70, temp0_70)
        zmm13 = __vxorpd_xmmdq_xmmdq_xmmdq(zmm13, zmm13)
        zmm11 = 0x3f800000
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        zmm10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm10[0].o)
        zmm9 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_52, temp0_52)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm3[0].o = 0x3f800000
        zmm8 = var_168
        zmm6 = var_198
    
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0x10)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x20)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm7, 0x30)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm11, 0x10)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm13, 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm14, 0x30)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x10)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm9, 0x20)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm10[0].o, 0x30)
    zmm3[0].o = _mm_broadcast_ss(arg4[1])
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm3[0].o = _mm_broadcast_ss(*arg4)
    zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm2[0].o, zmm3[0].o)
    zmm2[0].o = _mm_broadcast_ss(arg4[2])
    zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, zmm0[0].o, zmm1[0].o)
    zmm0[0].o = temp0_70
    zmm0[0].o = __vxorps_xmmdq_xmmdq_memdq(zmm0[0].o, var_128)
    zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    zmm1[0].o = _mm_permute_ps(zmm6, 0xc9)
    zmm3[0].o = _mm_broadcast_ss(-0f)
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm3[0].o = _mm_permute_ps(zmm2[0].o, 0xd2)
    zmm4[0].o = _mm_permute_ps(zmm6, 0xd2)
    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xc9)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
    zmm2[0].o = _mm_fmsub_ps(zmm2[0].o, zmm1[0].o, zmm3[0].o)
    zmm1[0].o = zx.o(temp0_107)
    zmm3[0].o = zx.o(temp0_108)
    zmm4[0].o = temp0_52
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 0x10)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x20)
    zmm3[0].o = zx.o(temp0_109)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm12, var_138, 0x10)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x20)
    zmm4[0].o = _mm_broadcastss_ps(zmm2[0].o)
    zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0xd5)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, zmm1[0].o, zmm4[0].o)
    zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0xea)
    zmm2[0].o = arg5
    zmm2[0].o = _mm_broadcastss_ps(zmm2[0].o)
    zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm2[0].o, zmm8)
else
    zmm0 = _mm256_broadcast_ss(9.99999994e-09f)
    zmm2 = _mm256_cmp_ps(zmm4, zmm0, 2)
    char temp0_131 = _mm256_movemask_ps(zmm2)
    zmm5[0].o = zx.o(temp0_119)
    zmm3[0].o = zx.o(temp0_120)
    
    if (temp0_131 != 0xff)
    label_14000c704:
        float temp0_148[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_124, zmm3[0].o, 0x2a)
        float temp0_149[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_124, zmm3[0].o, 0x1c)
        zmm15 = zx.o(temp0_121)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm10[0].o, temp0_124, 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_124, 0x20)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm15, 0x30)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, 1f, 0x36)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm3[0].o, 0x2a)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm3[0].o, 0x1c)
        zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm4[0].o)
        zmm2[0].o = _mm_fmsub_ps(zmm2[0].o, zmm0[0].o, zmm1[0].o)
        zmm0[0].o = _mm_broadcastss_ps(zmm2[0].o)
        float var_1a8_1[0x4] = zmm0[0].o
        zmm0[0].o = _mm_permute_ps(zmm2[0].o, 0x55)
        float var_188_1[0x4] = zmm0[0].o
        zmm0[0].o = zmm5[0].o
        zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0xaa)
        zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0xff)
        zmm8 = 0x3f800000
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(0x3f800000, zmm15, 0)
        zmm6 = __vunpcklps_xmmdq_xmmdq_xmmdq(temp0_124, zmm3[0].o)
        zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
        float temp0_166[0x4] = _mm_fmsub_ps(
            __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].q | zmm6[0] << 0x40, zmm4[0].o), temp0_149, 
            zmm2[0].o)
        float var_108_1 = zmm0[0]
        zmm2[0].o = _mm_broadcastss_ps(zmm0[0].o)
        zmm2[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm10[0].o, 4)
        zmm6 = _mm_permute_ps(zmm10[0].o, 0x55)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm10[0].o, 0xaa)
        float temp0_172[0x4] =
            _mm_fmsub_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm0[0].o), temp0_148, zmm2[0].o)
        zmm0[0].o = _mm_permute_ps(temp0_166, 0xd8)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_172, zmm0[0].o)
        zmm2[0].o = _mm_permute_pd(zmm0[0].o, 1)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm2[0].o = _mm_permute_ps(zmm0[0].o, 0x39)
        zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
        zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(var_188_1, zmm1[0].o)
        zmm2[0].o = __vfmadd231ps_xmmdq_xmmdq_memdq(zmm2[0].o, zmm5[0].o, var_1a8_1)
        zmm2[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm2[0].o f- zmm0[0]
        
        if (zmm2[0].o f!= zmm0[0] || not(is_ordered.d(zmm2[0].o, zmm0[0])))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm15, 1f, 0x36)
            zmm4[0].o = data_142d4cc30
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm15, 0x10)
            zmm6 = _mm_permute_ps(temp0_172, 0x66)
            zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm6)
            zmm6 = _mm_permute_ps(temp0_172, 0x33)
            zmm4[0].o = _mm_fmsub_ps(zmm4[0].o, zmm0[0].o, zmm6)
            float temp0_189[0x4] = _mm_fmsub_ps(var_188_1, temp0_149, zmm4[0].o)
            zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm10[0].o, 0x9d)
            double temp0_191[0x2] = __vmovddup_xmmdq_xmmq(temp0_172[0].q)
            zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_191)
            double temp0_193[0x2] = _mm_permute_pd(temp0_172, 3)
            zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, temp0_149, temp0_193)
            float temp0_195[0x4] = _mm_fmsub_ps(var_1a8_1, zmm0[0].o, zmm4[0].o)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm10[0].o, var_158[0].d, 0x20)
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, var_108_1, 0x30)
            zmm4[0].o = _mm_permute_ps(zmm10[0].o, 0x60)
            double temp0_199[0x2] = __vmovddup_xmmdq_xmmq(temp0_166[0].q)
            zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, temp0_199)
            zmm6 = _mm_broadcastss_ps(temp0_166)
            zmm4[0].o = _mm_fmsub_ps(zmm4[0].o, zmm0[0].o, zmm6)
            zmm6 = temp0_148
            zmm1[0].o = _mm_fmsub_ps(zmm1[0].o, zmm6, zmm4[0].o)
            zmm4[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm4[0].o)
            zmm3[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 1)
            zmm4[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, temp0_124, 1)
            zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x11)
            zmm4[0].o = _mm_permute_ps(temp0_166, 0x66)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
            zmm4[0].o = _mm_permute_ps(temp0_166, 0xcc)
            zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, zmm6, zmm4[0].o)
            zmm5[0].o = _mm_fmsub_ps(zmm5[0].o, zmm0[0].o, zmm3[0].o)
            zmm0[0].o = data_142fc92f0
            zmm0[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_189, zmm0[0].o)
            zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_195, zmm0[0].o)
            zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x77)
            zmm8 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0x77)
            zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0x22)
        else
            zmm3[0].o = data_142d4cc20
            zmm1[0].o = data_142d4cc30
        
        zmm15 = var_178
        zmm6 = var_198
        zmm2[0].o = __vmovshdup_xmmdq_xmmdq(zmm8)
        zmm9 = _mm_permute_pd(zmm8, 1)
        zmm10[0].o = _mm_permute_ps(zmm8, 0xe7)
        zmm11 = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
        zmm13 = _mm_permute_pd(zmm3[0].o, 1)
        zmm14 = _mm_permute_ps(zmm3[0].o, 0xe7)
        zmm5[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
        zmm0[0].o = _mm_permute_pd(zmm1[0].o, 1)
        zmm7 = _mm_permute_ps(zmm1[0].o, 0xe7)
    else
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm5[0].o, 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0x20)
        zmm4[0].o = 0x800000
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, 0x800000, 0x30)
        zmm4[0].o = _mm_broadcastss_ps(0x800000)
        zmm2 = _mm256_cmp_ps(_mm256_and_ps(_mm256_insertf128_ps(zmm2, zmm4[0].o, 1), zmm1), zmm0, 2)
        
        if (_mm256_movemask_ps(zmm2) != 0xff)
            goto label_14000c704
        
        zmm2[0].o = zx.o(temp0_121)
        zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_124, zmm3[0].o, 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm2[0].o, 0x20)
        zmm4[0].o = 0x800000
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, 0x800000, 0x30)
        zmm4[0].o = _mm_broadcastss_ps(0x800000)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm4[0].o, 1)
        zmm1 = _mm256_and_ps(zmm2, zmm1)
        zmm0 = _mm256_cmp_ps(zmm1, zmm0, 2)
        
        if (_mm256_movemask_ps(zmm0) != 0xff)
            goto label_14000c704
        
        zmm0[0].o = 0x3f800000
        zmm7 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_99, temp0_99)
        zmm5[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm5[0].o)
        zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
        zmm14 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_70, temp0_70)
        zmm13 = __vxorpd_xmmdq_xmmdq_xmmdq(zmm13, zmm13)
        zmm11 = 0x3f800000
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm10[0].o)
        zmm9 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_52, temp0_52)
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm8 = 0x3f800000
        zmm6 = var_198
    
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm5[0].o, 0x10)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x20)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm7, 0x30)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm11, 0x10)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm13, 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm14, 0x30)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm8, zmm2[0].o, 0x10)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm9, 0x20)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm10[0].o, 0x30)
    zmm3[0].o = _mm_broadcast_ss(arg4[1])
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
    zmm3[0].o = _mm_broadcast_ss(*arg4)
    zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm2[0].o, zmm3[0].o)
    zmm2[0].o = _mm_broadcast_ss(arg4[2])
    zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, zmm0[0].o, zmm1[0].o)
    zmm0[0].o = temp0_70
    zmm0[0].o = __vxorps_xmmdq_xmmdq_memdq(zmm0[0].o, var_128)
    zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    zmm1[0].o = _mm_permute_ps(zmm6, 0xc9)
    zmm3[0].o = _mm_broadcast_ss(-0f)
    zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm3[0].o = _mm_permute_ps(zmm2[0].o, 0xd2)
    zmm4[0].o = _mm_permute_ps(zmm6, 0xd2)
    zmm2[0].o = _mm_permute_ps(zmm2[0].o, 0xc9)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
    zmm2[0].o = _mm_fmsub_ps(zmm2[0].o, zmm1[0].o, zmm3[0].o)
    zmm1[0].o = zx.o(temp0_107)
    zmm3[0].o = zx.o(temp0_108)
    zmm4[0].o = temp0_52
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm1[0].o, 0x10)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x20)
    zmm3[0].o = zx.o(temp0_109)
    zmm4[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm12, var_138, 0x10)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm3[0].o, 0x20)
    zmm4[0].o = _mm_broadcastss_ps(zmm2[0].o)
    zmm5[0].o = _mm_permute_ps(zmm2[0].o, 0xd5)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm5[0].o)
    zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, zmm1[0].o, zmm4[0].o)
    zmm1[0].o = _mm_permute_ps(zmm2[0].o, 0xea)
    zmm2[0].o = arg5
    zmm2[0].o = _mm_broadcastss_ps(zmm2[0].o)
    zmm0[0].o = __vfmadd213ps_xmmdq_xmmdq_memdq(zmm0[0].o, zmm2[0].o, var_168)
*(arg1 + (rax << 2) + 0xc0) = zmm0[0]
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm15, zmm3[0].o)
*(arg1 + (rax << 2) + 0xc4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + (rax << 2) + 0xc8) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm3[0].o = arg1[r8 + 0xe]
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
zmm2[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0x1b)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
zmm2[0].o = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm2[0].o)
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm3[0].o, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0x55)
zmm5[0].o = _mm_permute_pd(zmm3[0].o, 1)
zmm5[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm1[0].o)
zmm9 = data_142d3f7d0
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm9, zmm4[0].o)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
zmm4[0].o = _mm_permute_ps(zmm3[0].o, 0xb1)
zmm4[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].o, zmm0[0].o)
zmm8 = data_142d3f7b0
zmm4[0].o = _mm_fmadd_ps(zmm4[0].o, zmm8, zmm5[0].o)
zmm5[0].o = 0x3f000000
zmm6 = _mm_fmadd_ps(_mm_broadcastss_ps(0x3f000000), zmm4[0].o, zmm3[0].o)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm6)
zmm4[0].o = _mm_permute_pd(zmm3[0].o, 1)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
zmm4[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
zmm3[0].o = zmm3[0].o f+ zmm4[0]
zmm4[0].o = 0x322bcc77
zmm4[0].o = _mm_cmp_ss(0x322bcc77, zmm3[0], 6)
zmm4[0].o = __vandnps_xmmdq_xmmdq_xmmdq(zmm4[0].o, 0xffffffff)
zmm7 = zmm3[0].o f* 0.5f
zmm3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm3[0].o, zmm3[0])
zmm0[0].o = zmm3[0].o f* zmm3[0]
zmm0[0].o = _mm_fnmadd_ss(zmm0[0].o, zmm7[0], 0.5f)
zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm3[0], zmm3[0])
zmm3[0].o = zmm0[0].o f* zmm0[0]
zmm3[0].o = _mm_fnmadd_ss(zmm3[0].o, zmm7[0], 0.5f)
zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, zmm0[0], zmm0[0])
zmm0[0].o = _mm_broadcastss_ps(zmm3[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm6, zmm0[0].o)
zmm3[0].o = _mm_broadcastss_ps(zmm4[0].o)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm3[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f660)
zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
arg1[r8 + 0xe] = zmm0[0].o
zmm0[0].o = arg1[0xf]
zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, arg1[0xe])
zmm4[0].o = _mm_permute_pd(zmm3[0].o, 1)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4[0].o)
zmm4[0].o = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
zmm4[0].o = zmm3[0].o f+ zmm4[0]
zmm10[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm10[0].o, zmm10[0].o)
zmm6 = _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
    _mm_cmp_ss(zmm10[0].o, zmm4[0], 2)))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm6)
arg1[0xf] = zmm0[0].o
zmm0[0].o = arg1[r8 + 0xe].d
zmm6 = *(&arg1[r8] + 0xe4)
zmm7 = *(&arg1[r8] + 0xe8)
zmm1[0].o = *(&arg1[rax] + 0x18)
zmm3[0].o = arg1[rax + 1].d
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm7, 0x10)
zmm4[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm4[0].o, zmm0[0].o, 0x20)
zmm5[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x10)
zmm5[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm5[0].o, *(&arg1[rax] + 0x14), 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x20)
zmm3[0].o =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[rax] + 0x14)), zmm3[0].o, 0x20)
double temp0_475[0x2] = __vmovsd_xmmdq_memq(arg1[rax + 1].q)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm3[0].o = _mm_fmsub_ps(zmm3[0].o, zmm4[0].o, zmm5[0].o)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
zmm5[0].o = _mm_broadcast_ss(*(&arg1[r8] + 0xec))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_475, zmm1[0].o, 0x20)
zmm5[0].o = _mm_fmadd_ps(zmm5[0].o, zmm3[0].o, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0xd2)
zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, zmm4[0].o, zmm1[0].o)
zmm1[0].o = *(arg1 + (rax << 2) + 0xc0)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + (rax << 2) + 0xc4), 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + (rax << 2) + 0xc8), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm5[0].o, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
*(arg1 + (rax << 2) + 0x80) = zmm0[0]
*(arg1 + (rax << 2) + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + (rax << 2) + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = arg1[rax]
zmm1[0].o = _mm_broadcast_ss(arg1[r8 + 0xe].d)
zmm3[0].o = *(&arg1[rax] + 0xc)
zmm4[0].o = *(&arg1[rax] + 8)
zmm5[0].o = *(&arg1[rax] + 4)
zmm6 = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4[0].o, 0x10), zmm5[0].o, 0x20), 
    zmm0[0].o, 0x30)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm6)
zmm6 = _mm_broadcast_ss(*(&arg1[r8] + 0xec))
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm0[0].o, zmm6)
zmm2[0].o = _mm_broadcast_ss(*(&arg1[r8] + 0xe4))
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[rax] + 8)), zmm0[0].o, 
            0x20), 
        zmm5[0].o, 0x30), 
    zmm2[0].o)
zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, zmm9, zmm1[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5[0].o, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4[0].o, 0x30)
zmm1[0].o = _mm_broadcast_ss(*(&arg1[r8] + 0xe8))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm8, zmm2[0].o)
arg1[r8 + 0xa] = zmm0[0].o
zmm0[0].o = arg1[0xb]
zmm1[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, arg1[0xa])
zmm2[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
zmm2[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
zmm1[0].o = zmm1[0].o f+ zmm2[0]
zmm1[0].o = _mm_cmp_ss(zmm10[0].o, zmm1[0], 2)
zmm1[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm1[0].o)
zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
arg1[0xb] = zmm0[0].o
_mm256_zeroupper()
return rax << 4
