// 函数: sub_141fd3f30
// 地址: 0x141fd3f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int64_t rsi = sx.q(arg3)
int64_t rbp = sx.q(arg2)
int32_t rax = rdi + rsi.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4d20(arg1)

int64_t rdx_1 = *arg1 + rbp * 0x14
return memmove(rdx_1 + rsi * 0x14, rdx_1, (rdi - rbp.d) * 0x14) __tailcall
