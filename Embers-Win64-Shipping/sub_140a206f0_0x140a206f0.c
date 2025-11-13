// 函数: sub_140a206f0
// 地址: 0x140a206f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a4fc50(arg1[7])
arg1[7] = 0
DeleteCriticalSection(&arg1[9])
int64_t rcx_2 = arg1[4]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[1] = &data_142d4ba00
*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
