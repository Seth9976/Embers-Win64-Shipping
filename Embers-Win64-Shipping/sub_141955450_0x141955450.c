// 函数: sub_141955450
// 地址: 0x141955450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t arg_10 = arg2
int32_t* var_88 = &arg_10

if (data_143f01c92 != 0 && sub_140a80f10() == 0)
    int64_t rdi_1 = data_143f02bc8 + 0xf
    int64_t result = 0
    void*** rdi_2 = rdi_1 & 0xfffffffffffffff0
    void* rax_2 = &rdi_2[0xa]
    
    if (rax_2 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x60)
        rdi_2 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_2 = &rdi_2[0xa]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_2
    *data_143f02ba0 = rdi_2
    data_143f02ba0 = &rdi_2[1]
    int64_t* rax_4 = sub_140a82f30(0x28, 8)
    *rax_4 = &data_142ec17e8
    *(rax_4 + 8) = (&result).o
    *(rax_4 + 0x18) = _mm_unpacklo_pd(arg1.o, var_88)
    int64_t* (* var_58)(int64_t* arg1)
    int64_t* (* rax_5)(int64_t* arg1) = var_58
    
    if (rax_4 != -8)
        rax_5 = sub_141953ee0
    
    *rdi_2 = &data_142ff4958
    rdi_2[1] = 0
    rdi_2[2] = rax_5
    rdi_2[4] = 0
    void var_38
    
    if (rdi_2[2] != 0)
        int64_t* rcx_1 = &var_38
        
        if (rax_4 != 0)
            rcx_1 = rax_4
        
        (**rcx_1)(rcx_1)
    
    if (rax_5 != 0)
        int64_t* rcx_2 = &var_38
        
        if (rax_4 != 0)
            rcx_2 = rax_4
        
        (*(*rcx_2 + 0x10))(rcx_2)
    
    int32_t rbx_2 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbx_2)
    
    if (data_143f02bac u> 0)
        j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg4)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_2
    rdx_2.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rbx_2)
    return result

data_143effcd8(0x8f37, zx.q(*(arg1 + 0x20)))
return data_143f00168(0x8f37, 0, zx.q(arg_18), 1, arg1, &arg_18, var_88) + zx.q(arg_10)
