// 函数: sub_1414a0350
// 地址: 0x1414a0350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_388
int64_t rax_1 = __security_cookie ^ &var_388
*(arg1 + 0x5c0) = arg2
uint128_t var_238
sub_141228a60(&var_238, arg2)
void* rsi = nullptr
int32_t rdx = 0
*(arg1 + 0x5d0) = var_238
*(arg1 + 0x600) = arg3
float var_228[0x4]
*(arg1 + 0x5e0) = var_228
uint128_t var_218
*(arg1 + 0x5f0) = var_218
*(arg1 + 0x54) = *arg4
*(arg1 + 0x5c) = arg4[1].d
float zmm1[0x4] = arg4[0xd].d
zmm1[0] = zmm1[0] f- *arg4
float zmm2[0x4] = *(arg4 + 0x6c)
uint128_t zmm0
zmm0.d = arg4[0xe].d.d f- arg4[1].d
zmm2[0] = zmm2[0] f- *(arg4 + 4)
int32_t var_350 = zmm0.d
zmm0 = arg4[0x10].d
int32_t var_2d0 = var_350
*(arg1 + 0x548) = arg6
float temp0[0x4] = _mm_unpacklo_ps(zmm1, zmm2[0].q)
*(arg1 + 0x550) = arg8
float var_2d8[0x4]
zmm1 = var_2d8
zmm1[0].q = temp0.q
float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x93)
temp0_1[0] = zmm0.d
*(arg1 + 0x554) = arg9.d
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
*(arg1 + 0x3b4) = temp0_2
int64_t rax_6 = *(arg2 + 0x20)
var_2d8 = temp0_2

if (*(rax_6 + 0x13c) == 0)
    rdx = 0x10

int32_t rdx_1 = rdx | (*(arg1 + 0x570) & 0xffffffef)
*(arg1 + 0x570) = rdx_1
int32_t rax_14

if ((*(*(arg3 + 8) + 0x39) & 0x40) == 0 || arg5 != 0)
    rax_14 = 0
else
    int64_t r8 = sx.q(*(*(*(arg1 + 0x5c0) + 0x80) + 8))
    int64_t rcx_2 = sx.q((*U"1111")[r8])
    
    if (data_1439b5204 == 0 || data_1439b5200 == 0 || r8.d s< 3)
        rax_14 = 0
    else if (rcx_2.d u> 0x1f || not(test_bit(0x88051015, rcx_2.d)))
        int64_t r9 = rcx_2 * 5
        int64_t r10_1 = *((r9 << 2) + &data_143f025f0)
        
        if ((r10_1 == data_143f025b0 && *((r9 << 2) + 0x143f025f8) == 3)
                || (rcx_2.d u<= 0x30 && test_bit(0x1000010100000, rcx_2)))
            rax_14 = 0x400
        else if (r10_1 != data_143f025c0)
            if (rcx_2.d == 0x19 || ((*(rcx_2 * 0x14 + &data_143f025fc) u>> 0xb).b & 1) != 0)
                rax_14 = 0x400
            else
                rax_14 = 0
        else if (*((r9 << 2) + 0x143f025f8) == 3 || rcx_2.d == 0x19
                || ((*(rcx_2 * 0x14 + &data_143f025fc) u>> 0xb).b & 1) != 0)
            rax_14 = 0x400
        else
            rax_14 = 0
    else
        rax_14 = 0x400

float zmm8[0x4] = data_142d3f660
int64_t var_2a0 = 0
float zmm7[0x4] = 0:4.o
int32_t rdx_7 = (((((rdx_1 & 0xfffffbff) | rax_14) & 0xfffffeff) | zx.d(arg10) << 8) & 0xfffff7ff)
    | zx.d(arg5) << 0xb
