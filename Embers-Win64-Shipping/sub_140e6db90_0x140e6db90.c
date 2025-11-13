// 函数: sub_140e6db90
// 地址: 0x140e6db90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
void var_248
int64_t* rax_2 = sub_140e4fb70(&var_248)
sub_140693390(&rax_2[0x38], arg4)
rax_2[0x3d].b = *(arg4 + 0x28)
sub_140692f90(&rax_2[0x3e], &arg4[3])
rax_2[0x34] = *arg3
rax_2[0x35].b = arg3[1].b
sub_140692f90(&rax_2[0x36], &arg3[2])
rax_2[0xf].b = *arg5
*(rax_2 + 0x79) = arg5[1]
sub_1407473e0(&rax_2[0x10], &arg5[8])
void*** rax_8 = sub_140e48c50()
void* var_260 = &rax_8[2]
sub_140918950(&var_260, &rax_8[2])
int64_t var_278 = 0x3a8
void var_268
void* var_250 = &var_268
sub_140e56930(&var_260, arg2, rax_2, sub_140e23ed0(&rax_8[2], "SImage"))

if (rax_8 != 0)
    rax_8[1].d -= 1
    
    if (rax_8[1].d == 1)
        (**rax_8)(rax_8)
        int32_t temp2_1 = *(rax_8 + 0xc)
        *(rax_8 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rax_8)[1](rax_8, 1)

void var_40
sub_140745b20(&var_40)
void var_58
sub_140745b20(&var_58)
int64_t* var_68

if (var_68 != 0)
    var_68[1].d -= 1
    
    if (var_68[1].d == 1)
        (**var_68)(var_68)
        int32_t temp3_1 = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_2 = *var_68
            (*(r8_2 + 8))(var_68, 1, r8_2)

void var_98
sub_140745b20(&var_98)
sub_140ddea30(&var_248)
__security_check_cookie(rax_1 ^ &var_298)
return arg2
