// 函数: sub_142a57990
// 地址: 0x142a57990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_788
uint64_t result = __security_cookie ^ &var_788
uint64_t result_1 = result

if (*arg3 s<= 0)
    char* rbx_1 = *(arg1 + 0x28)
    result = sub_141a50850(arg1) - rbx_1
    uint32_t i
    uint32_t rdx
    
    do
        rdx = zx.d(*rbx_1)
        i = zx.d(rbx_1[result])
        
        if (rdx != i)
            break
        
        rbx_1 = &rbx_1[1]
    while (i != 0)
    
    if (rdx - i != 0)
        int32_t* var_768_1 = arg3
        void var_448
        result = sub_142a46470(arg1, "colHiraganaQuaternary", &var_448, 0x400)
        
        if (*arg3 s> 0)
            *arg3 = 1
        else if (result.d != 0)
            *arg3 = 0x10
        else
            int32_t* var_768_2 = arg3
            result = sub_142a46470(arg1, "variableTop", &var_448, 0x400)
            int32_t rcx_2 = *arg3
            
            if (rcx_2 s> 0)
                *arg3 = 1
            else if (result.d == 0)
                int32_t r15_1 = 0
                
                if (rcx_2 == 0xffffff84)
                    *arg3 = 0
                
                void* const r14_1 = &data_14363c708
                char const (** const rbx_2)[0x8] = &data_14363c770
                
                while (true)
                    result = sub_142a46470(arg1, *(r14_1 - 8), &var_448, 0x400)
                    int32_t rcx_4 = *arg3
                    
                    if (rcx_4 s<= 0 && rcx_4 != 0xffffff84)
                        if (result.d != 0)
                            int64_t rdi_1 = 0
                            
                            while (true)
                                if (rbx_2 == "colStrength")
                                    goto label_142a57cb2
                                
                                result = sub_142a862b0(&var_448, *rbx_2, result.d)
                                
                                if (result.d == 0)
                                    rbx_2 = &data_14363c770
                                    (*(*arg2 + 0xb0))(arg2, zx.q(*r14_1), 
                                        zx.q(*((rdi_1 << 4) + &data_14363c778)), arg3, arg3)
                                    break
                                
                                rdi_1 += 1
                                rbx_2 = &rbx_2[2]
                        
                        r14_1 += 0x10
                        
                        if (r14_1 s< &data_14363c778)
                            continue
                        else
                            result = sub_142a46470(arg1, "colReorder", &var_448, 0x400)
                            int32_t rcx_8 = *arg3
                            
                            if (rcx_8 s<= 0 && rcx_8 != 0xffffff84)
                                if (result.d != 0)
                                    int32_t r14_2 = 0
                                    void* rcx_9 = &var_448
                                    int64_t rbp_1 = 0
                                    
                                    while (true)
                                        char i_1 = *rcx_9
                                        void* rbx_3 = rcx_9
                                        
                                        if (i_1 != 0)
                                            while (i_1 != 0x2d)
                                                i_1 = *(rbx_3 + 1)
                                                rbx_3 += 1
                                                
                                                if (i_1 == 0)
                                                    break
                                        
                                        *rbx_3 = 0
                                        
                                        if (rbx_3 - rcx_9 != 4)
                                            result = sub_142a575b0(rcx_9)
                                        else
                                            result = j_sub_142a94e30(0x100a, rcx_9)
                                        
                                        if (result.d s< 0)
                                            goto label_142a57cb2
                                        
                                        int32_t var_758[0xc4]
                                        var_758[rbp_1] = result.d
                                        r14_2 += 1
                                        rbp_1 += 1
                                        
                                        if (i_1 == 0)
                                            (*(*arg2 + 0xa0))(arg2, &var_758, zx.q(r14_2), arg3, 
                                                arg3)
                                            break
                                        
                                        rcx_9 = rbx_3 + 1
                                        
                                        if (rbp_1 == 0xc2)
                                            goto label_142a57cb2
                                
                                int32_t* var_768_5 = arg3
                                result = sub_142a46470(arg1, "kv", &var_448, 0x400)
                                int32_t rcx_12 = *arg3
                                
                                if (rcx_12 s<= 0 && rcx_12 != 0xffffff84)
                                    if (result.d == 0)
                                        goto label_142a57cad
                                    
                                    char** rbx_4 = &data_143cc83e0
                                    
                                    while (true)
                                        result = sub_142a862b0(&var_448, *rbx_4, result.d)
                                        
                                        if (result.d == 0)
                                            break
                                        
                                        r15_1 += 1
                                        rbx_4 = &rbx_4[1]
                                        
                                        if (rbx_4 s>= &data_143cc8408)
                                            goto label_142a57cb2
                                    
                                    if (r15_1 + 0x1000 s>= 0)
                                        result = (*(*arg2 + 0xc0))(arg2, r15_1 + 0x1000, arg3)
                                    label_142a57cad:
                                        
                                        if (*arg3 s<= 0)
                                            break
                    
                label_142a57cb2:
                    *arg3 = 1
                    break
            else
                *arg3 = 0x10

__security_check_cookie(result_1 ^ &var_788)
return result
