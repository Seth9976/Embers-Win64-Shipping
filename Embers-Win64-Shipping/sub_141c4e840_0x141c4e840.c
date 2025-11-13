// 函数: sub_141c4e840
// 地址: 0x141c4e840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
int32_t rax_3 = arg2[3]
*(arg1 + 0x10) = 0
arg1[3] = rax_3
void* rdx = &arg1[8]
*(arg1 + 0x18) = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_4 = *(rdx + 0x10)

if (rax_4 != 0)
    rdx = rax_4

*rdx = 0
*(rdx + 8) = 0
arg1[0x10] = 0xffffffff
arg1[0x11] = 0
*(arg1 + 0x50) = 0
arg1[0x16] = 0
sub_1405cd980(&arg1[4], &arg2[4])
return arg1
