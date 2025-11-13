// 函数: sub_142383230
// 地址: 0x142383230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rdi = *arg1
sub_1423973a0(rdi, arg2, arg3)
int64_t* rcx_1 = *(rdi + 0x388)

if (rcx_1 != 0)
    if ((*(*rcx_1 + 8))(rcx_1) == 0)
        int64_t* rcx_2 = *(rdi + 0x388)
        (*(*rcx_2 + 0x28))(rcx_2)
        int64_t* rcx_3 = *(rdi + 0x388)
        int512_t zmm1
        zmm1.o = zx.o(0)
        (*(*rcx_3 + 0x10))(rcx_3, zmm1)
    
    int64_t* rcx_4 = *(rdi + 0x388)
    
    if (rcx_4 != 0)
        (**rcx_4)(rcx_4, 1)
    
    *(rdi + 0x388) = 0

int32_t rbx_1 = arg2[2].d
void** const var_38 = &data_142da2668
void*** var_48 = nullptr
int64_t (* var_58)(int64_t* arg1, int64_t* arg2, int128_t arg3 @ zmm2, int128_t arg4 @ zmm3) =
    sub_1423859e0
void* var_30 = rdi
void** const var_78 = &data_142da2668
int128_t* (* var_98)(int64_t* arg1, int64_t* arg2) = j_sub_1423833a0
void*** var_88 = nullptr
void* var_70 = rdi
*(rdi + 0x60) = 1
sub_140a3c510(rdi + 0x70, &var_98)
*(rdi + 0xb0) = rbx_1
int128_t* result = sub_140a3c510(rdi + 0xc0, &var_58)

if (var_98 != 0)
    void** const* rcx_7 = &var_78
    
    if (var_88 != 0)
        rcx_7 = var_88
    
    result = (*rcx_7)[2](rcx_7)

if (var_58 != 0)
    void** const* rcx_8 = &var_38
    
    if (var_48 != 0)
        rcx_8 = var_48
    
    result = (*rcx_8)[2](rcx_8)

__security_check_cookie(rax_1 ^ &var_b8)
return result
