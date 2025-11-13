// 函数: sub_141dcd930
// 地址: 0x141dcd930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x32) &= 0xfd
*(arg1 + 0x32) |= 4
*(arg1 + 0x30) = 0
sub_1423c9cb0(arg1 + 0x28, 0)
*(arg1 + 0x5b) &= 0xfe
*(arg1 + 0x59) |= 1
*(arg1 + 0x98) = 0x3f800000
*(arg1 + 0xf0) = 3
*(arg1 + 0x5f) = 0
*(arg1 + 0x110) = 0x3f800000
*(arg1 + 0x108) = 0x42c80000
*(arg1 + 0x10c) = 0x40000000
*(arg1 + 0x100) = 0x4d5693a4
int32_t arg_8
int32_t rcx_2 = *sub_140b5e500(&arg_8, 0x11a)
*(arg1 + 0x5b) |= 4
*(arg1 + 0x59) |= 0x8c
arg_8 = rcx_2
int32_t arg_c = 0
*(arg1 + 0xe8) = arg_8.q
char rax_2 = *(arg1 + 0x5a) & 0x72
*(arg1 + 0xf1) = 0x101
*(arg1 + 0x5d) = 0x200
*(arg1 + 0x5a) = rax_2 | 4
char result = (*(arg1 + 0x5c) & 0xfe) | 4
*(arg1 + 0x5c) = result
return result
