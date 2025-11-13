// 函数: sub_14194f880
// 地址: 0x14194f880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
bool cond:0 = data_143f01c92 == 0
int64_t* arg_20 = &arg_18

if (not(cond:0) && sub_140a80f10() == 0)
    void*** rcx_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    void* rax_2 = &rcx_2[0xa]
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(&arg2[0x30], 0x60)
        rcx_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_2 = &rcx_2[0xa]
    
    *(arg2 + 0x30) = rax_2
    int64_t* rax_3 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_3 = rcx_2
    void** const var_28 = &data_142da2668
    *(arg2 + 8) = &rcx_2[1]
    int64_t* var_20 = &arg_18
    rcx_2[1] = 0
    *rcx_2 = &data_142ff4958
    rcx_2[2] = j_sub_14192e730
    rcx_2[4] = 0
    
    if (rcx_2[2] != 0)
        void** const* rcx_6 = &var_28
        (**rcx_6)(rcx_6)
    
    void** const* rcx_7 = &var_28
    (*rcx_7)[2](rcx_7)
    int32_t rbx = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx)
    
    if (*(arg2 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg2, arg5, arg4)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_3
    rdx_3.b = 1
    sub_14198b7d0()
    return sub_140b38680("FlushRHIThreadTotal", rbx)

return sub_14192e730(&arg_20)
