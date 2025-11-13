// 函数: sub_140f66480
// 地址: 0x140f66480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dde0c0(arg1)
*arg1 = &data_142ee7a28
arg1[0x56] = arg1
arg1[0x57] = 0
arg1[0x58] = 0
arg1[0x55] = &data_142ec8d60
arg1[0x59].b = 0
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

arg1[5].b &= 0xfd
return arg1
