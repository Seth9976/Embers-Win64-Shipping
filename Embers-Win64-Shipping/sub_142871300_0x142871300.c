// 函数: sub_142871300
// 地址: 0x142871300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 - 6 u<= 0x49)
    switch (arg2)
        case 6
            *(*(arg1 + 0x130) + 0x10) = arg3
            return 1
        case 0x35
            *(arg1 + 0x1f0) = arg3
            return 1
        case 0x3f
            *(arg1 + 0x220) = arg3
            return 1
        case 0x48
            *(arg1 + 0x218) = arg3
            return 1
        case 0x4b
            *(arg1 + 0x34c) |= 0x20
            *(arg1 + 0x2e0) = arg3
            return 1
        case 0x4c
            *(arg1 + 0x34c) |= 0x20
            *(arg1 + 0x2e8) = arg3
            return 1
        case 0x4d
            *(arg1 + 0x34c) |= 0x20
            *(arg1 + 0x2f0) = arg3
            return 1
        case 0x4f
            *(arg1 + 0x370) = arg3
            return 1

return 0
