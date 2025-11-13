// 函数: sub_140e92ae0
// 地址: 0x140e92ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 ^= (*arg2 ^ *arg1) & 1
arg1[1] = arg2[1]
arg1[2] = arg2[2]
*(arg1 + 8) = *(arg2 + 8)
void* rax_4 = *(arg2 + 0x10)
*(arg1 + 0x10) = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

*(arg1 + 0x18) = *(arg2 + 0x18)
arg1[0x20] = arg2[0x20]
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
sub_1407473e0(&arg1[0x28], &arg2[0x28])
*(arg1 + 0x38) = *(arg2 + 0x38)
void* rax_8 = *(arg2 + 0x40)
*(arg1 + 0x40) = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

*(arg1 + 0x48) = *(arg2 + 0x48)
arg1[0x50] = arg2[0x50]
*(arg1 + 0x58) = 0
*(arg1 + 0x60) = 0
sub_1407473e0(&arg1[0x58], &arg2[0x58])
return arg1
