// 函数: sub_140615300
// 地址: 0x140615300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = arg2

if (arg3 == 2)
    *(arg1 + 0x28) = arg4
    *(arg1 + 0x24) = 1
    *(arg1 + 0x2c) = arg5
    return arg5

if (arg3 == 4)
    *(arg1 + 0x28) = arg4
    *(arg1 + 0x24) = 2
    *(arg1 + 0x2c) = arg5
    return arg5

if (arg3 == 8)
    *(arg1 + 0x28) = arg4
    *(arg1 + 0x24) = 3
    *(arg1 + 0x2c) = arg5
    return arg5

if (arg3 == 0x10)
    *(arg1 + 0x28) = arg4
    *(arg1 + 0x24) = 4
    *(arg1 + 0x2c) = arg5
    return arg5

*(arg1 + 0x28) = arg4
int32_t rax = 5

if (arg3 != 0x20)
    rax = 0

*(arg1 + 0x24) = rax
*(arg1 + 0x2c) = arg5
return arg5
