// 函数: sub_1414a3420
// 地址: 0x1414a3420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
*(arg1 + 0x5c0) = arg2
float var_138[0x4]
sub_141228a60(&var_138, arg2)
*(arg1 + 0x5d0) = var_138
*(arg1 + 0x48) = arg3
float var_128[0x4]
*(arg1 + 0x5e0) = var_128
uint128_t var_118
*(arg1 + 0x5f0) = var_118
*(arg1 + 0x54) = *arg4
*(arg1 + 0x5c) = arg4[1].d
sub_1414763d0(arg1 + 0x3d0, &arg4[0x16])
uint64_t rbx_1 = zx.q(arg5)
uint64_t rdi = zx.q(arg6)
int32_t rcx_2 = 0
uint32_t r15 = zx.d(arg8)
*(arg1 + 0x548) = rbx_1.d
*(arg1 + 0x54c) = rdi.d

if (*(*(arg2 + 0x20) + 0x13c) == 0)
    rcx_2 = 0x10

int32_t rcx_3 = rcx_2 | (*(arg1 + 0x570) & 0xffffffef)
*(arg1 + 0x570) = rcx_3
int32_t rax_10 = ((zx.d(arg4[0x44].b) << 5 ^ rcx_3) & 0x20) ^ rcx_3
*(arg1 + 0x570) = rax_10
int32_t rcx_9 = (((zx.d(*(arg4 + 0x221)) << 9 ^ rax_10) & 0x200) ^ rax_10) | 0x40
*(arg1 + 0x570) = rcx_9
int32_t rdx_4 = (zx.d(*(*(arg2 + 0x20) + 0x138)) & 0xffffff80) << 7 | (rcx_9 & 0xffffbfff)
*(arg1 + 0x570) = rdx_4
int32_t rcx_14 = (zx.d(*(*(arg2 + 0x20) + 0x139)) & 2) << 7 | r15
*(arg1 + 0x550) = arg7
*(arg1 + 0x570) = rcx_14 << 7 | (rdx_4 & 0xffff7f7f)
int32_t var_278
int32_t var_268
sub_140ad6430(arg4 + 0x5c, &var_278, &var_268)
float zmm3[0x4] = arg4[0xb].d
float zmm1_1[0x4] = *(arg4 + 0x54)
float zmm4[0x4] = *(arg4 + 0x10)
float zmm8[0x4] = data_142d3f660
var_138[1].q = 0
var_138[3].q = 0
var_128[2].q = 0
float zmm6[0x4] = var_138
zmm6[0] = arg4[0xa].d[0]
float zmm2[0x4] = *(arg4 + 0x20)
float temp0_1[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm6)
float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
temp0_3[0] = zmm1_1[0]
float temp0_4[0x4] = _mm_shuffle_ps(0, 0, 0xd2)
temp0_4[0] = zmm3[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), temp0_5)
float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), temp0_6)
float temp0_11[0x4] = _mm_mul_ps(temp0_2, temp0_5)
float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm8)
float temp0_14[0x4] = _mm_add_ps(temp0_11, temp0_1)
var_138 = zmm6
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_10)
float temp0_18[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_19[0x4] = _mm_add_ps(temp0_8, temp0_16)
float temp0_20[0x4] = _mm_mul_ps(temp0_18, temp0_6)
float temp0_21[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_22[0x4] = _mm_add_ps(temp0_17, temp0_13)
float temp0_23[0x4] = _mm_mul_ps(temp0_21, zmm8)
float temp0_24[0x4] = _mm_add_ps(temp0_19, temp0_20)
float var_1b8[0x4] = temp0_22
float temp0_25[0x4] = _mm_add_ps(temp0_24, temp0_23)
zmm2 = *(arg4 + 0x30)
float temp0_26[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_27[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_28[0x4] = _mm_mul_ps(temp0_26, zmm6)
float var_1a8[0x4] = temp0_25
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), temp0_5)
float temp0_31[0x4] = _mm_mul_ps(temp0_27, temp0_6)
float temp0_32[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_33[0x4] = _mm_add_ps(temp0_30, temp0_28)
float temp0_34[0x4] = _mm_mul_ps(temp0_32, zmm8)
float temp0_36[0x4] = _mm_add_ps(_mm_add_ps(temp0_33, temp0_31), temp0_34)
zmm2 = *(arg4 + 0x40)
float temp0_37[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_38[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_39[0x4] = _mm_mul_ps(temp0_37, zmm6)
zmm6 = arg4[0xc].d
float var_198[0x4] = temp0_36
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), temp0_5)
float zmm7[0x4] = *(arg4 + 0x5c)
float temp0_42[0x4] = _mm_mul_ps(temp0_38, temp0_6)
float temp0_43[0x4] = _mm_add_ps(temp0_41, temp0_39)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
float temp0_47[0x4] = _mm_add_ps(_mm_add_ps(temp0_43, temp0_42), temp0_45)
float var_188[0x4] = temp0_47
float zmm10[0x4] = *(arg4 + 0x64)
float zmm14[0x4] = data_143dbb200
float zmm9[0x4] = data_143dbb1fc
zmm7[0] = zmm7[0] * zmm7[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm7[0] = zmm7[0] + zmm10[0]
zmm1_1 = data_143dbb1f8
int64_t var_2d8
float var_2d0
float var_2c8_1
float var_2c4
int64_t var_2a8
float zmm0_1[0x4]
float zmm5[0x4]
float zmm11[0x4]
float zmm12[0x4]

if (not(zmm7[0] != 1f))
    zmm0_1 = zx.o(*(arg4 + 0x5c))
    float rax_14 = *(arg4 + 0x64)
    zmm12 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
    var_2d0 = rax_14
    zmm11 = var_2d0
    var_2d8 = zmm0_1.q
    zmm8 = var_2d8.d
    var_2a8 = zmm12.q
    var_2c8_1 = zmm11[0]
    var_2c4 = zmm8[0]
else if (zmm7[0] >= 9.99999994e-09f)
    zmm5 = 0x3f000000
    float temp0_49[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
    zmm2 = 0x3f000000
    zmm7[0] = zmm7[0] * 0.5f
    temp0_49[0] = temp0_49[0] * temp0_49[0]
    zmm7[0] = zmm7[0] * temp0_49[0]
    zmm2[0] = 0.5f - zmm7[0]
    temp0_49[0] = temp0_49[0] * zmm2[0]
    temp0_49[0] = temp0_49[0] + temp0_49[0]
    temp0_49[0] = temp0_49[0] * temp0_49[0]
    zmm7[0] = zmm7[0] * temp0_49[0]
    zmm1_1 = data_143dbb1f8
    zmm5[0] = 0.5f - zmm7[0]
    temp0_49[0] = temp0_49[0] * zmm5[0]
    temp0_49[0] = temp0_49[0] + temp0_49[0]
    zmm11 = temp0_49
    float var_2c8_2 = temp0_49[0]
    zmm8 = zmm11
    zmm11[0] = zmm11[0] * zmm6[0]
    zmm8[0] = zmm8[0] * zmm7[0]
    zmm12 = zmm11
    var_2a8 = zmm11.q
    zmm11[0] = zmm11[0] * zmm10[0]
    var_2c8_1 = zmm11[0]
    var_2c4 = zmm8[0]
else
    var_2c4 = zmm1_1[0]
    zmm8 = zmm1_1
    var_2c8_1 = zmm14[0]
    zmm12 = zmm9
    var_2a8 = zmm9.q
    zmm11 = zmm14

int128_t zmm13 = 0x80000000
int32_t var_264
zmm2 = var_264
int32_t var_274
zmm3 = var_274 ^ 0x80000000
zmm5 = var_278 ^ 0x80000000
zmm4 = var_268
int32_t var_270
zmm7 = var_270 ^ 0x80000000
int32_t var_260
zmm6 = var_260
zmm8[0] = zmm8[0] f* data_143dbb1f8
temp0_5[3] = 0
zmm3[0] = zmm3[0] * zmm9[0]
var_138[3] = 0
zmm4[0] = zmm4[0] f* data_143dbb1f8
temp0_6[3] = 0
zmm5[0] = zmm5[0] * zmm1_1[0]
int32_t var_fc = 0x3f800000
zmm7[0] = zmm7[0] * zmm14[0]
zmm5[0] = zmm5[0] + zmm3[0]
zmm2[0] = zmm2[0] f* data_143dbb1fc
zmm5[0] = zmm5[0] + zmm7[0]
zmm6[0] = zmm6[0] * zmm14[0]
zmm4[0] = zmm4[0] + zmm2[0]
zmm12[0] = zmm12[0] f* data_143dbb1fc
temp0_5[0] = zmm3[0]
zmm4[0] = zmm4[0] + zmm6[0]
zmm1_1 = zmm11
float temp0_50[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xe1)
zmm11 = var_138
zmm8[0] = zmm8[0] + zmm12[0]
temp0_50[0] = zmm2[0]
zmm11[0] = zmm5[0]
zmm1_1[0] = zmm1_1[0] * zmm14[0]
temp0_6[0] = zmm7[0]
float temp0_51[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xe1)
float var_108[0x4]
var_108[0] = zmm5[0]
float temp0_52[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xe1)
temp0_51[0] = zmm4[0]
zmm8[0] = zmm8[0] + zmm1_1[0]
float temp0_53[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xc6)
temp0_53[0] = zx.o(var_2a8)[0]
temp0_52[0] = zmm6[0]
float temp0_54[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xc6)
temp0_54[0] = var_2c4[0]
float temp0_55[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xc9)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xc9)
float temp0_57[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
float temp0_59[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0), temp0_56)
float temp0_60[0x4] = _mm_mul_ps(temp0_57, temp0_55)
float temp0_61[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xc6)
float temp0_62[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
float temp0_63[0x4] = _mm_shuffle_ps(var_108, var_108, 0xe1)
float temp0_64[0x4] = _mm_add_ps(temp0_60, temp0_59)
float var_128_2[0x4] = temp0_55
temp0_63[0] = zmm4[0]
temp0_61[0] = var_2c8_1[0]
var_138 = temp0_56
float temp0_65[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xc9)
float temp0_66[0x4] = _mm_mul_ps(temp0_62, temp0_65)
float var_118_2[0x4] = temp0_65
float temp0_67[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xff)
float temp0_68[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xc6)
float temp0_69[0x4] = _mm_add_ps(temp0_64, temp0_66)
temp0_68[0] = zmm8[0]
float temp0_70[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xc9)
float temp0_71[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0)
float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xaa), temp0_65)
int32_t var_2cc = 0x3f800000
float temp0_74[0x4] = _mm_mul_ps(temp0_67, temp0_70)
int32_t var_250 = 0
float temp0_75[0x4] = _mm_mul_ps(temp0_71, temp0_56)
float var_108_1[0x4] = temp0_70
zmm14 = _mm_add_ps(temp0_69, temp0_74)
float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0x55), temp0_55)
float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xff), temp0_70)
float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_75)
var_138 = zmm14
float zmm15[0x4] = _mm_add_ps(_mm_add_ps(temp0_81, temp0_73), temp0_80)
float temp0_84[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0)
float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0xaa), temp0_65)
float temp0_87[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
float temp0_88[0x4] = _mm_mul_ps(temp0_84, temp0_56)
float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_55)
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0xff), temp0_70)
zmm10 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_89, temp0_88), temp0_86), temp0_91)
float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0x55), temp0_55)
float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0), temp0_56)
var_2a8.o = temp0_96
float var_288_1[0x4] = zmm10
float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xaa), temp0_65)
float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_98)
zmm3 = var_2d8.o
zmm3[0] = arg4[0xd].d[0]
float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xff), temp0_70)
float temp0_104[0x4] = _mm_add_ps(temp0_101, temp0_100)
zmm1_1 = *(arg4 + 0x6c)
zmm2 = arg4[0xe].d
float temp0_105[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_105[0] = zmm1_1[0]
zmm12 = _mm_add_ps(temp0_104, temp0_103)
float temp0_107[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0xc6)
temp0_107[0] = zmm2[0]
float temp0_108[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0xc9)
var_2d8.o = temp0_108
float temp0_109[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xff)
float temp0_110[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xaa)
float temp0_111[0x4] = _mm_mul_ps(temp0_109, zmm12)
float temp0_112[0x4] = _mm_mul_ps(temp0_110, zmm10)
float temp0_113[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0x55)
var_2a8.o = zmm12
float var_108_2[0x4] = zmm12
zmm11 = 0xbf800000
float temp0_119[0x4] = _mm_add_ps(_mm_add_ps(temp0_111, temp0_112), 
    _mm_add_ps(_mm_mul_ps(temp0_113, zmm15), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_108, temp0_108, 0), zmm14)))
