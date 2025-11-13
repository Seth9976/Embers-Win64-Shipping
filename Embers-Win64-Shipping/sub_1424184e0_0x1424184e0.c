// 函数: sub_1424184e0
// 地址: 0x1424184e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x80) == 0 && *(arg1 + 0x84) == 0)
    return 

int64_t* rcx_1 = *(arg1 + 0x260) + 0x28
rcx_1[1].d -= 1
sub_140976b40(rcx_1)
int32_t rax_1 = *(arg1 + 0x78)
int32_t rcx_2 = *(arg1 + 0x7c)
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x40)))
*(arg1 + 0x40) = rax_1
zmm0_1.d = zmm0_1.d f- *(arg1 + 0x30)
int32_t r8_1 = int.d(zmm0_1.d)
zmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x44)))
*(arg1 + 0x44) = rcx_2
zmm0_1.d = zmm0_1.d f- *(arg1 + 0x34)
*(arg1 + 0x30) = _mm_cvtepi32_ps(zx.o(rax_1 - r8_1)).d
*(arg1 + 0x34) = _mm_cvtepi32_ps(zx.o(rcx_2 - int.d(zmm0_1.d))).d
