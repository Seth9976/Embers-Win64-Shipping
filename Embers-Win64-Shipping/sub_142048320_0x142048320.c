// 函数: sub_142048320
// 地址: 0x142048320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1 + 0x20
__builtin_memset(arg1, 0, 0x20)
r8[2] = 0
r8[3].d = 0
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]

if (rax != 0)
    r8 = rax

*r8 = 0
r8[1] = 0
*(arg1 + 0x40) = 0xffffffff
*(arg1 + 0x44) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
__builtin_memset(arg1 + 0x60, 0, 0x34)
*(arg1 + 0x94) = arg2
__builtin_memset(arg1 + 0x98, 0, 0x14)
return arg1
