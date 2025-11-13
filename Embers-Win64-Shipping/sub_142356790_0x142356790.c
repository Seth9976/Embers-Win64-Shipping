// 函数: sub_142356790
// 地址: 0x142356790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141c82590(arg1 + 0x60)
int64_t rcx_1 = *(arg1 + 0x38)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

DeleteCriticalSection(arg1 + 0x10)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
