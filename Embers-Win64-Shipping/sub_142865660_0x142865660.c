// 函数: sub_142865660
// 地址: 0x142865660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 2) == 0)
    return 1

if (*(arg1 + 0x488) == 0)
    return 0

void* rdx = *(arg1 + 0xa8)

if (arg3 == 0)
    return sub_1428656e0(arg2, rdx + 0x2e8, rdx + 0x2f8) __tailcall

return sub_1428656e0(arg2, rdx + 0x2f0, rdx + 0x300) __tailcall
