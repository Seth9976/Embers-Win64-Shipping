// 函数: sub_140e91110
// 地址: 0x140e91110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = *arg3
int64_t* var_48
int64_t* rax = sub_140e8f8a0(&var_48, arg2, &var_38)
int16_t var_28 = 0x100
int64_t var_20 = 0
int32_t var_18 = 0
sub_1407473e0(&var_20, rax)
*(arg1 + 0x1d0) = var_28.b
*(arg1 + 0x1d1) = var_28:1.b
sub_1407473e0(arg1 + 0x1d8, &var_20)
sub_140745b20(&var_20)
int32_t var_40
int64_t* rax_4

if (var_40 == 0)
    rax_4 = var_48
label_140e911cb:
    
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
        goto label_140e911cb
return arg1
