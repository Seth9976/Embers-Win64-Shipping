// 函数: sub_141f36bf0
// 地址: 0x141f36bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *(*(arg1 + 0xb0) + 0x1d0)
void* rax_1 = sub_140d3c6e0(arg1 + 0x14c)
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float zmm7[0x4] = *(rax_1 + 0x1d0)
float zmm9[0x4] = zmm7
float zmm8[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
zmm9[0] = zmm9[0] - zmm6[0]
zmm8[0] = zmm8[0] - temp0[0]
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
zmm7[0] = zmm7[0] - temp0_3[0]
zmm9[0] = zmm9[0] * zmm9[0]
zmm8[0] = zmm8[0] * zmm8[0]
float zmm1 = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] + zmm9[0]
zmm8[0] = zmm8[0] + zmm1

if (not(zmm8[0] == 1f))
    if (zmm8[0] >= 9.99999994e-09f)
        float zmm3[0x4] = zx.o(0)
        float zmm2[0x4] = 0x3f000000
        zmm3[0] = zmm8[0]
        float temp0_4[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        temp0_4[0] = temp0_4[0] * temp0_4[0]
        zmm2[0] = 0.5f - zmm3[0] * temp0_4[0]
        temp0_4[0] = temp0_4[0] * zmm2[0]
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        zmm3[0] = zmm3[0] * temp0_4[0] * temp0_4[0]
        temp0_4[0] = temp0_4[0] * (0.5f - zmm3[0])
        temp0_4[0] = temp0_4[0] + temp0_4[0]
        zmm9[0] = zmm9[0] * temp0_4[0]
        zmm8[0] = zmm8[0] * temp0_4[0]
        zmm7[0] = zmm7[0] * temp0_4[0]
    else
        zmm9 = data_143dbb1f8
        zmm8 = data_143dbb1fc
        zmm7 = data_143dbb200

float zmm0[0x4] = *(arg1 + 0x148)
zmm9[0] = zmm9[0] * zmm0[0]
zmm8[0] = zmm8[0] * zmm0[0]
zmm7[0] = zmm7[0] * zmm0[0]
*arg2 = zmm9[0]
arg2[1] = zmm8[0]
arg2[2] = zmm7[0]
return arg2
