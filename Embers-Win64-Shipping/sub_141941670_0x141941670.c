// 函数: sub_141941670
// 地址: 0x141941670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x30) != 0)
    if (data_143f01c92 != 0)
        char rax = sub_140a80f10()
        
        if (rax == 0)
            int64_t rcx_1 = data_143f02bc8 + 0xf
            char arg_8 = rax
            void*** rcx_2 = rcx_1 & 0xfffffffffffffff0
            void* rax_1 = &rcx_2[0xa]
            
            if (rax_1 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x60)
                rcx_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
                rax_1 = &rcx_2[0xa]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_1
            void* var_50 = arg1
            *data_143f02ba0 = rcx_2
            void** const var_28 = &data_142d42ed8
            data_143f02ba0 = &rcx_2[1]
            int128_t var_20 = (&arg_8).o
            rcx_2[1] = 0
            *rcx_2 = &data_142ff4958
            rcx_2[2] = sub_141932690
            rcx_2[4] = 0
            
            if (rcx_2[2] != 0)
                void** const* rcx_5 = &var_28
                (**rcx_5)(rcx_5)
            
            void** const* rcx_6 = &var_28
            (*rcx_6)[2](rcx_6)
            int32_t rbx_1 = data_143f029c8
            sub_140b34200("FlushRHIThreadTotal", rbx_1)
            int128_t entry_zmm2
            int128_t entry_zmm3
            
            if (data_143f02bac u> 0)
                j_sub_14196ef60(&data_143f02b88, &data_143f02b98, entry_zmm2, entry_zmm3)
            sub_14198b230()
            
            if (data_143f01c92 != 0)
                sub_14198b3f0()
            
            int64_t rdx_2
            rdx_2.b = 1
            sub_14198b7d0()
            sub_140b38680("FlushRHIThreadTotal", rbx_1)
            return zx.q(arg_8)
    
    int32_t rax_7 = data_143f00200(*(arg1 + 0x28), 0, 0)
    
    if (rax_7 == 0x911a)
        result.b = 1
        return result
    
    if (rax_7 != 0x911b && rax_7 == 0x911c)
        result.b = 1
        return result

result.b = 0
return result
