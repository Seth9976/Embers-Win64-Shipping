// 函数: sub_142c04c40
// 地址: 0x142c04c40
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
label_142c04d9a:
    result.b = 1
else
    while (true)
        int64_t r9_3 = *(arg2 + 8)
        void* rdx_1 = arg1 + (zx.q(rdi) << 2)
        int32_t rcx_1
        
        if (r9_3 u<= rdx_1 && rdx_1 u<= *(arg2 + 0x10) && arg2[4] - rdx_1.d u>= 4)
            rcx_1 = arg2[6]
            arg2[6] = rcx_1 - 1
        
        if (r9_3 u> rdx_1 || rdx_1 u> *(arg2 + 0x10) || arg2[4] - rdx_1.d u< 4 || rcx_1 s<= 0)
            rbx.b = 0
        else
            rbx.b = 1
        
        char const* const rax_5 = "OUT-OF-RANGE"
        
        if (rbx.b != 0)
            rax_5 = &data_14369cdc0
        
        char const* const var_28_1 = rax_5
        uint64_t var_30_1 = *(arg2 + 0x10)
        int64_t var_38_1 = r9_3
        int32_t var_40_1 = 4
        void* var_48_1 = rdx_1 + 4
        void* var_50_1 = rdx_1
        char const* const var_58_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
        int64_t var_60_1 = 0
        int32_t var_68_1 = *arg2 + 1
        
        if (rbx.b == 0 || r11_1 u< (zx.d(*(rdx_1 + 2)) << 8) + 1 + zx.d(*(rdx_1 + 3)))
            result.b = 0
            break
        
        rdi += 1
        int32_t rcx_9 = 0xffffffff - (zx.d(*(rdx_1 + 2)) << 8) - zx.d(*(rdx_1 + 3))
        int32_t temp1_1 = r11_1
        r11_1 += rcx_9
        
        if (temp1_1 == neg.d(rcx_9))
            goto label_142c04d9a
        
        continue

return result
