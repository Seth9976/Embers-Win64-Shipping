// 函数: sub_141947fb0
// 地址: 0x141947fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
bool cond:0 = data_143f01c92 == 0
int64_t* var_88 = &arg_10
void arg_38
void* var_80 = &arg_38
void arg_28
void* var_78 = &arg_28
void arg_30
void* var_70 = &arg_30
int64_t r8
int64_t var_60 = r8

if (not(cond:0) && sub_140a80f10() == 0)
    void*** rdi_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    void* rax_2 = &rdi_2[0xa]
    
    if (rax_2 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x60)
        rdi_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_2 = &rdi_2[0xa]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_2
    *data_143f02ba0 = rdi_2
    data_143f02ba0 = &rdi_2[1]
    void*** rax_4 = sub_140a82f30(0x40, 8)
    int128_t zmm0 = var_88.o
    *rax_4 = &data_142ff8618
    *(rax_4 + 8) = zmm0
    *(rax_4 + 0x18) = var_78.o
    *(rax_4 + 0x28) = arg1.o
    rax_4[7] = arg4
    void* (* var_48)(int64_t* arg1)
    void* (* rax_5)(int64_t* arg1) = var_48
    
    if (rax_4 != -8)
        rax_5 = j_sub_14192d490
    
    rdi_2[1] = 0
    *rdi_2 = &data_142ff4958
    rdi_2[2] = rax_5
    rdi_2[4] = 0
    void var_28
    
    if (rdi_2[2] != 0)
        void*** rcx_1 = &var_28
        
        if (rax_4 != 0)
            rcx_1 = rax_4
        
        (**rcx_1)(rcx_1)
    
    if (rax_5 != 0)
        void*** rcx_2 = &var_28
        
        if (rax_4 != 0)
            rcx_2 = rax_4
        
        (*rcx_2)[2](rcx_2)
    
    int32_t rbx_1 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx_1)
    
    if (data_143f02bac u> 0)
        j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg3, arg5)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_2
    rdx_2.b = 1
    sub_14198b7d0()
    return sub_140b38680("FlushRHIThreadTotal", rbx_1)

return sub_14192d490(&var_88)
