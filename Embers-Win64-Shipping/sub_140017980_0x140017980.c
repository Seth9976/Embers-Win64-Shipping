// 函数: sub_140017980
// 地址: 0x140017980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3)
int64_t rdx = rax * 3
int32_t zmm0[0x8]
zmm0[0].o = arg1[rax + 0xe]
float temp0[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0, zmm0[0].o)
double zmm2[0x4]
zmm2[0].o = _mm_broadcast_ss(*(&arg1[rax] + 0xe4))
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0, zmm2[0].o)
double zmm3[0x4]
zmm3[0].o = _mm_broadcast_ss(*(&arg1[rax] + 0xec))
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0, zmm3[0].o)
float zmm1[0x4] = _mm_permute_pd(temp0, 1) f* *(&arg1[rax] + 0xe8)
float temp0_9[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x88), 0xd8)
float temp0_10[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_9)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_9, zmm3[0].o)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
float temp0_16[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm1, 0x1c), zmm2[0].o, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_16)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(data_142d3f670, zmm0[0].o)
float temp0_19[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rdx << 2) + 0x64), 0x1d)
zmm2[0].o = *(arg1 + (rdx << 2) + 0x60)
float temp0_20[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rdx << 2) + 0x68), 0x2b)
float temp0_21[0x4] = _mm_permute_ps(zmm0[0].o, 0xc0)
float temp0_22[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_21)
float zmm7[0x8]
zmm7[0].o = _mm_permute_ps(zmm3[0].o, 0xea)
zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_19, zmm7[0].o)
float temp0_25[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_22)
zmm7[0].o = _mm_permute_ps(temp0_10, 0xd5)
zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, zmm7[0].o)
float temp0_28[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_25)
zmm7[0].o = _mm_permute_ps(temp0_10, 0xea)
float temp0_30[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
zmm7[0].o = _mm_permute_ps(zmm0[0].o, 0xd5)
zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_19, zmm7[0].o)
float temp0_33[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_30, zmm7[0].o)
zmm7[0].o = _mm_permute_ps(zmm3[0].o, 0xc0)
zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, zmm7[0].o)
float temp0_36[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_33)
zmm7[0].o = _mm_permute_ps(zmm3[0].o, 0xd5)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm7[0].o)
zmm7[0].o = _mm_permute_ps(temp0_10, 0xc0)
float temp0_40[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_19, zmm7[0].o)
float temp0_41[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_40)
zmm2[0].o = _mm_permute_ps(zmm0[0].o, 0xea)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, zmm2[0].o)
float temp0_44[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_41, zmm2[0].o)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_10, 0x9c)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0x60)
float temp0_48[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x8c), temp0_10, 0x20)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_10, 0x4e), zmm3[0].o, 0x14)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 4)
zmm3[0].o = _mm_permute_ps(temp0_28, 0xc0)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
float temp0_55[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(temp0_28, 0xd5))
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_55)
float temp0_57[0x4] = _mm_permute_ps(temp0_28, 0xea)
float zmm14[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_57), zmm3[0].o)
zmm3[0].o = _mm_permute_ps(temp0_36, 0xc0)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
float temp0_63[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(temp0_36, 0xd5))
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_63)
float temp0_65[0x4] = _mm_permute_ps(temp0_36, 0xea)
float temp0_67[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_65), zmm3[0].o)
zmm3[0].o = _mm_permute_ps(temp0_44, 0xc0)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
zmm3[0].o = _mm_permute_ps(temp0_44, 0xd5)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, zmm3[0].o)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
float temp0_73[0x4] = _mm_permute_ps(temp0_44, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_73)
float temp0_76[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(
    __vmovsd_xmmdq_memq(*(arg1 + (rdx << 2) + 0x80)), *(arg1 + (rdx << 2) + 0x88), 0x20)
float temp0_77[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + (rdx << 2) + 0xc0))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rdx << 2) + 0xc8), 0x20)
float var_f8[0x4] = zmm0[0].o
float zmm12[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_76, zmm0[0].o)
zmm1 = data_142d3f780
zmm0[0].o = _mm_permute_pd(zmm12, 1)
zmm2[0].o = __vxorpd_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1)
zmm3[0].o = __vmovshdup_xmmdq_xmmdq(zmm12)
float temp0_84[0x4] = _mm_permute_ps(zmm2[0].o, 0x80)
float temp0_86[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_84, _mm_permute_ps(temp0_67, 0xc1))
zmm7[0].o = _mm_permute_ps(zmm12, 0xd5)
float temp0_88[0x4] = _mm_permute_ps(temp0_77, 0xc1)
float temp0_90[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_86, __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_88))
float zmm6[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1)
zmm1 = __vxorps_xmmdq_xmmdq_xmmdq(zmm12, zmm1)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm12, 0x9c)
zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm6, 0x20)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_90)
float temp0_98[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_84, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovshdup_xmmdq_xmmdq(temp0_77), temp0_67, 0x68))
float temp0_99[0x4] = _mm_permute_ps(temp0_77, 0xda)
float temp0_101[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(temp0_98, __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_99))
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm1, 0x10)
zmm3[0].o = zmm3[0] | zmm12[0].q << 0x40
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_101)
zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
zmm3[0].o = _mm_permute_ps(zmm12, 0x4a)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm6, 0x20)
float temp0_107[0x4] = _mm_permute_ps(zmm14, 0xc0)
float temp0_108[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_107)
float temp0_109[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm12, 0x40)
zmm7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_67, temp0_77, 0x30)
zmm7[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_77, zmm7[0].o, 0x80)
zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_109, zmm7[0].o)
float temp0_113[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_108, zmm7[0].o)
float zmm11[0x4] = *(arg1 + (rax << 2) + 0x78)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x20)
zmm7 = *arg6
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_113)
float temp0_118[0x4] =
    _mm_permute_ps(__vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_77, temp0_67, 0xc), 0x78)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_118)