float temp0_3[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
*(arg1 + 0x570) = rdx_7
int64_t var_2b4 = 0
float var_2b8[0x4]
float zmm6[0x4] = var_2b8
int32_t var_28c = 0
float zmm5[0x4] = 0.o
int32_t rcx_7 = ((zx.d(*(*(arg3 + 8) + 0x3a)) << 0xa ^ rdx_7) & 0x1000) ^ rdx_7
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
*(arg1 + 0x570) = rcx_7
int32_t rdx_11 = (zx.d(*(*(arg2 + 0x20) + 0x138)) & 0xffffff80) << 7 | (rcx_7 & 0xffffbfff)
*(arg1 + 0x570) = rdx_11
*(arg1 + 0x570) = ((zx.d(*(*(arg2 + 0x20) + 0x139)) << 0xe ^ rdx_11) & 0x8000) ^ rdx_11
uint128_t zmm4 = *(arg4 + 0x10)
zmm2 = arg4[0xa].d
temp0_3[0] = (*(arg4 + 0x54))[0]
float zmm3[0x4] = arg4[0xb].d
zmm6[0] = zmm2[0]
zmm2 = *(arg4 + 0x20)
float temp0_5[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0)
temp0_4[0] = zmm3[0]
float temp0_7[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
zmm0 = _mm_mul_ps(zmm0, zmm6)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xe1)
float temp0_10[0x4] = _mm_mul_ps(temp0_5, temp0_9)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
float temp0_12[0x4] = _mm_mul_ps(temp0_7, temp0_11)
float temp0_13[0x4] = _mm_add_ps(temp0_10, zmm0)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), temp0_9)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm6)
float temp0_18[0x4] = _mm_add_ps(temp0_13, temp0_12)
zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm8)
float temp0_21[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_22[0x4] = _mm_add_ps(temp0_15, zmm0)
float temp0_23[0x4] = _mm_mul_ps(temp0_21, temp0_11)
int64_t var_2ac
var_2ac:4.o = temp0_9
float temp0_24[0x4] = _mm_add_ps(temp0_18, zmm4)
var_2b8 = zmm6
int64_t var_298
var_298.o = temp0_11
float temp0_25[0x4] = _mm_add_ps(temp0_22, temp0_23)
zmm3 = arg4[0xd].d
int32_t r13 = 8
void* var_138 = nullptr
int32_t var_130 = 0
int32_t var_12c = 8
int64_t var_f8 = 0
float temp0_28[0x4] = _mm_add_ps(temp0_25, _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8))
int32_t var_f0 = 0
zmm2 = *(arg4 + 0x30)
int32_t var_ec = 0xc
float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_31[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
zmm0 = _mm_mul_ps(zmm0, zmm6)
char var_2f0 = 1
float temp0_33[0x4] = _mm_mul_ps(temp0_31, temp0_11)
float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
float temp0_39[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_29, temp0_9), zmm0), temp0_33), temp0_35)
zmm2 = *(arg4 + 0x40)
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_41[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm0 = _mm_mul_ps(zmm0, zmm6)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), temp0_11)
zmm3[0] = zmm3[0] f- *(arg4 + 0x74)
zmm3[0] = zmm3[0] f+ *(arg4 + 0x74)
float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
float temp0_49[0x4] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_41, temp0_9), zmm0), temp0_44)
zmm1 = arg4[0xe].d
zmm0.d = zmm1.d f+ *(arg4 + 0x7c)
zmm1[0] = zmm1[0] f- *(arg4 + 0x7c)
float temp0_50[0x4] = _mm_add_ps(temp0_49, temp0_46)
zmm2 = *(arg4 + 0x6c)
zmm2[0] = zmm2[0] f- arg4[0xf].d
zmm4.d = zmm2.d f+ arg4[0xf].d
int32_t var_2d0_1 = zmm0.d
float var_350_1 = zmm1[0]
uint64_t var_308 = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
float var_300 = var_350_1
uint64_t var_2fc = (_mm_unpacklo_ps(zmm3, zmm4.q)).q
int32_t var_2f4 = var_2d0_1
void var_198
void var_128
sub_14148bc20(&var_308, &var_198, &var_128)
int32_t r14_1 = 0
int32_t r12 = 0
void* var_1a8 = nullptr
int32_t var_1a0 = 0
int32_t var_19c = 8
void* rcx_26
void* r15
int64_t var_358
void var_208
float zmm1_1[0x4]
float zmm2_1[0x4]

