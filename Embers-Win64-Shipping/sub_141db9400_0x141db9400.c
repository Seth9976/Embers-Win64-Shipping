// 函数: sub_141db9400
// 地址: 0x141db9400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14323c858
int64_t rcx = arg1[0x15]

if (rcx != 0)
    sub_140a74f90(rcx)
    arg1[0x15] = 0

DeleteCriticalSection(&arg1[0x29])
DeleteCriticalSection(&arg1[0x21])
sub_141f7baf0(&arg1[0x1c])
*arg1 = &data_14323c7d8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
