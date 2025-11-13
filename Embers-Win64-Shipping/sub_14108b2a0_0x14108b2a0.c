// 函数: sub_14108b2a0
// 地址: 0x14108b2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 4
*arg1 = &data_142f118c8
arg1[2] = arg2
arg1[3].d = *(arg2 + 0x1f0)
*(arg1 + 0x1c) = *(arg2 + 0x1f4)
float zmm1 = *(arg2 + 0x1f8)
int32_t zmm0 = 0x3f800000

if (not(zmm1 <= 0f))
    zmm0 = 1f / zmm1

arg1[4].d = zmm0
*(arg1 + 0x24) = *(arg2 + 0x1fc)
arg1[5].d = *(arg2 + 0x20c)
*(arg1 + 0x2c) = *(arg2 + 0x200)
arg1[6].d = *(arg2 + 0x204)
zmm0 = *(arg2 + 0x224)
int64_t var_a8 = 0
int32_t var_a0 = 0x3f800000
*(arg1 + 0x34) = zmm0 f* zmm0 f* zmm0 * 64f
arg1[7].d = *(arg2 + 0x210)
*(arg1 + 0x3c) = *(arg2 + 0x208)
arg1[8].d = *(arg2 + 0x214)
arg1[0xc].d = 0
*(arg1 + 0x64) = *(arg2 + 0x240)
arg1[0xd].b = (*(arg2 + 0x220) u>> 1).b & 1
*(arg2 + 0x224)
sub_141097410(&arg1[0x11], &var_a8)
arg1[7].d = *(arg1 + 0x2c) * 9.99999975e-06f f* arg1[7].d
float zmm6[0x4] = *(arg2 + 0x218)
int32_t* rax_12 = sub_140acc920(&var_a8, arg2 + 0x21c)
zmm6[0] = zmm6[0] f* *rax_12
zmm6[0] = zmm6[0] f* rax_12[1]
zmm6[0] = zmm6[0] f* rax_12[2]
zmm6[0] = zmm6[0] f* rax_12[3]
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0[0] = zmm6[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm6[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm6[0]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
*(arg1 + 0x44) = temp0_3
arg1[0xc].d |= *(arg2 + 0x220) & 1
arg1[0xc].d |= *(arg2 + 0x220) u>> 1 & 2
float zmm0_2[0x4] = *(arg2 + 0x1d8)
zmm0_2[0] = zmm0_2[0] f+ arg1[5].d
var_a8.o = temp0_3
arg1[5].d = zmm0_2[0]
float zmm2_1[0x4] = *(arg2 + 0x1c0)
float temp0_4[0x4] = _mm_add_ps(zmm2_1, zmm2_1)
float temp0_5[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 4)
float temp0_6[0x4] = _mm_mul_ps(zmm2_1, temp0_4)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x29)
float zmm4[0x4] = data_143e2d5a0
float temp0_8[0x4] = _mm_mul_ps(temp0_5, temp0_7)
float temp0_9[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x1a)
float temp0_12[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(temp0_4, temp0_4, 0x12))
float temp0_14[0x4] = _mm_add_ps(temp0_10, _mm_shuffle_ps(temp0_6, temp0_6, 1))
float temp0_15[0x4] = _mm_add_ps(temp0_12, temp0_8)
float temp0_16[0x4] = _mm_sub_ps(temp0_8, temp0_12)
float zmm3[0x4] = __andps_xmmxud_memxud(_mm_sub_ps(zmm4, temp0_14), data_143e2d5b0)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, zmm3, 0x32)
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm3, 0), temp0_19, 0x82)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_15, zmm3, 0x31)
float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3, 0x10), temp0_22, 0x88)
zmm0_2 = *(arg2 + 0x1d0)
zmm4[0].q = zmm0_2 u>> 0x40
float temp0_25[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
float temp0_26[0x4] = _mm_shuffle_ps(zmm0_2, zmm4, 0xc4)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, zmm3, 0xe8)
float var_68[0x4] = temp0_26
float var_98[0x4] = temp0_21
float var_88[0x4] = temp0_24
float var_78[0x4] = temp0_27
float var_58[0x4]
sub_1408041d0(&var_98, &var_58)
void* rcx_3 = arg1[2]
int32_t var_48
*(arg1 + 0x54) = (_mm_unpacklo_ps(var_58[0], var_48)).q
int32_t var_38
*(arg1 + 0x5c) = var_38
arg1[0xe] = *(rcx_3 + 0x268)
arg1[0xf] = *(rcx_3 + 0x270)
arg1[0x10] = *(rcx_3 + 0x278)
return arg1
