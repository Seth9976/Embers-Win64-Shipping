// 函数: sub_142bf1040
// 地址: 0x142bf1040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_142b97060(arg1, 0, arg2)
int32_t result_1 = result

if (result == 0)
    char arg_18
    int512_t zmm0
    result, zmm0 = sub_142b96990(arg1, &arg_18, result + 4, arg3)
    result_1 = result
    
    if (result == 0)
        if (arg_18 != 0x1f || arg4 != 0x8b || arg5 != 8 || (arg6 & 0xe0) != 0)
            return 3
        
        result = sub_142b970b0(arg1, result + 6)
        char rcx_2 = arg6
        result_1 = result
        
        if ((rcx_2 & 4) == 0)
            goto label_142bf10f3
        
        uint32_t rdx_4 = zx.d(sub_142b96f90(arg1, &result_1))
        result = result_1
        
        if (result == 0)
            result = sub_142b970b0(arg1, rdx_4)
            result_1 = result
            
            if (result == 0)
                rcx_2 = arg6
            label_142bf10f3:
                
                if ((rcx_2 & 8) == 0)
                label_142bf113b:
                    
                    if ((rcx_2 & 0x10) == 0)
                    label_142bf117f:
                        
                        if ((rcx_2 & 2) != 0)
                            return sub_142b970b0(arg1, 2)
                    else
                        uint32_t i = zx.d(sub_142b96a20(arg1, &result_1, zmm0))
                        result = result_1
                        
                        if (result == 0)
                            while (i != 0)
                                i = zx.d(sub_142b96a20(arg1, &result_1, zmm0))
                                result = result_1
                                
                                if (result != 0)
                                    return result
                            
                            rcx_2 = arg6
                            goto label_142bf117f
                else
                    uint32_t i_1 = zx.d(sub_142b96a20(arg1, &result_1, zmm0))
                    result = result_1
                    
                    if (result == 0)
                        while (i_1 != 0)
                            i_1 = zx.d(sub_142b96a20(arg1, &result_1, zmm0))
                            result = result_1
                            
                            if (result != 0)
                                return result
                        
                        rcx_2 = arg6
                        goto label_142bf113b

return result
