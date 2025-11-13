// 函数: sub_1413d90b0
// 地址: 0x1413d90b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t var_110
__builtin_memset(&var_110, 0, 0x80)
void** const var_158 = &data_142f77498
void* var_150
__builtin_memset(&var_150, 0, 0x11)
void var_118
sub_1413f8c80(arg2, arg3, &var_118, &var_158)
int64_t var_148
int32_t rdx_1 = var_148.d

if (rdx_1 == 0)
    bool cond:0_1 = var_148:4.d s>= 1
    var_148.d = 1
    
    if (not(cond:0_1))
        sub_1413f6c30(&var_150, rdx_1)
    
    void* rcx_2
    
    if ((var_150.b & 1) == 0)
        rcx_2 = var_150
    else
        rcx_2 = &var_150 + (var_150 s>> 1)
    
    memset(rcx_2, 0, 0x80)
    rdx_1 = var_148.d

int128_t zmm0 = data_143dbb1e0
int64_t var_88
int64_t* var_168 = &var_88
int64_t* rcx_4 = data_143f0f180
int32_t var_64 = (1 << (data_1439c7a34).b) - 1
void** const* var_80 = &var_158
var_88 = 0
int32_t var_78 = 1
int128_t var_74 = zmm0
char var_60 = 0
int64_t var_58 = 0
int32_t var_50 = 0
void var_138
(*(*rcx_4 + 0x4a0))(rcx_4, &var_138, &data_143f02b98, 0x80, rdx_1 << 7, 0x201, var_168)
sub_1405d1600(arg5, &var_138)
sub_14081c9d0(&var_138)
int64_t* rcx_7 = data_143f0f180
void var_130
(*(*rcx_7 + 0x5b0))(rcx_7, &var_130, &data_143f02b98, *arg5)
sub_1405d1600(arg6, &var_130)
sub_1405ec8a0(&var_130)
int64_t* rcx_10 = data_143f0f180
int64_t var_98 = *arg6
int128_t var_a8
var_a8:8.q = arg3[0xa43]
void* var_128
(*(*rcx_10 + 0xf8))(rcx_10, &var_128, &var_118, &data_143ec8390, arg4, 1)
void* rcx_11 = var_128
*arg1 = rcx_11

if (rcx_11 != 0)
    *(rcx_11 + 8) += 1

sub_1405d1550(&var_128)
sub_140a1d5c0(&var_150)
__security_check_cookie(rax_1 ^ &var_198)
return arg1
