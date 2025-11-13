// 函数: sub_140f209b0
// 地址: 0x140f209b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dde0c0(arg1)
*arg1 = &data_142ee4d20
arg1[0x55].d = 0
*(arg1 + 0x2ac) = 0
arg1[0x56] = 0
arg1[0x57].d = 0
sub_140f205d0(&arg1[0x58], arg1)
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(&arg1[3]) != 0)
    sub_140dc03a0(&arg1[3], *(arg1 + 0x2e))

arg1[5].b &= 0xfd
*(arg1 + 0x29) |= 0x20
return arg1
