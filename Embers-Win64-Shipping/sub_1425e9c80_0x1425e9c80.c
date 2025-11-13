// 函数: sub_1425e9c80
// 地址: 0x1425e9c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143449ea0
int64_t rcx = arg1[6]

if (rcx != 0)
    sub_140a74f90(rcx)

DeleteCriticalSection(&arg1[1])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
