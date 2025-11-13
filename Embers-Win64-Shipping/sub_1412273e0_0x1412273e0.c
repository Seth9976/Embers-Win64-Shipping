// 函数: sub_1412273e0
// 地址: 0x1412273e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58
(*(*arg2 + 0x10))(arg2, &var_58)
float zmm1 = var_58 f- *(arg1 + 0x60c)
int32_t var_54
int128_t zmm10
zmm10.d = var_54.d f- *(arg1 + 0x610)
float zmm7[0x4] = 0x40c00000
int32_t var_50
int128_t zmm0
zmm0.d = var_50.d f- *(arg1 + 0x614)
zmm10.d = zmm10.d f* zmm10.d
zmm0.d = zmm0.d f* zmm0.d
zmm10.d = zmm10.d f+ zmm1 * zmm1
zmm10.d = zmm10.d f+ zmm0.d
float var_4c
zmm1 = __minss_xmmss_memss(data_1439b6da8 / var_4c, 0x3951b717) f* *(arg1 + 0xd5c)
zmm7[0] = 6f - zmm1 * zmm1 f* zmm10.d * 6f

if (zmm7[0] >= 0f)
    zmm7 = __minss_xmmss_memss(zmm7[0], 0x3f800000)
else
    zmm7 = zx.o(0)

(*(*arg2 + 0xf0))(arg2)
int128_t result
result.d = zmm0.d f* data_1439b6dcc
(*(*arg2 + 0xf8))(arg2)

if (result.d f== 0f)
    result = 0x3f800000
else
    result.d = result.d f- _mm_sqrt_ss(0, zmm10.d)
    result.d = result.d f/ zmm0.d
    
    if (not(result.d f>= 0f))
        result = zx.o(0)
    else if (not(result.d f< 1f))
        result = 0x3f800000

result.d = result.d f* zmm7[0]
return result
