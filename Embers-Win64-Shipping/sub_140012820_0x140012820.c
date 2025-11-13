// 函数: sub_140012820
// 地址: 0x140012820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_48[0x4] = arg7
int32_t var_58[0x4] = arg6
float var_68[0x4] = arg5
int64_t rax = sx.q(arg3)
int64_t rdx = rax * 3
float zmm0[0x8]
zmm0[0].o = arg1[rax + 0xe]
double zmm1[0x4]
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
int32_t zmm2[0x8]
zmm2[0].o = _mm_broadcast_ss(*(&arg1[rax] + 0xe4))
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
float zmm3[0x8]
zmm3[0].o = _mm_broadcast_ss(*(&arg1[rax] + 0xec))
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
zmm1[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f* *(&arg1[rax] + 0xe8)
float temp0_9[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x88), 0xd8)
float temp0_10[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_9)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_9, zmm3[0].o)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm1[0].o, 0x1c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2[0].o, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = _mm_broadcast_ss(1f)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rdx << 2) + 0x64), 0x1d)
float zmm9[0x8]
zmm9[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rdx << 2) + 0x68), 0x2b)
float zmm4[0x4] = *(arg1 + (rdx << 2) + 0x60)
float temp0_23[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, _mm_broadcastss_ps(zmm0[0].o))
float temp0_25[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm3[0].o, 0xea), zmm1[0].o, temp0_23)
float temp0_27[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_10, 0xd5), zmm9[0].o, temp0_25)
float temp0_28[0x4] = _mm_permute_ps(temp0_10, 0xea)
float temp0_29[0x4] = _mm_permute_ps(zmm0[0].o, 0xd5)
float temp0_31[0x4] = _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_29), zmm4, temp0_28)
zmm2[0].o = _mm_broadcastss_ps(zmm3[0].o)
zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, zmm9[0].o, temp0_31)
float temp0_34[0x4] = _mm_permute_ps(zmm3[0].o, 0xd5)
float temp0_35[0x4] = _mm_broadcastss_ps(temp0_10)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_35)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm4, temp0_34)
float temp0_39[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm0[0].o, 0xea), zmm9[0].o, zmm1[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_10, 0x9c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x60)
float temp0_43[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x8c), temp0_10, 0x20)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_10, 0x4e), zmm3[0].o, 0x14)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 4)
zmm3[0].o = _mm_broadcastss_ps(temp0_27)
float temp0_50[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_43, _mm_permute_ps(temp0_27, 0xd5)), zmm1[0].o, zmm3[0].o)
float zmm13[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_27, 0xea), zmm0[0].o, temp0_50)
zmm3[0].o = _mm_broadcastss_ps(zmm2[0].o)
float temp0_56[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_43, _mm_permute_ps(zmm2[0].o, 0xd5)), zmm1[0].o, zmm3[0].o)
float temp0_58[0x4] = _mm_fmadd_ps(_mm_permute_ps(zmm2[0].o, 0xea), zmm0[0].o, temp0_56)
zmm2[0].o = _mm_broadcastss_ps(temp0_39)
zmm3[0].o = _mm_permute_ps(temp0_39, 0xd5)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_43, zmm3[0].o)
zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, zmm1[0].o, zmm2[0].o)
float zmm14[0x4] = _mm_fmadd_ps(_mm_permute_ps(temp0_39, 0xea), zmm0[0].o, zmm3[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + (rdx << 2) + 0x80))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rdx << 2) + 0x88), 0x20)
zmm2[0].o = __vmovsd_xmmdq_memq(*(arg1 + (rdx << 2) + 0xc0))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, *(arg1 + (rdx << 2) + 0xc8), 0x20)
float var_c8[0x4] = zmm1[0].o
float temp0_69[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm2[0].o = _mm_broadcast_ss(-0f)
float zmm8[0x4] = _mm_permute_pd(temp0_69, 1)
zmm3[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(zmm8, zmm2[0].o)
float temp0_73[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_69)
zmm9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_73, zmm2[0].o)
zmm0[0].o = _mm_permute_ps(zmm3[0].o, 0x80)
float temp0_76[0x4] = _mm_permute_ps(temp0_58, 0xc1)
zmm1[0].o = _mm_permute_ps(temp0_69, 0xd5)
float temp0_78[0x4] = _mm_permute_ps(zmm14, 0xc1)
float temp0_80[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_78), zmm0[0].o, temp0_76)
float temp0_81[0x4] = _mm_permute_ps(zmm14, 0xda)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_81)
float temp0_84[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovshdup_xmmdq_xmmdq(zmm14), temp0_58, 0x68)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm0[0].o, temp0_84)
int32_t var_d8[0x4] = zmm2[0].o
zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_69, zmm2[0].o)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, temp0_69, 0x9c)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm9[0].o, 0x20)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_73, zmm2[0].o, 0x10)[0].q | temp0_69[0].q << 0x40, 
    zmm1[0].o)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, temp0_80, zmm3[0].o)
