// 函数: sub_142c2e810
// 地址: 0x142c2e810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg3.d
uint64_t result

if (arg3.d u< 0x1fffffff && sub_142bf7510(arg2, arg1, (arg3 << 3).d).b != 0)
    int64_t rsi
    int64_t arg_8 = rsi
    int32_t rdi = 0
    
    if (rbp == 0)
    label_142c2e95b:
        result.b = 1
    else
        while (true)
            int64_t r8_1 = *(arg2 + 8)
            void* r10_1 = arg1 + (zx.q(rdi) << 3)
            int32_t rcx_1
            
            if (r8_1 u<= r10_1 && r10_1 u<= *(arg2 + 0x10) && arg2[4] - r10_1.d u>= 8)
                rcx_1 = arg2[6]
                arg2[6] = rcx_1 - 1
            
            if (r8_1 u> r10_1 || r10_1 u> *(arg2 + 0x10) || arg2[4] - r10_1.d u< 8 || rcx_1 s<= 0)
                rsi.b = 0
            else
                rsi.b = 1
            
            char const* const rax_5 = "OUT-OF-RANGE"
            
            if (rsi.b != 0)
                rax_5 = &data_14369cdc0
            
            char const* const var_38_1 = rax_5
            uint64_t var_40_1 = *(arg2 + 0x10)
            int64_t var_48_1 = r8_1
            int32_t var_50_1 = 8
            void* var_58_1 = r10_1 + 8
            void* var_60_1 = r10_1
            char const* const var_68_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
            int64_t var_70_1 = 0
            int32_t var_78_1 = *arg2 + 1
            
            if (rsi.b != 0
                    && sub_142c2e250(r10_1 + 6, arg2, arg4, (zx.d(arg5) << 8) + zx.d(arg6)).b != 0)
                rdi += 1
                
                if (rdi u>= rbp)
                    goto label_142c2e95b
                
                continue
            
            result.b = 0
            break
    
    return result

result.b = 0
return result
