// 函数: sub_14279cd50
// 地址: 0x14279cd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
int64_t* rcx = &arg1[0x14]
*arg1 = &data_1434b5668
arg1[5] = &data_1434b5980
arg1[0xa] = 2
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 2
arg1[0x12] = 0
arg1[0x13] = 0
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
__builtin_memset(&arg1[0x1c], 0, 0x30)
__builtin_memset(&arg1[0x23], 0, 0x20)
__builtin_memset(&arg1[0xe], 0, 0x19)
__builtin_memset(&arg1[6], 0, 0x20)
arg1[0x22].d = 2
return arg1
