// 函数: sub_142b10b60
// 地址: 0x142b10b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg4

if (*arg4 s<= 0)
    if (*(arg1 + 0x6c) s> 0)
        *arg4 = 0x1e
        return arg1
    
    uint64_t rax_2 = zx.q(*(arg1 + 0x58))
    
    if (*(arg1 + 0x5c) != rax_2.d)
    label_142b10c16:
        int64_t rdx_1 = sx.q(*(arg1 + 0x5c))
        int32_t* rcx_4 = *(arg1 + 0x50) + (rdx_1 << 3)
        *(arg1 + 0x5c) = (rdx_1 + 1).d
        sub_142b115e0(rcx_4, arg2, arg3, arg1 + 0x10, rdi)
        
        if (*rdi s<= 0 && (*(arg1 + 0x18) & 1) != 0)
            *rdi = 7
    else
        uint32_t rsi_1 = 0x400
        
        if (rax_2.d != 0)
            rsi_1 = (rax_2 << 2).d
        
        int64_t rcx = sx.q(rsi_1)
        uint64_t rax_3 = 8 * rcx
        
        if (mulu.dp.q(8, rcx) u>> 0x40 != zx.o(0))
            rax_3 = -1
        
        int64_t rax_4 = j_sub_142a7dd00(rax_3)
        
        if (rax_4 != 0)
            int64_t rax_5 = sx.q(*(arg1 + 0x5c))
            
            if (rax_5.d s> 0)
                memcpy(rax_4, *(arg1 + 0x50), (rax_5 << 3).d)
            
            sub_142a47920(*(arg1 + 0x50))
            *(arg1 + 0x50) = rax_4
            *(arg1 + 0x58) = rsi_1
            goto label_142b10c16
        
        *rdi = 7

return arg1
