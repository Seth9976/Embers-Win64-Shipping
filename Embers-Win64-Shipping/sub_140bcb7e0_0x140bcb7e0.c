// 函数: sub_140bcb7e0
// 地址: 0x140bcb7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rdx = nullptr
void* var_b8 = nullptr
int64_t rax_2 = *arg5
int64_t var_c8 = rax_2

if (rax_2 != 0)
    void* rax_3 = arg5[2]
    void* rcx_1 = &arg5[4]
    
    if (rax_3 != 0)
        rcx_1 = rax_3
    
    (**rcx_1)(rcx_1, &var_b8)
    rdx = var_b8
    rax_2 = var_c8

int128_t* var_108 = nullptr
void var_a8

if (rax_2 != 0)
    void* rcx_2 = &var_a8
    
    if (rdx != 0)
        rcx_2 = rdx
    
    (**rcx_2)(rcx_2, &var_108)

void*** rax_6 = sub_140a82f30(0x60, 0x10)
*rax_6 = &data_142d577c0
rax_6[2] = rax_2
rax_6[4] = var_108
int128_t var_f8
int128_t zmm0 = var_f8
var_108 = nullptr
*(rax_6 + 0x30) = zmm0
int128_t var_e8
*(rax_6 + 0x40) = var_e8
int64_t rax_7 = rax_2

if (rax_6[2] != 0)
    rax_7 = 0

rax_6[0xa] = arg3
rax_6[0xb] = arg1
*rax_6 = &data_142e86f40
int64_t (* var_88)(void* arg1, char* arg2, int64_t* arg3)
int64_t (* rax_10)(void* arg1, char* arg2, int64_t* arg3) = var_88

if (rax_6 != -0x10)
    rax_10 = sub_140bc3380

var_88 = rax_10

if (rax_7 != 0)
    int128_t* rax_11 = var_108
    int128_t* rcx_5 = &var_f8
    
    if (rax_11 != 0)
        rcx_5 = rax_11
    
    (*(*rcx_5 + 0x10))(rcx_5)

int64_t* rcx_6 = *(arg1 + 8)
int64_t rax_14 = (*(*rcx_6 + 0x10))(rcx_6, arg2, arg3, zx.q(arg4), &var_88, arg6, rax_7)
*(arg1 + 0x10) = rax_14
void* rbx
rbx.b = rax_14 != 0

if (var_88 != 0)
    void var_68
    void*** rcx_7 = &var_68
    
    if (rax_6 != 0)
        rcx_7 = rax_6
    
    (*rcx_7)[2](rcx_7)

if (var_c8 != 0)
    void* rdx_5 = var_b8
    void* rcx_8 = &var_a8
    
    if (rdx_5 != 0)
        rcx_8 = rdx_5
    
    int64_t rdx_6 = *rcx_8
    (*(rdx_6 + 0x10))(rcx_8, rdx_6)

__security_check_cookie(rax_1 ^ &var_148)
return zx.q(rbx.b)
