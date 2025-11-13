// 函数: sub_141f47530
// 地址: 0x141f47530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*(arg1 + 0x758) = 0

if (*(arg1 + 0x75c) s<= 0xffffffff)
    sub_140638c50(arg1 + 0x750, 0)

*(arg1 + 0x720) = 0

if (arg3 == 0)
    return sub_140780c40(arg1 + 0x750, arg2)

int64_t result = *(arg1 + 0x430)

if (result != 0)
    void* rcx_1 = *(result + 0x60)
    
    if (rcx_1 != 0)
        result = sub_141e433d0(rcx_1, &data_143f398c8)
        
        if (result != 0)
            int64_t var_18 = 0
            int64_t var_10_1 = 0
            operator new[]<8>(result, &var_18)
            result = sub_140780c40(arg1 + 0x750, &var_18)
            
            if (*(arg1 + 0x758) s> 0)
                int64_t rsi_1 = 0
                
                do
                    result = *arg2
                    uint64_t r9_1 = *(arg1 + 0x750)
                    int64_t rdx_2 = result + (sx.q(arg2[1].d) << 3)
                    
                    if (result == rdx_2)
                    label_141f47615:
                        i += 1
                        rsi_1 += 8
                    else
                        while (*result != *(rsi_1 + r9_1))
                            result += 8
                            
                            if (result == rdx_2)
                                goto label_141f47615
                        
                        int32_t rcx_7 = *(arg1 + 0x758)
                        int32_t rax_2 = rcx_7 - i - 1
                        
                        if (rax_2 s>= 1)
                            rax_2 = 1
                        
                        if (rax_2 != 0)
                            memcpy(r9_1 + (sx.q(i) << 3), r9_1 + (sx.q(rcx_7 - rax_2) << 3), 
                                rax_2 << 3)
                            rcx_7 = *(arg1 + 0x758)
                        
                        *(arg1 + 0x758) = rcx_7 - 1
                        result = sub_1405c53d0(arg1 + 0x750)
                while (i s< *(arg1 + 0x758))
            
            int64_t rcx_6 = var_18
            
            if (rcx_6 != 0)
                return sub_140a74f90(rcx_6)

return result
