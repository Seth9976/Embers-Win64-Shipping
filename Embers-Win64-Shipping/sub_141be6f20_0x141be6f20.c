// 函数: sub_141be6f20
// 地址: 0x141be6f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14065da90(&arg1[0x25], arg2)
sub_140d3a3a0(&arg1[0x28], nullptr)
int32_t result = 0
arg1[0x29] = 0
int64_t arg_8 = 0

if (arg1[0x52] != 0)
    void var_38
    (*(*arg1 + 0x2d0))(arg1, &var_38)
    sub_140f8d430(arg1[0x52], &var_38)
    void var_18
    result = sub_140745b20(&var_18)
    int64_t* var_30
    
    if (var_30 != 0)
        result = var_30[1].d
        var_30[1].d -= 1
        
        if (result == 1)
            (**var_30)(var_30)
            result = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (result == 1)
                result = (*(*var_30 + 8))(var_30, 1)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        result = (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
