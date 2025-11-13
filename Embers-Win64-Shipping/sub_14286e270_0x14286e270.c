// 函数: sub_14286e270
// 地址: 0x14286e270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd8)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t result

if (*(arg1 + 0x868) == 0)
    if (*(*(arg1 + 0xa8) + 0xfc) != 0)
        result = (*(*(arg1 + 8) + 0x78))()
    
    if (*(*(arg1 + 0xa8) + 0xfc) == 0 || result s> 0)
        if (arg4 != 0 || arg5 != 0)
            if (arg4 u<= zx.q(sub_142851cc0(arg1)))
                int64_t rax_8
                
                if (*(arg1 + 0x508) != 0 && *(arg1 + 0x460) != 0)
                    rax_8 = sub_142891580(*(arg1 + 0x478))
                
                int32_t r15_1
                
                if (*(arg1 + 0x508) == 0 || *(arg1 + 0x460) == 0 || rax_8 == 0)
                    r15_1 = 0
                label_14286e3cd:
                    char* rcx_6 = *(arg1 + 0x848)
                    *rcx_6 = arg2.b
                    int32_t var_a4_1 = arg2
                    uint64_t rax_11
                    
                    if (**(arg1 + 8) != 0x1ffff || *(arg1 + 0x5d0) == 0x100)
                        rcx_6[1] = (*arg1 s>> 8).b
                        rax_11 = zx.q(*arg1)
                    else
                        rcx_6[1] = 0xfe
                        rax_11.b = 0xff
                    
                    rcx_6[2] = rax_11.b
                    int64_t* rcx_8 = *(arg1 + 0x460)
                    int32_t rdi_1
                    
                    if (rcx_8 == 0)
                        rdi_1 = 0
                    else
                        int32_t rcx_11 = sub_142890eb0(sub_140687ad0(rcx_8)) & 0xf0007
                        
                        if (rcx_11 != 2)
                            rdi_1 = 8
                            
                            if (rcx_11 != 6)
                                int32_t rax_19 = 0
                                
                                if (rcx_11 == 7)
                                    rax_19 = 8
                                
                                rdi_1 = rax_19
                        else
                            int32_t rax_16 = sub_142890ed0(*(arg1 + 0x460))
                            rdi_1 = rax_16
                            
                            if (rax_16 s<= 1)
                                rdi_1 = 0
                    
                    int64_t r12_1 = sx.q(rdi_1)
                    void* rcx_14 = &rcx_6[0xd + r12_1]
                    void* var_a0_1 = arg4
                    int64_t var_80_1 = arg3
                    void var_a8
                    
                    if (*(arg1 + 0x450) == 0)
                        memcpy(rcx_14, arg3, arg4.d)
                        void* var_80_2 = rcx_14
                    label_14286e4da:
                        int32_t var_d0_4
                        void* rcx_18
                        
                        if ((**(arg1 + 0xa8) & 0x400) != 0 || r15_1 == 0)
                            rcx_18 = var_a0_1
                        label_14286e53a:
                            void* var_88_2 = &rcx_6[0xd]
                            void* var_80_3 = &rcx_6[0xd]
                            
                            if (rdi_1 != 0)
                                var_a0_1 = rcx_18 + r12_1
                            
                            if ((**(*(arg1 + 8) + 0xc0))(arg1, &var_a8, 1, 1) s>= 1)
                                if ((**(arg1 + 0xa8) & 0x400) == 0 || r15_1 == 0)
                                    goto label_14286e60e
                                
                                if ((*(*(*(arg1 + 8) + 0xc0) + 8))(arg1, &var_a8, 
                                        var_a0_1 + &rcx_6[0xd], 1) == 0)
                                    var_d0_4 = 0x3ca
                                    goto label_14286e5cd
                                
                                var_a0_1 += sx.q(r15_1)
                            label_14286e60e:
                                rcx_6[3] = *(*(arg1 + 0x16b0) + 3)
                                rcx_6[4] = *(*(arg1 + 0x16b0) + 2)
                                *(rcx_6 + 5) = *(arg1 + 0x16a2)
                                *(rcx_6 + 9) = *(arg1 + 0x16a6)
                                rcx_6[0xb] = (var_a0_1 u>> 8).b
                                rcx_6[0xc] = var_a0_1.b
                                int64_t r10_4 = *(arg1 + 0xb8)
                                
                                if (r10_4 != 0)
                                    int32_t var_d0
                                    var_d0.q = arg1
                                    r10_4(1, 0, 0x100, rcx_6, 0xd, var_d0, *(arg1 + 0xc0))
                                
                                void* var_a0_2 = var_a0_1 + 0xd
                                int32_t var_a4_2 = arg2
                                sub_14285d1e0(&arg1[0x16a0])
                                
                                if (arg5 == 0)
                                    *(arg1 + 0x868) = var_a0_2
                                    *(arg1 + 0x860) = 0
                                    *(arg1 + 0x1678) = arg4
                                    *(arg1 + 0x1690) = arg3
                                    *(arg1 + 0x1680) = arg2
                                    *(arg1 + 0x1688) = arg4
                                    result = sub_14285d5a0(arg1, arg2, arg3, arg4, arg6)
                                else
                                    result = 1
                                    *arg6 = var_a0_2
                            else
                                if (sub_142856600(arg1) == 0)
                                    var_d0_4 = 0x3c1
                                    goto label_14286e5cd
                                
                                result = -1
                        else
                            if ((*(*(*(arg1 + 8) + 0xc0) + 8))(arg1, &var_a8, 
                                    var_a0_1 + r12_1 + &rcx_6[0xd], 1) != 0)
                                rcx_18 = var_a0_1 + sx.q(r15_1)
                                var_a0_1 = rcx_18
                                goto label_14286e53a
                            
                            var_d0_4 = 0x3b1
                        label_14286e5cd:
                            sub_142856580(arg1, 0x50, 0xf5, 0x44, "ssl\record\rec_layer_d1.c", 
                                var_d0_4)
                            result = -1
                    else
                        if (sub_14287fd40(arg1, &var_a8) != 0)
                            goto label_14286e4da
                        
                        sub_142856580(arg1, 0x50, 0xf5, 0x8d, "ssl\record\rec_layer_d1.c", 0x39d)
                        result = -1
                else
                    int32_t rax_10 = sub_1428916c0(sub_142891580(*(arg1 + 0x478)))
                    r15_1 = rax_10
                    
                    if (rax_10 s>= 0)
                        goto label_14286e3cd
                    
                    sub_142856580(arg1, 0x50, 0xf5, 0xc2, "ssl\record\rec_layer_d1.c", 0x361)
                    result = -1
            else
                sub_142856580(arg1, 0x50, 0xf5, 0xc2, "ssl\record\rec_layer_d1.c", 0x351)
                result = 0
        else
            result = 0
else
    sub_142856580(arg1, 0x50, 0xf5, 0x44, "ssl\record\rec_layer_d1.c", 0x340)
    result = 0

__security_check_cookie(rax_1 ^ &var_f8)
return result
