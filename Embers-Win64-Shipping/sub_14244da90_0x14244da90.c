// 函数: sub_14244da90
// 地址: 0x14244da90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x40) s<= 0)
    return 

int64_t r14_1 = 0

do
    int32_t* rdi_2 = *(arg1 + 0x38) + r14_1
    int16_t* var_58
    int64_t var_48
    sub_14242f630(&var_58, sub_140b63b70(rdi_2, &var_48), arg2)
    int64_t rcx_2 = var_48
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int16_t* const rdx_2 = &data_142d40450
    int32_t var_50
    
    if (var_50 != 0)
        rdx_2 = var_58
    
    void arg_8
    int64_t rcx_4 = *sub_140b58260(&arg_8, rdx_2, 1)
    *rdi_2 = rcx_4
    sub_140d18050(rcx_4)
    int32_t* j = *(rdi_2 + 8)
    
    for (void* rdi_3 = &j[sx.q(rdi_2[4]) * 2]; j != rdi_3; j = &j[2])
        int16_t* var_68
        int64_t var_38
        sub_14242f630(&var_68, sub_140b63b70(j, &var_38), arg2)
        int64_t rcx_7 = var_38
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int16_t* const rdx_5 = &data_142d40450
        int32_t var_60
        
        if (var_60 != 0)
            rdx_5 = var_68
        
        void arg_18
        int64_t rcx_9 = *sub_140b58260(&arg_18, rdx_5, 1)
        *j = rcx_9
        sub_140d18050(rcx_9)
        int16_t* rcx_10 = var_68
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
    
    int16_t* rcx_11 = var_58
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    i += 1
    r14_1 += 0xb0
while (i s< *(arg1 + 0x40))
