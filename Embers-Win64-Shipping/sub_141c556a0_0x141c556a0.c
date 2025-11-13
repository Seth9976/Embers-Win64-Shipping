// 函数: sub_141c556a0
// 地址: 0x141c556a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x198)

if (rcx != 0)
    sub_140a74f90(rcx)

*(arg1 + 0x128) = &data_142d6a040
int64_t rcx_1 = *(arg1 + 0x180)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1405ae180(arg1 + 0x130)
int64_t rcx_3 = *(arg1 + 0x118)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

DeleteCriticalSection(arg1 + 0xe8)
DeleteCriticalSection(arg1 + 0xb0)
void* rdi = *(arg1 + 0x70)

if (rdi != 0)
    sub_141c32620(rdi)
    j_sub_140a74f90(rdi)

sub_141c514d0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
