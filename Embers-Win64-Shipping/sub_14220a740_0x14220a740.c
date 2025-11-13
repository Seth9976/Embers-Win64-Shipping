// 函数: sub_14220a740
// 地址: 0x14220a740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int64_t rsi = sx.q(arg3)
int64_t rbp = sx.q(arg2)
int32_t rax = rdi + rsi.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140638a00(arg1)

int64_t rdx_1 = *arg1 + rbp * 0xc
return memmove(rdx_1 + rsi * 0xc, rdx_1, (rdi - rbp.d) * 0xc) __tailcall
