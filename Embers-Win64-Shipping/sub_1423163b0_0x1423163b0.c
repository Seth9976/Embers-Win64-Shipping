// 函数: sub_1423163b0
// 地址: 0x1423163b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg2

if (arg3 == 0)
    *arg2 = 0
    arg2[1].d = 0
    return result

float var_48[0x3][0x4]

if (sub_142316450(arg1, &var_48, arg3) != 0)
    int32_t var_18
    *result = var_18[0]
    int32_t var_10
    result[2] = var_10[0]
    int32_t var_14
    result[1] = var_14[0]
    return result

float zmm1[0x4] = *(arg3 + 0x1d0)
*result = zmm1[0]
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
result[2] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
result[1] = temp0[0]
return result
