// 函数: sub_1423820b0
// 地址: 0x1423820b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rdi = *arg1
int64_t* rcx = *(rdi + 0x3c8)

if (rcx != 0)
    if ((*(*rcx + 8))(rcx) == 0)
        int64_t* rcx_1 = *(rdi + 0x3c8)
        (*(*rcx_1 + 0x28))(rcx_1)
        int64_t* rcx_2 = *(rdi + 0x3c8)
        int512_t zmm1
        zmm1.o = zx.o(0)
        (*(*rcx_2 + 0x10))(rcx_2, zmm1)
    
    int64_t* rcx_3 = *(rdi + 0x3c8)
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)
    
    *(rdi + 0x3c8) = 0

int32_t rbx_1 = *(arg2 + 0x10)
void** const var_78 = &data_142da2668
void*** var_88 = nullptr
int64_t (* var_98)(int64_t* arg1, int64_t* arg2, int128_t arg3 @ zmm2, int128_t arg4 @ zmm3) =
    sub_142385ae0
void* var_70 = rdi
int64_t var_58 = 0
void* var_48 = nullptr
*(rdi + 0x60) = 0
sub_140a3c510(rdi + 0x70, &var_58)
*(rdi + 0xb0) = rbx_1
int128_t* result = sub_140a3c510(rdi + 0xc0, &var_98)

if (var_58 != 0)
    void var_38
    void* rcx_6 = &var_38
    
    if (var_48 != 0)
        rcx_6 = var_48
    
    result = (*(*rcx_6 + 0x10))(rcx_6)

if (var_98 != 0)
    void** const* rcx_7 = &var_78
    
    if (var_88 != 0)
        rcx_7 = var_88
    
    result = (*rcx_7)[2](rcx_7)

__security_check_cookie(rax_1 ^ &var_b8)
return result
