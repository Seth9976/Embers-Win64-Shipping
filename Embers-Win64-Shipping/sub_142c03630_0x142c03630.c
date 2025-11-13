// 函数: sub_142c03630
// 地址: 0x142c03630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg1 == 0x12)
    arg3[6] = sub_142c03360(arg2 + 0x20)
    arg3[7] = sub_142c03360(arg2 + 0x20)
label_142c036a3:
    int32_t result_1 = *(arg2 + 0x24)
    result = result_1
    
    if (result_1 u< result_1)
        *(arg2 + 0x20) = 1
    else
        result -= result_1
        *(arg2 + 0x24) = result
    
    goto label_142c036b7

if (arg1 == 0x105 || arg1 == 0x107)
    *(arg2 + 0x24)
    result = 0
    *(arg2 + 0x24) = result
label_142c036b7:
    
    if (*(arg2 + 0x38) == 0 && *(arg2 + 0x1c) == 0 && *(arg2 + 0x20) == 0 && *(arg2 + 0x2c) s>= 0)
        return sub_142bfcec0(arg3, arg1, arg2)
else
    if (arg1 == 0x126)
        arg3[9] = sub_142c03360(arg2 + 0x20)
        goto label_142c036a3
    
    result = sub_142c04010(arg1, arg2)
    
    if (*(arg2 + 0x24) == 0)
        goto label_142c036b7

return result
