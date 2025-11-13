// 函数: sub_14287c9f0
// 地址: 0x14287c9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t rsi = 0
int64_t r14 = 0
int32_t* rax = sub_142898ba0()
int32_t* r15_2
int32_t var_60_1
int32_t* rcx_5
int32_t rdx
int32_t r9_1

if (rax != 0)
    int32_t* rcx = *(arg1 + 8)
    
    if ((*(*(rcx + 0xc0) + 0x60) & 8) == 0)
        int32_t rax_2 = *rcx
        
        if (rax_2 s< 0x304 || rax_2 == 0x10000)
            goto label_14287ca88
        
        int64_t rdx_1 = arg2[1]
        
        if (rdx_1 == 0)
            goto label_14287cf2c
        
        char* rax_3 = *arg2
        char rcx_1 = *rax_3
        *arg2 = &rax_3[1]
        arg2[1] = rdx_1 - 1
        
        if (rcx_1 != 0)
            goto label_14287cf2c
        
        goto label_14287ca88
    
label_14287ca88:
    int64_t r10_1 = arg2[1]
    
    if (r10_1 u< 3)
    label_14287cf2c:
        rdx = 0x32
        var_60_1 = 0x738
        r9_1 = 0x9f
        goto label_14287cf44
    
    char* rax_6 = *arg2
    int64_t r10_2 = r10_1 - 3
    uint64_t r9_2 = zx.q(rax_6[2])
    uint64_t r8_3 = zx.q(*rax_6) << 8 | zx.q(rax_6[1])
    *arg2 = &rax_6[3]
    arg2[1] = r10_2
    
    if (r10_2 != (r8_3 << 8 | r9_2) || r10_2 == 0)
        goto label_14287cf2c
    
    int64_t r13_1 = 0
    
    while (true)
        if (r10_2 u>= 3)
            char* rcx_2 = *arg2
            uint64_t r8_9 = zx.q((zx.d(rcx_2[1]) | zx.d(*rcx_2) << 8) << 8) | zx.q(rcx_2[2])
            *arg2 = &rcx_2[3]
            uint64_t r15_1 = zx.q(r8_9.d)
            arg2[1] = r10_2 - 3
            
            if (r10_2 - 3 u>= r15_1)
                void* var_58 = &rcx_2[3]
                *arg2 = &rcx_2[3 + r8_9]
                arg2[1] = r10_2 - 3 - r15_1
                int64_t rax_12 = sub_1428a2d00(nullptr, &var_58, r8_9.d)
                r14 = rax_12
                
                if (rax_12 == 0)
                    rdx = 0x2a
                    var_60_1 = 0x748
                    r9_1 = 0xd
                    goto label_14287cf44
                
                if (var_58 != &rcx_2[3 + r15_1])
                    rdx = 0x32
                    var_60_1 = 0x74e
                    r9_1 = 0x87
                    goto label_14287cf44
                
                int32_t* rcx_3 = *(arg1 + 8)
                
                if ((*(*(rcx_3 + 0xc0) + 0x60) & 8) == 0)
                    int32_t rax_15 = *rcx_3
                    
                    if (rax_15 s>= 0x304 && rax_15 != 0x10000)
                        void* const arg_20 = nullptr
                        rcx_5 = arg1
                        void var_48
                        
                        if (sub_1428673b0(arg2, &var_48) == 0)
                            var_60_1 = 0x759
                            rdx = 0x32
                            r9_1 = 0x10f
                            goto label_14287cf52
                        
                        int32_t rax_17
                        rax_17.b = r13_1 == 0
                        int32_t rax_18 =
                            sub_142875450(rcx_5, &var_48, 0x1000, &arg_20, nullptr, rax_17)
                        int32_t rax_20
                        
                        if (rax_18 != 0)
                            int32_t rax_19
                            rax_19.b = arg2[1] == 0
                            rax_20 = sub_142875b50(arg1, 0x1000, arg_20, r14, r13_1, rax_19)
                        
                        if (rax_18 == 0 || rax_20 == 0)
                            sub_1428a6780(arg_20)
                            break
                        
                        sub_1428a6780(arg_20)
                
                r15_2 = rax
                
                if (sub_142898d50(r15_2, r14) == 0)
                    sub_142856580(arg1, 0x50, 0x16f, 0x41, "ssl\statem\statem_clnt.c", 0x76c)
                    goto label_14287cf62
                
                r10_2 = arg2[1]
                r13_1 += 1
                
                if (r10_2 != 0)
                    continue
                
                int32_t rax_22 = sub_1428548e0(arg1, r15_2)
                
                if (arg1[0x156] == 0 || rax_22 s> 0)
                    sub_1428a49e0()
                    
                    if (rax_22 s<= 1)
                        *(*(arg1 + 0x508) + 0x108) = r15_2
                        void* rax_25 = sub_142898ea0(r15_2, 0)
                        r15_2 = nullptr
                        char* rax_26 = sub_1428a38c0(rax_25)
                        int32_t rax_27
                        
                        if (rax_26 != 0)
                            rax_27 = sub_1428968c0(rax_26)
                        
                        if (rax_26 == 0 || rax_27 != 0)
                            r14 = 0
                            sub_142856580(arg1, 0x50, 0x16f, 0xef, "ssl\statem\statem_clnt.c", 
                                0x79b)
                        else
                            int32_t var_50
                            void* rax_28 = sub_142854230(rax_26, &var_50)
                            
                            if (rax_28 != 0)
                                int32_t* rcx_19 = *(arg1 + 8)
                                
                                if ((*(*(rcx_19 + 0xc0) + 0x60) & 8) != 0)
                                    if ((*(rax_28 + 4) & *(*(*(arg1 + 0xa8) + 0x238) + 0x20)) != 0)
                                        goto label_14287cdf2
                                    
                                    r14 = 0
                                    sub_142856580(arg1, 0x2f, 0x16f, 0x17f, 
                                        "ssl\statem\statem_clnt.c", 0x7b0)
                                else
                                    int32_t rax_30 = *rcx_19
                                    
                                    if ((rax_30 s< 0x304 || rax_30 == 0x10000) && (*(rax_28 + 4)
                                            & *(*(*(arg1 + 0xa8) + 0x238) + 0x20)) == 0)
                                        r14 = 0
                                        sub_142856580(arg1, 0x2f, 0x16f, 0x17f, 
                                            "ssl\statem\statem_clnt.c", 0x7b0)
                                    else
                                    label_14287cdf2:
                                        *(*(arg1 + 0x508) + 0x100) = var_50
                                        sub_1428a2c50(*(*(arg1 + 0x508) + 0xf8))
                                        sub_1428a3ba0(rax_25)
                                        *(*(arg1 + 0x508) + 0xf8) = rax_25
                                        r14 = 0
                                        *(*(arg1 + 0x508) + 0x110) = arg1[0x16a]
                                        int32_t* rcx_27 = *(arg1 + 8)
                                        
                                        if ((*(*(rcx_27 + 0xc0) + 0x60) & 8) != 0)
                                            rsi = 3
                                        else
                                            int32_t rax_37 = *rcx_27
                                            
                                            if (rax_37 s< 0x304 || rax_37 == 0x10000)
                                                rsi = 3
                                            else if (sub_142851d80(arg1, &arg1[0x124], 0x40, 
                                                    &arg1[0x134]) != 0)
                                                rsi = 3
                            else
                                r14 = 0
                                sub_142856580(arg1, (rax_28 + 0x2f).d, 0x16f, 0xf7, 
                                    "ssl\statem\statem_clnt.c", 0x7a3)
                    else
                        sub_142856580(arg1, 0x28, 0x16f, rax_22, "ssl\statem\statem_clnt.c", 0x78a)
                        r14 = 0
                else
                    sub_142856580(arg1, sub_14285f830(arg1[0x16a]), 0x16f, 0x86, 
                        "ssl\statem\statem_clnt.c", 0x784)
                    r14 = 0
                
                goto label_14287cf62
        
        sub_142856580(arg1, 0x32, 0x16f, 0x87, "ssl\statem\statem_clnt.c", 0x740)
        r14 = 0
        break
else
    var_60_1 = 0x72e
    rdx = 0x50
    r9_1 = 0x41
label_14287cf44:
    rcx_5 = arg1
label_14287cf52:
    sub_142856580(rcx_5, rdx, 0x16f, r9_1, "ssl\statem\statem_clnt.c", var_60_1)
r15_2 = rax
label_14287cf62:
sub_1428a2c50(r14)
sub_142898cb0(r15_2, sub_1428a2c50)
return zx.q(rsi)
