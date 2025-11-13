// 函数: sub_142b1d8f0
// 地址: 0x142b1d8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg3

if (arg3 != arg2)
    do
        uint32_t rsi_1 = zx.d(*(rdi - 2))
        void* r14_1 = rdi
        rdi -= 2
        int32_t r8_1
        
        if ((rsi_1 & 0xfffff800) == 0xd800)
            uint32_t rdx_2
            
            if (test_bit(rsi_1, 0xa) && rdi != arg2)
                rdx_2 = zx.d(*(rdi - 2))
            
            if (not(test_bit(rsi_1, 0xa)) || rdi == arg2 || (rdx_2 & 0xfffffc00) != 0xd800)
                r8_1 = *(*(arg1 + 0x20) + 0x14) - 1
            else
                int64_t* rcx_1 = *(arg1 + 0x20)
                rdi -= 2
                int32_t rax_10 = ((rdx_2 - 0xd7f7) << 0xa) + rsi_1
                rsi_1 = rax_10
                
                if (rax_10 s< rcx_1[3].d)
                    r8_1 = sub_142b6a760(rcx_1, rax_10)
                else
                    r8_1 = *(rcx_1 + 0x14) - 2
        else
            r8_1 = zx.d(*(**(arg1 + 0x20) + (zx.q(rsi_1) u>> 6 << 1))) + (rsi_1 & 0x3f)
        
        int16_t r8_4 = *(*(*(arg1 + 0x20) + 8) + (sx.q(r8_1) << 1))
        
        if ((r8_4.b & 1) != 0)
            int32_t rdx_5
            
            if (arg4 != 0 && r8_4 != 1)
                bool cond:0_1
                
                if (r8_4 u< *(arg1 + 0x1a))
                    cond:0_1 = *(*(arg1 + 0x30) + (zx.q(r8_4) u>> 1 << 1)) u<= 0x1ff
                else
                    cond:0_1 = (r8_4.b & 6) u<= 2
                
                rdx_5.b = cond:0_1
            
            if (arg4 == 0 || r8_4 == 1 || rdx_5 != 0)
                return r14_1
        
        if (rsi_1 s< zx.d(*(arg1 + 0xa)))
            break
        
        if (r8_4 u< *(arg1 + 0x16))
            break
        
        if (*(arg1 + 0x1a) u<= r8_4 && r8_4 u< *(arg1 + 0x1e))
            break
    while (rdi != arg2)

return rdi
