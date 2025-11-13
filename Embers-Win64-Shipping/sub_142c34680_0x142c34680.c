// 函数: sub_142c34680
// 地址: 0x142c34680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142c29560(arg1, arg2)

if (rax == 0)
    return rax

uint32_t rcx_1 = zx.d(sub_142c21bd0(arg1))
int32_t rsi = 0
uint32_t rbp_2 = (zx.d(arg1[2]) << 8) + zx.d(arg1[3])
uint32_t rax_2

if (rbp_2 == rcx_1)
label_142c3487b:
    rax_2.b = 1
else
    while (true)
        int32_t rdx_5
        
        if (zx.w(arg1[2]) * 0x100 == neg.w(zx.w(arg1[3])))
        label_142c3478d:
            rdx_5 = 0
        else
            int32_t i = 0
            void* rax_9 = zx.q((zx.d(arg1[1]) + (zx.d(*arg1) << 8))
                * (zx.d(arg1[3]) - 1 + (zx.d(arg1[2]) << 8))) + 0xa + arg1
            
            do
                if (zx.w(*(rax_9 + 1)) + zx.w(*rax_9) * 0x100 != 0xffff)
                    goto label_142c3478d
                
                i += 1
                rax_9 += 2
            while (i u< 2)
            
            rdx_5 = 1
        
        int128_t* const r10_1
        
        if (rsi u< (zx.d(arg1[2]) << 8) + zx.d(arg1[3]) - rdx_5)
            r10_1 = &arg1[0xa + zx.q((zx.d(arg1[1]) + (zx.d(*arg1) << 8)) * rsi)]
        else
            r10_1 = &data_14369a5d0
        
        int64_t r8_2 = *(arg2 + 8)
        int32_t rcx_12
        
        if (r8_2 u<= r10_1 && r10_1 u<= *(arg2 + 0x10) && arg2[4] - r10_1.d u>= 6)
            rcx_12 = arg2[6]
            arg2[6] = rcx_12 - 1
        
        char r11_1
        
        if (r8_2 u> r10_1 || r10_1 u> *(arg2 + 0x10) || arg2[4] - r10_1.d u< 6 || rcx_12 s<= 0)
            r11_1 = 0
        else
            r11_1 = 1
        
        char const* const rax_17 = "OUT-OF-RANGE"
        
        if (r11_1 != 0)
            rax_17 = &data_14369cdc0
        
        char const* const var_38_1 = rax_17
        int64_t var_40_1 = *(arg2 + 0x10)
        int64_t var_48_1 = r8_2
        int32_t var_50_1 = 6
        void* var_58_1 = r10_1 + 6
        int128_t* const var_60_1 = r10_1
        char const* const var_68_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
        int64_t var_70_1 = 0
        int32_t var_78_1 = *arg2 + 1
        
        if (r11_1 != 0 && sub_142c33d60(r10_1 + 4, arg2, arg3).b != 0)
            rsi += 1
            
            if (rsi u>= rbp_2 - rcx_1)
                goto label_142c3487b
            
            continue
        
        rax_2.b = 0
        break

return rax_2
