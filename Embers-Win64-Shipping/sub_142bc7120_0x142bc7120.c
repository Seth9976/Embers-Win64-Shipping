// 函数: sub_142bc7120
// 地址: 0x142bc7120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg3)
int32_t rax = sub_142b97060(arg2, arg4, arg5)
int32_t var_18 = rax

if (rax == 0)
    uint32_t rcx_2 = zx.d(sub_142b96f00(arg2, &var_18))
    rax = var_18
    
    if (rax == 0)
        if (rsi.d u>= rcx_2)
            return 6
        
        rax = sub_142b970b0(arg2, (rsi * 5).d)
        var_18 = rax
        
        if (rax == 0)
            uint64_t rsi_1 = zx.q(sub_142b96f00(arg2, &var_18))
            rax = var_18
            
            if (rax == 0)
                int32_t rax_4 = sub_142b96e70(arg2, &var_18)
                rax = var_18
                
                if (rax == 0)
                    *arg1 = rsi_1.d
                    arg1[1] = rax_4
                    rax = sub_142b97060(arg2, rax_4, arg5)
                    var_18 = rax
                    
                    if (rax == 0)
                        rax = sub_142b96500(arg2, rsi_1.d)
                        var_18 = rax
                        
                        if (rax == 0)
                            char* rax_5 = arg2[7]
                            void* r8 = &rax_5[rsi_1]
                            
                            if (&rax_5[0xd] u> r8)
                                var_18 = 8
                            else
                                int32_t r11_1 = 0
                                arg1[2] = (zx.d(*rax_5) << 8 | zx.d(rax_5[1])) << 8 | zx.d(rax_5[2])
                                arg1[3] =
                                    (zx.d(rax_5[3]) << 8 | zx.d(rax_5[4])) << 8 | zx.d(rax_5[5])
                                arg1[4] =
                                    (zx.d(rax_5[6]) << 8 | zx.d(rax_5[7])) << 8 | zx.d(rax_5[8])
                                uint64_t rcx_17 = 0
                                arg1[5] =
                                    (zx.d(rax_5[9]) << 8 | zx.d(rax_5[0xa])) << 8 | zx.d(rax_5[0xb])
                                uint32_t r9 = zx.d(rax_5[0xc])
                                void* rax_6 = &rax_5[0xd]
                                int32_t rdx_28 = r9 & 4
                                
                                if (rdx_28 != 0)
                                    int32_t rcx_18
                                    rcx_18.b = (r9.b & 8) != 0
                                    rcx_17 = zx.q(rcx_18 + 1)
                                    
                                    if ((r9.b & 3) == 0)
                                        rcx_17 = zx.q(rcx_17.d + 3)
                                
                                int32_t r10_2 = r9 & 0x10
                                
                                if (r10_2 != 0)
                                    rcx_17 = zx.q(rcx_17.d + 1)
                                    
                                    if ((r9.b & 0x20) != 0)
                                        rcx_17 = zx.q(rcx_17.d + 1)
                                
                                if (rcx_17 + rax_6 u> r8)
                                    var_18 = 8
                                else
                                    if (rdx_28 != 0)
                                        int32_t rdx_30
                                        
                                        if ((r9.b & 8) == 0)
                                            rdx_30 = zx.d(*rax_6)
                                            rax_6 += 1
                                        else
                                            uint16_t rcx_20 = zx.w(*rax_6)
                                            rax_6 += 2
                                            rdx_30 = sx.d(rcx_20 << 8) | zx.d(*(rax_6 - 1))
                                        
                                        arg1[7] = rdx_30
                                        
                                        if ((r9.b & 3) == 0)
                                            uint32_t rcx_22 = zx.d(*(rax_6 + 1))
                                            rax_6 += 3
                                            arg1[9] = (zx.d(*(rax_6 - 3)) << 8 | rcx_22) << 8
                                                | zx.d(*(rax_6 - 1))
                                    
                                    if (r10_2 != 0)
                                        int32_t rdx_37
                                        
                                        if ((r9.b & 0x20) == 0)
                                            rdx_37 = zx.d(*rax_6)
                                            rax_6 += 1
                                        else
                                            uint16_t rcx_24 = zx.w(*rax_6)
                                            rax_6 += 2
                                            rdx_37 = sx.d(rcx_24 << 8) | zx.d(*(rax_6 - 1))
                                        
                                        arg1[8] = rdx_37
                                    
                                    if ((r9.b & 0x40) == 0)
                                    label_142bc738b:
                                        
                                        if (rax_6 + 5 u> r8)
                                            var_18 = 8
                                        else
                                            arg1[0xa] = zx.d(*rax_6) << 8 | zx.d(*(rax_6 + 1))
                                            arg1[0xb] =
                                                (zx.d(*(rax_6 + 2)) << 8 | zx.d(*(rax_6 + 3))) << 8
                                                | zx.d(*(rax_6 + 4))
                                            
                                            if (arg6 != 0)
                                                if (rax_6 + 6 u> r8)
                                                    var_18 = 8
                                                else
                                                    arg1[0xa] += zx.d(*(rax_6 + 5)) << 0x10
                                    else
                                        if (rax_6 + 1 u> r8)
                                        label_142bc7377:
                                            r11_1 = 8
                                        else
                                            uint32_t i_1 = zx.d(*rax_6)
                                            rax_6 += 1
                                            
                                            if (i_1 != 0)
                                                uint32_t i
                                                
                                                do
                                                    void* rdx_38 = rax_6 + 2
                                                    
                                                    if (rdx_38 u> r8)
                                                        goto label_142bc7377
                                                    
                                                    uint64_t rcx_27 = zx.q(*rax_6)
                                                    rax_6 = rdx_38
                                                    void* rdx_39 = rdx_38 + rcx_27
                                                    
                                                    if (rdx_39 u> r8)
                                                        goto label_142bc7377
                                                    
                                                    rax_6 = rdx_39
                                                    i = i_1
                                                    i_1 -= 1
                                                while (i != 1)
                                        
                                        var_18 = r11_1
                                        
                                        if (r11_1 == 0)
                                            goto label_142bc738b
                            
                            sub_142b96620(arg2)
                            return var_18

return rax
