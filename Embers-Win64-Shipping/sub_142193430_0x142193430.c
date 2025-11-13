// 函数: sub_142193430
// 地址: 0x142193430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*arg2 == 1)
label_142193453:
    int32_t rax_2
    
    if (*(arg1 + 0xf0) == 0)
        rax_2 = 0
    else
        rax_2 = *(arg1 + 0x120) * *(arg1 + 0x114)
    
    int64_t r9_3 = *(arg2 + 0x28) + 0x198 + sx.q(rax_2)
    *(arg2 + 0x28) = r9_3
    int64_t rax_3 = sx.q(*(arg1 + 0x120))
    
    if (*(arg1 + 0x3c) == 0)
        rax_3 *= 5
    
    result = (rax_3 << 4) + r9_3
    *(arg2 + 0x28) = result
else
    result = *(arg1 + 0x18)
    
    if (result != 0 && *(result + 0x3e8) != 0)
        goto label_142193453

return result
