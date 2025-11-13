// 函数: sub_14081a2d0
// 地址: 0x14081a2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].b = arg2[1].b
arg1[2] = arg2[2]
void* rax_2 = *(arg2 + 0x10)
*(arg1 + 0x10) = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

arg1[6] = arg2[6]
void* rax_4 = *(arg2 + 0x20)
*(arg1 + 0x20) = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

arg1[0xa] = arg2[0xa]
*(arg1 + 0x2c) = *(arg2 + 0x2c)
arg1[0xd] = arg2[0xd]
*(arg1 + 0x38) = *(arg2 + 0x38)
arg1[0x10] = arg2[0x10]
void* rax_8 = *(arg2 + 0x48)
*(arg1 + 0x48) = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

arg1[0x14] = arg2[0x14]
arg1[0x15] = arg2[0x15]
arg1[0x16] = arg2[0x16]
arg1[0x18] = arg2[0x18]
return arg1
