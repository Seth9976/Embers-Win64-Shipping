// 函数: sub_140b355f0
// 地址: 0x140b355f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int16_t var_118
int16_t* var_e8 = &var_118
int64_t var_c0
int64_t* var_e0 = &var_c0
int64_t r8
int64_t var_d0 = r8
int32_t var_100
int32_t* var_d8 = &var_100
int64_t (* var_110)(int64_t* arg1, int16_t* arg2)
__builtin_memset(&var_110, 0, 0x14)
int64_t* var_c8 = &var_110
int16_t** var_f0 = &var_e8
var_c0 = 0
int64_t (* var_f8)(int64_t* arg1, int16_t* arg2) = sub_140b344f0
int64_t var_b8 = 0
var_118 = 0
void var_88
sub_140b24d50(&arg2[2], &var_88, &var_f8, nullptr)
char var_70

if (var_70 != 0)
    var_f8 = var_110
    int64_t var_108
    var_f0.d = var_108.d
    var_f0:4.d = var_108:4.d
    int64_t var_108_1 = 0
    var_110 = nullptr
    void var_b0
    int64_t* rax_5 = sub_140b35eb0(&var_b0, &var_f8)
    sub_140b3e980()
    int128_t var_68 = data_143de7cd0.o
    int16_t* rax_6 = *rax_5
    __builtin_memset(rax_5, 0, 0x20)
    var_e8 = rax_6
    var_e0.d = rax_5[1].d
    var_e0:4.d = *(rax_5 + 0xc)
    int64_t var_d8_1 = rax_5[2]
    var_d0.d = rax_5[3].d
    var_d0:4.d = *(rax_5 + 0x1c)
    var_c8.b = rax_5[4].b
    var_c8:1.b = *(rax_5 + 0x21)
    void** var_58
    sub_140b2d700(&var_58, &var_e8)
    int64_t rcx_3 = rax_5[2]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = *rax_5
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    sub_140b0e240(arg2, &var_88, &var_68)
    sub_140b0bbf0(&var_68)

int64_t rcx_7 = var_c0
*(arg1 + 0x18) = 0
char var_70_1 = 0

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t (* rcx_8)(int64_t* arg1, int16_t* arg2) = var_110

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_138)
return arg1
