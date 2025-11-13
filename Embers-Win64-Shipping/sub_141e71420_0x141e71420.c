// 函数: sub_141e71420
// 地址: 0x141e71420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = sub_142470a10()
void* r8 = &arg1[4]
arg1[2] = 0
arg1[3] = 0
*(r8 + 0x10) = 0
*(r8 + 0x18) = 0
*(r8 + 0x1c) = 0x80
void* rax_1 = *(r8 + 0x10)

if (rax_1 != 0)
    r8 = rax_1

*r8 = 0
*(r8 + 8) = 0
*(arg1 + 0x44) = 0
arg1[8].d = 0xffffffff
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = arg2
sub_141e778c0(arg1)
return arg1
