// 函数: sub_142b26ff0
// 地址: 0x142b26ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x18))

if (result.d == *(arg2 + 0x18) && ((result.b & 0xc) == 0 || *(arg1 + 0x1c) == *(arg2 + 0x1c)))
    int64_t r9_1 = sx.q(*(arg1 + 0x48))
    
    if (r9_1.d == *(arg2 + 0x48))
        if (r9_1.d s> 0)
            result = *(arg2 + 0x40)
            int64_t rdx = 0
            int64_t r8_2 = *(arg1 + 0x40) - result
            
            do
                if (*(r8_2 + result) != *result)
                    goto label_142b26ff8
                
                rdx += 1
                result += 4
            while (rdx s< r9_1)
        
        result.b = 1
        return result

label_142b26ff8:
result.b = 0
return result