zmm3[0].o = _mm_permute_ps(temp0_69, 0x4a)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm9[0].o, 0x20)
float temp0_94[0x4] = _mm_broadcastss_ps(zmm13)
float temp0_95[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, temp0_69, 0x40)
float temp0_99[0x4] = _mm_fmadd_ps(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_95, 
        __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm14, 
            __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_58, zmm14, 0x30), 0x80)), 
    zmm3[0].o, temp0_94)
float temp0_102[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_95, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(_mm_permute_ps(zmm14, 0x46), temp0_58, 0x68))
float temp0_104[0x4] = _mm_permute_ps(__vshufps_xmmdq_xmmdq_xmmdq_immb(zmm14, temp0_58, 0xc), 0x78)
float temp0_105[0x4] = _mm_fmadd_ps(temp0_102, zmm3[0].o, temp0_104)
zmm3[0].o = *(arg1 + (rax << 2) + 0x78)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm8, zmm9[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm9[0].o, 0x20)
zmm9[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1[0].o)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, temp0_69, 0)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_69, 0xc8)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_105)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, temp0_99, zmm0[0].o)
int128_t var_e8 = zmm3[0].o
zmm0[0].o = __vmovddup_xmmdq_xmmq(zmm3[0].q)
float temp0_114[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
int32_t result = __vextractps_gpr32_xmmdq_immb(temp0_114, 2)
zmm0 = _mm256_blend_ps(_mm256_broadcast_ss(1.17549435e-38f), zmm9, 7)
zmm2 = _mm256_broadcast_ss(nanf)
zmm0 = _mm256_and_ps(zmm0, zmm2)
zmm3 = _mm256_broadcast_ss(9.99999994e-09f)
zmm0 = _mm256_cmp_ps(zmm0, zmm3, 2)
char temp0_121 = _mm256_movemask_ps(zmm0)
zmm0[0].o = _mm_permute_pd(zmm9[0].o, 1)
float zmm5[0x4]
float zmm6[0x4]
float zmm7[0x4]

if (temp0_121 != 0xff)
label_140012c21:
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm9[0].o, 0x8e)
    float temp0_142[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_114, 0x60)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_114, zmm9[0].o, 0x8c)
    arg5 = zx.o(result)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9[0].o, zmm0[0].o, 0x10)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0x20)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg5, 0x30)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_114, 1f, 0x36)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm9[0].o, 0x4e)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, temp0_114, 0x60)
    float temp0_150[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_114, zmm9[0].o, 0x4c)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_150)
    zmm3[0].o = _mm_fmsub_ps(zmm3[0].o, zmm0[0].o, zmm2[0].o)
    float temp0_153[0x4] = _mm_broadcastss_ps(zmm3[0].o)
    zmm0[0].o = _mm_permute_ps(zmm3[0].o, 0x55)
    zmm2[0].o = _mm_permute_ps(zmm3[0].o, 0xaa)
    float temp0_156[0x4] = _mm_permute_ps(zmm3[0].o, 0xff)
    zmm3[0].o = 0x3f800000
    float temp0_157[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(0x3f800000, arg5, 0)
    int32_t temp0_158[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(arg6, arg6)
    arg6 = __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9[0].o, temp0_114, 0x73), temp0_158)
    float var_108_1[0x4] = zmm1[0].o
    arg6 = _mm_fmsub_ps(arg6, zmm1[0].o, temp0_157)
    zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_114, zmm9[0].o, 0)
    float temp0_166[0x4] = _mm_fmsub_ps(
        __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm9[0].o, 0x55), 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9[0].o, temp0_114, 0x4a)), 
        temp0_142, zmm1[0].o)
    zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
    zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, temp0_153, temp0_156)
    float temp0_170[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_166, _mm_permute_ps(arg6, 0xd8))
    float temp0_172[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_170, _mm_permute_pd(temp0_170, 1))
    float temp0_174[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_172, _mm_permute_ps(temp0_172, 0x39))
    float temp0_175[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_174)
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    temp0_175 f- zmm1[0].d
    
    if (temp0_175 f!= zmm1[0].d || not(is_ordered.d(temp0_175, zmm1[0].d)))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(arg5, 1f, 0x36)
        zmm3[0].o = data_142d4cc30
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, arg5, 0x10)
        float temp0_179[0x4] = _mm_permute_ps(temp0_166, 0x66)
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_179)
        float temp0_181[0x4] = _mm_permute_ps(temp0_166, 0x33)
        zmm3[0].o = _mm_fmsub_ps(zmm3[0].o, zmm1[0].o, temp0_181)
        zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, var_108_1, zmm3[0].o)
        zmm3[0].o = _mm_permute_pd(temp0_166, 3)
        zmm4 = __vmovddup_xmmdq_xmmq(temp0_166[0].q)
        float temp0_186[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm9[0].o, 0x9d)
        float temp0_188[0x4] =
            _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_186, zmm4), var_108_1, zmm3[0].o)
        float temp0_189[0x4] = _mm_fmsub_ps(temp0_153, zmm1[0].o, temp0_188)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_114, zmm9[0].o, 0x10)
        zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm9[0].o, zmm1[0].o, 0x24)
        zmm3[0].o = _mm_permute_ps(zmm9[0].o, 0x60)
        zmm4 = __vmovddup_xmmdq_xmmq(arg6[0].q)
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4)
        float temp0_195[0x4] = _mm_broadcastss_ps(arg6)
        zmm3[0].o = _mm_fmsub_ps(zmm3[0].o, zmm1[0].o, temp0_195)
        zmm2[0].o = _mm_fmsub_ps(zmm2[0].o, temp0_142, zmm3[0].o)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_186, temp0_114, 0x70)
        float temp0_199[0x4] = _mm_permute_ps(arg6, 0x66)
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_199)
        float temp0_201[0x4] = _mm_permute_ps(arg6, 0xcc)
        zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, temp0_142, temp0_201)
        float temp0_203[0x4] = _mm_fmsub_ps(temp0_156, zmm1[0].o, zmm3[0].o)
        zmm1[0].o = data_142fc92f0
        zmm1[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_175)
        float temp0_205[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_203, zmm1[0].o)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_189, zmm1[0].o)
        zmm6 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm1[0].o, 0x77)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_205, zmm0[0].o, 0x77)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_205, zmm0[0].o, 0x22)
    else
        zmm0[0].o = data_142d4cc20
        zmm6 = data_142d4cc30
    
    zmm13 = zmm13
    zmm14 = zmm14
    zmm8 = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
    zmm9[0].o = _mm_permute_pd(zmm3[0].o, 1)
    arg5 = _mm_permute_ps(zmm3[0].o, 0xe7)
    arg6 = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
    arg7 = _mm_permute_pd(zmm0[0].o, 1)
    zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0xe7)
    zmm5 = __vmovshdup_xmmdq_xmmdq(zmm6)
    zmm2[0].o = _mm_permute_pd(zmm6, 1)
    zmm7 = _mm_permute_ps(zmm6, 0xe7)
