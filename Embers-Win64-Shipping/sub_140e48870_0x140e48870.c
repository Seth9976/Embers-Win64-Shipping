// 函数: sub_140e48870
// 地址: 0x140e48870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = *arg3
int64_t* var_48
int64_t* rax = sub_140e45b90(&var_48, arg2, &var_38)
char var_20 = 1
int64_t var_28 = 0
int64_t var_18 = 0
int32_t var_10 = 0
sub_140692f90(&var_18, rax)
*(arg1 + 0x1a0) = var_28
*(arg1 + 0x1a8) = var_20
sub_1407473e0(arg1 + 0x1b0, &var_18)
sub_140745b20(&var_18)
int32_t var_40
int64_t* rax_4

if (var_40 == 0)
    rax_4 = var_48
label_140e48928:
    
    if (rax_4 != 0)
        sub_140a74f90(rax_4)
else
    int64_t* rcx_4 = var_48
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x38))(rcx_4, 0)
        rax_4 = var_48
        
        if (rax_4 != 0)
            rax_4 = sub_140a84c80(rax_4, 0, 0)
            var_48 = rax_4
        
        int32_t var_40_1 = 0
        goto label_140e48928
return arg1
