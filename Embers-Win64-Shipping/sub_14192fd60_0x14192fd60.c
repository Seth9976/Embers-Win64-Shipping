// 函数: sub_14192fd60
// 地址: 0x14192fd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[6].b == 0
*arg1 = &data_142ff7538

if (not(cond:0))
    char rax_1
    
    if (data_143f01c92 != 0)
        rax_1 = sub_140a80f10()
    
    if (data_143f01c92 == 0 || rax_1 != 0)
        data_143f001e0(arg1[5])
    else
        void*** rcx_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        void* rax_2 = &rcx_2[0xa]
        
        if (rax_2 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x60)
            rcx_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
            rax_2 = &rcx_2[0xa]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_2
        *data_143f02ba0 = rcx_2
        void** const var_28 = &data_142da2668
        data_143f02ba0 = &rcx_2[1]
        void*** var_20_1 = arg1
        rcx_2[1] = 0
        *rcx_2 = &data_142ff4958
        rcx_2[2] = sub_141932680
        rcx_2[4] = 0
        
        if (rcx_2[2] != 0)
            void** const* rcx_5 = &var_28
            (**rcx_5)(rcx_5)
        
        void** const* rcx_6 = &var_28
        (*rcx_6)[2](rcx_6)
        int32_t rdi_1 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rdi_1)
        
        if (data_143f02bac u> 0)
            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg3, arg4)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_2
        rdx_2.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", rdi_1)

*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
