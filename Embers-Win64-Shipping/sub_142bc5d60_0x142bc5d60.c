// 函数: sub_142bc5d60
// 地址: 0x142bc5d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *arg2
int32_t result_5 = *(arg1 + 0x18)
int32_t result_1 = 0

while (true)
    r10 += 1
    int32_t result_2 = 0
    int32_t result_4 = result_5
    
    while (true)
        if (result_2 u>= result_4)
            uint64_t result
            
            if (result_2 u>= result_5)
                result = zx.q(result_1)
            else
                if (result_2 != 0)
                    *arg2 = *(*(arg1 + 0x20) + zx.q(result_2) * 0x10)
                    return zx.q(result_2 + 1)
                
                result = zx.q(result_2)
            
            *arg2 = 0
            return result
        
        int32_t result_3 = ((result_4 - result_2) u>> 1) + result_2
        int32_t rdx = *((zx.q(result_3) << 4) + *(arg1 + 0x20))
        
        if (rdx == r10)
            result_1 = result_3
            
            if (result_3 == 0)
                break
            
            *arg2 = r10
            return zx.q(result_3 + 1)
        
        if (rdx u>= r10)
            result_4 = result_3
        else
            result_2 = result_3 + 1
