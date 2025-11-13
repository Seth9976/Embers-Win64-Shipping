// 函数: sub_141097410
// 地址: 0x141097410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10
int32_t* var_78 = &arg_10
int128_t zmm6 = *(arg2 + 8)
int32_t arg_8
int32_t* var_70 = &arg_8
int32_t** var_68 = &var_78
int32_t arg_20
int32_t* var_60 = &arg_20
arg_10 = 0x45c8a000
int32_t* var_58 = &arg_8
arg_8 = 0x45c6c000
arg_20 = 0xa
double zmm0
int128_t zmm6_1
float zmm7[0x4]
float zmm8_1[0x4]
zmm0, zmm6_1, zmm7, zmm8_1 = sub_14108d160(&var_68, 0x3f99999a, 0x45c6c000, zmm6)
int64_t zmm0_1
int32_t zmm9_1
zmm0_1, zmm9_1 = sub_14108d160(&var_68, zmm8_1, zmm7, zmm6_1)
int128_t zmm7_1
zmm7_1.d = fconvert.s(zmm0_1)
zmm0_1.d = zmm7_1.q.d f* -0.00579999993f
zmm0_1.d = zmm0_1.d f- zmm9_1
*arg1 = expf(zmm0_1.d).d
int128_t zmm0_2
zmm0_2.d = zmm7_1.d f* 0.0135000004f
zmm0_2.d = zmm0_2.d f+ zmm9_1
zmm7_1.d = zmm7_1.d f* 0.0331000015f
arg1[1] = expf((zmm0_2 ^ data_142d3f780).d)
zmm7_1.d = zmm7_1.d f+ zmm9_1
arg1[2] = expf((zmm7_1 ^ data_142d3f780).d)
arg1[3] = 0x3f800000
return arg1
