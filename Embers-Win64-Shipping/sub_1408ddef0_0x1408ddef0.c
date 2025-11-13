// 函数: sub_1408ddef0
// 地址: 0x1408ddef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e11bc0
sub_141f97a70(sub_141f88540(), arg1)
DeleteCriticalSection(&arg1[0xf])
int64_t rcx_2 = arg1[0xd]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1405ae080(&arg1[3])
*arg1 = &data_142e0f078

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
