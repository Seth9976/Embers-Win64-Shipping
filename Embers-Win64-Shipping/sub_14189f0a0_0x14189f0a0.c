// 函数: sub_14189f0a0
// 地址: 0x14189f0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe98f0
DeleteCriticalSection(&arg1[0x12])
arg1[0xf].d = 0
int64_t rcx_1 = arg1[0xe]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1413c3790(&arg1[6])
*arg1 = &data_142dd6680

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
