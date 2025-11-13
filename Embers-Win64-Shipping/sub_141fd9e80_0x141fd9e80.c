// 函数: sub_141fd9e80
// 地址: 0x141fd9e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x19))
char r10 = *(arg1 + 0x1b)
uint64_t result_1 = *(arg1 + 8)

if (result.b != 0)
    uint64_t i_1 = zx.q(result.b)
    int64_t rbx_1
    rbx_1.b = r10 != 0
    uint64_t r11_2 = zx.q(*(arg1 + 0x1a)) << 2
    uint64_t i
    
    do
        result = result_1
        int64_t j_1 = rbx_1 + 1
        int64_t j
        
        do
            *result = *result + *arg2
            *(result + 4) = arg2[1] f+ *(result + 4)
            *(result + 8) = arg2[2] f+ *(result + 8)
            result += zx.q(r10) << 2
            j = j_1
            j_1 -= 1
        while (j != 1)
        result_1 += r11_2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
