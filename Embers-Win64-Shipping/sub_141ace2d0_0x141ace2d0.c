// 函数: sub_141ace2d0
// 地址: 0x141ace2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x430)
uint64_t result = sub_141f3b9f0(arg1)
uint64_t result_1 = result

if (result != 0 && sub_141f3ba00(arg1).d == 0)
    int64_t rsi_1 = *(result_1 + 0x10)
    void* const rdx_1
    
    if (*(arg1 + 0x648) == 0)
        rdx_1 = nullptr
    else
        result = sub_14245f6d0()
        
        if (result == 0)
            rdx_1 = nullptr
        else
            rdx_1 = *(arg1 + 0x648)
            int64_t r8_1 = result + 0x30
            result = sx.q(*(result + 0x38))
            
            if (result.d s> *(rdx_1 + 0x38))
                rdx_1 = nullptr
            else if (*(*(rdx_1 + 0x30) + (result << 3)) != r8_1)
                rdx_1 = nullptr
    
    if (rsi_1 == rdx_1)
        result = *(result_1 + 0x28)
        
        if (result != 0 && *(rbp + 0x60) == result)
            result.b = 0
            return result

result.b = 1
return result
