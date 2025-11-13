// 函数: sub_142b170c0
// 地址: 0x142b170c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3
int64_t r15 = sx.q(*(*(arg1 + 0xd0) + 8))
int32_t rax_1

while (true)
    rax_1 = sub_142aa0950(*(arg1 + 0xc8), arg2, rdi, 0)
    
    if (rax_1 != 0)
        int16_t r8_1 = *(arg2 + (sx.q(rax_1 - 1) << 1))
        uint32_t rdx_1
        
        if (0x2400 + r8_1 u<= 0x3ff && rax_1 s>= 2)
            rdx_1 = zx.d(*(arg2 + (sx.q(rax_1 - 2) << 1)))
        
        int32_t rax_9
        int32_t r14_1
        bool cond:0_1
        
        if (0x2400 + r8_1 u> 0x3ff || rax_1 s< 2 || (rdx_1 & 0xfffffc00) != 0xd800)
            r14_1 = -1
            cond:0_1 = sub_142a9f280(arg1, zx.q(r8_1)) != 0
            rax_9 = 1
        else
            r14_1 = -2
            cond:0_1 = sub_142a9f280(arg1, zx.q(((rdx_1 - 0xd7f7) << 0xa) + zx.d(r8_1))) != 0
            rax_9 = 2
        
        if (cond:0_1)
            r14_1 = rax_9
        
        if (r14_1 s> 0)
            break
        
        int32_t rsi_1 = 0
        char* rbx_1 = nullptr
        
        if (r15 s> 0)
            do
                if (rbx_1[*(arg1 + 0xe0)] != 0xff)
                    void* rax_12 = sub_142ae72d0(*(arg1 + 0xd0), rsi_1)
                    int16_t rcx_6 = *(rax_12 + 8)
                    int16_t* r9_1
                    
                    if ((rcx_6.b & 0x11) == 0)
                        r9_1 = rax_12 + 0xa
                        
                        if ((rcx_6.b & 2) == 0)
                            r9_1 = *(rax_12 + 0x18)
                    else
                        r9_1 = nullptr
                    
                    int32_t rax_14
                    
                    if (rcx_6 s< 0)
                        rax_14 = *(rax_12 + 0xc)
                    else
                        rax_14 = sx.d(rcx_6) s>> 5
                    
                    if (rax_14 s<= rax_1
                            && sub_142b15d90(arg2, rax_1 - rax_14, arg3, r9_1, rax_14) != 0)
                        return zx.q(rax_1)
                
                rsi_1 += 1
                rbx_1 = &rbx_1[1]
            while (rbx_1 s< r15)
        
        rdi = rax_1 + r14_1
        
        if (rax_1 != neg.d(r14_1))
            continue
    
    return 0

return zx.q(rax_1)
