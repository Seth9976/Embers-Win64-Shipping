// 函数: sub_140bd2290
// 地址: 0x140bd2290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int32_t rax = (rdi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_140775640(arg2)

return rdi * 0xa0 + *arg2