if (var_130 s<= 0)
label_1414a09bc:
    zmm6 = arg4[0xc].d
    r15.b = 0
    zmm7 = *(arg4 + 0x5c)
    zmm8 = *(arg4 + 0x64)
    zmm7[0] = zmm7[0] * zmm7[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm7[0] = zmm7[0] + zmm6[0]
    zmm7[0] = zmm7[0] + zmm8[0]
    int32_t var_2e8[0x4]
    
    if (zmm7[0] != 1f)
        if (zmm7[0] >= 9.99999994e-09f)
            float zmm4_1[0x4] = 0x3f000000
            float temp0_69[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
            zmm2_1 = 0x3f000000
            zmm7[0] = zmm7[0] * 0.5f
            temp0_69[0] = temp0_69[0] * temp0_69[0]
            zmm7[0] = zmm7[0] * temp0_69[0]
            zmm2_1[0] = 0.5f - zmm7[0]
            temp0_69[0] = temp0_69[0] * zmm2_1[0]
            temp0_69[0] = temp0_69[0] + temp0_69[0]
            temp0_69[0] = temp0_69[0] * temp0_69[0]
            zmm7[0] = zmm7[0] * temp0_69[0]
            zmm4_1[0] = 0.5f - zmm7[0]
            temp0_69[0] = temp0_69[0] * zmm4_1[0]
            temp0_69[0] = temp0_69[0] + temp0_69[0]
            var_2e8[0] = temp0_69[0]
            zmm1_1 = temp0_69
            temp0_69[0] = temp0_69[0] * zmm7[0]
            temp0_69[0] = temp0_69[0] * zmm8[0]
            var_358.d = temp0_69[0]
            zmm1_1[0] = zmm1_1[0] * zmm6[0]
            float var_350_5 = temp0_69[0]
        else
            zmm1_1 = data_143dbb1fc
            var_358.d = data_143dbb1f8[0]
            float var_350_4 = data_143dbb200[0]
        
        var_358:4.d = zmm1_1[0]
    else
        int32_t rax_28 = *(arg4 + 0x64)
        var_358 = *(arg4 + 0x5c)
        int32_t var_350_3 = rax_28
    
    float var_278[0x4]
    char rax_29
    float zmm9_1[0x4]
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm12_1[0x4]
    float zmm13_1[0x4]
    float zmm14_1[0x4]
    int128_t zmm15_1
    rax_29, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
        sub_14148b0b0(&var_358, &var_208, &var_128, &var_2e8, &var_278)
    
    if (rax_29 != 0)
        float zmm6_1[0x4] = var_278
        r15.b = 1
        float var_268[0x4]
        float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0x55), var_268)
        float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0), zmm6_1)
        float var_258[0x4]
        float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa), var_258)
        float temp0_76[0x4] = _mm_add_ps(temp0_71, temp0_73)
        float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11_1, zmm11_1, 0x55), var_268)
        float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0), zmm6_1)
        float temp0_81[0x4] = _mm_add_ps(temp0_76, temp0_75)
        float var_248[0x4]
        float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0xff), var_248)
        float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xaa), var_258)
        int128_t var_d8_1 = zmm15_1
        var_2b8 = _mm_add_ps(temp0_81, temp0_83)
        float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0x55), var_268)
        float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xff), var_248)
        float temp0_91[0x4] = _mm_add_ps(temp0_88, temp0_80)
        float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11_1, zmm11_1, 0), zmm6_1)
        float temp0_94[0x4] = _mm_add_ps(temp0_91, temp0_85)
        float temp0_95[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xaa)
        float temp0_96[0x4] = _mm_add_ps(temp0_78, temp0_93)
        float temp0_97[0x4] = _mm_mul_ps(temp0_95, var_258)
        float temp0_98[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xff)
        float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_90)
        float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0), zmm6_1)
        zmm6_1 = arg4[0xd].d
        float temp0_102[0x4] = _mm_add_ps(temp0_96, temp0_97)
        float temp0_103[0x4] = _mm_mul_ps(temp0_98, var_248)
        var_2ac:4.o = temp0_99
        zmm6_1[0] = zmm6_1[0] f- *(arg4 + 0x74)
        zmm6_1[0] = zmm6_1[0] f+ *(arg4 + 0x74)
        float temp0_104[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
        float temp0_105[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55)
        float temp0_106[0x4] = _mm_add_ps(temp0_102, temp0_103)
        float temp0_107[0x4] = _mm_mul_ps(temp0_105, var_268)
        float temp0_108[0x4] = _mm_mul_ps(temp0_104, var_258)
        float zmm5_2[0x4] = *(arg4 + 0x6c)
        float temp0_109[0x4] = _mm_add_ps(temp0_107, temp0_101)
        float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0xff), var_248)
        zmm5_2[0] = zmm5_2[0] f+ arg4[0xf].d
        zmm5_2[0] = zmm5_2[0] f- arg4[0xf].d
        var_298.o = temp0_106
        float temp0_113[0x4] = _mm_add_ps(_mm_add_ps(temp0_109, temp0_108), temp0_111)
        float zmm2_2[0x4] = arg4[0xe].d
        zmm2_2[0] = zmm2_2[0] f+ *(arg4 + 0x7c)
        zmm2_2[0] = zmm2_2[0] f- *(arg4 + 0x7c)
        float var_350_6 = zmm2_2[0]
        float var_2d0_2 = zmm2_2[0]
        var_308 = (_mm_unpacklo_ps(zmm6_1, zmm5_2[0].q)).q
        float var_300_2 = var_2d0_2
        int64_t var_2fc_1 = (_mm_unpacklo_ps(zmm6_1, zmm5_2[0].q)).q
        float var_2f4_1 = var_350_6
        char var_2f0_1 = 1
        sub_140ae2b00(&var_308, &var_238, &var_2b8)
        float temp0_116[0x4] = __maxss_xmmss_memss(arg4[0x14].d[0], var_238:8.d)
        int64_t var_334_1 = 0x3f800000
        zmm10_1 = 0.o
        *(arg1 + 0x168) = temp0_116[0]
        temp0_116[0] = temp0_116[0] + zmm13_1[0]
        int64_t var_348 = 0x3f800000
        int32_t var_340_1 = 0
        temp0_116[0] = temp0_116[0] f+ *(arg4 + 0xa4)
        zmm9_1 = var_348.o
        float zmm8_1[0x4] = 0.o
        float temp0_117[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xd2)
        float temp0_118[0x4] = __minss_xmmss_memss(temp0_116[0], 0x49800000)
        float temp0_119[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0x93)
        float temp0_120[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x93)
        int64_t var_318_1 = 0
        float temp0_121[0x4] = _mm_max_ss(temp0_118[0], temp0_116[0])
        float temp0_122[0x4] = __maxss_xmmss_memss(temp0_116[0], var_228[1])
        *(arg1 + 0x164) = temp0_122[0]
        zmm5_2 = arg4[0x13].d
        int64_t zmm7_2 = *(arg4 + 0x9c)
        zmm5_2[0] = zmm5_2[0] * temp0_122[0]
        temp0_122[0] = temp0_122[0] - temp0_116[0]
        zmm5_2[0] = zmm5_2[0] f+ zmm7_2.d
        zmm13_1[0] = zmm13_1[0] / temp0_122[0]
        float zmm1_3[0x4] = arg4[0x12].d
        zmm5_2[0] = zmm5_2[0] * zmm13_1[0]
        temp0_120[0] = zmm1_3[0]
        zmm5_2[0] = zmm5_2[0] * temp0_116[0]
        float zmm2_3[0x4] = var_2b8
        temp0_117[0] = zmm5_2[0]
        float temp0_123[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0x39)
        zmm5_2[0] = zmm5_2[0] * zmm13_1[0]
        temp0_119[0] = (*(arg4 + 0x94))[0]
        float temp0_124[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
        float temp0_125[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0x39)
        float temp0_126[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
        float zmm6_2[0x4] = zmm5_2 ^ 0x80000000
        float temp0_127[0x4] = _mm_mul_ps(temp0_124, temp0_125)
        float temp0_128[0x4] = _mm_shuffle_ps(temp0_117, temp0_117, 0x27)
        temp0_128[0] = zmm5_2[0]
        float temp0_129[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
        zmm5_2 = var_318_1.o
        float temp0_130[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0x39)
        float temp0_131[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
        float temp0_132[0x4] = _mm_mul_ps(temp0_126, temp0_123)
        temp0_131[0] = zmm6_2[0]
        float temp0_133[0x4] = _mm_mul_ps(temp0_129, temp0_130)
        int32_t var_338_1
        var_338_1.o = temp0_125
        float temp0_134[0x4] = _mm_add_ps(temp0_127, temp0_132)
        var_348.o = temp0_123
        int64_t var_328_1
        var_328_1.o = temp0_130
        float temp0_135[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
        float temp0_136[0x4] = _mm_shuffle_ps(temp0_131, temp0_131, 0x27)
        float temp0_137[0x4] = _mm_add_ps(temp0_134, temp0_133)
        zmm6_2 = arg4[0xd].d
        temp0_136[0] = zmm7_2.d
        float temp0_138[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0x39)
        var_318_1.o = temp0_138
        float temp0_140[0x4] = _mm_add_ps(temp0_137, _mm_mul_ps(temp0_135, temp0_138))
        zmm2_3 = var_2ac:4.o
        float temp0_141[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
        float temp0_142[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
        float temp0_143[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
        float temp0_144[0x4] = _mm_mul_ps(temp0_141, temp0_123)
        float temp0_145[0x4] = _mm_mul_ps(temp0_142, temp0_125)
        float temp0_146[0x4] = _mm_mul_ps(temp0_143, temp0_130)
        float temp0_147[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
        float temp0_148[0x4] = _mm_add_ps(temp0_145, temp0_144)
        float temp0_149[0x4] = _mm_mul_ps(temp0_147, temp0_138)
        var_278 = temp0_140
        float temp0_151[0x4] = _mm_add_ps(_mm_add_ps(temp0_148, temp0_146), temp0_149)
        zmm2_3 = var_298.o
        float temp0_152[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
        float temp0_153[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
        float temp0_154[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
        float temp0_155[0x4] = _mm_mul_ps(temp0_152, temp0_123)
        float temp0_156[0x4] = _mm_mul_ps(temp0_154, temp0_130)
        float temp0_158[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), temp0_138)
        float temp0_162[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_153, temp0_125), temp0_155), temp0_156), 
            temp0_158)
        float temp0_163[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0)
        float temp0_164[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0x55)
        float temp0_165[0x4] = _mm_mul_ps(temp0_163, temp0_123)
        float temp0_166[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xaa)
        float temp0_167[0x4] = _mm_mul_ps(temp0_164, temp0_125)
        float temp0_168[0x4] = _mm_mul_ps(temp0_166, temp0_130)
        float temp0_169[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xff)
        float temp0_170[0x4] = _mm_add_ps(temp0_167, temp0_165)
        float temp0_171[0x4] = _mm_mul_ps(temp0_169, temp0_138)
        zmm5_2 = *(arg4 + 0x6c)
        float zmm4_3[0x4] = *(arg4 + 0x74)
        float temp0_172[0x4] = _mm_add_ps(temp0_170, temp0_168)
        zmm1_3 = *(arg4 + 0x7c)
        zmm4_3[0] = zmm4_3[0] + zmm6_2[0]
        zmm6_2[0] = zmm6_2[0] - zmm4_3[0]
        float temp0_173[0x4] = _mm_add_ps(temp0_172, temp0_171)
        zmm2_3 = arg4[0xe].d
        zmm1_3[0] = zmm1_3[0] + zmm2_3[0]
        zmm2_3[0] = zmm2_3[0] - zmm1_3[0]
        float zmm3_2[0x4] = arg4[0xf].d
        float var_350_7 = zmm1_3[0]
        zmm7_2.d = zmm3_2[0].q.d f+ zmm5_2[0]
        float var_2d0_3 = zmm2_3[0]
        zmm5_2[0] = zmm5_2[0] - zmm3_2[0]
        float var_300_3 = var_2d0_3
        float var_2f4_2 = var_350_7
        var_308 = (_mm_unpacklo_ps(zmm6_2, zmm5_2[0].q)).q
        int64_t var_2fc_2 = (_mm_unpacklo_ps(zmm4_3, zmm7_2)).q
        char var_2f0_2 = 1
        uint64_t* rax_34 = sub_140ae2b00(&var_308, &var_2d8, &var_278)
        float zmm4_4[0x4] = arg4[0x13].d
        float zmm6_3[0x4] = *(arg4 + 0x9c)
        float zmm3_3[0x4] = var_2b8
        zmm15_1 = *(rax_34 + 0x14)
        int32_t rax_35 = *(arg1 + 0x570)
        var_348 = 0x3f800000
        int32_t var_340_2 = 0
        zmm9_1 = var_348.o
        int64_t var_334_2 = 0x3f800000
        zmm10_1 = 0.o
        int64_t var_328_2 = 0
        int64_t var_318_2 = 0
        float temp0_176[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0x93)
        float temp0_177[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x93)
        void* rsi_1
        int128_t* r14_2
        float zmm0_4[0x4]
        float zmm2_4[0x4]
        float zmm7_3[0x4]
        int32_t var_338_2
        float zmm1_4[0x4]
        
        if (not(test_bit(rax_35, 0xb)))
            zmm1_4 = *(arg1 + 0x168)
            zmm8_1 = var_328_2.o
            zmm7_3 = var_318_2.o
            temp0_121[0] = temp0_121[0] * zmm4_4[0]
            float temp0_232[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xd2)
            float temp0_233[0x4] = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xd2)
            temp0_121[0] = temp0_121[0] + zmm6_3[0]
            float var_c8_1[0x4] = zmm14_1
            temp0_121[0] = temp0_121[0] - zmm1_4[0]
            temp0_177[0] = arg4[0x12].d[0]
            float temp0_234[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
            zmm1_4[0] = zmm1_4[0] * temp0_121[0]
            zmm13_1[0] = zmm13_1[0] / temp0_121[0]
            float temp0_235[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0x39)
            zmm1_4[0] = zmm1_4[0] * zmm13_1[0]
            zmm13_1[0] = zmm13_1[0] * temp0_121[0]
            temp0_176[0] = (*(arg4 + 0x94))[0]
            var_348.o = temp0_235
            temp0_232[0] = zmm13_1[0]
            float temp0_236[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0x39)
            zmm2_4 = var_2ac:4.o
            temp0_233[0] = (zmm1_4 ^ 0x80000000)[0]
            float temp0_237[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0x27)
            float temp0_238[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
            temp0_237[0] = zmm4_4[0]
            float temp0_239[0x4] = _mm_shuffle_ps(temp0_237, temp0_237, 0x39)
            float temp0_240[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
            float temp0_242[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_3, zmm3_3, 0), temp0_235)
            float temp0_243[0x4] = _mm_mul_ps(temp0_234, temp0_239)
            float temp0_244[0x4] = _mm_mul_ps(temp0_240, temp0_236)
            float temp0_245[0x4] = _mm_mul_ps(temp0_238, temp0_236)
            float temp0_246[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0x27)
            float temp0_247[0x4] = _mm_add_ps(temp0_244, temp0_242)
            float temp0_248[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xff)
            var_338_2.o = temp0_236
            float temp0_249[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
            temp0_246[0] = zmm6_3[0]
            float temp0_250[0x4] = _mm_mul_ps(temp0_249, temp0_235)
            float temp0_251[0x4] = _mm_add_ps(temp0_247, temp0_243)
            float temp0_252[0x4] = _mm_shuffle_ps(temp0_246, temp0_246, 0x39)
            float temp0_253[0x4] = _mm_mul_ps(temp0_248, temp0_252)
            float temp0_254[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
            float temp0_255[0x4] = _mm_add_ps(temp0_245, temp0_250)
            float temp0_257[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), temp0_252)
            float temp0_258[0x4] = _mm_mul_ps(temp0_254, temp0_239)
            float temp0_259[0x4] = _mm_add_ps(temp0_251, temp0_253)
            var_328_2.o = temp0_239
            var_318_2.o = temp0_252
            float temp0_261[0x4] = _mm_add_ps(_mm_add_ps(temp0_255, temp0_258), temp0_257)
            zmm2_4 = var_298.o
            float temp0_262[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
            float temp0_263[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
            float temp0_264[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
            float temp0_265[0x4] = _mm_mul_ps(temp0_262, temp0_236)
            float temp0_267[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), temp0_252)
            float temp0_268[0x4] = _mm_mul_ps(temp0_263, temp0_235)
            float temp0_269[0x4] = _mm_mul_ps(temp0_264, temp0_239)
            float temp0_272[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_265, temp0_268), temp0_269), temp0_267)
            r14_2 = arg1 + 0xa0
            float temp0_274[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0x55), temp0_236)
            rsi_1 = arg1 + 0xe0
            float temp0_275[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0)
            float temp0_276[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xaa)
            float temp0_277[0x4] = _mm_mul_ps(temp0_275, temp0_235)
            float temp0_278[0x4] = _mm_mul_ps(temp0_276, temp0_239)
            float temp0_280[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0xff), temp0_252)
            float temp0_281[0x4] = _mm_add_ps(temp0_274, temp0_277)
            *r14_2 = var_278
            float temp0_282[0x4] = _mm_add_ps(temp0_281, temp0_278)
            r14_2[1] = temp0_151
            float temp0_283[0x4] = _mm_add_ps(temp0_282, temp0_280)
            *rsi_1 = temp0_259
            *(rsi_1 + 0x10) = temp0_261
            r14_2[2] = temp0_162
            *(rsi_1 + 0x20) = temp0_272
            *(rsi_1 + 0x30) = temp0_283
            r14_2[3] = temp0_173
            
            if ((rax_35.b & 0x10) != 0)
                zmm1_4 = *(arg1 + 0x164)
                
                if (not(zmm1_4[0] >= temp0_121[0]))
                    temp0_121[0] = temp0_121[0] - zmm1_4[0]
                    zmm1_4[0] = zmm1_4[0] f- *(arg1 + 0x168)
                    float temp0_284[0x4] = _mm_min_ss(temp0_121[0], zmm1_4[0])
                    temp0_121[0] = temp0_121[0] - temp0_284[0]
                    float temp0_285[0x4] = __maxss_xmmss_memss(temp0_284[0], 0x358637bd)
                    temp0_121[0] = temp0_121[0] / zmm1_4[0]
                    zmm1_4[0] = zmm1_4[0] / temp0_285[0]
                    *(arg1 + 0x5b8) = temp0_121[0]
                    *(arg1 + 0x5bc) = zmm1_4[0]
        else
            zmm0_4 = *(arg1 + 0x164)
            zmm5_2 = arg4[0x14].d
            zmm8_1 = var_328_2.o
            zmm7_3 = var_318_2.o
            zmm4_4[0] = zmm4_4[0] * zmm0_4[0]
            zmm0_4[0] = zmm0_4[0] - zmm5_2[0]
            float temp0_178[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xd2)
            float temp0_179[0x4] = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xd2)
            zmm4_4[0] = zmm4_4[0] + zmm6_3[0]
            zmm13_1[0] = zmm13_1[0] / zmm0_4[0]
            zmm0_4 = *(arg4 + 0x94)
            zmm5_2[0] = zmm5_2[0] * zmm4_4[0]
            temp0_176[0] = zmm0_4[0]
            float temp0_180[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0x39)
            float temp0_181[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0)
            zmm5_2[0] = zmm5_2[0] * zmm13_1[0]
            zmm13_1[0] = zmm13_1[0] * zmm4_4[0]
            temp0_177[0] = arg4[0x12].d[0]
            var_338_2.o = temp0_180
            temp0_178[0] = zmm13_1[0]
            float temp0_182[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0x39)
            zmm2_4 = var_2ac:4.o
            temp0_179[0] = (zmm5_2 ^ 0x80000000)[0]
            float temp0_183[0x4] = _mm_mul_ps(temp0_181, temp0_182)
            float temp0_184[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
            float temp0_185[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0x55)
            float temp0_186[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xaa)
            float temp0_187[0x4] = _mm_mul_ps(temp0_185, temp0_180)
            float temp0_188[0x4] = _mm_mul_ps(temp0_184, temp0_180)
            float temp0_189[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0x27)
            float temp0_190[0x4] = _mm_add_ps(temp0_187, temp0_183)
            float temp0_191[0x4] = _mm_shuffle_ps(temp0_179, temp0_179, 0x27)
            temp0_189[0] = zmm4_4[0]
            float temp0_192[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xff)
            float temp0_193[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0x39)
            float temp0_194[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
            temp0_191[0] = zmm6_3[0]
            float temp0_195[0x4] = _mm_mul_ps(temp0_186, temp0_193)
            float temp0_196[0x4] = _mm_mul_ps(temp0_194, temp0_182)
            float temp0_197[0x4] = _mm_shuffle_ps(temp0_191, temp0_191, 0x39)
            float temp0_198[0x4] = _mm_add_ps(temp0_190, temp0_195)
            float temp0_199[0x4] = _mm_mul_ps(temp0_192, temp0_197)
            var_348.o = temp0_182
            float temp0_200[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
            float temp0_201[0x4] = _mm_add_ps(temp0_188, temp0_196)
            float temp0_203[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), temp0_197)
            float temp0_204[0x4] = _mm_add_ps(temp0_198, temp0_199)
            float temp0_205[0x4] = _mm_mul_ps(temp0_200, temp0_193)
            var_328_2.o = temp0_193
            var_318_2.o = temp0_197
            var_348.o = temp0_204
            float temp0_207[0x4] = _mm_add_ps(_mm_add_ps(temp0_201, temp0_205), temp0_203)
            zmm2_4 = var_298.o
            float temp0_208[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
            float temp0_209[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
            float temp0_210[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
            float temp0_211[0x4] = _mm_mul_ps(temp0_208, temp0_180)
            float temp0_213[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), temp0_197)
            float temp0_214[0x4] = _mm_mul_ps(temp0_209, temp0_182)
            float temp0_215[0x4] = _mm_mul_ps(temp0_210, temp0_193)
            var_338_2.o = temp0_207
            float temp0_218[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_211, temp0_214), temp0_215), temp0_213)
            var_328_2.o = temp0_218
            rsi_1 = arg1 + 0xe0
            r14_2 = arg1 + 0xa0
            float temp0_220[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0x55), temp0_180)
            float temp0_221[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0)
            float temp0_222[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xaa)
            float temp0_223[0x4] = _mm_mul_ps(temp0_221, temp0_182)
            float temp0_224[0x4] = _mm_mul_ps(temp0_222, temp0_193)
            float temp0_226[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0xff), temp0_197)
            float temp0_227[0x4] = _mm_add_ps(temp0_220, temp0_223)
            *rsi_1 = var_278
            float temp0_228[0x4] = _mm_add_ps(temp0_227, temp0_224)
            *r14_2 = temp0_204
            *(rsi_1 + 0x10) = temp0_151
            float temp0_229[0x4] = _mm_add_ps(temp0_228, temp0_226)
            r14_2[1] = temp0_207
            r14_2[2] = temp0_218
            var_318_2.o = temp0_229
            *(rsi_1 + 0x20) = temp0_162
            r14_2[3] = temp0_229
            *(rsi_1 + 0x30) = temp0_173
            
            if ((rax_35.b & 0x10) == 0)
                zmm6_3 = arg4[0xd].d
                zmm4_4 = *(arg4 + 0x74)
                zmm1_4 = *(arg4 + 0x7c)
                zmm3_3 = arg4[0xf].d
                zmm2_4 = arg4[0xe].d
                zmm4_4[0] = zmm4_4[0] + zmm6_3[0]
                zmm5_2 = *(arg4 + 0x6c)
                zmm6_3[0] = zmm6_3[0] - zmm4_4[0]
                char var_2f0_3 = 1
                zmm1_4[0] = zmm1_4[0] + zmm2_4[0]
                zmm3_3[0] = zmm3_3[0] + zmm5_2[0]
                zmm5_2[0] = zmm5_2[0] - zmm3_3[0]
                zmm2_4[0] = zmm2_4[0] - zmm1_4[0]
                float var_350_8 = zmm1_4[0]
                var_308 = (_mm_unpacklo_ps(zmm6_3, zmm5_2[0].q)).q
                float var_300_4 = zmm2_4[0]
                int64_t var_2fc_3 = (_mm_unpacklo_ps(zmm4_4, zmm3_3[0].q)).q
                float var_2f4_3 = var_350_8
                zmm15_1 = *(sub_140ae2b00(&var_308, &var_2d8, &var_348) + 0x14)
        zmm13_1[0] = zmm13_1[0] f/ zmm15_1.d
        zmm0_4 = zx.o(0)
        *(arg1 + 0x160) = zmm13_1[0]
        *(arg1 + 0x3b0) = arg4[0x14].d
        zmm0_4[0] = float.s(zx.q(arg6))
        zmm0_4[0] = zmm0_4[0] f/ var_2e8[0]
        int32_t rcx_21 = int.d(zmm0_4[0])
        int32_t rax_41
        
        if (rcx_21 u>= 1)
            rax_41 = arg7
            
            if (rcx_21 u< rax_41)
                rax_41 = rcx_21
        else
            rax_41 = 1
        
        bool cond:4_1 = *(arg1 + 0x548) == 0
        *(arg1 + 0x54c) = rax_41
        
        if (cond:4_1 || rax_41 == 0)
            r15.b = 0
        else
            zmm2_4 = *(arg4 + 0x10)
            zmm7_3 = data_142d4cc30
            zmm6_3 = data_142d4cc00
            zmm8_1 = data_142d4cc20
            zmm9_1 = data_142d3f660
            float (* r8_4)[0x4]
            r8_4.b = 1
            float temp0_286[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
            float temp0_287[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
            float temp0_288[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
            float temp0_289[0x4] = _mm_mul_ps(temp0_286, zmm7_3)
            float temp0_290[0x4] = _mm_mul_ps(temp0_287, zmm8_1)
            float temp0_292[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm9_1)
            float temp0_296[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_288, zmm6_3), temp0_289), temp0_290), 
                temp0_292)
            zmm2_4 = *(arg4 + 0x20)
            float temp0_297[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
            float temp0_298[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
            float temp0_299[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
            float temp0_300[0x4] = _mm_mul_ps(temp0_297, zmm7_3)
            float temp0_301[0x4] = _mm_mul_ps(temp0_298, zmm8_1)
            float temp0_303[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm9_1)
            float temp0_307[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_299, zmm6_3), temp0_300), temp0_301), 
                temp0_303)
            zmm2_4 = *(arg4 + 0x30)
            float temp0_308[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
            float temp0_309[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
            float temp0_310[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
            float temp0_311[0x4] = _mm_mul_ps(temp0_309, zmm7_3)
            float temp0_312[0x4] = _mm_mul_ps(temp0_310, zmm8_1)
            float temp0_314[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm9_1)
            float temp0_318[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_308, zmm6_3), temp0_311), temp0_312), 
                temp0_314)
            zmm2_4 = *(arg4 + 0x40)
            float temp0_319[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
            float temp0_320[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
            float temp0_321[0x4] = _mm_mul_ps(temp0_319, zmm6_3)
            float temp0_322[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
            *(arg1 + 0x60) = temp0_296
            *(arg1 + 0x70) = temp0_307
            float temp0_323[0x4] = _mm_mul_ps(temp0_320, zmm7_3)
            float temp0_324[0x4] = _mm_mul_ps(temp0_322, zmm8_1)
            float temp0_325[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xff)
            float temp0_326[0x4] = _mm_add_ps(temp0_321, temp0_323)
            float temp0_327[0x4] = _mm_mul_ps(temp0_325, zmm9_1)
            *(arg1 + 0x80) = temp0_318
            *(arg1 + 0x90) = _mm_add_ps(_mm_add_ps(temp0_326, temp0_324), temp0_327)
            sub_141f8c8a0(arg1 + 0x170, r14_2, r8_4.b)
            float (* rax_42)[0x4] = sub_1408041d0(rsi_1, &var_348)
            *(arg1 + 0x120) = *rax_42
            *(arg1 + 0x130) = rax_42[1]
            *(arg1 + 0x140) = rax_42[2]
            *(arg1 + 0x150) = rax_42[3]
            sub_141f8c8a0(arg1 + 0x290, rsi_1, 1)
            sub_1414b3a70(arg1)
    
    rcx_26 = var_138
    rsi = var_1a8
else
    r15 = nullptr
    int32_t var_2cc_1 = 0x3f800000
    
    while (true)
        rcx_26 = var_138
        void* rax_24 = &var_198
        zmm3 = var_2d8
        var_308 = 0
        
        if (rcx_26 != 0)
            rax_24 = rcx_26
        
        int32_t var_300_1 = 0
        zmm1_1 = *(rax_24 + r15 + 4)
        zmm3[0] = (*(rax_24 + r15))[0]
        zmm2_1 = *(rax_24 + r15 + 8)
        float temp0_53[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        temp0_53[0] = zmm1_1[0]
        float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xc6)
        temp0_54[0] = zmm2_1[0]
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xc9)
        var_2d8 = temp0_55
        float temp0_56[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xff)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xaa)
        float temp0_59[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0x55), temp0_28)
        float temp0_60[0x4] = _mm_mul_ps(temp0_57, temp0_39)
        float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0), temp0_24)
        float temp0_63[0x4] = _mm_mul_ps(temp0_56, temp0_50)
        float temp0_64[0x4] = _mm_add_ps(temp0_59, temp0_62)
        float temp0_66[0x4] = _mm_add_ps(_mm_add_ps(temp0_63, temp0_60), temp0_64)
        temp0_66[0] = temp0_66[0] f* *(arg4 + 0x5c)
        float temp0_67[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
        float temp0_68[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xaa)
        temp0_67[0] = temp0_67[0] f* arg4[0xc].d
        temp0_66[0] = temp0_66[0] + temp0_67[0]
        temp0_68[0] = temp0_68[0] f* *(arg4 + 0x64)
        temp0_66[0] = temp0_66[0] + temp0_68[0]
        temp0_66[0] = temp0_66[0] f* arg4[0x13].d
        temp0_66[0] = temp0_66[0] f+ *(arg4 + 0x9c)
        
        if (temp0_66[0] < 9.99999975e-06f)
            r15.b = 0
            break
        
        zmm2_1 = 0x3f800000
        zmm2_1[0] = 1f / temp0_66[0]
        zmm2_1[0] = zmm2_1[0] * temp0_66[0]
        zmm2_1[0] = zmm2_1[0] * temp0_67[0]
        zmm2_1[0] = zmm2_1[0] * temp0_68[0]
        var_358.d = zmm2_1[0]
        var_358:4.d = zmm2_1[0]
        float var_350_2 = zmm2_1[0]
        
        if (r14_1 + 1 s> r13)
            sub_14085a560(&var_208, r14_1)
            rsi = var_1a8
        
        void* rdx_14 = &var_208
        
        if (rsi != 0)
            rdx_14 = rsi
        
        r12 += 1
        r15 += 0xc
        int64_t rcx_16 = sx.q(r14_1) * 3
        *(rdx_14 + (rcx_16 << 2)) = var_358
        *(rdx_14 + (rcx_16 << 2) + 8) = var_350_2
        
        if (r12 s>= var_130)
            goto label_1414a09bc
        
        r13 = var_19c
        r14_1 += 1
        rsi = var_1a8

if (rsi != 0)
    sub_140a74f90(rsi)
    rcx_26 = var_138

if (var_f8 != 0)
    sub_140a74f90(var_f8)
    rcx_26 = var_138

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

__security_check_cookie(rax_1 ^ &var_388)
return zx.q(r15.b)
