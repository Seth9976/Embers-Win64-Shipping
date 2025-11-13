// 函数: sub_140a9d2d0
// 地址: 0x140a9d2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e66628
DeleteCriticalSection(&arg1[0x13])
int64_t rcx_1 = arg1[0x11]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140a98b80(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
