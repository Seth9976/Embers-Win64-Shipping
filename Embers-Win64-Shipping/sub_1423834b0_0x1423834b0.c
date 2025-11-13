// 函数: sub_1423834b0
// 地址: 0x1423834b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rbx = *arg1
sub_1423975a0(rbx, arg2)
void* var_30 = rbx
void*** var_48 = nullptr
void** const var_38 = &data_142da2668
void*** var_88 = nullptr
int128_t* (* var_58)(int64_t* arg1, void* arg2) = j_sub_1423820b0
void* var_70 = rbx
void** const var_78 = &data_142da2668
int128_t* (* var_98)(int64_t* arg1, int64_t* arg2) = j_sub_1423828e0
*(rbx + 0x60) = 2
sub_140a3c510(rbx + 0x70, &var_98)
*(rbx + 0xb0) = 2
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

__security_check_cookie(rax_1 ^ &var_c8)
return result
