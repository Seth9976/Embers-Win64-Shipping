// 函数: sub_141d94d20
// 地址: 0x141d94d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)
sub_140596d10(&arg1[2], &arg2[2])
sub_140596d10(&arg1[4], &arg2[4])
arg1[6] = 0
int64_t rdi = sx.q(arg2[7].d)
int64_t r14 = arg2[6]
arg1[7].d = rdi.d

if (rdi.d != 0)
    sub_140638750(&arg1[6], rdi.d, 0)
    memcpy(arg1[6], r14, (rdi << 2).d)
else
    *(arg1 + 0x3c) = 0

sub_140596d10(&arg1[8], &arg2[8])
arg1[0xa].d = arg2[0xa].d
*(arg1 + 0x54) = *(arg2 + 0x54)
arg1[0xb].b = arg2[0xb].b
return arg1
