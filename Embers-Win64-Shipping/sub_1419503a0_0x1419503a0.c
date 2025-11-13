// 函数: sub_1419503a0
// 地址: 0x1419503a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 != 0 && sub_140a80f10() == 0)
    void*** rdx_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    void* rax_2 = &rdx_2[0xa]
    
    if (rax_2 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x60)
        rdx_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_2 = &rdx_2[0xa]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_2
    *data_143f02ba0 = rdx_2
    data_143f02ba0 = &rdx_2[1]
    void** const var_28 = &data_142da2668
    void* var_20 = arg1
    rdx_2[1] = 0
    *rdx_2 = &data_142ff4958
    rdx_2[2] = sub_141932730
    rdx_2[4] = 0
    
    if (rdx_2[2] != 0)
        void** const* rcx = &var_28
        (**rcx)(rcx, &rdx_2[4])
    
    void** const* rcx_1 = &var_28
    (*rcx_1)[2](rcx_1)
    int32_t rbx_1 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx_1)
    int128_t entry_zmm2
    int128_t entry_zmm3
    
    if (data_143f02bac u> 0)
        j_sub_14196ef60(&data_143f02b88, &data_143f02b98, entry_zmm2, entry_zmm3)
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_7
    rdx_7.b = 1
    sub_14198b7d0()
    return sub_140b38680("FlushRHIThreadTotal", rbx_1) __tailcall

if (*(arg1 + 0x30) != 0)
    data_143f001e0(*(arg1 + 0x28))
    *(arg1 + 0x30) = 0

int64_t result = data_143f001f0(0x9117, 0)
*(arg1 + 0x28) = result
*(arg1 + 0x30) = 1
return result
