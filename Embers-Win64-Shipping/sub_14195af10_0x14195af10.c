// 函数: sub_14195af10
// 地址: 0x14195af10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1

if (data_143f01c92 != 0)
    rax_1 = sub_140a80f10()

int64_t result

if (data_143f01c92 == 0 || rax_1 != 0)
    void* rax_9 = arg1[2]
    void* rcx_5 = &arg1[4]
    
    if (rax_9 != 0)
        rcx_5 = rax_9
    
    result = (*arg1)((*(*rcx_5 + 8))(rcx_5))
else
    void*** r8_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    void* rax_2 = &r8_3[0xa]
    
    if (rax_2 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x60)
        r8_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_2 = &r8_3[0xa]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_2
    *data_143f02ba0 = r8_3
    data_143f02ba0 = &r8_3[1]
    int64_t result_1 = *arg1
    int128_t* rax_4 = arg1[2]
    arg1[2] = 0
    int128_t zmm1 = *(arg1 + 0x30)
    int128_t var_28 = *(arg1 + 0x20)
    int128_t var_18_1 = zmm1
    
    if (result_1 != 0)
        *arg1 = 0
    
    r8_3[1] = 0
    *r8_3 = &data_142ff4958
    result = result_1
    r8_3[2] = result
    r8_3[4] = 0
    
    if (r8_3[2] != 0)
        int128_t* rcx = &var_28
        
        if (rax_4 != 0)
            rcx = rax_4
        
        result = (**rcx)(rcx)
    
    if (result_1 != 0)
        int128_t* rcx_1 = &var_28
        
        if (rax_4 != 0)
            rcx_1 = rax_4
        
        result = (*(*rcx_1 + 0x10))(rcx_1)
    
    if (arg2 != 0)
        int32_t rdi_1 = data_143f029c8
        sub_140b34200("FlushRHIThreadTotal", rdi_1)
        
        if (data_143f02bac u> 0)
            j_sub_14196ef60(&data_143f02b88, &data_143f02b98, arg3, arg4)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_3
        rdx_3.b = 1
        sub_14198b7d0()
        result = sub_140b38680("FlushRHIThreadTotal", rdi_1)

if (*arg1 == 0)
    return result

void* rax_12 = arg1[2]
void* rcx_7 = &arg1[4]

if (rax_12 != 0)
    rcx_7 = rax_12

return (*(*rcx_7 + 0x10))(rcx_7)