float temp0_120[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0xaa)
temp0_120[0] = temp0_120[0] f+ arg4[0x10].d
*(arg1 + 0x164) = temp0_120[0]
zmm0_1 = arg4[0x10].d
zmm0_1[0] = zmm0_1[0] + zmm0_1[0]
temp0_120[0] = temp0_120[0] - zmm0_1[0]
float temp0_121[0x4] = __maxss_xmmss_memss(temp0_120[0], arg4[0x14].d)
*(arg1 + 0x168) = temp0_121[0]
int64_t var_298
float var_258[0x4]
float var_178[0x4][0x4]
void* rdx_8
int32_t* r8
float var_1f8[0x4]

if (r15.b == 0)
    int32_t rax_18 = *(arg1 + 0x570)
    
    if ((rax_18.b & 0x10) != 0)
        float temp0_158[0x4] = __minss_xmmss_memss(temp0_121[0], 0xc59c4000)
        float temp0_159[0x4] = __maxss_xmmss_memss(temp0_120[0], 0x459c4000)
        int32_t var_2cc_3 = 0x3f800000
        zmm3 = var_2d8.o
        *(arg1 + 0x168) = temp0_158[0]
        *(arg1 + 0x164) = temp0_159[0]
        zmm1_1 = *(arg1 + 0x58)
        zmm2 = *(arg1 + 0x5c)
        zmm3[0] = (*(arg1 + 0x54) ^ 0x80000000)[0]
        float temp0_160[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        temp0_160[0] = (zmm1_1 ^ 0x80000000)[0]
        temp0_25[0].q = 0
        float temp0_161[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xc6)
        temp0_161[0] = (zmm2 ^ 0x80000000)[0]
        temp0_25[2] = 0
        float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
        var_2d8.o = temp0_162
        float temp0_163[0x4] = _mm_shuffle_ps(temp0_162, temp0_162, 0xff)
        float temp0_164[0x4] = _mm_shuffle_ps(temp0_162, temp0_162, 0xaa)
        float temp0_165[0x4] = _mm_shuffle_ps(temp0_162, temp0_162, 0)
        float temp0_166[0x4] = _mm_mul_ps(temp0_164, zmm10)
        float temp0_167[0x4] = _mm_mul_ps(temp0_165, zmm14)
        float temp0_168[0x4] = _mm_mul_ps(temp0_163, zmm12)
        float temp0_170[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_162, temp0_162, 0x55), zmm15)
        float temp0_171[0x4] = _mm_add_ps(temp0_168, temp0_166)
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.s(rbx_1)
        float temp0_173[0x4] = _mm_add_ps(temp0_171, _mm_add_ps(temp0_167, temp0_170))
        zmm1_1 = 0x41000000
        zmm1_1[0] = 8f / zmm0_1[0]
        float zmm0_4[0x4]
        float zmm6_4[0x4]
        int512_t zmm7_3
        float zmm8_3[0x4]
        zmm0_4, zmm6_4, zmm7_3, zmm8_3 = sub_140a454f0(temp0_173, zmm1_1)
        zmm7_3.o = zmm0_4
        zmm6_4[0] = zmm6_4[0] f/ float.s(rdi)
        float zmm0_5
        float zmm6_5
        float zmm7_4[0x4]
        float zmm8_4[0x4]
        zmm0_5, r8, zmm6_5, zmm7_4, zmm8_4 =
            sub_140a454f0(_mm_shuffle_ps(zmm8_3, zmm8_3, 0x55), zmm6_4)
        int32_t var_2cc_4 = 0x3f800000
        float zmm1_5 = zmm8_4[0] - zmm7_4[0]
        float temp0_175[0x4] = _mm_shuffle_ps(zmm8_4, zmm8_4, 0xaa)
        zmm7_4 = var_2d8.o
        temp0_25[0].q = 0
        temp0_25[2] = 0
        zmm7_4[0] = zmm1_5
        float temp0_176[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 0xe1)
        temp0_176[0] = zmm6_5 - zmm0_5
        float temp0_177[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0xc6)
        temp0_177[0] = temp0_175[0]
        var_2d8.o = _mm_shuffle_ps(temp0_177, temp0_177, 0xc9)
        float (* rax_19)[0x4]
        rax_19, zmm7, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_1408041d0(&var_138, &var_178)
        float temp0_179[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
        float temp0_180[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
        float temp0_181[0x4] = __mulps_xmmps_memps(temp0_179, rax_19[3])
        float temp0_182[0x4] = __mulps_xmmps_memps(temp0_180, rax_19[2])
        float temp0_184[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm7, zmm7, 0x55), rax_19[1])
        float temp0_185[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_189[0x4] = _mm_add_ps(_mm_add_ps(temp0_181, temp0_182), 
            _mm_add_ps(temp0_184, __mulps_xmmps_memps(temp0_185, *rax_19)))
        float temp0_190[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0x55)
        zmm2 = _mm_shuffle_ps(temp0_189, temp0_189, 0xaa) ^ zmm13
        float temp0_192[0x4] = _mm_unpacklo_ps(temp0_189 ^ zmm13, (temp0_190 ^ zmm13)[0].q)
        var_2d0 = zmm2[0]
        *(arg1 + 0x54) = temp0_192.q
        *(arg1 + 0x5c) = var_2d0
        rax_18 = *(arg1 + 0x570)
    
    int32_t r15_1 = *(arg1 + 0x534)
    
    if (r15_1 s< 0 || (rax_18.b & 0x10) == 0)
        zmm0_1 = arg4[1].d
        float temp0_193[0x4] = _mm_unpacklo_ps(*arg4 ^ zmm13, (*(arg4 + 4) ^ zmm13)[0].q)
        float var_2d0_4 = (zmm0_1 ^ zmm13)[0]
        zmm0_1 = arg4[0x10].d
        float var_2d0_5 = var_2d0_4
        zmm1_1 = var_2d8.o
        zmm1_1[0].q = temp0_193.q
        float temp0_194[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x93)
        temp0_194[0] = zmm0_1[0]
        float temp0_195[0x4] = _mm_shuffle_ps(temp0_194, temp0_194, 0x39)
        var_2d8.o = temp0_195
        *(arg1 + 0x3b4) = temp0_195
    else
        int64_t* rbx_2 = *(arg2 + 0x20)
        
        if (test_bit(rax_18, 9))
            r15_1 = -1
        
        float (* rax_22)[0x4]
        rax_22, r8 = (*(*rbx_2 + 0xc0))(rbx_2, &var_258, arg3, zx.q(r15_1), sub_14122cc00(arg2), 0, 
            var_2d8, var_2d0, var_2c8_1)
        *(arg1 + 0x3b4) = *rax_22
    
    zmm1_1 = *(arg1 + 0x164)
    zmm4 = arg4[0x13].d
    zmm2 = zmm1_1
    zmm0_1 = arg4[0x14].d
    zmm6 = *(arg4 + 0x9c)
    zmm1_1[0] = zmm1_1[0] - zmm0_1[0]
    zmm2[0] = zmm2[0] * zmm4[0]
    float temp0_196[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
    zmm2[0] = zmm2[0] + zmm6[0]
    float temp0_197[0x4] = _mm_shuffle_ps(0, 0, 0xd2)
    var_138[0].q = 0x3f800000
    var_138[2] = 0
    zmm8 = var_138
    zmm2[0] = zmm2[0] * zmm0_1[0]
    var_108_2[0].q = 0
    zmm11[0] = zmm11[0] / zmm1_1[0]
    zmm2[0] = zmm2[0] / zmm1_1[0]
    zmm1_1 = arg4[0x12].d
    zmm2[0] = zmm2[0] * zmm11[0]
    temp0_197[0] = zmm2[0]
    zmm0_1 = *(arg4 + 0x94)
    float temp0_198[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
    float temp0_199[0x4] = _mm_shuffle_ps(0, 0, 0x93)
    temp0_199[0] = zmm0_1[0]
    float temp0_200[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x93)
    temp0_200[0] = zmm1_1[0]
    float temp0_201[0x4] = _mm_shuffle_ps(temp0_199, temp0_199, 0x39)
    float temp0_202[0x4] = _mm_mul_ps(temp0_196, temp0_201)
    float temp0_203[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
    float temp0_204[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
    float temp0_205[0x4] = _mm_shuffle_ps(temp0_200, temp0_200, 0x39)
    float temp0_206[0x4] = _mm_mul_ps(temp0_203, temp0_205)
    float temp0_207[0x4] = _mm_mul_ps(temp0_198, temp0_201)
    float temp0_208[0x4] = _mm_shuffle_ps(temp0_197, temp0_197, 0x27)
    float temp0_209[0x4] = _mm_add_ps(temp0_202, temp0_206)
    temp0_208[0] = zmm4[0]
    var_138 = temp0_205
    float temp0_210[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xff)
    float temp0_211[0x4] = _mm_shuffle_ps(var_108_2, var_108_2, 0xd2)
    float temp0_212[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0x39)
    temp0_211[0] = zmm2[0]
    float temp0_213[0x4] = _mm_mul_ps(temp0_204, temp0_212)
    float temp0_214[0x4] = _mm_shuffle_ps(temp0_211, temp0_211, 0x27)
    temp0_214[0] = zmm6[0]
    float temp0_215[0x4] = _mm_shuffle_ps(temp0_214, temp0_214, 0x39)
    float temp0_216[0x4] = _mm_add_ps(temp0_209, temp0_213)
    float temp0_217[0x4] = _mm_mul_ps(temp0_210, temp0_215)
    float temp0_219[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xaa), temp0_212)
    float temp0_220[0x4] = _mm_add_ps(temp0_216, temp0_217)
    float temp0_222[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_205)
    var_1f8 = temp0_220
    float temp0_223[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
    float temp0_224[0x4] = _mm_add_ps(temp0_207, temp0_222)
    float temp0_225[0x4] = _mm_mul_ps(temp0_223, temp0_201)
    float temp0_227[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xff), temp0_215)
    float var_1e8_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_224, temp0_219), temp0_227)
    rdx_8 = &var_1f8
    float temp0_231[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_205)
    float temp0_233[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xaa), temp0_212)
    float temp0_234[0x4] = _mm_add_ps(temp0_225, temp0_231)
    float temp0_236[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x55), temp0_201)
    float temp0_238[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xff), temp0_215)
    float temp0_239[0x4] = _mm_add_ps(temp0_234, temp0_233)
    float temp0_241[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xaa), temp0_212)
    float var_1d8_1[0x4] = _mm_add_ps(temp0_239, temp0_238)
    float temp0_245[0x4] =
        _mm_add_ps(temp0_236, _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), temp0_205))
    float temp0_247[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xff), temp0_215)
    float var_1c8_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_245, temp0_241), temp0_247)
