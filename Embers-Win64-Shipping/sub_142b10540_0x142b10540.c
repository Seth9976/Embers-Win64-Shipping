// 函数: sub_142b10540
// 地址: 0x142b10540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) = 0xffffffff

if (arg2 s<= 0xffff)
    return sub_142b10910(arg1, *(arg1 + 8), arg2) __tailcall

if ((sub_142b10910(arg1, *(arg1 + 8), zx.d((arg2 s>> 0xa).w - 0x2840)) & 1) == 0)
    return 0

return sub_142b105d0(arg1, (arg2 & 0x3ff) | 0xdc00) __tailcall
