// 函数: sub_142b94210
// 地址: 0x142b94210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int32_t r8_1 = sx.d(arg1[1])
    int64_t rdx_1 = sx.q(*arg1)
    
    if (r8_1 != 0)
        if (r8_1 s> 0 && rdx_1.d s> 0)
            int32_t rcx = -1
            int32_t r9_1 = -1
            
            if (rdx_1.d s> 0)
                int16_t* rax_1 = *(arg1 + 0x18)
                int64_t rdx_2 = 0
                
                do
                    rcx = sx.d(*rax_1)
                    
                    if (rcx s<= r9_1)
                        return 6
                    
                    if (rcx s>= r8_1)
                        return 6
                    
                    rdx_2 += 1
                    rax_1 = &rax_1[1]
                    r9_1 = rcx
                while (rdx_2 s< rdx_1)
            
            if (rcx == r8_1 - 1)
                return 0
    else if (rdx_1.d == 0)
        return 0

return 6
