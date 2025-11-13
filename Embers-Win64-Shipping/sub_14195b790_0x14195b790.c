// 函数: sub_14195b790
// 地址: 0x14195b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ffc4b8
int64_t* rcx = arg1[9]

if (rcx != 0)
    sub_140a4fc50(rcx)
    arg1[9] = 0

DeleteCriticalSection(&arg1[1])
*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
