// 函数: sub_14001dca0
// 地址: 0x14001dca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18[0x4] = arg6
float var_58[0x4] = arg5
int64_t rax = sx.q(arg3)
int64_t rdx = rax * 3
int32_t zmm0[0x8]
zmm0[0].o = arg1[rax + 0xe]
double zmm1[0x4]
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
float temp0_3[0x4] = _mm_broadcast_ss(*(&arg1[rax] + 0xe4))
float temp0_4[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_3)
float temp0_5[0x4] = _mm_broadcast_ss(*(&arg1[rax] + 0xec))
float temp0_6[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_5)
zmm1[0].o = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = zmm1[0].o f* *(&arg1[rax] + 0xe8)
float temp0_9[0x4] =
    _mm_permute_ps(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_4, 0x88), 0xd8)
float temp0_10[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_6, temp0_9)
float temp0_11[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_9, temp0_6)
zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_4, 0x4e), zmm0[0].o, 0xc)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0x78)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm1[0].o, 0x1c)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_4, 0x60)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = data_142d3f670
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rdx << 2) + 0x64), 0x1d)
float zmm2[0x4] = *(arg1 + (rdx << 2) + 0x60)
float temp0_20[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rdx << 2) + 0x68), 0x2b)
float temp0_22[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2, _mm_permute_ps(zmm0[0].o, 0xc0))
float temp0_23[0x4] = _mm_permute_ps(temp0_11, 0xea)
float temp0_25[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_23), temp0_22)
float temp0_28[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(temp0_10, 0xd5)), temp0_25)
float zmm8[0x8]
zmm8[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm2, _mm_permute_ps(temp0_10, 0xea))
float temp0_31[0x4] = _mm_permute_ps(zmm0[0].o, 0xd5)
float temp0_32[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_31)
zmm8[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm8[0].o, temp0_32)
zmm8[0].o = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(temp0_11, 0xc0)), zmm8[0].o)
float temp0_38[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm2, _mm_permute_ps(temp0_11, 0xd5))
float temp0_39[0x4] = _mm_permute_ps(temp0_10, 0xc0)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_39)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_38, zmm1[0].o)
float temp0_43[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_20, _mm_permute_ps(zmm0[0].o, 0xea))
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_43)
float temp0_46[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_10, 0x9c), temp0_11, 0x60)
float temp0_48[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_11, 0x8c), temp0_10, 0x20)
zmm0[0].o = __vblendps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_10, 0x4e), temp0_11, 0x14), 
    zmm0[0].o, 4)
float temp0_56[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_46, _mm_permute_ps(temp0_28, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(temp0_28, 0xd5)))
float temp0_57[0x4] = _mm_permute_ps(temp0_28, 0xea)
float zmm12[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_57), temp0_56)
float temp0_64[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_46, _mm_permute_ps(zmm8[0].o, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(zmm8[0].o, 0xd5)))
float temp0_65[0x4] = _mm_permute_ps(zmm8[0].o, 0xea)
float zmm14[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_65), temp0_64)
float temp0_72[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_46, _mm_permute_ps(zmm1[0].o, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_48, _mm_permute_ps(zmm1[0].o, 0xd5)))
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = __vmovsd_xmmdq_memq(*(arg1 + (rdx << 2) + 0x80))
float temp0_76[0x4] =
    __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, *(arg1 + (rdx << 2) + 0x88), 0x20)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_72)
zmm0[0].o = __vmovsd_xmmdq_memq(*(arg1 + (rdx << 2) + 0xc0))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(zmm0[0].o, *(arg1 + (rdx << 2) + 0xc8), 0x20)
float var_108[0x4] = zmm0[0].o
float temp0_80[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_76, zmm0[0].o)
zmm0[0].o = data_142d3f780
double temp0_81[0x2] = _mm_permute_pd(temp0_80, 1)
zmm2 = __vxorpd_xmmdq_xmmdq_xmmdq(temp0_81, zmm0[0].o)
float temp0_83[0x4] = __vmovshdup_xmmdq_xmmdq(temp0_80)
float temp0_84[0x4] = _mm_permute_ps(zmm2, 0x80)
float temp0_86[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_84, _mm_permute_ps(zmm14, 0xc1))
float temp0_87[0x4] = _mm_permute_ps(temp0_80, 0xd5)
float temp0_90[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_86, 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_87, _mm_permute_ps(zmm1[0].o, 0xc1)))
float zmm6[0x4] = __vxorps_xmmdq_xmmdq_xmmdq(temp0_83, zmm0[0].o)
zmm8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(temp0_80, zmm0[0].o)
float temp0_95[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm2, temp0_80, 0x9c), 
        zmm6, 0x20), 
    temp0_90)
