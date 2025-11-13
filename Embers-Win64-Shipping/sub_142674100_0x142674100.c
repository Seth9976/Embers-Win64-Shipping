// 函数: sub_142674100
// 地址: 0x142674100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg2)
int32_t rax = (rdi + rsi).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4df0(arg1)

memset(*arg1 + rdi * 0x18, 0, rsi * 0x18)
return zx.q(rdi.d)
