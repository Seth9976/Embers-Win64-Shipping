// 函数: sub_142b53270
// 地址: 0x142b53270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
void* result

if (*arg4 s<= 0)
    result = *arg3
    
    if (result != 0)
        int32_t r13_1 = 1
        
        if (*(arg3 + 0xe) != 0)
            r13_1 = *(result + 8)
        
        int32_t r14_1 = 0
        
        if (r13_1 s> 0)
            do
                void* rbp_1
                
                if (*(arg3 + 0xe) != 0)
                    rbp_1 = sub_142ae72d0(*arg3, r14_1)
                else
                    rbp_1 = *arg3
                
                if (rbp_1 == 0)
                    break
                
                if ((*rbp_1 & *(arg1 + 8)) != 0)
                    if (*(arg1 + 0x10) == 0)
                        result = j_sub_142a7dd00(0x28)
                        void* result_1 = result
                        
                        if (result != 0)
                            result = sub_142ae6e40(result, sub_142a7dcd0, 0, arg4)
                        
                        *(arg1 + 0x10) = result
                    
                    if (*(arg1 + 0x10) == 0 && result == 0)
                        *arg4 = 7
                    else if (*arg4 s<= 0)
                        result = sub_142a7dd00(0x10)
                        
                        if (result != 0)
                            *result = rbp_1
                            *(result + 8) = arg2
                            *(result + 0xc) = 0
                            sub_142ae7110(*(arg1 + 0x10), result, arg4)
                            
                            if (*arg4 s> 0)
                                sub_142a7dcd0(result)
                            else if (arg2 s> *(arg1 + 0x18))
                                *(arg1 + 0x18) = arg2
                        else
                            *arg4 = 7
                
                r14_1 += 1
            while (r14_1 s< r13_1)
    
    result.b = 1
else
    result.b = 0

return result
