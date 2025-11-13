// 函数: sub_140844640
// 地址: 0x140844640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x58)
int64_t* rcx = arg1 + 0x58
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
*(arg1 + 0x78) = 0xffffffff
*(arg1 + 0x7c) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
__builtin_memset(arg1 + 0x98, 0, 0x11)
__builtin_memset(arg1 + 0xb0, 0, 0x61)
*(arg1 + 0x118) = 0
*(arg1 + 0x120) = 0
return arg1
