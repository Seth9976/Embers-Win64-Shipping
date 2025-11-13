// 函数: sub_141955680
// 地址: 0x141955680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int64_t arg_18 = arg3
bool cond:0 = data_143f01c92 == 0
int64_t* var_b0 = &arg_18
int32_t* var_a8 = &arg_20
void arg_30
void* var_a0 = &arg_30
void arg_28
void* var_98 = &arg_28

if (not(cond:0) && sub_140a80f10() == 0)
    int64_t rdi_1 = *(arg2 + 0x30) + 0xf
    int64_t result = 0
    void*** rdi_2 = rdi_1 & 0xfffffffffffffff0
    void* rax_2 = &rdi_2[0xa]
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(&arg2[0x30], 0x60)
        rdi_2 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_2 = &rdi_2[0xa]
    
    *(arg2 + 0x30) = rax_2
    int64_t* rax_3 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    int128_t zmm0 = var_b0.o
    *rax_3 = rdi_2
    *(arg2 + 8) = &rdi_2[1]
    int64_t* var_48 = &result
    int128_t var_30 = var_a0.o
    void*** rax_4 = sub_140a82f30(0x30, 8)
    *rax_4 = &data_142ff85d8
    *(rax_4 + 8) = var_48.o
    *(rax_4 + 0x18) = zmm0
    rax_4[5] = var_98
    int64_t (* var_88)(int64_t* arg1)
    int64_t (* rax_5)(int64_t* arg1) = var_88
    
    if (rax_4 != -8)
        rax_5 = sub_141953f70
    
    *rdi_2 = &data_142ff4958
    rdi_2[1] = 0
    rdi_2[2] = rax_5
    rdi_2[4] = 0
    void var_68
    
    if (rdi_2[2] != 0)
        void*** rcx_2 = &var_68
        
        if (rax_4 != 0)
            rcx_2 = rax_4
        
        (**rcx_2)(rcx_2)
    
    if (rax_5 != 0)
        void*** rcx_3 = &var_68
        
        if (rax_4 != 0)
            rcx_3 = rax_4
        
        (*rcx_3)[2](rcx_3)
    
    int32_t rbx_1 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx_1)
    
    if (*(arg2 + 0x14) u> 0)
        j_sub_14196ef60(&data_143f02b88, arg2, arg5, arg6)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_3
    rdx_3.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rbx_1)
    return result

return sub_141953450(&var_b0)
