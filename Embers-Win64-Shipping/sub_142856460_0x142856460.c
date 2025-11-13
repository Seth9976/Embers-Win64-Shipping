// 函数: sub_142856460
// 地址: 0x142856460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) != 0)
    void* rax_1 = *(arg1 + 0xa8)
    
    if (*(rax_1 + 0x110) != 0 && *(rax_1 + 0x108) != 0)
        int32_t rax_2 = *(arg1 + 0x5c)
        bool cond:1_1
        
        if (*(arg1 + 0x38) == 0)
            cond:1_1 = rax_2 != 0xc
        else
            if (rax_2 == 0)
                return 1
            
            cond:1_1 = rax_2 != 0x14
        
        if (not(cond:1_1))
            return 1

return 0
