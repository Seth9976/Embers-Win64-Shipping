// 函数: sub_140ae16d0
// 地址: 0x140ae16d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4] = *arg1
float zmm9[0x4] = zx.o(0)

if (zmm8[0] >= 0f)
    zmm8 = _mm_min_ss(zmm8[0], 0x3f800000)
else
    zmm8 = zx.o(0)

float zmm7[0x4] = *(arg1 + 4)

if (zmm7[0] >= 0f)
    zmm7 = _mm_min_ss(zmm7[0], 0x3f800000)
else
    zmm7 = zx.o(0)

float zmm6[0x4] = *(arg1 + 8)

if (zmm6[0] >= 0f)
    zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
else
    zmm6 = zx.o(0)

float zmm1[0x4] = *(arg1 + 0xc)

if (not(zmm1[0] < 0f))
    zmm9 = _mm_min_ss(zmm1[0], 0x3f800000)

if (arg3 != 0)
    if (zmm8[0] > 0.00313080009f)
        zmm8 = powf(zmm8[0], 0x3ed55555[0])
        zmm8[0] = zmm8[0] * 1.05499995f
        zmm8[0] = zmm8[0] - 0.0549999997f
    else
        zmm8[0] = zmm8[0] * 12.9200001f
    
    if (zmm7[0] > 0.00313080009f)
        zmm7 = powf(zmm7[0], 0x3ed55555[0])
        zmm7[0] = zmm7[0] * 1.05499995f
        zmm7[0] = zmm7[0] - 0.0549999997f
    else
        zmm7[0] = zmm7[0] * 12.9200001f
    
    if (zmm6[0] > 0.00313080009f)
        zmm6 = powf(zmm6[0], 0x3ed55555[0])
        zmm6[0] = zmm6[0] * 1.05499995f
        zmm6[0] = zmm6[0] - 0.0549999997f
    else
        zmm6[0] = zmm6[0] * 12.9200001f

zmm9[0] = zmm9[0] * 255.998993f
zmm8[0] = zmm8[0] * 255.998993f
zmm9[0] = zmm9[0] + zmm9[0]
zmm7[0] = zmm7[0] * 255.998993f
zmm6[0] = zmm6[0] * 255.998993f
zmm8[0] = zmm8[0] + zmm8[0]
zmm7[0] = zmm7[0] + zmm7[0]
zmm9[0] = zmm9[0] - 0.5f
zmm6[0] = zmm6[0] + zmm6[0]
zmm8[0] = zmm8[0] - 0.5f
zmm7[0] = zmm7[0] - 0.5f
int32_t rax = int.d(zmm9[0])
zmm6[0] = zmm6[0] - 0.5f
arg2[3] = (rax s>> 1).b
arg2[2] = (int.d(zmm8[0]) s>> 1).b
arg2[1] = (int.d(zmm7[0]) s>> 1).b
*arg2 = (int.d(zmm6[0]) s>> 1).b
return arg2
