// 函数: sub_1421b5d00
// 地址: 0x1421b5d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 0x28)

if ((*(r14 + 0x2c) & 1) == 0 || (*(arg1 + 0xe0) & 1) == 0)
    return 0

void* rcx = *(arg1 + 0x18)
int64_t* rbx = *(arg1 + 0x1d8)
float zmm3[0x4] = *(rcx + 0x1c0)
void* r13 = *(rcx + 0x408)
float temp0[0x4] = _mm_add_ps(zmm3, zmm3)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
float zmm7[0x4] = data_143f4dea0
float temp0_3[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0, temp0, 0x29))
float temp0_4[0x4] = _mm_mul_ps(zmm3, temp0)
uint32_t zmm8[0x4] = data_143f4deb0
float temp0_5[0x4] = _mm_shuffle_ps(temp0, temp0, 0x12)
float temp0_6[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_5)
float zmm1[0x4] = *(rcx + 0x1e0)
float temp0_9[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_10[0x4] = _mm_add_ps(temp0_8, temp0_3)
float temp0_11[0x4] = _mm_sub_ps(temp0_3, temp0_8)
void* rax = *rbx
float temp0_13[0x4] = _mm_add_ps(temp0_6, _mm_shuffle_ps(temp0_4, temp0_4, 1))
float temp0_14[0x4] = _mm_mul_ps(temp0_10, zmm1)
char r15 = *(rax + 0x59)
int128_t* rax_1 = &data_14399f6e0
float temp0_15[0x4] = _mm_mul_ps(temp0_9, temp0_11)
zmm3 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm7, temp0_13), zmm1), zmm8)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, zmm3, 0x32)
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, zmm3, 0), temp0_19, 0x82)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_14, zmm3, 0x31)
float var_148[0x4] = temp0_21
float var_138[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm3, 0x10), temp0_22, 0x88)
float var_128[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, temp0_15, 0x12), zmm3, 0xe8)
zmm1 = *(rcx + 0x1d0)
zmm7[0].q = zmm1 u>> 0x40
float var_118[0x4] = _mm_shuffle_ps(zmm1, zmm7, 0xc4)
r15 &= 1

if (r15 == 0 && (*(rbx + 0x9c) & 1) == 0)
    rax_1 = &var_148

float zmm12[0x4] = *rax_1
float zmm11[0x4] = rax_1[1]
float zmm13[0x4] = rax_1[2]
float zmm14[0x4] = rax_1[3]
float var_198[0x4] = zmm12
float var_188[0x4] = zmm11
float var_178[0x4] = zmm13
float var_168[0x4] = zmm14
float var_108[0x4]
float zmm7_1[0x4]
uint32_t zmm8_1[0x4]
zmm7_1, zmm8_1 = sub_14077e760(&var_108, arg1 + 0x268)
float zmm3_1[0x4] = *(rbx + 0x40)
float temp0_28[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
float temp0_29[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
float temp0_30[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
float temp0_31[0x4] = _mm_mul_ps(zmm3_1, temp0_28)
float temp0_33[0x4] = _mm_mul_ps(temp0_29, _mm_shuffle_ps(temp0_28, temp0_28, 0x29))
float temp0_34[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x12)
float temp0_35[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x1a)
float temp0_36[0x4] = _mm_mul_ps(temp0_30, temp0_34)
float zmm1_1[0x4] = *(rbx + 0x60)
float temp0_38[0x4] = _mm_add_ps(temp0_35, _mm_shuffle_ps(temp0_31, temp0_31, 1))
float temp0_39[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
float zmm4_1[0x4] = *(rbx + 0x50)
float temp0_40[0x4] = _mm_add_ps(temp0_36, temp0_33)
float temp0_41[0x4] = _mm_sub_ps(temp0_33, temp0_36)
float temp0_42[0x4] = _mm_mul_ps(temp0_40, zmm1_1)
float temp0_43[0x4] = _mm_mul_ps(temp0_39, temp0_41)
float temp0_44[0x4] = _mm_sub_ps(zmm7_1, temp0_38)
zmm7_1[0].q = zmm4_1 u>> 0x40
float temp0_45[0x4] = _mm_shuffle_ps(zmm4_1, zmm7_1, 0xc4)
float zmm2_1[0x4] = _mm_and_ps(_mm_mul_ps(temp0_44, zmm1_1), zmm8_1)
float temp0_48[0x4] = _mm_shuffle_ps(temp0_43, zmm2_1, 0x32)
float temp0_50[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_42, zmm2_1, 0), temp0_48, 0x82)
float temp0_51[0x4] = _mm_shuffle_ps(temp0_42, zmm2_1, 0x31)
float temp0_53[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_43, zmm2_1, 0x10), temp0_51, 0x88)
float temp0_55[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_42, temp0_43, 0x12), zmm2_1, 0xe8)
zmm2_1 = var_108
float temp0_56[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_57[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float temp0_58[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_50)
float temp0_60[0x4] = _mm_mul_ps(temp0_58, temp0_55)
float temp0_61[0x4] = _mm_mul_ps(temp0_56, temp0_53)
float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), temp0_45)
float temp0_66[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_61, temp0_59), temp0_60), temp0_63)
float var_f8[0x4]
zmm8_1 = _mm_shuffle_ps(var_f8, var_f8, 0x55)
float temp0_68[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0)
zmm8_1 = _mm_mul_ps(zmm8_1, temp0_53)
float temp0_70[0x4] = _mm_mul_ps(temp0_68, temp0_50)
float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_f8, var_f8, 0xaa), temp0_55)
zmm8_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm8_1, temp0_70), temp0_72), 
    _mm_mul_ps(_mm_shuffle_ps(var_f8, var_f8, 0xff), temp0_45))
