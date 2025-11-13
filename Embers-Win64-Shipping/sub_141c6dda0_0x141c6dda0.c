// 函数: sub_141c6dda0
// 地址: 0x141c6dda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_5c = 0x3f000000
float zmm0 = *(arg2 + 0x2c) * 0.316455692f
int32_t var_58
__builtin_strncpy(&var_58, "333?", 4)

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

float var_68 = zmm0
zmm0 = *(arg2 + 0x30) * 3.33333325f

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

float zmm3 = *(arg2 + 0x20)
float var_64 = zmm0 * 300f

if (zmm3 >= 0f)
    zmm3 = _mm_min_ss(zmm3, 0x3f800000)
else
    zmm3 = (zx.o(0)).d

zmm0 = *(arg2 + 0x38) * 10f
float var_60 = zmm3

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

float zmm6[0x4] = *(arg2 + 0x1c)
float var_54 = zmm0 * 100f

if (zmm6[0] >= 0f)
    _mm_min_ss(zmm6[0], 0x3f800000)

zmm0 = *(arg2 + 0x3c)

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

zmm3 = *(arg2 + 0x18)
float var_4c = zmm0 * 0.799000025f + 0.200000003f

if (zmm3 >= 0f)
    zmm3 = _mm_min_ss(zmm3, 0x3f800000)
else
    zmm3 = (zx.o(0)).d

float var_48 = zmm3
zmm0 = (*(arg2 + 0x28) - 0.100000001f) * 0.526315808f

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

zmm3 = *(arg2 + 0x14)
float var_44 = zmm0 * 0.999000013f

if (zmm3 >= 0f)
    zmm3 = _mm_min_ss(zmm3, 0x3f800000)
else
    zmm3 = (zx.o(0)).d

zmm0 = *(arg2 + 0x10) * 0.100000001f
float var_3c = zmm3 * 0.99000001f + 0.00999999978f

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

float zmm0_1
float zmm6_1
zmm0_1, zmm6_1 = sub_141f86ef0(arg1 + 0x9a0, *(arg2 + 0x24), zx.o(0))
zmm6_1 = logf(__maxss_xmmss_memss(zmm6_1, 0x322bcc77))[0] * 8.68588924f
EnterCriticalSection(arg1 + 0x978)
*(arg1 + 0x940) = 1
float zmm2_1[0x4] = var_58.o
float zmm0_2[0x4] = var_48.o
float temp0_12[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
float temp0_13[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xd2)
temp0_12[0] = zmm6_1
float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
temp0_13[0] = zmm0_1
float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
*(arg1 + 0x944) = var_68.o
*(arg1 + 0x954) = temp0_14
*(arg1 + 0x964) = temp0_15
*(arg1 + 0x974) = zmm0 * 10f

if (arg1 != -0x978)
    LeaveCriticalSection(arg1 + 0x978)

float result
result.b = 1
*(arg1 + 0xa24) = 1
return result
