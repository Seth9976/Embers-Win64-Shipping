// 函数: sub_141aad980
// 地址: 0x141aad980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int32_t rcx = *(arg1 + 0xd0)
void* rdx = arg2[3]
void* var_2d8 = rdx
float rbx

if (rcx s>= 0)
    rbx = *(arg1 + 0xd4)
else
    int32_t rcx_1 = rcx * 2
    
    if ((rcx_1 & 0xfffffffe) == 0xfffffffe)
        rbx = -nanf
    else
        rbx = *(*(rdx + 0x80) + (sx.q(rcx_1) s>> 1 << 2))

bool cond:0 = *(arg1 + 0x1d0) - 2 u<= 1
float var_1d8[0x4]
sub_141abb9e0(&arg2[1], &var_1d8, rbx)
void var_118
sub_141abb9e0(&arg2[1], &var_118, *(arg1 + 0x15c))
void var_148
sub_141abb9e0(&arg2[1], &var_148, *(arg1 + 0xec))
int64_t rdx_4 = sx.q(*(arg1 + 0x15c))
char* r8_3 = arg2[4]

if (r8_3[rdx_4] == 0)
    sub_141a98300(&arg2[1], rdx_4.d)
    r8_3 = arg2[4]

int64_t rcx_9 = arg2[1]
int64_t rdx_5 = sx.q(*(arg1 + 0xec))
int64_t rax_8 = rdx_4 * 6
float var_268[0x4] = *(rcx_9 + (rax_8 << 3))
int128_t zmm1 = *(rcx_9 + (rax_8 << 3) + 0x10)
float var_248[0x4] = *(rcx_9 + (rax_8 << 3) + 0x20)

if (r8_3[rdx_5] == 0)
    sub_141a98300(&arg2[1], rdx_5.d)
    rcx_9 = arg2[1]
    r8_3 = arg2[4]

int64_t r13_2 = sx.q(rbx)
int64_t rax_11 = rdx_5 * 6
float var_208[0x4] = *(rcx_9 + (rax_11 << 3))
int128_t zmm8 = *(rcx_9 + (rax_11 << 3) + 0x10)
float var_1e8[0x4] = *(rcx_9 + (rax_11 << 3) + 0x20)
int512_t zmm6

if (r8_3[r13_2] == 0)
    int512_t zmm8_1
    zmm6, zmm8_1 = sub_141a98300(&arg2[1], rbx)
    rcx_9 = arg2[1]
    zmm8_1.o = zmm8

zmm6.o = zmm1
int128_t* rdx_8 = *arg2 + 0x10
int64_t rax_14 = r13_2 * 6
float var_238[0x4] = *(rcx_9 + (rax_14 << 3))
int128_t var_228 = *(rcx_9 + (rax_14 << 3) + 0x10)
float var_218[0x4] = *(rcx_9 + (rax_14 << 3) + 0x20)
float var_1a8[0x4]
sub_141abce10(&var_1a8, rdx_8, &arg2[1], arg1 + 0xf0, zx.d(*(arg1 + 0x1d0)), arg1 + 0xe0)
void var_178
float zmm6_1[0x4]
float zmm7_1[0x4]
float zmm8_2[0x4]
zmm6_1, zmm7_1, zmm8_2 = sub_141abce10(&var_178, *arg2 + 0x10, &arg2[1], arg1 + 0x160, 
    zx.d(*(arg1 + 0x1d1)), arg1 + 0x150)
char rax_17 = *(arg1 + 0x1d2)
float var_168[0x4]
float var_2bc = _mm_shuffle_ps(var_168, var_168, 0x55)[0]
float var_198[0x4]
float temp0_1[0x4] = _mm_shuffle_ps(var_198, var_198, 0x55)
float var_2c0 = var_168[0]
float var_2b8 = _mm_shuffle_ps(var_168, var_168, 0xaa)[0]
float var_2cc = temp0_1[0]
float temp0_4[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm8_2, zmm8_2, 0x55), 0)
float var_2d0 = var_198[0]
float var_2c8 = _mm_shuffle_ps(var_198, var_198, 0xaa)[0]
float temp0_8[0x4] = _mm_unpacklo_ps(
    _mm_unpacklo_ps(zmm8_2, _mm_shuffle_ps(zmm8_2, zmm8_2, 0xaa)[0].q), temp0_4[0].q)
