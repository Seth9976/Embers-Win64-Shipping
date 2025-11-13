// 函数: sub_1428cc570
// 地址: 0x1428cc570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != arg2)
    if (sub_142890040(&arg1[2], &arg2[2]) == 0)
        return 0
    
    if (sub_142890040(&arg1[8], &arg2[8]) == 0)
        return 0
    
    if (sub_142890040(&arg1[0xe], &arg2[0xe]) == 0)
        return 0
    
    *arg1 = *arg2
    *(arg1 + 0x50) = *(arg2 + 0x50)
    *(arg1 + 0x58) = *(arg2 + 0x58)

return arg1
