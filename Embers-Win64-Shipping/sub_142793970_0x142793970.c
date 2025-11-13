// 函数: sub_142793970
// 地址: 0x142793970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[1].d
int64_t rbp = sx.q(arg3)
arg1[1].d = rsi + 1

if (rsi + 1 s> *(arg1 + 0xc))
    sub_140638970(arg1)

int64_t rbx_2 = rbp * 0x30
int64_t rdx_2 = *arg1 + rbx_2
memmove(rdx_2 + 0x30, rdx_2, (rsi - rbp.d) * 0x30)
int64_t rax_2 = *arg1
*(rbx_2 + rax_2) = *arg2
*(rbx_2 + rax_2 + 0x10) = arg2[1]
*(rbx_2 + rax_2 + 0x20) = arg2[2]
return zx.q(rbp.d)