float temp0_10[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0x55), 0)
float temp0_13[0x4] = _mm_unpacklo_ps(
    _mm_unpacklo_ps(zmm6_1, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)[0].q), temp0_10[0].q)
float temp0_15[0x4] = _mm_unpacklo_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0x55), 0)
float var_228_1[0x4] = _mm_unpacklo_ps(
    _mm_unpacklo_ps(zmm7_1, _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)[0].q), temp0_15[0].q)
float (* var_310_1)[0x4]
var_310_1.b = rax_17 & 1
uint32_t var_318_1
var_318_1.q = &var_2d0
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm14[0x4]
float zmm15[0x4]
zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_141a83100(&var_208, &var_268, &var_238, 
    &var_2c0, var_318_1, var_310_1.b, (*(arg1 + 0xd8))[0], (*(arg1 + 0xdc))[0])
int32_t var_2f0
int64_t var_2e8
float var_2a8

if ((*(arg1 + 0x1d2) & 8) == 0)
    sub_141ea4020(var_2d8, &var_2f0, arg1 + 0xec)
    
    if (*(arg1 + 0x1cc) == 0)
        int32_t rax_18 = *(arg1 + 0x1c8)
        var_2e8 = *(arg1 + 0x1c0)
        int32_t var_2e0_2 = rax_18
    else
        float zmm5_1[0x4] = data_143dbb0c0
        float temp0_21[0x4] = _mm_unpacklo_ps(
            _mm_unpacklo_ps(*(arg1 + 0x1c0), (*(arg1 + 0x1c8))[0].q), 
            _mm_unpacklo_ps(*(arg1 + 0x1c4), 0)[0].q)
        float temp0_22[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_23[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xc9), temp0_22)
        float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xd2), temp0_23)
        float temp0_28[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_29[0x4] = _mm_sub_ps(temp0_27, temp0_25)
        float temp0_30[0x4] = _mm_add_ps(temp0_29, temp0_29)
        float temp0_31[0x4] = _mm_mul_ps(temp0_28, temp0_30)
        float temp0_32[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xd2)
        float temp0_33[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xc9)
        float temp0_34[0x4] = _mm_mul_ps(temp0_32, temp0_23)
        float temp0_35[0x4] = _mm_mul_ps(temp0_33, temp0_22)
        float temp0_36[0x4] = _mm_add_ps(temp0_31, temp0_21)
        float temp0_38[0x4] = _mm_add_ps(_mm_sub_ps(temp0_34, temp0_35), temp0_36)
        var_2e8.d = temp0_38[0]
        float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x55)
        float var_2e0_1 = _mm_shuffle_ps(temp0_38, temp0_38, 0xaa)[0]
        var_2e8:4.d = temp0_39[0]
    
    int64_t rdx_13 = sx.q(var_2f0)
    
    if (rdx_13.d != 0xffffffff)
        if (*(rdx_13 + arg2[4]) == 0)
            sub_141a98300(&arg2[1], rdx_13.d)
        
        int64_t rax_20 = arg2[1]
        int64_t rcx_19 = rdx_13 * 6
        var_2a8.o = *(rax_20 + (rcx_19 << 3))
        float var_298_1[0x4] = *(rax_20 + (rcx_19 << 3) + 0x10)
        var_318_1.q = &var_2e8
        float var_288_1[0x4] = *(rax_20 + (rcx_19 << 3) + 0x20)
        sub_141a91a70(&var_2d8, &var_2a8, &var_208, &var_148, var_318_1)
    
    var_318_1.q = &var_2e8
    zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
        sub_141a91a70(&var_2d8, &var_208, &var_268, &var_118, var_318_1)

int64_t r14_1 = sx.q(arg3[1].d)
float zmm6_2[0x4] = var_208
var_2a8 = *(arg1 + 0xec)
int32_t rax_22 = (r14_1 + 1).d
arg3[1].d = rax_22

if (rax_22 s> *(arg3 + 0xc))
    sub_1405c4fe0(arg3)

int64_t rax_23 = *arg3
int64_t rcx_24 = r14_1 << 6
*(rcx_24 + rax_23) = var_2a8.o
*(rcx_24 + rax_23 + 0x10) = zmm6_2
*(rcx_24 + rax_23 + 0x20) = temp0_8
*(rcx_24 + rax_23 + 0x30) = var_1e8
int64_t r14_2 = sx.q(arg3[1].d)
zmm6_2 = var_268
var_2a8 = *(arg1 + 0x15c)
int32_t rax_25 = (r14_2 + 1).d
arg3[1].d = rax_25

