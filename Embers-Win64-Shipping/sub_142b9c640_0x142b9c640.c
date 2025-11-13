// 函数: sub_142b9c640
// 地址: 0x142b9c640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x21).d)

if (arg2 == 0)
    return zx.q((arg2 + 6).d)

sub_142b99980(*arg1, *(arg2 + 0x10))
*(arg2 + 0x10) = 0
__builtin_memset(arg2, 0, 0x20)
*(arg2 + 0x20) = 0
return 0
