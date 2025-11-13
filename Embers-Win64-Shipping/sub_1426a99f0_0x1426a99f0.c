// 函数: sub_1426a99f0
// 地址: 0x1426a99f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg2)
int32_t rax = (rdi + rsi).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_140594770(arg1)

memset(*arg1 + (rdi << 1), 0, rsi * 2)
return zx.q(rdi.d)
