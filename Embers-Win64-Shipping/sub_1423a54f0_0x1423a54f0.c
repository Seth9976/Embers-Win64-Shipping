// 函数: sub_1423a54f0
// 地址: 0x1423a54f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
sub_1423a5270(arg1, arg2, arg3, arg4)
void*** var_70 = arg1
int64_t var_58 = 0
*arg1 = &data_1433395e0
void* var_48 = nullptr
void** const var_78 = &data_142da2668
void*** var_88 = nullptr
int128_t* (* var_98)(int64_t* arg1, int64_t* arg2) = j_sub_1423a6be0
arg1[0xc].d = 1
sub_140a3c510(&arg1[0xe], &var_98)
arg1[0x16].d = 0
sub_140a3c510(&arg1[0x18], &var_58)

if (var_98 != 0)
    void** const* rcx_2 = &var_78
    
    if (var_88 != 0)
        rcx_2 = var_88
    
    (*rcx_2)[2](rcx_2)

if (var_58 != 0)
    void var_38
    void* rcx_3 = &var_38
    
    if (var_48 != 0)
        rcx_3 = var_48
    
    int64_t rdx_3 = *rcx_3
    (*(rdx_3 + 0x10))(rcx_3, rdx_3)

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
