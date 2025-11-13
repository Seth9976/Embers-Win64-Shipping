// 函数: sub_141947920
// 地址: 0x141947920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = arg4
int64_t arg_10 = arg2
bool cond:0 = data_143f01c92 == 0
int64_t* var_78 = &arg_10
int64_t* var_68 = &arg_20
int64_t var_60 = arg6
int64_t r8
int64_t var_70 = r8

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
    void*** rax_4 = sub_140a82f30(0x30, 8)
    uint128_t zmm0 = var_78.o
    *rax_4 = &data_142ff85d8
    *(rax_4 + 8) = zmm0
    *(rax_4 + 0x18) = var_68.o
    rax_4[5] = arg1
    int64_t (* var_48)(int64_t* arg1)
    int64_t (* rax_5)(int64_t* arg1) = var_48
    
    if (rax_4 != -8)
        rax_5 = j_sub_14192ec90
    
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
        void* rcx_2 = &var_28
        
        if (rax_4 != 0)
            rcx_2 = rax_4
        
        (*(*rcx_2 + 0x10))(rcx_2)
    
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

return sub_14192ec90(&var_78)
