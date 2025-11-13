// 函数: sub_142a6a0f0
// 地址: 0x142a6a0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s<= 0)
    if (arg2 - 1 u> 6)
        *arg3 = 1
    else
        int32_t rax_2 = *(arg1 + 0x108)
        int32_t rcx = *(arg1 + 0x110)
        int32_t rax_3
        
        if (rax_2 != rcx)
            if (rax_2 s>= rcx)
                bool cond:2_1
                
                if (arg2 s<= rcx)
                label_142a6a12e:
                    cond:2_1 = arg2 == rax_2
                else
                    cond:2_1 = arg2 == rax_2
                    
                    if (arg2 s< rax_2)
                        return 0
                
                if (cond:2_1)
                    rax_3.b = *(arg1 + 0x10c) != 0
                    return zx.q(rax_3 + 1)
                
                if (arg2 != rcx)
                    return 1
                
                if (*(arg1 + 0x114) s>= 0x5265c00)
                    return 1
                
                return 3
            
            if (arg2 s>= rax_2 && arg2 s<= rcx)
                goto label_142a6a12e
        else if (arg2 == rax_2)
            rax_3.b = *(arg1 + 0x10c) != 0
            return zx.q(rax_3 + 1)

return 0
