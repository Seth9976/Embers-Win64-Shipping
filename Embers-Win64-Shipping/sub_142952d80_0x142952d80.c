// 函数: sub_142952d80
// 地址: 0x142952d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (sub_142890040(*(arg1 + 0x10), *(arg2 + 0x10)) != 0
        && sub_142890040(*(arg1 + 0x18), *(arg2 + 0x18)) != 0
        && sub_142890040(*(arg1 + 0x20), *(arg2 + 0x20)) != 0)
    *(arg1 + 0x28) = *(arg2 + 0x28)
    *(arg1 + 8) = *(arg2 + 8)
    return 1

return 0
