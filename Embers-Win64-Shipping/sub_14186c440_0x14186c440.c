// 函数: sub_14186c440
// 地址: 0x14186c440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe6a70
int64_t* rcx = arg1[8]

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t rcx_1 = arg1[6]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[3]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[1]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*arg1 = &data_142d56fa0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