else
    if (data_1439b6fd8 != 0)
        zmm1_1 = *(arg1 + 0x58) ^ 0x80000000
        int32_t var_2cc_1 = 0x3f800000
        zmm2 = *(arg1 + 0x5c) ^ 0x80000000
        zmm3 = var_2d8.o
        zmm3[0] = (*(arg1 + 0x54) ^ 0x80000000)[0]
        int64_t var_298_1 = 0
        float temp0_122[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        temp0_122[0] = zmm1_1[0]
        int32_t var_290_1 = 0
        float temp0_123[0x4] = _mm_shuffle_ps(temp0_122, temp0_122, 0xc6)
        temp0_123[0] = zmm2[0]
        float temp0_124[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0xc9)
        var_2d8.o = temp0_124
        float temp0_125[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0xff)
        float temp0_126[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0xaa)
        float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0x55), zmm15)
        float temp0_129[0x4] = _mm_mul_ps(temp0_126, zmm10)
        float temp0_131[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0), zmm14)
        float temp0_132[0x4] = _mm_mul_ps(temp0_125, zmm12)
        float temp0_133[0x4] = _mm_add_ps(temp0_128, temp0_131)
        float temp0_134[0x4] = _mm_add_ps(temp0_132, temp0_129)
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.s(rbx_1)
        float temp0_135[0x4] = _mm_add_ps(temp0_134, temp0_133)
        zmm1_1 = zx.o(0)
        zmm1_1[0] = float.s(data_1439b6fdc)
        zmm1_1[0] = zmm1_1[0] + zmm1_1[0]
        zmm1_1[0] = zmm1_1[0] / zmm0_1[0]
        float zmm0_2[0x4]
        int512_t zmm6_1
        float zmm8_1[0x4]
        zmm0_2, zmm6_1, zmm8_1 = sub_140a454f0(temp0_135, zmm1_1)
        float zmm1_2[0x4] = zx.o(0)
        zmm1_2[0] = float.s(data_1439b6fdc)
        zmm1_2[0] = zmm1_2[0] + zmm1_2[0]
        zmm6_1.o = zmm0_2
        float temp0_136[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x55)
        zmm1_2[0] = zmm1_2[0] / float.s(rdi)
        float zmm0_3
        float zmm6_2[0x4]
        float zmm7_2
        float zmm8_2[0x4]
        zmm0_3, r8, zmm6_2, zmm7_2, zmm8_2 = sub_140a454f0(temp0_136, zmm1_2)
        int32_t var_2cc_2 = 0x3f800000
        float zmm1_3 = zmm8_2[0] - zmm6_2[0]
        float temp0_137[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 0xaa)
        zmm6_2 = var_2d8.o
        var_298 = 0
        int32_t var_290_2 = 0
        zmm6_2[0] = zmm1_3
        float temp0_138[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xe1)
        temp0_138[0] = zmm7_2 - zmm0_3
        float temp0_139[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xc6)
        temp0_139[0] = temp0_137[0]
        var_2d8.o = _mm_shuffle_ps(temp0_139, temp0_139, 0xc9)
        float (* rax_15)[0x4]
        float zmm6_3[0x4]
        rax_15, zmm6_3, zmm13 = sub_1408041d0(&var_138, &var_1f8)
        float temp0_141[0x4] = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xff)
        float temp0_142[0x4] = _mm_shuffle_ps(zmm6_3, zmm6_3, 0x55)
        float temp0_143[0x4] = __mulps_xmmps_memps(temp0_141, rax_15[3])
        float temp0_144[0x4] = __mulps_xmmps_memps(temp0_142, rax_15[1])
        float temp0_146[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6_3, zmm6_3, 0xaa), rax_15[2])
        float temp0_148[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6_3, zmm6_3, 0), *rax_15)
        float temp0_151[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_143, temp0_146), _mm_add_ps(temp0_144, temp0_148))
        float temp0_152[0x4] = _mm_shuffle_ps(temp0_151, temp0_151, 0x55)
        zmm2 = _mm_shuffle_ps(temp0_151, temp0_151, 0xaa) ^ zmm13
        float temp0_154[0x4] = _mm_unpacklo_ps(temp0_151 ^ zmm13, (temp0_152 ^ zmm13)[0].q)
        float var_2d0_1 = zmm2[0]
        *(arg1 + 0x54) = temp0_154.q
        *(arg1 + 0x5c) = var_2d0_1
    
    rdx_8 = arg1 + 0xa0
    zmm0_1 = *(arg1 + 0x5c)
    float temp0_155[0x4] = _mm_unpacklo_ps(*(arg1 + 0x54) ^ zmm13, (*(arg1 + 0x58) ^ zmm13)[0].q)
    float var_2d0_2 = (zmm0_1 ^ zmm13)[0]
    zmm0_1 = arg4[0x10].d
    float var_2d0_3 = var_2d0_2
    zmm1_1 = var_2d8.o
    zmm1_1[0].q = temp0_155.q
    float temp0_156[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x93)
    temp0_156[0] = zmm0_1[0]
    float temp0_157[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0x39)
    var_2d8.o = temp0_157
    *(arg1 + 0x3b4) = temp0_157