float var_e8[0x4]
float temp0_78[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0)
float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_e8, var_e8, 0xaa), temp0_55)
float temp0_81[0x4] = _mm_mul_ps(temp0_78, temp0_50)
float temp0_82[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0x55)
float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_e8, var_e8, 0xff), temp0_45)
float temp0_88[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_82, temp0_53), temp0_81), temp0_80), temp0_84)
float var_d8[0x4]
float temp0_89[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0)
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_d8, var_d8, 0xaa), temp0_55)
float temp0_92[0x4] = _mm_mul_ps(temp0_89, temp0_50)
float temp0_93[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
float temp0_94[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0x55)
float temp0_95[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0x55)
float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_53)
float temp0_97[0x4] = _mm_mul_ps(temp0_93, zmm11)
float temp0_98[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xff)
float temp0_99[0x4] = _mm_add_ps(temp0_96, temp0_92)
float temp0_100[0x4] = _mm_mul_ps(temp0_98, temp0_45)
float temp0_101[0x4] = _mm_mul_ps(temp0_95, zmm11)
float temp0_102[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
float temp0_103[0x4] = _mm_add_ps(temp0_99, temp0_91)
float temp0_104[0x4] = _mm_mul_ps(temp0_102, zmm12)
float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), zmm13)
float temp0_107[0x4] = _mm_add_ps(temp0_97, temp0_104)
float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), zmm14)
float temp0_110[0x4] = _mm_add_ps(temp0_103, temp0_100)
float temp0_111[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0)
float temp0_112[0x4] = _mm_add_ps(temp0_107, temp0_106)
float temp0_113[0x4] = _mm_mul_ps(temp0_111, zmm12)
float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8_1, zmm8_1, 0xaa), zmm13)
float temp0_116[0x4] = _mm_add_ps(temp0_112, temp0_109)
float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0x55), zmm11)
float temp0_120[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8_1, zmm8_1, 0x55), zmm11)
zmm8_1 = _mm_mul_ps(_mm_shuffle_ps(zmm8_1, zmm8_1, 0xff), zmm14)
float temp0_123[0x4] = _mm_add_ps(temp0_120, temp0_113)
float temp0_125[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0), zmm12)
float temp0_126[0x4] = _mm_add_ps(temp0_123, temp0_115)
float temp0_127[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0xaa)
float temp0_128[0x4] = _mm_add_ps(temp0_101, temp0_125)
float temp0_129[0x4] = _mm_mul_ps(temp0_127, zmm13)
float temp0_131[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0xff), zmm14)
_mm_add_ps(temp0_126, zmm8_1)
float temp0_133[0x4] = _mm_add_ps(temp0_128, temp0_129)
float temp0_134[0x4] = _mm_shuffle_ps(temp0_110, temp0_110, 0)
float temp0_135[0x4] = _mm_add_ps(temp0_133, temp0_131)
float temp0_136[0x4] = _mm_mul_ps(temp0_134, zmm12)
float temp0_138[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0xaa), zmm13)
float temp0_139[0x4] = _mm_add_ps(temp0_118, temp0_136)
float temp0_141[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0xff), zmm14)
float temp0_143[0x4] = _mm_add_ps(_mm_add_ps(temp0_139, temp0_138), temp0_141)
void*** result_1 = sub_1421ab380(0x190)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    *(result_1 + 0xc) &= 0xfffffffe
    result_1[3] = 0
    result_1[2].d = 0xffffffff
    *result = &data_1432eeaf0
    result[4] = 0
    result[5].b = 1
    __builtin_memset(&result[6], 0, 0x18)
    __builtin_memset(&result[0xd], 0, 0x20)
    result[0x1c].d = data_143dbb1f8
    *(result + 0xe4) = data_143dbb1fc[0]
    result[0x1d].d = data_143dbb200
    *(result + 0xec) = 0
    result[0x1e].d = data_143dbb1f8
    *(result + 0xf4) = data_143dbb1fc[0]
    result[0x1f].d = data_143dbb200
    *(result + 0xfc) = 0
    result[0x20].d = 0x3f800000
    *(result + 0x104) = 0x3f800000
    *(result + 0x10c) = 0
    *(result + 0x114) = 0
    result[0x26] = 0
    result[0x27].d = 0
    *(result + 0x13c) = 0x3f800000
    *(result + 0x144) = 0
    *(result + 0x14c) = 0x3f800000
    *(result + 0x154) = 0
    *(result + 0x15c) = 0x3f800000
    *(result + 0x164) = 0
    *(result + 0x16c) = 0x3f800000
    result[0x2f].d &= 0xfffffff0
    *(result + 0x17c) = 0
    result[0x30] = 0
    result[0x31] = 0

