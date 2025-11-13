// 函数: sub_14244bef0
// 地址: 0x14244bef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x18) = *(arg2 + 0x18)
arg1[5] = arg2[5]
arg1[6].d = arg2[6].d
sub_140596d10(&arg1[7], &arg2[7])
arg1[9].d = arg2[9].d
*(arg1 + 0x4c) = *(arg2 + 0x4c)
*(arg1 + 0x54) = *(arg2 + 0x54)
arg1[0xb].b = arg2[0xb].b
arg1[0xc].b = arg2[0xc].b
sub_140596d10(&arg1[0xd], &arg2[0xd])
arg1[0xf] = 0
int64_t rdi = sx.q(arg2[0x10].d)
int64_t r14 = arg2[0xf]
arg1[0x10].d = rdi.d

if (rdi.d != 0)
    sub_1405c4bc0(&arg1[0xf], rdi.d, 0)
    memcpy(arg1[0xf], r14, (rdi * 0x14).d)
else
    *(arg1 + 0x84) = 0

arg1[0x11].d = arg2[0x11].d
return arg1
