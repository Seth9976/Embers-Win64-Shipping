// 函数: sub_142217fe0
// 地址: 0x142217fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*arg2 == 1)
label_142217ffb:
    int32_t rax_2 = 0
    int32_t r9_2
    
    if (*(arg1 + 0xf0) == 0)
        r9_2 = 0
    else
        r9_2 = *(arg1 + 0x120) * *(arg1 + 0x114)
    
    if (*(arg1 + 0xf8) != 0)
        rax_2 = *(arg1 + 0x120) * 2
    
    *(arg2 + 0x28) += sx.q(rax_2) + sx.q(r9_2) + 0x270
    int64_t rax_5 = sx.q(*(arg1 + 0x120))
    
    if (*(arg1 + 0x3c) == 0)
        rax_5 *= 5
    
    result = (rax_5 << 4) + *(arg2 + 0x28)
    *(arg2 + 0x28) = result
else
    result = *(arg1 + 0x18)
    
    if (result != 0 && *(result + 0x3e8) != 0)
        goto label_142217ffb

return result
