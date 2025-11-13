// 函数: sub_1419e6f60
// 地址: 0x1419e6f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4] = arg2
void var_d8
memset(&var_d8, 0, 0x88)
int32_t var_d0 = 0x3f800000
int64_t r8

if (arg4 == 0)
    r8 = 0
else
    r8 = *(arg4 + 0x250)

int32_t var_e8
(*(*arg3 + 0x18))(arg3, arg1, r8, &var_d8, &var_e8)
int32_t var_e4
float zmm7[0x4] = var_e4
float zmm8[0x4] = var_e8
int32_t var_e0
float zmm6[0x4] = var_e0
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] + zmm8[0]
zmm7[0] = zmm7[0] + zmm6[0]

if (not(zmm7[0] == 1f))
    if (zmm7[0] >= 9.99999994e-09f)
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        float zmm2[0x4] = 0x3f000000
        zmm7[0] = zmm7[0] * 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm7[0] = zmm7[0] * temp0_1[0]
        zmm2[0] = 0.5f - zmm7[0]
        temp0_1[0] = temp0_1[0] * zmm2[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm7[0] = zmm7[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] * (0.5f - zmm7[0])
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        zmm8[0] = zmm8[0] * temp0_1[0]
        zmm7[0] = zmm7[0] * temp0_1[0]
        zmm6[0] = zmm6[0] * temp0_1[0]
    else
        zmm8 = data_143dbb1f8
        zmm7 = data_143dbb1fc
        zmm6 = data_143dbb200

float zmm0[0x4] = *(arg1 + 0x268)
arg2 = *(arg1 + 0x27c)
zmm8[0] = zmm8[0] * zmm9[0]
zmm7[0] = zmm7[0] * zmm9[0]
zmm8[0] = zmm8[0] * zmm0[0]
zmm7[0] = zmm7[0] * zmm0[0]
zmm6[0] = zmm6[0] * zmm9[0]
zmm6[0] = zmm6[0] * zmm0[0]
zmm0 = arg2 ^ data_142d3f780

if (zmm8[0] >= zmm0[0])
    zmm8 = _mm_min_ss(zmm8[0], arg2[0])
else
    zmm8 = zmm0

if (not(zmm7[0] >= zmm0[0]))
    zmm7 = zmm0
else if (not(zmm7[0] < arg2[0]))
    zmm7 = arg2

if (not(zmm6[0] >= zmm0[0]))
    zmm6 = zmm0
else if (not(zmm6[0] < arg2[0]))
    zmm6 = arg2

zmm8[0] = zmm8[0] f+ *(arg1 + 0x250)
zmm7[0] = zmm7[0] f+ *(arg1 + 0x254)
zmm6[0] = zmm6[0] f+ *(arg1 + 0x258)
*(arg1 + 0x250) = zmm8[0]
*(arg1 + 0x254) = zmm7[0]
*(arg1 + 0x258) = zmm6[0]
sub_141dd7200(arg1, 1)
int512_t result
result.o = zx.o(0)
return result
