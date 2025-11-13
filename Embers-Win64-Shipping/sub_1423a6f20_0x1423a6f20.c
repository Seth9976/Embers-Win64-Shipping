// 函数: sub_1423a6f20
// 地址: 0x1423a6f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rbx = *arg1
sub_1423ad680(rbx, arg2)
void* var_30 = rbx
void*** var_48 = nullptr
void** const var_38 = &data_142da2668
void*** var_88 = nullptr
void* (* var_58)(int64_t* arg1, void* arg2, uint128_t arg3 @ zmm2, uint128_t arg4 @ zmm3) =
    sub_1423ab3e0
void* var_70 = rbx
void** const var_78 = &data_142da2668
int64_t* (* var_98)(int64_t* arg1, void* arg2, uint128_t arg3 @ zmm2, uint128_t arg4 @ zmm3) =
    j_sub_1423a6b60
*(rbx + 0x60) = 1
sub_140a3c510(rbx + 0x70, &var_98)
*(rbx + 0xb0) = 1
int128_t* result = sub_140a3c510(rbx + 0xc0, &var_58)

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
