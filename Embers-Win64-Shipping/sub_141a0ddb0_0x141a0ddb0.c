// 函数: sub_141a0ddb0
// 地址: 0x141a0ddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x158)
*arg3 = *(arg1 + 0x568)
*arg4 = *(arg1 + 0x550)
*arg5 = *(arg1 + 0x570)
uint128_t zmm0 = *(arg1 + 0x570)
uint128_t zmm1 = *(arg1 + 0x574)
float zmm6[0x4] = *(arg1 + 0x578)
int32_t zmm5 = *(arg1 + 0x57c)
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4a4) * *(arg1 + 0x49c)))
uint128_t zmm3
zmm3.d = zmm1.d f* zmm2.d
zmm3.d = zmm3.d f+ zmm5
float zmm4 = zmm0.d f* zmm2.d + zmm6[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0_1[0] = zmm5
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
zmm3.d = zmm3.d f- zmm1.d
temp0_2[0] = zmm4 f- zmm0.d
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_3[0] = zmm3.d
arg5[1] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
int32_t rax_5 = *(arg1 + 0x4b4)
int32_t rdx = *(arg1 + 0x4b8)
int32_t rcx_1 = *(arg1 + 0x49c) * *(arg1 + 0x4a0)
*(arg5 + 0x68) = rax_5
*(arg5 + 0x6c) = rdx
arg5[7].d = rax_5 + rcx_1
*(arg5 + 0x74) = rcx_1 + rdx
*(arg5 + 0x78) = *(arg1 + 0x49c)
zmm1 = *(arg1 + 0x580)
zmm2 = *(arg1 + 0x584)
zmm0 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x4a0)))
_mm_shuffle_ps(zmm0, zmm0, 0xe1)
zmm3.d = zmm0.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm1.d
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3.d = zmm2.d
arg5[8] = _mm_shuffle_ps(zmm3, zmm3, 0x39)
int32_t result = *(arg1 + 0x558)
arg5[9].d = result
return result
