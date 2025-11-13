// 函数: sub_14279d200
// 地址: 0x14279d200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14279c530(arg1)
int64_t* rcx = &arg1[0x1d]
*arg1 = &data_1434b4ac8
arg1[0x10] = 0
arg1[0x12] = 0
__builtin_memset(&arg1[0x19], 0, 0x20)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x21].d = 0xffffffff
*(arg1 + 0x10c) = 0
arg1[0x23] = 0
arg1[0x24].d = 0
arg1[0x18].b = 1
return arg1
