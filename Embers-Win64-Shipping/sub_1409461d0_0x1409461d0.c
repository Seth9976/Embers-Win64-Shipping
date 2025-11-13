// 函数: sub_1409461d0
// 地址: 0x1409461d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
int64_t* var_38 = nullptr
int32_t var_30 = 0

if (arg5 != &var_38 && arg5[1].d != 0)
    int64_t* rcx = *arg5
    
    if (rcx != 0)
        (*(*rcx + 0x40))(rcx, &var_38)

void*** rax_2 = sub_1405978f0(0x38, arg1)

if (rax_2 != 0)
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    
    if (var_30 != 0)
        int64_t* rcx_1 = var_38
        
        if (rcx_1 != 0)
            int64_t r8 = *rcx_1
            (*(r8 + 0x40))(rcx_1, &var_28, r8)
    
    sub_140947f10(rax_2, arg2, arg3, arg4, &var_28)

sub_140745b20(&var_38)
sub_140745b20(arg5)
return arg1
