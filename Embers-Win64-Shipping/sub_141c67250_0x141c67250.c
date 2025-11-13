// 函数: sub_141c67250
// 地址: 0x141c67250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x320) = 0

if (*(arg1 + 0x324) s<= 0xffffffff)
    sub_140775b10(arg1 + 0x318, 0)

void* result = *(arg1 + 0x88)
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(*(result + 0xc))).d f* arg2.d
int32_t rdx = int.d(zmm0.d)

if (rdx s> *(arg1 + 0x324))
    result = sub_140775b10(arg1 + 0x318, rdx)

*(arg1 + 0x32c) |= 1
return result
