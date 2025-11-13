// 函数: sub_1406305d0
// 地址: 0x1406305d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_148[0x4]
float var_128[0x10]
float* rax_2
int512_t zmm7
int512_t zmm8
int512_t zmm9
int512_t zmm10
int512_t zmm11
rax_2, zmm7, zmm8, zmm9, zmm10, zmm11 = sub_140626b90(&var_128, sub_140ade170(arg2, &var_148))
float zmm6[0x4] = rax_2[1]
zmm9.o = rax_2[4]
zmm10.o = rax_2[8]
zmm11.o = rax_2[0xc]
zmm7.o = rax_2[9]
zmm8.o = rax_2[0xd]
int128_t zmm12 = rax_2[6]
int128_t zmm13 = rax_2[0xa]
int128_t zmm14 = rax_2[0xe]
int128_t zmm15 = rax_2[7]
float var_1c8[0x4] = *rax_2
float var_1b8[0x4] = rax_2[2]
float var_1a8[0x4] = rax_2[3]
float arg_8 = rax_2[0xb][0]
rax_2[5]
float var_228 = rax_2[0xf][0]
float var_138[0x4]
float var_e8[0x10]
float* rax_4
float zmm6_1[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_1[0x4]
int32_t zmm10_1
int32_t zmm11_1
rax_4, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1 =
    sub_140626b90(&var_e8, sub_140ade170(arg3, &var_138))
float zmm2[0x4] = *rax_4
float zmm4[0x4] = *(rax_4 + 0x10)
float zmm5[0x4] = *(rax_4 + 0x20)
float var_198[0x4] = *(rax_4 + 0x30)
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0[0] = zmm6_1[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_2[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_2[0] = zmm7_1[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_4[0] = zmm8_1[0]
float temp0_5[0x4] = _mm_shuffle_ps(var_1b8, var_1b8, 0xe1)
temp0_5[0] = zmm12.d
float temp0_6[0x4] = _mm_shuffle_ps(var_1c8, var_1c8, 0xe1)
temp0_6[0] = zmm9_1[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
float temp0_9[0x4] = _mm_mul_ps(temp0_1, temp0_7)
temp0_8[0] = zmm10_1
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
temp0_10[0] = zmm11_1
float temp0_11[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
float temp0_14[0x4] = _mm_add_ps(temp0_9, _mm_mul_ps(temp0_11, temp0_12))
float temp0_15[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_16[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0xe1)
temp0_16[0] = zmm15.d
float temp0_17[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc6)
temp0_17[0] = zmm13.d
temp0_18[0] = arg_8[0]
float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x27)
temp0_19[0] = zmm14.d
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
float temp0_21[0x4] = _mm_mul_ps(temp0_3, temp0_20)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x27)
temp0_22[0] = var_228[0]
float temp0_23[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_24[0x4] = _mm_add_ps(temp0_14, temp0_21)
float temp0_25[0x4] = _mm_mul_ps(temp0_23, temp0_12)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x39)
float temp0_27[0x4] = _mm_mul_ps(temp0_15, temp0_26)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), temp0_20)
float temp0_30[0x4] = _mm_add_ps(temp0_24, temp0_27)
float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), temp0_7)
float temp0_33[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
float var_188[0x4] = temp0_30
float temp0_34[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
float temp0_35[0x4] = _mm_add_ps(temp0_32, temp0_25)
float temp0_36[0x4] = _mm_mul_ps(temp0_34, temp0_7)
float temp0_37[0x4] = _mm_mul_ps(temp0_33, temp0_26)
float temp0_38[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_39[0x4] = _mm_add_ps(temp0_35, temp0_29)
float temp0_40[0x4] = _mm_mul_ps(temp0_38, temp0_12)
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), temp0_20)
float temp0_43[0x4] = _mm_add_ps(temp0_36, temp0_40)
float temp0_44[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_45[0x4] = _mm_add_ps(temp0_39, temp0_37)
float temp0_46[0x4] = _mm_mul_ps(temp0_44, temp0_26)
float var_178[0x4] = temp0_45
float var_168[0x4] = _mm_add_ps(_mm_add_ps(temp0_43, temp0_42), temp0_46)
float temp0_49[0x4] = _mm_shuffle_ps(var_198, var_198, 0x55)
float temp0_50[0x4] = _mm_shuffle_ps(var_198, var_198, 0)
float temp0_51[0x4] = _mm_mul_ps(temp0_49, temp0_7)
float temp0_52[0x4] = _mm_shuffle_ps(var_198, var_198, 0xaa)
float temp0_53[0x4] = _mm_mul_ps(temp0_50, temp0_12)
float temp0_54[0x4] = _mm_mul_ps(temp0_52, temp0_20)
float temp0_55[0x4] = _mm_shuffle_ps(var_198, var_198, 0xff)
float temp0_56[0x4] = _mm_add_ps(temp0_51, temp0_53)
float temp0_57[0x4] = _mm_mul_ps(temp0_55, temp0_26)
float var_158[0x4] = _mm_add_ps(_mm_add_ps(temp0_56, temp0_54), temp0_57)
sub_140adf440(&var_188, arg1)
return arg1
