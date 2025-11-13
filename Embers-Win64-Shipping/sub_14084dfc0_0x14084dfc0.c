// 函数: sub_14084dfc0
// 地址: 0x14084dfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result

if (*(arg1 + 0x434) != 0)
label_14084e1a3:
    result.b = 1
    return result

if (*(arg1 + 0x440) s> 0)
    int32_t rdx = *(arg2 + 0x430)
    int32_t i_3 = 0
    int32_t i_4 = 0
    int64_t* rsi_1 = nullptr
    int64_t* var_68 = nullptr
    int32_t var_5c_1 = 0
    
    if (rdx s> 0)
        sub_1405c5660(&var_68, rdx)
        i_3 = i_4
        rsi_1 = var_68
    
    int64_t* i = *(arg2 + 0x428)
    
    for (void* r14_3 = &i[sx.q(*(arg2 + 0x430)) * 4]; i != r14_3; i = &i[4])
        int64_t var_58 = *i
        int64_t i_5 = sx.q(i_3)
        int64_t var_50_1 = i[1]
        int16_t var_48_1 = i[2].w
        i_3 = (i_5 + 1).d
        int32_t var_46_1 = 0xffffffff
        int64_t var_40_1 = 0
        int64_t var_38_1 = 0
        
        if (i_3 s> var_5c_1)
            sub_1405c4ec0(&var_68)
            rsi_1 = var_68
        
        sub_140745220(&rsi_1[i_5 * 5], &var_58)
        
        if (var_40_1 != 0)
            sub_140a74f90(var_40_1)
    
    int64_t* rdi_1 = rsi_1
    void* rbp_1 = &rsi_1[sx.q(i_3) * 5]
    
    if (rsi_1 != rbp_1)
        do
            if (sub_140834780(&rdi_1[1]).b != 0)
                result = *(arg1 + 0x438)
                void* rdx_3 = &result[sx.q(*(arg1 + 0x440))]
                
                if (result != rdx_3)
                    while (*result != *rdi_1)
                        result = &result[1]
                        
                        if (result == rdx_3)
                            goto label_14084e136
                    
                    if (i_3 != 0)
                        void* rdi_3 = &rsi_1[3]
                        int32_t i_1
                        
                        do
                            int64_t rcx_12 = *rdi_3
                            
                            if (rcx_12 != 0)
                                sub_140a74f90(rcx_12)
                            
                            rdi_3 += 0x28
                            i_1 = i_3
                            i_3 -= 1
                        while (i_1 != 1)
                    
                    if (rsi_1 != 0)
                        sub_140a74f90(rsi_1)
                    
                    goto label_14084e1a3
            
        label_14084e136:
            rdi_1 = &rdi_1[5]
        while (rdi_1 != rbp_1)
    
    if (i_3 != 0)
        void* rdi_2 = &rsi_1[3]
        int32_t i_2
        
        do
            int64_t rcx_10 = *rdi_2
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            rdi_2 += 0x28
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

result.b = 0
return result
