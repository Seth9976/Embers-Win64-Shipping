// 函数: sub_140ee11e0
// 地址: 0x140ee11e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = *arg3
int64_t* var_58
int64_t* rax = sub_140e46010(&var_58, arg2, &var_48)
int64_t var_38
sub_140a96170(&var_38)
char var_20 = 1
int64_t var_18 = 0
int32_t var_10 = 0
sub_140692f90(&var_18, rax)
int64_t rcx_3 = *(arg1 + 0x1a0)
*(arg1 + 0x1a0) = var_38
var_38 = rcx_3
int64_t* rcx_4 = *(arg1 + 0x1a8)
int64_t var_30
*(arg1 + 0x1a8) = var_30
int32_t var_28
*(arg1 + 0x1b0) = var_28
*(arg1 + 0x1b8) = var_20
sub_1407473e0(arg1 + 0x1c0, &var_18)
sub_140745b20(&var_18)

if (rcx_4 != 0)
    rcx_4[1].d -= 1
    
    if (rcx_4[1].d == 1)
        (**rcx_4)(rcx_4)
        int32_t rdi_1 = *(rcx_4 + 0xc)
        *(rcx_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rcx_4 + 8))(rcx_4, zx.q(rdi_1))

int32_t var_50
int64_t* rax_9

if (var_50 == 0)
    rax_9 = var_58
label_140ee1328:
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)
else
    int64_t* rcx_9 = var_58
    
    if (rcx_9 != 0)
        (*(*rcx_9 + 0x38))(rcx_9, 0)
        rax_9 = var_58
        
        if (rax_9 != 0)
            rax_9 = sub_140a84c80(rax_9, 0, 0)
            var_58 = rax_9
        
        int32_t var_50_1 = 0
        goto label_140ee1328
return arg1