float temp0_101[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_84, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovshdup_xmmdq_xmmdq(zmm1[0].o), zmm14, 0x68)), 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_87, _mm_permute_ps(zmm1[0].o, 0xda)))
float temp0_104[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_95, 
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_83, zmm8[0].o, 0x10)[0].q | temp0_80[0].q << 0x40, 
        temp0_101))
float temp0_106[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(_mm_permute_ps(temp0_80, 0x4a), zmm6, 0x20)
float temp0_108[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_106, _mm_permute_ps(zmm12, 0xc0))
float temp0_109[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm8[0].o, temp0_80, 0x40)
float temp0_110[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm14, zmm1[0].o, 0x30)
float temp0_113[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_108, 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_109, 
        __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_110, 0x80)))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_81, zmm6, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x20)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_113)
float temp0_119[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_106, 
    _mm_permute_ps(__vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm14, 0xc), 0x78))
float var_b8[0x4] = zmm1[0].o
float temp0_123[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_119, 
    __vmulps_xmmdq_xmmdq_xmmdq(temp0_109, 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(_mm_permute_ps(zmm1[0].o, 0x46), zmm14, 0x68)))
float zmm4[0x4] = *(arg1 + (rax << 2) + 0x78)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm8[0].o, temp0_80, 0)
zmm1[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_80, 0xc8)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_123)
zmm8[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, temp0_104)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float var_c8[0x4] = zmm4
zmm1[0].o = __vmovddup_xmmdq_xmmq(zmm4[0].q)
float temp0_130[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
int32_t result = __vextractps_gpr32_xmmdq_immb(temp0_130, 2)
zmm0 = __vcmpps_ymmqq_ymmqq_memqq_immb(
    __vandps_ymmqq_ymmqq_memqq(__vblendps_ymmqq_ymmqq_memqq_immb(zmm8, data_142fc9300, 0xf8), 
        data_142fc9320), 
    data_142fc9340, 2)
char temp0_134 = _mm256_movemask_ps(zmm0)
float zmm3[0x4] = _mm_permute_pd(zmm8[0].o, 1)
float zmm5[0x4]
float zmm7[0x4]
double zmm9[0x2]
float zmm10[0x4]

if (temp0_134 != 0xff)
label_14001e0d6:
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm8[0].o, 0x8e)
    float temp0_155[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_130, 0x60)
    float temp0_156[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_130, zmm8[0].o, 0x8c)
    zmm1[0].o = zx.o(result)
    float temp0_161[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(
                __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm8[0].o, zmm3, 0x10), zmm3, 0x20), 
            zmm1[0].o, 0x30), 
        __vinsertps_xmmdq_xmmdq_memd_immb(temp0_130, 1f, 0x36))
    float temp0_165[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm8[0].o, 0x4e), temp0_130, 0x60), 
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(temp0_130, zmm8[0].o, 0x4c))
    float temp0_166[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_161, temp0_165)
    zmm9 = _mm_permute_ps(temp0_166, 0)
    float temp0_168[0x4] = _mm_permute_ps(temp0_166, 0x55)
    float temp0_169[0x4] = _mm_permute_ps(temp0_166, 0xaa)
    float temp0_170[0x4] = _mm_permute_ps(temp0_166, 0xff)
    zmm5 = 0x3f800000
    float temp0_171[0x4] = __vshufps_xmmdq_xmmdq_xmmdq_immb(0x3f800000, zmm1[0].o, 0)
    zmm4 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_165, temp0_165)
    float temp0_176[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(
        __vmulps_xmmdq_xmmdq_xmmdq(temp0_156, temp0_171), 
        __vmulps_xmmdq_xmmdq_xmmdq(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm8[0].o, temp0_130, 0x73), 
            zmm4))
    float temp0_178[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_155, 
        __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_130, zmm8[0].o, 0))
    float temp0_179[0x4] = _mm_permute_ps(zmm8[0].o, 0x55)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm8[0].o, temp0_130, 0x4a)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_179, zmm0[0].o)
    float temp0_182[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_178, zmm0[0].o)
    zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm9, temp0_170)
    float temp0_184[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_168, temp0_169)
    zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_184)
    float temp0_187[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_182, _mm_permute_ps(temp0_176, 0xd8))
    float temp0_189[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_187, _mm_permute_pd(temp0_187, 1))
    float temp0_191[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_189, _mm_permute_ps(temp0_189, 0x39))
    float temp0_192[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_191)
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    temp0_192 f- zmm0[0]
    
    if (temp0_192 f!= zmm0[0] || not(is_ordered.d(temp0_192, zmm0[0])))
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_130, zmm8[0].o, 0x10)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm8[0].o, zmm0[0].o, 0x24)
        float temp0_198[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm8[0].o, 0x60), 
            __vmovddup_xmmdq_xmmq(temp0_176[0].q))
        float temp0_199[0x4] = _mm_permute_ps(temp0_176, 0x20)
        float temp0_201[0x4] =
            __vsubps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_199), temp0_198)
        float temp0_202[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(zmm1[0].o, 1f, 0x36)
        float temp0_204[0x4] =
            __vsubps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_155, temp0_169), temp0_201)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(data_142d4cc30, zmm1[0].o, 0x10)
        float temp0_206[0x4] = _mm_permute_ps(temp0_182, 0x66)
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_206)
        zmm1[0].o = __vsubps_xmmdq_xmmdq_xmmdq(
            __vmulps_xmmdq_xmmdq_xmmdq(temp0_202, _mm_permute_ps(temp0_182, 0x33)), zmm1[0].o)
        float temp0_212[0x4] =
            __vsubps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_156, temp0_168), zmm1[0].o)
        float temp0_213[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_202, zmm9)
        float temp0_215[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_156, _mm_permute_pd(temp0_182, 3))
        zmm2 = __vmovddup_xmmdq_xmmq(temp0_182[0].q)
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm8[0].o, 0x9d)
        float temp0_220[0x4] = __vsubps_xmmdq_xmmdq_xmmdq(temp0_213, 
            __vaddps_xmmdq_xmmdq_xmmdq(temp0_215, __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2)))
        zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, temp0_170)
        float temp0_223[0x4] =
            __vmulps_xmmdq_xmmdq_xmmdq(temp0_155, _mm_permute_ps(temp0_176, 0xcc))
        zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_130, 0x70)
        float temp0_225[0x4] = _mm_permute_ps(temp0_176, 0x66)
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_225)
        zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_223, zmm1[0].o)
        zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        zmm1[0].o = data_142fc92f0
        zmm1[0].o = __vdivps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_192)
        zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
        float temp0_231[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_212, zmm1[0].o)
        float temp0_232[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_204, zmm1[0].o)
        zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_220, zmm1[0].o)
        zmm7 = __vshufps_xmmdq_xmmdq_xmmdq_immb(temp0_232, zmm1[0].o, 0x77)
        zmm5 = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_231, 0x77)
        zmm0[0].o = __vshufps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, temp0_231, 0x22)
    else
        zmm0[0].o = data_142d4cc20
        zmm7 = data_142d4cc30
    
    zmm12 = zmm12
    zmm14 = zmm14
    zmm4 = var_108
    zmm8[0].o = __vmovshdup_xmmdq_xmmdq(zmm5)
    arg6 = _mm_permute_pd(zmm5, 1)
    zmm9 = _mm_permute_ps(zmm5, 0xe7)
    zmm10 = __vmovshdup_xmmdq_xmmdq(zmm0[0].o)
    zmm3 = _mm_permute_pd(zmm0[0].o, 1)
    zmm6 = _mm_permute_ps(zmm0[0].o, 0xe7)
    zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm7)
    zmm2 = _mm_permute_pd(zmm7, 1)
    arg5 = _mm_permute_ps(zmm7, 0xe7)
