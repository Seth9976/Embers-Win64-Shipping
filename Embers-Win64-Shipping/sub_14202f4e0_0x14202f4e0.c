// 函数: sub_14202f4e0
// 地址: 0x14202f4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t** var_38
sub_1423ddac0(*(arg1 + 0x20), &var_38, arg4)
int64_t** r9 = var_38
int32_t i_1
int32_t i = i_1
int64_t* result

while (i s>= 0)
    if (i s< r9[1].d && (*r9)[sx.q(i)] == 0)
        i += 1
        i_1 = i
        continue
    
    while (i s>= 0)
        if (i s>= r9[1].d)
            break
        
        result = *((*r9)[sx.q(i)] + 0x30)
        
        if (result != 0 && result[0x67] != 0)
            int16_t* var_28
            sub_140b294d0(&var_28, &arg_10, 0)
            int32_t var_20
            
            if (var_20 s<= 1)
                sub_140b1f700(arg3, u"Current view mode: %s", sub_142317220(*(arg1 + 0xa8)))
                int32_t k = 0
                var_38 = nullptr
                i_1.q = 0
                
                do
                    if (k != 0)
                        wchar16 const* const rdx_6
                        int32_t r8_4
                        
                        if (k != k u/ 5 * 5)
                            r8_4 = 2
                            rdx_6 = &data_142d8adc4
                        else
                            r8_4 = 6
                            rdx_6 = u"\n     "
                        
                        sub_140a20ba0(&var_38, rdx_6, r8_4)
                    
                    int64_t rax_6 = sub_142317220(k)
                    int64_t r8_5 = -1
                    
                    do
                        r8_5 += 1
                    while (*(rax_6 + (r8_5 << 1)) != 0)
                    
                    sub_140a20ba0(&var_38, rax_6, r8_5.d)
                    k += 1
                while (k u< 0x1d)
                
                int64_t** r8_6 = &data_142d40450
                
                if (i_1 != 0)
                    r8_6 = var_38
                
                sub_140b1f700(arg3, u"Available view modes: %s", r8_6)
                int64_t** rcx_18 = var_38
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
            else
                int32_t k_1 = 0
                int16_t* const rdi_1 = &data_142d40450
                
                do
                    int16_t* rax_1 = sub_142317220(k_1)
                    int16_t* rcx_7 = &data_142d40450
                    
                    if (var_20 != 0)
                        rcx_7 = var_28
                    
                    if (sub_140a54510(rcx_7, rax_1) == 0)
                        *(arg1 + 0xa8) = k_1
                        sub_140b1f700(arg3, u"Set new viewmode: %s", sub_142317220(k_1))
                        break
                    
                    k_1 += 1
                while (k_1 u< 0x1d)
                
                if (k_1 == 0x1d)
                    if (var_20 != 0)
                        rdi_1 = var_28
                    
                    sub_140b1f700(arg3, u"Error: view mode not recognized: %s", rdi_1)
            
            int32_t rax_7 = *(arg1 + 0xa8)
            
            if (rax_7 == 0xe)
                sub_140b1f640(arg3, u"This view mode is currently not supported in game.")
                *(arg1 + 0xa8) = 3
            else if (rax_7 != 3 && rax_7 != 8 && sub_1419c6730() == 0)
                sub_140b1f640(arg3, 
                    Debug viewmodes not allowed on consoles by default.  See AllowDebugViewmodes().")
                *(arg1 + 0xa8) = 3
            
            if (data_143f0f21f == 0)
                int32_t rax_9 = *(arg1 + 0xa8)
                
                if (rax_9 == 0x1b)
                    sub_140b1f640(arg3, 
                        Path Tracing view mode requires ray tracing support. It is not supported on this "
                    "system.")
                    *(arg1 + 0xa8) = 3
                else if (rax_9 == 0x1c)
                    sub_140b1f640(arg3, 
                        Ray tracing view mode requires ray tracing support. It is not supported on this "
                    "system.")
                    *(arg1 + 0xa8) = 3
            
            sub_14230a660(*(arg1 + 0xa8), 1, arg1 + 0xac)
            int16_t* rcx_22 = var_28
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            break
        
        do
            i += 1
            i_1 = i
            
            if (i s< 0)
                goto label_14202f782
            
            if (i s>= r9[1].d)
                break
        while ((*r9)[sx.q(i)] == 0)
    
    break

label_14202f782:
result.b = 1
return result
