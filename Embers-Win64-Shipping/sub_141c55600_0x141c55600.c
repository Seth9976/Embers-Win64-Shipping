// 函数: sub_141c55600
// 地址: 0x141c55600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xa10)

if (rcx != 0)
    sub_140a74f90(rcx)

*(arg1 + 0x9a0) = &data_142d6a040
int64_t rcx_1 = *(arg1 + 0x9f8)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1405ae180(arg1 + 0x9a8)
DeleteCriticalSection(arg1 + 0x978)
sub_141c32500(arg1 + 0x70)
sub_141c514d0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
