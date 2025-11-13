// 函数: sub_141042fb0
// 地址: 0x141042fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142f01790
sub_140a4fc50(arg1[7])
arg1[7] = 0

while (arg1[5] != 0)
    int64_t* rcx_1 = arg1[5]
    arg1[5] = *rcx_1
    j_sub_140a74f90(rcx_1)

*arg1 = &data_142d5c278

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
