// 函数: sub_14148d370
// 地址: 0x14148d370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1

if (arg4 == 0)
    int64_t* rcx = *(arg1 + 0x38)
    
    if (rcx == 0)
        rcx = **(arg1 + 0x28)
    
    rax_1 = *((*(*rcx + 0x10))(rcx) + 0x14)
else
    rax_1 = *arg4

float zmm4[0x4] = 0x3f800000
float zmm0[0x4] = zx.o(0)
uint64_t rcx_1 = zx.q(*(arg1 + 0x548))
float zmm2[0x4] = zx.o(0)
float zmm9[0x4] = *(arg1 + 0xb0)
float zmm3[0x4] = 0x3f800000
float zmm7[0x4] = *(arg1 + 0xa0)
float zmm10[0x4] = *(arg1 + 0xc0)
float zmm11[0x4] = *(arg1 + 0xd0)
float zmm5[0x4] = *(arg1 + 0x54)
float zmm6[0x4] = *(arg1 + 0x58)
float zmm8[0x4] = *(arg1 + 0x5c)
zmm0[0] = float.s(rax_1.d)
int64_t var_154 = 0
int64_t var_140 = 0
zmm2[0] = float.s(rcx_1)
int32_t rcx_2 = *(arg1 + 0x550)
int32_t var_12c = 0
int32_t var_120 = 0
zmm3[0] = 1f / zmm0[0]
int32_t var_11c = 0x3f800000
int32_t var_cc = 0x3f800000
zmm2[0] = zmm2[0] * 0.5f
zmm0 = zx.o(0)
zmm0[0] = float.s((rax_1 u>> 0x20).d)
int128_t zmm15
zmm15.d = float.s(zx.q(*(arg1 + 0x54c)))
uint64_t rax_8 = zx.q(*(arg1 + 0x540) + rcx_2)
zmm4[0] = 1f / zmm0[0]
zmm0 = zx.o(0)
zmm2[0] = zmm2[0] * zmm3[0]
zmm15.d = zmm15.d f* 0.5f
zmm0[0] = float.s(rax_8)
uint64_t rax_10 = zx.q(*(arg1 + 0x544) + rcx_2)
zmm15.d = zmm15.d f* zmm4[0]
zmm0[0] = zmm0[0] * zmm3[0]
float arg_8 = zmm2[0]
float arg_20 = zmm3[0]
zmm3 = data_142d4cc20
zmm0[0] = zmm0[0] + zmm2[0]
zmm2 = data_142d4cc00
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float arg_10 = zmm0[0]
zmm0 = zx.o(0)
zmm0[0] = float.s(rax_10)
float temp0_3[0x4] = _mm_mul_ps(temp0_2, zmm10)
zmm0[0] = zmm0[0] * zmm4[0]
float temp0_4[0x4] = _mm_mul_ps(temp0_1, zmm7)
zmm0[0] = zmm0[0] f+ zmm15.d
float temp0_5[0x4] = _mm_mul_ps(temp0, zmm7)
zmm15 ^= data_142d3f780
float var_168 = zmm4[0]
zmm4 = data_142d4cc30
float arg_18 = zmm0[0]
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm9)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm11)
float temp0_10[0x4] = _mm_add_ps(temp0_4, temp0_7)
float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x55), zmm9)
float temp0_13[0x4] = _mm_add_ps(temp0_10, temp0_3)
float temp0_14[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_15[0x4] = _mm_add_ps(temp0_5, temp0_12)
float temp0_16[0x4] = _mm_mul_ps(temp0_14, zmm10)
float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_9)
float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_16)
float var_d8[0x4]
var_d8[0] = zmm5[0]
float temp0_19[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
zmm5 = 0.o
float temp0_20[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
float temp0_21[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
float temp0_22[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xe1)
temp0_22[0] = zmm6[0]
float temp0_23[0x4] = _mm_mul_ps(temp0_20, zmm9)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xc6)
temp0_24[0] = zmm8[0]
float temp0_25[0x4] = _mm_mul_ps(temp0_21, zmm10)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc9)
float temp0_27[0x4] = _mm_mul_ps(temp0_19, zmm7)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0), zmm7)
zmm7 = 0:4.o
float temp0_30[0x4] = _mm_add_ps(temp0_27, temp0_23)
float temp0_31[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0x55), zmm9)
float temp0_34[0x4] = _mm_add_ps(temp0_30, temp0_25)
float temp0_35[0x4] = _mm_mul_ps(temp0_31, zmm11)
float temp0_36[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xaa)
float temp0_38[0x4] = _mm_add_ps(temp0_29, temp0_33)
float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xff), zmm11)
float temp0_41[0x4] = _mm_add_ps(temp0_34, temp0_35)
temp0_36[0] = zmm15.d
float temp0_42[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0)
float temp0_43[0x4] = _mm_mul_ps(temp0_37, zmm10)
float temp0_44[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xe1)
float temp0_45[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_46[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_47[0x4] = _mm_add_ps(temp0_38, temp0_43)
float temp0_48[0x4] = _mm_mul_ps(temp0_46, zmm11)
float var_158[0x4]
var_158[0] = arg_8[0]
float temp0_49[0x4] = _mm_mul_ps(temp0_42, var_158)
float temp0_50[0x4] = _mm_add_ps(temp0_47, temp0_40)
float temp0_51[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
float temp0_52[0x4] = _mm_add_ps(temp0_18, temp0_48)
float temp0_54[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0x55), temp0_44)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xff)
float temp0_56[0x4] = _mm_add_ps(temp0_54, temp0_49)
temp0_45[0] = (*(arg1 + 0x160))[0]
float var_128[0x4]
var_128[0] = arg_10[0]
float temp0_57[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xc9)
float temp0_58[0x4] = _mm_mul_ps(temp0_51, temp0_57)
float temp0_59[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
temp0_59[0] = arg_18[0]
float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xe1)
float temp0_61[0x4] = _mm_add_ps(temp0_56, temp0_58)
float temp0_62[0x4] = _mm_mul_ps(temp0_55, temp0_60)
float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0), var_158)
float temp0_65[0x4] = _mm_add_ps(temp0_61, temp0_62)
float temp0_66[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xaa)
*arg2 = temp0_65
float temp0_71[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0x55), temp0_44), temp0_64), 
    _mm_mul_ps(temp0_66, temp0_57))
