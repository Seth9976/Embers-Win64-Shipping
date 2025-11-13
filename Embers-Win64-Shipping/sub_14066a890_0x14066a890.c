// 函数: sub_14066a890
// 地址: 0x14066a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x15].b == 0
*arg1 = &data_142d84578

if (not(cond:0))
    sub_140a74f90(arg1[0x12])
    arg1[0x12] = 0

sub_140b4cb40(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
