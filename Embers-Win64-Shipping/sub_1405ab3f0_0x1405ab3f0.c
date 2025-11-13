// 函数: sub_1405ab3f0
// 地址: 0x1405ab3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ab8c0(arg1)
*arg1 = &data_142d45b90
sub_140d3a3a0(&arg1[2], arg2)
void* rdx_1 = &arg1[5]
void* rcx_1 = &arg1[0xf]
arg1[3] = 0
arg1[4] = 0
*(rdx_1 + 0x10) = 0
*(rdx_1 + 0x18) = 0
*(rdx_1 + 0x1c) = 0x80
void* rax = *(rdx_1 + 0x10)

if (rax != 0)
    rdx_1 = rax

*rdx_1 = 0
*(rdx_1 + 8) = 0
arg1[9].d = 0xffffffff
*(arg1 + 0x4c) = 0
arg1[0xb] = 0
arg1[0xc].d = 0
arg1[0xd] = 0
arg1[0xe] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x13].d = 0xffffffff
*(arg1 + 0x9c) = 0
arg1[0x15] = 0
arg1[0x16].d = 0
return arg1
