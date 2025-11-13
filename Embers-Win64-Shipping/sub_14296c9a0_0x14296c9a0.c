// 函数: sub_14296c9a0
// 地址: 0x14296c9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if ((arg1 u<= arg3 + 0x3c && &arg1[0xf] u>= arg3) || (arg1 u<= arg2 + 0x3c && &arg1[0xf] u>= arg2))
    int32_t* rdx = arg2 - arg3
    int32_t* r9_1 = arg1 - arg3
    int64_t i_1 = 0x10
    int64_t i
    
    do
        *(r9_1 + arg3) = *(rdx + arg3) + *arg3
        arg3 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
    return sub_14293f960(arg1) __tailcall

int32_t zmm2[0x4] = arg2[1]
int32_t temp0_1[0x4] = _mm_add_epi32(*arg2, *arg3)
int32_t zmm0[0x4] = arg3[1]
*arg1 = temp0_1
int32_t zmm1[0x4] = arg2[2]
int32_t temp0_2[0x4] = _mm_add_epi32(zmm2, zmm0)
zmm0 = arg3[2]
*(arg1 + 0x10) = temp0_2
zmm2 = arg2[3]
int32_t temp0_3[0x4] = _mm_add_epi32(zmm1, zmm0)
zmm0 = arg3[3]
*(arg1 + 0x20) = temp0_3
*(arg1 + 0x30) = _mm_add_epi32(zmm2, zmm0)
return sub_14293f960(arg1) __tailcall
