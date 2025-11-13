// 函数: sub_142bc92f0
// 地址: 0x142bc92f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg2[4]
int64_t rdi = arg2[2]
char* result_2 = nullptr
char* result_1 = nullptr
int32_t r12 = 0
char arg_10 = 0
arg2[7](arg2)
char* result = *arg2
int32_t arg_18

if (result u>= rdi)
label_142bc9716:
    arg_18 = 3
    arg2[3].d = 3
else
    char rcx_1 = *result
    result = &result[1]
    *arg2 = result
    
    if (rcx_1 != 0x5b)
        goto label_142bc9716
    
    result = arg2[7](arg2)
    int32_t r8_1 = 0
    int32_t var_64_1 = 0
    int32_t r13_1 = 0
    int32_t arg_20 = 0
    int32_t rsi_1 = 0
    int64_t r9_1 = rdi
    
    if (*arg2 u>= rdi)
        goto label_142bc9716
    
    char* rdi_1 = nullptr
    
    while (true)
        char* r14_1 = *arg2
        result = zx.q(*r14_1)
        
        if (result.b == 0x5d)
            *arg2 += 1
        else
            int32_t rcx_18
            
            if (result.b != 0x3c)
                result = zx.q(zx.d(result.b) - 0x30)
                
                if (result.d u>= 0xa)
                    goto label_142bc94cb
                
                if (arg_10 != 0)
                label_142bc96f5:
                    rcx_18 = 3
                    arg_18 = 3
                label_142bc9701:
                    result_2 = result_1
                    arg2[3].d = rcx_18
                    break
                
                result = arg2[9](arg2)
                arg_20 = result.d
                
                if (result.d s< 0)
                    goto label_142bc96f5
                
                result = arg2[8](arg2)
                
                if (arg2[3].d != 0)
                    return result
                
                void* rdx_3 = *arg2
                r9_1 = rdi
                r8_1 = arg_20
                result_2 = rdx_3 + 1
                result_1 = result_2
                
                if (r9_1.d - rdx_3.d u<= r8_1)
                    goto label_142bc9716
                
                *arg2 = zx.q(r8_1 + 1) + rdx_3
                goto label_142bc94cb
            
            result = result_1
            int32_t rcx_5
            
            if (result != 0 && arg_10 == 0)
            label_142bc96e0:
                rcx_5 = 3
                arg_18 = 3
            label_142bc96ec:
                result_2 = result
                arg2[3].d = rcx_5
                break
            
            result = arg2[8](arg2)
            
            if (arg2[3].d == 0)
                int64_t rax_4
                int64_t rdx
                rdx:rax_4 = sx.o(*arg2 - r14_1 - 1)
                result = (rax_4 - rdx) s>> 1
                int32_t rbp = result.d
                
                if (result.d == 0)
                    goto label_142bc96f5
                
                result = sub_142b99a90(rax, 1, var_64_1, rbp, result_1, &arg_18)
                rcx_5 = arg_18
                result_1 = result
                
                if (rcx_5 != 0)
                    goto label_142bc96ec
                
                arg_10 = 1
                *arg2 = r14_1
                int32_t var_60
                arg2[0xb](arg2, result, zx.q(rbp), &var_60, 1)
                r8_1 = var_60
                r9_1 = rdi
                arg_20 = r8_1
                var_64_1 = rbp
            label_142bc94cb:
                result = result_1
                
                if (result == 0)
                    goto label_142bc96e0
                
                if ((r8_1.b & 1) != 0)
                    uint64_t rcx_13 = zx.q(r8_1 - 1)
                    
                    if (result[rcx_13] == 0)
                        r8_1 = rcx_13.d
                    
                    arg_20 = r8_1
                
                if (r8_1 == 0)
                    goto label_142bc96f5
                
                int32_t rdx_5 = 0
                int32_t rbp_2 = r9_1.d - *arg2
                int32_t var_68_1 = 0
                
                if (r8_1 != 0)
                    char* result_3 = result
                    
                    do
                        void* rcx_16
                        
                        if (r13_1 == 0)
                            rcx_16 = *(arg1 + 0x2a8)
                            
                            if (rdi_1 s< 0xc)
                                goto label_142bc96a4
                            
                            r13_1 = 1
                            result = zx.q(*(rcx_16 + 5))
                            r12 = (zx.d(*(rcx_16 + 4)) << 4) + result.d
                            *(arg1 + 0x2b0) = (r12 << 4) + 0xc
                            
                            if (rbp_2 s< (r12 << 4) + 0xc)
                                goto label_142bc96f5
                            
                            result = sub_142b99a90(rax, 1, 0xc, (r12 << 4) + 0xc, rcx_16, &arg_18)
                            rcx_18 = arg_18
                            *(arg1 + 0x2a8) = result
                            
                            if (rcx_18 != 0)
                                goto label_142bc9701
                            
                            r8_1 = arg_20
                            rdx_5 = var_68_1
                            goto label_142bc95bd
                        
                        if (r13_1 == 1)
                        label_142bc95bd:
                            
                            if (rsi_1 s>= *(arg1 + 0x2b0))
                                int64_t i = 0
                                
                                if (r12 s> 0)
                                    void* rdx_7 = *(arg1 + 0x2a8) + 0x1a
                                    
                                    do
                                        result = zx.q((
                                            (zx.d(*(rdx_7 - 2)) << 8 | zx.d(*(rdx_7 - 1))) << 8
                                            | zx.d(*rdx_7)) << 8) | zx.q(*(rdx_7 + 1))
                                        
                                        if (result.d u> rbp_2)
                                            goto label_142bc96f5
                                        
                                        int32_t r8_4 = *(arg1 + 0x2b0)
                                        
                                        if (r8_4 s> rbp_2 - result.d)
                                            goto label_142bc96f5
                                        
                                        i += 1
                                        rdx_7 += 0x10
                                        *(arg1 + 0x2b0) = ((result.d + 3) & 0xfffffffc) + r8_4
                                    while (i s< sx.q(r12))
                                
                                r13_1 = 2
                                result = sub_142b99a90(rax, 1, (r12 << 4) + 0xc, 
                                    *(arg1 + 0x2b0) + 1, *(arg1 + 0x2a8), &arg_18)
                                rcx_18 = arg_18
                                *(arg1 + 0x2a8) = result
                                
                                if (rcx_18 != 0)
                                    goto label_142bc9701
                                
                                r8_1 = arg_20
                                rdx_5 = var_68_1
                                goto label_142bc9695
                            
                        label_142bc969d:
                            rcx_16 = *(arg1 + 0x2a8)
                        label_142bc96a4:
                            result = zx.q(*result_3)
                            rsi_1 += 1
                            *(rdi_1 + rcx_16) = result.b
                            rdi_1 = &rdi_1[1]
                        else if (r13_1 == 2)
                        label_142bc9695:
                            
                            if (rsi_1 s>= *(arg1 + 0x2b0))
                                goto label_142bc96f5
                            
                            goto label_142bc969d
                        
                        rdx_5 += 1
                        result_3 = &result_3[1]
                        var_68_1 = rdx_5
                    while (rdx_5 u< r8_1)
                
                result = arg2[7](arg2, rdx_5)
                r9_1 = rdi
                
                if (*arg2 u>= r9_1)
                    result_2 = result_1
                    goto label_142bc9716
                
                r8_1 = arg_20
                continue
        
        result_2 = result_1
        break

if (arg_10 == 0)
    return result

return sub_142b99980(rax, result_2)
