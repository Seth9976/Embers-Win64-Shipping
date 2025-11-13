// 函数: sub_140e910a0
// 地址: 0x140e910a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int64_t rsi = sx.q(arg3)
int64_t rbp = sx.q(arg2)
int32_t rax = rdi + rsi.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t rdx_3 = (rbp << 4) + *arg1
return memmove((rsi << 4) + rdx_3, rdx_3, (rdi - rbp.d) << 4) __tailcall
