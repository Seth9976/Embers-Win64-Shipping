// 函数: sub_140919960
// 地址: 0x140919960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e20cf0
arg1[1].d = *(arg2 + 8)
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].b = *(arg2 + 0x10)
*(arg1 + 0x11) = *(arg2 + 0x11)
*(arg1 + 0x12) = *(arg2 + 0x12)
*(arg1 + 0x13) = *(arg2 + 0x13)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x15) = *(arg2 + 0x15)
*(arg1 + 0x16) = *(arg2 + 0x16)
*(arg1 + 0x17) = *(arg2 + 0x17)
arg1[3].b = *(arg2 + 0x18)
*(arg1 + 0x19) = *(arg2 + 0x19)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
void* rdx = &arg1[6]
arg1[4] = 0
arg1[5] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_13 = *(rdx + 0x10)

if (rax_13 != 0)
    rdx = rax_13

*rdx = 0
*(rdx + 8) = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
sub_14091bc80(&arg1[4], arg2 + 0x20)
return arg1