if (rax_25 s> *(arg3 + 0xc))
    sub_1405c4fe0(arg3)

int64_t rax_26 = *arg3
int64_t rcx_27 = r14_2 << 6
*(rcx_27 + rax_26) = var_2a8.o
*(rcx_27 + rax_26 + 0x10) = zmm6_2
*(rcx_27 + rax_26 + 0x20) = temp0_13
*(rcx_27 + rax_26 + 0x30) = var_248

if (cond:0 != 0 && (*(arg1 + 0x1d2) & 2) != 0)
    zmm6_2 = var_1a8
    var_238 = zmm6_2
else if ((*(arg1 + 0x1d2) & 4) == 0)
    zmm6_2 = var_238
else
    float var_b8_1[0x4] = zmm13
    float var_c8_1[0x4] = zmm14
    float var_d8_1[0x4] = zmm15
    float var_1b8[0x4]
    float zmm7_2[0x4]
    float var_1c8[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_1b8, var_248), data_143f2b8d0, 1)) == 0)
        float zmm4_1[0x4] = var_268
        float zmm2_1[0x4] = var_1d8
        float temp0_173[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
        float temp0_174[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
        float temp0_176[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), temp0_173)
        float temp0_177[0x4] = _mm_mul_ps(var_1c8, var_248)
        float temp0_178[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
        float temp0_179[0x4] = __mulps_xmmps_memps(temp0_176, data_143f2b850)
        float temp0_180[0x4] = _mm_mul_ps(temp0_178, zmm2_1)
        float temp0_181[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
        zmm13 = _mm_mul_ps(var_1b8, var_248)
        float temp0_183[0x4] = _mm_add_ps(temp0_179, temp0_180)
        float temp0_185[0x4] = _mm_mul_ps(temp0_174, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55))
        float temp0_187[0x4] = _mm_mul_ps(temp0_181, _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa))
        float temp0_188[0x4] = __mulps_xmmps_memps(temp0_185, data_143f2b840)
        float temp0_189[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0xc9)
        float temp0_190[0x4] = __mulps_xmmps_memps(temp0_187, data_143f2b830)
        float temp0_191[0x4] = _mm_add_ps(temp0_183, temp0_188)
        float temp0_192[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0xd2)
        zmm6_2 = _mm_add_ps(temp0_191, temp0_190)
        float temp0_194[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
        float temp0_195[0x4] = _mm_mul_ps(temp0_189, temp0_194)
        float temp0_196[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
        float temp0_198[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_192, temp0_196), temp0_195)
        float temp0_199[0x4] = _mm_add_ps(temp0_198, temp0_198)
        float temp0_200[0x4] = _mm_mul_ps(temp0_178, temp0_199)
        float temp0_202[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_199, temp0_199, 0xd2), temp0_196)
        float temp0_203[0x4] = _mm_shuffle_ps(temp0_199, temp0_199, 0xc9)
        float temp0_204[0x4] = _mm_add_ps(temp0_200, temp0_177)
        zmm7_2 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_202, _mm_mul_ps(temp0_203, temp0_194)), temp0_204), 
            temp0_13)
    else
        float zmm3_1[0x4] = var_268
        float temp0_44[0x4] = _mm_shuffle_ps(var_248, var_248, 0xc9)
        float temp0_45[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
        float temp0_46[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
        _mm_mul_ps(var_1b8, var_248)
        float var_98_1[0x4] = zmm11
        zmm11 = data_143f2b810
        float temp0_49[0x4] = _mm_mul_ps(temp0_46, _mm_shuffle_ps(temp0_45, temp0_45, 0x29))
        float temp0_50[0x4] = _mm_mul_ps(temp0_45, zmm3_1)
        float temp0_51[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x12)
        float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xff), temp0_51)
        float temp0_56[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0x1a), 
            _mm_shuffle_ps(temp0_50, temp0_50, 1))
        float temp0_57[0x4] = _mm_add_ps(temp0_53, temp0_49)
        float temp0_58[0x4] = _mm_sub_ps(temp0_49, temp0_53)
        float temp0_59[0x4] = _mm_sub_ps(zmm11, temp0_56)
        float temp0_60[0x4] = _mm_mul_ps(temp0_57, var_248)
        float temp0_61[0x4] = _mm_mul_ps(temp0_44, temp0_58)
        float zmm1_2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_59, var_248), data_143f2b820)
        float temp0_64[0x4] = _mm_shuffle_ps(temp0_61, zmm1_2, 0x32)
        float temp0_66[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_60, zmm1_2, 0), temp0_64, 0x82)
        float temp0_67[0x4] = _mm_shuffle_ps(temp0_60, zmm1_2, 0x31)
        float temp0_69[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_61, zmm1_2, 0x10), temp0_67, 0x88)
        float temp0_71[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_60, temp0_61, 0x12), zmm1_2, 0xe8)
        zmm1_2 = var_1d8
        zmm11[0].q = temp0_13 u>> 0x40
        float temp0_72[0x4] = _mm_add_ps(zmm1_2, zmm1_2)
        float temp0_73[0x4] = _mm_shuffle_ps(temp0_13, zmm11, 0xc4)
        float temp0_74[0x4] = _mm_shuffle_ps(var_1b8, var_1b8, 0xc9)
        float temp0_75[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
        float temp0_76[0x4] = _mm_mul_ps(temp0_72, zmm1_2)
        float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0x29), temp0_75)
        float temp0_79[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff)
        float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0x12), temp0_79)
        float temp0_84[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x1a), 
            _mm_shuffle_ps(temp0_76, temp0_76, 1))
        float temp0_85[0x4] = _mm_add_ps(temp0_81, temp0_78)
        float temp0_86[0x4] = _mm_sub_ps(temp0_78, temp0_81)
        float temp0_87[0x4] = _mm_sub_ps(zmm11, temp0_84)
        float temp0_88[0x4] = _mm_mul_ps(temp0_85, var_1b8)
        float temp0_89[0x4] = _mm_mul_ps(temp0_74, temp0_86)
        zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_87, var_1b8), data_143f2b820)
        float temp0_94[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_88, zmm1_2, 0), 
            _mm_shuffle_ps(temp0_89, zmm1_2, 0x32), 0x82)
        float temp0_95[0x4] = _mm_shuffle_ps(temp0_88, zmm1_2, 0x31)
        float temp0_96[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0x55)
        float temp0_98[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_89, zmm1_2, 0x10), temp0_95, 0x88)
        float temp0_99[0x4] = _mm_mul_ps(temp0_96, temp0_69)
        float temp0_101[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_88, temp0_89, 0x12), zmm1_2, 0xe8)
        float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xaa), temp0_71)
        zmm11[0].q = var_1c8 u>> 0x40
        float temp0_104[0x4] = _mm_shuffle_ps(var_1c8, zmm11, 0xc4)
        float temp0_105[0x4] = _mm_shuffle_ps(temp0_94, temp0_94, 0)
        float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xff), temp0_73)
        float temp0_109[0x4] = _mm_add_ps(temp0_99, _mm_mul_ps(temp0_105, temp0_66))
        float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0), temp0_66)
        float temp0_112[0x4] = _mm_add_ps(temp0_109, temp0_103)
        float temp0_114[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xaa), temp0_71)
        float temp0_115[0x4] = _mm_add_ps(temp0_112, temp0_107)
        float temp0_117[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0x55), temp0_69)
        float temp0_118[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xff)
        var_2a8.o = temp0_115
        float temp0_119[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0x55)
        float temp0_120[0x4] = _mm_add_ps(temp0_117, temp0_111)
        float temp0_121[0x4] = _mm_mul_ps(temp0_119, temp0_69)
        float temp0_122[0x4] = _mm_mul_ps(temp0_118, temp0_73)
        float temp0_123[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0)
        float temp0_124[0x4] = _mm_add_ps(temp0_120, temp0_114)
        float temp0_125[0x4] = _mm_mul_ps(temp0_123, temp0_66)
        float temp0_127[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0xaa), temp0_71)
        float temp0_128[0x4] = _mm_add_ps(temp0_124, temp0_122)
        float temp0_129[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xff)
        float temp0_130[0x4] = _mm_add_ps(temp0_121, temp0_125)
        float temp0_131[0x4] = _mm_mul_ps(temp0_129, temp0_73)
        float temp0_132[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0)
        int96_t var_298_2 = temp0_128[0].12
        float temp0_133[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0x55)
        float temp0_134[0x4] = _mm_add_ps(temp0_130, temp0_127)
        float temp0_135[0x4] = _mm_mul_ps(temp0_133, temp0_69)
        float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xaa), temp0_71)
        float temp0_138[0x4] = _mm_mul_ps(temp0_132, temp0_66)
        float temp0_139[0x4] = _mm_add_ps(temp0_134, temp0_131)
        float temp0_141[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xff), temp0_73)
        float temp0_142[0x4] = _mm_add_ps(temp0_135, temp0_138)
        int96_t var_288_2 = temp0_139[0].12
        int96_t var_278_1 = _mm_add_ps(_mm_add_ps(temp0_142, temp0_137), temp0_141)[0].12
        int512_t zmm9_1
        int512_t zmm10_1
        float zmm11_1[0x4]
        int512_t zmm12_1
        zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13, zmm15 = sub_1407740e0(&var_2a8, 0x322bcc77)
        zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm13, 2), data_143f2b8c0 ^ zmm11_1) ^ data_143f2b8c0
        float zmm2_2[0x4] = var_2a8
        int32_t var_2a0
        uint32_t zmm0_3[0x4] = var_2a0
        zmm2_2[0] = zmm2_2[0] * zmm15[0]
        float var_2a4
        float zmm1_3 = var_2a4 * zmm15[0]
        zmm0_3[0] = zmm0_3[0] f* zmm15[0]
        var_2a8 = zmm2_2[0]
        float temp0_147[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
        float var_2a4_1 = zmm1_3
        zmm1_3 = var_298_2:4.d * temp0_147[0]
        uint32_t var_2a0_1 = zmm0_3[0]
        zmm0_3 = var_298_2:8.d
        zmm0_3[0] = zmm0_3[0] f* temp0_147[0]
        float zmm3_2 = var_298_2.d * temp0_147[0]
        zmm2_2 = var_288_2.d
        var_298_2:4.d = zmm1_3
        var_298_2:8.d = zmm0_3[0]
        zmm0_3 = var_288_2:8.d
        float temp0_148[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
        zmm1_3 = var_288_2:4.d * temp0_148[0]
        zmm0_3[0] = zmm0_3[0] f* temp0_148[0]
        zmm2_2[0] = zmm2_2[0] * temp0_148[0]
        var_288_2:4.d = zmm1_3
        var_288_2:8.d = zmm0_3[0]
        var_298_2.d = zmm3_2
        var_288_2.d = zmm2_2[0]
        sub_14077e4a0(&var_2e8, &var_2a8)
        float zmm5_2[0x4] = var_2e8.o
        zmm6_2 = data_143f2b8b0
        zmm12_1.o = zmm12
        zmm10_1.o = zmm10
        zmm9_1.o = zmm9
        float temp0_149[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
        var_2f0 = 0x322bcc77
        float temp0_151[0x4] = _mm_add_ps(temp0_149, _mm_shuffle_ps(temp0_149, temp0_149, 0x4e))
        float temp0_153[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_151, temp0_151, 0x39), temp0_151)
        float temp0_154[0x4] = _mm_rsqrt_ps(temp0_153)
        float temp0_155[0x4] = _mm_mul_ps(temp0_153, zmm6_2)
        float temp0_160[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_154, temp0_154), temp0_155)), 
                temp0_154), 
            temp0_154)
        float temp0_163[0x4] =
            _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_160, temp0_160), temp0_155))
        float zmm0_2[0x4] = var_2f0
        float temp0_165[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0), temp0_153, 2)
        float temp0_167[0x4] = _mm_add_ps(_mm_mul_ps(temp0_163, temp0_160), temp0_160)
        float temp0_168[0x4] = _mm_unpacklo_ps(var_278_1:4.d, 0)
        zmm6_2 =
            _mm_and_ps(_mm_mul_ps(temp0_167, zmm5_2) ^ data_143f2b8a0, temp0_165) ^ data_143f2b8a0
        zmm7_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_278_1.d, var_278_1:8.d[0].q), temp0_168[0].q)
    var_218 = zmm13
    var_238 = zmm6_2
    var_228_1 = zmm7_2

var_2a8 = rbx
int64_t rbx_1 = sx.q(arg3[1].d)
int32_t rax_28 = (rbx_1 + 1).d
arg3[1].d = rax_28

if (rax_28 s> *(arg3 + 0xc))
    sub_1405c4fe0(arg3)

int64_t result = *arg3
float (* rcx_32)[0x4] = rbx_1 << 6
*(rcx_32 + result) = var_2a8.o
*(rcx_32 + result + 0x10) = zmm6_2
*(rcx_32 + result + 0x20) = var_228_1
*(rcx_32 + result + 0x30) = var_218
__security_check_cookie(rax_1 ^ &var_338)
return result
