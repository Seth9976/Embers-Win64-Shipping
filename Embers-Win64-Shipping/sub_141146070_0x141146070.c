// 函数: sub_141146070
// 地址: 0x141146070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_3 = *(arg2 + 0x264) - *(arg2 + 0x25c)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg2[0x4c].d - arg2[0x4b].d))
int32_t rax_4 = arg2[0x50].d
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_3))
*arg1 = rax_4
zmm1.d = zmm1.d f/ zmm0.d
arg1[1] = zmm1.d
arg1[2] = _mm_cvtepi32_ps(zx.o(arg2[0x4c].d - arg2[0x4b].d)).d
arg1[3] = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x264) - *(arg2 + 0x25c))).d
void* result = sub_1422eb5d0(arg2)

if (result.b != 0 || *(arg2 + 0xd7c) != result.b)
    result = *arg2
    
    if (*(result + 8) s> 0)
        char rax_9
        int32_t rdx
        rax_9, rdx = sub_142391f10(arg2)
        result = sub_1422e5d90(*arg2, sbb.d(rdx, rdx, rax_9 != 0) & 2)
        arg1[1] = *(result + 0x280)

return result
