// 函数: sub_1418b1900
// 地址: 0x1418b1900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a36020(arg3, arg2)

if (sub_140b16090(arg2) == 0)
    int32_t rax_1 = arg2[1].d
    int32_t rsi_1 = *(arg1 + 0x208)
    int32_t rdi_1 = rax_1 - 1
    
    if (rax_1 == 0)
        rdi_1 = 0
    
    int32_t rax_3
    
    if (rsi_1 == 0)
        rax_3 = 2
    
    if (rsi_1 != 0 || rdi_1 == 0xffffffff)
        rax_3 = 1
    
    int64_t rbp_1 = *(arg1 + 0x200)
    int32_t rcx_2 = rdi_1 + rax_3
    int64_t var_18 = 0
    int32_t var_c
    
    if (rsi_1 != 0 || rcx_2 != 0)
        sub_1405a4c70(&var_18, rsi_1 + rcx_2, 0)
        memcpy(var_18, rbp_1, rsi_1 * 2)
    else
        var_c = 0
    
    sub_140a2cf70(&var_18, *arg2, rdi_1)
    
    if (arg2 == &var_18)
        int64_t rcx_7 = var_18
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
    else
        int64_t rcx_6 = *arg2
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        *arg2 = var_18
        arg2[1].d = rsi_1
        *(arg2 + 0xc) = var_c

sub_140b16090(arg2)
return arg2
