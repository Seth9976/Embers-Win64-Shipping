// 函数: sub_142402cb0
// 地址: 0x142402cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = data_142d4cc00
float zmm0[0x4] = zx.o(0)
float zmm5[0x4] = data_142d4cc20
int32_t r9 = 1
float zmm1[0x4] = 0xc0000000
float zmm2[0x4] = 0x40000000
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
float zmm9[0x4] = data_142d4cc30
float zmm10[0x4] = data_142d3f660
uint64_t rax = 1
float zmm11[0x4] = data_14300ab80

if (arg3 u>= 1)
    rax = zx.q(arg3)

int64_t var_90 = 0
float zmm7[0x4] = 0:4.o

if (arg2 u>= 1)
    r9 = arg2

zmm0[0] = float.s(rax)
int64_t var_a4 = 0
float var_a8[0x4]
float zmm6[0x4] = var_a8
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
zmm1[0] = -2f / zmm0[0]
zmm0 = zx.o(0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
zmm0[0] = float.s(zx.q(r9))
temp0_1[0] = zmm1[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
zmm2[0] = 2f / zmm0[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xe1)
float temp0_5[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
zmm6[0] = zmm2[0]
float temp0_6[0x4] = _mm_mul_ps(temp0_5, zmm6)
float temp0_7[0x4] = _mm_mul_ps(temp0, temp0_4)
float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
float temp0_9[0x4] = _mm_mul_ps(temp0_3, zmm9)
float temp0_10[0x4] = _mm_add_ps(temp0_7, temp0_6)
float temp0_11[0x4] = _mm_mul_ps(temp0_8, temp0_4)
var_a8 = zmm6
float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm9)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm11)
float temp0_16[0x4] = _mm_add_ps(temp0_10, temp0_13)
int64_t var_9c
var_9c:4.o = temp0_4
float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm6)
float temp0_19[0x4] = _mm_add_ps(temp0_16, temp0_15)
float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm11)
float temp0_22[0x4] = _mm_add_ps(temp0_11, temp0_18)
float temp0_23[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
var_a8 = temp0_19
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0x55), temp0_4)
float temp0_26[0x4] = _mm_add_ps(temp0_22, temp0_9)
float temp0_27[0x4] = _mm_mul_ps(temp0_23, zmm6)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xaa), zmm9)
var_9c:4.o = _mm_add_ps(temp0_26, temp0_21)
float temp0_32[0x4] = _mm_add_ps(_mm_add_ps(temp0_25, temp0_27), temp0_29)
float temp0_33[0x4] = _mm_mul_ps(temp0_2, zmm11)
float temp0_34[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
float temp0_35[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
float temp0_36[0x4] = _mm_mul_ps(temp0_34, temp0_4)
float temp0_37[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
float temp0_38[0x4] = _mm_add_ps(temp0_32, temp0_33)
float temp0_39[0x4] = _mm_mul_ps(temp0_35, zmm6)
float temp0_40[0x4] = _mm_mul_ps(temp0_37, zmm9)
float temp0_41[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
float temp0_42[0x4] = _mm_add_ps(temp0_36, temp0_39)
float temp0_43[0x4] = _mm_mul_ps(temp0_41, zmm11)
float var_88[0x4] = temp0_38
float var_78[0x4] = _mm_add_ps(_mm_add_ps(temp0_42, temp0_40), temp0_43)
sub_141b4d3f0(arg1, &var_a8)
return arg1
