// 函数: sub_141478040
// 地址: 0x141478040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = *arg2
float zmm1[0x4] = *(arg2 + 8)
int128_t zmm2 = *(arg2 + 4)
int128_t zmm6 = zmm2
float zmm7[0x4] = zmm3
int128_t zmm8 = arg6
float zmm5 = zmm8.d + arg3[1]
float zmm4 = zmm8.d + *arg3
zmm8.d = zmm8.d f+ arg3[2]
zmm2.d = zmm2.d f- zmm5
zmm3[0] = zmm3[0] - zmm4
zmm1[0] = zmm1[0] f+ zmm8.d
zmm6.d = zmm6.d f+ zmm5
zmm5 = *arg5 - *arg4
zmm7[0] = zmm7[0] + zmm4
zmm1[0] = zmm1[0] f- zmm8.d
float var_70 = zmm1[0]
float zmm0[0x4] = zmm3
zmm3 = arg5[1]
zmm3[0] = zmm3[0] - arg4[1]
float var_60 = zmm1[0]
zmm1 = 0x3f800000
float temp0[0x4] = _mm_unpacklo_ps(zmm0, zmm2.q)
zmm2.d = arg5[2].d f- arg4[2]
int64_t var_58 = temp0.q
float var_50 = var_60
float temp0_1[0x4] = _mm_unpacklo_ps(zmm7, zmm6.q)
int32_t var_60_1 = zmm2.d
float var_68 = zmm5
float var_64 = zmm3[0]
int64_t var_4c = temp0_1.q
float var_44 = var_70
char var_40 = 1
float var_78

if (zmm5 == 0f)
    var_78 = 3.39999995e+38f
else
    zmm0 = 0x3f800000
    zmm0[0] = 1f / zmm5
    var_78 = zmm0[0]

if (zmm3[0] == 0f)
    int32_t var_74_1 = 0x7f7fc99e
else
    zmm0 = 0x3f800000
    zmm0[0] = 1f / zmm3[0]
    float var_74 = zmm0[0]

if (zmm2.d f== 0f)
    int32_t var_70_2 = 0x7f7fc99e
else
    zmm1[0] = 1f f/ zmm2.d
    float var_70_1 = zmm1[0]

return sub_1409cb460(&var_58, arg4, arg5, &var_68, &var_78)