r8.b = 1
float zmm11_1[0x4]
float zmm12_1[0x4]
float zmm14_1[0x4]
float zmm15_1[0x4]
zmm11_1, zmm12_1, zmm14_1, zmm15_1 = sub_141f8c8a0(arg1 + 0x170, rdx_8, r8.b)
float zmm6_6[0x4] = *(arg1 + 0x168)
float zmm1_6[0x4] = *(arg1 + 0x164)
zmm6_6[0] = zmm6_6[0] f+ *(arg4 + 0xa4)
int32_t rax_24 = arg4[0x14].d
float temp0_250[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
*(arg1 + 0x3b0) = rax_24
float temp0_251[0x4] = __minss_xmmss_memss(zmm6_6[0], 0x49800000)
float zmm3_1[0x4] = arg4[0x13].d
float zmm5_1[0x4] = *(arg4 + 0x9c)
zmm3_1[0] = zmm3_1[0] * zmm1_6[0]
zmm1_6[0] = zmm1_6[0] - zmm6_6[0]
float var_2c8_3 = temp0_251[0]
zmm3_1[0] = zmm3_1[0] + zmm5_1[0]
zmm11_1[0] = zmm11_1[0] / zmm1_6[0]
var_138[0].q = 0x3f800000
var_138[2] = 0
float zmm9_1[0x4] = var_138
zmm3_1[0] = zmm3_1[0] * zmm6_6[0]
float temp0_252[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0)
zmm3_1[0] = zmm3_1[0] * zmm11_1[0]
float zmm0_6[0x4] = arg4[0x12].d
zmm3_1[0] = zmm3_1[0] / zmm1_6[0]
zmm1_6 = *(arg4 + 0x94)
float temp0_253[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
float temp0_254[0x4] = _mm_shuffle_ps(0, 0, 0x93)
temp0_254[0] = zmm1_6[0]
float temp0_255[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x93)
temp0_255[0] = zmm0_6[0]
float temp0_256[0x4] = _mm_shuffle_ps(temp0_254, temp0_254, 0x39)
float temp0_257[0x4] = _mm_shuffle_ps(temp0_255, temp0_255, 0x39)
float temp0_258[0x4] = _mm_mul_ps(temp0_256, temp0_250)
float temp0_259[0x4] = _mm_mul_ps(temp0_257, temp0_252)
float temp0_260[0x4] = _mm_shuffle_ps(0, 0, 0xd2)
float temp0_261[0x4] = _mm_shuffle_ps(0, 0, 0xd2)
temp0_260[0] = zmm3_1[0]
float temp0_262[0x4] = _mm_add_ps(temp0_259, temp0_258)
float temp0_263[0x4] = _mm_shuffle_ps(temp0_260, temp0_260, 0x27)
temp0_261[0] = zmm3_1[0]
float temp0_264[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xff)
float temp0_265[0x4] = _mm_shuffle_ps(temp0_261, temp0_261, 0x27)
temp0_263[0] = zmm3_1[0]
float temp0_266[0x4] = _mm_shuffle_ps(temp0_263, temp0_263, 0x39)
temp0_265[0] = zmm5_1[0]
float temp0_267[0x4] = _mm_shuffle_ps(temp0_265, temp0_265, 0x39)
float temp0_268[0x4] = _mm_mul_ps(temp0_264, temp0_267)
float temp0_269[0x4] = _mm_mul_ps(temp0_253, temp0_266)
var_2d8.o = temp0_253
var_298.o = temp0_264
var_138 = temp0_257
float temp0_271[0x4] = _mm_add_ps(_mm_add_ps(temp0_262, temp0_269), temp0_268)
float temp0_272[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
zmm5_1 = var_2a8.o
float temp0_273[0x4] = _mm_mul_ps(temp0_272, temp0_256)
var_138[0].q = 0x3f800000
float temp0_274[0x4] = _mm_shuffle_ps(var_288_1, var_288_1, 0)
float temp0_275[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
float temp0_276[0x4] = _mm_shuffle_ps(var_288_1, var_288_1, 0x55)
float temp0_277[0x4] = _mm_shuffle_ps(var_288_1, var_288_1, 0xaa)
float temp0_278[0x4] = _mm_shuffle_ps(var_288_1, var_288_1, 0xff)
float temp0_279[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0)
float temp0_280[0x4] = _mm_mul_ps(temp0_275, temp0_266)
var_138[2] = 0
*(arg1 + 0xa0) = temp0_271
temp0_256[0] = 0
var_258 = temp0_274
float temp0_281[0x4] = _mm_mul_ps(temp0_279, temp0_257)
temp0_256[1].q = 0x3f800000
float temp0_282[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xff)
float temp0_283[0x4] = _mm_mul_ps(temp0_274, temp0_257)
temp0_266[0].q = 0
float temp0_284[0x4] = _mm_add_ps(temp0_281, temp0_273)
float temp0_285[0x4] = _mm_shuffle_ps(zmm12_1, zmm5_1, 0x55)
float temp0_286[0x4] = _mm_mul_ps(temp0_282, temp0_267)
temp0_267[0].q = 0
float temp0_287[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
float temp0_288[0x4] = _mm_add_ps(temp0_284, temp0_280)
float temp0_289[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
float temp0_290[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
float temp0_291[0x4] = _mm_mul_ps(temp0_277, temp0_266)
var_2a8.o = temp0_290
float temp0_292[0x4] = _mm_add_ps(temp0_288, temp0_286)
float temp0_293[0x4] = _mm_mul_ps(temp0_276, temp0_256)
*(arg1 + 0xb0) = temp0_292
float temp0_294[0x4] = _mm_add_ps(temp0_283, temp0_293)
float temp0_295[0x4] = _mm_mul_ps(temp0_278, temp0_267)
float temp0_296[0x4] = _mm_mul_ps(temp0_287, temp0_257)
float temp0_297[0x4] = _mm_add_ps(temp0_294, temp0_291)
float temp0_298[0x4] = _mm_mul_ps(temp0_289, temp0_266)
float temp0_299[0x4] = _mm_add_ps(temp0_297, temp0_295)
float temp0_300[0x4] = _mm_mul_ps(temp0_285, temp0_256)
float zmm8_5[0x4] = *(arg1 + 0x168)
*(arg1 + 0xc0) = temp0_299
float temp0_301[0x4] = _mm_add_ps(temp0_296, temp0_300)
float temp0_302[0x4] = _mm_mul_ps(temp0_290, temp0_267)
zmm6_6 = var_138
float temp0_303[0x4] = _mm_shuffle_ps(zmm6_6, zmm6_6, 0x93)
zmm1_6 = 0xbf800000
zmm0_6 = var_2c8_3
*(arg1 + 0xd0) = _mm_add_ps(_mm_add_ps(temp0_301, temp0_298), temp0_302)
zmm3_1 = arg4[0x13].d
float zmm4_1[0x4] = *(arg4 + 0x9c)
zmm3_1[0] = zmm3_1[0] * zmm0_6[0]
zmm0_6[0] = zmm0_6[0] - zmm8_5[0]
zmm3_1[0] = zmm3_1[0] + zmm4_1[0]
zmm1_6[0] = -1f / zmm0_6[0]
zmm8_5[0] = zmm8_5[0] * zmm3_1[0]
zmm3_1[0] = zmm3_1[0] / zmm0_6[0]
zmm0_6 = arg4[0x12].d
zmm8_5[0] = zmm8_5[0] * zmm1_6[0]
zmm1_6 = *(arg4 + 0x94)
temp0_303[0] = zmm0_6[0]
float temp0_306[0x4] = _mm_shuffle_ps(temp0_256, temp0_256, 0x93)
temp0_306[0] = zmm1_6[0]
float temp0_307[0x4] = _mm_shuffle_ps(temp0_303, temp0_303, 0x39)
float temp0_308[0x4] = _mm_shuffle_ps(temp0_266, temp0_266, 0xd2)
temp0_308[0] = zmm3_1[0]
float temp0_309[0x4] = _mm_mul_ps(temp0_287, temp0_307)
float temp0_310[0x4] = __mulps_xmmps_memps(temp0_307, temp0_252)
float temp0_311[0x4] = _mm_shuffle_ps(temp0_308, temp0_308, 0x27)
temp0_311[0] = zmm3_1[0]
float temp0_312[0x4] = _mm_shuffle_ps(temp0_306, temp0_306, 0x39)
float temp0_313[0x4] = __mulps_xmmps_memps(temp0_312, temp0_250)
temp0_250[0].q = 0
float temp0_314[0x4] = _mm_mul_ps(temp0_279, temp0_307)
temp0_250[2] = 0
float temp0_315[0x4] = _mm_shuffle_ps(temp0_311, temp0_311, 0x39)
float temp0_316[0x4] = _mm_add_ps(temp0_310, temp0_313)
float temp0_317[0x4] = _mm_mul_ps(temp0_277, temp0_315)
float temp0_318[0x4] = _mm_mul_ps(temp0_289, temp0_315)
float temp0_319[0x4] = __mulps_xmmps_memps(temp0_315, var_2d8.o)
int32_t var_2cc_5 = 0
float temp0_320[0x4] = _mm_mul_ps(temp0_276, temp0_312)
float temp0_321[0x4] = _mm_mul_ps(temp0_285, temp0_312)
float temp0_322[0x4] = _mm_add_ps(temp0_316, temp0_319)
float temp0_323[0x4] = _mm_shuffle_ps(temp0_267, temp0_267, 0xd2)
temp0_323[0] = zmm8_5[0]
float temp0_324[0x4] = _mm_shuffle_ps(temp0_323, temp0_323, 0x27)
float temp0_325[0x4] = _mm_add_ps(temp0_309, temp0_321)
temp0_324[0] = zmm4_1[0]
float temp0_326[0x4] = _mm_shuffle_ps(temp0_324, temp0_324, 0x39)
float temp0_327[0x4] = _mm_mul_ps(var_298.o, temp0_326)
float temp0_328[0x4] = _mm_mul_ps(temp0_278, temp0_326)
float temp0_329[0x4] = _mm_add_ps(temp0_325, temp0_318)
float temp0_330[0x4] = _mm_add_ps(temp0_322, temp0_327)
float temp0_331[0x4] = _mm_mul_ps(temp0_272, temp0_312)
*(arg1 + 0xe0) = temp0_330
float temp0_332[0x4] = _mm_add_ps(temp0_314, temp0_331)
float temp0_333[0x4] = _mm_mul_ps(temp0_275, temp0_315)
float temp0_334[0x4] = _mm_mul_ps(var_2a8.o, temp0_326)
float temp0_335[0x4] = _mm_add_ps(temp0_332, temp0_333)
float temp0_336[0x4] = _mm_mul_ps(temp0_282, temp0_326)
float temp0_337[0x4] = _mm_add_ps(temp0_329, temp0_334)
float temp0_338[0x4] = _mm_add_ps(temp0_335, temp0_336)
float temp0_339[0x4] = _mm_mul_ps(var_258, temp0_307)
zmm6_6 = var_2d8.o
*(arg1 + 0xf0) = temp0_338
*(arg1 + 0x100) = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_339, temp0_320), temp0_317), temp0_328)
*(arg1 + 0x110) = temp0_337
zmm1_6 = arg4[0xc].d
zmm6_6[0] = (*(arg4 + 0x5c))[0]
float zmm2_3[0x4] = *(arg4 + 0x64)
float temp0_343[0x4] = _mm_shuffle_ps(zmm6_6, zmm6_6, 0xe1)
temp0_343[0] = zmm1_6[0]
float temp0_344[0x4] = _mm_shuffle_ps(temp0_343, temp0_343, 0xc6)
temp0_344[0] = zmm2_3[0]
var_2d8.o = _mm_shuffle_ps(temp0_344, temp0_344, 0xc9)
float (* rax_25)[0x4]
float zmm6_7[0x4]
rax_25, zmm6_7 = sub_1408041d0(&var_1b8, &var_178)
float temp0_346[0x4] = _mm_shuffle_ps(zmm6_7, zmm6_7, 0xff)
bool cond:1 = (*(arg1 + 0x570) & 0x20) == 0
float temp0_347[0x4] = __mulps_xmmps_memps(temp0_346, rax_25[3])
int32_t var_2cc_6 = 0x3f800000
float zmm5_2[0x4] = arg4[0x10].d
float temp0_349[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6_7, zmm6_7, 0x55), rax_25[1])
int32_t var_250_1 = 0
float temp0_351[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6_7, zmm6_7, 0xaa), rax_25[2])
float temp0_353[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm6_7, zmm6_7, 0), *rax_25)
float temp0_356[0x4] =
    _mm_add_ps(_mm_add_ps(temp0_347, temp0_351), _mm_add_ps(temp0_349, temp0_353))
zmm5_2[0] = zmm5_2[0] * temp0_356[0]
float temp0_357[0x4] = _mm_shuffle_ps(temp0_356, temp0_356, 0x55)
zmm5_2[0] = zmm5_2[0] * temp0_357[0]
zmm5_2[0] = zmm5_2[0] f+ arg4[0xd].d
float temp0_358[0x4] = _mm_shuffle_ps(temp0_356, temp0_356, 0xaa)
zmm5_2[0] = zmm5_2[0] f+ *(arg4 + 0x6c)
zmm5_2[0] = zmm5_2[0] * temp0_358[0]
float zmm4_2[0x4] = var_2d8.o
zmm4_2[0] = zmm5_2[0]
zmm5_2[0] = zmm5_2[0] f+ arg4[0xe].d
float temp0_359[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
temp0_359[0] = zmm5_2[0]
float temp0_360[0x4] = _mm_shuffle_ps(temp0_359, temp0_359, 0xc6)
temp0_360[0] = zmm5_2[0]
float temp0_361[0x4] = _mm_shuffle_ps(temp0_360, temp0_360, 0xc9)
float temp0_363[0x4] =
    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_361, temp0_361, 0xff), *(arg1 + 0xd0))
