// 函数: sub_142857f80
// 地址: 0x142857f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (sub_142852cd0(0x200000, nullptr) != 0)
    int32_t* rax_1 = sub_1428a6a70(0x1e0)
    
    if (rax_1 != 0)
        rax_1[0x44] = 1
        rax_1[0x45] = 1
        rax_1[0x46] = 0x130
        rax_1[0x47] = _time64(nullptr)
        CRITICAL_SECTION* rax_3 = sub_1428a5be0()
        *(rax_1 + 0x1d8) = rax_3
        
        if (rax_3 != 0)
            if (sub_1428a62f0(2, rax_1, &rax_1[0x50]) != 0)
                int32_t rax_7 = *(*(arg1 + 0x738) + 0x4c)
                
                if (rax_7 == 0)
                    rax_7 = sub_14284fa50(arg1)
                
                rax_1[0x46] = rax_7
                sub_1428574d0(*(arg1 + 0x508))
                *(arg1 + 0x508) = 0
                int32_t var_20_1
                int32_t r8_7
                int32_t r9_1
                
                if (arg2 == 0)
                label_142858275:
                    *(rax_1 + 0x90) = 0
                label_14285827c:
                    int64_t r8_11 = *(arg1 + 0x4e0)
                    
                    if (r8_11 u<= 0x20)
                        memcpy(&rax_1[0x30], &arg1[0x13a], r8_11.d)
                        *(rax_1 + 0xb8) = *(arg1 + 0x4e0)
                        int32_t rcx_22 = *arg1
                        *(arg1 + 0x508) = rax_1
                        *rax_1 = rcx_22
                        rax_1[0x44] = 0
                        
                        if ((**(arg1 + 0xa8) & 0x200) != 0)
                            rax_1[0x74] |= 1
                        
                        return 1
                    
                    r9_1 = 0x44
                    var_20_1 = 0x1ae
                    r8_7 = 0xb5
                else
                    int32_t* rcx_7 = *(arg1 + 8)
                    int32_t rax_9
                    
                    if ((*(*(rcx_7 + 0xc0) + 0x60) & 8) == 0)
                        rax_9 = *rcx_7
                    
                    if ((*(*(rcx_7 + 0xc0) + 0x60) & 8) == 0 && rax_9 s>= 0x304 && rax_9 != 0x10000)
                        goto label_142858275
                    
                    int32_t rcx_8 = *arg1
                    
                    if (rcx_8 == 0x100 || rcx_8 - 0x300 u<= 4 || rcx_8 == 0xfefd || rcx_8 == 0xfeff)
                        *(rax_1 + 0x90) = 0x20
                        
                        if (arg1[0x19c] != 0)
                            goto label_142858275
                        
                        sub_1428a5c40(*(arg1 + 0x1708))
                        sub_1428a5c40(*(*(arg1 + 0x738) + 0x378))
                        int64_t (* rsi_1)(int32_t* arg1, int64_t arg2, int32_t* arg3) =
                            *(arg1 + 0x528)
                        void* rcx_12 = *(arg1 + 0x738)
                        
                        if (rsi_1 == 0)
                            int64_t (* rax_11)(int32_t* arg1, int64_t arg2, int32_t* arg3) =
                                *(rcx_12 + 0x188)
                            rsi_1 = sub_142857a50
                            
                            if (rax_11 != 0)
                                rsi_1 = rax_11
                        
                        sub_1428a5d00(*(rcx_12 + 0x378))
                        sub_1428a5d00(*(arg1 + 0x1708))
                        memset(&rax_1[0x26], 0, *(rax_1 + 0x90))
                        int32_t arg_18 = rax_1[0x24]
                        
                        if (rsi_1(arg1, &rax_1[0x26], &arg_18) != 0)
                            uint64_t rax_14 = zx.q(arg_18)
                            
                            if (rax_14.d == 0 || rax_14 u> *(rax_1 + 0x90))
                                r8_7 = 0x223
                                var_20_1 = 0x177
                                r9_1 = 0x12f
                            else
                                *(rax_1 + 0x90) = rax_14
                                
                                if (sub_14284fd10(arg1, &rax_1[0x26], rax_14.d) == 0)
                                    goto label_14285827c
                                
                                r8_7 = 0x223
                                var_20_1 = 0x17f
                                r9_1 = 0x12e
                        else
                            r8_7 = 0x223
                            var_20_1 = 0x16d
                            r9_1 = 0x12d
                    else
                        r8_7 = 0x223
                        var_20_1 = 0x146
                        r9_1 = 0x103
                
                sub_142856580(arg1, 0x50, r8_7, r9_1, "ssl\ssl_sess.c", var_20_1)
                sub_1428574d0(rax_1)
                return 0
            
            sub_1428a5ba0(*(rax_1 + 0x1d8))
        else
            sub_1428a5670((&rax_3->OwningThread + 4).d, 0xbd, (rax_3 + 0x41).d, "ssl\ssl_sess.c", 
                0x54)
        
        sub_1428a6780(rax_1)
    else
        sub_1428a5670((&rax_1[5]).d, 0xbd, (rax_1 + 0x41).d, "ssl\ssl_sess.c", 0x4a)

sub_142856580(arg1, 0x50, 0xb5, 0x41, "ssl\ssl_sess.c", 0x18e)
return 0
