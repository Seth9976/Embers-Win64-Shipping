// 函数: sub_1428608b0
// 地址: 0x1428608b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x118)
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
char* r12 = nullptr
int32_t* var_108 = nullptr
int32_t r13 = 0
int64_t var_110 = 0
int64_t* rax_2 = sub_142891ee0()
int64_t* var_118 = nullptr

if (rax_2 != 0)
    int32_t* rax_4 = sub_1428a38c0(*(*(arg1 + 0x508) + 0xf8))
    int32_t var_120_2
    
    if (rax_4 != 0)
        void* rax_5 = sub_142854230(rax_4, nullptr)
        
        if (rax_5 == 0)
            sub_142856580(arg1, (rax_5 + 0x2f).d, 0x17b, 0xdc, "ssl\statem\statem_lib.c", 0x170)
        else if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 2) == 0)
            if (sub_142865be0(arg1, rax_4) == 0)
                var_120_2 = 0x182
                goto label_142860a04
            
        label_1428609e7:
            int64_t* rdx_4 = &var_108
            
            if (sub_1428654d0(*(*(arg1 + 0xa8) + 0x308), rdx_4) == 0)
                var_120_2 = 0x188
                goto label_142860a04
            
            uint64_t rbp_1
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 2) == 0)
                if (arg2[1] != 0x40)
                label_142860a91:
                    
                    if (arg2[1] != 0x80)
                        goto label_142860aaf
                    
                    if (sub_1406938b0(rax_4) != 0x3d4)
                        goto label_142860aaf
                else if (sub_1406938b0(rax_4) != 0x32b && sub_1406938b0(rax_4) != 0x3d3)
                    goto label_142860a91
                
                rbp_1 = zx.q(arg2[1].d)
                goto label_142860ade
            
        label_142860aaf:
            rdx_4 = arg2[1]
            
            if (rdx_4 u< 2)
                sub_142856580(arg1, 0x32, 0x17b, 0x9f, "ssl\statem\statem_lib.c", 0x1a2)
            else
                char* rcx_14 = *arg2
                rbp_1 = zx.q(rcx_14[1]) | zx.q(zx.d(*rcx_14) << 8)
                *arg2 = &rcx_14[2]
                arg2[1] = rdx_4 - 2
            label_142860ade:
                int32_t rax_21 = sub_142896de0(rax_4, rdx_4)
                int64_t rcx_16
                
                if (rbp_1.d s<= rax_21 && arg2[1].d s<= rax_21)
                    rcx_16 = arg2[1]
                
                if (rbp_1.d s> rax_21 || arg2[1].d s> rax_21 || rcx_16 == 0)
                    sub_142856580(arg1, 0x32, 0x17b, 0x109, "ssl\statem\statem_lib.c", 0x1aa)
                else if (rcx_16 u< rbp_1)
                    sub_142856580(arg1, 0x32, 0x17b, 0x9f, "ssl\statem\statem_lib.c", 0x1af)
                else
                    char* r14_1 = *arg2
                    arg2[1] = rcx_16 - rbp_1
                    *arg2 = &r14_1[rbp_1]
                    int64_t var_100
                    void var_f8
                    int32_t rax_23
                    int512_t zmm1_1
                    rax_23, zmm1_1 = sub_14285e150(arg1, &var_f8, &var_100, &var_110)
                    
                    if (rax_23 != 0)
                        if (sub_1428935d0(rax_2, &var_118, var_108, nullptr, rax_4) s> 0)
                            int32_t rax_25 = sub_1406938b0(rax_4)
                            
                            if (rax_25 != 0x32b && rax_25 - 0x3d3 u> 1)
                                goto label_142860bd0
                            
                            char* rax_27 = sub_1428a6730(rbp_1)
                            r12 = rax_27
                            
                            if (rax_27 != 0)
                                sub_1428a75c0(r12, r14_1, rbp_1)
                                r14_1 = r12
                            label_142860bd0:
                                void* rcx_23 = *(*(arg1 + 0xa8) + 0x308)
                                int32_t rax_29
                                int32_t rax_30
                                
                                if (rcx_23 != 0 && *(rcx_23 + 0x14) == 0x390)
                                    rax_29 = sub_1428973a0(var_118, 0xffffffff, 0x1001, 6, 0)
                                    
                                    if (rax_29 s> 0)
                                        rax_30 = sub_1428973a0(var_118, 0x18, 0x1002, 0xffffffff, 0)
                                
                                if (rcx_23 != 0 && *(rcx_23 + 0x14) == 0x390
                                        && (rax_29 s<= 0 || rax_30 s<= 0))
                                    sub_142856580(arg1, 0x50, 0x17b, 6, "ssl\statem\statem_lib.c", 
                                        0x1d6)
                                else
                                    int32_t var_120_3
                                    
                                    if (*arg1 != 0x300)
                                        if (sub_142893300(rax_2, r14_1, rbp_1, var_100, var_110)
                                                s> 0)
                                            r13 = 3
                                        else
                                            var_120_3 = 0x1ec
                                        label_142860cf4:
                                            sub_142856580(arg1, 0x33, 0x17b, 0x7b, 
                                                "ssl\statem\statem_lib.c", var_120_3)
                                    else
                                        int32_t rax_31
                                        int512_t zmm0_1
                                        rax_31, zmm0_1 = sub_142891c10(rax_2, var_100, var_110)
                                        int32_t rax_33
                                        
                                        if (rax_31 s> 0)
                                            *(*(arg1 + 0x508) + 8)
                                            rax_33 = sub_142891e60(rax_2)
                                        
                                        if (rax_31 s<= 0 || rax_33 == 0)
                                            sub_142856580(arg1, 0x50, 0x17b, 6, 
                                                "ssl\statem\statem_lib.c", 0x1e0)
                                        else
                                            if (sub_1428934a0(rax_2, r14_1, rbp_1, zmm0_1, zmm1_1, 
                                                    arg3) s<= 0)
                                                var_120_3 = 0x1e5
                                                goto label_142860cf4
                                            
                                            r13 = 3
                            else
                                sub_142856580(arg1, (&rax_27[0x50]).d, 0x17b, (&rax_27[0x41]).d, 
                                    "ssl\statem\statem_lib.c", 0x1c8)
                        else
                            sub_142856580(arg1, 0x50, 0x17b, 6, "ssl\statem\statem_lib.c", 0x1bd)
        else
            int64_t rdx_2 = arg2[1]
            
            if (rdx_2 u< 2)
                sub_142856580(arg1, 0x32, 0x17b, 0xf0, "ssl\statem\statem_lib.c", 0x179)
            else
                char* rax_7 = *arg2
                uint16_t rcx_4 = zx.w(*rax_7)
                uint16_t r8_1 = zx.w(rax_7[1])
                *arg2 = &rax_7[2]
                arg2[1] = rdx_2 - 2
                
                if (sub_142863d30(arg1, rcx_4 << 8 | r8_1, rax_4) s> 0)
                    goto label_1428609e7
    else
        var_120_2 = 0x16a
    label_142860a04:
        sub_142856580(arg1, 0x50, 0x17b, 0x44, "ssl\statem\statem_lib.c", var_120_2)
else
    sub_142856580(arg1, (&rax_2[0xa]).d, 0x17b, 0x41, "ssl\statem\statem_lib.c", 0x162)

sub_142899e70(*(*(arg1 + 0xa8) + 0xe0))
*(*(arg1 + 0xa8) + 0xe0) = 0
sub_142891ea0(rax_2)
sub_1428a6780(r12)
__security_check_cookie(rax_1 ^ &var_148)
return zx.q(r13)
