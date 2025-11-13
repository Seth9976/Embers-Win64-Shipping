// 函数: sub_14287cf90
// 地址: 0x14287cf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int32_t r15 = 0
void* var_68 = nullptr
int64_t rcx = arg2[1]
int32_t var_70_1
int32_t r9_2

if (rcx u< 2)
    var_70_1 = 0x593
label_14287d828:
    r9_2 = 0x9f
label_14287d82e:
    sub_142856580(arg1, 0x32, 0x171, r9_2, "ssl\statem\statem_clnt.c", var_70_1)
else
    char* r8_1 = *arg2
    int32_t r13_1 = 1
    uint32_t rdx_1 = zx.d(r8_1[1]) | zx.d(*r8_1) << 8
    *arg2 = &r8_1[2]
    arg2[1] = rcx - 2
    bool cond:0_1 = *arg1 != 0x304
    uint32_t arg_18 = rdx_1
    
    if (cond:0_1 || rdx_1 != 0x303)
    label_14287d059:
        
        if (rcx - 2 u< 0x20)
            var_70_1 = 0x5a6
            goto label_14287d828
        
        void* rax_6 = *(arg1 + 0xa8)
        *(rax_6 + 0x98) = *(r8_1 + 2)
        *(rax_6 + 0xa8) = *(r8_1 + 0x12)
        *arg2 += 0x20
        arg2[1] -= 0x20
    else
        if (rcx - 2 u< 0x20)
            var_70_1 = 0x5a6
            goto label_14287d828
        
        if (memcmp(&data_1434dbe90, &r8_1[2], 0x20) != 0)
            goto label_14287d059
        
        arg1[0x136] = 1
        r15 = 1
        int64_t rax_4 = arg2[1]
        
        if (rax_4 u< 0x20)
            var_70_1 = 0x5a0
            goto label_14287d828
        
        *arg2 += 0x20
        arg2[1] = rax_4 - 0x20
    
    uint128_t zmm0 = *arg2
    uint128_t var_58 = zmm0
    int64_t rcx_1 = _mm_bsrli_si128(zmm0, 8).q
    char* rax_7
    uint64_t count_1
    
    if (rcx_1 != 0)
        rax_7 = var_58.q
        count_1 = zx.q(*rax_7)
        var_58.q = &rax_7[1]
        var_58:8.q = rcx_1 - 1
    
    if (rcx_1 == 0 || rcx_1 - 1 u< count_1)
        var_70_1 = 0x5ae
        goto label_14287d828
    
    var_58.q = &rax_7[1 + count_1]
    var_58:8.q = rcx_1 - 1 - count_1
    *arg2 = var_58
    
    if (count_1 u> 0x20)
        sub_142856580(arg1, 0x2f, 0x171, 0x12c, "ssl\statem\statem_clnt.c", 0x5b5)
    else
        void* rcx_4 = arg2[1]
        
        if (rcx_4 u< 2)
            var_70_1 = 0x5bb
            goto label_14287d828
        
        void* rax_10 = *arg2
        void* const arg_20 = rax_10
        *arg2 = rax_10 + 2
        arg2[1] = rcx_4 - 2
        
        if (rcx_4 == 2)
            var_70_1 = 0x5c1
            goto label_14287d828
        
        uint32_t rdx_3 = zx.d(*(rax_10 + 2))
        *arg2 = rax_10 + 3
        arg2[1] = rcx_4 - 3
        int32_t var_70
        void* var_48
        
        if (rcx_4 != 3 || r15 != 0)
            if (sub_1428780e0(arg2, &var_48) == 0 || arg2[1] != 0)
                var_70_1 = 0x5cb
                r9_2 = 0x10f
                goto label_14287d82e
            
            if (r15 == 0)
                goto label_14287d15c
            
        label_14287d19f:
            int32_t* rsi_1 = *(arg1 + 8)
            int32_t r12_3 = *(*(rsi_1 + 0xc0) + 0x60) & 8
            
            if (r12_3 != 0)
                if (r15 == 0)
                    goto label_14287d366
                
                goto label_14287d1cd
            
            int32_t rax_18 = *rsi_1
            
            if ((rax_18 s< 0x304 || rax_18 == 0x10000) && r15 == 0)
            label_14287d366:
                int32_t rsi_2
                
                if (r12_3 != 0)
                    rsi_2 = 0x100
                else
                    int32_t rax_26 = *rsi_1
                    
                    if (rax_26 s< 0x304)
                        rsi_2 = 0x100
                    else
                        rsi_2 = 0x200
                        
                        if (rax_26 == 0x10000)
                            rsi_2 = 0x100
                
                int32_t rax_27 = sub_142876310(arg1, rsi_2, var_68)
                
                if (rax_27 != 0)
                    int32_t* rcx_20 = *(arg1 + 8)
                    arg1[0x32] = 0
                    int32_t rax_29
                    
                    if ((*(*(rcx_20 + 0xc0) + 0x60) & 8) == 0)
                        rax_29 = *rcx_20
                    
                    void* const r12_4
                    void* buffer1
                    
                    if ((*(*(rcx_20 + 0xc0) + 0x60) & 8) != 0 || rax_29 s< 0x304
                            || rax_29 == 0x10000)
                        if (*arg1 s< 0x301)
                        label_14287d54a:
                            r12_4 = arg_20
                        label_14287d54e:
                            
                            if (count_1 == 0)
                                goto label_14287d433
                            
                            void* rdx_20 = *(arg1 + 0x508)
                            buffer1 = &rax_7[1]
                            
                            if (count_1 == *(rdx_20 + 0x90)
                                    && memcmp(buffer1, rdx_20 + 0x98, count_1) == 0)
                                arg1[0x32] = 1
                            
                            goto label_14287d43e
                        
                        int64_t r10_1 = *(arg1 + 0x6b0)
                        
                        if (r10_1 == 0)
                            goto label_14287d54a
                        
                        void* rdx_17 = *(arg1 + 0x508)
                        
                        if (*(rdx_17 + 0x180) == 0)
                            goto label_14287d54a
                        
                        var_70.q = *(arg1 + 0x6b8)
                        var_58.q = 0
                        arg_18 = 0x40
                        int32_t rax_34 = r10_1(arg1, rdx_17 + 0x50, &arg_18, 0, &var_58, var_70)
                        int64_t rax_35
                        
                        if (rax_34 != 0)
                            rax_35 = sx.q(arg_18)
                        
                        if (rax_34 != 0 && rax_35.d s> 0)
                            r12_4 = arg_20
                            *(*(arg1 + 0x508) + 8) = rax_35
                            int32_t* rax_37 = var_58.q
                            
                            if (rax_37 == 0)
                                rax_37 = sub_14285b0f0(arg1, r12_4, 0)
                            
                            *(*(arg1 + 0x508) + 0x128) = rax_37
                            goto label_14287d54e
                        
                        sub_142856580(arg1, 0x50, 0x171, 0x44, "ssl\statem\statem_clnt.c", 0x639)
                    else if (sub_14285b7b0(&arg1[0x200]) == 0)
                        if (sub_142875ce0(arg1, 0x19, 0x200, var_68, 0, 0) != 0)
                            r12_4 = arg_20
                        label_14287d433:
                            buffer1 = &rax_7[1]
                        label_14287d43e:
                            void* rcx_23 = *(arg1 + 0x508)
                            
                            if (arg1[0x32] == 0)
                                if (*(rcx_23 + 0x90) u<= 0)
                                    int32_t* rdx_22 = *(arg1 + 8)
                                    
                                    if ((*(*(rdx_22 + 0xc0) + 0x60) & 8) == 0)
                                        int32_t rax_40 = *rdx_22
                                        
                                        if (rax_40 s< 0x304 || rax_40 == 0x10000
                                                || *(rcx_23 + 0x198) == 0xffffffff)
                                            goto label_14287d5f6
                                        
                                        goto label_14287d5c9
                                    
                                label_14287d5f6:
                                    **(arg1 + 0x508) = *arg1
                                    int32_t* rcx_33 = *(arg1 + 8)
                                    int32_t rax_45
                                    
                                    if ((*(*(rcx_33 + 0xc0) + 0x60) & 8) == 0)
                                        rax_45 = *rcx_33
                                    
                                    if ((*(*(rcx_33 + 0xc0) + 0x60) & 8) != 0 || rax_45 s< 0x304
                                            || rax_45 == 0x10000)
                                        *(*(arg1 + 0x508) + 0x90) = count_1
                                        
                                        if (count_1 != 0)
                                            memcpy(*(arg1 + 0x508) + 0x98, buffer1, count_1.d)
                                    
                                    goto label_14287d64c
                                
                            label_14287d5c9:
                                void* rcx_30 = *(arg1 + 0x738)
                                *(rcx_30 + 0x80)
                                *(rcx_30 + 0x80) += 1
                                
                                if (sub_142857f80(arg1, 0) != 0)
                                    goto label_14287d5f6
                            else
                                uint64_t count = *(arg1 + 0x4e0)
                                int32_t rax_32
                                
                                if (count == *(rcx_23 + 0xb8))
                                    rax_32 = memcmp(rcx_23 + 0xc0, &arg1[0x13a], count)
                                
                                if (count == *(rcx_23 + 0xb8) && rax_32 == 0)
                                label_14287d64c:
                                    int32_t rcx_36 = *arg1
                                    
                                    if (rcx_36 == **(arg1 + 0x508))
                                        *(*(arg1 + 0xa8) + 0x33c) = rcx_36
                                        *(*(arg1 + 0xa8) + 0x340) = *arg1
                                        
                                        if (sub_142879ae0(arg1, r12_4) != 0)
                                            if (arg1[0x32] != 0
                                                    && rdx_3 != *(*(arg1 + 0x508) + 0x120))
                                                sub_142856580(arg1, 0x2f, 0x171, 0x158, 
                                                    "ssl\statem\statem_clnt.c", 0x695)
                                            else
                                                int32_t* rcx_39
                                                
                                                if (rdx_3 != 0)
                                                    int32_t rax_60 = sub_14285eb60(arg1)
                                                    
                                                    if (rax_60 != 0)
                                                        int32_t* rax_61 = sub_142859060(
                                                            *(*(arg1 + 0x598) + 0x100), rdx_3)
                                                        rcx_39 = rax_61
                                                        
                                                        if (rax_61 != 0)
                                                            goto label_14287d6f3
                                                        
                                                        sub_142856580(arg1, (rax_61 + 0x2f).d, 
                                                            0x171, 0x101, 
                                                            "ssl\statem\statem_clnt.c", 0x6a4)
                                                    else
                                                        sub_142856580(arg1, rax_60 + 0x2f, 0x171, 
                                                            0x157, "ssl\statem\statem_clnt.c", 
                                                            0x69c)
                                                else
                                                    rcx_39 = nullptr
                                                label_14287d6f3:
                                                    *(*(arg1 + 0xa8) + 0x298) = rcx_39
                                                    
                                                    if (sub_142875b50(arg1, rsi_2, var_68, 0, 0, 1)
                                                            != 0)
                                                        int32_t* rax_54 = *(arg1 + 8)
                                                        void* rdx_26 = *(rax_54 + 0xc0)
                                                        
                                                        if ((*(rdx_26 + 0x60) & 8) != 0)
                                                            sub_1428a6780(var_68)
                                                            return 3
                                                        
                                                        int32_t rax_55 = *rax_54
                                                        
                                                        if (rax_55 s< 0x304 || rax_55 == 0x10000)
                                                            sub_1428a6780(var_68)
                                                            return 3
                                                        
                                                        if ((*(rdx_26 + 0x10))(arg1) != 0)
                                                            int64_t r8_14 = *(*(arg1 + 8) + 0xc0)
                                                            
                                                            if ((*(r8_14 + 0x20))(arg1, 0x91, r8_14)
                                                                    != 0)
                                                                sub_1428a6780(var_68)
                                                                return 3
                                    else
                                        sub_142856580(arg1, 0x46, 0x171, 0xd2, 
                                            "ssl\statem\statem_clnt.c", 0x674)
                                else
                                    sub_142856580(arg1, 0x2f, 0x171, 0x110, 
                                        "ssl\statem\statem_clnt.c", 0x64b)
                    else
                        sub_142856580(arg1, 0xa, 0x171, 0xb6, "ssl\statem\statem_clnt.c", 0x60e)
                else
                    sub_142856580(arg1, rax_27 + 0x2f, 0x171, rax_27 + 0x6e, 
                        "ssl\statem\statem_clnt.c", 0x600)
            else
            label_14287d1cd:
                
                if (rdx_3 == 0)
                    int32_t rax_19
                    
                    if (count_1 == *(arg1 + 0x550))
                        rax_19 = memcmp(&rax_7[1], &arg1[0x14c], count_1)
                    
                    if (count_1 != *(arg1 + 0x550) || rax_19 != 0)
                        sub_142856580(arg1, 0x2f, 0x171, 0x3e7, "ssl\statem\statem_clnt.c", 0x5ea)
                    else
                        if (r15 == 0)
                            goto label_14287d366
                        
                        if (sub_142879ae0(arg1, arg_20) != 0)
                            int64_t* rcx_11 = *(arg1 + 0x460)
                            arg_20 = nullptr
                            sub_1428921c0(rcx_11)
                            *(arg1 + 0x460) = 0
                            
                            if (sub_142875450(arg1, &var_48, 0x800, &arg_20, nullptr, 1) == 0)
                                sub_1428a6780(arg_20)
                                r13_1 = 0
                            else if (sub_142875b50(arg1, 0x800, arg_20, 0, 0, 1) == 0)
                                sub_1428a6780(arg_20)
                                r13_1 = 0
                            else
                                sub_1428a6780(arg_20)
                                arg_20 = nullptr
                                
                                if (*(arg1 + 0x6f8) != 0 || *(*(arg1 + 0xa8) + 0x240) == 0)
                                    if (sub_14285e030(arg1, nullptr, 0, 0, 0) == 0)
                                        sub_1428a6780(arg_20)
                                        r13_1 = 0
                                    else if (sub_142882640(arg1, *(*(arg1 + 0x88) + 8), 
                                            *(arg1 + 0x98) + 4) == 0)
                                        sub_1428a6780(arg_20)
                                        r13_1 = 0
                                else
                                    sub_142856580(arg1, 0x2f, 0x262, 0xd6, 
                                        "ssl\statem\statem_clnt.c", 0x700)
                                    sub_1428a6780(arg_20)
                                    r13_1 = 0
                            
                            return zx.q(r13_1)
                else
                    sub_142856580(arg1, 0x2f, 0x171, 0x155, "ssl\statem\statem_clnt.c", 0x5e2)
        else
            var_48 = rcx_4 - 3
            void* var_40_1 = rcx_4 - 3
        label_14287d15c:
            var_70 = 1
            
            if (sub_142875450(arg1, &var_48, 0x300, &var_68, nullptr, 1) != 0
                    && sub_14285ec60(arg1, arg_18, var_68) != 0)
                goto label_14287d19f
sub_1428a6780(var_68)
return 0
