// 函数: sub_142602300
// 地址: 0x142602300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
arg1[3].d = arg2
arg1[4].d = arg2
*(arg1 + 0x24) = 0
*(arg1 + 0x1c) = arg3
int64_t rax_2 = data_143b50290(zx.q(arg2 << 5), 0)
int32_t rcx_1 = arg1[3].d
*arg1 = rax_2
arg1[2] = data_143b50290(zx.q(rcx_1 * 2), 0)
int64_t rax_4 = data_143b50290(zx.q(arg3 * 2), 0)
int64_t r8 = sx.q(*(arg1 + 0x1c))
arg1[1] = rax_4
memset(rax_4, 0xff, r8 * 2)
memset(arg1[2], 0xff, sx.q(arg1[3].d) * 2)
return arg1
