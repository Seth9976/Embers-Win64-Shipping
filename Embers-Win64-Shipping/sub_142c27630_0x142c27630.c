// 函数: sub_142c27630
// 地址: 0x142c27630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg3.d
void* rbx = arg1
uint64_t result

if (arg3.d u< 0x3fffffff && sub_142bf7510(arg2, arg1, (arg3 << 2).d).b != 0)
    int32_t rsi = 0
    
    if (rbp == 0)
    label_142c277b2:
        result.b = 1
    else
        while (true)
            int64_t r8_1 = *(arg2 + 8)
            int32_t rcx_1
            
            if (r8_1 u<= rbx && rbx u<= *(arg2 + 0x10) && arg2[4] - rbx.d u>= 4)
                rcx_1 = arg2[6]
                arg2[6] = rcx_1 - 1
            
            char r10_1
            
            if (r8_1 u> rbx || rbx u> *(arg2 + 0x10) || arg2[4] - rbx.d u< 4 || rcx_1 s<= 0)
                r10_1 = 0
            else
                r10_1 = 1
            
            char const* const rax_3 = "OUT-OF-RANGE"
            
            if (r10_1 != 0)
                rax_3 = &data_14369cdc0
            
            char const* const var_38_1 = rax_3
            uint64_t var_40_1 = *(arg2 + 0x10)
            int64_t var_48_1 = r8_1
            int32_t var_50_1 = 4
            void* var_58_1 = rbx + 4
            void* var_60_1 = rbx
            char const* const var_68_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
            int64_t var_70_1 = 0
            int32_t var_78_1 = *arg2 + 1
            
            if (r10_1 != 0 && sub_142bf7510(arg2, arg4, 
                    (zx.d(*rbx) << 0x18) + (zx.d(*(rbx + 1)) << 0x10) + (zx.d(*(rbx + 2)) << 8)
                        + zx.d(*(rbx + 3))).b != 0 && sub_142c25530(
                    zx.q(*(rbx + 3))
                        + ((zx.q(*(rbx + 2)) + (((zx.q(*rbx) << 8) + zx.q(*(rbx + 1))) << 8)) << 8)
                        + arg4, 
                    arg2).b != 0)
                rsi += 1
                rbx += 4
                
                if (rsi u>= rbp)
                    goto label_142c277b2
                
                continue
            
            result.b = 0
            break
    
    return result

result.b = 0
return result
