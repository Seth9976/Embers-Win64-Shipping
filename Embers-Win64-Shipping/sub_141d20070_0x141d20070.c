// 函数: sub_141d20070
// 地址: 0x141d20070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x48))()
int64_t r9 = sx.q(result.d)

if (result.d s> 0)
    result = 0
    
    do
        int64_t rcx = arg1[1]
        int64_t rcx_1 = sx.q(*(rcx + (result << 2)))
        
        if (rcx_1.d s>= 0)
            *(rcx + (result << 2)) = *(*arg2 + (rcx_1 << 2))
        
        result += 1
    while (result s< r9)

return result
