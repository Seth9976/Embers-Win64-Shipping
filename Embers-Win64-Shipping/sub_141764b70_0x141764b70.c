// 函数: sub_141764b70
// 地址: 0x141764b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x28)
int64_t zmm1 = arg3[0].q
int64_t r8 = sx.q(arg4) * 3
int64_t rax_1 = *(arg2 + 0x48)
arg3[0] = arg3[0] f* *(rax_1 + (r8 << 2))
zmm1.d = zmm1.d f* *(rax_1 + (r8 << 2) + 4)
arg3[0] = arg3[0] f* *(rax_1 + (r8 << 2) + 8)
arg3[0] = arg3[0] f+ *(rcx + (r8 << 2))
zmm1.d = zmm1.d f+ *(rcx + (r8 << 2) + 4)
arg3[0] = arg3[0] f+ *(rcx + (r8 << 2) + 8)
int64_t rcx_1 = *(arg2 + 0xa8)
float temp0[0x4] = _mm_unpacklo_ps(arg3, zmm1)
float result = arg3[0]
*(rcx_1 + (r8 << 2)) = temp0.q
*(rcx_1 + (r8 << 2) + 8) = result
return result
