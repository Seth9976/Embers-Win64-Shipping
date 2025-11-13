// 函数: sub_140ee4e00
// 地址: 0x140ee4e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_508
int64_t rax_1 = __security_cookie ^ &var_508

if (*(arg3 + 0x1a0) != data_143e244b0)
label_140ee5108:
    *arg2 = *(arg3 + 0x1a0)
    void* rax_17 = *(arg3 + 0x1a8)
    arg2[1] = rax_17
    
    if (rax_17 != 0)
        *(rax_17 + 8) += 1
else
    if (*(arg3 + 0x218) == 0)
    label_140ee4e66:
        
        if (sub_140ab3dc0(sub_140d44910(arg3 + 0x1f0)) != 0)
            goto label_140ee5108
    else
        int64_t* rcx = *(arg3 + 0x210)
        
        if (rcx == 0)
            goto label_140ee4e66
        
        if ((*(*rcx + 0x28))(rcx) == 0)
            goto label_140ee4e66
    
    char rbx_1 = data_1439ae51f
    int64_t r12
    r12.b = 0
    char var_4b0_1 = rbx_1
    char var_4af_1 = 1
    int64_t var_4a8 = 0
    int32_t var_4a0_1 = 0
    char var_4d8
    char r15_1
    
    if (*(arg3 + 0x38b) == 0)
        r15_1 = var_4d8
    else
        r15_1 = *(arg3 + 0x38a)
        r12.b = 1
    
    char r13_1 = *(arg3 + 0x389)
    char rbp_1
    
    if (r13_1 == 0)
        rbp_1 = var_4d8
    else
        rbp_1 = *(arg3 + 0x388)
    
    void var_488
    int64_t* rax_7 = sub_14068d9d0(&var_488)
    rax_7[0xf].b = rbx_1
    *(rax_7 + 0x79) = 1
    sub_1407473e0(&rax_7[0x10], &var_4a8)
    sub_14065da90(&rax_7[0x34], arg3 + 0x1f0)
    rax_7[0x37].b = *(arg3 + 0x208)
    sub_140692f90(&rax_7[0x38], arg3 + 0x210)
    rax_7[0x3a] = *(arg3 + 0x1b8)
    
    if (&var_4d8 != &rax_7[0x83])
        if (*(rax_7 + 0x419) != 0)
            *(rax_7 + 0x419) = 0
        
        if (r13_1 != 0)
            rax_7[0x83].b = rbp_1
            *(rax_7 + 0x419) = 1
    
    if (&var_4d8 != rax_7 + 0x41a)
        if (*(rax_7 + 0x41b) != 0)
            *(rax_7 + 0x41b) = 0
        
        if (r12.b != 0)
            *(rax_7 + 0x41a) = r15_1
            *(rax_7 + 0x41b) = 1
    
    void*** rax_11 = j_sub_140a82f30(0x7a8)
    void*** rdi_2 = rax_11
    
    if (rax_11 == 0)
        rdi_2 = nullptr
    else
        rax_11[1].d = 1
        *(rax_11 + 0xc) = 1
        *rdi_2 = &data_142d8b060
        
        if (rdi_2 != -0x10)
            sub_140f66da0(&rdi_2[2])
    
    void* var_4c8 = &rdi_2[2]
    sub_14065fa30(&var_4c8, &rdi_2[2])
    int64_t var_4e8_1 = 0x798
    void var_4d6
    void* var_4b8_1 = &var_4d6
    void* var_498
    void** rax_12 = sub_140697520(&var_4c8, &var_498, rax_7, sub_140e23ed0(&rdi_2[2], "STextBlock"))
    *arg2 = *rax_12
    void* rcx_13 = rax_12[1]
    arg2[1] = rcx_13
    
    if (rcx_13 != 0)
        *(rcx_13 + 8) += 1
    
    int64_t* var_490
    
    if (var_490 != 0)
        var_490[1].d -= 1
        
        if (var_490[1].d == 1)
            (**var_490)(var_490)
            int32_t temp2_1 = *(var_490 + 0xc)
            *(var_490 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_490 + 8))(var_490, 1)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp3_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                void** r8_2 = *rdi_2
                r8_2[1](rdi_2, 1, r8_2)
    
    sub_1406913d0(&var_488)
    sub_140745b20(&var_4a8)

__security_check_cookie(rax_1 ^ &var_508)
return arg2
