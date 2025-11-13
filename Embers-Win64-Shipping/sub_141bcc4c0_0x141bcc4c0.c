// 函数: sub_141bcc4c0
// 地址: 0x141bcc4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xff].d = 0

if (*(arg1 + 0x7fc) != 0)
    sub_1405c5570(&arg1[0xfe], 0)

sub_140780c40(&arg1[0xb8], &arg1[0xb5])
arg1[0xb6].d = 0

if (*(arg1 + 0x5b4) != 0)
    sub_1405c5570(&arg1[0xb5], 0)

sub_141bcb4a0(&arg1[0xa0])
jump(*(*arg1 + 0x240))
