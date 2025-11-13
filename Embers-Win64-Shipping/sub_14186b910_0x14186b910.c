// 函数: sub_14186b910
// 地址: 0x14186b910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe7ef0
DeleteCriticalSection(&arg1[0xd])
int64_t rcx_1 = arg1[0xb]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140f23e90(&arg1[1])
*arg1 = &data_142e2dc48

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
