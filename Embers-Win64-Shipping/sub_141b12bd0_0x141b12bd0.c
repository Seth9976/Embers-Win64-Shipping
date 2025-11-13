// 函数: sub_141b12bd0
// 地址: 0x141b12bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
uint128_t zmm2 = *(arg1 + 0x20)

if (not(zmm2.d f>= 0f))
    *(arg1 + 0x20) = 0
    zmm2 = zx.o(0)
else if (not(zmm2.d f<= 1f))
    *(arg1 + 0x20) = 0x3f800000
    zmm2 = 0x3f800000

if (*(arg1 + 0x27) != 0)
    uint128_t zmm0
    zmm0.d = 1f f- zmm2.d
    *(arg1 + 0x20) = zmm0.d
    zmm2 = zmm0

int64_t var_188
sub_141f63820(arg3, &var_188, zmm2, 1, 1)
*arg4 = var_188
int32_t var_180
arg4[1].d = var_180
sub_141f65970(arg3, &var_188, *(arg1 + 0x20), 1, 1)
*arg5 = var_188
arg5[1].d = var_180
void var_d8
float* rax_4
float zmm6[0x4]
float zmm7[0x4]
rax_4, zmm6, zmm7 = sub_14077e760(&var_d8, arg5)
float var_168[0x4] = *rax_4
float var_158[0x4] = *(rax_4 + 0x10)
float zmm0_3[0x4] = *(rax_4 + 0x20)
char rax_5 = *(arg1 + 0x25)
float var_138[0x4] = *(rax_4 + 0x30)
int64_t var_198 = 0
int32_t var_190 = 0

switch (rax_5)
    case 0
        var_198.d = 0x3f800000
    case 1
        var_198:4.d = 0x3f800000
    case 2
        int32_t var_190_1 = 0x3f800000
    case 3
        var_198.d = 0xbf800000
    case 4
        var_198:4.d = 0xbf800000
    case 5
        int32_t var_190_2 = 0xbf800000

float zmm1[0x4] = zx.o(0)
float zmm2_2[0x4] = zx.o(0)

switch (*(arg1 + 0x24))
    case 0
        zmm1 = zmm7
    case 1
        zmm2_2 = zmm7
    case 2
        zmm6 = zmm7
    case 3
        zmm1 = 0xbf800000
    case 4
        zmm2_2 = 0xbf800000
    case 5
        zmm6 = 0xbf800000

float var_178 = (zmm1 ^ 0x80000000)[0]
float var_174 = (zmm2_2 ^ 0x80000000)[0]
float var_170 = (zmm6 ^ 0x80000000)[0]
float var_118[0x4]
sub_140ada8d0(&var_118, &var_178, &var_198)
float zmm2_3[0x4] = var_118
float zmm8[0x4] = var_168
float temp0[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
float temp0_1[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
float temp0_3[0x4] = _mm_mul_ps(temp0, zmm8)
float temp0_4[0x4] = _mm_mul_ps(temp0_1, zmm0_3)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_138)
float temp0_10[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_2, var_158), temp0_3), temp0_4), temp0_6)
float var_108[0x4]
float temp0_11[0x4] = _mm_shuffle_ps(var_108, var_108, 0)
float temp0_12[0x4] = _mm_shuffle_ps(var_108, var_108, 0xaa)
float temp0_13[0x4] = _mm_shuffle_ps(var_108, var_108, 0x55)
float temp0_14[0x4] = _mm_mul_ps(temp0_11, zmm8)
float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm0_3)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_108, var_108, 0xff), var_138)
float temp0_18[0x4] = _mm_mul_ps(temp0_13, var_158)
var_168 = temp0_10
float temp0_21[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_18, temp0_14), temp0_15), temp0_17)
float var_f8[0x4]
float temp0_22[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0x55)
float temp0_23[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0)
float temp0_24[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xaa)
float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm8)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm0_3)
float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_f8, var_f8, 0xff), var_138)
float var_158_1[0x4] = temp0_21
float temp0_32[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_22, var_158), temp0_25), temp0_26), temp0_28)
float var_e8[0x4]
float temp0_33[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0x55)
float temp0_34[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0)
float temp0_35[0x4] = _mm_mul_ps(temp0_33, var_158)
float temp0_36[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xaa)
float temp0_37[0x4] = _mm_mul_ps(temp0_34, zmm8)
float temp0_38[0x4] = _mm_mul_ps(temp0_36, zmm0_3)
float temp0_39[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xff)
float temp0_40[0x4] = _mm_add_ps(temp0_35, temp0_37)
float temp0_41[0x4] = _mm_mul_ps(temp0_39, var_138)
float var_148_1[0x4] = temp0_32
float var_138_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_40, temp0_38), temp0_41)
int64_t* rax_7 = sub_140adf440(&var_168, &var_188)
*arg5 = *rax_7
int32_t result = rax_7[1].d
arg5[1].d = result

if (*(arg1 + 0x28) != 0)
    *arg5 = 0
    arg5[1].d = 0

if (*(arg1 + 0x26) == 0)
    uint128_t var_128 = *sub_141f3cf60(arg2, &var_d8)
    int32_t* rax_9 = sub_140adf5d0(&var_128, &var_188)
    *arg5 = *rax_9
    result = rax_9[2]
    arg5[1].d = result

__security_check_cookie(rax_1 ^ &var_1c8)
return result
