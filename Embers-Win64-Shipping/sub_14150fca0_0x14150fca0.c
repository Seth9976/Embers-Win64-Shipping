// 函数: sub_14150fca0
// 地址: 0x14150fca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c18
int64_t rax_1 = __security_cookie ^ &var_c18
int64_t var_7d8 = 0xffffffff
int32_t var_7b4
int32_t var_7b4_1 = (var_7b4 & 0xfffffff8) | 0x18
int128_t var_7e8 = zx.o(0)
int32_t var_7d0 = 0xffffffff
int64_t var_7cc
__builtin_memset(&var_7cc, 0, 0x14)
int32_t var_7b8 = 0x3f800000
int64_t var_628
sub_1422d9ba0(&var_628, &var_7e8)
int64_t var_4b0 = 0
uint128_t var_470 = data_14399f5c0
int64_t* var_4b8 = &var_628
int32_t var_458 = 0x42c80000
float zmm1[0x4] = arg8[2]
zmm1[0] = zmm1[0] f- *arg8
int32_t var_39c = 0xbf800000
int64_t var_4a8 = 0
int32_t var_4a0 = 0xffffffff
int64_t var_498 = 0
zmm1[0] = zmm1[0] + zmm1[0]
int64_t var_460 = 0
int64_t var_450
__builtin_memset(&var_450, 0, 0x2c)
zmm1[0] = zmm1[0] + 0.5f
int32_t var_424 = 0x80
int32_t var_420 = 0xffffffff
int32_t var_41c = 0
int32_t rdx_1 = int.d(zmm1[0])
int64_t var_410 = 0
int32_t var_408 = 0
char var_3b0 = 0
int64_t var_3a8 = -1
int32_t var_3a0 = 0x3f800000
int64_t var_398 = 0
zmm1 = arg8[3]
zmm1[0] = zmm1[0] f- arg8[1]
int32_t rdx_2 = rdx_1 s>> 1
int32_t var_bd0 = rdx_2
int32_t var_390 = 0
int16_t var_38c = 0x100
zmm1[0] = zmm1[0] + zmm1[0]
int32_t var_388 = 0x42b40000
int32_t var_384 = 0x42b40000
float zmm12[0x4] = *arg13
zmm1[0] = zmm1[0] + 0.5f
float zmm6[0x4] = arg13[2]
int64_t var_b68 = 0
float temp0[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
int32_t rax_7 = int.d(zmm1[0])
int32_t var_4d4 = 0
int32_t var_4c4 = 0
int32_t var_4d8 = 0
int32_t var_4d0 = rdx_2
int32_t var_4c8 = 0
float temp0_1[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
float zmm8[0x4] = *arg15
float zmm11[0x4] = *(arg15 + 4)
zmm8[0] = zmm8[0] f+ *(arg15 + 8)
int32_t rax_8 = rax_7 s>> 1
zmm11[0] = zmm11[0] f+ *(arg15 + 0xc)
float temp0_2[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
int32_t var_bcc = rax_8
int64_t rdi = var_bd0.q
zmm8[0] = zmm8[0] * 0.5f
zmm11[0] = zmm11[0] * 0.5f
uint32_t rax_10 = (rdi u>> 0x20).d
uint32_t var_4cc = rax_10
float temp0_6[0x4] =
    _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, 0), _mm_unpacklo_ps(zmm11, 0)[0].q), zmm6)
int32_t var_4c0 = rdx_2
uint32_t var_4bc = rax_10
float var_738[0x4] = zmm6
uint128_t zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xc9), temp0)
float temp0_11[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xd2), temp0_1), zmm0)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
zmm0 = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0)
float temp0_16[0x4] = _mm_mul_ps(temp0_14, temp0_1)
float temp0_17[0x4] = _mm_mul_ps(temp0_12, temp0_2)
float temp0_20[0x4] = _mm_add_ps(_mm_sub_ps(temp0_16, zmm0), _mm_add_ps(temp0_17, temp0_6))
zmm1 = data_142d4cc30
float temp0_21[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), temp0)
float temp0_24[0x4] = __addps_xmmps_memps(temp0_20, arg13[1])
float var_748[0x4] = temp0_24
float temp0_26[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_21, temp0_1), zmm0)
float temp0_27[0x4] = _mm_add_ps(temp0_26, temp0_26)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xd2)
zmm0 = _mm_shuffle_ps(temp0_27, temp0_27, 0xc9)
float temp0_30[0x4] = _mm_mul_ps(temp0_28, temp0_1)
zmm0 = _mm_mul_ps(zmm0, temp0)
float temp0_32[0x4] = _mm_mul_ps(temp0_27, temp0_2)
float temp0_33[0x4] = _mm_sub_ps(temp0_30, zmm0)
float temp0_34[0x4] = _mm_add_ps(temp0_32, zmm1)
float temp0_35[0x4] = _mm_mul_ps(data_142d4cc00, zmm6)
zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
uint128_t var_8d8 = zmm0
float temp0_37[0x4] = _mm_add_ps(temp0_33, temp0_34)
float var_778[0x4] = temp0_37
temp0_37[0] = temp0_37[0] f* zmm0.d
float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x55)
temp0_38[0] = temp0_38[0] f* zmm0.d
float temp0_39[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xaa)
temp0_39[0] = temp0_39[0] f* zmm0.d
zmm0.d = temp0_24.d f+ temp0_37[0]
float temp0_40[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
temp0_40[0] = temp0_40[0] + temp0_38[0]
float temp0_41[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa)
temp0_41[0] = temp0_41[0] + temp0_39[0]
float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xd2), temp0_1)
uint64_t var_568 = (_mm_unpacklo_ps(zmm0, temp0_40[0].q)).q
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xc9), temp0)
float var_560 = temp0_41[0]
float temp0_47[0x4] = _mm_sub_ps(temp0_43, zmm0)
float temp0_48[0x4] = _mm_add_ps(temp0_47, temp0_47)
float temp0_49[0x4] = _mm_mul_ps(temp0_2, temp0_48)
float temp0_50[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xd2)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xc9), temp0)
float temp0_53[0x4] = _mm_add_ps(temp0_49, temp0_35)
float temp0_56[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_50, temp0_1), zmm0), temp0_53)
float var_768[0x4] = temp0_56
zmm0.d = temp0_56.d f* temp0_56[0]
float temp0_57[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
temp0_57[0] = temp0_57[0] * temp0_57[0]
float temp0_58[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xaa)
temp0_58[0] = temp0_58[0] * temp0_58[0]
temp0_57[0] = temp0_57[0] f+ zmm0.d
zmm0.d = (*(arg15 + 8)).d f- zmm8[0]
temp0_57[0] = temp0_57[0] + temp0_58[0]
float temp0_59[0x4] = _mm_mul_ps(data_142d4cc20, zmm6)
float temp0_60[0x4] = _mm_sqrt_ss(temp0_57[0], temp0_57[0])
temp0_60[0] = temp0_60[0] f* zmm0.d
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xc9), temp0)
temp0_60[0] = temp0_60[0] * 0.5f
float var_ba0 = temp0_60[0]
float temp0_65[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xd2), temp0_1), zmm0)
float temp0_66[0x4] = _mm_add_ps(temp0_65, temp0_65)
float temp0_67[0x4] = _mm_mul_ps(temp0_2, temp0_66)
float temp0_68[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xd2)
zmm0 = _mm_shuffle_ps(temp0_66, temp0_66, 0xc9)
float temp0_70[0x4] = _mm_mul_ps(temp0_68, temp0_1)
zmm0 = _mm_mul_ps(zmm0, temp0)
float temp0_72[0x4] = _mm_add_ps(temp0_67, temp0_59)
float temp0_73[0x4] = _mm_sub_ps(temp0_70, zmm0)
float zmm10[0x4] = data_142d4cc00
float temp0_74[0x4] = _mm_add_ps(temp0_73, temp0_72)
float zmm9[0x4] = data_142f79470
float var_8c8[0x4] = zmm12
int128_t var_588 = zx.o(0)
int128_t var_728
__builtin_memcpy(&var_728, 
    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xbf\x"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\xbf\x00\x00\x00\x00\x00"
"00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
    0x40)
