// 函数: sub_142bacca0
// 地址: 0x142bacca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x210) += *(arg1 + 0x21c)
int64_t result = sx.q(*(arg1 + 0x210))
int32_t r9 = *(arg1 + 0x214)

if (result.d s< r9)
    int64_t rcx = *(arg1 + 0x208)
    uint32_t rdx_1 = zx.d(*(result + rcx))
    *(arg1 + 0x218) = rdx_1.b
    int32_t rdx_2 = sx.d(*(zx.q(rdx_1) + &data_143684290))
    *(arg1 + 0x21c) = rdx_2
    
    if (rdx_2 s>= 0)
        goto label_142bacd1f
    
    result = zx.q(*(arg1 + 0x210) + 1)
    
    if (result.d s< r9)
        *(arg1 + 0x21c) = 2 - zx.d(*(sx.q(result.d) + rcx)) * rdx_2
    label_142bacd1f:
        
        if (*(arg1 + 0x210) + *(arg1 + 0x21c) s<= r9)
            result.b = 0
            return result

*(arg1 + 0x18) = 0x83
result.b = 1
return result
