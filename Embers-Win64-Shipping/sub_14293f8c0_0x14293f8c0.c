// 函数: sub_14293f8c0
// 地址: 0x14293f8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1 u<= &arg3[0xf] && &(*arg1)[0xf] u>= arg3)
        || (arg1 u<= arg2 + 0x3c && &(*arg1)[0xf] u>= arg2))
    int32_t* rdx = arg2 - arg3
    int64_t i_1 = 0x10
    int32_t* rcx = arg1 - arg3
    int32_t result
    int64_t i
    
    do
        result = *(rdx + arg3) - *arg3
        *(rcx + arg3) = result
        arg3 = &arg3[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    return result

int32_t zmm2[0x4] = arg2[1]
int32_t temp0_1[0x4] = _mm_sub_epi32(*arg2, *arg3)
int32_t zmm0[0x4] = *(arg3 + 0x10)
*arg1 = temp0_1
int32_t zmm1[0x4] = arg2[2]
int32_t temp0_2[0x4] = _mm_sub_epi32(zmm2, zmm0)
zmm0 = *(arg3 + 0x20)
arg1[1] = temp0_2
zmm2 = arg2[3]
int32_t temp0_3[0x4] = _mm_sub_epi32(zmm1, zmm0)
zmm0 = *(arg3 + 0x30)
arg1[2] = temp0_3
arg1[3] = _mm_sub_epi32(zmm2, zmm0)
return arg2 + 0x3c