result[6] = *(arg1 + 0x1d0)
result[7] = *(*(arg1 + 0x1d8) + 0x270)
int64_t* rax_4 = sub_1421b5a10(arg1)
int64_t rdx_1 = *rax_4
result[4] = (*(rdx_1 + 0x280))(rax_4, rdx_1)
int64_t* rax_6
int128_t zmm9_1
rax_6, zmm9_1 = sub_1421b5a10(arg1)
int64_t rdx_2 = *rax_6
int32_t rax_7
rax_7.b = (*(rdx_2 + 0x3f8))(rax_6, rdx_2) u> 1
result[5].b = rax_7.b
result[8] = *(arg1 + 0x1e0)
float var_1d0
float var_1c0
uint64_t* rax_9
float zmm2_2[0x4]
float zmm6_2[0x4]
uint64_t var_1b8

if ((*(r13 + 0xb0) & 2) == 0)
    int128_t* rax_11 = *(arg1 + 0x18) + 0x100
    zmm6_2 = *rax_11
    zmm2_2 = *(rax_11 + 8)
    float zmm5_2[0x4] = *(rax_11 + 4)
    zmm2_2[0] = zmm2_2[0] f+ *(rax_11 + 0x14)
    zmm6_2[0] = zmm6_2[0] f- *(rax_11 + 0xc)
    zmm2_2[0] = zmm2_2[0] f- *(rax_11 + 0x14)
    zmm6_2[0] = zmm6_2[0] f+ *(rax_11 + 0xc)
    zmm5_2[0] = zmm5_2[0] f- rax_11[1].d
    zmm5_2[0] = zmm5_2[0] f+ rax_11[1].d
    var_1c0 = zmm2_2[0]
    var_1d0 = zmm2_2[0]
    var_1b8 = (_mm_unpacklo_ps(zmm6_2, zmm5_2[0].q)).q
    float var_1b0_1 = var_1d0
    float var_1a4_1 = var_1c0
    rax_9 = &var_1b8
    int64_t var_1ac_1 = (_mm_unpacklo_ps(zmm6_2, zmm5_2[0].q)).q
    char var_1a0_1 = 1
