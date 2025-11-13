// 函数: sub_142c341f0
// 地址: 0x142c341f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
uint64_t result

if (arg3 u< 0x7fffffff && sub_142bf7510(arg2, arg1, arg3 * 2).b != 0)
    int32_t rsi = 0
    
    if (arg3 == 0)
    label_142c34340:
        result.b = 1
    else
        while (true)
            int64_t r8_1 = *(arg2 + 8)
            int32_t rcx_1
            
            if (r8_1 u<= rbx && rbx u<= *(arg2 + 0x10) && arg2[4] - rbx.d u>= 2)
                rcx_1 = arg2[6]
                arg2[6] = rcx_1 - 1
            
            char r10_1
            
            if (r8_1 u> rbx || rbx u> *(arg2 + 0x10) || arg2[4] - rbx.d u< 2 || rcx_1 s<= 0)
                r10_1 = 0
            else
                r10_1 = 1
            
            char const* const rax_3 = "OUT-OF-RANGE"
            
            if (r10_1 != 0)
                rax_3 = &data_14369cdc0
            
            char const* const var_38_1 = rax_3
            uint64_t var_40_1 = *(arg2 + 0x10)
            int64_t var_48_1 = r8_1
            int32_t var_50_1 = 2
            void* var_58_1 = rbx + 2
            void* var_60_1 = rbx
            char const* const var_68_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
            int64_t var_70_1 = 0
            int32_t var_78_1 = *arg2 + 1
            
            if (r10_1 != 0 && sub_142bf7510(arg2, arg4, (zx.d(*rbx) << 8) + zx.d(*(rbx + 1))).b != 0
                    && sub_142bfaab0(zx.q(*(rbx + 1)) + (zx.q(*rbx) << 8) + arg4, arg2).b != 0)
                rsi += 1
                rbx += 2
                
                if (rsi u>= arg3)
                    goto label_142c34340
                
                continue
            
            result.b = 0
            break
    
    return result

result.b = 0
return result
