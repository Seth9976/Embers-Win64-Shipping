// 函数: sub_142c87360
// 地址: 0x142c87360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
void* rdx = *arg1

if (rdx != 0)
    char* rax_1 = *(rdx + 0x4e38)
    
    if (rax_1 != 0 && *rax_1 == 0x2f && j_sub_142c704d0("LDAP", *(rdx + 0x880), 4) != 0)
        arg2[4].d = 0
        arg2[1].d = *(arg1 + 0x17c)
        *arg2 = arg1[0x1a]
        char* string = data_143ccb8b0(*(*arg1 + 0x4e38) + 1)
        
        if (string == 0)
            return 0x5a
        
        char* string_4 = strchr(string, 0x3f)
        char* string_1 = string_4
        
        if (string_4 != 0)
            *string_4 = 0
            string_1 = &string_1[1]
        
        int64_t arg_8
        int32_t rax_7
        int64_t rax_8
        
        if (*string != 0)
            rax_7 = sub_142c51e30(*arg1, string, 0, &arg_8, nullptr, 0)
            
            if (rax_7 == 0)
                rax_8 = arg_8
                arg2[2] = rax_8
        
        if (*string != 0 && (rax_7 != 0 || rax_8 == 0))
            rbx = 0x5a
        else if (string_1 != 0)
            char* string_5 = strchr(string_1, 0x3f)
            char* string_3 = string_5
            
            if (string_5 != 0)
                *string_5 = 0
                string_3 = &string_3[1]
            
            if (*string_1 == 0)
            label_142c875b3:
                
                if (string_3 != 0)
                    char* string_6 = strchr(string_3, 0x3f)
                    char* string_2 = string_6
                    
                    if (string_6 != 0)
                        *string_6 = 0
                        string_2 = &string_2[1]
                    
                    int32_t rax_15
                    
                    if (*string_3 != 0)
                        rax_15 = sub_142c876b0(string_3)
                        arg2[4].d = rax_15
                    
                    if (*string_3 != 0 && rax_15 == 0xffffffff)
                        rbx = rax_15 + 0x16
                    else if (string_2 != 0)
                        char* rax_16 = strchr(string_2, 0x3f)
                        char* r14_2 = rax_16
                        
                        if (rax_16 != 0)
                            *rax_16 = 0
                            r14_2 = &r14_2[1]
                        
                        if (*string_2 == 0)
                        label_142c87655:
                            
                            if (r14_2 != 0 && *r14_2 == 0)
                                rbx = 0x15
                        else if (sub_142c51e30(*arg1, string_2, 0, &arg_8, nullptr, 0) != 0)
                            rbx = 0x5a
                        else
                            int64_t rax_18 = arg_8
                            arg2[5] = rax_18
                            
                            if (rax_18 != 0)
                                goto label_142c87655
                            
                            rbx = 0x5a
            else
                int64_t rbp_1 = 1
                
                for (char* i = strchr(string_1, 0x2c); i != 0; i = strchr(&i[1], 0x2c))
                    rbp_1 += 1
                
                int64_t rax_9 = data_143ccb8b8(rbp_1, 8)
                
                if (rax_9 == 0)
                    rbx = 0x5a
                else
                    int64_t r14_1 = 0
                    void arg_18
                    char* rax_10 = sub_142c70cb0(string_1, U",", &arg_18)
                    
                    if (rax_10 != 0)
                        while (r14_1 u< rbp_1)
                            *(rax_9 + (r14_1 << 3)) = rax_10
                            rax_10 = sub_142c70cb0(nullptr, U",", &arg_18)
                            r14_1 += 1
                            
                            if (rax_10 == 0)
                                break
                    
                    int64_t rax_11 = data_143ccb8b8(rbp_1 + 1, 8)
                    arg2[3] = rax_11
                    
                    if (rax_11 != 0)
                        int64_t rsi = 0
                        
                        if (rbp_1 != 0)
                            do
                                if (sub_142c51e30(*arg1, *(rax_9 + (rsi << 3)), 0, &arg_8, nullptr, 
                                        0) != 0)
                                    goto label_142c875f5
                                
                                *(arg2[3] + (rsi << 3)) = arg_8
                                int64_t rax_14 = arg2[3]
                                arg_8 = 0
                                
                                if (*(rax_14 + (rsi << 3)) == 0)
                                    goto label_142c875f5
                                
                                arg2[7] += 1
                                rsi += 1
                            while (rsi u< rbp_1)
                        
                        data_143ccb8a0(rax_9)
                        goto label_142c875b3
                    
                label_142c875f5:
                    data_143ccb8a0(rax_9)
                    rbx = 0x5a
        
        data_143ccb8a0(string)
        return zx.q(rbx)

return 0x15
