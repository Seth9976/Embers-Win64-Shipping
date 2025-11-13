// 函数: sub_140edf450
// 地址: 0x140edf450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_58 = *arg3
int64_t* var_68
int64_t* rax = sub_140e45dd0(&var_68, arg2, &var_58)
char var_20 = 1
int128_t var_48
__builtin_memcpy(&var_48, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
int64_t var_18 = 0
int128_t var_30 = zx.o(0)
int32_t var_10 = 0
sub_140692f90(&var_18, rax)
sub_140693390(arg1 + 0x2a8, &var_48)
*(arg1 + 0x2d0) = var_20
sub_1407473e0(arg1 + 0x2d8, &var_18)
sub_140745b20(&var_18)
int64_t* rbx = var_30:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t var_60
int64_t* rax_5

if (var_60 == 0)
    rax_5 = var_68
label_140edf55c:
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)
else
    int64_t* rcx_7 = var_68
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x38))(rcx_7, 0)
        rax_5 = var_68
        
        if (rax_5 != 0)
            rax_5 = sub_140a84c80(rax_5, 0, 0)
            var_68 = rax_5
        
        int32_t var_60_1 = 0
        goto label_140edf55c
return arg1
