// 函数: sub_141c43730
// 地址: 0x141c43730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = arg2
int64_t rcx = sx.q(*(arg1 + 0x14))
int64_t r8 = *(arg1 + 8)
int32_t rax = (rcx - 1).d
int32_t zmm4 = *(r8 + (rcx << 2))

if (rax s< 0)
    rax = *(arg1 + 0x10) - 1

arg2 = *(arg1 + 0x20)
uint128_t zmm2
zmm2.d = (*(r8 + (sx.q(rax) << 2))).d f- zmm4
int64_t rax_4 = sx.q(*(arg1 + 0x18))
arg2.d = arg2.d f- _mm_cvtepi32_ps(zx.o(int.d(arg2.d))).d
zmm2.d = zmm2.d f* arg2.d
zmm2.d = zmm2.d f+ zmm4

if (rcx.d != rax_4.d)
    uint128_t zmm0 = *(arg1 + 0x48)
    arg2.d = zmm0.d f* zmm2.d
    arg2.d = arg2.d f+ zmm3.d
    zmm0.d = zmm0.d f* arg2.d
    zmm2.d = zmm2.d f- zmm0.d
    *(r8 + (rax_4 << 2)) = arg2.d
else
    *(r8 + (rax_4 << 2)) = zmm3.d

*(arg1 + 0x18) += 1
int32_t rax_5 = *(arg1 + 0x18)

if (rax_5 s>= *(arg1 + 0x10))
    rax_5 = 0

*(arg1 + 0x14) += 1
*(arg1 + 0x18) = rax_5
int32_t result = *(arg1 + 0x14)

if (result s>= *(arg1 + 0x10))
    result = 0

*(arg1 + 0x14) = result
return result
