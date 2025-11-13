// 函数: sub_142897470
// 地址: 0x142897470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rcx = *(arg1 + 0x18)

if (rcx == 0 && arg2 == 0)
    return 0

if (*(arg1 + 0x20) == 0 && arg3 == 0)
    return 0

if (arg2 != 0)
    sub_1428901a0(rcx)
    *(arg1 + 0x18) = arg2

if (arg3 != 0)
    sub_1428901a0(*(arg1 + 0x20))
    *(arg1 + 0x20) = arg3

if (arg4 != 0)
    sub_1428901a0(*(arg1 + 0x28))
    *(arg1 + 0x28) = arg4

return 1