else
    float temp0_123[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_114)
    zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm9[0].o)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_114, 0x1c)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_123, 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, 0x800000, 0x30)
    zmm1 = _mm256_cmp_ps(
        _mm256_and_ps(_mm256_insertf128_ps(zmm1, _mm_broadcastss_ps(0x800000), 1), zmm2), zmm3, 2)
    
    if (_mm256_movemask_ps(zmm1) != 0xff)
        goto label_140012c21
    
    zmm1[0].o = zx.o(result)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_123, 0x10), zmm1[0].o, 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, 0x800000, 0x30)
    zmm1 = _mm256_cmp_ps(
        _mm256_and_ps(_mm256_insertf128_ps(zmm1, _mm_broadcastss_ps(0x800000), 1), zmm2), zmm3, 2)
    
    if (_mm256_movemask_ps(zmm1) != 0xff)
        goto label_140012c21
    
    zmm2[0].o = 0x3f800000
    zmm7 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_99, temp0_99)
    zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_123, temp0_123)
    zmm6 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_114, temp0_114)
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    arg7 = __vxorpd_xmmdq_xmmdq_xmmdq(arg7, arg7)
    arg6 = 0x3f800000
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
    zmm9[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(zmm9[0].o, zmm9[0].o)
    zmm8 = __vxorps_xmmdq_xmmdq_xmmdq(zmm8, zmm8)
    zmm3[0].o = 0x3f800000

zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm5, 0x10), zmm2[0].o, 0x20)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm7, 0x30)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg6, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, arg7, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x30)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm8, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm9[0].o, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5, 0x30)
zmm3[0].o = _mm_broadcast_ss(*arg4)
float temp0_231[0x4] = _mm_broadcast_ss(arg4[1])
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_231)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm1[0].o, zmm3[0].o)
zmm1[0].o = _mm_broadcast_ss(arg4[2])
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm2[0].o, zmm0[0].o)
zmm0[0].o = var_e8
zmm0[0].o = __vxorps_xmmdq_xmmdq_memdq(zmm0[0].o, var_d8)
zmm0[0].o = _mm_broadcastss_ps(zmm0[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm2[0].o = _mm_permute_ps(temp0_69, 0xc9)
zmm3[0].o = _mm_broadcast_ss(-0f)
zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm3[0].o)
zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0xd2)
float temp0_243[0x4] = _mm_permute_ps(temp0_69, 0xd2)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xc9)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_243, zmm1[0].o)
zmm1[0].o = _mm_fmsub_ps(zmm1[0].o, zmm2[0].o, zmm3[0].o)
zmm2[0].o = _mm_broadcastss_ps(zmm1[0].o)
zmm3[0].o = _mm_permute_ps(zmm1[0].o, 0xd5)
zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, temp0_58)
zmm3[0].o = _mm_fmadd_ps(zmm3[0].o, zmm13, zmm2[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xea)
zmm2[0].o = arg8
zmm2[0].o = _mm_broadcastss_ps(zmm2[0].o)
zmm0[0].o = __vfmadd213ps_xmmdq_xmmdq_memdq(zmm0[0].o, zmm2[0].o, var_c8)
*(arg1 + (rdx << 2) + 0xc0) = zmm0[0]
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm14, zmm3[0].o)
*(arg1 + (rdx << 2) + 0xc4) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + (rdx << 2) + 0xc8) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm3[0].o = arg1[rax + 0xe]
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1[0].o)
zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
zmm2[0].o = _mm_broadcastss_ps(zmm0[0].o)
float temp0_261[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3[0].o, 0x1b), zmm2[0].o)
zmm2[0].o = __vpbroadcastq_xmmdq_memq(-0x407fffffc0800000)
float temp0_264[0x4] =
    _mm_fmadd_ps(__vmulps_xmmdq_xmmdq_xmmdq(temp0_261, zmm2[0].o), zmm3[0].o, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0x55)
