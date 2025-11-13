// 函数: sub_140bd57c0
// 地址: 0x140bd57c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
*(arg1 + 4) = *arg3
*(arg1 + 0xc) = arg3[1]
*(arg1 + 0x14) = arg3[2]
*(arg1 + 0x1c) = *arg4
*(arg1 + 0x24) = arg4[1]
*(arg1 + 0x2c) = arg4[2]
__builtin_memset(&arg1[0xd], 0, 0x18)
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
void* rcx = &arg1[0x18]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_6 = *(rcx + 0x10)

if (rax_6 != 0)
    rcx = rax_6

*rcx = 0
*(rcx + 8) = 0
arg1[0x20] = 0xffffffff
arg1[0x21] = 0
*(arg1 + 0x90) = 0
arg1[0x26] = 0
sub_140be32e0(arg1)
return arg1
