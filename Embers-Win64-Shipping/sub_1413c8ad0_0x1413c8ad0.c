// 函数: sub_1413c8ad0
// 地址: 0x1413c8ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)

if (rbx == 0 || (*(rbx + 0x64) & 2) == 0)
    return 

void* rcx = *(rbx + 0x20)

if (*(rcx + 0x13c) != 0)
    sub_14122fa20(rbx)
    rcx = *(rbx + 0x20)

sub_141f26cb0(rcx, arg1 + 0x10, arg1 + 0x50)
int64_t rax = sx.q(*(rbx + 0x28))

if (rax.d == 0xffffffff)
    return 

sub_141228a60(rax * 0x30 + *(*(rbx + 0x80) + 0xee8), rbx)

if (*(*(rbx + 0x20) + 0x13c) != 0)
    sub_14121c3c0(rbx)
