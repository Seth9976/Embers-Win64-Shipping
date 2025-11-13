// 函数: sub_141947b30
// 地址: 0x141947b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (arg2 == 0)
    int32_t rcx = *(arg4 + 0xc)
    int32_t rsi_1 = 0
    arg4[1].d = 0
    
    if (rcx != 0)
        sub_140679c00(arg4, arg2.d)
        rcx = *(arg4 + 0xc)
        rsi_1 = arg4[1].d
    
    int32_t rdi_3 = (arg3[3] - arg3[1]) * (arg3[2] - *arg3)
    int32_t rax_2 = rsi_1 + rdi_3
    arg4[1].d = rax_2
    
    if (rax_2 s> rcx)
        sub_1406105e0(arg4)
    
    return memset(*arg4 + (sx.q(rsi_1) << 2), 0, sx.q(rdi_3) << 2)

bool cond:0_1 = data_143f01c92 == 0
int64_t* var_68_1 = &arg_10
int64_t var_78 = arg1
uint64_t* var_70_1 = arg4
int32_t* var_60_1 = arg3

if (not(cond:0_1) && sub_140a80f10() == 0)
    void*** rdi_6 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    void* rax_7 = &rdi_6[0xa]
    
    if (rax_7 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x60)
        rdi_6 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_7 = &rdi_6[0xa]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_7
    *data_143f02ba0 = rdi_6
    data_143f02ba0 = &rdi_6[1]
    void*** rax_9 = sub_140a82f30(0x30, 8)
    uint128_t zmm0_1 = var_78.o
    *rax_9 = &data_142ff85d8
    *(rax_9 + 8) = zmm0_1
    *(rax_9 + 0x18) = var_68_1.o
    rax_9[5] = arg7
    void* (* var_48)(int64_t* arg1)
    void* (* rax_10)(int64_t* arg1) = var_48
    
    if (rax_9 != -8)
        rax_10 = j_sub_14192e360
    
    rdi_6[1] = 0
    *rdi_6 = &data_142ff4958
    rdi_6[2] = rax_10
    rdi_6[4] = 0
    void var_28
    
    if (rdi_6[2] != 0)
        void*** rcx_6 = &var_28
        
        if (rax_9 != 0)
            rcx_6 = rax_9
        
        (**rcx_6)(rcx_6)
    
    if (rax_10 != 0)
        void* rcx_7 = &var_28
        
        if (rax_9 != 0)
            rcx_7 = rax_9
        
        (*(*rcx_7 + 0x10))(rcx_7)
    
    int32_t rbx_2 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx_2)
    
    if (data_143f02bac u> 0)
        j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg6)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_3
    rdx_3.b = 1
    sub_14198b7d0()
    return sub_140b38680("FlushRHIThreadTotal", rbx_2)

return sub_14192e360(&var_78)
