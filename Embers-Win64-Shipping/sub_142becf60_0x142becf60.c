// 函数: sub_142becf60
// 地址: 0x142becf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int32_t i = *(arg1 + 0x110); i s< *(arg1 + 0x114); i += 1)
    int32_t r10_1 = *(arg1 + 0x108)
    int32_t rsi_1 = 0
    int32_t* j = *(*(arg1 + 0x128) + (sx.q(i - *(arg1 + 0x110)) << 3))
    
    if (j != 0)
        int32_t var_38
        
        do
            if (rsi_1 != 0)
                int32_t r8_1 = *j
                
                if (r8_1 s> r10_1)
                    int32_t r8_2 = r8_1 - r10_1
                    int32_t rdx_2 = rsi_1 s>> 9
                    
                    if (rdx_2 s< 0)
                        rdx_2 = 0xffffffff - rdx_2
                    
                    if ((*(arg1 + 0x170) & 2) != 0)
                        rdx_2 &= 0x1ff
                        
                        if (rdx_2 s>= 0x100)
                            rdx_2 = 0x1ff - rdx_2
                    else if (rdx_2 s>= 0x100)
                        rdx_2 = 0xff
                    
                    int64_t rax_5 = *(arg1 + 0x188)
                    
                    if (rax_5 == 0)
                        char* r9_4 = *(arg1 + 0x178) - sx.q(*(arg1 + 0x180) * i) + sx.q(r10_1)
                        
                        if (r8_2 u> 7)
                            memset(r9_4, zx.d(rdx_2.b), sx.q(r8_2))
                        else
                            switch (r8_2)
                                case 1
                                    *r9_4 = rdx_2.b
                                case 2
                                    goto label_142bed0ac
                                case 3
                                    goto label_142bed0a6
                                case 4
                                    goto label_142bed0a0
                                case 5
                                    goto label_142bed09a
                                case 6
                                    goto label_142bed094
                                case 7
                                    *r9_4 = rdx_2.b
                                    r9_4 = &r9_4[1]
                                label_142bed094:
                                    *r9_4 = rdx_2.b
                                    r9_4 = &r9_4[1]
                                label_142bed09a:
                                    *r9_4 = rdx_2.b
                                    r9_4 = &r9_4[1]
                                label_142bed0a0:
                                    *r9_4 = rdx_2.b
                                    r9_4 = &r9_4[1]
                                label_142bed0a6:
                                    *r9_4 = rdx_2.b
                                    r9_4 = &r9_4[1]
                                label_142bed0ac:
                                    *r9_4 = rdx_2.b
                                    r9_4[1] = rdx_2.b
                    else
                        int64_t r9_1 = *(arg1 + 0x190)
                        int16_t arg_a = r8_2.w
                        char arg_c = rdx_2.b
                        int16_t arg_8 = r10_1.w
                        rax_5(zx.q(i), 1, &arg_8, r9_1, var_38)
            
            rsi_1 += j[1] << 9
            
            if (rsi_1 != j[2])
                int64_t r9_5 = sx.q(*j)
                
                if (r9_5.d s>= *(arg1 + 0x108))
                    int64_t rax = zx.q((rsi_1 - j[2]) s>> 9)
                    
                    if (rax.d s< 0)
                        rax = zx.q(0xffffffff - rax.d)
                    
                    if ((*(arg1 + 0x170) & 2) != 0)
                        rax = zx.q(rax.d) & 0x1ff
                        
                        if (rax.d s>= 0x100)
                            rax = zx.q(0x1ff - rax.d)
                    else if (rax.d s>= 0x100)
                        rax = 0xff
                    
                    int64_t r10_2 = *(arg1 + 0x188)
                    
                    if (r10_2 == 0)
                        (*(arg1 + 0x178) - sx.q(*(arg1 + 0x180) * i))[r9_5] = rax.b
                    else
                        int16_t arg_10 = r9_5.w
                        int16_t arg_12 = 1
                        char arg_14 = rax.b
                        r10_2(zx.q(i), 1, &arg_10, *(arg1 + 0x190), var_38)
            
            int32_t r10_3 = *j
            j = *(j + 0x10)
            r10_1 = r10_3 + 1
        while (j != 0)
        
        if (rsi_1 != 0)
            var_38 = *(arg1 + 0x10c) - r10_1
            sub_142bec470(arg1, r10_1, i, rsi_1, var_38)
