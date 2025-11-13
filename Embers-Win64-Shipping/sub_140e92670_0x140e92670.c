// 函数: sub_140e92670
// 地址: 0x140e92670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int64_t var_48 = *arg4
void* rax_1 = arg4[1]
int128_t var_88 = zmm0
void* var_40 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int32_t var_38 = arg4[2].d
char var_30 = arg4[3].b
int64_t var_28 = 0
int32_t var_20 = 0
sub_140692f90(&var_28, &arg4[4])
int64_t* var_98
int64_t* rax_4 = sub_140e8fd80(&var_98, arg2, &var_88, &var_48)
int64_t var_78
sub_140a96170(&var_78)
char var_60 = 1
int64_t var_58 = 0
int32_t var_50 = 0
sub_140692f90(&var_58, rax_4)
int64_t rcx_4 = *arg1
*arg1 = var_78
var_78 = rcx_4
int64_t* rcx_5 = arg1[1]
int64_t var_70
arg1[1] = var_70
int32_t var_68
arg1[2].d = var_68
arg1[3].b = var_60
sub_1407473e0(&arg1[4], &var_58)
sub_140745b20(&var_58)

if (rcx_5 != 0)
    rcx_5[1].d -= 1
    
    if (rcx_5[1].d == 1)
        (**rcx_5)(rcx_5)
        int32_t rax_11 = *(rcx_5 + 0xc)
        *(rcx_5 + 0xc) -= 1
        
        if (rax_11 == 1)
            (*(*rcx_5 + 8))(rcx_5, 1)

int32_t var_90
int64_t* rax_14

if (var_90 == 0)
    rax_14 = var_98
label_140e927d3:
    
    if (rax_14 != 0)
        sub_140a74f90(rax_14)
else
    int64_t* rcx_10 = var_98
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x38))(rcx_10, 0)
        rax_14 = var_98
        
        if (rax_14 != 0)
            rax_14 = sub_140a84c80(rax_14, 0, 0)
            var_98 = rax_14
        
        int32_t var_90_1 = 0
        goto label_140e927d3
sub_140745b20(&arg4[4])
int64_t* rbx_3 = arg4[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rdi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_1))

return arg1
