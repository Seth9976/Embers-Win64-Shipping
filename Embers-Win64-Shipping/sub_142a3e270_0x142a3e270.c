// 函数: sub_142a3e270
// 地址: 0x142a3e270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg2 s>= 0)
    *arg3 = 1
    char arg_8
    int32_t rax_2 = (**arg1)(arg1, arg4, 1, &arg_8)
    
    if (rax_2 s< 0)
        return sx.q(rax_2)
    
    if (rax_2 s> 0)
        return -3
    
    char rcx = arg_8
    
    if (rcx != 0)
        rax_2.b = 0x80
        
        if (rcx s>= 0)
            do
                *arg3 += 1
                rax_2.b u>>= 1
            while ((rcx & rax_2.b) == 0)
        
        int64_t rsi_1 = arg2 + 1
        int32_t i = 1
        int64_t result = sx.q(not.d(zx.d(rax_2.b))) & zx.q(rcx)
        
        if (*arg3 s> 1)
            do
                int32_t rax_10 = (**arg1)(arg1, rsi_1, 1, &arg_8)
                
                if (rax_10 s< 0)
                    *arg3 = 1
                    return sx.q(rax_10)
                
                if (rax_10 s> 0)
                    *arg3 = 1
                    return -3
                
                rsi_1 += 1
                i += 1
                result = result << 8 | zx.q(arg_8)
            while (i s< *arg3)
        
        return result

return -2
