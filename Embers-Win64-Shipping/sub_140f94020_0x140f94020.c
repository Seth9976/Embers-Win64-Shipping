// 函数: sub_140f94020
// 地址: 0x140f94020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_48 = *arg3
int64_t* var_58
int64_t* rax = sub_140f94cc0(&var_58, arg2, &var_48)
char var_28 = 1
int64_t var_20 = 0
int128_t var_38 = zx.o(0)
int32_t var_18 = 0
sub_1407473e0(&var_20, rax)

if (arg1 + 0x1a0 != &var_38)
    *(arg1 + 0x1a0) = var_38.q
    int64_t rax_2 = var_38:8.q
    int64_t* rbx_1 = *(arg1 + 0x1a8)
    var_38.q = 0
    
    if (rax_2 != rbx_1)
        var_38:8.q = 0
        *(arg1 + 0x1a8) = rax_2
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

*(arg1 + 0x1b0) = var_28
sub_1407473e0(arg1 + 0x1b8, &var_20)
sub_140745b20(&var_20)
int64_t* rbx_2 = var_38:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int32_t var_50
int64_t* rax_9

if (var_50 == 0)
    rax_9 = var_58
label_140f9415a:
    
    if (rax_9 != 0)
        sub_140a74f90(rax_9)
else
    int64_t* rcx_8 = var_58
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x38))(rcx_8, 0)
        rax_9 = var_58
        
        if (rax_9 != 0)
            rax_9 = sub_140a84c80(rax_9, 0, 0)
            var_58 = rax_9
        
        int32_t var_50_1 = 0
        goto label_140f9415a
return arg1
