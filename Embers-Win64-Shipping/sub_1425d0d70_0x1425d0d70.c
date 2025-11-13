// 函数: sub_1425d0d70
// 地址: 0x1425d0d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x40)
int64_t* rcx = arg1 + 0x40
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
*(arg1 + 0x60) = 0xffffffff
*(arg1 + 0x64) = 0
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
__builtin_memset(arg1 + 0x80, 0, 0x78)
sub_1425d21a0(arg1)
return arg1