float temp0_122[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_109, 
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(_mm_permute_ps(temp0_77, 0x46), temp0_67, 0x68))
int32_t temp0_123 = _mm256_movemask_ps(zmm7)
int32_t temp0_124 = __vextractps_gpr32_xmmdq_immb(zmm14, 1)
int32_t temp0_125 = __vextractps_gpr32_xmmdq_immb(zmm14, 2)
int32_t temp0_126 = __vextractps_gpr32_xmmdq_immb(temp0_67, 2)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_122)
float temp0_128[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_67)
float temp0_131[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vshufps_xmmdq_xmmdq_xmmdq_immb(__vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm12, 0), zmm12, 
        0xc8), 
    zmm3[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_131)
zmm1 = __vmovddup_xmmdq_xmmq(zmm11[0].q)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1, zmm0[0].o)
int32_t temp0_135 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 0)
int32_t temp0_136 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 1)
int32_t temp0_137 = __vextractps_gpr32_xmmdq_immb(zmm0[0].o, 2)
float zmm9[0x8]
zmm9[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm11, zmm2[0].o)
float temp0_139[0x4] = __vmovshdup_xmmdq_xmmdq(zmm9[0].o)
zmm0 = __vblendps_ymmqq_ymmqq_memqq_immb(zmm9, data_142fc9300, 0xf8)
double temp0_141[0x2] = _mm_permute_pd(zmm9[0].o, 1)
zmm0 = __vandps_ymmqq_ymmqq_memqq(zmm0, data_142fc9320)
float var_188[0x4] = zmm14
float var_118 = temp0_128[0]
float var_128[0x4] = zmm11
zmm0 = __vcmpps_ymmqq_ymmqq_memqq_immb(zmm0, data_142fc9340, 2)
float zmm4[0x4]
float zmm5[0x4]
float zmm8[0x4]
float zmm10[0x4]
double zmm13[0x2]

