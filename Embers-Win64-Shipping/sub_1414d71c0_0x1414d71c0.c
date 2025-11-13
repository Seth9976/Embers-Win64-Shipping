// 函数: sub_1414d71c0
// 地址: 0x1414d71c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (data_1439c8830 != 0)
    result.b = *(arg2 + 0x32) - 1
    
    if (result.b u<= 1)
        result = 1 << arg1
        int64_t rcx_1 = result & data_143f13cb8
        
        if ((data_143f13cc8 & result) == 0 || (*(arg2 + 0x37) & 8) == 0)
            result.b = 0
        else
            result.b = 1
        
        if (rcx_1 == 0 || result.b != 0)
            result.b = 1
            return result

result.b = 0
return result
