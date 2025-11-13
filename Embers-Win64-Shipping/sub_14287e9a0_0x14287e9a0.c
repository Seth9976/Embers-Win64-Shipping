// 函数: sub_14287e9a0
// 地址: 0x14287e9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc8)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t result

if (arg3 == 1)
    int64_t* r12_1
    
    if (arg4 == 0)
        r12_1 = *(arg1 + 0x430)
    else
        r12_1 = *(arg1 + 0x460)
    
    void* const rax_2 = 0x16a0
    
    if (arg4 == 0)
        rax_2 = 0x1698
    
    void* rcx = rax_2 + arg1
    void* const rax_3 = 0x468
    
    if (arg4 == 0)
        rax_3 = 0x438
    
    void* rax_4 = rax_3 + arg1
    
    if (r12_1 == 0 || arg2[1] == 0x15)
        memmove(*(arg2 + 0x20), *(arg2 + 0x28), (*(arg2 + 8)).d)
        *(arg2 + 0x28) = *(arg2 + 0x20)
        result = 1
    else
        int64_t rdx = sx.q(sub_142890ed0(r12_1))
        int32_t rax_9
        
        if (*(arg1 + 0x84) - 3 u<= 1)
            void* rax_10 = *(arg1 + 0x508)
            
            if (rax_10 != 0 && *(rax_10 + 0x19c) u> 0)
            label_14287eae0:
                rax_9 = *(*(rax_10 + 0x128) + 0x24)
                goto label_14287eaf5
            
            rax_10 = *(arg1 + 0x510)
            
            if (rax_10 != 0 && *(rax_10 + 0x19c) u> 0)
                goto label_14287eae0
            
            sub_142856580(arg1, 0x50, 0x261, 0x44, "ssl\record\ssl3_record_tls13.c", 0x4d)
            result = 0xffffffff
        else
            void* rcx_2 = *(*(arg1 + 0xa8) + 0x238)
            
            if (rcx_2 != 0)
                rax_9 = *(rcx_2 + 0x24)
            label_14287eaf5:
                int32_t rcx_4 = rax_9 & 0x3c000
                int64_t i_1 = 8
                int64_t r15_1
                
                if (rcx_4 == 0)
                    if ((rax_9 & 0x3000) != 0 || test_bit(rax_9, 0x13))
                        r15_1 = 0x10
                    label_14287eb62:
                        
                        if (arg4 != 0)
                            goto label_14287eb82
                        
                        goto label_14287eb67
                    
                    sub_142856580(arg1, 0x50, 0x261, 0x44, "ssl\record\ssl3_record_tls13.c", 0x70)
                    result = 0xffffffff
                else
                    r15_1 = 8
                    
                    if ((rax_9 & 0x30000) == 0)
                        r15_1 = 0x10
                    
                    if (arg4 == 0)
                    label_14287eb67:
                        int64_t rcx_6 = *(arg2 + 8)
                        
                        if (rcx_6 u>= r15_1 + 1)
                            *(arg2 + 8) = rcx_6 - r15_1
                        label_14287eb82:
                            
                            if (rdx u>= 8)
                                void var_58
                                memcpy(&var_58, rax_4, (rdx - 8).d)
                                *(&var_58 + rdx - 8) = *rcx ^ *(rax_4 + rdx - 8)
                                void var_57
                                *(&var_57 + rdx - 8) = *(rcx + 1) ^ *(rax_4 + rdx - 8 + 1)
                                void var_56
                                *(&var_56 + rdx - 8) = *(rcx + 2) ^ *(rax_4 + rdx - 8 + 2)
                                void var_55
                                *(&var_55 + rdx - 8) = *(rcx + 3) ^ *(rax_4 + rdx - 8 + 3)
                                void var_54
                                *(&var_54 + rdx - 8) = *(rcx + 4) ^ *(rax_4 + rdx - 8 + 4)
                                void var_53
                                *(&var_53 + rdx - 8) = *(rcx + 5) ^ *(rax_4 + rdx - 8 + 5)
                                void var_52
                                *(&var_52 + rdx - 8) = *(rcx + 6) ^ *(rax_4 + rdx - 8 + 6)
                                char var_51[0x9]
                                var_51[rdx - 8] = *(rcx + 7) ^ *(rax_4 + rdx - 8 + 7)
                                int64_t i
                                
                                do
                                    char temp1_1 = *(rcx + i_1 - 1)
                                    *(rcx + i_1 - 1) += 1
                                    
                                    if (temp1_1 != 0xff)
                                        break
                                    
                                    i = i_1
                                    i_1 -= 1
                                while (i != 1)
                                
                                if (i_1 == 0)
                                    result = 0xffffffff
                                else if (sub_142892480(r12_1, nullptr, nullptr, 0, &var_58, arg4)
                                        s<= 0)
                                    result = 0xffffffff
                                else
                                    int32_t rax_23
                                    
                                    if (arg4 == 0)
                                        *(arg2 + 0x20)
                                        *(arg2 + 8)
                                        rax_23 = sub_142892150(r12_1)
                                    
                                    void var_88
                                    void var_48
                                    
                                    if (arg4 == 0 && rax_23 s<= 0)
                                        result = 0xffffffff
                                    else if (sub_142873900(&var_88, &var_48, 5, 0) == 0)
                                        sub_142873690(&var_88)
                                        result = 0xffffffff
                                    else if (sub_142873b60(&var_88, arg2[1], 1) == 0)
                                        sub_142873690(&var_88)
                                        result = 0xffffffff
                                    else if (sub_142873b60(&var_88, *arg2, 2) == 0)
                                        sub_142873690(&var_88)
                                        result = 0xffffffff
                                    else
                                        int64_t var_90
                                        
                                        if (sub_142873b60(&var_88, arg2[2] + r15_1.d, 2) == 0)
                                            sub_142873690(&var_88)
                                            result = 0xffffffff
                                        else if (sub_142873850(&var_88, &var_90) == 0
                                                || var_90 != 5)
                                            sub_142873690(&var_88)
                                            result = 0xffffffff
                                        else if (sub_142873790(&var_88) == 0)
                                            sub_142873690(&var_88)
                                            result = 0xffffffff
                                        else
                                            void* var_c8_2
                                            int32_t var_b8
                                            int32_t rax_31
                                            
                                            if (rcx_4 != 0)
                                                var_c8_2.d = arg2[2]
                                                rax_31 =
                                                    sub_1428927c0(r12_1, 0, &var_b8, 0, var_c8_2.d)
                                            
                                            if (rcx_4 != 0 && rax_31 s<= 0)
                                                result = 0xffffffff
                                            else
                                                var_c8_2.d = 5
                                                
                                                if (sub_1428927c0(r12_1, 0, &var_b8, &var_48, 
                                                        var_c8_2.d) s<= 0)
                                                    result = 0xffffffff
                                                else
                                                    var_c8_2.d = arg2[2]
                                                    int32_t var_b0
                                                    
                                                    if (sub_1428927c0(r12_1, *(arg2 + 0x20), 
                                                            &var_b8, *(arg2 + 0x28), var_c8_2.d) s<= 0)
                                                        result = 0xffffffff
                                                    else if (sub_142892450(r12_1, 
                                                            sx.q(var_b8) + *(arg2 + 0x20), &var_b0, 
                                                            arg5) s<= 0 || sx.q(var_b0 + var_b8)
                                                            != *(arg2 + 8))
                                                        result = 0xffffffff
                                                    else if (arg4 == 0)
                                                        result = 1
                                                    else
                                                        *(arg2 + 0x20)
                                                        
                                                        if (sub_142892150(r12_1) s> 0)
                                                            *(arg2 + 8) += r15_1
                                                            result = 1
                                                        else
                                                            sub_142856580(arg1, 0x50, 0x261, 0x44, 
                                                                "ssl\record\ssl3_record_tls13.c", 0xbd)
                                                            result = 0xffffffff
                            else
                                sub_142856580(arg1, 0x50, 0x261, 0x44, 
                                    "ssl\record\ssl3_record_tls13.c", 0x82)
                                result = 0xffffffff
                        else
                            result = 0
                    else
                        if (sub_142892150(r12_1) s> 0)
                            goto label_14287eb62
                        
                        sub_142856580(arg1, 0x50, 0x261, 0x44, "ssl\record\ssl3_record_tls13.c", 
                            0x67)
                        result = 0xffffffff
            else
                sub_142856580(arg1, 0x50, 0x261, 0x44, "ssl\record\ssl3_record_tls13.c", 0x59)
                result = 0xffffffff
else
    sub_142856580(arg1, 0x50, 0x261, 0x44, "ssl\record\ssl3_record_tls13.c", 0x29)
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_e8)
return result
