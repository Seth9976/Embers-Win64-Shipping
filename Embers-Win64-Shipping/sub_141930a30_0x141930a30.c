// 函数: sub_141930a30
// 地址: 0x141930a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg1[1].d)
int64_t rax = -1

do
    rax += 1
while (arg2[rax] != 0)

if (rsi.d s> 0)
    return sub_14193f080(arg1, arg2, rax.d, (rsi - 1).d) __tailcall

int32_t rbp = (rax + 1).d
int32_t rax_2 = rsi.d + rbp
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405daba0(arg1)

return memcpy(rsi + *arg1, arg2, rbp) __tailcall
