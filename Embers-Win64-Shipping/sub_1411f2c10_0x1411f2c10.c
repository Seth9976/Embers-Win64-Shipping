// 函数: sub_1411f2c10
// 地址: 0x1411f2c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 0x1a0)
int64_t r9 = *(arg3 + 0x10)
int64_t arg_8 = rbx
sub_141080ac0(arg1, arg2, rbx, r9)
int32_t var_148 = arg5
sub_1411b9cf0(arg1 + 0x118, arg2, rbx, data_1439b6298)
sub_1411b99b0(arg1 + 0x122, arg2, rbx, arg6)
void* rdx_2 = data_143a2dd48
void* arg_40
void* r9_4 = arg_40 + 0x10
int32_t var_128 = *(rdx_2 + 0x60)
int32_t var_124 = *(rdx_2 + 0x64)
int32_t var_120 = *(rdx_2 + 0x68)
var_148.q = rdx_2
sub_141118600(arg1 + 0x132, arg2, rbx, r9_4, var_148, &var_128, 0)
void* rcx_3 = *(*(arg4 + 0x5c0) + 0x20)
float zmm2[0x4] = *(rcx_3 + 0x60)
int32_t zmm1 = *(rcx_3 + 0x50)
var_128 = *(rcx_3 + 0x40)
int32_t var_124_1 = zmm1
float var_120_1 = zmm2[0]
float zmm0_1[0x4] = sub_1405d0f50(arg2, &arg_8, arg1 + 0x164, &var_128, 0)
int64_t* rcx_5 = *(*(arg4 + 0x5c0) + 0x20)
(*(*rcx_5 + 0x48))(rcx_5)
float zmm1_1[0x4] = zmm0_1
zmm0_1 = 0x3a83126f

if (not(zmm1_1[0] < 0.00100000005f))
    zmm0_1 = __minss_xmmss_memss(zmm1_1[0], 0x40a00000)

zmm0_1[0] = zmm0_1[0] * 0.0174532924f
arg_40.d = tanf(zmm0_1[0])
sub_1405eb490(arg2, &arg_8, arg1 + 0x16a, &arg_40, 0)
arg_40.d = *(arg4 + 0x3d0)
arg_40:4.d = *(arg4 + 0x3d4)
sub_1405d0cd0(arg2, &arg_8, arg1 + 0x170, &arg_40, 0)

if (arg7 != 0)
    sub_1411181f0(arg1 + 0x176, arg2, &arg_8, arg7)

float zmm3[0x4] = data_142d4cc00
float zmm4[0x4] = data_142d4cc20
float zmm5[0x4] = data_142d4cc30
float zmm10[0x4] = *(arg4 + 0xb0)
float zmm9[0x4] = *(arg4 + 0xa0)
float zmm11[0x4] = *(arg4 + 0xc0)
float zmm12[0x4] = *(arg4 + 0xd0)
float zmm13[0x4] = *(arg4 + 0x54)
int32_t zmm6 = *(arg4 + 0x58)
int128_t zmm8 = *(arg4 + 0x5c)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
float temp0_5[0x4] = _mm_mul_ps(temp0_2, zmm9)
float temp0_6[0x4] = _mm_mul_ps(temp0_3, zmm10)
float temp0_7[0x4] = _mm_mul_ps(temp0_4, zmm11)
float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_9[0x4] = _mm_add_ps(temp0_5, temp0_6)
float temp0_10[0x4] = _mm_mul_ps(temp0_8, zmm12)
float temp0_11[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xe1)
float temp0_12[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
temp0_11[0] = zmm6
float temp0_13[0x4] = _mm_mul_ps(temp0_12, zmm10)
float temp0_14[0x4] = _mm_add_ps(temp0_9, temp0_7)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc6)
temp0_15[0] = zmm8.d
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm11)
float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_10)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x27)
temp0_19[0] = 0x3f800000
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x39)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm9)
float var_118[0x4] = temp0_18
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm9)
float temp0_25[0x4] = _mm_add_ps(temp0_22, temp0_13)
float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm12)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), zmm10)
float temp0_30[0x4] = _mm_add_ps(temp0_25, temp0_17)
float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm11)
float temp0_33[0x4] = _mm_add_ps(temp0_24, temp0_29)
float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm12)
float temp0_36[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
float temp0_37[0x4] = _mm_add_ps(temp0_30, temp0_27)
float temp0_38[0x4] = _mm_mul_ps(temp0_36, zmm10)
float temp0_39[0x4] = _mm_add_ps(temp0_33, temp0_32)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xaa), zmm11)
float var_108[0x4] = temp0_37
float var_f8[0x4] = _mm_add_ps(temp0_39, temp0_35)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0), zmm9)
float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xff), zmm12)
float var_e8[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_44, temp0_38), temp0_41), temp0_46)
sub_1405eb5d0(arg2, &arg_8, arg1 + 0x1a2, &var_118, 0)
return sub_1405eb490(arg2, &arg_8, arg1 + 0x1a8, &data_1439b5c20, 0)
