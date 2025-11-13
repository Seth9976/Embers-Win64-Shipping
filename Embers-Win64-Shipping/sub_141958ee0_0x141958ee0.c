// 函数: sub_141958ee0
// 地址: 0x141958ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x28)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_142d3ff08
    rbx[1].d = 0
    *rbx = &data_142ff8c28
    *(rbx + 0xc) = 0
    rbx[2].w = 0x100
    rbx[3].b = 0
    rbx[4] = 0
    char rax_1
    
    if (data_143f01c92 != 0)
        rax_1 = sub_140a80f10()
    
    if (data_143f01c92 == 0 || rax_1 != 0)
        data_143effcf0(1, &rbx[4])
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
        void*** var_20_1 = rbx
        rcx_2[1] = 0
        *rcx_2 = &data_142ff4958
        rcx_2[2] = sub_141953e20
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

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

return arg2
