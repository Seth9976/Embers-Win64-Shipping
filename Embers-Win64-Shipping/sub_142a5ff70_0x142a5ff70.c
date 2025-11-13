// 函数: sub_142a5ff70
// 地址: 0x142a5ff70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
char* rbx = arg2
sub_142a60890(arg3)
char** result

if (*arg3 s<= 0)
    sub_142a615c0()
    sub_142a860a0(&data_144015690)
    char** result_2 = sub_142a60920(rbx, arg1, arg3)
    char** result_1 = result_2
    
    if (*arg3 s> 0)
        result_1 = nullptr
    else if (result_2[0xe].d != 0)
        *(result_2 + 0x6c) -= 1
        result_1 = nullptr
    
    char** result_3 = result_1
    
    if (result_1 != 0)
        int64_t rcx_2 = 0
        
        while (true)
            char rax_2 = rbx[rcx_2]
            rcx_2 += 1
            
            if (rax_2 != *(rcx_2 + 0x143613e9b))
                if (result_1[2] == 0 && result_1[0xc].b == 0)
                    int64_t rax_3 = -1
                    
                    do
                        rax_3 += 1
                    while (rbx[rax_3] != 0)
                    
                    if (rax_3 u< 0x9d)
                        char string[0xa0]
                        char* rcx_7 = &string - rbx
                        char i
                        
                        do
                            i = *rbx
                            *(rcx_7 + rbx) = i
                            rbx = &rbx[1]
                        while (i != 0)
                        char* rax_4 = strrchr(&string, 0x5f)
                        int32_t rcx_17
                        
                        if (rax_4 == 0)
                        label_142a60106:
                            
                            for (int64_t i_1 = 0; i_1 != 5; )
                                char rax_6 = (*result_3)[i_1]
                                i_1 += 1
                                
                                if (rax_6 != *(i_1 + 0x143613e9b))
                                    if (result_3[2] != 0)
                                        goto label_142a6024a
                                    
                                    if (*arg3 s> 0)
                                        goto label_142a60253
                                    
                                    int64_t rdx_5 = result_3[1]
                                    int32_t var_e0 = 0
                                    char** result_5 = sub_142a60920("root", rdx_5, &var_e0)
                                    rcx_17 = var_e0
                                    
                                    if (rcx_17 s> 0)
                                        goto label_142a6023e
                                    
                                    result_3[2] = result_5
                                    result_3 = result_5
                                    goto label_142a6024a
                        else
                            *rax_4 = 0
                            int64_t rcx_9 = 0
                            
                            while (true)
                                char rax_5 = string[rcx_9]
                                rcx_9 += 1
                                
                                if (rax_5 != *(rcx_9 + 0x143613e9b))
                                    break
                                
                                if (rcx_9 == 5)
                                    goto label_142a60106
                            
                            if (*arg3 s> 0)
                            label_142a60253:
                                result_1 = nullptr
                                break
                                break
                            
                            while (true)
                                if (result_3[2] != 0)
                                    goto label_142a60106
                                
                                if (result_3[0xc].b != 0)
                                    goto label_142a60106
                                
                                if (sub_142ac3a80(&result_3[5], "%%ParentIsRoot") != 0xffffffff)
                                    goto label_142a60106
                                
                                int32_t rax_8 = sub_142ac3a80(&result_3[5], "%%Parent")
                                
                                if (rax_8 != 0xffffffff)
                                    int32_t var_e8 = 0
                                    void* rax_9 = sub_142ac3aa0(&result_3[5], rax_8, &var_e8)
                                    
                                    if (rax_9 != 0)
                                        int32_t r8_2 = var_e8
                                        
                                        if (r8_2 - 1 u<= 0x9b)
                                            sub_142a8d6e0(rax_9, &string, r8_2 + 1)
                                            int64_t rax_10 = 0
                                            
                                            while (true)
                                                char rcx_15 = string[rax_10]
                                                rax_10 += 1
                                                
                                                if (rcx_15 != *(rax_10 + 0x143613e9b))
                                                    break
                                                
                                                if (rax_10 == 5)
                                                    goto label_142a60106
                                
                                int32_t var_e4 = 0
                                char** result_4 = sub_142a60920(&string, result_3[1], &var_e4)
                                rcx_17 = var_e4
                                
                                if (rcx_17 s> 0)
                                label_142a6023e:
                                    *arg3 = rcx_17
                                    break
                                
                                int32_t var_dc_1 = 0
                                result_3[2] = result_4
                                result_3 = result_4
                                char* rax_11 = strrchr(&string, 0x5f)
                                
                                if (rax_11 == 0)
                                    goto label_142a60106
                                
                                *rax_11 = 0
                    label_142a6024a:
                        
                        if (*arg3 s> 0)
                            goto label_142a60253
            else if (rcx_2 != 5)
                continue
            
            void* i_2 = result_3[2]
            void* rcx_3 = &result_3[2]
            
            for (; i_2 != 0; i_2 = *rcx_3)
                *(i_2 + 0x6c) += 1
                rcx_3 = *rcx_3 + 0x10
            
            break
    
    sub_142a615c0()
    sub_142a860d0(&data_144015690)
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_108)
return result
