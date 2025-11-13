// 函数: sub_14290ab90
// 地址: 0x14290ab90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rax_1

if (*(arg1 + 0x28) == 0)
    rax_1 = sub_1428d5910()
    *(arg1 + 0x28) = rax_1

if (*(arg1 + 0x28) != 0 || rax_1 != 0)
    int64_t* rax_2 = sub_1428900c0(*(*(arg2 + 0x28) + 8))
    
    if (rax_2 != 0)
        sub_1428901a0(*(*(arg1 + 0x28) + 8))
        *(*(arg1 + 0x28) + 8) = rax_2
        int64_t* rax_3 = sub_1428900c0(*(*(arg2 + 0x28) + 0x10))
        
        if (rax_3 != 0)
            sub_1428901a0(*(*(arg1 + 0x28) + 0x10))
            *(*(arg1 + 0x28) + 0x10) = rax_3
            int64_t* rax_4 = sub_1428900c0(*(*(arg2 + 0x28) + 0x18))
            
            if (rax_4 != 0)
                sub_1428901a0(*(*(arg1 + 0x28) + 0x18))
                *(*(arg1 + 0x28) + 0x18) = rax_4
                return 1

return 0
