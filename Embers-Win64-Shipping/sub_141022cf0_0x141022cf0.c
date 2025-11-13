// 函数: sub_141022cf0
// 地址: 0x141022cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(arg1[6])
int64_t r10 = *(*(arg1 + 0x68) + 0xb0)
__builtin_memset(&arg2[5], 0, 0x40)
int32_t r8_1 = arg1[3]
arg2[1] = 0x40
int64_t rax_3 = zx.q(arg1[7]) + r10
*arg2 = rcx + zx.q(arg3 << 6) + r10
uint64_t rcx_2 = zx.q(arg1[0xf])
arg2[2] = rax_3
uint64_t rax_5 = zx.q(arg1[4] * rcx_2.d)
arg2[4] = rcx_2
arg2[3] = rax_5

if (r8_1 != 0)
    int64_t rax_7 = zx.q(arg1[0xa]) + r10
    arg2[0xa] = rcx_2
    arg2[8] = rax_7
    arg2[9] = zx.q(r8_1 * rcx_2.d)

if (arg4 == 0)
    arg2[5] = zx.q(arg1[8]) + r10
    arg2[7] = 0
    arg2[6] = 0x40
    return arg2

uint64_t r11_1 = zx.q(rcx_2.d * *arg1)
arg2[5] = zx.q(arg1[9]) + r10
arg2[7] = rcx_2
arg2[6] = r11_1
return arg2
