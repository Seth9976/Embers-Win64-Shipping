// 函数: sub_1419535c0
// 地址: 0x1419535c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff8c28
bool cond:0 = data_143f01c92 == 0
char rax_1

if (not(cond:0))
    rax_1 = sub_140a80f10()

if (cond:0 || rax_1 != 0)
    data_143effce8(1, &arg1[4])
else
    void*** r8_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    void* rax_2 = &r8_3[0xa]
    
    if (rax_2 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x60)
        r8_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_2 = &r8_3[0xa]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_2
    *data_143f02ba0 = r8_3
    data_143f02ba0 = &r8_3[1]
    void** const var_28 = &data_142da2668
    void*** var_20_1 = arg1
    r8_3[1] = 0
    *r8_3 = &data_142ff4958
    r8_3[2] = sub_141953f40
    r8_3[4] = 0
    
    if (r8_3[2] != 0)
        void** const* rcx = &var_28
        (**rcx)(rcx)
    
    void** const* rcx_1 = &var_28
    (*rcx_1)[2](rcx_1)
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
