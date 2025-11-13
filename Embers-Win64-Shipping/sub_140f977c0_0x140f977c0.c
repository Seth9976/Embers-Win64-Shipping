// 函数: sub_140f977c0
// 地址: 0x140f977c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = *arg3
int64_t* var_28
sub_1407473e0(arg1 + 0x2b8, sub_140f94540(&var_28, arg2, &var_18))
int32_t var_20
int64_t* rax_2

if (var_20 == 0)
    rax_2 = var_28
label_140f97834:
    
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
        goto label_140f97834
return arg1
