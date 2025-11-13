// 函数: sub_142bdada0
// 地址: 0x142bdada0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != *(arg1 + 0xcc) || arg4 != *(arg1 + 0xd0))
    *(arg1 + 0xcc) = arg2
    *(arg1 + 0xd0) = arg4
    sub_142bdad00(arg1, 0)

if (arg3 == *(arg1 + 0x198) && arg5 == *(arg1 + 0x19c))
    return 

*(arg1 + 0x198) = arg3
*(arg1 + 0x19c) = arg5
sub_142bdad00(arg1, 1)
sub_142bda450(arg1 + 0x1a0, arg3, arg5)
