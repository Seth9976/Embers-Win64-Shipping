// 函数: sub_1419f7ee0
// 地址: 0x1419f7ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int64_t rsi = sx.q(arg3)
int64_t rbp = sx.q(arg2)
int32_t rax = rdi + rsi.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1407c36f0(arg1, rdi)

void* rcx_1 = *arg1

if ((rcx_1.b & 1) != 0)
    rcx_1 = (rcx_1 s>> 1) + arg1

void* rdx_1 = rcx_1 + (rbp << 1)
return memmove(rdx_1 + (rsi << 1), rdx_1, (rdi - rbp.d) * 2) __tailcall
