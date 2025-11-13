// 函数: sub_14287f270
// 地址: 0x14287f270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc8)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t r15 = *(arg1 + 0x508)
int64_t rax_3 = *(arg1 + 0x1648) + 0xd
*(arg1 + 0xd70) = rax_3
int64_t rcx = *(arg1 + 0xd50)
int64_t result

if (rcx u<= 0x4540)
    *(arg1 + 0xd68) = rax_3
    *(arg1 + 0xd58) = rcx
    void var_b8
    
    if ((**(arg1 + 0xa8) & 0x100) == 0)
    label_14287f440:
        int32_t rax_11 = (**(*(arg1 + 8) + 0xc0))(arg1, arg1 + 0xd48, 1, 0)
        int32_t r14_1 = rax_11
        
        if (rax_11 != 0)
            int64_t rax_14
            
            if (r15 != 0 && (**(arg1 + 0xa8) & 0x100) == 0 && *(arg1 + 0x430) != 0)
                rax_14 = sub_142891580(*(arg1 + 0x448))
            
            if (r15 == 0 || (**(arg1 + 0xa8) & 0x100) != 0 || *(arg1 + 0x430) == 0 || rax_14 == 0)
                if (r14_1 s< 0)
                    goto label_14287f5ef
                
            label_14287f617:
                
                if (*(arg1 + 0x458) == 0)
                label_14287f69b:
                    
                    if (*(arg1 + 0xd50) u<= 0x4000)
                        *(arg1 + 0xd60) = 0
                        *(arg1 + 0x1650) = 0
                        sub_1428858a0(arg1, arg2)
                        result = 1
                    else
                        sub_142856580(arg1, 0x16, 0x101, 0x92, "ssl\record\ssl3_record.c", 0x6fb)
                        result = 0
                else if (*(arg1 + 0xd50) u<= 0x4400)
                    int32_t rax_29 = sub_14287fda0(arg1, arg1 + 0xd48)
                    
                    if (rax_29 != 0)
                        goto label_14287f69b
                    
                    sub_142856580(arg1, rax_29 + 0x1e, 0x101, rax_29 + 0x6b, 
                        "ssl\record\ssl3_record.c", 0x6f4)
                    result = 0
                else
                    sub_142856580(arg1, 0x16, 0x101, 0x8c, "ssl\record\ssl3_record.c", 0x6ef)
                    result = 0
            else
                int32_t rax_16 = sub_1428916c0(sub_142891580(*(arg1 + 0x448)))
                
                if (rax_16 s>= 0)
                    uint64_t rdi_2 = sx.q(rax_16)
                    
                    if (rdi_2 u<= 0x40)
                        int32_t rax_19
                        
                        if (*(arg1 + 0xd58) u>= rdi_2)
                            rax_19 = sub_142890eb0(sub_140687ad0(*(arg1 + 0x430))) & 0xf0007
                        
                        if (*(arg1 + 0xd58) u>= rdi_2
                                && (rax_19 != 2 || *(arg1 + 0xd58) u>= rdi_2 + 1))
                            void* rsi_3
                            
                            if ((sub_142890eb0(sub_140687ad0(*(arg1 + 0x430))) & 0xf0007) != 2)
                                *(arg1 + 0xd50) -= rdi_2
                                rsi_3 = *(arg1 + 0xd50) + *(arg1 + 0xd68)
                            label_14287f5b3:
                                int32_t rax_26 =
                                    (*(*(*(arg1 + 8) + 0xc0) + 8))(arg1, arg1 + 0xd48, &var_b8, 0)
                                int32_t rax_27
                                
                                if (rax_26 != 0 && rsi_3 != 0)
                                    rax_27 = sub_1428bc500(&var_b8, rsi_3, rdi_2)
                                
                                if (rax_26 == 0 || rsi_3 == 0 || rax_27 != 0)
                                    r14_1 = -1
                                
                                if (*(arg1 + 0xd50) u> rdi_2 + 0x4400 || r14_1 s< 0)
                                    goto label_14287f5ef
                                
                                goto label_14287f617
                            
                            void var_78
                            rsi_3 = &var_78
                            int32_t rax_24 = sub_14287fb60(&var_78, arg1 + 0xd48, rdi_2)
                            
                            if (rax_24 != 0)
                                *(arg1 + 0xd50) -= rdi_2
                                goto label_14287f5b3
                            
                            sub_142856580(arg1, rax_24 + 0x50, 0x101, rax_24 + 0x44, 
                                "ssl\record\ssl3_record.c", 0x6ce)
                            result = 0
                        else
                            sub_142856580(arg1, 0x32, 0x101, 0xa0, "ssl\record\ssl3_record.c", 
                                0x6c0)
                            result = 0
                    else
                        sub_142856580(arg1, 0x50, 0x101, 0x44, "ssl\record\ssl3_record.c", 0x6b1)
                        result = 0
                else
                    sub_142856580(arg1, 0x50, 0x101, 6, "ssl\record\ssl3_record.c", 0x6ab)
                    result = 0
        else if (sub_142856600(arg1) == 0)
        label_14287f5ef:
            result = 0
            *(arg1 + 0xd50) = 0
            *(arg1 + 0x1650) = 0
        else
            result = 0
    else
        int64_t* rcx_2 = *(arg1 + 0x448)
        
        if (rcx_2 == 0)
            goto label_14287f440
        
        int64_t rdi_1 = sx.q(sub_1428916c0(sub_142891580(rcx_2)))
        
        if (rdi_1 u> 0x40)
            sub_142856580(arg1, 0x50, 0x101, 0x44, "ssl\record\ssl3_record.c", 0x673)
            result = 0
        else if (*(arg1 + 0xd58) u>= rdi_1)
            *(arg1 + 0xd50) -= rdi_1
            int64_t rsi_2 = *(arg1 + 0xd50) + *(arg1 + 0xd68)
            int32_t rax_8 = (*(*(*(arg1 + 8) + 0xc0) + 8))(arg1, arg1 + 0xd48, &var_b8, 0)
            int32_t rax_9
            
            if (rax_8 != 0)
                rax_9 = sub_1428bc500(&var_b8, rsi_2, rdi_1)
            
            if (rax_8 != 0 && rax_9 == 0)
                goto label_14287f440
            
            sub_142856580(arg1, 0x14, 0x101, 0x119, "ssl\record\ssl3_record.c", 0x680)
            result = 0
        else
            sub_142856580(arg1, 0x32, 0x101, 0xa0, "ssl\record\ssl3_record.c", 0x678)
            result = 0
else
    sub_142856580(arg1, 0x16, 0x101, 0x96, "ssl\record\ssl3_record.c", 0x666)
    result = 0

__security_check_cookie(rax_1 ^ &var_e8)
return result
