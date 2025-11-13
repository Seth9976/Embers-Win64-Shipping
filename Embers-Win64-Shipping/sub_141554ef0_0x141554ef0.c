// 函数: sub_141554ef0
// 地址: 0x141554ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (arg2 == 0)
label_141554f16:
    
    if (arg4 == 0)
    label_141554f41:
        
        if (arg2 == 0)
            if (arg1 != 0xb)
            label_141554f6a:
                
                if (arg4 == 0)
                    if (arg3 != 0xb)
                    label_141554f98:
                        
                        if (arg2 == 0 || arg4 == 0 || (*(arg2 + 0x10) == 0 && *(arg2 + 0x14) == 0
                                && *(arg2 + 0x18) == 0 && *(arg2 + 0x1c) == 0) || (*(arg4 + 0x10) == 0
                                && *(arg4 + 0x14) == 0 && *(arg4 + 0x18) == 0
                                && *(arg4 + 0x1c) == 0))
                            result.b = 1
                            return result
                        
                        int32_t r10_1 = *(arg2 + 0x1c)
                        int32_t r8 = *(arg4 + 0x1c)
                        
                        if (((r10_1 u>> 0x1a).b & (r8 u>> 0x1a).b) == 0
                                && test_bit(*(arg4 + 0x14), r10_1 u>> 0x15 & 0x1f)
                                && test_bit(*(arg2 + 0x14), r8 u>> 0x15 & 0x1f))
                            result.b = 1
                            return result
                else if (arg3 != 0xb || *(arg4 + 0x8c) == 3)
                    if (*(arg4 + 0x8c) != 3)
                        goto label_141554f98
                    
                    if (arg3 == 0xb)
                        goto label_141554f98
                    
                    result.b = 0
                    return result
        else if ((arg1 != 0xb || *(arg2 + 0x8c) == 3) && (*(arg2 + 0x8c) != 3 || arg1 == 0xb))
            goto label_141554f6a
    else if (*(arg4 + 0x88) == 0 && (*(arg4 + 0x10) != 0 || *(arg4 + 0x14) != 0
            || *(arg4 + 0x18) != 0 || *(arg4 + 0x1c) != 0))
        goto label_141554f41
else if (*(arg2 + 0x88) == 0 &&
        (*(arg2 + 0x10) != 0 || *(arg2 + 0x14) != 0 || *(arg2 + 0x18) != 0 || *(arg2 + 0x1c) != 0))
    goto label_141554f16

result.b = 0
return result
