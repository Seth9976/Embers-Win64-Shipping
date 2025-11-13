// 函数: sub_141fb6160
// 地址: 0x141fb6160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cdd9c0(arg1, arg2)
int64_t rsi = *(arg1 + 0x28)
int64_t rbx_1 = sx.q(arg2[1].d)
int32_t rax = (rbx_1 + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rbx_1 << 3)) = rsi
return result
