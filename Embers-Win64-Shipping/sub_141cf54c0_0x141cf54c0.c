// 函数: sub_141cf54c0
// 地址: 0x141cf54c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1 == 0)
labelid_1:
    result.b = 1
else
    int32_t* r13_1 = data_143a21128 + (sx.q(not.d(data_143a2114c)) & sx.q(arg1)) * 0xc
    uint64_t r9_5 = (arg6 + 1 + arg5) u>> 1
    int64_t var_38
    int32_t i_1
    
    if (arg3 << arg7.b s< 0)
    label_141cf5667:
        int64_t rbp_2 = *arg9
        uint64_t rdi_2
        
        if (rbp_2 == 0)
            rdi_2 = r9_5
        else
            rdi_2 = arg9[1]
        
        int64_t* rbx_6
        
        for (int32_t i = r13_1[1]; i != 0; i = rbx_6[4].d)
            rbx_6 = (sx.q(not.d(*(arg2 + 0x24))) & sx.q(i)) * 0x30 + *arg2
            int64_t r8_5 = *rbx_6 & 0xffffffffffff
            
            if (r8_5 - 1 + rbx_6[1] u>= arg3 && arg4 u>= r8_5)
                i_1 = i
                
                if (rbp_2(rdi_2, &i_1).b == 0)
                    goto label_141cf580e_2
        
        if (arg4 << arg7.b s>= 0)
        label_141cf5792:
            result.b = 1
        else
            int64_t rdi_3 = *arg9
            
            if (arg7 != arg8)
                var_38 = rdi_3
                
                if (rdi_3 != 0)
                    int64_t var_30_2 = arg9[1]
                
                uint64_t r8_8 = r9_5
                
                if (arg3 u>= r9_5)
                    r8_8 = arg3
                
                if (sub_141cf54c0(zx.q(r13_1[2]), arg2, r8_8, arg4, r9_5, arg6, arg7 + 1, arg8, 
                    &var_38).b != 0)
                label_141cf5792_1:
                    result.b = 1
                else
                labelid_6:
                    result.b = 0
            else
                uint64_t rbp_3
                
                if (rdi_3 == 0)
                    rbp_3 = r9_5
                else
                    rbp_3 = arg9[1]
                
                int32_t i_3 = r13_1[2]
                
                if (i_3 == 0)
                label_141cf5792_2:
                    result.b = 1
                else
                    while (true)
                        int64_t* rbx_9 = (sx.q(not.d(*(arg2 + 0x24))) & sx.q(i_3)) * 0x30 + *arg2
                        int64_t r8_7 = *rbx_9 & 0xffffffffffff
                        
                        if (r8_7 - 1 + rbx_9[1] u>= arg3 && arg4 u>= r8_7)
                            i_1 = i_3
                            
                            if (rdi_3(rbp_3, &i_1).b == 0)
                                break
                        
                        i_3 = rbx_9[4].d
                        
                        if (i_3 == 0)
                            goto label_141cf5792_2
                    
                label_141cf580e:
                    result.b = 0
    else
        int64_t rdi_1 = *arg9
        
        if (arg7 != arg8)
            var_38 = rdi_1
            
            if (rdi_1 != 0)
                int64_t var_30_1 = arg9[1]
            
            int64_t r9_6 = r9_5 - 1
            
            if (arg4 u<= r9_5 - 1)
                r9_6 = arg4
            
            if (sub_141cf54c0(zx.q(*r13_1), arg2, arg3, r9_6, arg5, r9_5 - 1, arg7 + 1, arg8, 
                    &var_38).b != 0)
                goto label_141cf5667
            
        label_141cf580e_1:
            result.b = 0
        else
            uint64_t rbp_1
            
            if (rdi_1 == 0)
                rbp_1 = r9_5
            else
                rbp_1 = arg9[1]
            
            int32_t i_2 = *r13_1
            
            if (i_2 == 0)
                goto label_141cf5667
            
            while (true)
                int64_t* rbx_3 = (sx.q(not.d(*(arg2 + 0x24))) & sx.q(i_2)) * 0x30 + *arg2
                int64_t r8_2 = *rbx_3 & 0xffffffffffff
                
                if (r8_2 - 1 + rbx_3[1] u>= arg3 && arg4 u>= r8_2)
                    i_1 = i_2
                    
                    if (rdi_1(rbp_1, &i_1).b == 0)
                        break
                
                i_2 = rbx_3[4].d
                
                if (i_2 == 0)
                    goto label_141cf5667
            
        label_141cf580e_2:
            result.b = 0

return result
