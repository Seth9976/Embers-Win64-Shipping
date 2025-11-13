// 函数: sub_141c55770
// 地址: 0x141c55770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0xf0)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = *(arg1 + 0xe0)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

DeleteCriticalSection(arg1 + 0xb8)
int64_t rcx_3 = *(arg1 + 0xa8)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_141c4f8a0(arg1 + 0x70)
sub_141c514d0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
