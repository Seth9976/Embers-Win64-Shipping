// 函数: sub_142acd410
// 地址: 0x142acd410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s<= 0)
    sub_142acd320(arg1, arg2)
    
    if (*arg2 s<= 0)
        int64_t* rdx = *(arg1 + 0xc0)
        int32_t rbx_1 = 0
        
        if (rdx != 0)
            int64_t i_1 = sx.q(*(arg1 + 0xc8))
            
            if (i_1 s> 0)
                int64_t i
                
                do
                    int32_t rax_2 = rbx_1 + 1
                    bool cond:1_1 = *rdx == 0
                    rdx = &rdx[1]
                    
                    if (cond:1_1)
                        rax_2 = rbx_1
                    
                    rbx_1 = rax_2
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        int64_t* rcx_1 = *(arg1 + 0x80)
        
        if (rcx_1 != 0)
            int64_t rdx_1 = *rcx_1
            int32_t rcx_2 = rbx_1 + 2
            rbx_1 += 1
            
            if ((*(rdx_1 + 0x40))(rcx_1, rdx_1) != 0)
                rbx_1 = rcx_2
        
        return zx.q(rbx_1)

return 0
