// 函数: sub_1419c4d50
// 地址: 0x1419c4d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14300e9a0
int64_t* rcx = arg1[0xa]

if (rcx != 0)
    (**rcx)(rcx, 1)
    arg1[0xa] = 0

sub_1419c3230(&arg1[0xb])
int64_t rcx_2 = arg1[7]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_14300de68
int64_t rcx_3 = arg1[4]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
