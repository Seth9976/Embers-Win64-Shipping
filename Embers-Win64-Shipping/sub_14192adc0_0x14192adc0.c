// 函数: sub_14192adc0
// 地址: 0x14192adc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ff7518
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[5] = 0
*(arg1 + 0x34) = 0
arg1[7].d = 0
*(arg1 + 0x3d) = 1
arg1[8].d = arg2
char rax_1

if (data_143f01c92 == 0)
    rax_1 = sub_140a80f40()

if ((data_143f01c92 != 0 || rax_1 == 0) && sub_140a80f10() == 0)
    void*** rcx_4 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    void* rax_4 = &rcx_4[0xa]
    
    if (rax_4 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x60)
        rcx_4 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_4 = &rcx_4[0xa]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_4
    *data_143f02ba0 = rcx_4
    void** const var_28 = &data_142da2668
    data_143f02ba0 = &rcx_4[1]
    void*** var_20 = arg1
    rcx_4[1] = 0
    *rcx_4 = &data_142ff4958
    rcx_4[2] = sub_141932610
    rcx_4[4] = 0
    
    if (rcx_4[2] != 0)
        void** const* rcx_7 = &var_28
        (**rcx_7)(rcx_7)
    
    void** const* rcx_8 = &var_28
    (*rcx_8)[2](rcx_8)
    return arg1

*(arg1 + 0x3d) = 0
sub_141955ec0(&arg1[3], &arg1[4])
sub_141910730(arg1)
return arg1