if (temp0_123 != 0xff)
    zmm8 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_77, temp0_77)
    zmm3[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm8)
    zmm1 = _mm256_extractf128_ps(zmm7[0].o, 1)
    zmm2[0].o = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1, zmm8)
    zmm4 = _mm256_extractf128_ps(zmm0[0].o, 1) | zmm2[0].o
    zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
    zmm0[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
    zmm0[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    char temp0_253 = __vpmovmskb_gpr32d_xmmdq(zmm0[0].o)
    zmm5 = zx.o(temp0_135)
    zmm0[0].o = zx.o(temp0_136)
    
    if (temp0_253 != 0xff)
    label_14001813d:
        float var_e8_1 = zmm5[0]
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_141, zmm0[0].o, 0x2a)
        float temp0_285[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_141, zmm0[0].o, 0x1c)
        zmm2[0].o = zx.o(temp0_137)
        float temp0_290[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9[0].o, temp0_141, 0x10), temp0_141, 
                    0x20), 
                zmm2[0].o, 0x30), 
            __vinsertps_xmmdq_xmmdq_memd_immb(zmm5, 1f, 0x36))
        float temp0_291[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_139, zmm0[0].o, 0x2a)
        zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_139, zmm0[0].o, 0x1c)
        float temp0_294[0x4] =
            __vsubps_xmmdq_xmmdq_xmmdq(temp0_290, __vmulps_xmmdq_xmmdq_xmmdq(temp0_291, zmm7[0].o))
        float temp0_295[0x4] = _mm_permute_ps(temp0_294, 0)
        float temp0_296[0x4] = _mm_permute_ps(temp0_294, 0x55)
        float temp0_297[0x4] = _mm_permute_ps(temp0_294, 0xaa)
        zmm7[0].o = _mm_permute_ps(temp0_294, 0xff)
        zmm10 = 0x3f800000
        float temp0_300[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_285, 
            __vshufps_xmmdq_xmmdq_xmmdq_immb(0x3f800000, zmm2[0].o, 0))
        float temp0_301[0x4] = __vunpcklps_xmmdq_xmmdq_xmmdq(temp0_141, zmm0[0].o)
        float temp0_303[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_300, 
            __vmulps_xmmdq_xmmdq_xmmdq(zmm8[0].q | temp0_301[0].q << 0x40, zmm8))
        float temp0_304[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm9[0].o, 0)
        int128_t var_138_2 = zmm3[0].o
        float temp0_305[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_304)
        float temp0_306[0x4] = _mm_permute_ps(zmm9[0].o, 0x55)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm9[0].o, 0xaa)
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_306, zmm3[0].o)
        float temp0_309[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_305, zmm3[0].o)
        float var_148_2[0x4] = zmm7[0].o
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_295, zmm7[0].o)
        float temp0_311[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_296, temp0_297)
        zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_311)
        float temp0_314[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(temp0_309, _mm_permute_ps(temp0_303, 0xd8))
        float temp0_316[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_314, _mm_permute_pd(temp0_314, 1))
        float temp0_318[0x4] =
            __vaddps_xmmdq_xmmdq_xmmdq(temp0_316, _mm_permute_ps(temp0_316, 0x39))
        float temp0_319[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_318)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        temp0_319 f- zmm3[0].d
        
        if (temp0_319 f!= zmm3[0].d || not(is_ordered.d(temp0_319, zmm3[0].d)))
            zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9[0].o, temp0_139, 0x20)
            float temp0_322[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, var_e8_1, 0x30)
            float temp0_325[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm9[0].o, 0x60), 
                __vmovddup_xmmdq_xmmq(temp0_303[0].q))
            float temp0_328[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(temp0_322, _mm_permute_ps(temp0_303, 0x20)), temp0_325)
            float temp0_329[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm2[0].o, 1f, 0x36)
            zmm3[0].o = var_138_2
            zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_297)
            float temp0_331[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_328)
            zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(data_142d4cc30, zmm2[0].o, 0x10)
            float temp0_333[0x4] = _mm_permute_ps(temp0_309, 0x66)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_333)
            zmm2[0].o = __vsubps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(temp0_329, _mm_permute_ps(temp0_309, 0x33)), zmm2[0].o)
            zmm7[0].o = temp0_285
            zmm2[0].o = __vsubps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_296), zmm2[0].o)
            float temp0_340[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_329, temp0_295)
            zmm5 = _mm_permute_pd(temp0_309, 3)
            float temp0_342[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm5)
            zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm9[0].o, 0x9d)
            zmm6 = __vmovddup_xmmdq_xmmq(temp0_309[0].q)
            float temp0_345[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6)
            float temp0_347[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_340, 
                __vaddps_xmmdq_xmmdq_xmmdq(temp0_342, temp0_345))
            zmm7[0].o = __vmulps_xmmdq_xmmdq_memdq(temp0_322, var_148_2)
            float temp0_349[0x4] = _mm_permute_ps(temp0_303, 0xcc)
            float temp0_350[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_349)
            zmm6 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_345, temp0_345)
            zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm0[0].o, 1)
            zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
                __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm6, temp0_141, 1), zmm0[0].o, 0x11)
            float temp0_355[0x4] = _mm_permute_ps(temp0_303, 0x66)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_355)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_350, zmm0[0].o)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm0[0].o)
            float temp0_359[0x4] = __vdivps_xmmdq_xmmdq_xmmdq(data_142fc92f0, temp0_319)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_359)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_359)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_331, temp0_359)
            float temp0_363[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_347, temp0_359)
            zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_363, 0x77)
            zmm10 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x77)
            zmm1 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x22)
        else
            zmm1 = data_142d4cc20
            zmm0[0].o = data_142d4cc30
        
        zmm14 = var_188
        zmm8 = temp0_77
        zmm12 = zmm12
        zmm9[0].o = __vmovshdup_xmmdq_xmmdq(zmm10)
        zmm7[0].o = _mm_permute_pd(zmm10, 1)
        zmm11 = _mm_permute_ps(zmm10, 0xe7)
        zmm4 = __vmovshdup_xmmdq_xmmdq(zmm1)
        zmm13 = _mm_permute_pd(zmm1, 1)
        zmm3[0].o = _mm_permute_ps(zmm1, 0xe7)
        zmm5 = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        zmm6 = _mm_permute_pd(zmm0[0].o, 1)
        zmm2[0].o = _mm_permute_ps(zmm0[0].o, 0xe7)
    else
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_139, zmm5, 0x10)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm0[0].o, 0x20)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, 0x800000, 0x30)
        float temp0_257[0x4] = _mm_permute_ps(0x800000, 0)
        zmm3 = __vcmpps_ymmqq_ymmqq_memqq_immb(
            __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm3, temp0_257, 1), data_142fc9320), 
            data_142fc9340, 2)
        zmm6 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_257, temp0_257)
        zmm8 = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm6)
        zmm2[0].o |= _mm256_extractf128_ps(zmm3[0].o, 1)
        zmm3[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm8)
        zmm8 = __vxorps_xmmdq_xmmdq_xmmdq(zmm8, zmm8)
        zmm2[0].o = __vpackssdw_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
        zmm2[0].o = __vpacksswb_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
        
        if (__vpmovmskb_gpr32d_xmmdq(zmm2[0].o) != 0xff)
            goto label_14001813d
        
        zmm2[0].o = zx.o(temp0_137)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_141, zmm0[0].o, 0x10)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm2[0].o, 0x20)
        zmm3[0].o = 0x800000
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, 0x800000, 0x30)
        zmm3[0].o = _mm_permute_ps(0x800000, 0)
        zmm2 = _mm256_insertf128_ps(zmm2, zmm3[0].o, 1)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm6 = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm3[0].o)
        zmm2 = __vcmpps_ymmqq_ymmqq_memqq_immb(__vandps_ymmqq_ymmqq_memqq(zmm2, data_142fc9320), 
            data_142fc9340, 2)
        zmm1 = __vpcmpeqd_xmmdq_xmmdq_xmmdq(zmm1, zmm3[0].o)
        zmm3[0].o = _mm256_extractf128_ps(zmm2[0].o, 1)
        zmm1 |= zmm3[0].o
        zmm2[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm6)
        
        if (__vpmovmskb_gpr32d_xmmdq(__vpacksswb_xmmdq_xmmdq_xmmdq(
                __vpackssdw_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm1), zmm0[0].o)) != 0xff)
            goto label_14001813d
        
        zmm6 = 0x3f800000
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(zmm5, zmm5)
        zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
        zmm3[0].o = zx.o(0)
        zmm13 = __vxorpd_xmmdq_xmmdq_xmmdq(temp0_141, temp0_141)
        zmm4 = 0x3f800000
        zmm1 = zx.o(0)
        zmm11 = __vxorps_xmmdq_xmmdq_xmmdq(zmm11, zmm11)
        zmm7[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm7[0].o)
        zmm9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm9[0].o, zmm9[0].o)
        zmm10 = 0x3f800000
        zmm8 = temp0_77
    
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm5, 0x10)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x20)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm2[0].o, 0x30)
    float temp0_429[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm4, 0x10), 
            zmm13, 0x20), 
        zmm3[0].o, 0x30)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm10, zmm9[0].o, 0x10)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm7[0].o, 0x20)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm11, 0x30)
    zmm3[0].o = _mm_broadcast_ss(*arg4)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
    zmm3[0].o = _mm_broadcast_ss(arg4[1])
    float temp0_436[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_429, zmm3[0].o)
    float temp0_437[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_436)
    zmm2[0].o = _mm_broadcast_ss(arg4[2])
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_437, zmm0[0].o)
    float temp0_442[0x4] = _mm_permute_ps(__vxorps_xmmdq_xmmdq_memdq(var_128, data_142d3f780), 0xc0)
    zmm1 = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_442)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d3f780)
    zmm2[0].o = _mm_permute_ps(zmm12, 0xc9)
    zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm3[0].o = _mm_permute_ps(zmm12, 0xd2)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xc9)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    zmm2[0].o = zx.o(temp0_124)
    zmm3[0].o = zx.o(temp0_125)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm14, zmm2[0].o, 0x10)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0x20)
    zmm3[0].o = zx.o(temp0_126)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_memd_immb(temp0_67, var_118, 0x10), zmm3[0].o, 0x20)
    float temp0_456[0x4] = _mm_permute_ps(zmm0[0].o, 0xc0)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_456)
    float temp0_458[0x4] = _mm_permute_ps(zmm0[0].o, 0xd5)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_458)
    zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xea)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm8, zmm0[0].o)
