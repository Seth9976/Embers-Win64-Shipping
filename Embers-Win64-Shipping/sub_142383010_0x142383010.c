// 函数: sub_142383010
// 地址: 0x142383010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rdi = *arg1
sub_142387a00(rdi, arg2)
int32_t rbx_1 = arg2[2].d
void** const var_38 = &data_142da2668
void* var_30 = rdi
void*** var_48 = nullptr
int64_t (* var_58)(int64_t* arg1, int64_t* arg2, int128_t arg3 @ zmm2, int128_t arg4 @ zmm3) =
    sub_142385ae0
void** const var_78 = &data_142da2668
void*** var_88 = nullptr
int64_t (* var_98)(int64_t* arg1, int64_t* arg2, int128_t arg3 @ zmm2, int128_t arg4 @ zmm3) =
    sub_142385a00
void* var_70 = rdi
*(rdi + 0x60) = 1
sub_140a3c510(rdi + 0x70, &var_98)
*(rdi + 0xb0) = rbx_1
int128_t* result = sub_140a3c510(rdi + 0xc0, &var_58)

if (var_98 != 0)
    void** const* rcx_3 = &var_78
    
    if (var_88 != 0)
        rcx_3 = var_88
    
    result = (*rcx_3)[2](rcx_3)

if (var_58 != 0)
    void** const* rcx_4 = &var_38
    
    if (var_48 != 0)
        rcx_4 = var_48
    
    result = (*rcx_4)[2](rcx_4)

__security_check_cookie(rax_1 ^ &var_b8)
return result
