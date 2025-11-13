// 函数: sub_142c24220
// 地址: 0x142c24220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2) != 0
        && sub_142bf7510(arg2, &arg1[2], ((zx.d(*arg1) << 8) + zx.d(arg1[1])) * 6) != 0)
    uint64_t result = zx.q(arg1[1])
    int32_t rbp = 0
    uint32_t r14_1 = zx.d(*arg1) << 8
    int32_t r14_2 = r14_1 + result.d
    
    if (r14_1 == neg.d(result.d))
    label_142c243f4:
        result.b = 1
    else
        void* rdi_1 = &arg1[6]
        
        while (true)
            int64_t r9_1 = *(arg2 + 8)
            int32_t rcx_2
            
            if (r9_1 u<= rdi_1 - 4 && rdi_1 - 4 u<= *(arg2 + 0x10) && arg2[4] - (rdi_1 - 4).d u>= 6)
                rcx_2 = arg2[6]
                arg2[6] = rcx_2 - 1
            
            char r10_1
            
            if (r9_1 u> rdi_1 - 4 || rdi_1 - 4 u> *(arg2 + 0x10) || arg2[4] - (rdi_1 - 4).d u< 6
                    || rcx_2 s<= 0)
                r10_1 = 0
            else
                r10_1 = 1
            
            char const* const rax_5 = "OUT-OF-RANGE"
            
            if (r10_1 != 0)
                rax_5 = &data_14369cdc0
            
            char const* const var_38_1 = rax_5
            uint64_t var_40_1 = *(arg2 + 0x10)
            int64_t var_48_1 = r9_1
            int32_t var_50_1 = 6
            void* var_58_1 = rdi_1 + 2
            void* var_60_1 = rdi_1 - 4
            char const* const var_68_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
            int64_t var_70_1 = 0
            int32_t var_78_1 = *arg2 + 1
            
            if (r10_1 != 0)
                result = sub_142c294c0(rdi_1, arg2, arg3)
                
                if (result.b != 0)
                    uint16_t rdx_7 = zx.w(*rdi_1)
                    uint64_t r8_6 = zx.q(*(rdi_1 + 1))
                    
                    if (0 == rdx_7 * 0x100 + r8_6.w)
                        goto label_142c243e5
                    
                    char* rsi_4 = (zx.q(rdx_7.b) << 8) + arg3 + r8_6
                    bool rax_6 = sub_142c26320(rsi_4, arg2, rsi_4)
                    
                    if (rax_6 != 0)
                        result = sub_142c24140(&rsi_4[2], arg2, rsi_4)
                    
                    if (rax_6 != 0 && result.b != 0)
                        goto label_142c243e5
                    
                    if (sub_142bf99e0(arg2, rdi_1, 2).b != 0)
                        *rdi_1 = 0
                    label_142c243e5:
                        rbp += 1
                        rdi_1 += 6
                        
                        if (rbp u>= r14_2)
                            goto label_142c243f4
                        
                        continue
            
            result.b = 0
            break
    
    return result

return 0