else
    zmm0[0].o = __vmovshdup_xmmdq_xmmdq(temp0_130)
    zmm1[0].o = __vmovshdup_xmmdq_xmmdq(zmm8[0].o)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, temp0_130, 0x1c)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm0[0].o, 0x20)
    zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, 0x800000, 0x30)
    zmm1 = __vcmpps_ymmqq_ymmqq_memqq_immb(
        __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm1, _mm_permute_ps(0x800000, 0), 1), 
            data_142fc9320), 
        data_142fc9340, 2)
    
    if (_mm256_movemask_ps(zmm1) != 0xff)
        goto label_14001e0d6
    
    zmm1[0].o = zx.o(result)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3, zmm0[0].o, 0x10)
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm1[0].o, 0x20)
    zmm1[0].o = 0x800000
    zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, 0x800000, 0x30)
    zmm1[0].o = _mm_permute_ps(0x800000, 0)
    zmm0 = __vcmpps_ymmqq_ymmqq_memqq_immb(
        __vandps_ymmqq_ymmqq_memqq(_mm256_insertf128_ps(zmm0, zmm1[0].o, 1), data_142fc9320), 
        data_142fc9340, 2)
    
    if (_mm256_movemask_ps(zmm0) != 0xff)
        goto label_14001e0d6
    
    zmm2 = 0x3f800000
    arg5 = __vxorps_xmmdq_xmmdq_xmmdq(arg5, arg5)
    zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
    zmm7 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_130, temp0_130)
    zmm6 = __vxorps_xmmdq_xmmdq_xmmdq(zmm6, zmm6)
    zmm3 = __vxorpd_xmmdq_xmmdq_xmmdq(zmm3, zmm3)
    zmm10 = 0x3f800000
    zmm0[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm0[0].o)
    zmm9 = __vxorps_xmmdq_xmmdq_xmmdq(temp0_81, temp0_81)
    arg6 = __vxorpd_xmmdq_xmmdq_xmmdq(arg6, arg6)
    zmm8[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm8[0].o, zmm8[0].o)
    zmm5 = 0x3f800000
    zmm4 = var_108

zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm1[0].o, 0x10)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm2, 0x20)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, arg5, 0x30)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm10, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x30)
float temp0_254[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm5, zmm8[0].o, 0x10), 
        arg6, 0x20), 
    zmm9, 0x30)
float temp0_256[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(*arg4), temp0_254)
float temp0_257[0x4] = _mm_broadcast_ss(arg4[1])
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_257)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_256, zmm0[0].o)
float temp0_260[0x4] = _mm_broadcast_ss(arg4[2])
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_260)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
zmm1[0].o = var_c8
zmm1[0].o = __vxorps_xmmdq_xmmdq_memdq(zmm1[0].o, data_142d3f780)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0xc0)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
float temp0_266[0x4] = _mm_permute_ps(temp0_80, 0xc9)
zmm0[0].o = __vxorps_xmmdq_xmmdq_memdq(zmm0[0].o, data_142d3f780)
float temp0_269[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_266, _mm_permute_ps(zmm0[0].o, 0xd2))
float temp0_270[0x4] = _mm_permute_ps(temp0_80, 0xd2)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_270, zmm0[0].o)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_269, zmm0[0].o)
float temp0_278[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(zmm12, _mm_permute_ps(zmm0[0].o, 0xc0)), 
    __vmulps_xmmdq_xmmdq_xmmdq(zmm14, _mm_permute_ps(zmm0[0].o, 0xd5)))
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xea)
zmm0[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, var_b8)
float temp0_281[0x4] = _mm_permute_ps(arg7, 0xc0)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_281, zmm1[0].o)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm4)
*(arg1 + (rdx << 2) + 0xc0) = zmm1[0].d
*(arg1 + (rdx << 2) + 0xc4) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 1)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_278)
*(arg1 + (rdx << 2) + 0xc8) = __vextractps_memd_xmmdq_immb(zmm1[0].o, 2)
zmm4 = arg1[rax + 0xe]
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_281, zmm0[0].o)
zmm1[0].o = __vxorps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm1[0].o)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm4, zmm1[0].o)
float temp0_290[0x4] = _mm_permute_ps(zmm0[0].o, 0)
float temp0_292[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0x1b), temp0_290)
zmm2 = __vmovddup_xmmdq_memq(-0.007812501848093234)
float temp0_294[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_292, zmm2)
float temp0_295[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_294)
zmm1[0].o = _mm_permute_ps(zmm0[0].o, 0x55)
float temp0_298[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_pd(zmm4, 1), zmm1[0].o)
zmm9 = data_142d3f7d0
float temp0_300[0x4] =
    __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_298, zmm9), temp0_295)
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0xaa)
float temp0_303[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_permute_ps(zmm4, 0xb1), zmm0[0].o)
zmm8[0].o = data_142d3f7b0
float temp0_307[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(zmm4, 
    __vmulps_xmmdq_xmmdq_memdq(
        __vaddps_xmmdq_xmmdq_xmmdq(__vmulps_xmmdq_xmmdq_xmmdq(temp0_303, zmm8[0].o), temp0_300), 
        data_142d3f640))
float temp0_308[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_307, temp0_307)
float temp0_310[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_308, _mm_permute_pd(temp0_308, 1))
zmm4 = temp0_310 f+ __vmovshdup_xmmdq_xmmdq(temp0_310)[0]
zmm5 = __vandnps_xmmdq_xmmdq_xmmdq(_mm_cmp_ss(0x322bcc77, zmm4[0], 6), 0xffffffff)
zmm7 = zmm4 f* 0.5f
float temp0_314[0x4] = __vrsqrtss_xmmdq_xmmdq_xmmd(zmm4, zmm4[0])
zmm0[0].o = temp0_314 f* temp0_314[0]
zmm0[0].o = zmm0[0].o f* zmm7[0]
zmm0[0].o = 0x3f000000 f- zmm0[0]
zmm0[0].o = temp0_314 f* zmm0[0]
zmm0[0].o = temp0_314 f+ zmm0[0]
zmm0[0].o = zmm0[0].o f+ (zmm0[0].o f* (0x3f000000 - (zmm7 f* (zmm0[0].o f* zmm0[0])[0])[0])[0])[0]
zmm0[0].o = _mm_permute_ps(zmm0[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(temp0_307, zmm0[0].o)
float temp0_317[0x4] = _mm_permute_ps(zmm5, 0)
zmm4 = __vandnps_xmmdq_xmmdq_memdq(temp0_317, data_142d3f660)
zmm0[0].o = __vandps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_317)
zmm0[0].o = __vorps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm4)
arg1[rax + 0xe] = zmm0[0].o
zmm0[0].o = arg1[0xf]
float temp0_321[0x4] = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, arg1[0xe])
float temp0_323[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_321, _mm_permute_pd(temp0_321, 1))
zmm4 = temp0_323 f+ __vmovshdup_xmmdq_xmmdq(temp0_323)[0]
zmm10 = __vxorps_xmmdq_xmmdq_xmmdq(zmm10, zmm10)
float temp0_328[0x4] = _mm_permute_ps(
    __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, _mm_cmp_ss(zmm10, zmm4[0], 2)), 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_328)
