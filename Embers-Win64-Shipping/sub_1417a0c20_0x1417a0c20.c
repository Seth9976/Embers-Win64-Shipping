// 函数: sub_1417a0c20
// 地址: 0x1417a0c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = arg5
sub_1417a0b70(arg1, arg2, arg3, arg4)
int64_t rax_1 = sx.q(arg1[1].d)
int32_t var_10 = 0
float temp0[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
int64_t rdx = rax_1 * 3
int64_t rcx = *(*arg1 + 0x1b8)
int32_t var_10_1 = 0
*(rcx + (rdx << 2)) = temp0.q
*(rcx + (rdx << 2) + 8) = 0
int64_t rax_3 = sx.q(arg1[1].d)
float temp0_1[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
int64_t rdx_1 = rax_3 * 3
int64_t rcx_1 = *(*arg1 + 0x1d0)
int32_t var_10_2 = 0
*(rcx_1 + (rdx_1 << 2)) = temp0_1.q
*(rcx_1 + (rdx_1 << 2) + 8) = 0
int64_t rax_5 = sx.q(arg1[1].d)
float temp0_2[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
int64_t rdx_2 = rax_5 * 3
int64_t rcx_2 = *(*arg1 + 0x200)
*(rcx_2 + (rdx_2 << 2)) = temp0_2.q
float zmm0[0x4] = data_142d3f660
*(rcx_2 + (rdx_2 << 2) + 8) = 0
*(*(*arg1 + 0x218) + sx.q(arg1[1].d) * 0x10) = zmm0
return arg1
