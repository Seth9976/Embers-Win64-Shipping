// 函数: sub_142c39920
// 地址: 0x142c39920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg3 + 0x60)
int32_t r14_1 = *(arg3 + 0x38) & 0xfffffffe
uint64_t result = *(arg3 + 0x70)
void* rdx = *(arg3 + 0x80)

if (i_2 != 0)
    int64_t rbx
    int64_t arg_8 = rbx
    uint64_t i_1 = zx.q(i_2)
    int32_t* rsi_1 = rdx + 4
    int16_t* r15_1 = result - rdx + 0xc
    uint64_t i
    
    do
        int16_t rcx = *(r15_1 + rsi_1)
        result.b = rcx.b & 0x1f
        
        if (result.b == 0x1d)
            result.b = *(r15_1 + rsi_1 - 4) u>> 5
            
            if ((result.b & 1) == 0)
                uint32_t r8_1 = zx.d(rcx) u>> 8
                result = zx.q(r8_1 - 1)
                
                if (result.d u<= 0x14)
                    result = zx.q(lookup_table_142c39ba4[sx.q(result.d)])
                    int64_t var_38_1
                    int32_t arg_18
                    
                    switch (result)
                        case 0
                            uint32_t rax_3 = r8_1 u>> 1
                            
                            if (r14_1 != 4)
                                result = zx.q(neg.d(divs.dp.d(sx.q(rax_3 + *(arg2 + 0x24)), r8_1)))
                                *rsi_1 = result.d
                            else
                                result = zx.q(divs.dp.d(sx.q(rax_3 + *(arg2 + 0x20)), r8_1))
                                rsi_1[-1] = result.d
                        case 1
                            if (r14_1 != 4)
                                int64_t rax_13
                                int64_t rdx_7
                                rdx_7:rax_13 =
                                    muls.dp.q(0xe38e38e38e38e39, sx.q(neg.d(*(arg2 + 0x24))) << 2)
                                result = rdx_7 u>> 0x3f
                                *rsi_1 = rdx_7.d + result.d
                            else
                                int64_t rax_9
                                int64_t rdx_5
                                rdx_5:rax_9 =
                                    muls.dp.q(0xe38e38e38e38e39, sx.q(*(arg2 + 0x20)) << 2)
                                result = rdx_5 u>> 0x3f
                                rsi_1[-1] = rdx_5.d + result.d
                        case 2
                            rbx.b = 0x30
                            
                            while (true)
                                void* r10_1 = *(arg2 + 0x40)
                                int64_t rdx_9 = *(arg2 + 0x48)
                                arg_18 = 0
                                var_38_1 = *(r10_1 + 0x20)
                                result = (*(r10_1 + 0x130))(arg2, rdx_9, zx.q(sx.d(rbx.b)), 
                                    &arg_18, var_38_1)
                                
                                if (result.d != 0)
                                    break
                                
                                rbx.b += 1
                                
                                if (rbx.b s> 0x39)
                                    goto label_142c39b55
                            
                            goto label_142c39b06
                        case 3
                            void* r10_2 = *(arg2 + 0x40)
                            int64_t rdx_10 = *(arg2 + 0x48)
                            arg_18 = 0
                            var_38_1 = *(r10_2 + 0x20)
                            
                            if ((*(r10_2 + 0x130))(arg2, rdx_10, 0x2e, &arg_18, var_38_1) != 0)
                            label_142c39b06:
                                void* rax_19 = *(arg2 + 0x40)
                                uint64_t r8_3 = zx.q(arg_18)
                                int64_t rdx_12 = *(arg2 + 0x48)
                                
                                if (r14_1 != 4)
                                    result = (*(rax_19 + 0x150))(arg2, rdx_12, r8_3, 
                                        *(rax_19 + 0x40), var_38_1)
                                    *rsi_1 = result.d
                                else
                                    result = (*(rax_19 + 0x148))(arg2, rdx_12, r8_3, 
                                        *(rax_19 + 0x38), var_38_1)
                                    rsi_1[-1] = result.d
                            else
                                void* r10_3 = *(arg2 + 0x40)
                                int64_t rdx_11 = *(arg2 + 0x48)
                                arg_18 = 0
                                var_38_1 = *(r10_3 + 0x20)
                                result = (*(r10_3 + 0x130))(arg2, rdx_11, 0x2c, &arg_18, var_38_1)
                                
                                if (result.d != 0)
                                    goto label_142c39b06
                        case 4
                            if (r14_1 != 4)
                                int32_t temp15_1
                                int32_t temp16_1
                                temp15_1:temp16_1 = sx.q(*rsi_1)
                                result = zx.q((temp16_1 - temp15_1) s>> 1)
                                *rsi_1 = result.d
                            else
                                int32_t temp17_1
                                int32_t temp18_1
                                temp17_1:temp18_1 = sx.q(rsi_1[-1])
                                result = zx.q((temp18_1 - temp17_1) s>> 1)
                                rsi_1[-1] = result.d
        
    label_142c39b55:
        rsi_1 = &rsi_1[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
