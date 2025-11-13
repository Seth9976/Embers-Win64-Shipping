// 函数: sub_1428359a4
// 地址: 0x1428359a4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20
int32_t rax
int64_t r8
rax, r8 = (*(arg4 + 0x18))(&arg_20, 8)

if (rax != 0xffffffff)
    if (sub_142834384(arg_20) == 1)
        int32_t rax_3
        rax_3, r8 = (*(arg4 + 0x18))(&arg_20, 4, arg3)
        
        if (rax_3 != 0xffffffff)
            if (sub_142834384(arg_20) != 3)
                sub_142833a04(1, "Not a sound font file", r8)
            else if (arg5 == arg1 - 8)
                int32_t rax_6
                int64_t r8_3
                rax_6, r8_3 = sub_142837a78(&arg_20, arg3, arg4)
                
                if (rax_6 != 0)
                    if (sub_142834384(arg_20) != 4)
                        return sub_142835944(3, "Invalid ID found when expecting INFO chunk", r8_3)
                    
                    if (sub_142837524(arg5, arg2, arg3, arg4) != 0)
                        int32_t rax_9
                        rax_9, r8_3 = sub_142837a78(&arg_20, arg3, arg4)
                        
                        if (rax_9 != 0)
                            if (sub_142834384(arg_20) != 5)
                                return sub_142835944(3, 
                                    "Invalid ID found when expecting SAMPLE chunk", r8_3)
                            
                            if (sub_1428379c8(arg5, arg2, arg3, arg4) != 0)
                                int32_t rax_12
                                rax_12, r8_3 = sub_142837a78(&arg_20, arg3, arg4)
                                
                                if (rax_12 != 0)
                                    if (sub_142834384(arg_20) != 6)
                                        return sub_142835944(3, 
                                            "Invalid ID found when expecting HYDRA chunk", r8_3)
                                    
                                    if (sub_14283775c(arg5, arg2, arg3, arg4) != 0
                                            && sub_14283467c(arg2) != 0
                                            && sub_1428345f8(arg2) != 0)
                                        sub_14283470c(arg2)
                                        *(arg2 + 0x28) =
                                            sub_14283418c(*(arg2 + 0x28), sub_142837dd4)
                                        return 1
            else
                sub_142835944(3, "Sound font file size mismatch", r8)
    else
        sub_142833a04(1, "Not a RIFF file", r8)

return 0
