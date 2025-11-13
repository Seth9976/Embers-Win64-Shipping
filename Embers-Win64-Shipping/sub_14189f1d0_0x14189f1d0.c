// 函数: sub_14189f1d0
// 地址: 0x14189f1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe99e0
int64_t rcx = arg1[0x16]

if (rcx != 0)
    sub_140a74f90(rcx)

DeleteCriticalSection(&arg1[0xf])
*arg1 = &data_142fe9960

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
