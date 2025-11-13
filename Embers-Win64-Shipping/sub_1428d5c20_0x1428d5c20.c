// 函数: sub_1428d5c20
// 地址: 0x1428d5c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rcx = *(arg1 + 8)

if ((rcx == 0 && arg2 == 0) || (*(arg1 + 0x10) == 0 && arg3 == 0))
    return 0

if (*(arg1 + 0x18) == 0 && arg4 == 0)
    return 0

if (arg2 != 0)
    sub_1428901a0(rcx)
    *(arg1 + 8) = arg2

if (arg3 != 0)
    sub_1428901a0(*(arg1 + 0x10))
    *(arg1 + 0x10) = arg3

if (arg4 != 0)
    sub_1428901a0(*(arg1 + 0x18))
    *(arg1 + 0x18) = arg4

return 1
