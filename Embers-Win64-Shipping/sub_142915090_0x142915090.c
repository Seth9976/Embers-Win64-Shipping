// 函数: sub_142915090
// 地址: 0x142915090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg3 != 0)
    if (strcmp(arg2, "rsa_padding_mode") == 0)
        int64_t rcx_1 = 0
        int64_t i
        
        while (true)
            char rax_3 = arg3[rcx_1]
            rcx_1 += 1
            
            if (rax_3 != *(rcx_1 + 0x1434fd98b))
                int64_t rcx_2 = 0
                
                while (true)
                    char rax_4 = arg3[rcx_2]
                    rcx_2 += 1
                    
                    if (rax_4 != *(rcx_2 + 0x14351f10b))
                        int64_t rcx_3 = 0
                        
                        while (true)
                            char rax_5 = arg3[rcx_3]
                            rcx_3 += 1
                            
                            if (rax_5 != *(rcx_3 + 0x143517a07))
                                int64_t rcx_4 = 0
                                
                                while (true)
                                    char rax_6 = arg3[rcx_4]
                                    rcx_4 += 1
                                    
                                    if (rax_6 != *(rcx_4 + 0x14351f113))
                                        int64_t rcx_5 = 0
                                        
                                        while (true)
                                            char rax_7 = arg3[rcx_5]
                                            rcx_5 += 1
                                            
                                            if (rax_7 != *(rcx_5 + 0x14351f11b))
                                                for (i = 0; i != 5; )
                                                    char rax_8 = arg3[i]
                                                    i += 1
                                                    
                                                    if (rax_8 != *(i + 0x14351f123))
                                                        for (int64_t j = 0; j != 4; )
                                                            char rax_9 = arg3[j]
                                                            j += 1
                                                            
                                                            if (rax_9 != data_1434ff1e0[0x17][j])
                                                                sub_1428a5670(4, 0x90, 0x76, 
                                                                    "crypto\rsa\rsa_pmeth.c", 0x265)
                                                                goto label_142915289
                                                        
                                                        i = 6
                                                        break
                                                
                                                break
                                            
                                            if (rcx_5 == 5)
                                                i = 4
                                                break
                                        
                                        break
                                    
                                    if (rcx_4 == 5)
                                        i = 4
                                        break
                                
                                break
                            
                            if (rcx_3 == 5)
                                i = 3
                                break
                        
                        break
                    
                    if (rcx_2 == 7)
                        i = 2
                        break
                
                break
            
            if (rcx_1 == 6)
                i = 1
                break
        
        return sub_1428973a0(arg1, 0xffffffff, 0x1001, i.d, 0)
    
    if (strcmp(arg2, "rsa_pss_saltlen") == 0)
        int64_t rcx_8 = 0
        int32_t rax_14
        
        while (true)
            char rax_13 = arg3[rcx_8]
            rcx_8 += 1
            
            if (rax_13 != *(rcx_8 + 0x143508bd7))
                int64_t rdx = 0
                
                while (true)
                    char rax_15 = arg3[rdx]
                    rdx += 1
                    
                    if (rax_15 != *(rdx + 0x142d9173b))
                        int64_t rcx_9 = 0
                        
                        while (true)
                            char rax_16 = arg3[rcx_9]
                            rcx_9 += 1
                            
                            if (rax_16 != *(rcx_9 + 0x1434e8d73))
                                rax_14 = atoi(arg3)
                                break
                            
                            if (rcx_9 == 5)
                                rax_14 = (rcx_9 - 7).d
                                break
                        
                        break
                    
                    if (rdx == 4)
                        rax_14 = -3
                        break
                
                break
            
            if (rcx_8 == 7)
                rax_14 = (rcx_8 - 8).d
                break
        
        return sub_1428973a0(arg1, 0x18, 0x1002, rax_14, 0)
    
    if (strcmp(arg2, "rsa_keygen_bits") == 0)
        return sub_1428973a0(arg1, 4, 0x1003, atoi(arg3), 0)
    
    int64_t* arg_18
    
    if (strcmp(arg2, "rsa_keygen_pubexp") != 0)
        if (strcmp(arg2, "rsa_keygen_primes") == 0)
            return sub_1428973a0(arg1, 4, 0x100d, atoi(arg3), 0)
        
        if (strcmp(arg2, "rsa_mgf1_md") == 0)
            return sub_1428bce90(arg1, 0x3f8, 0x1005, arg3) __tailcall
        
        if (**arg1 == 0x390)
            int32_t rax_32 = strcmp(arg2, "rsa_pss_keygen_mgf1_md")
            
            if (rax_32 == 0)
                return sub_1428bce90(arg1, rax_32 + 4, 0x1005, arg3) __tailcall
            
            int32_t rax_34 = strcmp(arg2, "rsa_pss_keygen_md")
            
            if (rax_34 == 0)
                return sub_1428bce90(arg1, rax_34 + 4, rax_34 + 1, arg3) __tailcall
            
            if (strcmp(arg2, "rsa_pss_keygen_saltlen") == 0)
                return sub_1428bcb30(arg1, 0x390, 4, 0x1002, atoi(arg3), 0)
        
        if (strcmp(arg2, "rsa_oaep_md") == 0)
            return sub_1428bce90(arg1, 0x300, 0x1009, arg3) __tailcall
        
        if (strcmp(arg2, "rsa_oaep_label") != 0)
        label_142915289:
            return 0xfffffffe
        
        char* rax_42 = sub_1428a6e90(arg3, &arg_18)
        
        if (rax_42 != 0)
            int32_t rax_44 = sub_1428bcb30(arg1, 6, 0x300, 0x100a, arg_18.d, rax_42)
            
            if (rax_44 s<= 0)
                sub_1428a6780(rax_42)
            
            return zx.q(rax_44)
    else
        arg_18 = nullptr
        
        if (sub_1428f5a10(&arg_18, arg3) != 0)
            int32_t var_18
            var_18.q = arg_18
            int32_t rax_24 = sub_1428973a0(arg1, 4, 0x1004, 0, var_18)
            
            if (rax_24 s<= 0)
                sub_1428901a0(arg_18)
            
            return zx.q(rax_24)
else
    sub_1428a5670(4, 0x90, 0x93, "crypto\rsa\rsa_pmeth.c", 0x250)

return 0