float temp0_267[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm3[0].o, 1), zmm1[0].o)
zmm9[0].o = data_142d3f7d0
float temp0_268[0x4] = _mm_fmadd_ps(temp0_267, zmm9[0].o, temp0_264)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
float temp0_271[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm3[0].o, 0xb1), zmm0[0].o)
zmm8 = data_142d3f7b0
float temp0_272[0x4] = _mm_fmadd_ps(temp0_271, zmm8, temp0_268)
float temp0_274[0x4] = _mm_fmadd_ps(_mm_broadcastss_ps(0x3f000000), temp0_272, zmm3[0].o)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_274, temp0_274)
zmm4 = _mm_permute_pd(zmm3[0].o, 1)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4)
float temp0_278[0x4] = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
zmm3[0].o = zmm3[0].o f+ temp0_278[0]
zmm4 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm3[0], 6), 0xffffffff)
zmm7 = zmm3[0].o f* 0.5f
zmm3[0].o = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm3[0].o, zmm3[0])
zmm0[0].o = zmm3[0].o f* zmm3[0]
zmm0[0].o = _mm_fnmadd_ss(zmm0[0].o, zmm7[0], 0.5f)
zmm0[0].o = _mm_fmadd_ss(zmm0[0].o, zmm3[0], zmm3[0])
zmm3[0].o = zmm0[0].o f* zmm0[0]
zmm3[0].o = _mm_fnmadd_ss(zmm3[0].o, zmm7[0], 0.5f)
zmm3[0].o = _mm_fmadd_ss(zmm3[0].o, zmm0[0], zmm0[0])
zmm0[0].o = _mm_broadcastss_ps(zmm3[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_274, zmm0[0].o)
zmm3[0].o = _mm_broadcastss_ps(zmm4)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm3[0].o = __vandnps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f660)
zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
arg1[rax + 0xe] = zmm0[0].o
zmm0[0].o = arg1[0xf]
zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, arg1[0xe])
zmm4 = _mm_permute_pd(zmm3[0].o, 1)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4)
float temp0_295[0x4] = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
zmm4 = zmm3[0].o f+ temp0_295[0]
arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
float temp0_299[0x4] = _mm_broadcastss_ps(__vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 
    0x3f800000, _mm_cmp_ss(arg5, zmm4[0], 2)))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_299)
