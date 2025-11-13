// 函数: sub_141c49a70
// 地址: 0x141c49a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg2, arg1 + 0x20)
sub_140596d10(&arg2[2], arg1 + 0x30)
arg2[4].d = *(arg1 + 0x40)
*(arg2 + 0x24) = *(arg1 + 0x44)
arg2[5].d = *(arg1 + 0x48)
arg2[6] = 0
int64_t rbp = sx.q(*(arg1 + 0x58))
int64_t r14 = *(arg1 + 0x50)
arg2[7].d = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg2[6], rbp.d, 0)
    memcpy(arg2[6], r14, (rbp << 2).d)
else
    *(arg2 + 0x3c) = 0

arg2[8].b ^= (*(arg1 + 0x60) ^ arg2[8].b) & 1
return arg2
