// 函数: sub_140b2f7d0
// 地址: 0x140b2f7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = arg2
*arg1 = &data_142e77eb0
*(arg1 + 9) = 1
sub_140a96170(&arg1[2])
sub_140a96170(&arg1[5])
void* rcx_2 = &arg1[0x1a]
arg1[8] = 0
arg1[9] = 0
arg1[0x11].b = 0
arg1[0x17].b = 0
arg1[0x18] = 0
arg1[0x19] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xf4) = 0
arg1[0x20] = 0
arg1[0x21].d = 0
arg1[0x22].b = 0
arg1[0x23] = 0
arg1[0x24] = 0
sub_140acb800(&arg1[0x25])
sub_140acb800(&arg1[0x4d])
sub_140b34b80(arg1)
return arg1
