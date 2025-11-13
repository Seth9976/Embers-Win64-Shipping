// 函数: sub_141b07770
// 地址: 0x141b07770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* rsi = *(arg1 + 8)
void** const var_b8 = &data_1430579d0
int64_t rax_2 = sub_141a2b020(rsi, arg3)
void*** var_b0 = nullptr

if (rax_2 != 0)
    void*** rax_3 = j_sub_140a82f30(0x18)
    
    if (rax_3 != 0)
        rax_3 = sub_1405de320(rax_3, rax_2)
    
    void*** rcx_2 = var_b0
    var_b0 = rax_3
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

int64_t var_a8
sub_1405ac3f0(&var_a8, rsi)
arg2[4].b &= 0xfc
void** rax_5 = sub_140a82f30(0x88, 8)
arg2[4].b |= 1
bool cond:0 = (arg2[4].b & 2) != 0
void*** rcx_4 = rax_5
*arg2 = rax_5

if (cond:0)
    rcx_4 = arg2

*rcx_4 = &data_1430579d0
rcx_4[1] = var_b0
int64_t* var_b0_1 = nullptr
sub_1405ac2f0(&rcx_4[2], &var_a8)
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int32_t var_60 = 0
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_1405b8a50(&var_a8, 0)
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_10 = var_a8

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

if (var_b0_1 != 0)
    int64_t r8 = *var_b0_1
    (*r8)(var_b0_1, 1, r8)

__security_check_cookie(rax_1 ^ &var_d8)
return arg2
