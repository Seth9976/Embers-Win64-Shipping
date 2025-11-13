// 函数: sub_141be03a0
// 地址: 0x141be03a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
bool cond:0 = *(arg1 + 0x760) == 0
*(arg1 + 0x120) = arg2

if (not(cond:0))
    int32_t rcx
    rcx.b = sub_140b5b8a0(*(arg1 + 0x12c), 0) == 0
    int64_t var_38
    char rax_6
    char* rdx_2
    int32_t rsi_1
    int32_t rdi_1
    
    if ((*(arg1 + 0x130) != 0 | rcx.b) == 0)
    label_141be044d:
        rax_6 = *(arg1 + 0x120)
        char var_40
        rdx_2 = &var_40
        var_40 = rax_6
        char var_3f_1 = 1
        rdi_1 = 0
        var_38 = 0
        int32_t var_30_1 = 0
        rsi_1 = 2
    else
        void* rax_1 = sub_140d3c6e0(arg1 + 0x124)
        
        if (rax_1 == 0)
            goto label_141be044d
        
        if (sub_140d1fd20(rax_1, *(arg1 + 0x12c)) == 0)
            goto label_141be044d
        
        int64_t arg_8 = *(arg1 + 0x12c)
        void var_28
        char* rax_5 = sub_141b70580(&var_28, sub_140d3c6e0(arg1 + 0x124), &arg_8)
        rdx_2 = rax_5
        rdi_1 = 1
        rsi_1 = 0
        rax_6 = *rax_5
    
    char var_58 = rax_6
    char rax_7 = rdx_2[1]
    int64_t var_50 = 0
    int32_t var_48_1 = 0
    char var_57_1 = rax_7
    sub_1407473e0(&var_50, &rdx_2[8])
    result = sub_140f15ad0(*(arg1 + 0x760), &var_58)
    
    if (rsi_1 != 0)
        result = sub_140745b20(&var_38)
    
    void var_20
    
    if (rdi_1 != 0)
        return sub_140745b20(&var_20)

return result