else
    char temp0_144 = _mm256_movemask_ps(zmm0)
    zmm3[0].o = zx.o(temp0_135)
    zmm7[0].o = zx.o(temp0_136)
    
    if (temp0_144 != 0xff)
    label_140017e22:
        float temp0_161[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_141, zmm7[0].o, 0x2a)
        float temp0_162[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_141, zmm7[0].o, 0x1c)
        zmm14 = zx.o(temp0_137)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm9[0].o, temp0_141, 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_141, 0x20)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm14, 0x30)
        zmm8 = zmm3[0].o
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, 1f, 0x36)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_139, zmm7[0].o, 0x2a)
        float var_198_1 = temp0_139[0]
        float temp0_169[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_139, zmm7[0].o, 0x1c)
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_169)
        zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
        float temp0_172[0x4] = _mm_permute_ps(zmm0[0].o, 0)
        float temp0_173[0x4] = _mm_permute_ps(zmm0[0].o, 0x55)
        zmm2[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
        float temp0_175[0x4] = _mm_permute_ps(zmm0[0].o, 0xff)
        zmm0[0].o = 0x3f800000
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(0x3f800000, zmm14, 0)
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_162, zmm3[0].o)
        float temp0_178[0x4] = __vunpcklps_xmmdq_xmmdq_xmmdq(temp0_141, zmm7[0].o)
        zmm4 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_169, temp0_169)
        float temp0_180[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm4[0].q | temp0_178[0].q << 0x40, zmm4)
        float temp0_181[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_180)
        zmm3[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm8, zmm9[0].o, 0)
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_161, zmm3[0].o)
        float temp0_186[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm9[0].o, 0x55), 
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm9[0].o, 0xaa))
        float temp0_187[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_186)
        float temp0_188[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_172, temp0_175)
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_173, zmm2[0].o)
        float temp0_190[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_188, zmm3[0].o)
        zmm3[0].o = _mm_permute_ps(temp0_181, 0xd8)
        zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_187, zmm3[0].o)
        zmm4 = _mm_permute_pd(zmm3[0].o, 1)
        zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4)
        float temp0_195[0x4] = _mm_permute_ps(zmm3[0].o, 0x39)
        zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_195)
        float temp0_197[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_190, zmm3[0].o)
        zmm1 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_190, temp0_190)
        temp0_197 f- zmm1[0]
        
        if (temp0_197 f!= zmm1[0] || not(is_ordered.d(temp0_197, zmm1[0])))
            zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm9[0].o, var_198_1, 0x20)
            float temp0_200[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm8, 0x30)
            float temp0_203[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm9[0].o, 0x60), 
                __vmovddup_xmmdq_xmmq(temp0_181[0].q))
            float temp0_206[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(temp0_200, _mm_permute_ps(temp0_181, 0x20)), temp0_203)
            zmm3[0].o = temp0_161
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(
                __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o), temp0_206)
            float var_198_2[0x4] = zmm0[0].o
            float temp0_209[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm14, 1f, 0x36)
            float temp0_210[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(data_142d4cc30, zmm14, 0x10)
            zmm2[0].o = _mm_permute_ps(temp0_187, 0x66)
            float temp0_212[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_210, zmm2[0].o)
            zmm2[0].o = _mm_permute_ps(temp0_187, 0x33)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_209, zmm2[0].o)
            float temp0_215[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_212)
            zmm0[0].o = temp0_162
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_173)
            float temp0_217[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_215)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_memdq(temp0_209, temp0_172)
            zmm4 = _mm_permute_pd(temp0_187, 3)
            float temp0_220[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
            float temp0_221[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm9[0].o, 0x9d)
            zmm0[0].o = __vmovddup_xmmdq_xmmq(temp0_187[0].q)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_221, zmm0[0].o)
            zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_220, zmm0[0].o)
            zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
            float temp0_226[0x4] = __vmulps_xmmdq_xmmdq_memdq(temp0_200, temp0_175)
            zmm2[0].o = _mm_permute_ps(temp0_181, 0xcc)
            zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
            zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_173, temp0_173)
            float temp0_230[0x4] = __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm7[0].o, 1)
            float temp0_234[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
                __vshufps_xmmdq_xmmdq_xmmdq_immb(
                    __vblendps_xmmdq_xmmdq_xmmdq_immb(zmm5, temp0_141, 1), temp0_230, 0x11), 
                _mm_permute_ps(temp0_181, 0x66))
            zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_234)
            float temp0_236[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_226, zmm2[0].o)
            zmm2[0].o = data_142fc92f0
            zmm2[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_197)
            zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_236, zmm2[0].o)
            float temp0_239[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_217, zmm2[0].o)
            float temp0_240[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm2[0].o, var_198_2)
            zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
            zmm1 = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_240, zmm0[0].o, 0x77)
            zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, temp0_239, 0x77)
            zmm5 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, temp0_239, 0x22)
        else
            zmm5 = data_142d4cc20
            zmm1 = data_142d4cc30
        
        zmm8 = var_188
        zmm9[0].o = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
        zmm10 = _mm_permute_pd(zmm0[0].o, 1)
        zmm11 = _mm_permute_ps(zmm0[0].o, 0xe7)
        zmm4 = __vmovshdup_xmmdq_xmmdq(zmm5)
        zmm13 = _mm_permute_pd(zmm5, 1)
        zmm3[0].o = _mm_permute_ps(zmm5, 0xe7)
        zmm6 = __vmovshdup_xmmdq_xmmdq(zmm1)
        zmm7[0].o = _mm_permute_pd(zmm1, 1)
        zmm2[0].o = _mm_permute_ps(zmm1, 0xe7)
    else
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_139, zmm3[0].o, 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm7[0].o, 0x20)
        zmm2[0].o = 0x800000
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, 0x800000, 0x30)
        zmm2[0].o = _mm_permute_ps(0x800000, 0)
        zmm0 = __vcmpps_ymmqq_ymmqq_memqq_immb(
            __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm0, zmm2[0].o, 1), data_142fc9320), 
            data_142fc9340, 2)
        
        if (_mm256_movemask_ps(zmm0) != 0xff)
            goto label_140017e22
        
        zmm0[0].o = zx.o(temp0_137)
        zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_141, zmm7[0].o, 0x10)
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm0[0].o, 0x20)
        zmm2[0].o = 0x800000
        zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, 0x800000, 0x30)
        zmm2[0].o = _mm_permute_ps(0x800000, 0)
        zmm0 = __vcmpps_ymmqq_ymmqq_memqq_immb(
            __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm0, zmm2[0].o, 1), data_142fc9320), 
            data_142fc9340, 2)
        
        if (_mm256_movemask_ps(zmm0) != 0xff)
            goto label_140017e22
        
        zmm7[0].o = 0x3f800000
        zmm2[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm2[0].o)
        zmm6 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_128, temp0_128)
        zmm1 = __vxorps_xmmdq_xmmdq_xmmdq(zmm1, zmm1)
        zmm3[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
        zmm13 = __vxorpd_xmmdq_xmmdq_xmmdq(temp0_141, temp0_141)
        zmm4 = 0x3f800000
        zmm5 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_109, temp0_109)
        zmm11 = __vxorps_xmmdq_xmmdq_xmmdq(zmm11, zmm11)
        zmm10 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_67, temp0_67)
        zmm9[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm9[0].o, zmm9[0].o)
        zmm0[0].o = 0x3f800000
        zmm8 = var_188
    
    float temp0_378[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm6, 0x10), 
            zmm7[0].o, 0x20), 
        zmm2[0].o, 0x30)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm4, 0x10)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm13, 0x20)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0x30)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm9[0].o, 0x10)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm10, 0x20)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm11, 0x30)
    zmm3[0].o = _mm_broadcast_ss(*arg4)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    zmm3[0].o = _mm_broadcast_ss(arg4[1])
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
    zmm2[0].o = _mm_broadcast_ss(arg4[2])
    float temp0_391[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_378, zmm2[0].o)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_391)
    float temp0_394[0x4] = _mm_permute_ps(__vxorps_xmmdq_xmmdq_memdq(var_128, data_142d3f780), 0xc0)
    zmm1 = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_394)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d3f780)
    zmm2[0].o = _mm_permute_ps(zmm12, 0xc9)
    zmm3[0].o = _mm_permute_ps(zmm0[0].o, 0xd2)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm3[0].o = _mm_permute_ps(zmm12, 0xd2)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xc9)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
    zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm0[0].o)
    zmm2[0].o = zx.o(temp0_124)
    zmm3[0].o = zx.o(temp0_125)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm8, zmm2[0].o, 0x10)
    zmm2[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2[0].o, zmm3[0].o, 0x20)
    zmm3[0].o = zx.o(temp0_126)
    zmm3[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_memd_immb(temp0_67, var_118, 0x10), zmm3[0].o, 0x20)
    float temp0_408[0x4] = _mm_permute_ps(zmm0[0].o, 0xc0)
    zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, temp0_408)
    float temp0_410[0x4] = _mm_permute_ps(zmm0[0].o, 0xd5)
    zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, temp0_410)
    zmm2[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm3[0].o)
    zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xea)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, temp0_77)