arg1[0xf] = zmm0[0].o
zmm0[0].o = arg1[rax + 0xe].d
zmm6 = *(&arg1[rax] + 0xe4)
zmm7 = *(&arg1[rax] + 0xe8)
zmm1[0].o = *(&arg1[rdx] + 0x18)
zmm3 = arg1[rdx + 1].d
float temp0_331[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm7, 0x10), zmm0[0].o, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm7, zmm0[0].o, 0x10)
float temp0_335[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_331, 
    __vinsertps_xmmdq_xmmdq_memd_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm1[0].o, zmm3, 0x10), 
        *(&arg1[rdx] + 0x14), 0x20))
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm6, 0x20)
float temp0_338[0x4] =
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[rdx] + 0x14)), zmm3, 0x20)
zmm6 = __vmovsd_xmmdq_memq(arg1[rdx + 1].q)
float temp0_341[0x4] =
    __vsubps_xmmdq_xmmdq_xmmdq(temp0_335, __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_338))
float temp0_342[0x4] = __vaddps_xmmdq_xmmdq_xmmdq(temp0_341, temp0_341)
float temp0_344[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(_mm_broadcast_ss(*(&arg1[rax] + 0xec)), temp0_342)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm1[0].o, 0x20)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_344)
float temp0_348[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(temp0_331, _mm_permute_ps(temp0_342, 0xd2))
float temp0_349[0x4] = _mm_permute_ps(temp0_342, 0xc9)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_349)
zmm0[0].o = __vsubps_xmmdq_xmmdq_xmmdq(temp0_348, zmm0[0].o)
float temp0_352[0x4] = __vinsertps_xmmdq_xmmdq_memd_immb(*(arg1 + (rdx << 2) + 0xc0), 
    *(arg1 + (rdx << 2) + 0xc4), 0x10)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
