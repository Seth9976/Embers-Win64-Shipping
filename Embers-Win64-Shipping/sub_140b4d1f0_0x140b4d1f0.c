// 函数: sub_140b4d1f0
// 地址: 0x140b4d1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (arg1[0x13].b & 1) == 0
*arg1 = &data_142e79af8

if (not(cond:0))
    sub_140a74f90(arg1[0x14])

sub_140b4cb40(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
