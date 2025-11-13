// 函数: sub_141b5ebc0
// 地址: 0x141b5ebc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* rcx_1 = *(arg1 + 0x228) + 0x98
int32_t arg_10 = 0
int32_t arg_8 = 0
int64_t var_58 = 0
int64_t var_50 = 0
int64_t* var_68
sub_141b5f6a0(rcx_1, &var_68, arg3)
int64_t* rsi = var_68
int64_t rax_9
int64_t* rbx_2
int64_t* var_60

if (rsi != 0)
    rbx_2 = var_60
    rax_9 = *(*rsi + 0x18)
else
    int64_t* rbx = *(arg1 + 0x228)
    int64_t var_48
    char rax_2 =
        (*(*rbx + 0x28))(rbx, &arg_18, sub_140b63b70(&arg_18, &var_48), &arg_10, &arg_8, &var_58)
    int64_t rcx_4 = var_48
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t arg_20
    
    if (rax_2 == 0)
        rbx_2 = var_60
        rax_9 = 0
        arg_20 = 0
    else
        int32_t* var_78_1
        var_78_1.d = arg_8
        int64_t* rax_4 =
            sub_141b61b30(*(arg1 + 0x228), &var_48, arg_18, arg_10, var_78_1.d, &var_58)
        rbx_2 = var_60
        
        if (&var_68 != rax_4)
            rsi = *rax_4
            int64_t* rdi_2 = rbx_2
            *rax_4 = 0
            int64_t* rcx_6 = rax_4[1]
            
            if (rcx_6 != rbx_2)
                rax_4[1] = 0
                rbx_2 = rcx_6
                
                if (rdi_2 != 0)
                    rdi_2[1].d -= 1
                    
                    if (rdi_2[1].d == 1)
                        (**rdi_2)(rdi_2)
                        int32_t temp5_1 = *(rdi_2 + 0xc)
                        *(rdi_2 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rdi_2 + 8))(rdi_2, 1)
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp3_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        if (rsi != 0)
            rax_9 = *(*rsi + 0x18)
        else
            arg_20 = 0
            rax_9 = 0
*arg2 = rax_9

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t rcx_13 = var_58

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return arg2
