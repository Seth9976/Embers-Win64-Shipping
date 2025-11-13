// 函数: sub_14195a290
// 地址: 0x14195a290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c92 != 0 && sub_140a80f10() == 0)
    void*** rcx_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    void* rax_2 = &rcx_2[0xa]
    
    if (rax_2 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x60)
        rcx_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_2 = &rcx_2[0xa]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_2
    *data_143f02ba0 = rcx_2
    void** const var_28 = &data_142d42d18
    data_143f02ba0 = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142ff4958
    rcx_2[2] = sub_141953e80
    rcx_2[4] = 0
    
    if (rcx_2[2] != 0)
        void** const* rcx_5 = &var_28
        (**rcx_5)(rcx_5)
    
    void** const* rcx_6 = &var_28
    (*rcx_6)[2](rcx_6)
    int32_t rbx = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx)
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
    return sub_140b38680("FlushRHIThreadTotal", rbx) __tailcall

data_143effd20(0x8f37)
jump(data_143effcd8)
