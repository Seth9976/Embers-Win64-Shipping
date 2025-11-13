// 函数: sub_140e17d90
// 地址: 0x140e17d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_68
sub_140dd3380(arg2, &var_68)
void* rdi = var_68
void* rax_1

if (rdi != 0)
    rax_1 = sub_140d3c6e0(rdi + 0x20)

void* var_58
int64_t var_48
int64_t arg_18
int64_t arg_20

if (rdi == 0 || rax_1 == 0)
    sub_140e18420(&var_58, arg2)
    void* rdi_2 = var_58
    void* rax_6
    
    if (rdi_2 != 0)
        rax_6 = sub_140d3c6e0(rdi_2 + 0x20)
    
    if (rdi_2 == 0 || rax_6 == 0)
        (*(*arg2 + 0x1e8))(arg2, arg1)
    else
        arg_20 = *(rax_6 + 0x18)
        arg_18 = *(rdi_2 + 8)
        int64_t var_28
        int64_t* rax_10 = (*(*arg2 + 0x1f0))(arg2, &var_28)
        int16_t* const rbx_2 = &data_142d40450
        int16_t* const rdi_3
        
        if (rax_10[1].d == 0)
            rdi_3 = &data_142d40450
        else
            rdi_3 = *rax_10
        
        int64_t var_38
        int64_t* rax_11 = sub_140b63b70(&arg_18, &var_38)
        
        if (rax_11[1].d != 0)
            *rax_11
        
        int64_t* rax_12 = sub_140b63b70(&arg_20, &var_48)
        
        if (rax_12[1].d != 0)
            rbx_2 = *rax_12
        
        int16_t* const var_78_1 = rdi_3
        sub_140a2e390(arg1, u"%s [%s(%s)]", rbx_2)
        int64_t rcx_13 = var_48
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = var_38
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t rcx_15 = var_28
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp2_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
else
    arg_20 = *(rax_1 + 0x18)
    arg_18 = *(rdi + 8)
    int64_t* rax_4 = sub_140b63b70(&arg_18, &var_48)
    int16_t* const rbx_1 = &data_142d40450
    
    if (rax_4[1].d != 0)
        *rax_4
    
    int64_t* rax_5 = sub_140b63b70(&arg_20, &var_58)
    
    if (rax_5[1].d != 0)
        rbx_1 = *rax_5
    
    sub_140a2e390(arg1, u"%s [%s]", rbx_1)
    void* rcx_5 = var_58
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t rcx_6 = var_48
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp3_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

return arg1
