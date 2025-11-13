// 函数: sub_142a3e160
// 地址: 0x142a3e160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg2 s>= 0)
    int64_t rax_1 = *arg1
    char result_2 = 0
    int32_t rax_2 = (*rax_1)(arg1, arg4, 1, &result_2)
    
    if (rax_2 s>= 0)
        if (rax_2 s> 0)
            return -3
        
        char result_1 = result_2
        
        if (result_1 != 0)
            for (int32_t i = 0; i s< 4; i += 1)
                if ((zx.d(result_1) & 0x80 s>> i.b) != 0)
                    int32_t j = 1
                    uint64_t result = zx.q(result_1)
                    
                    if (i + 1 s> 1)
                        do
                            int32_t rax_7 = (**arg1)(arg1, sx.q(j) + arg2, 1, &result_2)
                            
                            if (rax_7 s< 0)
                                return -2
                            
                            if (rax_7 s> 0)
                                return -3
                            
                            j += 1
                            result = result << 8 | zx.q(result_2)
                        while (j s< i + 1)
                    
                    *arg3 = i + 1
                    return result

return -2
