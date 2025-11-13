// 函数: sub_140b64a80
// 地址: 0x140b64a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e7cb08
CloseHandle(arg1[3])
CloseHandle(arg1[2])
int64_t rcx_2 = arg1[4]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142d40498

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
