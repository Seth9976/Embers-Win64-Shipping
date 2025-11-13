// 函数: sub_1429be7e0
// 地址: 0x1429be7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg3)
uint64_t result

if (arg4 s< 0)
    result.b = 0
else
    int64_t r10_1 = sx.q(arg5)
    
    if (r10_1.d s< 0 || arg2 s< 0 || arg3 s< 0)
        result.b = 0
    else
        int32_t rdx = *arg1
        int64_t rax_4
        
        if (rdx == 0)
            if (arg4 != 0 || r10_1.d != 0)
                result.b = 0
            else
                int64_t* r8_4 = *(arg1 + 0x10)
                int64_t rax_9
                int64_t rdx_14
                rdx_14:rax_9 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x18) - r8_4)
                int64_t rdx_15 = rdx_14 s>> 2
                
                if (rdx_15 == neg.q(rdx_15 u>> 0x3f))
                    result.b = 0
                else
                    int64_t r9 = *r8_4
                    int64_t rax_11
                    int64_t rdx_17
                    rdx_17:rax_11 = muls.dp.q(0x2aaaaaaaaaaaaaab, r8_4[1] - r9)
                    int64_t rdx_18 = rdx_17 s>> 2
                    
                    if (rdx_18.d + (rdx_18 u>> 0x3f).d s<= r11.d)
                        result.b = 0
                    else
                        int64_t rcx_15 = r11 * 3
                        rax_4 = *(r9 + (rcx_15 << 3) + 8) - *(r9 + (rcx_15 << 3))
                    label_1429be9a9:
                        
                        if ((rax_4 s>> 3).d s<= arg2)
                            result.b = 0
                        else
                            result.b = 1
        else
            int64_t rdx_6
            int64_t r8_3
            
            if (rdx == 1)
                if (arg4 s>= arg1[1] || r10_1.d s>= arg1[2])
                    result.b = 0
                else
                    int64_t r10_2 = *(arg1 + 0x10)
                    int64_t rax_5
                    int64_t rdx_9
                    rdx_9:rax_5 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x18) - r10_2)
                    int64_t rdx_10 = rdx_9 s>> 2
                    
                    if (rdx_10.d + (rdx_10 u>> 0x3f).d s<= arg4)
                        result.b = 0
                    else
                        int64_t rcx_10 = sx.q(arg4) * 3
                        r8_3 = *(r10_2 + (rcx_10 << 3))
                        int64_t rax_8
                        rdx_6:rax_8 =
                            muls.dp.q(0x2aaaaaaaaaaaaaab, *(r10_2 + (rcx_10 << 3) + 8) - r8_3)
                    label_1429be8b3:
                        int64_t rdx_7 = rdx_6 s>> 2
                        
                        if (rdx_7.d + (rdx_7 u>> 0x3f).d s> r11.d)
                            int64_t rcx_7 = r11 * 3
                            rax_4 = *(r8_3 + (rcx_7 << 3) + 8) - *(r8_3 + (rcx_7 << 3))
                            goto label_1429be9a9
                        
                        result.b = 0
            else if (rdx != 2)
                result.b = 0
            else
                int64_t rsi_1 = sx.q(arg1[1])
                
                if (arg4 s>= rsi_1.d || r10_1.d s>= arg1[2])
                    result.b = 0
                else
                    int64_t r14_1 = *(arg1 + 0x10)
                    int64_t rdx_2
                    rdx_2:result = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x18) - r14_1)
                    int64_t rdx_3 = rdx_2 s>> 2
                    
                    if (rdx_3 + (rdx_3 u>> 0x3f) u> rsi_1 * r10_1 + sx.q(arg4))
                        int64_t rdx_5 = sx.q(rsi_1.d * r10_1.d + arg4) * 3
                        r8_3 = *(r14_1 + (rdx_5 << 3))
                        int64_t rax_1
                        rdx_6:rax_1 =
                            muls.dp.q(0x2aaaaaaaaaaaaaab, *(r14_1 + (rdx_5 << 3) + 8) - r8_3)
                        goto label_1429be8b3
                    
                    result.b = 0

return result
