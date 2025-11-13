// 函数: sub_141d1fa50
// 地址: 0x141d1fa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = (*(*arg1 + 0x48))()
int64_t r10 = sx.q(result.d)

if (result.d s> 0)
    result = 0
    
    do
        int64_t rcx = arg1[1]
        int64_t r8_1 = sx.q(*(rcx + (result << 2)))
        
        if (r8_1.d s>= 0)
            *(rcx + (result << 2)) = r8_1.d - *(*arg2 + (r8_1 << 2))
        
        result += 1
    while (result s< r10)

return result
