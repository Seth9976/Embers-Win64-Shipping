// 函数: sub_142c18c00
// 地址: 0x142c18c00
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
    
    if (rdi_1 u<= r8_4 && r8_4.d - rdi_1.d u>= 4)
        rcx_3 = arg1[6]
        arg1[6] = rcx_3 - 1
    
    char r10
    
    if (rdi_1 u> r8_4 || r8_4.d - rdi_1.d u< 4 || rcx_3 s<= 0)
        r10 = 0
    else
        r10 = 1
    
    char const* const rax_6 = "OUT-OF-RANGE"
    
    if (r10 != 0)
        rax_6 = &data_14369cdc0
    
    char const* const var_38_1 = rax_6
    int64_t var_40_1 = r8_4
    char* var_48_1 = rdi_1
    int32_t var_50_2 = 4
    void* var_58_2 = &rdi_1[4]
    char* var_60_2 = rdi_1
    char const* const var_68_2 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
    var_70_1.q = 0
    var_78_1.d = *arg1 + 1
    
    if (r10 != 0)
        uint32_t rax_7 = zx.d(rdi_1[1])
        uint32_t rcx_7 = zx.d(*rdi_1) << 8
        
        if (rcx_7 == neg.d(rax_7))
            rsi = zx.q(sub_142c252f0(rdi_1, arg1))
        else if (rcx_7 + rax_7 == 1)
            rsi = zx.q(sub_142c25170(rdi_1, arg1))
        else
            rsi = 1
        
        if (rsi.b == 0)
            goto label_142c18d8f
        
        if (arg1[8] != 0)
            arg1[8] = 0
            char rax_10
            rsi = zx.q(rax_10)
            
            if (arg1[8] != 0)
                rsi = 0
        
        goto label_142c18de4
    
    rsi.b = 0
label_142c18d8f:
    
    if (arg1[8] == 0 || arg1[7].b != 0)
    label_142c18de4:
        sub_142bf75d0(arg1)
        
        if (rsi.b == 0)
            sub_142c09b70(arg2)
            return sub_142c09c40()
        
        sub_142bf2880(arg2)
        return arg2
    
    int64_t rax_9 = sub_142c09bf0(arg2, nullptr)
    *(arg1 + 8) = rax_9
    *(arg1 + 0x10) = zx.q(arg2[6]) + rax_9
    
    if (rax_9 == 0)
        goto label_142c18de4
    
    arg1[7].b = 1
