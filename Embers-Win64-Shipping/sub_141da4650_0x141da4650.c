// 函数: sub_141da4650
// 地址: 0x141da4650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = nullptr
int32_t rax = 0
int64_t* var_58 = nullptr
int32_t var_50 = 0

if (arg4 != &var_58 && arg4[1].d != 0)
    int64_t* r8 = *arg4
    
    if (r8 != 0)
        (*(*r8 + 0x40))(r8, &var_58)
        rax = var_50
        rcx = var_58

int64_t* var_48 = nullptr
int32_t var_40 = 0

if (rax != 0 && rcx != 0)
    (*(*rcx + 0x40))(rcx, &var_48)

void*** rax_3 = sub_140a84c80(0, 0x30, 0)

if (rax_3 != 0)
    int64_t var_38 = 0
    int32_t var_30_1 = 0
    
    if (var_40 != 0)
        int64_t* rcx_2 = var_48
        
        if (rcx_2 != 0)
            int64_t r8_1 = *rcx_2
            (*(r8_1 + 0x40))(rcx_2, &var_38, r8_1)
    
    sub_141da5090(rax_3, arg2, arg3, &var_38)

sub_140745b20(&var_48)
sub_140745b20(&var_58)
void var_28

if (&var_28 == arg1)
    goto label_141da4752

if (rax_3 != 0)
    (*rax_3)[8](rax_3, arg1)
label_141da4752:
    
    if (rax_3 != 0)
        (*rax_3)[7](rax_3, 0)
        int64_t rax_6 = sub_140a84c80(rax_3, 0, 0)
        
        if (rax_6 != 0)
            sub_140a74f90(rax_6)
else if (arg1[1].d != 0)
    int64_t* rcx_12 = *arg1
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x38))(rcx_12, 0)
        int64_t rcx_13 = *arg1
        
        if (rcx_13 != 0)
            *arg1 = sub_140a84c80(rcx_13, 0, 0)
        
        arg1[1].d = 0

return sub_140745b20(arg4) __tailcall
