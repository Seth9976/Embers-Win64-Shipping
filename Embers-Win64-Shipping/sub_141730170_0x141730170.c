// 函数: sub_141730170
// 地址: 0x141730170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x28)
float zmm3 = 1f / arg3
int64_t r8 = sx.q(arg4) * 3
int64_t rax_1 = *(arg2 + 0xa8)
uint128_t zmm0
zmm0.d = (*(rax_1 + (r8 << 2) + 8)).d f- *(rcx + (r8 << 2) + 8)
uint128_t zmm4
zmm4.d = (*(rax_1 + (r8 << 2))).d f- *(rcx + (r8 << 2))
int64_t zmm1
zmm1.d = (*(rax_1 + (r8 << 2) + 4)).d f- *(rcx + (r8 << 2) + 4)
int64_t rcx_1 = *(arg2 + 0x48)
zmm0.d = zmm0.d f* zmm3
zmm4.d = zmm4.d f* zmm3
zmm1.d = zmm1.d f* zmm3
*(rcx_1 + (r8 << 2)) = (_mm_unpacklo_ps(zmm4, zmm1)).q
*(rcx_1 + (r8 << 2) + 8) = zmm0.d
int64_t rax_3 = *(arg2 + 0xa8)
int64_t rcx_2 = *(arg2 + 0x28)
*(rcx_2 + (r8 << 2)) = *(rax_3 + (r8 << 2))
int32_t result = *(rax_3 + (r8 << 2) + 8)
*(rcx_2 + (r8 << 2) + 8) = result
return result
