// 函数: sub_142bfbb20
// 地址: 0x142bfbb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x28) = sub_142bf2890(arg2)
arg1[7].b = 0

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
    int32_t var_20_1 = r8_2.d
    int64_t var_28_1 = r9_2
    int64_t var_30_1 = rdx
    uint32_t rax_2 = (r8_2 << 3).d
    char const* const var_38_1 = "start [%p..%p] (%lu bytes)"
    int32_t var_40_1 = 1
    int64_t var_48_1 = 0
    
    if (rax_2 u> 0x4000)
        rcx_1 = rax_2
    
    arg1[6] = rcx_1
    char* rbp_1 = *(arg1 + 8)
    
    if (rbp_1 == 0)
        sub_142bf75d0(arg1)
        return arg2
    
    char rax_3 = sub_142c05c70(rbp_1, arg1)
    char rsi_1 = rax_3
    
    if (rax_3 != 0)
        if (arg1[8] != 0)
            arg1[8] = 0
            rsi_1 = sub_142c05c70(rbp_1, arg1)
            
            if (arg1[8] != 0)
                rsi_1 = 0
        
        goto label_142bfbc43
    
    if (arg1[8] == 0 || arg1[7].b != 0)
    label_142bfbc43:
        sub_142bf75d0(arg1)
        
        if (rsi_1 == 0)
            sub_142c09b70(arg2)
            return sub_142c09c40()
        
        sub_142bf2880(arg2)
        return arg2
    
    int64_t rax_4 = sub_142c09bf0(arg2, nullptr)
    *(arg1 + 8) = rax_4
    *(arg1 + 0x10) = zx.q(arg2[6]) + rax_4
    
    if (rax_4 == 0)
        goto label_142bfbc43
    
    arg1[7].b = 1
