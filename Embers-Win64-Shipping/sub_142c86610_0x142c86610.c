// 函数: sub_142c86610
// 地址: 0x142c86610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = zx.q(*arg1)
void* r9 = **(arg1 + 0x10)

if (r8.d == 0)
    return sub_142c85f60(arg1, arg2, r8, arg3) __tailcall

if (r8.d == 1)
    return sub_142c85c10(arg1, arg2, arg3) __tailcall

if (r8.d == 2)
    return sub_142c86790(arg1, arg2, arg3) __tailcall

if (r8.d == 3)
    sub_142c64850(r9, "%s\n", "TFTP finished", arg3)
    return 0

sub_142c64760(r9, "%s", "Internal state machine error", arg3)
return 0x47
