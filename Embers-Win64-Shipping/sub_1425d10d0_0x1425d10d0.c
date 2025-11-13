// 函数: sub_1425d10d0
// 地址: 0x1425d10d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[0xc]
__builtin_memset(&arg1[5], 0, 0x20)
*arg1 = &data_143445f70
__builtin_memset(&arg1[9], 0, 0x18)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
__builtin_memset(&arg1[0x15], 0, 0x64)
arg1[0x22] = 0
sub_1425d0b90(&arg1[0x23])
return arg1
