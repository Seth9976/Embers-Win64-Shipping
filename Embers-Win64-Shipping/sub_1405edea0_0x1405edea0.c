// 函数: sub_1405edea0
// 地址: 0x1405edea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
sub_1405d1550(&arg1[0xd])
int64_t* rcx_1 = arg1[0xc]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x10))(rcx_1)

int64_t* rcx_2 = arg1[0xb]

if (rcx_2 != 0)
    (*(*rcx_2 + 0x10))(rcx_2)

*arg1 = &data_142d5efc8
arg1[1] = &data_142d5f050
int64_t rcx_3 = arg1[7]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[1] = &data_142d57680
*arg1 = &data_142d575d8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
