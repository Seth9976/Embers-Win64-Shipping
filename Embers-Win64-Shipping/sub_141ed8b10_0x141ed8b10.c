// 函数: sub_141ed8b10
// 地址: 0x141ed8b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x410)
int128_t* result = arg2

if (r9 != 0 && *(r9 + 0x70) + *(r9 + 0x60) + *(r9 + 0x50) + *(r9 + 0x40) + *(r9 + 0x30) s> 0)
    int128_t var_28
    sub_141ebcf20(r9 + 0x28, &var_28, arg3)
    *result = var_28
    int64_t var_18
    result[1].q = var_18
    int32_t var_10
    *(result + 0x18) = var_10
    return result

float zmm2[0x4] = arg3[1]
arg2[3].d = 0
float var_30 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
*arg2 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
arg2[1].d = var_30
int32_t rax_9 = data_143dbb200
*(arg2 + 0xc) = data_143dbb1f8.q
*(arg2 + 0x14) = rax_9
return result
