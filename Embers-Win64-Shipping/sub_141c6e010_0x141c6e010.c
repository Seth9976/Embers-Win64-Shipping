// 函数: sub_141c6e010
// 地址: 0x141c6e010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58
sub_141c30d00(&var_58)
float zmm0 = *(arg2 + 0x2c) * 0.316455692f

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

var_58 = zmm0
zmm0 = *(arg2 + 0x30) * 3.33333325f

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

float zmm3 = *(arg2 + 0x20)
float var_54 = zmm0 * 300f

if (zmm3 >= 0f)
    zmm3 = _mm_min_ss(zmm3, 0x3f800000)
else
    zmm3 = (zx.o(0)).d

zmm0 = *(arg2 + 0x38) * 10f
float var_50 = zmm3

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

zmm3 = *(arg2 + 0x1c)
float var_44 = zmm0 * 100f

if (zmm3 >= 0f)
    zmm3 = _mm_min_ss(zmm3, 0x3f800000)
else
    zmm3 = (zx.o(0)).d

zmm0 = *(arg2 + 0x3c)
float var_40 = zmm3

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

float var_3c = zmm0 * 0.5f + 0.100000001f
zmm0 = (*(arg2 + 0x18) - 0.0500000007f) * 1.05263162f

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

float var_38 = zmm0 * 0.949999988f
zmm0 = (*(arg2 + 0x28) - 0.0500000007f) * 0.526315749f

if (zmm0 >= 0f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = (zx.o(0)).d

zmm3 = *(arg2 + 0x14) * 1.05263162f
float var_34 = zmm0 * 0.999000013f

if (zmm3 >= 0f)
    zmm3 = _mm_min_ss(zmm3, 0x3f800000)
else
    zmm3 = (zx.o(0)).d

float var_2c = zmm3 * 0.939999998f + 0.0599999987f
float var_30 = sub_141f86ef0(arg1 + 0x128, *(arg2 + 0x24), zx.o(0))
int128_t zmm0_2
zmm0_2.d = logf(__maxss_xmmss_memss(var_40, 0x322bcc77)).d f* 8.68588924f
int32_t var_40_1 = zmm0_2.d
EnterCriticalSection(arg1 + 0xb0)
*(arg1 + 0x78) = 1
*(arg1 + 0x7c) = var_58.o
int128_t var_48
*(arg1 + 0x8c) = var_48
*(arg1 + 0x9c) = var_38.o
int32_t var_28
*(arg1 + 0xac) = var_28

if (arg1 != -0xb0)
    LeaveCriticalSection(arg1 + 0xb0)

int32_t zmm6 = *(arg2 + 0x10)
EnterCriticalSection(arg1 + 0xe8)
*(arg1 + 0xdc) = zmm6
*(arg1 + 0xd8) = 1
*(arg1 + 0xe0) = 0

if (arg1 != -0xe8)
    LeaveCriticalSection(arg1 + 0xe8)

int64_t result
result.b = 1
return result
