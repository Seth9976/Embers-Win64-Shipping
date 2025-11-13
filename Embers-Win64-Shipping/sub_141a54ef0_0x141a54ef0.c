// 函数: sub_141a54ef0
// 地址: 0x141a54ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[1].d
int64_t rbp = sx.q(arg3)
arg1[1].d = rsi + 1

if (rsi + 1 s> *(arg1 + 0xc))
    sub_1405c50f0(arg1)

int64_t rbx = rbp * 0x1c
int64_t rdx_2 = *arg1 + rbx
memmove(rdx_2 + 0x1c, rdx_2, (rsi - rbp.d) * 0x1c)
int128_t* rcx_1 = *arg1
*(rcx_1 + rbx) = *arg2
*(rcx_1 + rbx + 0x10) = arg2[1].q
*(rcx_1 + rbx + 0x18) = *(arg2 + 0x18)
return zx.q(rbp.d)
