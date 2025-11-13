// 函数: sub_140f95d80
// 地址: 0x140f95d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_38 = *arg3
int64_t* var_48
int64_t* rax = sub_140f951c0(&var_48, arg2, &var_38)
char rdx = 0
int16_t var_28 = 0x100
int64_t var_20 = 0
int32_t var_18 = 0
char r8_1 = 1

if (rax != &var_20 && rax[1].d != 0)
    int64_t* rcx_1 = *rax
    
    if (rcx_1 != 0)
        (*(*rcx_1 + 0x40))(rcx_1, &var_20)
        r8_1 = var_28:1.b
        rdx = var_28.b

*(arg1 + 0x1d0) = rdx
*(arg1 + 0x1d1) = r8_1
sub_1407473e0(arg1 + 0x1d8, &var_20)
sub_140745b20(&var_20)
int32_t var_40
int64_t* rax_3

if (var_40 == 0)
    rax_3 = var_48
label_140f95e58:
    
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
        goto label_140f95e58
return arg1
