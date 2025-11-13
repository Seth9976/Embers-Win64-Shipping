// 函数: sub_142a4bd80
// 地址: 0x142a4bd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1 & 0x7fffffffffffffff) u> 0x7ff0000000000000)
    return nan.0

if ((arg1 & 0x7fffffffffffffff) == 0x7ff0000000000000)
    return inf.0

if ((arg1 u>> 0x38).b s< 0)
    return ceil(arg1) __tailcall

return floor(arg1) __tailcall
