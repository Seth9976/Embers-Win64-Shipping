// 函数: sub_14279d160
// 地址: 0x14279d160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14279c530(arg1)
int64_t* rcx = &arg1[0x14]
*arg1 = &data_1434b47b0
__builtin_memset(&arg1[0x10], 0, 0x20)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
arg1[0x1a] = 0
arg1[0x1b].d = 0
arg1[0x1c] = 0
arg1[0x1e] = 0
arg1[0x25].b = 0
return arg1