else
    rax_9 = sub_140ae2b00(r13 + 0x88, &var_1b8, &var_148)
*(result + 0x48) = *rax_9
result[0xb] = rax_9[2]
int32_t rax_14 = rax_9[3].d
*(result + 0x90) = temp0_116
result[0xc].d = rax_14
*(result + 0xa0) = zmm9_1
*(result + 0xb0) = temp0_135
*(result + 0xc0) = temp0_143
result[0x1a].d = *(*(arg1 + 0x1d8) + 0x94)
*(result + 0xd4) = *(*(arg1 + 0x1d8) + 0x98)
result[0x2f].d ^= (*(*(arg1 + 0x1d8) + 0x9c) u>> 1 ^ result[0x2f].d) & 1
int32_t rcx_14 = result[0x2f].d
int32_t rdx_8 = ((*(*(arg1 + 0x1d8) + 0x9c) u>> 1 ^ rcx_14) & 2) ^ rcx_14
result[0x2f].d = rdx_8
int32_t r8_6 = ((*(*(arg1 + 0x1d8) + 0x9c) u>> 1 ^ rdx_8) & 4) ^ rdx_8
result[0x2f].d = r8_6
result[0x2f].d = ((*(*(arg1 + 0x1d8) + 0x9c) u>> 1 ^ r8_6) & 8) ^ r8_6
uint32_t rax_22 = zx.d(*(**(arg1 + 0x1d8) + 0x5a))
*(result + 0xc) &= 0xfffffffe
result[0x2e].d = rax_22
*(result + 0xc) |= zx.d(arg2)
*(result + 0x174) = *(**(arg1 + 0x1d8) + 0x59) & 1
void* rax_27 = *(arg1 + 0x1d8)
float var_1d8[0x4] = *(*(arg1 + 0x18) + 0x1e0)
char rcx_22 = *(rax_27 + 0x168)

if (rcx_22 u<= 1 || rcx_22 == 6)
    rax_27.b = 1
else
    rax_27.b = 0

float zmm0_3[0x4] = var_1d8[0]
result[0x24].d = zmm0_3[0]

if (rax_27.b == 0)
    zmm0_3 = var_1d8[1]

float zmm7_2[0x4] = 0x3f800000
float zmm1_2[0x4] = zx.o(0)
*(result + 0x124) = zmm0_3[0]
uint32_t rcx_23 = zx.d(*(*(arg1 + 0x1d8) + 0x169))
__builtin_memset(&result[0x26], 0, 0x20)
int32_t var_1c8
float zmm3_2[0x4]

