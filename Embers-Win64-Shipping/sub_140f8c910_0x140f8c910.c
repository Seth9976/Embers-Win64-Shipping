// 函数: sub_140f8c910
// 地址: 0x140f8c910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d9400()
int64_t* rbp = &data_143cd6fd8

if (arg2[3].b != 0)
    rbp = sub_140d44910(arg2)

sub_14065da90(&arg1[0xb6], arg2)
arg1[0xb9].b = arg2[3].b
sub_140692f90(&arg1[0xba], &arg2[4])
void var_28
int64_t* rax_3 = sub_140a97f80(&var_28, rbp)

if (&arg1[0xbc] != rax_3)
    arg1[0xbc] = *rax_3
    *rax_3 = 0
    sub_1405aeff0(&arg1[0xbd], &rax_3[1])

arg1[0xbe].w = rax_3[2].w
*(arg1 + 0x5f2) = *(rax_3 + 0x12)
*(arg1 + 0x5f4) = *(rax_3 + 0x14)
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rdi_2 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rdi_2))

sub_14065da90(&arg1[0xbf], rbp)
arg1[0xc2].d = 1
sub_140f6a1d0(arg1, 0)
int64_t* rcx_11 = *arg1
void var_38
int64_t result = sub_140e19ef0(*(*(*rcx_11 + 0x80))(rcx_11, &var_38), 5)
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp2_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_30 + 8))(var_30, 1)

return result
