// 函数: sub_1408201d0
// 地址: 0x1408201d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg2)
int32_t rax = (rdi + rsi).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1407c3800(arg1, rdi.d)

void* rax_2 = *arg1

if ((rax_2.b & 1) != 0)
    rax_2 = (rax_2 s>> 1) + arg1

memset(rax_2 + (rdi << 2), 0, rsi << 2)
return zx.q(rdi.d)
