// 函数: sub_142b1da60
// 地址: 0x142b1da60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg3

if (arg2 u< arg3)
    do
        uint32_t rdi_1 = zx.d(*(rsi - 2))
        void* r14_1 = rsi
        rsi -= 2
        int32_t r8_1
        
        if ((rdi_1 & 0xfffff800) == 0xd800)
            uint32_t rdx_2
            
            if (test_bit(rdi_1, 0xa) && rsi != arg2)
                rdx_2 = zx.d(*(rsi - 2))
            
            if (not(test_bit(rdi_1, 0xa)) || rsi == arg2 || (rdx_2 & 0xfffffc00) != 0xd800)
                r8_1 = *(*(arg1 + 0x20) + 0x14) - 1
            else
                int64_t* rcx_1 = *(arg1 + 0x20)
                rsi -= 2
                int32_t rax_10 = ((rdx_2 - 0xd7f7) << 0xa) + rdi_1
                rdi_1 = rax_10
                
                if (rax_10 s< rcx_1[3].d)
                    r8_1 = sub_142b6a760(rcx_1, rax_10)
                else
                    r8_1 = *(rcx_1 + 0x14) - 2
        else
            r8_1 = zx.d(*(**(arg1 + 0x20) + (zx.q(rdi_1) u>> 6 << 1))) + (rdi_1 & 0x3f)
        
        int16_t rax_14 = *(*(*(arg1 + 0x20) + 8) + (sx.q(r8_1) << 1))
        
        if (rdi_1 s< zx.d(*(arg1 + 8)) || rax_14 u<= *(arg1 + 0xe)
                || rax_14 == (*(arg1 + 0x10) | 1))
            return r14_1
        
        int16_t r9_1 = *(arg1 + 0x1a)
        bool cond:0_1
        
        if (rax_14 u< r9_1)
            int64_t rcx_6 = *(arg1 + 0x30)
            uint64_t rdx_6 = zx.q(rax_14) u>> 1
            int16_t rcx_7 = *(rcx_6 + (rdx_6 << 1))
            
            if (rcx_7 u<= 0x1ff)
                if (rcx_7 u<= 0xff || rcx_7.b s>= 0)
                    return r14_1
                
                cond:0_1 = (*(rcx_6 + (rdx_6 << 1) - 2) & 0xff00) == 0
                goto label_142b1dbc7
        else if (rax_14 u>= *(arg1 + 0x1e))
            if (rax_14 u<= 0xfc00)
                return r14_1
            
            cond:0_1 = rax_14 == 0xfe00
        label_142b1dbc7:
            
            if (cond:0_1)
                return r14_1
        else if ((rax_14.b & 6) u<= 2)
            return r14_1
        
        if (rax_14 u< *(arg1 + 0x16))
            break
        
        bool cond:1_1
        
        if (rax_14 u< r9_1)
            int64_t rax_16 = *(arg1 + 0x30)
            uint64_t rcx_9 = zx.q(rax_14) u>> 1
            
            if ((*(rax_16 + (rcx_9 << 1)) & 0x80) == 0)
                break
            
            cond:1_1 = (*(rax_16 + (rcx_9 << 1) - 2) & 0xff00) == 0
        else
            if (rax_14 u<= 0xfc00)
                break
            
            cond:1_1 = rax_14 == 0xfe00
        
        if (cond:1_1)
            break
    while (arg2 u< rsi)

return rsi
