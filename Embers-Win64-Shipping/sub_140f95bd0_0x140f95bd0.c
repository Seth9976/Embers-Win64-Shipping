// 函数: sub_140f95bd0
// 地址: 0x140f95bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = *arg3
int64_t* var_58
int64_t* rax = sub_140f94400(&var_58, arg2, &var_48, arg4)
char var_28 = 1
int64_t var_20 = 0
int32_t var_18 = 0
sub_140692f90(&var_20, rax)
*(arg1 + 0x1d8) = var_28
int128_t var_38
*(arg1 + 0x1c8) = var_38
sub_1407473e0(arg1 + 0x1e0, &var_20)
sub_140745b20(&var_20)
int32_t var_50
int64_t* rax_3

if (var_50 == 0)
    rax_3 = var_58
label_140f95c8a:
    
    if (rax_3 != 0)
        sub_140a74f90(rax_3)
else
    int64_t* rcx_4 = var_58
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x38))(rcx_4, 0)
        rax_3 = var_58
        
        if (rax_3 != 0)
            rax_3 = sub_140a84c80(rax_3, 0, 0)
            var_58 = rax_3
        
        int32_t var_50_1 = 0
        goto label_140f95c8a
return arg1
