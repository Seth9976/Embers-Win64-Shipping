// 函数: sub_1419616a0
// 地址: 0x1419616a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x30) = *(arg2 + 0x30)
arg1[8] = arg2[8]
void* rdx = &arg1[0xb]
arg1[9] = 0
arg1[0xa] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax_2 = *(rdx + 0x10)

if (rax_2 != 0)
    rdx = rax_2

*rdx = 0
*(rdx + 8) = 0
arg1[0xf].d = 0xffffffff
*(arg1 + 0x7c) = 0
arg1[0x11] = 0
arg1[0x12].d = 0
sub_141823260(&arg1[9], &arg2[9])
arg1[0x13] = arg2[0x13]
arg1[0x14].w = arg2[0x14].w
return arg1
