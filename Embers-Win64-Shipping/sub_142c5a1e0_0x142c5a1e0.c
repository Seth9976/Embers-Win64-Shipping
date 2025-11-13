// 函数: sub_142c5a1e0
// 地址: 0x142c5a1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t* r14 = *(arg1 + 0x8a8)
int64_t result

if (r14 == 0)
label_142c5a495:
    *(arg1 + 0x8a8) = 0
    result = 0
else
    while (true)
        char* rcx = *r14
        
        if (rcx != 0)
            void var_228
            void* r8_1 = &var_228
            int512_t entry_zmm2
            
            if (*rcx != 0x2d)
                void var_128
                void* var_248_1 = &var_128
                
                if (sub_1425f29b0(rcx, "%255[^:]:%d:%255s", r8_1) == 3)
                    int32_t var_238
                    void* rax_6 = sub_142c71590(&var_128, var_238.w)
                    
                    if (rax_6 != 0)
                        char* rax_7
                        int512_t zmm2
                        rax_7, zmm2 = sub_142c563e0("%s:%d", &var_228, entry_zmm2)
                        char* rbx_3 = rax_7
                        char* rbx_5
                        
                        if (rax_7 != 0)
                            if (*rax_7 != 0)
                                do
                                    char rcx_12 = *rbx_3
                                    
                                    if (rcx_12 == 0x3a)
                                        break
                                    
                                    *rbx_3 = tolower(zx.d(rcx_12))
                                    rbx_3 = &rbx_3[1]
                                while (*rbx_3 != 0)
                            
                            int64_t rbx_4 = -1
                            bool cond:2_1
                            
                            do
                                cond:2_1 = rax_7[rbx_4 + 1] != 0
                                rbx_4 += 1
                            while (cond:2_1)
                            
                            if (*(arg1 + 0xd0) != 0)
                                sub_142c52530(arg1, 3, 2)
                            
                            rbx_5 = sub_142c671a0(*(arg1 + 0xb0), rax_7, rbx_4 + 1)
                            data_143ccb8a0(rax_7)
                            
                            if (rbx_5 != 0)
                                sub_142c710d0(rax_6)
                            else
                                char* rax_10
                                rax_10, zmm2 = sub_142c59e80(arg1, rax_6, &var_228, var_238, zmm2)
                                rbx_5 = rax_10
                                
                                if (rax_10 != 0)
                                    *(rax_10 + 0x10) -= 1
                                    *(rax_10 + 8) = 0
                            
                            if (*(arg1 + 0xd0) != 0)
                                sub_142c52570(arg1, 3)
                        
                        if (rax_7 == 0 || rbx_5 == 0)
                            sub_142c710d0(rax_6)
                            result = 0x1b
                            break
                        
                        void* var_248_2 = &var_128
                        entry_zmm2 =
                            sub_142c64850(arg1, "Added %s:%d:%s to DNS cache\n", &var_228, zmm2)
                    else
                        entry_zmm2 = sub_142c64850(arg1, "Address in '%s' found illegal!\n", *r14, 
                            entry_zmm2)
                else
                    entry_zmm2 = sub_142c64850(arg1, 
                        "Couldn't parse CURLOPT_RESOLVE entry '%s'!\n", *r14, entry_zmm2)
            else if (sub_1425f29b0(&rcx[1], "%255[^:]:%d", r8_1) == 2)
                char* rax_3
                rax_3, entry_zmm2 = sub_142c563e0("%s:%d", &var_228, entry_zmm2)
                char* rbx_1 = rax_3
                
                if (rax_3 == 0)
                    result = 0x1b
                    break
                
                if (*rax_3 != 0)
                    do
                        char rcx_3 = *rbx_1
                        
                        if (rcx_3 == 0x3a)
                            break
                        
                        *rbx_1 = tolower(zx.d(rcx_3))
                        rbx_1 = &rbx_1[1]
                    while (*rbx_1 != 0)
                
                int64_t rbx_2 = -1
                bool cond:1_1
                
                do
                    cond:1_1 = rax_3[rbx_2 + 1] != 0
                    rbx_2 += 1
                while (cond:1_1)
                
                if (*(arg1 + 0xd0) != 0)
                    sub_142c52530(arg1, 3, 2)
                
                sub_142c66f30(*(arg1 + 0xb0), rax_3, rbx_2 + 1)
                
                if (*(arg1 + 0xd0) != 0)
                    sub_142c52570(arg1, 3)
                
                data_143ccb8a0(rax_3)
            else
                entry_zmm2 = sub_142c64850(arg1, 
                    "Couldn't parse CURLOPT_RESOLVE removal entry '%s'!\n", *r14, entry_zmm2)
        
        r14 = r14[1]
        
        if (r14 == 0)
            goto label_142c5a495

__security_check_cookie(rax_1 ^ &var_268)
return result
