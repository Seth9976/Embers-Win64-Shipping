// 函数: sub_1427b7570
// 地址: 0x1427b7570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void*** rdi = nullptr
void** const var_38 = &data_142d42d18
int64_t (* rdx)(int64_t arg1, int64_t* arg2, char* arg3) = sub_1427a2540
void*** rax_2 = nullptr
int64_t (* var_58)(int64_t arg1, int64_t* arg2, char* arg3) = sub_1427a2540
void*** var_48 = nullptr
int128_t var_28
int128_t zmm0
int128_t zmm4
int128_t zmm5

if (arg1 + 0x60 != &var_58)
    arg3 = *(arg1 + 0x60)
    arg4 = *(arg1 + 0x70)
    zmm4 = *(arg1 + 0x80)
    zmm5 = *(arg1 + 0x90)
    *(arg1 + 0x60) = var_58.o
    zmm0 = var_38.o
    *(arg1 + 0x70) = var_48.o
    arg2 = var_28
    *(arg1 + 0x80) = zmm0
    var_58.o = arg3
    rdx = var_58
    var_48.o = arg4
    rax_2 = var_48
    *(arg1 + 0x90) = arg2
    var_38.o = zmm4
    var_28 = zmm5

if (rdx != 0)
    void** const* rcx_1 = &var_38
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    (*rcx_1)[2](rcx_1, rdx, arg3, arg4)

void*** var_48_1 = nullptr
var_38 = &data_142d42d18
int64_t (* rcx_2)(int64_t arg1, int64_t* arg2, char* arg3) = &data_1427a24a0
var_58 = &data_1427a24a0

if (arg1 + 0xa0 != &var_58)
    arg3 = *(arg1 + 0xa0)
    arg4 = *(arg1 + 0xb0)
    zmm4 = *(arg1 + 0xc0)
    zmm5 = *(arg1 + 0xd0)
    *(arg1 + 0xa0) = var_58.o
    zmm0 = var_38.o
    *(arg1 + 0xb0) = var_48_1.o
    arg2 = var_28
    *(arg1 + 0xc0) = zmm0
    var_58.o = arg3
    rcx_2 = var_58
    var_48_1.o = arg4
    rdi = var_48_1
    *(arg1 + 0xd0) = arg2
    var_38.o = zmm4
    int128_t var_28_1 = zmm5

if (rcx_2 != 0)
    void** const* rcx_3 = &var_38
    
    if (rdi != 0)
        rcx_3 = rdi
    
    (*rcx_3)[2](rcx_3, arg2, arg3, arg4)

int64_t* rcx_4 = *(arg1 + 0x50)
int64_t result = (**rcx_4)(rcx_4, *(arg1 + 0x110), arg3, arg4)
*(arg1 + 0x118) = result
__security_check_cookie(rax_1 ^ &var_78)
return result
