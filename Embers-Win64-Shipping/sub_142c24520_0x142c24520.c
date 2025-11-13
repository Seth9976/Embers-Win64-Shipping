// 函数: sub_142c24520
// 地址: 0x142c24520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_142bf7510(arg2, arg1, 2) != 0
        && sub_142bf7510(arg2, &arg1[2], ((zx.d(*arg1) << 8) + zx.d(arg1[1])) * 6) != 0)
    uint64_t result = zx.q(arg1[1])
    uint32_t rbp_1 = zx.d(*arg1) << 8
    int32_t rdi = 0
    
    if (rbp_1 == neg.d(result.d))
    label_142c24683:
        result.b = 1
    else
        while (true)
            int64_t r8_2 = *(arg2 + 8)
            void* r10_3 = &arg1[(zx.q(rdi) * 3 + 1) << 1]
            int32_t rcx_2
            
            if (r8_2 u<= r10_3 && r10_3 u<= *(arg2 + 0x10) && arg2[4] - r10_3.d u>= 6)
                rcx_2 = arg2[6]
                arg2[6] = rcx_2 - 1
            
            char r11_1
            
            if (r8_2 u> r10_3 || r10_3 u> *(arg2 + 0x10) || arg2[4] - r10_3.d u< 6 || rcx_2 s<= 0)
                r11_1 = 0
            else
                r11_1 = 1
            
            char const* const rax_6 = "OUT-OF-RANGE"
            
            if (r11_1 != 0)
                rax_6 = &data_14369cdc0
            
            char const* const var_38_1 = rax_6
            uint64_t var_40_1 = *(arg2 + 0x10)
            int64_t var_48_1 = r8_2
            int32_t var_50_1 = 6
            void* var_58_1 = r10_3 + 6
            void* var_60_1 = r10_3
            char const* const var_68_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
            int64_t var_70_1 = 0
            int32_t var_78_1 = *arg2 + 1
            
            if (r11_1 != 0 && sub_142c260e0(r10_3 + 2, arg2, arg3).b != 0)
                rdi += 1
                
                if (rdi u>= rbp_1 + result.d)
                    goto label_142c24683
                
                continue
            
            result.b = 0
            break
    
    return result

return 0
