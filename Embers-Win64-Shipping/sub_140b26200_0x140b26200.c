// 函数: sub_140b26200
// 地址: 0x140b26200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int32_t rdx = arg2[1].d

if (rdx s> 1)
    if (rdx == 0)
        rdx = 1
    
    if (rdx s> 0)
        sub_1405947f0(arg1, rdx)
    
    int32_t rbp_1 = 0
    int16_t* rsi_1 = nullptr
    
    while (true)
        int32_t rax_1 = arg2[1].d
        int32_t rcx = rax_1 - 1
        
        if (rax_1 == 0)
            rcx = 0
        
        if (rbp_1 s>= rcx)
            break
        
        wint_t _C = *(rsi_1 + *arg2)
        
        if (iswspace(_C) == 0)
            bool rdx_1 = zx.d(_C) - 0xa u<= 3 | _C == 0x2029
            
            if (_C == 0x2028)
                rdx_1 = true
            
            if ((rdx_1 | _C == 0x85) == 0 && 0xd != _C)
                int16_t rdi_1 = *(rsi_1 + *arg2)
                
                if (rdi_1 != 0)
                    int32_t rdx_2 = arg1[1].d
                    int32_t rax_9
                    rax_9.b = rdx_2 s<= 0
                    int32_t r15_1 = rdx_2 - 1
                    
                    if (rdx_2 s<= 0)
                        r15_1 = 0
                    
                    int32_t rax_11 = rax_9 + 1 + rdx_2
                    arg1[1].d = rax_11
                    
                    if (rax_11 s> *(arg1 + 0xc))
                        sub_140594770(arg1)
                    
                    int64_t rcx_4 = sx.q(r15_1)
                    *(*arg1 + (rcx_4 << 1)) = rdi_1
                    *(*arg1 + (rcx_4 << 1) + 2) = 0
        
        rbp_1 += 1
        rsi_1 = &rsi_1[1]

return arg1
