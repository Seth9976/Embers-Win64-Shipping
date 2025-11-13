// 函数: sub_141367940
// 地址: 0x141367940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* rdx = arg2[8]
void* r9 = *arg2
int64_t rbx = *(rdx + 0x1a0)
int64_t var_1d0 = rbx
sub_141080ac0(arg1, rdx, rbx, *(r9 + 0x10))
float zmm6[0x4]
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
float zmm11[0x4]
uint128_t zmm12
float zmm13[0x4]
float zmm14[0x4]
zmm6, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14 =
    j_sub_14137eb70(arg1 + 0x118, arg2[8], rbx, arg2, data_14395f4d0, 0, nullptr)
void* rax_3 = *arg2
float var_1d8

if (*(rax_3 + 8) == 0)
    var_1d8 = 0f
else
    float zmm2_1[0x4] = *(rax_3 + 0x340)
    float zmm0_1[0x4] = *(rax_3 + 0x2a0)
    float var_28_1[0x4] = zmm6
    zmm6 = *(rax_3 + 0x290)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    zmm0_1[0] = zmm0_1[0] f- *(rax_3 + 0x620)
    float zmm4_1[0x4] = zmm0_1[1]
    zmm4_1[0] = zmm4_1[0] f- *(rax_3 + 0x624)
    float zmm5_1[0x4] = zmm0_1
    float var_38_1[0x4] = zmm7
    float zmm3[0x4] = zmm0_1
    float var_48_1[0x4] = zmm8
    zmm0_1 = *(rax_3 + 0x49b0)
    zmm8 = *(rax_3 + 0x280)
    zmm5_1[0] = zmm3[0]
    zmm0_1[0] = zmm0_1[0] f- *(rax_3 + 0x4d30)
    double var_58_1 = zmm9[0].q
    zmm9 = *(rax_3 + 0x2b0)
    float var_68_1[0x4] = zmm10
    uint128_t var_78_1 = zmm11
    float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), zmm6)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9)
    float temp0_7[0x4] = _mm_mul_ps(temp0_4, zmm8)
    uint128_t var_88_1 = zmm12
    zmm12.d = zmm0_1[1].d f- *(rax_3 + 0x4d34)
    float temp0_8[0x4] = _mm_add_ps(temp0_3, temp0_7)
    float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
    temp0_9[0] = zmm4_1[0]
    float var_98_1[0x4] = zmm13
    zmm13 = *(rax_3 + 0x49c0)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xe1)
    float temp0_11[0x4] = _mm_mul_ps(temp0_1, temp0_10)
    int64_t var_a8_1 = zmm14[0].q
    zmm14 = *(rax_3 + 0x49a0)
    float temp0_12[0x4] = _mm_add_ps(temp0_8, temp0_11)
    float zmm15[0x4] = *(rax_3 + 0x4990)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_6)
    zmm2_1 = *(rax_3 + 0x350)
    float temp0_14[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_15[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_16[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9)
    float temp0_19[0x4] = _mm_mul_ps(temp0_15, zmm8)
    float temp0_20[0x4] = _mm_mul_ps(temp0_16, temp0_10)
    float temp0_24[0x4] =
        _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_14, zmm6), temp0_19), temp0_20), temp0_18)
    zmm2_1 = *(rax_3 + 0x360)
    float temp0_25[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_26[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_27[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_28[0x4] = _mm_mul_ps(temp0_25, zmm6)
    float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9)
    float temp0_31[0x4] = _mm_mul_ps(temp0_26, zmm8)
    float temp0_32[0x4] = _mm_mul_ps(temp0_27, temp0_10)
    float temp0_35[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_28, temp0_31), temp0_32), temp0_30)
    zmm2_1 = *(rax_3 + 0x370)
    float temp0_36[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0), zmm8)
    float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), temp0_10)
    float temp0_41[0x4] = _mm_mul_ps(temp0_36, zmm6)
    float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9)
    float temp0_44[0x4] = _mm_add_ps(temp0_41, temp0_38)
    float var_1c4_1 = temp0_24[0]
    float var_1c8 = temp0_13[0]
    float var_1b8_1 = _mm_shuffle_ps(temp0_13, temp0_13, 0x55)[0]
    float temp0_46[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x55)
    float temp0_47[0x4] = _mm_add_ps(temp0_44, temp0_40)
    float var_1b0_1 = temp0_46[0]
    float var_1c0_1 = temp0_35[0]
    float var_1b4_1 = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)[0]
    float temp0_49[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xaa)
    float temp0_50[0x4] = _mm_add_ps(temp0_47, temp0_43)
    temp0_10[0] = temp0_49[0]
    zmm2_1 = *(rax_3 + 0x4a50)
    float temp0_51[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)
    float temp0_52[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    temp0_10[2] = temp0_51[0]
    float temp0_53[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float var_1ac_1 = _mm_shuffle_ps(temp0_50, temp0_50, 0x55)[0]
    temp0_10[1] = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa)[0]
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xaa)
    float var_1bc_1 = temp0_50[0]
    float var_18c_1 = _mm_shuffle_ps(temp0_50, temp0_50, 0xff)[0]
    temp0_10[3] = temp0_56[0]
    zmm0_1[0] = zmm0_1[0]
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xff)
    float temp0_59[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_60[0x4] = _mm_mul_ps(temp0_53, zmm15)
    float var_194_1 = temp0_58[0]
    float temp0_61[0x4] = _mm_mul_ps(temp0_52, zmm14)
    float temp0_62[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
    float temp0_63[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
    temp0_62[0] = zmm12.d
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xe1)
    float temp0_65[0x4] = _mm_add_ps(temp0_61, temp0_60)
    float temp0_66[0x4] = _mm_mul_ps(temp0_59, temp0_64)
    float temp0_67[0x4] = _mm_mul_ps(temp0_63, zmm13)
    float temp0_68[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xff)
    float temp0_69[0x4] = _mm_add_ps(temp0_65, temp0_66)
    float temp0_70[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xff)
    float var_198_1 = temp0_68[0]
    float var_190_1 = temp0_70[0]
    float temp0_71[0x4] = _mm_add_ps(temp0_69, temp0_67)
    zmm2_1 = *(rax_3 + 0x4a60)
    float temp0_72[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_73[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_74[0x4] = _mm_mul_ps(temp0_72, zmm14)
    float temp0_75[0x4] = _mm_mul_ps(temp0_73, zmm15)
    int64_t var_178_1 = temp0_71[0].q
    float temp0_76[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_75)
    float temp0_78[0x4] = _mm_mul_ps(temp0_76, temp0_64)
    float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm13)
    float temp0_82[0x4] = _mm_add_ps(_mm_add_ps(temp0_77, temp0_78), temp0_80)
    zmm2_1 = *(rax_3 + 0x4a70)
    float temp0_83[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_84[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_85[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_86[0x4] = _mm_mul_ps(temp0_83, zmm15)
    float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_64)
    float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm13)
    float temp0_90[0x4] = _mm_mul_ps(temp0_84, zmm14)
    int64_t var_168_1 = temp0_82[0].q
    float temp0_93[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_90, temp0_86), temp0_87), temp0_89)
    zmm2_1 = *(rax_3 + 0x4a80)
    float temp0_94[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    float temp0_95[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
    float temp0_96[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    float temp0_97[0x4] = _mm_mul_ps(temp0_94, zmm14)
    float temp0_98[0x4] = _mm_mul_ps(temp0_95, zmm15)
    float temp0_99[0x4] = _mm_mul_ps(temp0_96, temp0_64)
    float temp0_100[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
    float temp0_101[0x4] = _mm_add_ps(temp0_97, temp0_98)
    int64_t var_158_1 = temp0_93[0].q
    float temp0_102[0x4] = _mm_mul_ps(temp0_100, *(rax_3 + 0x49c0))
    _mm_add_ps(_mm_add_ps(temp0_101, temp0_99), temp0_102)
    double var_148
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    float zmm8_1[0x4]
    float zmm13_1[0x4]
    zmm6_1, zmm7_1, zmm8_1, zmm13_1 = sub_14135c750(&var_148, &var_1c8)
    double var_130
    double zmm9_1 = var_130 - var_148
    int64_t var_110
    uint128_t zmm11_1
    zmm11_1.q = var_110 f- temp0_64[0].q
    int64_t zmm14_1 = fconvert.d(_mm_shuffle_ps(zmm13_1, zmm13_1, 0x55)[0])
    double var_140
    zmm9_1 = zmm9_1 + var_140
    zmm11_1.q = zmm11_1.q f+ temp0_64[2].q
    float temp0_106[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xff)
    int64_t var_e8
    zmm8_1 = zx.o(var_e8)
    float temp0_107[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
    int64_t var_d0
    zmm7_1 = zx.o(var_d0)
    float zmm10_1[0x4] = zx.o(0)
    uint128_t zmm12_1
    zmm12_1.q = fconvert.d(temp0_107[0])
    float zmm0_2[0x4] = zx.o(0)
    double zmm4_2 = zmm7_1[0].q
    int64_t zmm15_1 = fconvert.d(temp0_106[0])
    int64_t var_188_1 = zmm12_1.q
    float temp0_108[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
    int64_t var_e0
    zmm6_1 = zx.o(var_e0)
    zmm0_2[0].q = fconvert.d(temp0_108[0])
    double zmm3_1 = zmm9_1 f* zmm15_1
    var_1d8.q = zmm0_2.q
    zmm10_1[0].q = fconvert.d(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xff)[0])
    zmm8_1[0].q = zmm8_1[0].q f* zmm10_1[0].q
    zmm6_1[0].q = zmm6_1[0].q f* zmm10_1[0].q
    zmm4_2 = zmm4_2 f* zmm10_1[0].q f- zmm8_1[0].q
    zmm6_1[0].q = zmm6_1[0].q f+ zmm6_1[0].q
    uint128_t zmm2_2
    zmm2_2.q = zmm11_1.q f* zmm12_1.q
    int64_t var_108
    int64_t var_f0
    zmm12_1.q = var_f0 f- var_108
    zmm6_1[0].q = zmm6_1[0].q f+ zmm4_2 + zmm4_2
    zmm2_2.q = zmm2_2.q f+ zmm2_2.q
    int64_t var_100
    zmm12_1.q = zmm12_1.q f+ var_100
    zmm6_1[0].q = zmm6_1[0].q f+ zmm3_1 + zmm3_1
    float zmm1_2[0x4] = zmm12_1
    zmm1_2[0].q = zmm1_2[0].q f* var_1d8.q
    zmm6_1[0].q = zmm6_1[0].q f+ zmm2_2.q
    zmm2_2.q = zmm7_1.q f+ zmm6_1[0].q
    zmm6_1[0].q = zmm6_1[0].q f* zmm14_1
    zmm1_2[0].q = zmm1_2[0].q f+ zmm1_2[0].q
    zmm6_1[0].q = zmm6_1[0].q f+ zmm1_2[0].q
    zmm1_2 = zx.o(0)
    zmm1_2[0].q = fconvert.d(zmm13_1[0])
    zmm13_1 = zx.o(var_188_1)
    float temp0_110[0x4] = _mm_cvtpd_ps(zmm6_1)
    zmm1_2[0].q = zmm1_2[0].q f+ zmm10_1[0].q
    zmm4_2.d = 1f / temp0_110[0]
    zmm2_2.q = zmm2_2.q f* zmm1_2[0].q
    zmm8_1[0].q = zmm8_1[0].q f* zmm1_2[0].q
    zmm10_1[0].q = zmm10_1[0].q f- zmm14_1
    zmm14_1 = zmm14_1 f- zmm10_1[0].q
    zmm2_2.q = zmm2_2.q f- zmm8_1[0].q
    zmm0_2 = _mm_cvtps_pd(var_178_1.d[0].q)
    zmm10_1[0].q = zmm10_1[0].q f* zmm7_1[0].q
    zmm0_2[0].q = zmm0_2[0].q f+ zmm15_1
    zmm14_1 = zmm14_1 f* zmm8_1[0].q
    zmm10_1[0].q = zmm10_1[0].q f+ zmm6_1[0].q
    zmm0_2[0].q = zmm0_2[0].q f* zmm9_1
    zmm10_1[0].q = zmm10_1[0].q f- zmm6_1[0].q
    zmm2_2.q = zmm2_2.q f+ zmm0_2[0].q
    zmm0_2 = _mm_cvtps_pd(var_168_1.d[0].q)
    zmm10_1[0].q = zmm10_1[0].q f+ zmm14_1
    zmm0_2[0].q = zmm0_2[0].q f+ zmm13_1[0].q
    zmm0_2[0].q = zmm0_2[0].q f* zmm11_1.q
    zmm2_2.q = zmm2_2.q f+ zmm0_2[0].q
    zmm0_2 = _mm_cvtps_pd(var_158_1.d[0].q)
    zmm0_2[0].q = zmm0_2[0].q f+ var_1d8.q
    zmm0_2[0].q = zmm0_2[0].q f* zmm12_1.q
    zmm2_2.q = zmm2_2.q f+ zmm0_2[0].q
    zmm0_2 = var_178_1:4.d
    zmm0_2[0].q = fconvert.d(zmm0_2[0])
    double temp0_114 = _mm_cvtpd_ps(zmm2_2)
    zmm15_1 = zmm15_1 f- zmm0_2[0].q
    zmm0_2 = var_168_1:4.d
    zmm0_2[0].q = fconvert.d(zmm0_2[0])
    zmm13_1[0].q = zmm13_1[0].q f- zmm0_2[0].q
    zmm3_1.d = temp0_114.d f* zmm4_2.d
    zmm0_2 = var_158_1:4.d
    zmm10_1[0].q = zmm10_1[0].q f+ zmm15_1 f* zmm9_1
    zmm0_2[0].q = fconvert.d(zmm0_2[0])
    zmm13_1[0].q = zmm13_1[0].q f* zmm11_1.q
    zmm2_2.q = var_1d8.q f- zmm0_2[0].q
    zmm3_1.d = zmm3_1.d f* zmm3_1.d
    zmm10_1[0].q = zmm10_1[0].q f+ zmm13_1[0].q
    zmm2_2.q = zmm2_2.q f* zmm12_1.q
    zmm10_1[0].q = zmm10_1[0].q f+ zmm2_2.q
    float zmm5_2[0x4] = _mm_cvtpd_ps(zmm10_1)
    zmm5_2[0] = zmm5_2[0] f* zmm4_2.d
    zmm5_2[0] = zmm5_2[0] * zmm5_2[0]
    zmm5_2[0] = zmm5_2[0] f+ zmm3_1.d
    
    if (not(zmm5_2[0] <= 0f))
        zmm5_2 = _mm_sqrt_ss(zmm5_2[0], zmm5_2[0])
    
    zmm5_2[0] = zmm5_2[0] * 8f
    zmm0_2 = 0x3e800000
    zmm0_2[0] = 0.25f - zmm5_2[0]
    bool cond:1_1 = zmm0_2[0] >= 0f
    var_1d8 = zmm0_2[0]
    
    if (not(cond:1_1))
        var_1d8 = 0f

int64_t* var_1f8
var_1f8.d = 0
uint64_t result = sub_1405eb490(arg2[8], &var_1d0, arg1 + 0x210, &var_1d8, var_1f8.d)
__security_check_cookie(rax_1 ^ &var_218)
return result
