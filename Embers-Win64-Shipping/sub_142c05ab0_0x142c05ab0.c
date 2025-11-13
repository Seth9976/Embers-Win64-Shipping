// 函数: sub_142c05ab0
// 地址: 0x142c05ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_142bf7510(arg2, arg1, 1)

if (result.b == 0)
    return result

int32_t r10 = 0

if (arg2[0xc] u<= 0)
label_142c05bc7:
    result.b = 1
else
    while (true)
        int64_t r9_1 = *(arg2 + 8)
        int64_t rdx_2 = zx.q(r10) + arg1
        int32_t rcx_1
        
        if (r9_1 u<= rdx_2 && rdx_2 u<= *(arg2 + 0x10) && arg2[4] - rdx_2.d u>= 1)
            rcx_1 = arg2[6]
            arg2[6] = rcx_1 - 1
        
        char r11_1
        
        if (r9_1 u> rdx_2 || rdx_2 u> *(arg2 + 0x10) || arg2[4] - rdx_2.d u< 1 || rcx_1 s<= 0)
            r11_1 = 0
        else
            r11_1 = 1
        
        char const* const rax_3 = "OUT-OF-RANGE"
        
        if (r11_1 != 0)
            rax_3 = &data_14369cdc0
        
        char const* const var_18_1 = rax_3
        uint64_t var_20_1 = *(arg2 + 0x10)
        int64_t var_28_1 = r9_1
        int32_t var_30_1 = 1
        int64_t var_38_1 = rdx_2 + 1
        int64_t var_40_1 = rdx_2
        char const* const var_48_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
        int64_t var_50_1 = 0
        int32_t var_58_1 = *arg2 + 1
        
        if (r11_1 == 0)
            result.b = 0
            break
        
        r10 += 1
        
        if (r10 u>= arg2[0xc])
            goto label_142c05bc7

return result
