// 函数: sub_141e73040
// 地址: 0x141e73040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143250b18
int64_t rcx = arg1[0x24]

if (rcx != 0)
    sub_140a74f90(rcx)

DeleteCriticalSection(&arg1[0x1f])
DeleteCriticalSection(&arg1[0x1a])
int64_t rcx_3 = arg1[0x18]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x17].d = 0
int64_t rcx_4 = arg1[0x16]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1413c3790(&arg1[0xe])
int64_t rcx_6 = arg1[0xc]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1405ae080(&arg1[2])
*arg1 = &data_142e0f078

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
