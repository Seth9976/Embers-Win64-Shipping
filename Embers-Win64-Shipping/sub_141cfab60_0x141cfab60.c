// 函数: sub_141cfab60
// 地址: 0x141cfab60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg2)
int32_t rax = (rdi + rsi).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

memset((rdi << 4) + *arg1, 0, rsi << 4)
return zx.q(rdi.d)
