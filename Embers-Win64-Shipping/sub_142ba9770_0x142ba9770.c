// 函数: sub_142ba9770
// 地址: 0x142ba9770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x214)
uint64_t result

for (int32_t i = 1; i != 0; )
    *(arg1 + 0x210) += *(arg1 + 0x21c)
    result = sx.q(*(arg1 + 0x210))
    
    if (result.d s>= r9)
        *(arg1 + 0x18) = 0x83
        return result
    
    int64_t r11_1 = *(arg1 + 0x208)
    uint64_t rdx_1 = zx.q(*(result + r11_1))
    *(arg1 + 0x218) = rdx_1.b
    int32_t r10_1 = sx.d(*(rdx_1 + &data_143684290))
    *(arg1 + 0x21c) = r10_1
    
    if (r10_1 s< 0)
        result = zx.q(*(arg1 + 0x210) + 1)
        
        if (result.d s>= r9)
            *(arg1 + 0x18) = 0x83
            return result
        
        *(arg1 + 0x21c) = 2 - zx.d(*(sx.q(result.d) + r11_1)) * r10_1
    
    result = zx.q(*(arg1 + 0x210) + *(arg1 + 0x21c))
    
    if (result.d s> r9)
        *(arg1 + 0x18) = 0x83
        return result
    
    uint32_t rdx_4 = zx.d(*(arg1 + 0x218))
    
    if (rdx_4 == 0x58)
        i += 1
    else if (rdx_4 == 0x59)
        i -= 1

return result
