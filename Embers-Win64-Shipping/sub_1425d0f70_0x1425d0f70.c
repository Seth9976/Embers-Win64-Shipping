// 函数: sub_1425d0f70
// 地址: 0x1425d0f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
int64_t* rcx = &arg1[0xe]
arg1[5] = 0
*arg1 = &data_143445d10
__builtin_memset(&arg1[6], 0, 0x40)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
__builtin_memset(&arg1[0x16], 0, 0x78)
sub_1425d21a0(&arg1[6])
__builtin_memset(&arg1[0x25], 0, 0x60)
return arg1
