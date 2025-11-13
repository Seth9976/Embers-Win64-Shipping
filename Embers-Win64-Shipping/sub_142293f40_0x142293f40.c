// 函数: sub_142293f40
// 地址: 0x142293f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = arg3[3]
zmm0[0] = zmm0[0] f- *arg3
float zmm1 = arg3[5] f- arg3[2]
int128_t zmm6
zmm6.d = 1f / zmm0[0]
zmm0 = arg3[4]
zmm0[0] = zmm0[0] f- arg3[1]
float zmm4 = 1f / zmm1
int128_t zmm2
zmm2.d = 1f / zmm0[0]
int128_t zmm8
zmm8.d = zmm2.d f* arg2[1]
zmm2.d = zmm2.d f* arg3[1]
int64_t var_38 = *arg4
zmm0 = zx.o(0)
zmm8.d = zmm8.d f- zmm2.d
float zmm3 = zmm4 * arg2[2] - zmm4 f* arg3[2]
zmm4 = zmm6.d * *arg2
zmm6.d = zmm6.d f* *arg3
zmm0[0] = float.s((var_38 u>> 0x20).d)
zmm8.d = zmm8.d f* zmm0[0]
zmm0 = zx.o(0)
zmm0[0] = float.s(arg4[1].d)
zmm3 = zmm3 * zmm0[0]
zmm0 = zx.o(0)
zmm0[0] = float.s(var_38.d)
zmm4 = (zmm4 f- zmm6.d) * zmm0[0]

if (zmm4 >= 0f)
    float temp0_1[0x4] = _mm_cvtepi32_ps(zx.o(*arg4))
    temp0_1[0] = temp0_1[0] - 0.00999999978f
    zmm0 = _mm_min_ss(temp0_1[0], zmm4)
else
    zmm0 = zx.o(0)

*arg1 = zmm0[0]

if (zmm8.d f>= 0f)
    float temp0_3[0x4] = _mm_cvtepi32_ps(zx.o(*(arg4 + 4)))
    temp0_3[0] = temp0_3[0] - 0.00999999978f
    zmm0 = _mm_min_ss(temp0_3[0], zmm8.d)
else
    zmm0 = zx.o(0)

arg1[1] = zmm0[0]

if (not(zmm3 >= 0f))
    arg1[2] = 0
    return arg1

float temp0_5[0x4] = _mm_cvtepi32_ps(zx.o(arg4[1].d))
temp0_5[0] = temp0_5[0] - 0.00999999978f
arg1[2] = _mm_min_ss(temp0_5[0], zmm3)[0]
return arg1
