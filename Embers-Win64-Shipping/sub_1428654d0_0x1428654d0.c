// 函数: sub_1428654d0
// 地址: 0x1428654d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0)
    int64_t rax_1
    
    if (*(arg1 + 0xc) == 0)
        rax_1 = 0
    label_142865501:
        
        if (arg2 != 0)
            *arg2 = rax_1
        
        return 1
    
    rax_1 = sub_14285b4c0((*(arg1 + 0x10)).b)
    
    if (rax_1 != 0)
        goto label_142865501

return 0
