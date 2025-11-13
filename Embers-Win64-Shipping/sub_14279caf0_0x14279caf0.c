// 函数: sub_14279caf0
// 地址: 0x14279caf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
int64_t* rcx = &arg1[0xd]
*arg1 = &data_1434b5350
arg1[5] = &data_1434b5640
__builtin_memset(&arg1[6], 0, 0x38)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
arg1[0x15].b = 0
arg1[0x16] = 0
return arg1
