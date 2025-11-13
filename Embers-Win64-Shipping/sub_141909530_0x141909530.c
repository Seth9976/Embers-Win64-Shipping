// 函数: sub_141909530
// 地址: 0x141909530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x7c]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[3]
*arg1 = &data_142ff49b0
j_sub_140a74f90(rcx_1)
j_sub_140a74f90(arg1[2])
j_sub_140a74f90(arg1[1])
__builtin_memset(&arg1[1], 0, 0x18)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
