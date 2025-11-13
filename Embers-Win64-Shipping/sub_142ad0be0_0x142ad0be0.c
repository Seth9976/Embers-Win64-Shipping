// 函数: sub_142ad0be0
// 地址: 0x142ad0be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s<= 0)
    int32_t rax_1 = std::_WChar_traits<wchar_t>::length(arg1)
    
    if (rax_1 == 0x10 || rax_1 == 0xa)
        uint64_t r10 = 0
        uint64_t r11 = 0
        uint64_t r14 = 0
        uint64_t r15 = 0
        uint64_t rsi = 0
        int32_t rdx = 0
        int16_t* r8 = arg1
        
        while (*arg2 s<= 0)
            int16_t rcx = *r8
            uint32_t rcx_1
            
            if (rcx - 0x30 u<= 9)
                rcx_1 = zx.d(rcx)
            
            if (rcx - 0x30 u> 9 || rcx_1 - 0x30 s< 0)
                *arg2 = 3
            else
                r10 = zx.q(rcx_1 - 0x30 + ((r10 * 5).d << 1))
            
            rdx += 1
            r8 = &r8[1]
            
            if (rdx s> 3)
                break
        
        int32_t rdx_1 = 5
        int16_t* r8_1 = &arg1[5]
        
        while (*arg2 s<= 0)
            int16_t rcx_3 = *r8_1
            uint32_t rcx_4
            
            if (rcx_3 - 0x30 u<= 9)
                rcx_4 = zx.d(rcx_3)
            
            if (rcx_3 - 0x30 u> 9 || rcx_4 - 0x30 s< 0)
                *arg2 = 3
            else
                r11 = zx.q(rcx_4 - 0x30 + ((r11 * 5).d << 1))
            
            rdx_1 += 1
            r8_1 = &r8_1[1]
            
            if (rdx_1 s> 6)
                break
        
        int32_t rdx_2 = 8
        int16_t* r8_2 = &arg1[8]
        
        while (*arg2 s<= 0)
            int16_t rcx_6 = *r8_2
            uint32_t rcx_7
            
            if (rcx_6 - 0x30 u<= 9)
                rcx_7 = zx.d(rcx_6)
            
            if (rcx_6 - 0x30 u> 9 || rcx_7 - 0x30 s< 0)
                *arg2 = 3
            else
                r15 = zx.q(rcx_7 - 0x30 + ((r15 * 5).d << 1))
            
            rdx_2 += 1
            r8_2 = &r8_2[1]
            
            if (rdx_2 s> 9)
                break
        
        if (rax_1 == 0x10)
            int32_t rdx_3 = rax_1 - 5
            int16_t* r8_3 = &arg1[0xb]
            
            while (*arg2 s<= 0)
                int16_t rcx_9 = *r8_3
                uint32_t rcx_10
                
                if (rcx_9 - 0x30 u<= 9)
                    rcx_10 = zx.d(rcx_9)
                
                if (rcx_9 - 0x30 u> 9 || rcx_10 - 0x30 s< 0)
                    *arg2 = 3
                else
                    r14 = zx.q(rcx_10 - 0x30 + ((r14 * 5).d << 1))
                
                rdx_3 += 1
                r8_3 = &r8_3[1]
                
                if (rdx_3 s> 0xc)
                    break
            
            int32_t i = 0xe
            int16_t* r8_4 = &arg1[0xe]
            
            do
                if (*arg2 s> 0)
                    return (zx.o(0)).q
                
                int16_t rcx_12 = *r8_4
                uint32_t rcx_13
                
                if (rcx_12 - 0x30 u<= 9)
                    rcx_13 = zx.d(rcx_12)
                
                if (rcx_12 - 0x30 u> 9 || rcx_13 - 0x30 s< 0)
                    *arg2 = 3
                else
                    rsi = zx.q(rcx_13 - 0x30 + ((rsi * 5).d << 1))
                
                i += 1
                r8_4 = &r8_4[1]
            while (i s<= 0xf)
        
        if (*arg2 s> 0)
            return (zx.o(0)).q
        
        return sub_142acc900(r10.d, (r11 - 1).d, r15.d) f* 86400000.0
            f+ _mm_cvtepi32_pd(zx.q(r14.d * 0x36ee80)).q f+ _mm_cvtepi32_pd(zx.q(rsi.d * 0xea60)).q
    
    *arg2 = 3

return (zx.o(0)).q
