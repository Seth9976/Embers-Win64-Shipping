// 函数: sub_140374100
// 地址: 0x140374100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rdx_1 = *(arg1 + 0x28)
    
    if (rdx_1 != 0)
        int64_t r8_1 = *(arg1 + 0x38)
        
        if (r8_1 != 0)
            int64_t rax_1 = *(rdx_1 + 0x38)
            
            if (rax_1 != 0)
                r8_1(*(arg1 + 0x40), rax_1)
                rdx_1 = *(arg1 + 0x28)
                r8_1 = *(arg1 + 0x38)
            
            r8_1(*(arg1 + 0x40), rdx_1)
            *(arg1 + 0x28) = 0
            return 0

return 0xfffffffe
