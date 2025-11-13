// 函数: sub_1426f45a0
// 地址: 0x1426f45a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x4c]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x48]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x46]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x45] = &data_142d995f8
arg1[0x44] = &data_143454fb0
sub_1405ae4b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
