// 函数: sub_141b14130
// 地址: 0x141b14130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
uint64_t result = __security_cookie ^ &var_178
uint64_t result_2 = result
int64_t* rcx = data_143f5b298

if (rcx != 0)
    result = (*(*rcx + 0x388))(rcx)
    
    if (result.b != 0 && *(arg3 + 0x48) != 4)
        void* rdi_1 = *(arg1 + 0x20)
        int32_t var_130_1 = 0xffffffff
        int32_t var_12c_1 = 0
        
        if (rdi_1 != 0)
            int32_t var_148
            sub_140d3a3a0(&var_148, rdi_1)
            var_130_1 = var_148
            int32_t var_144
            int32_t var_12c_2 = var_144
        
        char var_e8
        char result_1 = var_e8 | 3
        void* var_120_1 = rdi_1
        void** const var_128 = &data_143052bd8
        int64_t var_118_1 = var_130_1.q
        void var_e0
        int128_t* rax_5 = sub_1405ab790(&var_e0, &arg4[0x22], arg4 + 0x124, &arg4[0x27], &var_128)
        int64_t rdi_2 = sx.q(arg4[1].d)
        int32_t rcx_3 = (rdi_2 + 1).d
        arg4[1].d = rcx_3
        
        if (rcx_3 s> *(arg4 + 0xc))
            sub_1405c5190(arg4)
        
        sub_1405ab620(rdi_2 * 0xc8 + *arg4, rax_5)
        char var_20
        
        if ((var_20 & 1) != 0)
            int64_t* var_60
            int64_t* rcx_7 = &var_60
            
            if ((var_20 & 2) == 0)
                rcx_7 = var_60
            
            (**rcx_7)(rcx_7, 0)
            
            if ((var_20 & 2) == 0)
                sub_140a74f90(var_60)
        
        int64_t var_80
        
        if (var_80 != 0)
            sub_140a74f90(var_80)
        
        result = zx.q(result_1)
        
        if ((result.b & 1) != 0)
            void** const rcx_10 = &var_128
            
            if ((result.b & 2) == 0)
                rcx_10 = var_128
            
            result.b &= 0xfe
            char var_e8_1 = result.b
            result = (**rcx_10)(rcx_10, 0)
            
            if ((var_e8_1 & 2) == 0)
                result = sub_140a74f90(var_128)

__security_check_cookie(result_2 ^ &var_178)
return result
