// 函数: sub_14271a9c0
// 地址: 0x14271a9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14271a410(arg1, arg2)
int64_t* rcx = &arg1[0x15]
*arg1 = &data_14347f690
arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x13] = 0
arg1[0x14] = 0
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
arg1[0x1b] = 0
arg1[0x1c].d = 0

if (((arg1[1].d u>> 4).b & 1) == 0)
    sub_142718ef0(&arg1[0xa], arg1, sub_14271eec0)
    sub_142718ef0(&arg1[0xc], arg1, sub_14271e610)
    sub_142718ef0(&arg1[0xe], arg1, sub_14271e430)

return arg1
