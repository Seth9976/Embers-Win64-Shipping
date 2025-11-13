// 函数: sub_1419135e0
// 地址: 0x1419135e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
int64_t* var_90 = &arg_20
char arg_28

if (data_143f01c92 == 0)
    sub_141959810(arg1, arg2, arg4, arg_28)
else if (sub_140a80f10() != 0)
    sub_141959810(arg1, arg2, arg_20, arg_28)
else
    int64_t rdi_2 = *(arg3 + 0x30) + 0xf
    int64_t arg_8 = 0
    void*** rdi_3 = rdi_2 & 0xfffffffffffffff0
    void* rax_2 = &rdi_3[0xa]
    
    if (rax_2 u> *(arg3 + 0x38))
        sub_140b0e3d0(&arg3[0x30], 0x60)
        rdi_3 = (*(arg3 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_2 = &rdi_3[0xa]
    
    *(arg3 + 0x30) = rax_2
    int64_t* rax_3 = *(arg3 + 8)
    *(arg3 + 0x14) += 1
    *rax_3 = rdi_3
    *(arg3 + 8) = &rdi_3[1]
    void*** rax_4 = sub_140a82f30(0x28, 8)
    *rax_4 = &data_142ff5d08
    *(rax_4 + 8) = (&arg_8).o
    *(rax_4 + 0x18) = _mm_unpacklo_pd(arg1.o, zx.q(&arg_28))
    void**** (* var_58)(int64_t* arg1)
    void**** (* rax_5)(int64_t* arg1) = var_58
    
    if (rax_4 != -8)
        rax_5 = j_sub_141908a20
    
    *rdi_3 = &data_142ff4958
    rdi_3[1] = 0
    rdi_3[2] = rax_5
    rdi_3[4] = 0
    void var_38
    
    if (rdi_3[2] != 0)
        void*** rcx_2 = &var_38
        
        if (rax_4 != 0)
            rcx_2 = rax_4
        
        (**rcx_2)(rcx_2)
    
    if (rax_5 != 0)
        void*** rcx_3 = &var_38
        
        if (rax_4 != 0)
            rcx_3 = rax_4
        
        (*rcx_3)[2](rcx_3)
    
    int32_t rbx_2 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx_2)
    
    if (*(arg3 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg3, arg5, arg6)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_3
    rdx_3.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rbx_2)
    *arg2 = arg_8
return arg2
