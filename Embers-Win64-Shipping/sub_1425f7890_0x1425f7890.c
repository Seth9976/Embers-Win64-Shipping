// 函数: sub_1425f7890
// 地址: 0x1425f7890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14344b6d8
arg1[1] = &data_14344b818
arg1[2] = &data_14344b828
CoUninitialize()
int64_t rcx = arg1[0x4b]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x49]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

DeleteCriticalSection(&arg1[0x44])
arg1[0x43] = &data_14344b698
sub_141c47e90(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
