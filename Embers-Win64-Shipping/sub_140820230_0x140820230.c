// 函数: sub_140820230
// 地址: 0x140820230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg2)
int32_t rax = (rdi + rsi).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4e40(arg1)

memset((rdi << 5) + *arg1, 0, rsi << 5)
return zx.q(rdi.d)
