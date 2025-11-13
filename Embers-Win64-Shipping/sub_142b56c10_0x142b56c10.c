// 函数: sub_142b56c10
// 地址: 0x142b56c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg6 = 0
*arg7 = 0
int32_t* result = arg8

if (*result s<= 0)
    if (*(arg1 + 0x68) != 0)
        void* rcx = *(arg1 + 0x60)
        int64_t* rsi_1
        
        if (rcx != 0)
            double zmm0_1
            int64_t zmm6_1
            zmm0_1, result, zmm6_1 = sub_142b56f40(arg1, sub_142ae72d0(rcx, 0), arg3, arg4, arg5)
            
            if (zmm0_1 f<= zmm6_1)
                void* rcx_2 = *(arg1 + 0x60)
                int32_t rbx_2 = *(rcx_2 + 8) - 1
                double zmm0_2
                int128_t zmm6_2
                zmm0_2, zmm6_2 = sub_142b56f40(arg1, sub_142ae72d0(rcx_2, rbx_2), arg3, arg4, arg5)
                
                if (zmm6_2.q f<= zmm0_2)
                    if (rbx_2 s>= 0)
                        int32_t temp0_1
                        
                        do
                            double zmm0_3
                            int64_t zmm6_3
                            zmm0_3, zmm6_3 = sub_142b56f40(arg1, 
                                sub_142ae72d0(*(arg1 + 0x60), rbx_2), arg3, arg4, arg5)
                            
                            if (zmm6_3 f>= zmm0_3)
                                break
                            
                            temp0_1 = rbx_2
                            rbx_2 -= 1
                        while (temp0_1 - 1 s>= 0)
                else if (*(arg1 + 0x58) != 0)
                    int64_t* rax_2 = sub_142b56660(arg1, zmm6_2, arg3, arg4, arg5)
                    rsi_1 = rax_2
                    
                    if (rax_2 != 0)
                        goto label_142b56d6c
                
                result = sub_142ae72d0(*(arg1 + 0x60), rbx_2)
                rsi_1 = *(result + 0x10)
            else
                rsi_1 = *(arg1 + 0x48)
        else
            rsi_1 = *(arg1 + 0x48)
        
        if (rsi_1 != 0)
        label_142b56d6c:
            *arg6 = sub_1405f8de0(rsi_1)
            result = sub_141b60020(rsi_1)
            *arg7 = result.d
    else
        *result = 0x1b

return result
