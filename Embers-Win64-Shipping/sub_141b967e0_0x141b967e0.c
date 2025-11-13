// 函数: sub_141b967e0
// 地址: 0x141b967e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3c8
int64_t rax_1 = __security_cookie ^ &var_3c8
int32_t var_1b8 = 0x42c80000
int64_t* rcx = *(arg1 + 0x648)
int128_t var_218
__builtin_memset(&var_218, 0, 0x18)
uint128_t zmm0 = data_143dbb1e0
int32_t var_fc = 0xbf800000
uint128_t var_1f0 = zmm0
int32_t var_200 = 0xffffffff
uint128_t var_1e0 = zmm0
int64_t var_1f8 = 0
zmm0 = data_14399f5c0
int64_t var_1c0 = 0
int64_t var_1b0
__builtin_memset(&var_1b0, 0, 0x2c)
uint128_t var_1d0 = zmm0
int32_t var_100 = 0x3f800000
int32_t var_184 = 0x80
int32_t var_180 = 0xffffffff
int32_t var_17c = 0
int64_t var_170 = 0
int32_t var_168 = 0
char var_110 = 0
int64_t var_108 = -1
int64_t var_f8 = 0
int32_t var_f0 = 0
int16_t var_ec = 0x100
int32_t var_e8 = 0x42b40000
int32_t var_e4 = 0x42b40000
int64_t var_3a0
(*(*rcx + 0x18))(0x3f800000, &var_3a0)
int32_t rax_3 = var_3a0.d
int32_t rcx_1 = var_3a0:4.d
uint128_t zmm1
zmm1.d = (*(arg1 + 0x61c)).d f* 0.0174532924f
int32_t var_230 = rax_3
int32_t var_220 = rax_3
int32_t rax_4 = *(arg1 + 0x610)
uint64_t var_2c8 = *(arg1 + 0x608)
int64_t var_238 = 0
int32_t var_22c = rcx_1
int64_t var_228 = 0
int32_t var_21c = rcx_1
int32_t var_2c0 = rax_4
float zmm0_1[0x4]
int32_t zmm6
zmm0_1, zmm6 = __libm_sse2_sincosf_(zmm1)
float zmm1_1[0x4] = *(arg1 + 0x614)
float var_398[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
zmm1_1[0] = zmm1_1[0] f* zmm6
int32_t var_2f8 = 0
float var_3a8 = (zmm0_1 ^ 0x80000000)[0]
int64_t var_2ec = 0
int32_t var_2dc = 0
float zmm0_2[0x4]
int32_t zmm6_1
int128_t zmm7
int512_t zmm9
int512_t zmm12
int512_t zmm13
zmm0_2, zmm6_1, zmm7, zmm9, zmm12, zmm13 = __libm_sse2_sincosf_(zmm1_1)
zmm12.o = data_142d4cc20
_mm_shuffle_ps(zmm0_2, zmm0_2, 1)
int32_t var_384 = 0
zmm9.o = zmm0_2
int32_t var_37c = 0
float zmm1_2[0x4] = *(arg1 + 0x618)
zmm13.o = data_142d3f660
zmm1_2[0] = zmm1_2[0] f* zmm6_1
int32_t var_364 = 0
int32_t var_35c = 0
float zmm0_3[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_1[0x4]
float zmm10_1[0x4]
float zmm12_1[0x4]
float zmm13_1[0x4]
int32_t zmm15_1
zmm0_3, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm12_1, zmm13_1, zmm15_1 = __libm_sse2_sincosf_(zmm1_2)
float zmm1_3[0x4] = zmm0_3 ^ zmm7_1
zmm7_1 = data_142d4cc30
float temp0_2[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 1)
float var_388[0x4]
var_388[0] = zmm10_1[0]
int64_t var_340 = 0
float var_368[0x4]
var_368[0] = zmm9_1[0]
float var_348[0x4]
var_348[0] = temp0_2[0]
float temp0_3[0x4] = _mm_shuffle_ps(var_388, var_388, 0xd2)
float temp0_4[0x4] = _mm_shuffle_ps(var_348, var_348, 0xe1)
temp0_3[0] = zmm8_1[0]
temp0_4[0] = zmm1_3[0]
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
float temp0_7[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x55)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xaa)
float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xff), zmm13_1)
int64_t var_330 = 0
float temp0_13[0x4] = _mm_mul_ps(temp0_9, temp0_5)
float temp0_14[0x4] = _mm_mul_ps(temp0_8, zmm12_1)
float temp0_15[0x4] = _mm_shuffle_ps(var_368, var_368, 0xd2)
float temp0_16[0x4] = _mm_mul_ps(temp0_7, zmm12_1)
temp0_15[0] = zmm10_1[0]
float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_13)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc9)
float temp0_21[0x4] = _mm_add_ps(_mm_add_ps(temp0_17, _mm_mul_ps(temp0_10, temp0_18)), temp0_12)
float var_338[0x4]
var_338[0] = zmm0_3[0]
float temp0_22[0x4] = _mm_shuffle_ps(var_338, var_338, 0xe1)
temp0_22[0] = temp0_2[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xe1)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)
float temp0_27[0x4] = _mm_mul_ps(temp0_25, temp0_5)
float temp0_28[0x4] = _mm_mul_ps(temp0_26, temp0_18)
float temp0_29[0x4] = _mm_mul_ps(temp0_24, zmm12_1)
float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xff), zmm13_1)
float temp0_32[0x4] = _mm_add_ps(temp0_29, temp0_27)
float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7_1, zmm7_1, 0), temp0_5)
float temp0_35[0x4] = _mm_add_ps(temp0_32, temp0_28)
float temp0_36[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xaa)
float temp0_37[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xff)
float temp0_38[0x4] = _mm_add_ps(temp0_16, temp0_34)
float temp0_39[0x4] = _mm_mul_ps(temp0_37, zmm13_1)
float temp0_40[0x4] = _mm_mul_ps(temp0_36, temp0_18)
float temp0_41[0x4] = _mm_add_ps(temp0_35, temp0_31)
float temp0_43[0x4] = _mm_add_ps(_mm_add_ps(temp0_38, temp0_40), temp0_39)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0x55), zmm12_1)
float zmm3[0x4] = var_2f8.o
float zmm2[0x4] = var_2ec:4.o
float temp0_46[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0)
float temp0_47[0x4] = _mm_shuffle_ps(zmm13_1, zmm13_1, 0xaa)
float temp0_48[0x4] = _mm_mul_ps(temp0_46, temp0_5)
float zmm6_2[0x4] = data_142d4cc00
float temp0_49[0x4] = _mm_mul_ps(temp0_47, temp0_18)
float zmm5[0x4] = var_398
float temp0_50[0x4] = _mm_add_ps(temp0_45, temp0_48)
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xff), zmm13_1)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0)
float temp0_54[0x4] = _mm_add_ps(temp0_50, temp0_49)
float temp0_55[0x4] = _mm_mul_ps(temp0_53, zmm6_2)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
float temp0_57[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
float temp0_58[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x55)
float temp0_59[0x4] = _mm_add_ps(temp0_54, temp0_52)
float temp0_60[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0_60[0] = zmm5[0]
float temp0_61[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
float temp0_62[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc6)
float temp0_63[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0x55)
temp0_62[0] = zmm15_1
float temp0_64[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xc9)
float temp0_65[0x4] = _mm_mul_ps(temp0_56, temp0_64)
float temp0_66[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
float temp0_67[0x4] = _mm_mul_ps(temp0_58, temp0_64)
float temp0_68[0x4] = _mm_add_ps(temp0_65, temp0_55)
float temp0_69[0x4] = _mm_mul_ps(temp0_63, temp0_64)
temp0_61[0] = var_3a8[0]
float temp0_70[0x4] = _mm_mul_ps(temp0_66, temp0_64)
float temp0_71[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xc6)
float temp0_72[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0)
temp0_71[0] = zmm5[0]
zmm5 = data_142d3f660
float temp0_73[0x4] = _mm_mul_ps(temp0_72, zmm6_2)
float temp0_74[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0xc9)
float temp0_75[0x4] = _mm_mul_ps(temp0_57, temp0_74)
float temp0_76[0x4] = _mm_add_ps(temp0_67, temp0_73)
float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xff), zmm5)
float temp0_79[0x4] = _mm_add_ps(temp0_68, temp0_75)
float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0), zmm6_2)
float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0xaa), temp0_74)
float temp0_84[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xff)
float temp0_85[0x4] = _mm_add_ps(temp0_79, temp0_78)
float temp0_86[0x4] = _mm_add_ps(temp0_69, temp0_81)
float temp0_87[0x4] = _mm_mul_ps(temp0_84, zmm5)
float temp0_88[0x4] = _mm_add_ps(temp0_76, temp0_83)
float temp0_89[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0)
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xaa), temp0_74)
float temp0_92[0x4] = _mm_mul_ps(temp0_89, zmm6_2)
float temp0_93[0x4] = _mm_add_ps(temp0_88, temp0_87)
float temp0_94[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xff)
float temp0_95[0x4] = _mm_add_ps(temp0_86, temp0_91)
float temp0_96[0x4] = _mm_mul_ps(temp0_94, zmm5)
float temp0_97[0x4] = _mm_add_ps(temp0_70, temp0_92)
float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_74)
float temp0_100[0x4] = _mm_add_ps(temp0_95, temp0_96)
float temp0_101[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
float temp0_102[0x4] = _mm_add_ps(temp0_97, temp0_99)
zmm6_2 = data_142d4cc30
zmm8_1 = data_142d3f660
float temp0_103[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0)
float temp0_104[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)
float temp0_105[0x4] = _mm_mul_ps(temp0_103, zmm6_2)
float temp0_106[0x4] = _mm_shuffle_ps(temp0_93, temp0_93, 0x55)
float temp0_107[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0x55)
float temp0_108[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0x55)
float temp0_109[0x4] = _mm_mul_ps(temp0_101, zmm5)
zmm5 = data_142d4cc00
float temp0_110[0x4] = _mm_mul_ps(temp0_108, zmm5)
float temp0_111[0x4] = _mm_add_ps(temp0_102, temp0_109)
float temp0_112[0x4] = _mm_mul_ps(temp0_106, zmm5)
zmm7_1 = data_142d4cc20
float temp0_113[0x4] = _mm_add_ps(temp0_110, temp0_105)
float temp0_114[0x4] = _mm_mul_ps(temp0_104, zmm7_1)
float temp0_115[0x4] = _mm_mul_ps(temp0_107, zmm5)
float temp0_116[0x4] = _mm_shuffle_ps(temp0_93, temp0_93, 0)
float temp0_117[0x4] = _mm_add_ps(temp0_113, temp0_114)
float temp0_118[0x4] = _mm_mul_ps(temp0_116, zmm6_2)
float temp0_119[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0x55)
float temp0_121[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_93, temp0_93, 0xaa), zmm7_1)
float temp0_122[0x4] = _mm_add_ps(temp0_112, temp0_118)
float temp0_123[0x4] = _mm_mul_ps(temp0_119, zmm5)
float temp0_124[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xff)
float temp0_126[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_100, temp0_100, 0), zmm6_2)
float temp0_127[0x4] = _mm_add_ps(temp0_122, temp0_121)
float temp0_128[0x4] = _mm_shuffle_ps(temp0_93, temp0_93, 0xff)
float temp0_129[0x4] = _mm_mul_ps(temp0_124, zmm8_1)
float temp0_130[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0xaa)
float temp0_131[0x4] = _mm_add_ps(temp0_115, temp0_126)
float temp0_132[0x4] = _mm_mul_ps(temp0_130, zmm7_1)
float temp0_133[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0)
float temp0_134[0x4] = _mm_add_ps(temp0_117, temp0_129)
float temp0_135[0x4] = _mm_mul_ps(temp0_133, zmm6_2)
float temp0_136[0x4] = _mm_add_ps(temp0_131, temp0_132)
float temp0_137[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0xff)
float temp0_138[0x4] = _mm_mul_ps(temp0_128, zmm8_1)
float temp0_139[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0xaa)
float temp0_140[0x4] = _mm_add_ps(temp0_123, temp0_135)
float temp0_141[0x4] = _mm_mul_ps(temp0_139, zmm7_1)
float temp0_142[0x4] = _mm_add_ps(temp0_127, temp0_138)
float temp0_143[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0xff)
float temp0_144[0x4] = _mm_mul_ps(temp0_137, zmm8_1)
float temp0_145[0x4] = _mm_add_ps(temp0_140, temp0_141)
float temp0_146[0x4] = _mm_mul_ps(temp0_143, zmm8_1)
float var_2b8[0x4] = temp0_134
float var_2a8[0x4] = temp0_142
float var_298[0x4] = _mm_add_ps(temp0_136, temp0_144)
float var_288[0x4] = _mm_add_ps(temp0_145, temp0_146)
int64_t* rax_5 = sub_142531230()

