// 函数: sub_142bf9d70
// 地址: 0x142bf9d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_142bfac50(arg1, arg2)

if (rax == 0)
    return rax

uint32_t rbp_3 = (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18)
uint64_t rax_5 = zx.q(arg1[3])
int32_t rsi = 0

if (rbp_3 == neg.d(rax_5.d))
label_142bf9ece:
    rax_5.b = 1
else
    while (true)
        int64_t r8 = *(arg2 + 8)
        void* rdi_2 = &arg1[4 + zx.q(rsi) * 0xb]
        int32_t rcx_1
        
        if (r8 u<= rdi_2 && rdi_2 u<= *(arg2 + 0x10) && arg2[4] - rdi_2.d u>= 0xb)
            rcx_1 = arg2[6]
            arg2[6] = rcx_1 - 1
        
        char r10_1
        
        if (r8 u> rdi_2 || rdi_2 u> *(arg2 + 0x10) || arg2[4] - rdi_2.d u< 0xb || rcx_1 s<= 0)
            r10_1 = 0
        else
            r10_1 = 1
        
        char const* const rax_10 = "OUT-OF-RANGE"
        
        if (r10_1 != 0)
            rax_10 = &data_14369cdc0
        
        char const* const var_38_1 = rax_10
        uint64_t var_40_1 = *(arg2 + 0x10)
        int64_t var_48_1 = r8
        int32_t var_50_1 = 0xb
        void* var_58_1 = rdi_2 + 0xb
        void* var_60_1 = rdi_2
        char const* const var_68_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
        int64_t var_70_1 = 0
        int32_t var_78_1 = *arg2 + 1
        
        if (r10_1 != 0 && sub_142bfa050(rdi_2 + 3, arg2, arg3).b != 0
                && sub_142bfa110(rdi_2 + 7, arg2, arg3).b != 0)
            rsi += 1
            
            if (rsi u>= rbp_3 + rax_5.d)
                goto label_142bf9ece
            
            continue
        
        rax_5.b = 0
        break

return rax_5