zmm3[0].o = arg5
zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xc0)
float temp0_465[0x4] =
    __vaddps_xmmdq_xmmdq_memdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm1), var_f8)
*(arg1 + (rdx << 2) + 0xc0) = temp0_465[0]
*(arg1 + (rdx << 2) + 0xc4) = __vextractps_memd_xmmdq_immb(temp0_465, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
*(arg1 + (rdx << 2) + 0xc8) = __vextractps_memd_xmmdq_immb(temp0_465, 2)
zmm4 = arg1[rax + 0xe]
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
float temp0_471[0x4] =
    __vmulps_xmmdq_xmmdq_xmmdq(zmm4, __vxorps_xmmdq_xmmdq_xmmdq(temp0_465, temp0_465))
zmm2[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm3[0].o = _mm_permute_ps(zmm4, 0x1b)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
zmm2[0].o = __vmovddup_xmmdq_memq(-0.007812501848093234)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm2[0].o)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_471, zmm3[0].o)
float temp0_478[0x4] = _mm_permute_ps(zmm0[0].o, 0x55)
float temp0_480[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm4, 1), temp0_478)
zmm9[0].o = data_142d3f7d0
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_480, zmm9[0].o), zmm3[0].o)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
float temp0_485[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0xb1), zmm0[0].o)
zmm8 = data_142d3f7b0
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_485, zmm8), zmm3[0].o)
zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f640)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, zmm3[0].o)
float temp0_490[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
float temp0_492[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_490, _mm_permute_pd(temp0_490, 1))
zmm4 = temp0_492 f+ __vmovshdup_xmmdq_xmmdq(temp0_492)[0]
zmm5 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm4[0], 6), 0xffffffff)
zmm7[0].o = zmm4 f* 0.5f
float temp0_496[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm4, zmm4[0])
zmm0[0].o = temp0_496 f* temp0_496[0]
zmm0[0].o = zmm0[0].o f* zmm7[0]
zmm0[0].o = 0x3f000000 f- zmm0[0]
zmm0[0].o = temp0_496 f* zmm0[0]
zmm0[0].o = temp0_496 f+ zmm0[0]
zmm0[0].o =
    zmm0[0].o f+ (zmm0[0].o f* (0x3f000000 - (zmm7[0].o f* (zmm0[0].o f* zmm0[0])[0])[0])[0])[0]
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm0[0].o)
zmm3[0].o = _mm_permute_ps(zmm5, 0)
zmm4 = __vandnps_xmmdq_xmmdq_memdq(zmm3[0].o, data_142d3f660)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
arg1[rax + 0xe] = zmm0[0].o
zmm0[0].o = arg1[0xf]
zmm3[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, arg1[0xe])
zmm4 = _mm_permute_pd(zmm3[0].o, 1)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm4)
float temp0_506[0x4] = __vmovshdup_xmmdq_xmmdq(zmm3[0].o)
zmm4 = zmm3[0].o f+ temp0_506[0]
zmm10 = __vxorps_xmmdq_xmmdq_xmmdq(zmm10, zmm10)
float temp0_510[0x4] = _mm_permute_ps(
    __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, _mm_cmp_ss(zmm10, zmm4[0], 2)), 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_510)