float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0x55), temp0_44)
float temp0_74[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0)
float temp0_75[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xaa)
float temp0_76[0x4] = _mm_mul_ps(temp0_74, var_158)
float temp0_77[0x4] = _mm_mul_ps(temp0_75, temp0_57)
float temp0_78[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xff)
float temp0_79[0x4] = _mm_add_ps(temp0_73, temp0_76)
float temp0_80[0x4] = _mm_mul_ps(temp0_78, temp0_60)
float temp0_81[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xff)
float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0), var_158)
float temp0_84[0x4] = _mm_add_ps(temp0_79, temp0_77)
float temp0_85[0x4] = _mm_add_ps(temp0_71, temp0_80)
float temp0_86[0x4] = _mm_mul_ps(temp0_81, temp0_60)
float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xaa), temp0_57)
arg2[1] = temp0_85
float temp0_89[0x4] = _mm_add_ps(temp0_84, temp0_86)
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0x55), temp0_44)
arg2[2] = temp0_89
zmm3 = zx.o(0)
float temp0_92[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xff)
float temp0_93[0x4] = _mm_add_ps(temp0_91, temp0_83)
float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_60)
zmm0 = zx.o(0)
float zmm1[0x4] = zx.o(0)
arg2[3] = _mm_add_ps(_mm_add_ps(temp0_93, temp0_88), temp0_94)
zmm2 = zx.o(0)
int32_t rax_11 = *(arg1 + 0x548)
int32_t rdx = *(arg1 + 0x550)
int32_t r9 = *(arg1 + 0x540)
int32_t r8 = *(arg1 + 0x544)
zmm3[0] = float.s(zx.q(r9 + rdx))
zmm2[0] = float.s(zx.q(r8 + rdx))
int32_t rcx_5 = rdx * 2
zmm3[0] = zmm3[0] * arg_20
zmm2[0] = zmm2[0] * var_168
float temp0_97[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm0[0] = float.s(zx.q(rax_11 + rcx_5 + r9))
uint64_t rax_15 = zx.q(rcx_5 + r8 + *(arg1 + 0x54c))
temp0_97[0] = zmm2[0]
float temp0_98[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xc6)
zmm0[0] = zmm0[0] * arg_20
zmm1[0] = float.s(rax_15)
temp0_98[0] = zmm0[0]
float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0x27)
zmm1[0] = zmm1[0] * var_168
temp0_99[0] = zmm1[0]
*arg3 = _mm_shuffle_ps(temp0_99, temp0_99, 0x39)
return arg2
