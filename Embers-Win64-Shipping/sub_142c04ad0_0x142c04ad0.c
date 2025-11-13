// 函数: sub_142c04ad0
// 地址: 0x142c04ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t arg_8 = rbx
int16_t* const var_28 = &data_14369cdc0
int64_t var_30 = *(arg2 + 0x10)
uint64_t var_38 = *(arg2 + 8)
int32_t var_40 = 0
int64_t var_48 = arg1
int64_t var_50 = arg1
char const* const var_58 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
int64_t var_60 = 0
int32_t var_68 = *arg2 + 1
int32_t rdi = 0
int32_t r11_1 = arg3 - 1
uint64_t result

if (arg3 == 1)
label_142c04c18:
    result.b = 1
else
    while (true)
        int64_t r9_3 = *(arg2 + 8)
        void* rdx_2 = zx.q(rdi) * 3 + arg1
        int32_t rcx_2
        
        if (r9_3 u<= rdx_2 && rdx_2 u<= *(arg2 + 0x10) && arg2[4] - rdx_2.d u>= 3)
            rcx_2 = arg2[6]
            arg2[6] = rcx_2 - 1
        
        if (r9_3 u> rdx_2 || rdx_2 u> *(arg2 + 0x10) || arg2[4] - rdx_2.d u< 3 || rcx_2 s<= 0)
            rbx.b = 0
        else
            rbx.b = 1
        
        char const* const rax_4 = "OUT-OF-RANGE"
        
        if (rbx.b != 0)
            rax_4 = &data_14369cdc0
        
        char const* const var_28_1 = rax_4
        uint64_t var_30_1 = *(arg2 + 0x10)
        int64_t var_38_1 = r9_3
        int32_t var_40_1 = 3
        void* var_48_1 = rdx_2 + 3
        void* var_50_1 = rdx_2
        char const* const var_58_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
        int64_t var_60_1 = 0
        int32_t var_68_1 = *arg2 + 1
        
        if (rbx.b != 0)
            uint32_t rcx_5 = zx.d(*(rdx_2 + 2))
            
            if (r11_1 u>= rcx_5 + 1)
                rdi += 1
                result = zx.q(0xffffffff - rcx_5)
                int32_t temp1_1 = r11_1
                r11_1 += result.d
                
                if (temp1_1 == neg.d(result.d))
                    goto label_142c04c18
                
                continue
        
        result.b = 0
        break

return result
