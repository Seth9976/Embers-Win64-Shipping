// 函数: sub_14189f010
// 地址: 0x14189f010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe97b8
int64_t rcx = arg1[0x10]

if (rcx != 0)
    sub_140a74f90(rcx)

DeleteCriticalSection(&arg1[9])
*arg1 = &data_142fe6aa8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
