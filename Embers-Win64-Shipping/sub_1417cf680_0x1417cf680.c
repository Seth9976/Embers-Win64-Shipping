// 函数: sub_1417cf680
// 地址: 0x1417cf680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[0x49]
*arg1 = &data_142fcb330
arg1[5] = &data_142fcb850

if (rdi != 0)
    DeleteCriticalSection(rdi + 0xb0)
    sub_140596e10(rdi + 0xa0)
    sub_140596e10(rdi + 0x90)
    sub_1405ae080(rdi + 0x18)
    sub_14094ac80(rdi + 8)
    j_sub_140a74f90(rdi)

int64_t rcx_6 = arg1[0x41]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x3e]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_1405aef50(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
