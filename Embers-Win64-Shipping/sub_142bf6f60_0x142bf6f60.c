// 函数: sub_142bf6f60
// 地址: 0x142bf6f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x28) = sub_142bf2890(arg2)
arg1[7].b = 0
uint64_t rsi
uint64_t arg_8 = rsi

while (true)
    void* rax_1 = *(arg1 + 0x28)
    uint32_t rcx_1 = 0x4000
    int64_t rdx = *(rax_1 + 0x10)
    *(arg1 + 8) = rdx
    int64_t r9_2 = zx.q(*(rax_1 + 0x18)) + rdx
    arg1[8] = 0
    *(arg1 + 0x10) = r9_2
    uint64_t r8_2 = zx.q(r9_2.d - rdx.d)
    *arg1 = 0
    int32_t var_50_1 = r8_2.d
    int64_t var_58_1 = r9_2
    int64_t var_60_1 = rdx
    uint32_t rax_2 = (r8_2 << 3).d
    char const* const var_68_1 = "start [%p..%p] (%lu bytes)"
    int32_t var_70_1 = 1
    int64_t var_78_1 = 0
    
    if (rax_2 u> 0x4000)
        rcx_1 = rax_2
    
    arg1[6] = rcx_1
    char* rdi_1 = *(arg1 + 8)
    
    if (rdi_1 == 0)
        sub_142bf75d0(arg1)
        return arg2
    
    int64_t r8_4 = *(arg1 + 0x10)
    int32_t rcx_3
    
    if (rdi_1 u<= r8_4 && r8_4.d - rdi_1.d u>= 0x36)
        rcx_3 = arg1[6]
        arg1[6] = rcx_3 - 1
    
    char r10_1
    
    if (rdi_1 u> r8_4 || r8_4.d - rdi_1.d u< 0x36 || rcx_3 s<= 0)
        r10_1 = 0
    else
        r10_1 = 1
    
    char const* const rax_6 = "OUT-OF-RANGE"
    
    if (r10_1 != 0)
        rax_6 = &data_14369cdc0
    
    char const* const var_38_1 = rax_6
    int64_t var_40_1 = r8_4
    char* var_48_1 = rdi_1
    int32_t var_50_2 = 0x36
    void* var_58_2 = &rdi_1[0x36]
    char* var_60_2 = rdi_1
    char const* const var_68_2 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
    var_70_1.q = 0
    var_78_1.d = *arg1 + 1
    
    if (r10_1 != 0 && zx.w(*rdi_1) * 0x100 + zx.w(rdi_1[1]) == 1 && (zx.d(rdi_1[0xd]) << 0x10)
            + (zx.d(rdi_1[0xe]) << 8) + (zx.d(rdi_1[0xc]) << 0x18) + zx.d(rdi_1[0xf]) == 0x5f0f3cf5)
        rsi = 1
        
        if (arg1[8] != 0)
            arg1[8] = 0
            uint32_t rax_14 = sub_142bf7510(arg1, rdi_1, 0x36)
            int16_t rdx_8
            
            if (rax_14.b != 0)
                rdx_8 = zx.w(*rdi_1) * 0x100 + zx.w(rdi_1[1])
            
            if (rax_14.b == 0 || rdx_8 != 1 || (zx.d(rdi_1[0xd]) << 0x10) + (zx.d(rdi_1[0xe]) << 8)
                    + (zx.d(rdi_1[0xc]) << 0x18) + zx.d(rdi_1[0xf]) != 0x5f0f3cf5)
                rax_14.b = 0
            else
                rax_14 = zx.d(rdx_8.b)
            
            rsi = zx.q(rax_14.b)
            
            if (arg1[8] != 0)
                rsi = 0
        
        goto label_142bf71a5
    
    rsi.b = 0
    
    if (arg1[8] == 0 || arg1[7].b != 0)
    label_142bf71a5:
        sub_142bf75d0(arg1)
        
        if (rsi.b == 0)
            sub_142c09b70(arg2)
            return sub_142c09c40()
        
        sub_142bf2880(arg2)
        return arg2
    
    int64_t rax_13 = sub_142c09bf0(arg2, nullptr)
    *(arg1 + 8) = rax_13
    *(arg1 + 0x10) = zx.q(arg2[6]) + rax_13
    
    if (rax_13 == 0)
        goto label_142bf71a5
    
    arg1[7].b = 1
