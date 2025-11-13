// 函数: sub_141c7d910
// 地址: 0x141c7d910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_6 = *(arg1 + 0x10)
uint128_t zmm0

if (rax_6 != 0xffffffff)
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_6)).d f* arg3
else
    zmm0 = 0xbf800000

*(arg2 + 0x10) = int.d(zmm0.d)
int32_t rax_1 = *(arg1 + 0x14)

if (rax_1 != 0xffffffff)
    zmm0.d = _mm_cvtepi32_ps(zx.o(rax_1)).d f* arg3
else
    zmm0 = 0xbf800000

*(arg2 + 0x14) = int.d(zmm0.d)
int32_t rax_3 = *(arg1 + 0x18)

if (rax_3 == 0xffffffff)
    int32_t rax_4 = int.d(-1f)
    *(arg2 + 0x18) = rax_4
    return rax_4

zmm0.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f* arg3
int32_t rax_5 = int.d(zmm0.d)
*(arg2 + 0x18) = rax_5
return rax_5