if (rcx_23 != 0)
    int128_t* rdx_9 = &var_198
    
    if (r15 == 0)
        rdx_9 = &data_14399f6e0
    
    zmm7_2 = sub_1421e0780(rcx_23, rdx_9, &var_1d8, &var_1c8)
    int32_t var_1cc_1 = 0x3f800000
    int32_t var_1bc_1 = 0x3f800000
    zmm3_2 = var_1c8.o
    zmm3_2[0] = var_1c8[0]
    zmm0_3 = var_1d8[0]
    float temp0_146[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
    int32_t var_1c4
    temp0_146[0] = var_1c4[0]
    zmm1_2 = var_1d8[1]
    float temp0_147[0x4] = _mm_shuffle_ps(temp0_146, temp0_146, 0xc6)
    temp0_147[0] = var_1c0[0]
    *(result + 0x130) = _mm_shuffle_ps(temp0_147, temp0_147, 0xc9)
    *(result + 0x13c) = 0x3f800000
    zmm3_2 = var_1d8
    zmm3_2[0] = zmm0_3[0]
    float temp0_149[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
    temp0_149[0] = zmm1_2[0]
    float temp0_150[0x4] = _mm_shuffle_ps(temp0_149, temp0_149, 0xc6)
    temp0_150[0] = var_1d0[0]
    float temp0_151[0x4] = _mm_shuffle_ps(temp0_150, temp0_150, 0xc9)
    *(result + 0x140) = temp0_151
    *(result + 0x14c) = 0x3f800000
    var_1d8 = temp0_151

zmm6_2 = zmm7_2
zmm11 = zmm7_2
float zmm15[0x4] = zmm7_2
zmm9_1 = zx.o(0)
int32_t var_1e8
int64_t var_1e0

if (sub_141fe97f0(*(arg1 + 0x1d8) + 0x1f8) != 0)
    var_1e0 = 0
    var_1e8 = 0
    int64_t* rax_30
    rax_30, zmm1_2, zmm7_2, zmm9_1 = sub_141fe56b0(*(arg1 + 0x1d8) + 0x1f8, &var_1d8, zx.o(0), 
        zmm1_2, (*(arg1 + 0x18)).d, nullptr)
    zmm6_2 = *rax_30
    zmm11 = *(rax_30 + 4)
    zmm15 = rax_30[1].d

float zmm8_2[0x4] = zmm7_2

if (sub_141fe97c0(*(arg1 + 0x1d8) + 0x240) != 0)
    zmm0_3, zmm1_2, zmm6_2, zmm7_2 =
        sub_141fe5610(*(arg1 + 0x1d8) + 0x240, zx.o(0), *(arg1 + 0x18), nullptr, var_1e8, var_1e0)
    zmm8_2 = zmm0_3

zmm13 = zmm7_2
zmm14 = zmm7_2
float zmm10[0x4] = zmm7_2

if (sub_141fe97f0(*(arg1 + 0x1d8) + 0x180) != 0)
    var_1e0 = 0
    var_1e8 = 0
    int64_t* rax_33
    rax_33, zmm6_2, zmm7_2, zmm8_2, zmm9_1 = sub_141fe56b0(*(arg1 + 0x1d8) + 0x180, &var_1d8, 
        zx.o(0), zmm1_2, (*(arg1 + 0x18)).d, nullptr)
    zmm13 = *rax_33
    zmm14 = *(rax_33 + 4)
    zmm10 = rax_33[1].d

zmm12 = zmm7_2

if (sub_141fe97c0(*(arg1 + 0x1d8) + 0x1c8) != 0)
    zmm0_3, zmm6_2, zmm7_2 =
        sub_141fe5610(*(arg1 + 0x1d8) + 0x1c8, zx.o(0), *(arg1 + 0x18), nullptr, var_1e8, var_1e0)
    zmm12 = zmm0_3

zmm6_2[0] = zmm6_2[0] * zmm13[0]
zmm11[0] = zmm11[0] * zmm14[0]
float temp0_152[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xe1)
temp0_152[0] = zmm11[0]
zmm10[0] = zmm10[0] * zmm15[0]
float temp0_153[0x4] = _mm_shuffle_ps(temp0_152, temp0_152, 0xc6)
temp0_153[0] = zmm10[0]
zmm8_2[0] = zmm8_2[0] * zmm12[0]
float temp0_154[0x4] = _mm_shuffle_ps(temp0_153, temp0_153, 0x27)
temp0_154[0] = zmm8_2[0]
float temp0_155[0x4] = _mm_shuffle_ps(temp0_154, temp0_154, 0x39)
*(result + 0x150) = temp0_155
void* rax_35 = *(r14 + 0x30)
var_1d8 = temp0_155
*(result + 0x17c) = *(rax_35 + 0xac) & 1
result[0x30].d = *(*(r14 + 0x30) + 0xcc)
void* rax_37 = *(r14 + 0x30)
*(result + 0x184) = *(rax_37 + 0xc0)
*(result + 0x18c) = *(rax_37 + 0xc8)
result[0x25].d = *(arg1 + 0x294)

if (data_143f4d2c4 == 0 && data_143f4d2c8 == 0 && sub_1421beb60() != 0)
    char rax_41 = data_143de5480
    int64_t r14_1 = data_143f4dd68
    int64_t rcx_42
    
    if (rax_41 == 0)
        rcx_42 = 0
    else
        bool cond:1_1 = GetCurrentThreadId() != data_143de5470
        rax_41 = data_143de5480
        rcx_42.b = cond:1_1
    
    zmm8_2 = *(r14_1 + (rcx_42 << 2))
    int64_t r14_2 = data_143f4de98
    int64_t rcx_43
    
    if (rax_41 == 0)
        rcx_43 = 0
    else
        bool cond:2_1 = GetCurrentThreadId() != data_143de5470
        rax_41 = data_143de5480
        rcx_43.b = cond:2_1
    
    zmm6_2 = *(r14_2 + (rcx_43 << 2))
    int64_t r14_3 = data_143f4df70
    int64_t rcx_44
    
    if (rax_41 == 0)
        rcx_44 = 0
    else
        rcx_44.b = GetCurrentThreadId() != data_143de5470
    
    bool cond:4_1 = zmm8_2[0] f<= zmm9_1.d
    int32_t rcx_45 = *(r14_3 + (rcx_44 << 2))
    result[0x21].d = zmm8_2[0]
    *(result + 0x10c) = 0
    zmm0_3 = *(arg1 + 0x27c)
    zmm0_3[0] = zmm0_3[0] f+ *(arg1 + 0x278)
    result[0x22].d = zmm0_3[0]
    *(result + 0x114) = 1
    *(arg1 + 0x27c) = 0
    
    if (not(cond:4_1))
        if ((result[0x2f].b & 8) != 0)
            zmm0_3 = zx.o(0)
            zmm7_2[0] = zmm7_2[0] / zmm8_2[0]
            zmm7_2[0] = zmm7_2[0] f* result[0x22].d
            zmm7_2[0] = zmm7_2[0] + zmm7_2[0]
            zmm7_2[0] = zmm7_2[0] - 0.5f
            zmm1_2 = zx.o(0)
            int32_t rax_48 = int.d(zmm7_2[0]) s>> 1
            *(result + 0x10c) = rax_48
            zmm2_2 = result[0x22].d
            zmm0_3[0] = float.s(rax_48)
            zmm0_3[0] = zmm0_3[0] * zmm8_2[0]
            zmm2_2[0] = zmm2_2[0] - zmm0_3[0]
            result[0x22].d = zmm2_2[0]
            int32_t rax_49 = *(result + 0x10c)
            zmm7_2[0] = zmm7_2[0] * zmm2_2[0]
            zmm1_2[0] = float.s(rax_49)
            zmm1_2[0] = zmm1_2[0] * zmm8_2[0]
            
            if (rax_49 s<= 0 || zmm7_2[0] >= zmm6_2[0])
                zmm7_2[0] = zmm7_2[0] - zmm7_2[0]
                
                if (not(zmm7_2[0] >= zmm6_2[0]))
                    zmm1_2[0] = zmm1_2[0] + zmm2_2[0]
                    *(result + 0x10c) = rax_49 + 1
                    result[0x22] = 0
                    goto label_1421b69aa
                
                if (rax_49 s> 0)
                    zmm6_2[0] = zmm6_2[0] * zmm8_2[0]
                    zmm2_2[0] = zmm2_2[0] - zmm6_2[0]
                    zmm1_2[0] = zmm1_2[0] + zmm6_2[0]
                    result[0x22].d = zmm2_2[0]
                    goto label_1421b69aa
            else
                zmm1_2[0] = zmm1_2[0] + zmm2_2[0]
                result[0x22] = 0
            label_1421b69aa:
                int32_t rax_51 = *(result + 0x10c)
                
                if (rax_51 s> 0)
                    if (rax_51 s<= rcx_45)
                        rcx_45 = rax_51
                    
                    *(result + 0x10c) = rcx_45
                    float temp0_156[0x4] = _mm_cvtepi32_ps(zx.o(rcx_45))
                    zmm1_2[0] = zmm1_2[0] / temp0_156[0]
                    result[0x21].d = zmm1_2[0]
            
            *(arg1 + 0x27c) = result[0x22].d
        else
            result[0x21].d = result[0x22].d
            result[0x22].d = result[0x21].d[0]
            int32_t rcx_46 = *(result + 0x10c)
            *(result + 0x10c) = *(result + 0x114)
            *(result + 0x114) = rcx_46
    
    void* rax_53 = *(arg1 + 0x1d8)
    int32_t var_1cc_2 = 0x3f800000
    zmm3_2 = var_1d8
    var_1c8.q = 0
    zmm1_2 = *(rax_53 + 0x130)
    zmm3_2[0] = (*(rax_53 + 0x12c))[0]
    zmm2_2 = *(rax_53 + 0x134)
    float temp0_157[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
    temp0_157[0] = zmm1_2[0]
    int32_t var_1c0_1 = 0
    float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xc6)
    temp0_158[0] = zmm2_2[0]
    zmm2_2 = *(rax_53 + 0x138)
    float temp0_159[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xc9)
    float temp0_161[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_159, temp0_159, 0xff), var_168)
    float temp0_163[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_159, temp0_159, 0xaa), var_178)
    float temp0_165[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_159, temp0_159, 0x55), var_188)
    float temp0_170[0x4] = _mm_add_ps(_mm_add_ps(temp0_161, temp0_163), 
        _mm_add_ps(temp0_165, 
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_159, temp0_159, 0), var_198)))
    float temp0_171[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0x55)
    float temp0_172[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xaa)
    float temp0_173[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0xe1)
    temp0_173[0] = temp0_171[0]
    float temp0_174[0x4] = _mm_shuffle_ps(temp0_173, temp0_173, 0xc6)
    temp0_174[0] = temp0_172[0]
    float temp0_175[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0x27)
    temp0_175[0] = zmm2_2[0]
    *(result + 0xe0) = _mm_shuffle_ps(temp0_175, temp0_175, 0x39)
    zmm0_3 = *(arg1 + 0x1ac)
    zmm3_2 = *(arg1 + 0x1a8)
    zmm1_2 = *(arg1 + 0x1b0)
    zmm2_2 = *(arg1 + 0x274)
    float temp0_177[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
    temp0_177[0] = zmm0_3[0]
    zmm0_3 = zx.o(result[0x24])
    float temp0_178[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0xc6)
    temp0_178[0] = zmm1_2[0]
    result[0x20] = zmm0_3.q
    float temp0_179[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0x27)
    temp0_179[0] = zmm2_2[0]
    *(result + 0xf0) = _mm_shuffle_ps(temp0_179, temp0_179, 0x39)
    result[0x23].d = *(arg1 + 0x278)
    
    if (&result[0xf] != arg1 + 0x228)
        zmm1_2 = *(result + 0x78)
        *(result + 0x78) = *(arg1 + 0x228)
        *(arg1 + 0x228) = zmm1_2
    
    if (&result[0xd] != arg1 + 0x238)
        zmm1_2 = *(result + 0x68)
        *(result + 0x68) = *(arg1 + 0x238)
        *(arg1 + 0x238) = zmm1_2

int32_t rax_57 = *(arg1 + 0x244)
*(arg1 + 0x240) = 0

if (rax_57 s< 0 && rax_57 != 0)
    sub_140775c70(arg1 + 0x238, 0)

*(arg1 + 0x278) = 0
*(arg1 + 0x1a8) = data_143dbb1f8.q
*(arg1 + 0x1b0) = data_143dbb200
void* rcx_51 = *(arg1 + 0x1e0)

if (*(rcx_51 + 0x210) != 0)
    sub_1421ba9d0(rcx_51, arg1 + 0x1e8, *(*(arg1 + 0x1d8) + 0x270))

return result
