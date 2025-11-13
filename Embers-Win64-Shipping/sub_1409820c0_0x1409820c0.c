// 函数: sub_1409820c0
// 地址: 0x1409820c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
sub_140a96170(&arg1[2])
sub_140a96170(&arg1[5])
sub_140a96170(&arg1[8])
sub_140a96170(&arg1[0xb])
sub_140a96170(&arg1[0xf])
arg1[0x13] = 0
void* rcx_5 = &arg1[0x1a]
arg1[0x14] = 0
arg1[0x18] = 0
arg1[0x19] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax = *(rcx_5 + 0x10)

if (rax != 0)
    rcx_5 = rax

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xf4) = 0
arg1[0x20] = 0
arg1[0x21].d = 0
return arg1
