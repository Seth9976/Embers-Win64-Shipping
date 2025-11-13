// 函数: sub_140982000
// 地址: 0x140982000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x50)
__builtin_memset(arg1 + 0x58, 0, 0x60)
int64_t* rcx = arg1 + 0xb8
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
*(arg1 + 0xd8) = 0xffffffff
*(arg1 + 0xdc) = 0
*(arg1 + 0xe8) = 0
*(arg1 + 0xf0) = 0
return arg1
