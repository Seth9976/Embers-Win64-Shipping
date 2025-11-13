// 函数: sub_142837524
// 地址: 0x142837524
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = arg3
int32_t rbx = arg1
bool cond:1_1

if (arg1 s<= 0)
    cond:1_1 = rbx s>= 0
else
    while (true)
        int32_t var_38
        int32_t rax_1
        rax_1, arg3 = (*(arg4 + 0x18))(&var_38, 8, r12)
        
        if (rax_1 != 0xffffffff)
            char rax_2 = sub_142834384(var_38)
            int32_t var_34
            
            if (rax_2 == 7)
                if (var_34 != 4)
                    return sub_142835944(3, "Sound font version info chunk has invalid size", arg3)
                
                int16_t arg_8
                
                if ((*(arg4 + 0x18))(&arg_8, 2, r12) != 0xffffffff)
                    *arg2 = arg_8
                    int16_t var_48
                    int32_t rax_5
                    rax_5, arg3 = (*(arg4 + 0x18))(&var_48, 2, r12)
                    
                    if (rax_5 != 0xffffffff)
                        arg2[1] = var_48
                        int16_t temp0_1 = *arg2
                        
                        if (temp0_1 u< 2)
                            sub_142833a04(1, 
                                "Sound font version is %d.%d which is not supported, convert to version "
                            "2.0x", 
                                zx.q(*arg2))
                        else
                            if (temp0_1 u<= 2)
                                goto label_1428376b3
                            
                            sub_142833a04(2, 
                                "Sound font version is %d.%d which is newer than what this version of "
                            "FLUID Synth was designed for (v2.0x)", 
                                zx.q(*arg2))
            else if (rax_2 != 0xb)
                if (rax_2 == 0)
                    return sub_142835944(3, "Invalid chunk id in INFO chunk", arg3)
                
                if (rax_2 == 0x10)
                    if (var_34 u> 0x10000 || (var_34.b & 1) != 0)
                        return sub_142835944(3, 
                            "INFO sub chunk %.4s has invalid chunk size of %d bytes", &var_38)
                else if (var_34 u> 0x100 || var_34 u> 0x10000 || (var_34.b & 1) != 0)
                    return sub_142835944(3, 
                        "INFO sub chunk %.4s has invalid chunk size of %d bytes", &var_38)
                
                char* rax_11
                int64_t r8_5
                rax_11, r8_5 = malloc(zx.q(var_34 + 1))
                
                if (rax_11 == 0)
                    sub_142833a04(1, "Out of memory", r8_5)
                else
                    *(arg2 + 0x20) = sub_142834060(*(arg2 + 0x20), rax_11)
                    *rax_11 = rax_2
                    int32_t rax_13
                    rax_13, arg3 = (*(arg4 + 0x18))(&rax_11[1], zx.q(var_34), r12)
                    
                    if (rax_13 != 0xffffffff)
                        *(zx.q(var_34) + rax_11) = 0
                        goto label_1428376b3
            else
                if (var_34 != 4)
                    return sub_142835944(3, "ROM version info chunk has invalid size", arg3)
                
                int16_t var_44
                
                if ((*(arg4 + 0x18))(&var_44, 2, r12) != 0xffffffff)
                    arg2[2] = var_44
                    int16_t var_40
                    int32_t rax_9
                    rax_9, arg3 = (*(arg4 + 0x18))(&var_40, 2, r12)
                    
                    if (rax_9 != 0xffffffff)
                        arg2[3] = var_40
                    label_1428376b3:
                        rbx = rbx - 8 - var_34
                        cond:1_1 = rbx s>= 0
                        
                        if (rbx s<= 0)
                            break
                        
                        continue
        
        return 0

if (cond:1_1)
    return 1

return sub_142835944(3, "INFO chunk size mismatch", arg3)
