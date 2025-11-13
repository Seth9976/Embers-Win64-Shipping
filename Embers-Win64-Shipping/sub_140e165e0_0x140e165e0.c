// 函数: sub_140e165e0
// 地址: 0x140e165e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rdi << 3)) = arg1 + 8
return result
