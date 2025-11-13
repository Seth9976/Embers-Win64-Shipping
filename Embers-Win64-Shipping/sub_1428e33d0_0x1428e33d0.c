// 函数: sub_1428e33d0
// 地址: 0x1428e33d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0)
    int32_t rax_2
    
    if (arg2 == 0)
        rax_2 = *(arg1 + 0x9c) - 1
        *(arg1 + 0x9c) = rax_2
    else
        int32_t rax_1 = *(arg1 + 0x9c)
        *(arg1 + 0x9c) -= 1
        rax_2 = rax_1 - 1
    
    if (rax_2 s<= 0)
        sub_1428d6610(arg1)
        sub_142910b30(arg1)
        int64_t rax_4 = *(arg1 + 0x58)
        
        if (rax_4 != 0)
            rax_4(arg1)
        
        sub_1428a5f50(0xa, arg1, arg1 + 0xa8)
        sub_1428a6780(arg1)

return 1
