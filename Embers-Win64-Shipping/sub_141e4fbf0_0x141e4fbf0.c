// 函数: sub_141e4fbf0
// 地址: 0x141e4fbf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1 + 0x30
__builtin_memset(arg1, 0, 0x30)
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
*(arg1 + 0x50) = 0xffffffff
*(arg1 + 0x54) = 0
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
return arg1