float var_758[0x4] = temp0_74
zmm0.d = temp0_74.d f* temp0_74[0]
float temp0_75[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0x55)
temp0_75[0] = temp0_75[0] * temp0_75[0]
float temp0_76[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xaa)
temp0_76[0] = temp0_76[0] * temp0_76[0]
temp0_75[0] = temp0_75[0] f+ zmm0.d
zmm0.d = (*(arg15 + 0xc)).d f- zmm11[0]
zmm11 = data_142f794a0
temp0_75[0] = temp0_75[0] + temp0_76[0]
float temp0_77[0x4] = _mm_sqrt_ss(temp0_75[0], temp0_75[0])
temp0_77[0] = temp0_77[0] f* zmm0.d
zmm0 = _mm_shuffle_ps(zmm12, zmm12, 0x55) ^ 0x80000000
temp0_77[0] = temp0_77[0] * 0.5f
float zmm13[0x4] = zmm12 ^ 0x80000000
float temp0_79[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xe1)
temp0_79[0] = zmm0.d
var_bd0 = temp0_77[0]
float temp0_80[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0xc6)
zmm1 = _mm_shuffle_ps(zmm12, zmm12, 0xaa) ^ 0x80000000
float temp0_82[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
temp0_80[0] = zmm1[0]
float temp0_83[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0x27)
temp0_83[0] = temp0_82[0]
zmm12 = data_142d3f660
float temp0_84[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0x39)
float temp0_85[0x4] = _mm_add_ps(temp0_84, temp0_84)
float var_598[0x4] = temp0_84
zmm0 = _mm_shuffle_ps(temp0_84, temp0_84, 4)
float var_b88[0x4] = temp0_85
float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_85, temp0_85, 0x29), zmm0)
float temp0_89[0x4] = _mm_mul_ps(temp0_85, temp0_84)
zmm0 = _mm_shuffle_ps(temp0_84, temp0_84, 0xff)
float temp0_91[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0x12)
float zmm3[0x4] = data_143eef8f0
float temp0_92[0x4] = _mm_mul_ps(temp0_91, zmm0)
zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0x1a), _mm_shuffle_ps(temp0_89, temp0_89, 1))
float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_88)
float temp0_97[0x4] = _mm_sub_ps(temp0_88, temp0_92)
float temp0_98[0x4] = _mm_sub_ps(zmm3, zmm0)
float var_b08[0x4] = temp0_96
zmm1 = __andps_xmmxud_memxud(temp0_98, data_143eef900)
float temp0_102[0x4] =
    _mm_shuffle_ps(_mm_shuffle_ps(temp0_96, zmm1, 0), _mm_shuffle_ps(temp0_97, zmm1, 0x32), 0x82)
float var_6e8[0x4] = temp0_102
float temp0_103[0x4] = _mm_shuffle_ps(temp0_97, zmm1, 0x10)
float temp0_104[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0x55)
float temp0_106[0x4] = _mm_shuffle_ps(temp0_103, _mm_shuffle_ps(temp0_96, zmm1, 0x31), 0x88)
zmm0 = _mm_shuffle_ps(temp0_96, temp0_97, 0x12)
uint128_t var_ae8 = zmm0
float temp0_108[0x4] = _mm_shuffle_ps(zmm0, zmm1, 0xe8)
zmm0 = _mm_shuffle_ps(temp0_102, temp0_102, 0)
float temp0_110[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0xaa)
zmm0 = _mm_mul_ps(zmm0, zmm10)
float temp0_112[0x4] = _mm_mul_ps(temp0_110, zmm11)
float temp0_113[0x4] = _mm_shuffle_ps(temp0_106, temp0_106, 0x55)
float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xff), zmm12)
float temp0_116[0x4] = _mm_mul_ps(temp0_104, zmm9)
float temp0_117[0x4] = _mm_mul_ps(temp0_113, zmm9)
zmm3[0].q = zx.o(0) u>> 0x40
float temp0_118[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
float temp0_119[0x4] = _mm_add_ps(temp0_116, zmm0)
float var_6d8[0x4] = temp0_106
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_106, temp0_106, 0), zmm10)
float temp0_122[0x4] = _mm_add_ps(temp0_119, temp0_112)
float temp0_124[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_108, temp0_108, 0x55), zmm9)
float temp0_125[0x4] = _mm_shuffle_ps(temp0_106, temp0_106, 0xaa)
float temp0_126[0x4] = _mm_add_ps(temp0_117, zmm0)
float temp0_127[0x4] = _mm_mul_ps(temp0_125, zmm11)
float temp0_128[0x4] = _mm_add_ps(temp0_122, temp0_115)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_108, temp0_108, 0), zmm10)
float temp0_131[0x4] = _mm_add_ps(temp0_126, temp0_127)
float temp0_133[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0x55), zmm9)
float temp0_134[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xaa)
float temp0_135[0x4] = _mm_add_ps(temp0_124, zmm0)
float temp0_136[0x4] = _mm_mul_ps(temp0_134, zmm11)
float var_6c8[0x4] = temp0_108
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0), zmm10)
float temp0_139[0x4] = _mm_add_ps(temp0_135, temp0_136)
float var_6b8[0x4] = temp0_118
float temp0_140[0x4] = _mm_shuffle_ps(temp0_106, temp0_106, 0xff)
float temp0_141[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0xaa)
float temp0_142[0x4] = _mm_add_ps(temp0_133, zmm0)
float temp0_143[0x4] = _mm_mul_ps(temp0_140, zmm12)
zmm0 = var_bd0
float temp0_144[0x4] = _mm_mul_ps(temp0_141, zmm11)
float temp0_145[0x4] = _mm_add_ps(temp0_131, temp0_143)
float temp0_146[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xff)
float temp0_147[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0xff)
float zmm4[0x4] = 0x3f800000
float temp0_148[0x4] = _mm_mul_ps(temp0_146, zmm12)
float temp0_149[0x4] = _mm_add_ps(temp0_142, temp0_144)
float temp0_150[0x4] = _mm_mul_ps(temp0_147, zmm12)
float var_6a8[0x4] = temp0_128
float temp0_151[0x4] = _mm_add_ps(temp0_139, temp0_148)
float var_698[0x4] = temp0_145
float var_558[0x4] = temp0_128
float temp0_152[0x4] = _mm_add_ps(temp0_149, temp0_150)
float var_548[0x4] = temp0_145
float var_688[0x4] = temp0_151
float var_538[0x4] = temp0_151
float var_678[0x4] = temp0_152
float var_528[0x4] = temp0_152

