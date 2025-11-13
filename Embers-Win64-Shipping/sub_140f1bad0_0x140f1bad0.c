// 函数: sub_140f1bad0
// 地址: 0x140f1bad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int64_t var_38 = 0
int32_t var_30 = 0
sub_1407473e0(&var_38, arg4)
int64_t* rbx = *(arg2 + 0x10)
int64_t rbp = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rbp = *(arg2 + 8)
        rbx[1].d += 1

*arg1 = 0
arg1[1].d = 0

if (rbx != 0)
    rbx[1].d += 1

int64_t var_48 = 0
int32_t var_40 = 0
sub_1407473e0(&var_48, &var_38)
void*** rax_2 = sub_1405978f0(0x40, arg1)

if (rax_2 != 0)
    int64_t var_58 = 0
    int32_t var_50_1 = 0
    sub_1407473e0(&var_58, &var_48)
    *rax_2 = &data_142ee6968
    rax_2[1] = rbp
    rax_2[2] = rbx
    
    if (rbx != 0)
        *(rbx + 0xc) += 1
    
    *(rax_2 + 0x18) = zmm0
    rax_2[5] = 0
    rax_2[6].d = 0
    sub_1407473e0(&rax_2[5], &var_58)
    rax_2[7] = sub_140a387b0()
    sub_140745b20(&var_58)

sub_140745b20(&var_48)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140745b20(&var_38)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx + 8))(rbx, 1)
    
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp5_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140745b20(arg4)
return arg1