float temp0_365[0x4] =
    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_361, temp0_361, 0x55), *(arg1 + 0xb0))
float temp0_367[0x4] =
    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_361, temp0_361, 0xaa), *(arg1 + 0xc0))
float temp0_369[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_361, temp0_361, 0), *(arg1 + 0xa0))
float temp0_372[0x4] =
    _mm_add_ps(_mm_add_ps(temp0_363, temp0_367), _mm_add_ps(temp0_365, temp0_369))
float zmm2_4[0x4] = _mm_shuffle_ps(temp0_372, temp0_372, 0xaa)

if (not(cond:1))
    zmm2_4 = zmm5_2

float zmm0_7[0x4] = 0x3f800000
float zmm7_6[0x4] = data_142d4cc30
zmm6_7 = data_142d4cc00
float zmm8_6[0x4] = data_142d4cc20
float zmm9_2[0x4] = data_142d3f660
zmm0_7[0] = 1f / zmm2_4[0]
*(arg1 + 0x160) = zmm0_7[0]
zmm2_4 = *(arg4 + 0x10)
float temp0_374[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
float temp0_375[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
float temp0_376[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
float temp0_377[0x4] = _mm_mul_ps(temp0_374, zmm7_6)
float temp0_378[0x4] = _mm_mul_ps(temp0_375, zmm8_6)
float temp0_380[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm9_2)
float temp0_384[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_376, zmm6_7), temp0_377), temp0_378), temp0_380)
zmm2_4 = *(arg4 + 0x20)
float temp0_385[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
float temp0_386[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
float temp0_387[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
float temp0_388[0x4] = _mm_mul_ps(temp0_385, zmm7_6)
float temp0_389[0x4] = _mm_mul_ps(temp0_386, zmm8_6)
float temp0_391[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm9_2)
float temp0_395[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_387, zmm6_7), temp0_388), temp0_389), temp0_391)
zmm2_4 = *(arg4 + 0x30)
float temp0_396[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
float temp0_397[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
float temp0_398[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
float temp0_399[0x4] = _mm_mul_ps(temp0_397, zmm7_6)
float temp0_400[0x4] = _mm_mul_ps(temp0_398, zmm8_6)
float temp0_402[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm9_2)
float temp0_406[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_396, zmm6_7), temp0_399), temp0_400), temp0_402)
zmm2_4 = *(arg4 + 0x40)
float temp0_407[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
float temp0_408[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
float temp0_409[0x4] = _mm_mul_ps(temp0_407, zmm6_7)
float temp0_410[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
*(arg1 + 0x60) = temp0_384
*(arg1 + 0x70) = temp0_395
float temp0_411[0x4] = _mm_mul_ps(temp0_408, zmm7_6)
float temp0_412[0x4] = _mm_mul_ps(temp0_410, zmm8_6)
float temp0_413[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xff)
float temp0_414[0x4] = _mm_add_ps(temp0_409, temp0_411)
float temp0_415[0x4] = _mm_mul_ps(temp0_413, zmm9_2)
*(arg1 + 0x80) = temp0_406
*(arg1 + 0x90) = _mm_add_ps(_mm_add_ps(temp0_414, temp0_412), temp0_415)
float (* rax_26)[0x4] = sub_1408041d0(arg1 + 0xe0, &var_178)
*(arg1 + 0x120) = *rax_26
*(arg1 + 0x130) = rax_26[1]
*(arg1 + 0x140) = rax_26[2]
*(arg1 + 0x150) = rax_26[3]
sub_141f8c8a0(arg1 + 0x290, arg1 + 0xe0, 1)
void* result = sub_1414b3a70(arg1)
__security_check_cookie(rax_1 ^ &var_308)
return result
