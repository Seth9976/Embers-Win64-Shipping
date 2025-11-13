// 函数: sub_14232b300
// 地址: 0x14232b300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dde0c0(arg1)
arg1[5].b &= 0xfb
*arg1 = &data_143329460
arg1[0x55] = 0
arg1[0x56].b = 0
arg1[0x57] = 0
arg1[0x58].d = 0
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

arg1[5].b &= 0xfd
return arg1