arg1[0xf] = zmm0[0].o
zmm0[0].o = arg1[rax + 0xe].d
zmm6 = *(&arg1[rax] + 0xe4)
zmm7 = *(&arg1[rax] + 0xe8)
zmm1[0].o = *(&arg1[rdx] + 0x18)
zmm3[0].o = arg1[rdx + 1].d
float temp0_302[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm7, 0x10), zmm0[0].o, 0x20)
float temp0_304[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3[0].o, 0x10), *(&arg1[rdx] + 0x14), 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x20)
zmm3[0].o =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[rdx] + 0x14)), zmm3[0].o, 0x20)
zmm6 = __vmovsd_xmmdq_memq(arg1[rdx + 1].q)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm3[0].o = _mm_fmsub_ps(zmm3[0].o, temp0_302, temp0_304)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
float temp0_313[0x4] = _mm_broadcast_ss(*(&arg1[rax] + 0xec))
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm1[0].o, 0x20)
float temp0_315[0x4] = _mm_fmadd_ps(temp0_313, zmm3[0].o, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(zmm3[0].o, 0xd2)
zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm0[0].o = _mm_fmsub_ps(zmm0[0].o, temp0_302, zmm1[0].o)
zmm1[0].o = *(arg1 + (rdx << 2) + 0xc0)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + (rdx << 2) + 0xc4), 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + (rdx << 2) + 0xc8), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_315, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
*(arg1 + (rdx << 2) + 0x80) = zmm0[0]
*(arg1 + (rdx << 2) + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + (rdx << 2) + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = arg1[rdx]
zmm1[0].o = _mm_broadcast_ss(arg1[rax + 0xe].d)
zmm3[0].o = *(&arg1[rdx] + 0xc)
zmm4 = *(&arg1[rdx] + 8)
zmm5 = *(&arg1[rdx] + 4)
float temp0_329[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4, 0x10), 
        zmm5, 0x20), 
    zmm0[0].o, 0x30)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_329)
float temp0_331[0x4] = _mm_broadcast_ss(*(&arg1[rax] + 0xec))
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
zmm1[0].o = _mm_fmadd_ps(zmm1[0].o, zmm0[0].o, temp0_331)
zmm2[0].o = _mm_broadcast_ss(*(&arg1[rax] + 0xe4))
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[rdx] + 8)), zmm0[0].o, 
            0x20), 
        zmm5, 0x30), 
    zmm2[0].o)
zmm2[0].o = _mm_fmadd_ps(zmm2[0].o, zmm9[0].o, zmm1[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x30)
zmm1[0].o = _mm_broadcast_ss(*(&arg1[rax] + 0xe8))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm0[0].o = _mm_fmadd_ps(zmm0[0].o, zmm8, zmm2[0].o)
arg1[rax + 0xa] = zmm0[0].o
zmm0[0].o = arg1[0xb]
zmm1[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, arg1[0xa])
zmm2[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2[0].o)
zmm2[0].o = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
zmm1[0].o = zmm1[0].o f+ zmm2[0]
zmm1[0].o = _mm_cmp_ss(arg5, zmm1[0].d, 2)
zmm1[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm1[0].o)
zmm1[0].o = _mm_broadcastss_ps(zmm1[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
arg1[0xb] = zmm0[0].o
_mm256_zeroupper()
return result
