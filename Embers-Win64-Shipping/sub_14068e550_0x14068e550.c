// 函数: sub_14068e550
// 地址: 0x14068e550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ddde50(arg1, 1)
*arg1 = &data_142d8add8
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

arg1[5].b &= 0xfd
return arg1
