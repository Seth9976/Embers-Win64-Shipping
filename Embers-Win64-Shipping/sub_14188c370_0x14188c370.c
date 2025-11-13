// 函数: sub_14188c370
// 地址: 0x14188c370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t r8
int64_t var_a0 = r8
void** const var_38 = &data_142d42ed8
int64_t (* var_58)(int64_t* arg1) = sub_14187b0d0
int128_t var_30 = arg1.o
int64_t (* var_98)(int64_t* arg1) = sub_14187b0d0
void*** var_48 = nullptr
int128_t* var_88 = nullptr
sub_140599600(&var_38, &var_88)
arg2[2] = 0
void*** rax_2 = sub_140a82f30(0x50, 0x10)
*rax_2 = &data_142f045c8
rax_2[2] = var_98
rax_2[4] = var_88
int128_t var_78
int128_t zmm0_1 = var_78
var_88 = nullptr
*(rax_2 + 0x30) = zmm0_1
int128_t var_68
*(rax_2 + 0x40) = var_68
int64_t (* rax_5)(int64_t* arg1) = var_98

if (rax_2[2] != 0)
    rax_5 = nullptr

*rax_2 = &data_142fe82a8
arg2[2] = rax_2

if (rax_2 != -0x10)
    *arg2 = sub_14187b190

if (rax_5 != 0)
    int128_t* rax_6 = var_88
    int128_t* rcx_2 = &var_78
    
    if (rax_6 != 0)
        rcx_2 = rax_6
    
    (*(*rcx_2 + 0x10))(rcx_2)

if (var_58 != 0)
    void** const* rcx_3 = &var_38
    
    if (var_48 != 0)
        rcx_3 = var_48
    
    void** const rdx_3 = *rcx_3
    rdx_3[2](rcx_3, rdx_3)

__security_check_cookie(rax_1 ^ &var_c8)
return arg2