if (rax_5[0x23] == 0)
    int64_t rdx_1 = *rax_5
    (*(rdx_1 + 0x390))(rax_5, rdx_1)

sub_141e96e10(arg1 + 0x20, *(rax_5[0x23] + 0x94), *(arg1 + 0x648), &var_2c8)
var_218:8.q = *(arg1 + 0x658)
void* var_1f8_1 = arg1 + 0x10
var_218.q = arg2
int128_t var_1f0_1 = *(arg1 + 0x5f0)
int64_t* rax_9 = j_sub_140a82f30(0x15a0)
int64_t* result

if (rax_9 == 0)
    result = nullptr
else
    result = sub_1422d8af0(rax_9, &var_2c8)

int64_t r14 = sx.q(arg2[1].d)
int32_t rax_11 = (r14 + 1).d
arg2[1].d = rax_11

if (rax_11 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (r14 << 3)) = result
var_398[0].q = *(arg1 + 0x608)
var_398[2] = *(arg1 + 0x610)
sub_1422f5770(result, &var_398)
sub_1422e2840(result)
void var_160
sub_1413c3330(&var_160)
int32_t var_168_1 = 0

if (var_170 != 0)
    sub_140a74f90(var_170)

int64_t var_1a8
var_1a8.d = 0
int32_t var_180_1 = 0xffffffff
int32_t var_17c_1 = 0
int64_t var_1a0
sub_14059a8e0(&var_1a0, 0)
int64_t var_190

if (var_190 != 0)
    sub_140a74f90(var_190)

int64_t rcx_13 = var_1b0

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

__security_check_cookie(rax_1 ^ &var_3c8)
return result
