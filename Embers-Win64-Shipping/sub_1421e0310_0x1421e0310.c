// 函数: sub_1421e0310
// 地址: 0x1421e0310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = zx.d(*(arg1 + 0x38))

if (r8 == 0)
    sub_141fd9f20(arg2 + 0x28, *(arg1 + 0x80))
    sub_141fd9f20(arg2 + 0x48, *(arg1 + 0xd0))
    sub_141fd9f20(arg2 + 0x68, *(arg1 + 0x120))
    return 

if (r8 == 1)
    sub_141febf50(arg2 + 0x28, *(arg1 + 0x80))
    sub_141febf50(arg2 + 0x48, *(arg1 + 0xd0))
    return sub_141febf50(arg2 + 0x68, *(arg1 + 0x120)) __tailcall

if (r8 != 2)
    return 

sub_141fe76e0(arg2 + 0x28, *(arg1 + 0x80))
sub_141fe76e0(arg2 + 0x48, *(arg1 + 0xd0))
return sub_141fe76e0(arg2 + 0x68, *(arg1 + 0x120)) __tailcall
