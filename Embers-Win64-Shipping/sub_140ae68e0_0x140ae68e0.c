// 函数: sub_140ae68e0
// 地址: 0x140ae68e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = &arg1[2]
*arg1 = 0
arg1[1] = 0
r8[2] = 0
r8[3].d = 0
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]

if (rax != 0)
    r8 = rax

*r8 = 0
r8[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
sub_140ae7790(arg1, arg2)
arg1[0xa].b = arg2[0xa].b
*(arg1 + 0x51) = *(arg2 + 0x51)
*(arg1 + 0x54) = *(arg2 + 0x54)
sub_140ae6ba0(&arg1[0xc], &arg2[0xc])
sub_140596d10(&arg1[0x17], &arg2[0x17])
sub_140596d10(&arg1[0x19], &arg2[0x19])
arg1[0x1b] = arg2[0x1b]
sub_140596d10(&arg1[0x1c], &arg2[0x1c])
arg1[0x1e] = 0
void* rdx_4 = &arg1[0x20]
arg1[0x1f] = 0
*(rdx_4 + 0x10) = 0
*(rdx_4 + 0x18) = 0
*(rdx_4 + 0x1c) = 0x80
void* rax_5 = *(rdx_4 + 0x10)

if (rax_5 != 0)
    rdx_4 = rax_5

*rdx_4 = 0
*(rdx_4 + 8) = 0
arg1[0x24].d = 0xffffffff
*(arg1 + 0x124) = 0
arg1[0x26] = 0
arg1[0x27].d = 0
sub_140ae7700(&arg1[0x1e], &arg2[0x1e])
return arg1
