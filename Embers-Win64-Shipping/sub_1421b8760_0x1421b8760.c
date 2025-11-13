// 函数: sub_1421b8760
// 地址: 0x1421b8760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (*arg2 == 1)
label_1421b877b:
    int32_t rax_2 = 0
    int32_t result_1
    
    if (*(arg1 + 0xf0) == 0)
        result_1 = 0
    else
        result_1 = *(arg1 + 0x120) * *(arg1 + 0x114)
    
    if (*(arg1 + 0xf8) != 0)
        rax_2 = *(arg1 + 0x120) * 2
    
    result = sx.q(result_1)
    *(arg2 + 0x28) += sx.q(rax_2) + 0x180 + result
else
    result = *(arg1 + 0x18)
    
    if (result != 0 && *(result + 0x3e8) != 0)
        goto label_1421b877b

return result
