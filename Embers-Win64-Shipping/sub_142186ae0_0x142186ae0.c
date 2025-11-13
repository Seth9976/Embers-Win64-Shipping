// 函数: sub_142186ae0
// 地址: 0x142186ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg2)
int32_t rax = (rdi + rsi).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

memset(*arg1 + (rdi << 2), 0, rsi << 2)
return zx.q(rdi.d)
