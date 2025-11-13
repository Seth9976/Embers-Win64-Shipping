// 函数: sub_1428d5ba0
// 地址: 0x1428d5ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rcx = *(arg1 + 0x20)

if (rcx == 0)
    if (arg2 == 0)
        return 0
    
    sub_1428901a0(rcx)
    *(arg1 + 0x20) = arg2
else if (arg2 != 0)
    sub_1428901a0(rcx)
    *(arg1 + 0x20) = arg2

if (arg3 != 0)
    sub_1428901a0(*(arg1 + 0x28))
    *(arg1 + 0x28) = arg3

return 1