zmm1[0].o = __vinsertps_xmmdq_xmmdq_memd_immb(temp0_352, *(arg1 + (rdx << 2) + 0xc8), 0x20)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm0[0].o)
*(arg1 + (rdx << 2) + 0x80) = zmm0[0]
*(arg1 + (rdx << 2) + 0x84) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 1)
*(arg1 + (rdx << 2) + 0x88) = __vextractps_memd_xmmdq_immb(zmm0[0].o, 2)
zmm0[0].o = arg1[rdx]
zmm1[0].o = _mm_broadcast_ss(arg1[rax + 0xe].d)
zmm3 = *(&arg1[rdx] + 0xc)
zmm4 = *(&arg1[rdx] + 8)
zmm6 = *(&arg1[rdx] + 4)
float temp0_361[0x4] = __vinsertps_xmmdq_xmmdq_xmmdq_immb(
    __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm3, zmm4, 0x10), zmm6, 
        0x20), 
    zmm0[0].o, 0x30)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_361)
float temp0_363[0x4] = _mm_broadcast_ss(*(&arg1[rax] + 0xec))
float temp0_364[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_363)
zmm1[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(temp0_364, zmm1[0].o)
float temp0_367[0x4] = _mm_broadcast_ss(*(&arg1[rax] + 0xe4))
float temp0_372[0x4] = __vmulps_xmmdq_xmmdq_xmmdq(
    __vmulps_xmmdq_xmmdq_xmmdq(
        __vinsertps_xmmdq_xmmdq_xmmdq_immb(
            __vinsertps_xmmdq_xmmdq_xmmdq_immb(__vmovsd_xmmdq_memq(*(&arg1[rdx] + 8)), zmm0[0].o, 
                0x20), 
            zmm6, 0x30), 
        temp0_367), 
    zmm9)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, temp0_372)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm6, zmm0[0].o, 0x10)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm3, 0x20)
zmm0[0].o = __vinsertps_xmmdq_xmmdq_xmmdq_immb(zmm0[0].o, zmm4, 0x30)
float temp0_377[0x4] = _mm_broadcast_ss(*(&arg1[rax] + 0xe8))
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, temp0_377)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm8[0].o)
zmm0[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
arg1[rax + 0xa] = zmm0[0].o
zmm0[0].o = arg1[0xb]
zmm1[0].o = __vmulps_xmmdq_xmmdq_memdq(zmm0[0].o, arg1[0xa])
zmm2 = _mm_permute_pd(zmm1[0].o, 1)
zmm1[0].o = __vaddps_xmmdq_xmmdq_xmmdq(zmm1[0].o, zmm2)
float temp0_384[0x4] = __vmovshdup_xmmdq_xmmdq(zmm1[0].o)
zmm1[0].o = zmm1[0].o f+ temp0_384[0]
zmm1[0].o = _mm_cmp_ss(zmm10, zmm1[0].d, 2)
zmm1[0].o = __vblendvps_xmmdq_xmmdq_xmmdq_xmmdq(0xbf800000, 0x3f800000, zmm1[0].o)
zmm1[0].o = _mm_permute_ps(zmm1[0].o, 0)
zmm0[0].o = __vmulps_xmmdq_xmmdq_xmmdq(zmm0[0].o, zmm1[0].o)
arg1[0xb] = zmm0[0].o
_mm256_zeroupper()
return result
