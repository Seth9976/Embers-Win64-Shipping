// 函数: sub_142b16f30
// 地址: 0x142b16f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg3
int32_t r14 = 0
int64_t r12 = sx.q(*(*(arg1 + 0xd0) + 8))
int32_t r14_1

while (true)
    int32_t rax_2 = sub_142aa0780(*(arg1 + 0xc8), (sx.q(r14) << 1) + arg2, rsi, 0)
    
    if (rax_2 != rsi)
        r14_1 = r14 + rax_2
        int32_t rsi_1 = rsi - rax_2
        int64_t rcx_1 = sx.q(r14_1) << 1
        int16_t rdx_2 = *(rcx_1 + arg2)
        uint32_t r8_1
        
        if (0x2800 + rdx_2 u<= 0x3ff && rsi_1 s>= 2)
            r8_1 = zx.d(*(rcx_1 + arg2 + 2))
        
        int32_t rax_8
        int32_t r15_1
        bool cond:0_1
        
        if (0x2800 + rdx_2 u> 0x3ff || rsi_1 s< 2 || (r8_1 & 0xfffffc00) != 0xdc00)
            r15_1 = -1
            cond:0_1 = sub_142a9f280(arg1, zx.q(rdx_2)) != 0
            rax_8 = 1
        else
            r15_1 = -2
            cond:0_1 = sub_142a9f280(arg1, zx.q(((zx.d(rdx_2) - 0xd7f7) << 0xa) + r8_1)) != 0
            rax_8 = 2
        
        if (cond:0_1)
            r15_1 = rax_8
        
        if (r15_1 s> 0)
            break
        
        int32_t rdi_1 = 0
        char* rbx_1 = nullptr
        
        if (r12 s> 0)
            do
                if (rbx_1[*(arg1 + 0xe0)] != 0xff)
                    void* rax_11 = sub_142ae72d0(*(arg1 + 0xd0), rdi_1)
                    int16_t rcx_5 = *(rax_11 + 8)
                    void* r9_1
                    
                    if ((rcx_5.b & 0x11) == 0)
                        r9_1 = rax_11 + 0xa
                        
                        if ((rcx_5.b & 2) == 0)
                            r9_1 = *(rax_11 + 0x18)
                    else
                        r9_1 = nullptr
                    
                    int32_t rax_13
                    
                    if (rcx_5 s< 0)
                        rax_13 = *(rax_11 + 0xc)
                    else
                        rax_13 = sx.d(rcx_5) s>> 5
                    
                    if (rax_13 s<= rsi_1 && sub_142b15d90(arg2, r14_1, arg3, r9_1, rax_13) != 0)
                        return zx.q(r14_1)
                
                rdi_1 += 1
                rbx_1 = &rbx_1[1]
            while (rbx_1 s< r12)
        
        r14 = r14_1 - r15_1
        rsi = rsi_1 + r15_1
        
        if (rsi_1 != neg.d(r15_1))
            continue
    
    return zx.q(arg3)

return zx.q(r14_1)
