// 函数: sub_141f6c3b0
// 地址: 0x141f6c3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[1].d
int64_t r14 = sx.q(arg3)
arg1[1].d = rsi + 1

if (rsi + 1 s> *(arg1 + 0xc))
    sub_1405c5060(arg1)

int64_t rbx_1 = r14 * 0x50
int64_t rdx_2 = *arg1 + rbx_1
memmove(rdx_2 + 0x50, rdx_2, (rsi - r14.d) * 0x50)
int64_t rax_2 = *arg1
*(rbx_1 + rax_2) = *arg2
*(rbx_1 + rax_2 + 0x10) = arg2[1]
*(rbx_1 + rax_2 + 0x20) = arg2[2]
*(rbx_1 + rax_2 + 0x30) = arg2[3]
*(rbx_1 + rax_2 + 0x40) = arg2[4]
return zx.q(r14.d)
