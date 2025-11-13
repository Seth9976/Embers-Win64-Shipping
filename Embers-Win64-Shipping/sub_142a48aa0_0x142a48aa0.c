// 函数: sub_142a48aa0
// 地址: 0x142a48aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    if ((*(arg2 + 8) & 1) != 0)
        if ((*(arg1 + 8) & 4) != 0)
            void* rax_1 = *(arg1 + 0x18)
            int32_t rcx = *(rax_1 - 4)
            *(rax_1 - 4) -= 1
            
            if (rcx == 1)
                sub_142a7dcd0(*(arg1 + 0x18) - 4)
        
        *(arg1 + 0x18) = 0
        *(arg1 + 0x10) = 0
        *(arg1 + 8) = 1
        return arg1
    
    if ((*(arg1 + 8) & 4) != 0)
        void* rax_4 = *(arg1 + 0x18)
        int32_t rcx_3 = *(rax_4 - 4)
        *(rax_4 - 4) -= 1
        
        if (rcx_3 == 1)
            sub_142a7dcd0(*(arg1 + 0x18) - 4)
    
    int16_t rcx_6 = *(arg2 + 8)
    
    if ((rcx_6 & 0xffe0) == 0)
        *(arg1 + 8) = 2
        return arg1
    
    *(arg1 + 8) = rcx_6
    int32_t rdx = sx.d(*(arg2 + 8))
    int32_t rax_8 = rdx & 0x1f
    
    if (rax_8 == 0)
    label_142a48c03:
        int32_t rsi_2
        
        if (rdx.w s< 0)
            rsi_2 = *(arg2 + 0xc)
        else
            rsi_2 = rdx s>> 5
        
        if (sub_142a48460(arg1, rsi_2) == 0)
            goto label_142a48c67
        
        void* rdx_3 = arg2 + 0xa
        
        if ((*(arg2 + 8) & 2) == 0)
            rdx_3 = *(arg2 + 0x18)
        
        void* rcx_10 = arg1 + 0xa
        
        if ((*(arg1 + 8) & 2) == 0)
            rcx_10 = *(arg1 + 0x18)
        
        sub_142a8bca0(rcx_10, rdx_3, rsi_2)
        
        if (rsi_2 s> 0x3ff)
            *(arg1 + 8) |= 0xffe0
            *(arg1 + 0xc) = rsi_2
        else
            *(arg1 + 8) &= 0x1f
            rsi_2.w <<= 5
            *(arg1 + 8) |= rsi_2.w
    else if (rax_8 == 2)
        memcpy(arg1 + 0xa, arg2 + 0xa, (sx.d(rcx_6) s>> 5) * 2)
    else if (rax_8 == 4)
        void* rax_12 = *(arg2 + 0x18)
        *(rax_12 - 4)
        *(rax_12 - 4) += 1
        bool cond:1_1 = *(arg1 + 8) s>= 0
        *(arg1 + 0x18) = *(arg2 + 0x18)
        *(arg1 + 0x10) = *(arg2 + 0x10)
        
        if (not(cond:1_1))
            *(arg1 + 0xc) = *(arg2 + 0xc)
    else if (rax_8 != 8)
    label_142a48c67:
        *(arg1 + 8) = 1
        *(arg1 + 0x18) = 0
        *(arg1 + 0x10) = 0
    else
        if (arg3 == 0)
            goto label_142a48c03
        
        *(arg1 + 0x18) = *(arg2 + 0x18)
        *(arg1 + 0x10) = *(arg2 + 0x10)
        
        if (rcx_6 s< 0)
            *(arg1 + 0xc) = *(arg2 + 0xc)

return arg1
