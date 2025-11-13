// 函数: sub_140f211a0
// 地址: 0x140f211a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dde0c0(arg1)
*arg1 = &data_142ee36f8
arg1[0x55].d = 0
*(arg1 + 0x2ac) = 0
arg1[0x56] = 0
arg1[0x57].d = 0
arg1[0x59] = arg1
arg1[0x5a] = 0
arg1[0x5b] = 0
arg1[0x58] = &data_142ec8d60
arg1[0x5c].b = 0
arg1[0x5d] = &data_142ee36d0
arg1[0x5e] = arg1
arg1[0x5f] = &arg1[0x58]
arg1[0x60] = &arg1[0x55]
arg1[0x61] = 0
arg1[0x62] = 0
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

return arg1
