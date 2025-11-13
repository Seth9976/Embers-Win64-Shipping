// 函数: sub_1417c3460
// 地址: 0x1417c3460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg2
int32_t rbx = *(arg1 + 0x10)
int64_t r10 = sx.q(*(result + 8))

if (r10 s> 0)
    result = nullptr
    
    do
        int64_t rdx = sx.q(*(**arg2 + (result << 3) + 4))
        result += 1
        *(*arg3 + (rdx << 2)) = rbx
    while (result s< r10)

return result
