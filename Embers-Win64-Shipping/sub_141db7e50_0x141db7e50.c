// 函数: sub_141db7e50
// 地址: 0x141db7e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423ba700(arg1, arg2)
int64_t* rdx = &arg1[0x1a]
*arg1 = &data_14323bd18
arg1[8] = &data_14323c078
arg1[0x18] = 0
arg1[0x19] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xf4) = 0
arg1[0x20] = 0
arg1[0x21].d = 0
return arg1
