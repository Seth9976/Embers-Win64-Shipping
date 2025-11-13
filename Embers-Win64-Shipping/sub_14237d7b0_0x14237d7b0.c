// 函数: sub_14237d7b0
// 地址: 0x14237d7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
sub_14237f240(arg1, arg2, arg3)
void*** var_70 = arg1
arg1[0x79] = 0
arg1[0x7a] = 0
arg1[0x7c] = 0
*arg1 = &data_1433367a0
void** const var_78 = &data_142da2668
int128_t* (* var_98)(int64_t* arg1, int64_t* arg2) = j_sub_1423834b0
arg1[0x82].b = arg4
int64_t var_58 = 0
void* var_48 = nullptr
void*** var_88 = nullptr
arg1[0xc].d = 2
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
