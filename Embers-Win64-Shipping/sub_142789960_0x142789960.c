// 函数: sub_142789960
// 地址: 0x142789960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xd].d = 0
int64_t rcx = arg1[0xc]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1409aaf90(&arg1[4])
int64_t* rcx_2 = arg1[3]

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

*arg1 = &data_142d4cb20

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
