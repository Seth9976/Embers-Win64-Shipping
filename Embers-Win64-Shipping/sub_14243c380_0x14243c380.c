// 函数: sub_14243c380
// 地址: 0x14243c380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int64_t arg_18 = arg3

if (arg4 != 0)
    int16_t* const r8
    
    if (arg2[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *arg2
    
    int64_t var_68
    sub_140a2e390(&var_68, u"LogText: '%s'", r8)
    void var_48
    int64_t* rax = sub_140aae2f0(&var_48, &var_68)
    void var_58
    void var_30
    sub_140ad9270(sub_140accdf0(&var_30, &arg_18), &var_58, rax)
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp2_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    result = sub_140acd9c0(&var_30)
    int64_t* var_40
    
    if (var_40 != 0)
        result = var_40[1].d
        var_40[1].d -= 1
        
        if (result == 1)
            result = (**var_40)(var_40)
            int32_t rdi_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rdi_1 == 1)
                result = (*(*var_40 + 8))(var_40, zx.q(rdi_1))
    
    int64_t rcx_9 = var_68
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)

int64_t rcx_10 = *arg2

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