arg1[0xf] = zmm0[0].o
zmm0[0].o = arg1[rax + 0xe].d
zmm6 = *(&arg1[rax] + 0xe4)
zmm7[0].o = *(&arg1[rax] + 0xe8)
zmm1 = *(&arg1[rdx] + 0x18)
zmm3[0].o = arg1[rdx + 1].d
float temp0_513[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm7[0].o, 0x10), zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm0[0].o, 0x10)
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1, zmm3[0].o, 0x10)
zmm7[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm7[0].o, *(&arg1[rdx] + 0x14), 0x20)
zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_513, zmm7[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x20)
zmm3[0].o =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[rdx] + 0x14)), zmm3[0].o, 0x20)
zmm6 = __vmovsd_xmmdq_memq(arg1[rdx + 1].q)
zmm3[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm3[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm3[0].o)
zmm3[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm3[0].o, zmm3[0].o)
zmm7[0].o = _mm_broadcast_ss(*(&arg1[rax] + 0xec))
zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm3[0].o)
float temp0_528[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm1, 0x20), zmm7[0].o)
float temp0_530[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_513, _mm_permute_ps(zmm3[0].o, 0xd2))
zmm3[0].o = _mm_permute_ps(zmm3[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm3[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_530, zmm0[0].o)
zmm3[0].o = *(arg1 + (rdx << 2) + 0xc0)
zmm3[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg1 + (rdx << 2) + 0xc4), 0x10)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_528, zmm0[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_memd_immb(zmm3[0].o, *(arg1 + (rdx << 2) + 0xc8), 0x20), zmm0[0].o)
*(arg1 + (rdx << 2) + 0x80) = zmm0[0]
*(arg1 + (rdx << 2) + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + (rdx << 2) + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = arg1[rdx]
float temp0_540[0x4] = _mm_broadcast_ss(arg1[rax + 0xe].d)
zmm3[0].o = *(&arg1[rdx] + 0xc)
zmm4 = *(&arg1[rdx] + 8)
zmm6 = *(&arg1[rdx] + 4)
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3[0].o, zmm4, 0x10)
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm6, 0x20)
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm0[0].o, 0x30)
float temp0_544[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_540, zmm7[0].o)
zmm7[0].o = _mm_broadcast_ss(*(&arg1[rax] + 0xec))
zmm7[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm7[0].o)
float temp0_547[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_544, zmm2[0].o)
float temp0_548[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm7[0].o, temp0_547)
zmm2[0].o = _mm_broadcast_ss(*(&arg1[rax] + 0xe4))
zmm7[0].o = __vmovsd_xmmdq_memq(*(&arg1[rdx] + 8))
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm0[0].o, 0x20)
zmm7[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7[0].o, zmm6, 0x30)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm7[0].o, zmm2[0].o)
zmm2[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2[0].o, zmm9[0].o)
float temp0_555[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_548, zmm2[0].o)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x30)
zmm2[0].o = _mm_broadcast_ss(*(&arg1[rax] + 0xe8))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm2[0].o)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm8)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_555)
arg1[rax + 0xa] = zmm0[0].o
zmm0[0].o = arg1[0xb]
float temp0_563[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, arg1[0xa])
zmm2[0].o = _mm_permute_pd(temp0_563, 1)
float temp0_565[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_563, zmm2[0].o)
zmm2[0].o = __vmovshdup_xmmdq_xmmdq(temp0_565)
float temp0_569[0x4] = _mm_permute_ps(
    __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, 
        _mm_cmp_ss(zmm10, (temp0_565 f+ zmm2[0].d)[0], 2)), 
    0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_569)
arg1[0xb] = zmm0[0].o
_mm256_zeroupper()
return &arg1[rax + 0xe]
