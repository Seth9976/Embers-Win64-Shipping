// 函数: sub_141da1f60
// 地址: 0x141da1f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void*** var_88 = nullptr
void** const var_78 = &data_142da2668
void* var_70 = arg1
int64_t (* var_98)(int64_t* arg1) = j_sub_141d97030
void** const var_38 = &data_142d42d18
void*** var_48 = nullptr
int64_t (* var_58)() = sub_140594850
void** result = sub_141d9b830(arg1, 1, &var_58, &var_98)

if (var_58 != 0)
    void** const* rcx = &var_38
    
    if (var_48 != 0)
        rcx = var_48
    
    result = (*rcx)[2](rcx)

if (var_98 != 0)
    void** const* rcx_1 = &var_78
    
    if (var_88 != 0)
        rcx_1 = var_88
    
    result = (*rcx_1)[2](rcx_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
