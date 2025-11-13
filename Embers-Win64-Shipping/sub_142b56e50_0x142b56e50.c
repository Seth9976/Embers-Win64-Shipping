// 函数: sub_142b56e50
// 地址: 0x142b56e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg5

if (*result s<= 0)
    int32_t rdi_1 = 0
    *arg2 = *(arg1 + 0x48)
    int32_t result_1 = 0
    void* rax_1 = *(arg1 + 0x50)
    
    if (rax_1 != 0 && *arg4 s> 0)
        int32_t rsi_1 = 0
        int32_t r12_1 = *(rax_1 + 8)
        int64_t* r15_1 = arg3
        
        while (rsi_1 s< r12_1)
            *r15_1 = sub_142ae72d0(*(arg1 + 0x50), rsi_1)
            result_1 += 1
            r15_1 = &r15_1[1]
            rsi_1 += 1
            
            if (result_1 s>= *arg4)
                break
    
    result = *(arg1 + 0x58)
    
    if (result != 0 && result_1 s< *arg4)
        int32_t r15_2 = result[2]
        result = sx.q(result_1)
        int32_t** rsi_3 = &arg3[result]
        
        while (rdi_1 s< r15_2)
            result = sub_142ae72d0(*(arg1 + 0x58), rdi_1)
            *rsi_3 = result
            result_1 += 1
            rsi_3 = &rsi_3[1]
            rdi_1 += 1
            
            if (result_1 s>= *arg4)
                break
    
    *arg4 = result_1

return result
