// 函数: sub_140f98200
// 地址: 0x140f98200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = *arg3
int64_t* var_48
int64_t* rax = sub_140f942c0(&var_48, arg2, &var_38, arg4)
char var_24 = 1
int32_t var_28 = 0
int64_t var_20 = 0
int32_t var_18 = 0
sub_140692f90(&var_20, rax)
*(arg1 + 0x1a8) = var_28
*(arg1 + 0x1ac) = var_24
sub_140692f90(arg1 + 0x1b0, &var_20)
sub_140745b20(&var_20)
int32_t var_40
int64_t* rax_3

if (var_40 == 0)
    rax_3 = var_48
label_140f982c5:
    
    if (rax_3 != 0)
        sub_140a74f90(rax_3)
else
    int64_t* rcx_4 = var_48
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x38))(rcx_4, 0)
        rax_3 = var_48
        
        if (rax_3 != 0)
            rax_3 = sub_140a84c80(rax_3, 0, 0)
            var_48 = rax_3
        
        int32_t var_40_1 = 0
        goto label_140f982c5
return arg1
