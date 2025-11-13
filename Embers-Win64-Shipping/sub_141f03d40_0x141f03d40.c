// 函数: sub_141f03d40
// 地址: 0x141f03d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f50ed0(arg1, arg2)
*arg1 = &data_14326adb8
arg1[5] = &data_143260b98
arg1[0x3e] = &data_143261628
sub_1422ac390(arg1, data_143f3a590, 1)
char rax = *(arg1 + 0x209)
*(arg1 + 0x14d) |= 4
*(arg1 + 0x20e) |= 8

if ((rax & 1) != 0)
    *(arg1 + 0x209) = rax & 0xfe
    sub_141f36700(arg1)

return arg1
