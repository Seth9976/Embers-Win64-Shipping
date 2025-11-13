// 函数: sub_14201afb0
// 地址: 0x14201afb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_14203bac0(&arg1[5], arg1, arg1[2].d)
char result_1 = result

if (arg1[4].d != 0)
    int64_t* rcx_1 = arg1[3]
    
    if (rcx_1 != 0)
        int64_t rdx_1 = *rcx_1
        result = (*(rdx_1 + 0x28))(rcx_1, rdx_1)
        
        if (result != 0)
            int64_t var_78
            sub_140596d10(&var_78, arg1)
            int32_t rax = arg1[2].d
            int64_t* var_60 = nullptr
            int32_t var_58_1 = 0
            
            if (&arg1[3] != &var_60 && arg1[4].d != 0)
                int64_t* rcx_3 = arg1[3]
                
                if (rcx_3 != 0)
                    (*(*rcx_3 + 0x40))(rcx_3, &var_60)
            
            void*** rax_2 = sub_140a82f30(0x38, 8)
            *rax_2 = &data_1432a4c98
            sub_140596d10(&rax_2[1], &var_78)
            rax_2[3].d = rax
            rax_2[4] = 0
            rax_2[5].d = 0
            
            if (&var_60 != &rax_2[4] && var_58_1 != 0)
                int64_t* rcx_6 = var_60
                
                if (rcx_6 != 0)
                    (*(*rcx_6 + 0x40))(rcx_6)
            
            rax_2[6].b = result_1
            *rax_2 = &data_1432a4cb8
            int64_t (* var_48)(void* arg1)
            int64_t (* rax_5)(void* arg1) = var_48
            
            if (rax_2 != -8)
                rax_5 = sub_14201fd10
            
            void*** var_38_1 = rax_2
            var_48 = rax_5
            sub_140a20e40(2, &var_48)
            result = sub_140745b20(&var_60)
            int64_t rcx_8 = var_78
            
            if (rcx_8 != 0)
                return sub_140a74f90(rcx_8)

return result
