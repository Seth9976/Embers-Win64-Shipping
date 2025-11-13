// 函数: sub_14259b290
// 地址: 0x14259b290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
int64_t rbp = sx.q(*(arg2 + 0x10))
int64_t r14 = *(arg2 + 8)
*(arg1 + 0x10) = rbp.d

if (rbp.d != 0)
    sub_1405a4be0(&arg1[4], rbp.d, 0)
    memcpy(*(arg1 + 8), r14, (rbp << 4).d)
else
    *(arg1 + 0x14) = 0

arg1[0xc].b = arg2[0xc].b
return arg1
