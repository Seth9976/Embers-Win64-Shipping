// 函数: sub_1406bc610
// 地址: 0x1406bc610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int32_t var_28 = 0
*arg2 = 0
arg2[1] = 0
int32_t var_28_1 = 1
char var_18 = 1
char var_10 = 0
float zmm2[0x4] = var_18.o
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
temp0[0] = 0
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0x87)
temp0_1[0] = 0x3f800000
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
var_18.o = temp0_2
var_18.o = temp0_2
sub_1405d62f0(arg2, &var_18)
return arg2
