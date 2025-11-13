// 函数: sub_142b593a0
// 地址: 0x142b593a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_142a7dd00(sx.q(*(arg1 + 0x1f8)) << 3)
*(arg1 + 0x1e8) = result

if (result != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x1f8) s> 0)
        void** rsi_1 = nullptr
        
        do
            *(rsi_1 + *(arg1 + 0x1e8)) = sub_142a98f00(sx.q(*(arg1 + 0x1fc)))
            result = *(arg1 + 0x1e8)
            
            if (*(rsi_1 + result) == 0)
                int64_t i_1 = sx.q(i)
                
                if (i s>= 0)
                    int64_t i_2
                    
                    do
                        int64_t* rcx_6 = *(*(arg1 + 0x1e8) + (i_1 << 3))
                        
                        if (rcx_6 != 0)
                            if (rcx_6[-1] == 0)
                                j_sub_140a74f90(&rcx_6[-1])
                            else
                                (**rcx_6)(rcx_6, 3)
                        
                        i_2 = i_1
                        i_1 -= 1
                    while (i_2 - 1 s>= 0)
                
                result = sub_142a7dcd0(*(arg1 + 0x1e8))
                *(arg1 + 0x1e8) = 0
                break
            
            int32_t j = 0
            
            if (*(arg1 + 0x1fc) s> 0)
                do
                    int64_t r8_2 = sx.q(j) << 6
                    result =
                        sub_142a49d00(*(rsi_1 + *(arg1 + 0x1e8)) + r8_2, *(rsi_1 + arg2) + r8_2)
                    j += 1
                while (j s< *(arg1 + 0x1fc))
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< *(arg1 + 0x1f8))

return result
