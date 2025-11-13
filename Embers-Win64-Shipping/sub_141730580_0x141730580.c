// 函数: sub_141730580
// 地址: 0x141730580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x3c8)
int64_t rcx = *(arg2 + 0x28)
float zmm3[0x4] = 0x3f800000
zmm3[0] = 1f / arg3[0]
int64_t r10 = sx.q(arg4)
int64_t rdi = r10 * 3
int64_t r10_1 = r10 << 4
float zmm0[0x4] = *(rax + (rdi << 2) + 8)
zmm0[0] = zmm0[0] f- *(rcx + (rdi << 2) + 8)
float zmm4[0x4] = *(rax + (rdi << 2))
zmm4[0] = zmm4[0] f- *(rcx + (rdi << 2))
int64_t zmm1
zmm1.d = (*(rax + (rdi << 2) + 4)).d f- *(rcx + (rdi << 2) + 4)
int64_t rcx_1 = *(arg2 + 0x1b8)
zmm0[0] = zmm0[0] * zmm3[0]
zmm4[0] = zmm4[0] * zmm3[0]
zmm1.d = zmm1.d f* zmm3[0]
float result = zmm0[0]
*(rcx_1 + (rdi << 2)) = (_mm_unpacklo_ps(zmm4, zmm1)).q
*(rcx_1 + (rdi << 2) + 8) = result
int64_t var_18
sub_141733ba0(&var_18, *(arg2 + 0x68) + r10_1, *(arg2 + 0x3e0) + r10_1, arg3)
int64_t rcx_3 = *(arg2 + 0x1d0)
*(rcx_3 + (rdi << 2)) = var_18
*(rcx_3 + (rdi << 2) + 8) = result
return result
