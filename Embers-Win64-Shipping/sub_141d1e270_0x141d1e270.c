// 函数: sub_141d1e270
// 地址: 0x141d1e270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
uint64_t result

if (sub_141d1f690(arg1, data_143f36fc8).d s> 0)
    int64_t r15_1 = 0
    
    while (true)
        sub_141d1f690(arg1, data_143f36fc8)
        int64_t i_2 = sx.q(*(*(arg1 + 0x2e0) + (r15_1 << 2)))
        int32_t rbx_2 = *(*(arg1 + 0x2f8) + (r15_1 << 2)) + i_2.d
        result = sub_141d1f690(arg1, data_143f36fd0)
        
        if (i_2.d s< result.d && rbx_2 s<= result.d)
            if (i_2.d s< rbx_2)
                int64_t i = i_2
                int32_t* rdx_3 = *(arg1 + 0x208) + (i_2 << 2)
                
                do
                    if (rbp != *(*(arg1 + 0x130) + (sx.q(*rdx_3) << 2)))
                        goto label_141d1e4f0
                    
                    i += 1
                    rdx_3 = &rdx_3[1]
                while (i s< sx.q(rbx_2))
            
            sub_141d1f690(arg1, data_143f36fc8)
            int64_t rsi_1 = sx.q(*(*(arg1 + 0x310) + (r15_1 << 2)))
            int32_t rbx_4 = *(*(arg1 + 0x328) + (r15_1 << 2)) + rsi_1.d
            result = sub_141d1f690(arg1, data_143f36fc0)
            
            if (rsi_1.d s< result.d && rbx_4 s<= result.d)
                int32_t r10_1 = *(*(arg1 + 0x2e0) + (r15_1 << 2))
                
                if (rsi_1.d s>= rbx_4)
                label_141d1e406:
                    sub_141d1f690(arg1, data_143f36fc8)
                    int64_t rsi_2 = sx.q(*(*(arg1 + 0x2e0) + (r15_1 << 2)))
                    int32_t rbx_7 = *(*(arg1 + 0x2f8) + (r15_1 << 2)) + rsi_2.d
                    result = sub_141d1f690(arg1, data_143f36fd0)
                    
                    if (rsi_2.d s< result.d && rbx_7 s<= result.d)
                        int64_t rdx_9 = 0
                        int64_t r8_3 = sx.q(result.d)
                        
                        if (result.d s> 0)
                            do
                                if ((rdx_9 s< rsi_2 || rdx_9 s>= sx.q(rbx_7)) && rbp == *(
                                        *(arg1 + 0x130)
                                        + (sx.q(*(*(arg1 + 0x208) + (rdx_9 << 2))) << 2)))
                                    goto label_141d1e4f0
                                
                                rdx_9 += 1
                            while (rdx_9 s< r8_3)
                        
                        int64_t i_1 = 0
                        int32_t rsi_3 = *(*(arg1 + 0x280) + (r15_1 << 2))
                        int32_t rax_14 = (*(*(arg1 + 0x278) + 0x48))(arg1 + 0x278, rdx_9, r8_3)
                        
                        if (rax_14 s> 0)
                            do
                                if (i_1 != r15_1 && *(*(arg1 + 0x280) + (i_1 << 2)) == rsi_3)
                                    goto label_141d1e4f0
                                
                                i_1 += 1
                            while (i_1 s< sx.q(rax_14))
                        
                        rbp += 1
                        r15_1 += 1
                        
                        if (rbp s>= sub_141d1f690(arg1, data_143f36fc8).d)
                            break
                        
                        continue
                else
                    int32_t* rbx_5 = *(arg1 + 0x220) + rsi_1 * 0xc
                    
                    while (true)
                        int32_t r9_2 = 0
                        int32_t* r8_2 = rbx_5
                        
                        while (true)
                            result = sx.q(*r8_2)
                            
                            if (result.d s< r10_1)
                                goto label_141d1e4f0
                            
                            if (result.d s>= *(*(arg1 + 0x2f8) + (r15_1 << 2)) + r10_1)
                                goto label_141d1e4f0
                            
                            if (rbp != *(*(arg1 + 0x130)
                                    + (sx.q(*(*(arg1 + 0x208) + (result << 2))) << 2)))
                                goto label_141d1e4f0
                            
                            r9_2 += 1
                            r8_2 = &r8_2[1]
                            
                            if (r9_2 s>= 3)
                                rsi_1 += 1
                                rbx_5 = &rbx_5[3]
                                
                                if (rsi_1 s< sx.q(rbx_4))
                                    break
                                
                                goto label_141d1e406
        
    label_141d1e4f0:
        result.b = 0
        return result

result.b = 1
return result
