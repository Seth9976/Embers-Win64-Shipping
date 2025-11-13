// 函数: sub_141d98060
// 地址: 0x141d98060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint64_t result

if (*(arg2 + 8) != 2)
    sub_141d95cb0(*arg1 + 0xb8, arg2 + 0x18)
    int64_t* rcx_3 = *arg1
    
    if (*(rcx_3 + 0xe9) != 0)
        int64_t* var_b8 = nullptr
        int32_t var_b0_1 = 0
        (*(*rcx_3 + 0xf0))(rcx_3, &var_b8)
        int64_t* rax_4
        
        if (var_b0_1 == 0)
            rax_4 = var_b8
        label_141d98126:
            
            if (rax_4 != 0)
                sub_140a74f90(rax_4)
        else
            int64_t* rcx_5 = var_b8
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x38))(rcx_5, 0)
                rax_4 = var_b8
                
                if (rax_4 != 0)
                    rax_4 = sub_140a84c80(rax_4, 0, 0)
                    var_b8 = rax_4
                
                int32_t var_b0_2 = 0
                goto label_141d98126
        void* rbx_1 = *arg1
        void** const var_48 = &data_142da2668
        void*** var_58_1 = nullptr
        void* const var_68 = &data_141d9bb70
        void* var_40_1 = rbx_1
        int32_t rax_5 = 0
        int32_t var_b0_3 = 0
        int64_t* rcx_8 = nullptr
        var_b8 = nullptr
        
        if (&arg1[1] != &var_b8 && arg1[2].d != 0)
            int64_t* r8_2 = arg1[1]
            
            if (r8_2 != 0)
                (*(*r8_2 + 0x40))(r8_2, &var_b8)
                rax_5 = var_b0_3
                rcx_8 = var_b8
        
        void*** var_98_1 = nullptr
        int64_t var_80 = 0
        int32_t var_78_1 = 0
        void** const var_88 = &data_143239910
        
        if (rax_5 != 0 && rcx_8 != 0)
            (*(*rcx_8 + 0x40))(rcx_8, &var_80)
        
        var_88 = &data_143239930
        int64_t (* var_a8)(int64_t* arg1) = j_sub_140926420
        sub_141d934e0(rbx_1, 5, &var_68, &var_a8)
        
        if (var_a8 != 0)
            void** const* rcx_11 = &var_88
            
            if (var_98_1 != 0)
                rcx_11 = var_98_1
            
            (*rcx_11)[2](rcx_11)
        
        result = sub_140745b20(&var_b8)
        
        if (var_68 != 0)
            void** const* rcx_13 = &var_48
            
            if (var_58_1 != 0)
                rcx_13 = var_58_1
            
            result = (*rcx_13)[2](rcx_13)
    else
        *(arg2 + 8) = 3
        result = sub_140926420(&arg1[1], arg2)
else
    result = sub_140926420(&arg1[1])

__security_check_cookie(rax_1 ^ &var_d8)
return result
