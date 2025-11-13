// 函数: sub_140bd5710
// 地址: 0x140bd5710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x14) = *(arg2 + 0x14)
*(arg1 + 0x1c) = *(arg2 + 0x1c)
*(arg1 + 0x24) = *(arg2 + 0x24)
*(arg1 + 0x2c) = *(arg2 + 0x2c)
*(arg1 + 0x34) = *(arg2 + 0x34)
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x44) = *(arg2 + 0x44)
void* rdx = &arg1[0x18]
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_10 = *(rdx + 0x10)

if (rax_10 != 0)
    rdx = rax_10

*rdx = 0
*(rdx + 8) = 0
arg1[0x20] = 0xffffffff
arg1[0x21] = 0
*(arg1 + 0x90) = 0
arg1[0x26] = 0
sub_14094d9d0(&arg1[0x14], &arg2[0x14])
return arg1
