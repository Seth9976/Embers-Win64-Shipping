// 函数: sub_1423b5090
// 地址: 0x1423b5090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t rax_2 = *(arg2 + 0x10)
int64_t rdi = *(arg2 + 8)
int64_t var_68 = rax_2
void* r8 = nullptr
void* var_58 = nullptr

if (rax_2 != 0)
    void* rax_3 = *(arg2 + 0x20)
    void* rcx = arg2 + 0x30
    
    if (rax_3 != 0)
        rcx = rax_3
    
    (**rcx)(rcx, &var_58, 0)
    r8 = var_58
    rax_2 = var_68

int128_t* var_98 = nullptr
void var_48

if (rax_2 != 0)
    void* rcx_1 = &var_48
    
    if (r8 != 0)
        rcx_1 = r8
    
    (**rcx_1)(rcx_1, &var_98, r8)

void*** r8_1 = sub_140a82f30(0x60, 0x10)
*r8_1 = &data_142f04648
r8_1[2] = arg1
r8_1[3] = rdi
r8_1[4] = rax_2
r8_1[6] = var_98
int128_t var_88
int128_t zmm0 = var_88
var_98 = nullptr
*(r8_1 + 0x40) = zmm0
int128_t var_78
int128_t zmm1 = var_78
*(r8_1 + 0x50) = zmm1
int64_t rax_7 = rax_2

if (r8_1[4] != 0)
    rax_7 = 0

*r8_1 = &data_14333a0e8
uint64_t (* var_f8)(int64_t* arg1, char* arg2)
uint64_t (* rcx_6)(int64_t* arg1, char* arg2) = var_f8

if (r8_1 != -0x10)
    rcx_6 = sub_1423ab1e0

int128_t* result = arg1 + 0x100
var_f8 = rcx_6
int128_t var_d8

if (result != &var_f8)
    arg3 = *result
    arg4 = result[1]
    int128_t zmm4_1 = result[2]
    int128_t zmm5_1 = result[3]
    *result = var_f8.o
    zmm0 = var_d8
    result[1] = r8_1.o
    int128_t var_c8
    zmm1 = var_c8
    result[2] = zmm0
    var_f8.o = arg3
    rcx_6 = var_f8
    void*** var_e8
    var_e8.o = arg4
    r8_1 = var_e8
    result[3] = zmm1
    var_d8 = zmm4_1
    int128_t var_c8_1 = zmm5_1

if (rcx_6 != 0)
    void*** rcx_7 = &var_d8
    
    if (r8_1 != 0)
        rcx_7 = r8_1
    
    result = (*rcx_7)[2](rcx_7, zmm1, r8_1, arg4)

if (rax_7 != 0)
    int128_t* rax_9 = var_98
    int128_t* rcx_8 = &var_88
    
    if (rax_9 != 0)
        rcx_8 = rax_9
    
    result = (*(*rcx_8 + 0x10))(rcx_8, zmm1, arg3, arg4)

if (var_68 != 0)
    void* rax_11 = var_58
    void* rcx_9 = &var_48
    
    if (rax_11 != 0)
        rcx_9 = rax_11
    
    result = (*(*rcx_9 + 0x10))(rcx_9)

__security_check_cookie(rax_1 ^ &var_118)
return result
