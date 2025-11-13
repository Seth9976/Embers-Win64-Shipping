// 函数: sub_142413070
// 地址: 0x142413070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*(arg1 + 0xb0))

if (result.d s> 0)
    int64_t r9_1 = 0
    int64_t* rdx_2 = *(arg1 + 0xa8) + 8
    int64_t result_2 = result
    
    do
        result = sx.q(rdx_2[1].d)
        int64_t rcx = 0
        
        if (result.d s> 0)
            int64_t result_1 = result
            result = *rdx_2
            
            do
                if (*result != 0)
                    result.b = 1
                    return result
                
                rcx += 1
                result += 8
            while (rcx s< result_1)
        
        r9_1 += 1
        rdx_2 = &rdx_2[3]
    while (r9_1 s< result_2)

result.b = 0
return result
