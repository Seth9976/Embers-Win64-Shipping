// 函数: sub_1420af7e0
// 地址: 0x1420af7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg1, 0, 0x90)
sub_140b4c2a0(arg1)
arg1[0x14] = arg3
arg1[0x12] = 0
*arg1 = &data_142d6ad48
void* rax = &arg1[0x15]

if (arg1 == 0)
    rax = nullptr

arg1[0x13] = rax
sub_140b552b0(arg1, 1)
(*arg1)[0x1b](arg1, zx.q(arg2))
arg1[0x15] = 0
arg1[0x16] = 0
*arg1 = &data_142d6b000
return arg1
