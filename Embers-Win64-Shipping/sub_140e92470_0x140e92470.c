// 函数: sub_140e92470
// 地址: 0x140e92470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = *arg3
int64_t* var_28
sub_1407473e0(arg1 + 0x1d0, sub_140e8f620(&var_28, arg2, &var_18))
int32_t var_20
int64_t* rax_2

if (var_20 == 0)
    rax_2 = var_28
label_140e924e4:
    
    if (rax_2 != 0)
        sub_140a74f90(rax_2)
else
    int64_t* rcx_2 = var_28
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x38))(rcx_2, 0)
        rax_2 = var_28
        
        if (rax_2 != 0)
            rax_2 = sub_140a84c80(rax_2, 0, 0)
            var_28 = rax_2
        
        int32_t var_20_1 = 0
        goto label_140e924e4
return arg1
