// 函数: sub_142865140
// 地址: 0x142865140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
sub_142870960(arg1)
int32_t rcx = **(arg1 + 8)

if (rcx == 0x10000)
    rcx = 0x304

*arg1 = rcx
return 1