if (not(zmm0.d f== 0f))
    zmm4[0] = 1f f/ zmm0.d

float zmm7[0x4] = var_ba0
zmm1 = 0x3f800000

if (not(zmm7[0] == 0f))
    zmm1[0] = 1f / zmm7[0]

float zmm2[0x4] = 0xbf000000
zmm8 = 0x3f800000
zmm2[0] = -0.5f f/ var_8d8.d
int64_t var_8a4 = 0
int32_t var_87c = 0
int64_t var_890 = 0
zmm3 = data_142d5beb0
zmm0.d = zmm1[0]
zmm1 = 0:4.o
uint128_t var_8a8_1 = zmm0
uint128_t var_518 = zmm0
zmm0 = 0.o
_mm_shuffle_ps(zmm0, zmm0, 0xd2)
zmm0.d = zmm2[0]
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
int64_t var_888
var_888.o = zmm0
uint128_t var_4f8 = zmm0
zmm6 = *(arg14 + 8)
zmm0 = _mm_cvtepi32_ps(zx.o(rdx_2))
float temp0_156[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
zmm7[0] = zmm7[0] f/ zmm0.d
zmm0 = *(arg14 + 0x14)
temp0_156[0] = zmm4[0]
zmm0.d = zmm0.d f- zmm6[0]
float temp0_157[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xe1)
float var_878[0x4] = zmm3
int64_t var_89c
var_89c:4.o = temp0_157
float var_508[0x4] = temp0_157
float var_4e8[0x4] = zmm3
zmm0 = _mm_max_ss(zmm0.d, 0x3f800000)
_mm_cvtepi32_ps(zx.o(arg16))
zmm8[0] = 1f f/ zmm0.d
zmm0 = data_14399f5e0
zmm6[0] = zmm6[0] * zmm8[0]
uint128_t var_490 = zmm0
data_142d3f780
uint128_t var_480 = data_14399f5c0
int64_t* rax_14 = j_sub_140a82f30(0x5240)
int64_t* r14

if (rax_14 == 0)
    r14 = nullptr
else
    r14 = sub_141411c10(rax_14, &var_568)

int32_t var_620
int64_t rbx_1 = sx.q(var_620)
int32_t rax_16 = (rbx_1 + 1).d
int32_t var_620_1 = rax_16
int32_t var_61c

if (rax_16 s> var_61c)
    sub_1405a4d70(&var_628)

*(var_628 + (rbx_1 << 3)) = r14
r14[0x2b3].d = r14[0x4d].d
*(r14 + 0x159c) = *(r14 + 0x26c)
r14[0x2b4].d = r14[0x4e].d
*(r14 + 0x15a4) = *(r14 + 0x274)
var_ba0.q = &data_143ec4c60
void* rax_18 = j_sub_140a82f30(0xfc0)
void* const rbx_2

if (rax_18 == 0)
    rbx_2 = nullptr
else
    rbx_2 = sub_1422db070(rax_18)

void** r12 = &r14[0x2b6]
var_bd0.q = rbx_2
void** var_b68_1 = r12

if (r12 != &var_bd0)
    void* rcx_11 = *r12
    *r12 = rbx_2
    rbx_2 = nullptr
    var_bd0.q = 0
    j_sub_140a74f90(rcx_11)

j_sub_140a74f90(rbx_2)
int32_t zmm6_1
int32_t zmm7_1
int32_t zmm8_1
int32_t zmm10_1
float zmm13_1[0x4]
int32_t zmm14
float zmm15_1[0x4]
zmm6_1, zmm7_1, zmm8_1, zmm10_1, zmm13_1, zmm14, zmm15_1 =
    sub_14142a220(r14, var_ba0.q, &r14[0x50], &r14[0x932], nullptr, 0, *r12)
float zmm3_1[0x4] = data_143eef8f0
void* rax_21 = *r12
float temp0_160[0x4] = __mulps_xmmps_memps(zmm13_1, var_b88)
var_b88[1] = 0
float zmm4_1[0x4] = var_b08
var_b88[3] = 0x3f800000
float zmm1_1[0x4] = __andps_xmmxud_memxud(
    _mm_sub_ps(zmm3_1, 
        _mm_add_ps(_mm_shuffle_ps(temp0_160, temp0_160, 0x1a), 
            _mm_shuffle_ps(temp0_160, temp0_160, 1))), 
    data_143eef900)
float temp0_166[0x4] = _mm_shuffle_ps(zmm15_1, zmm1_1, 0x32)
float temp0_167[0x4] = _mm_shuffle_ps(zmm4_1, zmm1_1, 0x31)
float temp0_169[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, zmm1_1, 0), temp0_166, 0x82)
*(rax_21 + 0xd10) = temp0_169
zmm3_1[0].q = zx.o(0) u>> 0x40
float temp0_170[0x4] = _mm_shuffle_ps(zx.o(0), zmm3_1, 0xc4)
float var_638[0x4] = temp0_170
float temp0_172[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm15_1, zmm1_1, 0x10), temp0_167, 0x88)
zmm4_1 = var_ae8
*(rax_21 + 0xd20) = temp0_172
float temp0_173[0x4] = _mm_shuffle_ps(zmm4_1, zmm1_1, 0xe8)
*(rax_21 + 0xd30) = temp0_173
*(rax_21 + 0xd40) = temp0_170
void* rax_22 = *r12
float zmm0_1[0x4] = var_b88
zmm0_1[0] = zmm10_1
float var_668[0x4] = temp0_169
float temp0_174[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
temp0_174[0] = zmm7_1
float var_658[0x4] = temp0_172
float temp0_175[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0xc9)
*(rax_22 + 0xd80) = temp0_175
void* rax_23 = *r12
float var_648[0x4] = temp0_173
var_b88 = temp0_175
*(rax_23 + 0xd90) = zmm8_1
*(rax_23 + 0xd94) = zmm6_1

if (arg18 != 1)
    zmm14 = (zx.o(0)).d

void* rax_24 = *r12
var_b88[1].q = 0
int32_t var_bf0_1 = 1
var_b88[3] = 0
zmm0_1 = var_b88
zmm0_1[0] = zmm14
void* const var_bf8
var_bf8.d = 1
*(rax_24 + 0xda0) = zmm0_1
int64_t* rcx_14 = data_143f0f180
void* r8_1 = *r12
var_b88 = zmm0_1
(*(*rcx_14 + 0xf8))(rcx_14, &var_ba0, r8_1, &data_143f55750, var_bf8, var_bf0_1)
void* rax_26 = var_ba0.q
void* var_b58 = rax_26

if (rax_26 != 0)
    *(rax_26 + 8) += 1

sub_1405d1550(&var_ba0)
sub_1405d1600(&r14[2], &var_b58)
sub_1405d1550(&var_b58)
sub_1411a4a60(arg1, arg2, r14)
int64_t* rcx_19 = data_143f0f180
(*(*rcx_19 + 0x100))(rcx_19, *(arg2 + 0xc8), *r12)
char var_bc8 = 0
var_8d8:8.q = &var_bc8
var_8d8.q = j_sub_140597fc0
int64_t* rax_29 = sub_140a756e0(&var_8d8, &data_143958018) + 0x10
int64_t* var_7b0 = rax_29
int64_t var_7a8 = *rax_29
int64_t var_7a0 = rax_29[2]
char var_798 = 0
int64_t var_790 = rax_29[3]
rax_29[3] = &var_7b0
int64_t* rax_30 = var_7b0
rax_30[4].d += 1
void var_378
sub_1419928d0(&var_378, arg1)
var_bf0_1.b = arg6
char var_868
sub_1414f96f0(&var_868, &var_378, zx.d(arg4), arg7, rdi, var_bf0_1.b)
void* const var_b50
void* var_b38
void* const var_af8
void* var_860
int64_t var_858
int64_t var_850
int64_t* var_370

if (var_868 != 0)
    char r15_1 = arg5 * 2
    int64_t* rax_32 = sub_14081d830(0x90, var_370, 1, 0)
    int64_t* rbx_4 = rax_32
    
    if (rax_32 == 0)
        rbx_4 = nullptr
    else
        sub_14117af20(rax_32)
    
    memset(&rbx_4[6], 0, 0x60)
    int64_t* rax_34
    
    if (var_860 == 0)
        var_af8 = nullptr
        rax_34 = &var_af8
        int16_t var_af0_1 = 0
        char var_aee_1 = 0
        int32_t var_aec_1 = 0xffffffff
    else
        var_b38 = var_860
        rax_34 = &var_b38
        float var_b30
        var_b30.b = r15_1
        var_b30:1.w = 0
        int32_t var_b2c_1 = 0xffffffff
    
    *rbx_4 = *rax_34
    int64_t* rax_36
    
    if (var_858 == 0)
        int64_t var_9b8 = 0
        rax_36 = &var_9b8
        int16_t var_9b0_1 = 0
        char var_9ae_1 = 0
        int32_t var_9ac_1 = 0xffffffff
    else
        int64_t var_9c8 = var_858
        rax_36 = &var_9c8
        char var_9c0_1 = r15_1
        int16_t var_9bf_1 = 0
        int32_t var_9bc_1 = 0xffffffff
    
    *(rbx_4 + 0x10) = *rax_36
    int64_t* rax_37
    
    if (var_850 == 0)
        int64_t var_9a8 = 0
        rax_37 = &var_9a8
        int16_t var_9a0_1 = 0
        char var_99e_1 = 0
        int32_t var_99c_1 = 0xffffffff
    else
        int64_t var_9e8 = var_850
        rax_37 = &var_9e8
        char var_9e0_1 = r15_1
        int16_t var_9df_1 = 0
        int32_t var_9dc_1 = 0xffffffff
    
    var_8c8[0].q = arg2
    int32_t var_8b4_1 = arg3
    char var_8b0_1 = arg16
    *(rbx_4 + 0x20) = *rax_37
    char var_8af_1 = arg17
    var_8c8[2].q = r14
    void*** rax_43 = sub_14081d830(0x58, var_370, 1, 0)
    void*** r15_2 = rax_43
    
    if (rax_43 == 0)
        r15_2 = nullptr
    else
        int128_t var_788 = *sub_1412ec240(&var_b50, rbx_4)
        void var_b78
        sub_141992bd0(r15_2, &var_b78, &var_788, 1)
        *r15_2 = &data_142fbbbb0
        *(r15_2 + 0x38) = var_8c8
        *(r15_2 + 0x48) = arg4.o
    
    sub_1419968d0(&var_378, r15_2)

int64_t var_bf8_1
char var_867

if (var_867 != 0)
    int64_t* rax_45 = sub_14081d830(0x70, var_370, 1, 0)
    int64_t* rbx_5 = rax_45
    
    if (rax_45 == 0)
        rbx_5 = nullptr
    else
        __builtin_memset(&rbx_5[3], 0, 0x50)
    
    memset(&rbx_5[3], 0, 0x58)
    rbx_5[1].d = rdx_2
    *(rbx_5 + 0xc) = rax_8
    *rbx_5 = 0
    rbx_5[2] = var_860
    rbx_5[3] = data_14395fa10
    rbx_5[4] = var_858
    rbx_5[5] = data_14395fa10
    rbx_5[6] = var_850
    rbx_5[7] = data_14395fa10
    void* var_848
    void*** rax_54
    
    if (var_848 == 0)
        rax_54 = nullptr
    else
        temp0_84[0].q = var_848
        temp0_84[2].w = 0
        rax_54 = sub_14081d830(0x28, var_370, 1, 0)
        
        if (rax_54 == 0)
            rax_54 = nullptr
        else
            rax_54[1] = *(var_848 + 8)
            *rax_54 = &data_142f285c0
            rax_54[2] = 0
            *(rax_54 + 0x18) = temp0_84
    
    rbx_5[8] = rax_54
    void* var_840
    void*** rax_56
    
    if (var_840 == 0)
        rax_56 = nullptr
    else
        temp0_84[0].q = var_840
        temp0_84[2].w = 0
        rax_56 = sub_14081d830(0x28, var_370, 1, 0)
        
        if (rax_56 == 0)
            rax_56 = nullptr
        else
            rax_56[1] = *(var_840 + 8)
            *rax_56 = &data_142f285c0
            rax_56[2] = 0
            *(rax_56 + 0x18) = temp0_84
    
    rbx_5[9] = rax_56
    void* var_838
    void*** rax_58
    
    if (var_838 == 0)
        rax_58 = nullptr
    else
        temp0_84[0].q = var_838
        temp0_84[2].w = 0
        rax_58 = sub_14081d830(0x28, var_370, 1, 0)
        
        if (rax_58 == 0)
            rax_58 = nullptr
        else
            rax_58[1] = *(var_838 + 8)
            *rax_58 = &data_142f285c0
            rax_58[2] = 0
            *(rax_58 + 0x18) = temp0_84
    
    rbx_5[0xa] = rax_58
    void* var_830
    void*** rax_60
    
    if (var_830 == 0)
        rax_60 = nullptr
    else
        temp0_84[0].q = var_830
        temp0_84[2].w = 0
        rax_60 = sub_14081d830(0x28, var_370, 1, 0)
        
        if (rax_60 == 0)
            rax_60 = nullptr
        else
            rax_60[1] = *(var_830 + 8)
            *rax_60 = &data_142f285c0
            rax_60[2] = 0
            *(rax_60 + 0x18) = temp0_84
    
    rbx_5[0xb] = rax_60
    void* var_828
    void*** rax_62
    
    if (var_828 == 0)
        rax_62 = nullptr
    else
        temp0_84[0].q = var_828
        temp0_84[2].w = 0
        rax_62 = sub_14081d830(0x28, var_370, 1, 0)
        
        if (rax_62 == 0)
            rax_62 = nullptr
        else
            rax_62[1] = *(var_828 + 8)
            *rax_62 = &data_142f285c0
            rax_62[2] = 0
            *(rax_62 + 0x18) = temp0_84
    
    rbx_5[0xc] = rax_62
    var_bf8_1.b = arg4
    sub_1414fd600(&var_378, r14[0x2a9].d, rbx_5, rdi, var_bf8_1.b)

char var_866
char var_865

if (var_866 != 0 || var_865 != 0)
    float (* rax_64)[0x4] = sub_14081d830(0xd0, var_370, 1, 0)
    float (* rbx_6)[0x4] = rax_64
    
    if (rax_64 == 0)
        rbx_6 = nullptr
    else
        sub_14117af20(rax_64)
        __builtin_memset(&rbx_6[0xa], 0, 0x30)
    
    memset(rbx_6, 0, 0xd0)
    int64_t var_820
    int64_t* rax_66
    
    if (var_820 == 0)
        int64_t var_a08 = 0
        rax_66 = &var_a08
        int16_t var_a00_1 = 0
        char var_9fe_1 = 0
        int32_t var_9fc_1 = 0xffffffff
    else
        int64_t var_a18 = var_820
        rax_66 = &var_a18
        int16_t var_a10_1 = 0
        char var_a0e_1 = 0
        int32_t var_a0c_1 = 0xffffffff
    
    *rbx_6 = *rax_66
    int64_t var_818
    uint128_t* rax_68
    
    if (var_818 == 0)
        var_ae8.q = 0
        rax_68 = &var_ae8
        var_ae8:8.w = 0
        var_ae8:0xa.b = 0
        var_ae8:0xc.d = 0xffffffff
    else
        int64_t var_9f8 = var_818
        rax_68 = &var_9f8
        int16_t var_9f0_1 = 0
        char var_9ee_1 = 0
        int32_t var_9ec_1 = 0xffffffff
    
    rbx_6[1] = *rax_68
    int64_t var_810
    float (* rax_70)[0x4]
    
    if (var_810 == 0)
        var_b88[0].q = 0
        rax_70 = &var_b88
        var_b88[2].w = 0
        var_b88[2]:2.b = 0
        var_b88[3] = 0xffffffff
    else
        var_b08[0].q = var_810
        rax_70 = &var_b08
        var_b08[2].w = 0
        var_b08[2]:2.b = 0
        var_b08[3] = 0xffffffff
    
    char r9_4 = rdi.b
    rbx_6[2] = *rax_70
    (*rbx_6)[0x26] = rdx_2
    (*rbx_6)[0x27] = rax_8
    (*rbx_6)[0x25] = 0f
    void* rcx_45 = &var_378
    rbx_6[0xa][0].q = var_860
    *(rbx_6 + 0xa8) = data_14395fa10
    rbx_6[0xb][0].q = var_858
    *(rbx_6 + 0xb8) = data_14395fa10
    rbx_6[0xc][0].q = var_850
    *(rbx_6 + 0xc8) = data_14395fa10
    int32_t rdx_27 = r14[0x2a9].d
    var_bf8_1.b = arg4
    
    if (var_866 == 0)
        sub_1414fdc70(rcx_45, rdx_27, rbx_6, r9_4)
    else
        sub_1414fd9d0(rcx_45, rdx_27, rbx_6, r9_4)

int64_t* var_b18 = nullptr
int32_t var_bc4_1
int64_t* var_b70
void* var_808
int64_t var_218
int32_t var_210
int32_t var_20c
int32_t rax_81

if (var_808 == 0)
    var_b70.d = var_bd0
    var_bc4_1 = var_bd0
    rax_81 = var_bd0
else
    int64_t rbx_7 = sx.q(var_210)
    int64_t* var_b48_1 = &var_b18
    var_b50 = var_808
    char var_b40_1 = 1
    int32_t rax_79 = (rbx_7 + 1).d
    var_210 = rax_79
    
    if (rax_79 s> var_20c)
        sub_14119a720(&var_218, rbx_7.d)
    
    int64_t rax_80 = var_218
    int64_t rcx_47 = rbx_7 * 3
    *(rax_80 + (rcx_47 << 3)) = var_b50.o
    *(rax_80 + (rcx_47 << 3) + 0x10) = var_b40_1.q
    rax_81 = *(var_808 + 0x44)
    var_bc4_1 = *(var_808 + 0x48)
    var_b70.d = *(var_808 + 0x4c)

void* var_800
void* const r13_2 = var_800
int64_t* var_b20 = nullptr
var_af8 = r13_2
int32_t var_b98
int32_t rax_86

if (r13_2 == 0)
    var_b98 = var_bd0
    var_b58.d = var_bd0
    rax_86 = var_bd0
else
    int64_t rbx_8 = sx.q(var_210)
    int64_t* var_b48_2 = &var_b20
    var_b50 = r13_2
    char var_b40_2 = 1
    int32_t rax_84 = (rbx_8 + 1).d
    var_210 = rax_84
    
    if (rax_84 s> var_20c)
        sub_14119a720(&var_218, rbx_8.d)
    
    int64_t rax_85 = var_218
    int64_t rcx_51 = rbx_8 * 3
    *(rax_85 + (rcx_51 << 3)) = var_b50.o
    *(rax_85 + (rcx_51 << 3) + 0x10) = var_b40_2.q
    rax_86 = *(r13_2 + 0x44)
    var_b58.d = *(r13_2 + 0x48)
    var_b98 = *(r13_2 + 0x4c)

void* var_b60
var_b60.d = rax_86
int64_t* var_b28 = nullptr
void* var_7f8
var_b38 = var_7f8
int32_t var_ba8_1

if (var_7f8 == 0)
    var_bd0 = var_bd0
    var_ba0 = var_bd0
    var_ba8_1 = var_bd0
else
    int64_t rdi_1 = sx.q(var_210)
    int64_t* var_b48_3 = &var_b28
    var_b50 = var_7f8
    char var_b40_3 = 1
    int32_t rax_89 = (rdi_1 + 1).d
    int32_t var_210_1 = rax_89
    
    if (rax_89 s> var_20c)
        sub_14119a720(&var_218, rdi_1.d)
    
    int64_t rax_90 = var_218
    int64_t rcx_55 = rdi_1 * 3
    *(rax_90 + (rcx_55 << 3)) = var_b50.o
    *(rax_90 + (rcx_55 << 3) + 0x10) = var_b40_3.q
    var_ba8_1 = *(var_7f8 + 0x44)
    int32_t rbx_10 = *(var_7f8 + 0x4c)
    var_ba0 = *(var_7f8 + 0x48)
    var_bd0 = rbx_10

sub_14199ef00(&var_378)
int64_t var_100

if (arg7 == 0)
    var_100 = 0
else
    var_100 = (*(*arg7 + 8))(arg7)

int64_t var_f8

if (arg9 == 0)
    var_f8 = 0
else
    var_f8 = (*(*arg9 + 8))(arg9)

int64_t var_f0

if (arg11 == 0)
    var_f0 = 0
else
    var_f0 = (*(*arg11 + 8))(arg11)

int64_t* rbx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_100 = &rbx_13[3]

if (rax_100 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rbx_13 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_100 = &rbx_13[3]

*(arg1 + 0x30) = rax_100
*rbx_13 = var_100
rbx_13[1] = var_f8
rbx_13[2] = var_f0
void*** rcx_63 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_104 = &rcx_63[5]

if (rax_104 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_63 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_104 = &rcx_63[5]

*(arg1 + 0x30) = rax_104
void**** rax_105 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_105 = rcx_63
*(arg1 + 8) = &rcx_63[1]
rcx_63[1] = 0
*rcx_63 = &data_142d549c8
rcx_63[2].d = 3
rcx_63[3] = rbx_13
rcx_63[4].d = 1

if (var_808 != 0 && arg7 != 0)
    int32_t var_ac4_1 = data_143dbb190
    int32_t var_ad4_1 = var_bc4_1
    int32_t var_ad0_1 = var_b70.d
    int64_t var_ab4_1 = 0
    int64_t var_aac_1 = 1
    int32_t var_aa4_1 = 0
    int32_t var_aa0_1 = 1
    int32_t var_abc_1 = int.d(fconvert.t(arg8[1]))
    int32_t var_ab8_1 = 0
    uint64_t var_acc_1 = data_143dbb188.q
    int32_t var_ac0_1 = int.d(fconvert.t(*arg8))
    int64_t* rbx_16 = var_b18[2]
    int64_t rax_114 = (*(*arg7 + 8))(arg7)
    int64_t rdx_32 = *rbx_16
    int64_t* rax_115 = (*(rdx_32 + 8))(rbx_16, rdx_32)
    
    if (data_143f0f19d == 0)
        int32_t r15_5 = 0
        int32_t var_960_1 = 1
        uint128_t var_998_1 = rax_81.o
        uint128_t var_988_1 = var_acc_1:4.o
        uint128_t var_978_1 = var_ab8_1.o
        uint64_t var_968_1 = var_aac_1
        
        if (var_aa0_1 != 0)
            do
                void*** rbx_36 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_188 = &rbx_36[0xc]
                
                if (rax_188 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x68)
                    rbx_36 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_188 = &rbx_36[0xc]
                
                *(arg1 + 0x30) = rax_188
                void**** rax_189 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_189 = rbx_36
                *(arg1 + 8) = &rbx_36[1]
                rbx_36[1] = 0
                *rbx_36 = &data_142da7788
                *(rbx_36 + 0x10) = var_998_1
                *(rbx_36 + 0x20) = var_988_1
                *(rbx_36 + 0x30) = var_978_1
                rbx_36[8] = var_968_1
                rbx_36[9].d = var_960_1
                rbx_36[0xa] = rax_115
                rbx_36[0xb] = rax_114
                
                if ((*(*rax_115 + 8))(rax_115) == 0)
                    int64_t* rcx_103 = rbx_36[0xa]
                    
                    if ((*(*rcx_103 + 0x10))(rcx_103) == 0)
                        int64_t* rcx_104 = rbx_36[0xa]
                        
                        if ((*(*rcx_104 + 0x18))(rcx_104) == 0)
                            int64_t* rcx_105 = rbx_36[0xa]
                            (*(*rcx_105 + 0x20))(rcx_105)
                
                int64_t* rcx_106 = rbx_36[0xb]
                
                if ((*(*rcx_106 + 8))(rcx_106) == 0)
                    int64_t* rcx_107 = rbx_36[0xb]
                    
                    if ((*(*rcx_107 + 0x10))(rcx_107) == 0)
                        int64_t* rcx_108 = rbx_36[0xb]
                        
                        if ((*(*rcx_108 + 0x18))(rcx_108) == 0)
                            int64_t* rcx_109 = rbx_36[0xb]
                            (*(*rcx_109 + 0x20))(rcx_109)
                
                var_968_1.d += 1
                var_968_1:4.d += 1
                int32_t temp0_176
                int32_t temp1_1
                temp0_176:temp1_1 = sx.q(var_998_1.d)
                int32_t rax_209 = (temp1_1 - temp0_176) s>> 1
                
                if (rax_209 s<= 1)
                    rax_209 = 1
                
                var_998_1.d = rax_209
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(var_998_1:4.d)
                int32_t rax_213 = (temp5_1 - temp4_1) s>> 1
                
                if (rax_213 s<= 1)
                    rax_213 = 1
                
                r15_5 += 1
                var_998_1:4.d = rax_213
            while (r15_5 u< var_aa0_1)
            
            r12 = var_b68_1
            r13_2 = var_af8
    else
        void*** rbx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_116 = &rbx_19[0xc]
        
        if (rax_116 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x68)
            rbx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_116 = &rbx_19[0xc]
        
        *(arg1 + 0x30) = rax_116
        int64_t* rax_117 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_117 = rbx_19
        *(arg1 + 8) = &rbx_19[1]
        rbx_19[1] = 0
        *rbx_19 = &data_142da7788
        *(rbx_19 + 0x10) = rax_81.o
        *(rbx_19 + 0x20) = var_acc_1:4.o
        *(rbx_19 + 0x30) = var_ab8_1.o
        rbx_19[8] = var_aac_1
        rbx_19[9].d = var_aa0_1
        rbx_19[0xa] = rax_115
        rbx_19[0xb] = rax_114
        
        if ((*(*rax_115 + 8))(rax_115) == 0)
            int64_t* rcx_72 = rbx_19[0xa]
            
            if ((*(*rcx_72 + 0x10))(rcx_72) == 0)
                int64_t* rcx_73 = rbx_19[0xa]
                
                if ((*(*rcx_73 + 0x18))(rcx_73) == 0)
                    int64_t* rcx_74 = rbx_19[0xa]
                    (*(*rcx_74 + 0x20))(rcx_74)
        
        int64_t* rcx_75 = rbx_19[0xb]
        
        if ((*(*rcx_75 + 8))(rcx_75) == 0)
            int64_t* rcx_76 = rbx_19[0xb]
            
            if ((*(*rcx_76 + 0x10))(rcx_76) == 0)
                int64_t* rcx_77 = rbx_19[0xb]
                
                if ((*(*rcx_77 + 0x18))(rcx_77) == 0)
                    int64_t* rcx_78 = rbx_19[0xb]
                    (*(*rcx_78 + 0x20))(rcx_78)

int32_t r15_4 = 0

if (r13_2 != 0 && arg9 != 0)
    int32_t var_a84_1 = data_143dbb190
    int32_t rax_135 = var_b60.d
    int32_t var_a94_1 = var_b58.d
    int32_t var_a90_1 = var_b98
    uint64_t var_a8c_1 = data_143dbb188.q
    int64_t var_a74_1 = 0
    int64_t var_a6c_1 = 1
    int32_t var_a64_1 = 0
    int32_t var_a60_1 = 1
    int32_t var_a78_1 = 0
    int32_t var_a80_1 = int.d(fconvert.t(*arg10))
    int32_t var_a7c_1 = int.d(fconvert.t(arg10[1]))
    int64_t* rbx_22 = var_b20[2]
    int64_t rax_141 = (*(*arg9 + 8))(arg9)
    int64_t rdx_34 = *rbx_22
    int64_t* rax_142 = (*(rdx_34 + 8))(rbx_22, rdx_34)
    
    if (data_143f0f19d == 0)
        int32_t var_920_1 = 1
        uint128_t var_958_1 = rax_135.o
        uint128_t var_948_1 = var_a8c_1:4.o
        uint128_t var_938_1 = var_a78_1.o
        uint64_t var_928_1 = var_a6c_1
        
        if (var_a60_1 != 0)
            do
                void*** rbx_41 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_214 = &rbx_41[0xc]
                
                if (rax_214 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x68)
                    rbx_41 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_214 = &rbx_41[0xc]
                
                *(arg1 + 0x30) = rax_214
                void**** rax_215 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_215 = rbx_41
                *(arg1 + 8) = &rbx_41[1]
                rbx_41[1] = 0
                *rbx_41 = &data_142da7788
                *(rbx_41 + 0x10) = var_958_1
                *(rbx_41 + 0x20) = var_948_1
                *(rbx_41 + 0x30) = var_938_1
                rbx_41[8] = var_928_1
                rbx_41[9].d = var_920_1
                rbx_41[0xa] = rax_142
                rbx_41[0xb] = rax_141
                
                if ((*(*rax_142 + 8))(rax_142) == 0)
                    int64_t* rcx_112 = rbx_41[0xa]
                    
                    if ((*(*rcx_112 + 0x10))(rcx_112) == 0)
                        int64_t* rcx_113 = rbx_41[0xa]
                        
                        if ((*(*rcx_113 + 0x18))(rcx_113) == 0)
                            int64_t* rcx_114 = rbx_41[0xa]
                            (*(*rcx_114 + 0x20))(rcx_114)
                
                int64_t* rcx_115 = rbx_41[0xb]
                
                if ((*(*rcx_115 + 8))(rcx_115) == 0)
                    int64_t* rcx_116 = rbx_41[0xb]
                    
                    if ((*(*rcx_116 + 0x10))(rcx_116) == 0)
                        int64_t* rcx_117 = rbx_41[0xb]
                        
                        if ((*(*rcx_117 + 0x18))(rcx_117) == 0)
                            int64_t* rcx_118 = rbx_41[0xb]
                            (*(*rcx_118 + 0x20))(rcx_118)
                
                var_928_1.d += 1
                var_928_1:4.d += 1
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(var_958_1.d)
                int32_t rax_235 = (temp3_1 - temp2_1) s>> 1
                
                if (rax_235 s<= 1)
                    rax_235 = 1
                
                var_958_1.d = rax_235
                int32_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(var_958_1:4.d)
                int32_t rax_239 = (temp7_1 - temp6_1) s>> 1
                
                if (rax_239 s<= 1)
                    rax_239 = 1
                
                r15_4 += 1
                var_958_1:4.d = rax_239
            while (r15_4 u< var_a60_1)
            
            r12 = var_b68_1
            r15_4 = 0
    else
        void*** rbx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_143 = &rbx_25[0xc]
        
        if (rax_143 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x68)
            rbx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_143 = &rbx_25[0xc]
        
        *(arg1 + 0x30) = rax_143
        int64_t* rax_144 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_144 = rbx_25
        *(arg1 + 8) = &rbx_25[1]
        rbx_25[1] = 0
        *rbx_25 = &data_142da7788
        *(rbx_25 + 0x10) = rax_135.o
        *(rbx_25 + 0x20) = var_a8c_1:4.o
        *(rbx_25 + 0x30) = var_a78_1.o
        rbx_25[8] = var_a6c_1
        rbx_25[9].d = var_a60_1
        rbx_25[0xa] = rax_142
        rbx_25[0xb] = rax_141
        
        if ((*(*rax_142 + 8))(rax_142) == 0)
            int64_t* rcx_83 = rbx_25[0xa]
            
            if ((*(*rcx_83 + 0x10))(rcx_83) == 0)
                int64_t* rcx_84 = rbx_25[0xa]
                
                if ((*(*rcx_84 + 0x18))(rcx_84) == 0)
                    int64_t* rcx_85 = rbx_25[0xa]
                    (*(*rcx_85 + 0x20))(rcx_85)
        
        int64_t* rcx_86 = rbx_25[0xb]
        
        if ((*(*rcx_86 + 8))(rcx_86) == 0)
            int64_t* rcx_87 = rbx_25[0xb]
            
            if ((*(*rcx_87 + 0x10))(rcx_87) == 0)
                int64_t* rcx_88 = rbx_25[0xb]
                
                if ((*(*rcx_88 + 0x18))(rcx_88) == 0)
                    int64_t* rcx_89 = rbx_25[0xb]
                    (*(*rcx_89 + 0x20))(rcx_89)

if (var_b38 != 0 && arg11 != 0)
    int32_t var_a44_1 = data_143dbb190
    float var_a54_1 = var_ba0
    int32_t var_a50_1 = var_bd0
    int32_t var_a20_1 = 1
    uint64_t var_a4c_1 = data_143dbb188.q
    int64_t var_a34_1 = 0
    int64_t var_a2c_1 = 1
    int32_t var_a24_1 = 0
    int32_t var_a38_1 = 0
    int32_t var_a40_1 = int.d(fconvert.t(*arg12))
    int32_t var_a3c_1 = int.d(fconvert.t(arg12[1]))
    int64_t* rbx_28 = var_b28[2]
    int64_t rax_168 = (*(*arg11 + 8))(arg11)
    int64_t rdx_36 = *rbx_28
    int64_t* rax_169 = (*(rdx_36 + 8))(rbx_28, rdx_36)
    
    if (data_143f0f19d == 0)
        int32_t var_8e0_1 = 1
        uint128_t var_918_1 = var_ba8_1.o
        uint128_t var_908_1 = var_a4c_1:4.o
        uint128_t var_8f8_1 = var_a38_1.o
        uint64_t var_8e8_1 = var_a2c_1
        
        if (var_a20_1 != 0)
            do
                void*** rbx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_240 = &rbx_46[0xc]
                
                if (rax_240 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x68)
                    rbx_46 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_240 = &rbx_46[0xc]
                
                *(arg1 + 0x30) = rax_240
                void**** rax_241 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_241 = rbx_46
                *(arg1 + 8) = &rbx_46[1]
                rbx_46[1] = 0
                *rbx_46 = &data_142da7788
                *(rbx_46 + 0x10) = var_918_1
                *(rbx_46 + 0x20) = var_908_1
                *(rbx_46 + 0x30) = var_8f8_1
                rbx_46[8] = var_8e8_1
                rbx_46[9].d = var_8e0_1
                rbx_46[0xa] = rax_169
                rbx_46[0xb] = rax_168
                
                if ((*(*rax_169 + 8))(rax_169) == 0)
                    int64_t* rcx_121 = rbx_46[0xa]
                    
                    if ((*(*rcx_121 + 0x10))(rcx_121) == 0)
                        int64_t* rcx_122 = rbx_46[0xa]
                        
                        if ((*(*rcx_122 + 0x18))(rcx_122) == 0)
                            int64_t* rcx_123 = rbx_46[0xa]
                            (*(*rcx_123 + 0x20))(rcx_123)
                
                int64_t* rcx_124 = rbx_46[0xb]
                
                if ((*(*rcx_124 + 8))(rcx_124) == 0)
                    int64_t* rcx_125 = rbx_46[0xb]
                    
                    if ((*(*rcx_125 + 0x10))(rcx_125) == 0)
                        int64_t* rcx_126 = rbx_46[0xb]
                        
                        if ((*(*rcx_126 + 0x18))(rcx_126) == 0)
                            int64_t* rcx_127 = rbx_46[0xb]
                            (*(*rcx_127 + 0x20))(rcx_127)
                
                var_8e8_1.d += 1
                var_8e8_1:4.d += 1
                int32_t temp8_1
                int32_t temp9_1
                temp8_1:temp9_1 = sx.q(var_918_1.d)
                int32_t rax_261 = (temp9_1 - temp8_1) s>> 1
                
                if (rax_261 s<= 1)
                    rax_261 = 1
                
                var_918_1.d = rax_261
                int32_t temp10_1
                int32_t temp11_1
                temp10_1:temp11_1 = sx.q(var_918_1:4.d)
                int32_t rax_265 = (temp11_1 - temp10_1) s>> 1
                
                if (rax_265 s<= 1)
                    rax_265 = 1
                
                r15_4 += 1
                var_918_1:4.d = rax_265
            while (r15_4 u< var_a20_1)
            
            r12 = var_b68_1
    else
        void*** rbx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_170 = &rbx_31[0xc]
        
        if (rax_170 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x68)
            rbx_31 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_170 = &rbx_31[0xc]
        
        *(arg1 + 0x30) = rax_170
        void** rax_171 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_171 = rbx_31
        *(arg1 + 8) = &rbx_31[1]
        rbx_31[1] = 0
        *rbx_31 = &data_142da7788
        *(rbx_31 + 0x10) = var_ba8_1.o
        *(rbx_31 + 0x20) = var_a4c_1:4.o
        *(rbx_31 + 0x30) = var_a38_1.o
        rbx_31[8] = var_a2c_1
        rbx_31[9].d = var_a20_1
        rbx_31[0xa] = rax_169
        rbx_31[0xb] = rax_168
        
        if ((*(*rax_169 + 8))(rax_169) == 0)
            int64_t* rcx_94 = rbx_31[0xa]
            
            if ((*(*rcx_94 + 0x10))(rcx_94) == 0)
                int64_t* rcx_95 = rbx_31[0xa]
                
                if ((*(*rcx_95 + 0x18))(rcx_95) == 0)
                    int64_t* rcx_96 = rbx_31[0xa]
                    (*(*rcx_96 + 0x20))(rcx_96)
        
        int64_t* rcx_97 = rbx_31[0xb]
        
        if ((*(*rcx_97 + 8))(rcx_97) == 0)
            int64_t* rcx_98 = rbx_31[0xb]
            
            if ((*(*rcx_98 + 0x10))(rcx_98) == 0)
                int64_t* rcx_99 = rbx_31[0xb]
                
                if ((*(*rcx_99 + 0x18))(rcx_99) == 0)
                    int64_t* rcx_100 = rbx_31[0xb]
                    (*(*rcx_100 + 0x20))(rcx_100)

int64_t* rbx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_266 = &rbx_51[3]

if (rax_266 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x20)
    rbx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_266 = &rbx_51[3]

*(arg1 + 0x30) = rax_266
*rbx_51 = var_100
rbx_51[1] = var_f8
rbx_51[2] = var_f0
void*** rcx_131 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_270 = &rcx_131[5]

if (rax_270 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_131 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_270 = &rcx_131[5]

*(arg1 + 0x30) = rax_270
void**** rax_271 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_271 = rcx_131
*(arg1 + 8) = &rcx_131[1]
rcx_131[1] = 0
*rcx_131 = &data_142d549c8
rcx_131[2].d = 3
rcx_131[3] = rbx_51
rcx_131[4].d = 0
void* rcx_135 = *r12

if (rcx_135 != 0)
    *r12 = nullptr
    j_sub_140a74f90(rcx_135)

int64_t* rcx_136 = var_b28

if (rcx_136 != 0)
    (*(*rcx_136 + 0x38))(rcx_136)

int64_t* rcx_137 = var_b20

if (rcx_137 != 0)
    (*(*rcx_137 + 0x38))(rcx_137)

int64_t* rcx_138 = var_b18

if (rcx_138 != 0)
    (*(*rcx_138 + 0x38))(rcx_138)

int32_t var_150 = 0
int32_t var_14c
void var_158

if (var_14c != 0)
    sub_1410b3aa0(&var_158, 0)
int32_t var_1c8 = 0
int32_t var_1c4
void var_1d0

if (var_1c4 != 0)
    sub_1410b3aa0(&var_1d0, 0)
int32_t var_220 = 0
void var_268
sub_141219390(&var_268)
int32_t var_270 = 0
void var_2b8
sub_141219390(&var_2b8)
int32_t var_2c0 = 0
void var_308
sub_141096480(&var_308, 0)
int32_t var_310 = 0
void var_358
sub_14108c840(&var_358)
sub_1414fb8c0(&var_7b0)
void var_400
sub_1413c3330(&var_400)
int32_t var_408_1 = 0

if (var_410 != 0)
    sub_140a74f90(var_410)

sub_140909ff0(&var_450)
int64_t result = sub_1422dbba0(&var_628)
__security_check_cookie(rax_1 ^ &var_c18)
return result
