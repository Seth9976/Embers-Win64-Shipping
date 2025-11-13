// 函数: sub_142354d60
// 地址: 0x142354d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t rax_2 = *arg1
int128_t* var_88 = nullptr

if (rax_2 != 0)
    void* rax_3 = arg1[2]
    void* rcx = &arg1[4]
    
    if (rax_3 != 0)
        rcx = rax_3
    
    (**rcx)(rcx, &var_88)

void var_58
sub_141f79510(&var_58, arg2)
void*** rax_5 = sub_140a82f30(0x80, 0x10)
*rax_5 = &data_143334660
rax_5[2] = rax_2
rax_5[4] = var_88
int128_t var_78
int128_t zmm0 = var_78
var_88 = nullptr
*(rax_5 + 0x30) = zmm0
int128_t var_68
*(rax_5 + 0x40) = var_68
int64_t rax_6 = rax_2

if (rax_5[2] != 0)
    rax_6 = 0

sub_141f79510(&rax_5[0xa], &var_58)
*rax_5 = &data_143334680
int64_t (* var_d8)(void* arg1)
int64_t (* rax_7)(void* arg1) = var_d8

if (rax_5 != -0x10)
    rax_7 = sub_14235b2c0

void*** var_c8 = rax_5
int32_t rcx_5 = arg1[8].d
var_d8 = rax_7
sub_140a20e40(rcx_5, &var_d8)
sub_141f7baf0(&var_58)

if (rax_6 != 0)
    int128_t* rax_8 = var_88
    int128_t* rcx_7 = &var_78
    
    if (rax_8 != 0)
        rcx_7 = rax_8
    
    (*(*rcx_7 + 0x10))(rcx_7)

int64_t result = sub_141f7baf0(arg2)
__security_check_cookie(rax_1 ^ &var_f8)
return result
