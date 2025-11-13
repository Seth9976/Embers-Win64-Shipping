// 函数: sub_1423c7420
// 地址: 0x1423c7420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18
int64_t result = sub_140d3a3a0(&var_18, arg2)
int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t rsi_1 = 0
    
    do
        int32_t* rbp_2 = *(arg1 + 0x10) + rsi_1
        result = sub_140664af0(rbp_2, &var_18)
        
        if (result.b != 0)
            result = arg3
            
            if (*(rbp_2 + 8) == result)
                int32_t rdx_1 = *(arg1 + 0x18)
                int32_t rcx_4 = rdx_1 - i - 1
                
                if (rcx_4 s>= 1)
                    rcx_4 = 1
                
                if (rcx_4 != 0)
                    memcpy((sx.q(i) << 4) + *(arg1 + 0x10), 
                        (sx.q(rdx_1 - rcx_4) << 4) + *(arg1 + 0x10), rcx_4 << 4)
                    rdx_1 = *(arg1 + 0x18)
                
                *(arg1 + 0x18) = rdx_1 - 1
                result = sub_1405a5010(arg1 + 0x10)
                i -= 1
                rsi_1 -= 0x10
        
        i += 1
        rsi_1 += 0x10
    while (i s< *(arg1 + 0x18))

return result
