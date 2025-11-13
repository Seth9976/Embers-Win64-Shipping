// 函数: sub_1408de2f0
// 地址: 0x1408de2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e115b8
int64_t* rcx = arg1[7]

if (rcx != 0)
    (**rcx)(rcx, 1)

arg1[7] = 0
*arg1 = &data_142e0f130
int64_t rcx_1 = arg1[5]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
