// 函数: sub_1428615b0
// 地址: 0x1428615b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == arg3)
    return 0

if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
    if (arg2 s< arg3)
        return 0xffffffff
    
    return 1

if (arg2 == 0x100)
    arg2 = 0xff00

if (arg3 == 0x100)
    arg3 = 0xff00

if (arg2 s> arg3)
    return 0xffffffff

return 1
