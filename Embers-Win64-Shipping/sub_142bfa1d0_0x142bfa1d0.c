// 函数: sub_142bfa1d0
// 地址: 0x142bfa1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg3.d
uint64_t result

if (arg3.d u< 0x15555555 && sub_142bf7510(arg2, arg1, (arg3 * 3).d << 2).b != 0)
    int32_t rbp = 0
    
    if (r14 == 0)
    label_142bfa363:
        result.b = 1
    else
        char* rdi_1 = arg1 + 7
        
        while (true)
            int64_t r9 = *(arg2 + 8)
            int32_t rcx_1
            
            if (r9 u<= &rdi_1[-7] && &rdi_1[-7] u<= *(arg2 + 0x10)
                    && arg2[4] - (&rdi_1[-7]).d u>= 0xc)
                rcx_1 = arg2[6]
                arg2[6] = rcx_1 - 1
            
            char r10_1
            
            if (r9 u> &rdi_1[-7] || &rdi_1[-7] u> *(arg2 + 0x10) || arg2[4] - (&rdi_1[-7]).d u< 0xc
                    || rcx_1 s<= 0)
                r10_1 = 0
            else
                r10_1 = 1
            
            char const* const rax_3 = "OUT-OF-RANGE"
            
            if (r10_1 != 0)
                rax_3 = &data_14369cdc0
            
            char const* const var_38_1 = rax_3
            uint64_t var_40_1 = *(arg2 + 0x10)
            int64_t var_48_1 = r9
            int32_t var_50_1 = 0xc
            void* var_58_1 = &rdi_1[5]
            void* var_60_1 = &rdi_1[-7]
            char const* const var_68_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
            int64_t var_70_1 = 0
            int32_t var_78_1 = *arg2 + 1
            
            if (r10_1 != 0 && sub_142bfacd0(&rdi_1[-2], arg2, arg4).b != 0 && sub_142bfa9b0(
                    zx.q(*rdi_1) + ((zx.q(rdi_1[-1]) + (zx.q(rdi_1[-2]) << 8)) << 8) + arg4, arg2).b != 0
                    && sub_142bfa5f0(
                    zx.q(*rdi_1) + ((zx.q(rdi_1[-1]) + (zx.q(rdi_1[-2]) << 8)) << 8) + 4 + arg4, 
                    arg2).b != 0)
                rbp += 1
                rdi_1 = &rdi_1[0xc]
                
                if (rbp u>= r14)
                    goto label_142bfa363
                
                continue
            
            result.b = 0
            break
    
    return result

result.b = 0
return result
