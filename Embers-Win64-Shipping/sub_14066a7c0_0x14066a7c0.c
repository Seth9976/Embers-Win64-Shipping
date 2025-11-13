// 函数: sub_14066a7c0
// 地址: 0x14066a7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d84f30
int64_t* rcx = arg1[1]

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t rcx_1 = arg1[5]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*arg1 = &data_142d84ec8
int64_t rcx_2 = arg1[2]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
