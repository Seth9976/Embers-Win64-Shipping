// 函数: sub_142a9eee0
// 地址: 0x142a9eee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) == 0 && *(arg1 + 0x58) == 0 && (*(arg1 + 0x20) & 1) == 0)
    int64_t rcx = *(arg1 + 0x30)
    
    if (rcx != arg1 + 0x60)
        sub_142a7dcd0(rcx)
        *(arg1 + 0x30) = 0
        *(arg1 + 0x38) = 0
    
    int64_t r9_1 = *(arg1 + 0x10)
    
    if (r9_1 != arg1 + 0x60)
        int64_t rcx_1 = sx.q(*(arg1 + 0x1c))
        
        if (rcx_1.d s<= 0x19)
            memcpy(arg1 + 0x60, r9_1, (rcx_1 << 2).d)
            sub_142a7dcd0(*(arg1 + 0x10))
            *(arg1 + 0x10) = arg1 + 0x60
            *(arg1 + 0x18) = 0x19
        else if ((rcx_1 + 7).d s< *(arg1 + 0x18))
            void* rax_2 = sub_142a7dd30(r9_1, rcx_1 << 2)
            
            if (rax_2 != 0)
                *(arg1 + 0x10) = rax_2
                *(arg1 + 0x18) = *(arg1 + 0x1c)
    
    int64_t* rcx_5 = *(arg1 + 0x50)
    
    if (rcx_5 != 0 && rcx_5[1].d == 0)
        (**rcx_5)(rcx_5, 1)
        *(arg1 + 0x50) = 0

return arg1
