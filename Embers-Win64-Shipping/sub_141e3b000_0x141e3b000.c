// 函数: sub_141e3b000
// 地址: 0x141e3b000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg2)
int32_t rax = (rdi + rsi).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_14083a440(arg1, rdi.d)

memset(*arg1 + (rdi << 3), 0, rsi << 3)
return zx.q(rdi.d)
