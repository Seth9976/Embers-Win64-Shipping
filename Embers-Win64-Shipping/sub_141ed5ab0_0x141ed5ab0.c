// 函数: sub_141ed5ab0
// 地址: 0x141ed5ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x16]
float zmm6[0x4] = *(result + 0x1d0)
float zmm9[0x4] = zmm6
zmm9[0] = zmm9[0] f- *arg2
float zmm7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
zmm7[0] = zmm7[0] f- arg2[1]
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
float zmm10[0x4] = arg4
zmm6[0] = zmm6[0] f- arg2[2]
float zmm12[0x4] = arg3
zmm9[0] = zmm9[0] * zmm9[0]
zmm7[0] = zmm7[0] * zmm7[0]
float zmm1 = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] + zmm9[0]
zmm7[0] = zmm7[0] + zmm1
float temp0_2[0x4] = _mm_sqrt_ss(0, zmm7[0])

if (temp0_2[0] > zmm12[0])
    return result

float zmm8[0x4] = 0x3f800000

if (not(zmm7[0] == 1f))
    if (zmm7[0] >= 9.99999994e-09f)
        arg4 = zx.o(0)
        arg3 = 0x3f000000
        arg4[0] = zmm7[0]
        float temp0_3[0x4] = _mm_rsqrt_ss(arg4[0], arg4[0])
        arg4[0] = arg4[0] * 0.5f
        temp0_3[0] = temp0_3[0] * temp0_3[0]
        arg3[0] = 0.5f - arg4[0] * temp0_3[0]
        temp0_3[0] = temp0_3[0] * arg3[0]
        temp0_3[0] = temp0_3[0] + temp0_3[0]
        arg4[0] = arg4[0] * temp0_3[0] * temp0_3[0]
        temp0_3[0] = temp0_3[0] * (0.5f - arg4[0])
        temp0_3[0] = temp0_3[0] + temp0_3[0]
        zmm9[0] = zmm9[0] * temp0_3[0]
        zmm7[0] = zmm7[0] * temp0_3[0]
        zmm6[0] = zmm6[0] * temp0_3[0]
    else
        zmm9 = data_143dbb1f8
        zmm7 = data_143dbb1fc
        zmm6 = data_143dbb200

if (arg5 == 1 && not(zmm12[0] <= 0f))
    temp0_2[0] = temp0_2[0] / zmm12[0]
    zmm8[0] = 1f - temp0_2[0]
    zmm8[0] = zmm8[0] * zmm10[0]
    zmm10 = zmm8

zmm6[0] = zmm6[0] * zmm10[0]
zmm9[0] = zmm9[0] * zmm10[0]
float var_80_1 = zmm6[0]
int64_t rax_1 = *arg1
zmm7[0] = zmm7[0] * zmm10[0]
float temp0_4[0x4] = _mm_unpacklo_ps(zmm9, zmm7[0].q)
int64_t var_98 = temp0_4.q
return (*(rax_1 + 0x7f0))(temp0_4, &var_98, zx.q(arg6), arg4, var_98, var_80_1)
