// 函数: sub_141ae6140
// 地址: 0x141ae6140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141adb020(arg1, arg2)
*(arg1 + 0xc8) = *(arg2 + 0xc8)
*(arg1 + 0xd8) = *(arg2 + 0xd8)
*(arg1 + 0xdc) = *(arg2 + 0xdc)
*(arg1 + 0xe0) = *(arg2 + 0xe0)
*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xec) = *(arg2 + 0xec)
*(arg1 + 0xf0) = *(arg2 + 0xf0)
*(arg1 + 0xf4) = *(arg2 + 0xf4)
*(arg1 + 0x110) = *(arg2 + 0x110)
*(arg1 + 0x120) = *(arg2 + 0x120)
*(arg1 + 0x130) = *(arg2 + 0x130)
*(arg1 + 0x140) = *(arg2 + 0x140)
*(arg1 + 0x148) = *(arg2 + 0x148)
*(arg1 + 0x14c) = *(arg2 + 0x14c)
*(arg1 + 0x150) = *(arg2 + 0x150)
*(arg1 + 0x158) = *(arg2 + 0x158)
*(arg1 + 0x15c) = *(arg2 + 0x15c)
*(arg1 + 0x160) = *(arg2 + 0x160)
*(arg1 + 0x164) = *(arg2 + 0x164)
*(arg1 + 0x180) = *(arg2 + 0x180)
*(arg1 + 0x190) = *(arg2 + 0x190)
*(arg1 + 0x1a0) = *(arg2 + 0x1a0)
*(arg1 + 0x1b0) = *(arg2 + 0x1b0)
*(arg1 + 0x1b8) = *(arg2 + 0x1b8)
*(arg1 + 0x1bc) = *(arg2 + 0x1bc)
*(arg1 + 0x1c0) = *(arg2 + 0x1c0)
*(arg1 + 0x1d0) = *(arg2 + 0x1d0)
*(arg1 + 0x1d1) = *(arg2 + 0x1d1)
*(arg1 + 0x1d2) ^= (*(arg1 + 0x1d2) ^ *(arg2 + 0x1d2)) & 1
char rax_17 = *(arg1 + 0x1d2)
char rcx = ((*(arg2 + 0x1d2) ^ rax_17) & 2) ^ rax_17
*(arg1 + 0x1d2) = rcx
char rdx = ((*(arg2 + 0x1d2) ^ rcx) & 4) ^ rcx
*(arg1 + 0x1d2) = rdx
*(arg1 + 0x1d2) = ((*(arg2 + 0x1d2) ^ rdx) & 8) ^ rdx
return arg1
