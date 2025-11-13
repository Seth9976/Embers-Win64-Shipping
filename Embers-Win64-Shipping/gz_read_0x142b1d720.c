// 函数: gz_read
// 地址: 0x142b1d720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = arg2

if (arg2 u< arg3)
    do
        uint32_t rbx_3 = zx.d(*rsi)
        int16_t* rbp_1 = rsi
        rsi = &rsi[1]
        int32_t r8_1
        
        if ((rbx_3 & 0xfffff800) == 0xd800)
            uint32_t rcx_1
            
            if (not(test_bit(rbx_3, 0xa)) && rsi != arg3)
                rcx_1 = zx.d(*rsi)
            
            if (test_bit(rbx_3, 0xa) || rsi == arg3 || (rcx_1 & 0xfffffc00) != 0xdc00)
                r8_1 = *(*(arg1 + 0x20) + 0x14) - 1
            else
                rsi = &rsi[1]
                rbx_3 = ((rbx_3 - 0xd7f7) << 0xa) + rcx_1
                int64_t* rcx_2 = *(arg1 + 0x20)
                
                if (rbx_3 s< rcx_2[3].d)
                    r8_1 = sub_142b6a760(rcx_2, rbx_3)
                else
                    r8_1 = *(rcx_2 + 0x14) - 2
        else
            r8_1 = zx.d(*(**(arg1 + 0x20) + (zx.q(rbx_3) u>> 6 << 1))) + (rbx_3 & 0x3f)
        
        int16_t rax_11 = *(*(*(arg1 + 0x20) + 8) + (sx.q(r8_1) << 1))
        
        if (rbx_3 s< zx.d(*(arg1 + 0xc)) || rax_11 u< *(arg1 + 0x16))
            return rbp_1
        
        int16_t r8_4 = *(arg1 + 0x1a)
        bool cond:0_1
        
        if (rax_11 u< r8_4)
            int64_t rcx_5 = *(arg1 + 0x30)
            uint64_t rdx_5 = zx.q(rax_11) u>> 1
            
            if ((*(rcx_5 + (rdx_5 << 1)) & 0x80) == 0)
                return rbp_1
            
            cond:0_1 = (*(rcx_5 + (rdx_5 << 1) - 2) & 0xff00) == 0
        else
            if (rax_11 u<= 0xfc00)
                return rbp_1
            
            cond:0_1 = rax_11 == 0xfe00
        
        if (cond:0_1)
            return rbp_1
        
        if (rax_11 u<= *(arg1 + 0xe))
            break
        
        if (rax_11 == (*(arg1 + 0x10) | 1))
            break
        
        bool cond:1_1
        
        if (rax_11 u< r8_4)
            int64_t rax_13 = *(arg1 + 0x30)
            uint64_t rcx_8 = zx.q(rax_11) u>> 1
            int16_t rax_14 = *(rax_13 + (rcx_8 << 1))
            
            if (rax_14 u<= 0x1ff)
                if (rax_14 u<= 0xff)
                    break
                
                if (rax_14.b s>= 0)
                    break
                
                cond:1_1 = (*(rax_13 + (rcx_8 << 1) - 2) & 0xff00) == 0
            label_142b1d8dd:
                
                if (cond:1_1)
                    break
        else
            if (rax_11 u>= *(arg1 + 0x1e))
                if (rax_11 u<= 0xfc00)
                    break
                
                cond:1_1 = rax_11 == 0xfe00
                goto label_142b1d8dd
            
            rax_11.b &= 6
            
            if (rax_11.b u<= 2)
                break
    while (rsi u< arg3)

return rsi
