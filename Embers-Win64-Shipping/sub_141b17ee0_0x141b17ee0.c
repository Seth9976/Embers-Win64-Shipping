// 函数: sub_141b17ee0
// 地址: 0x141b17ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_38 = arg4.d
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
float rax_2 = *(arg3 + 0x24)
int64_t* rdi = 0x10
float var_d8
int64_t r8

if (rax_2 == 0x80000000)
    int64_t* r8_1 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        r8_1 = 4
    
    r8 = *(r8_1 + arg3)
else
    var_d8 = rax_2
    int32_t var_d4_1 = 0
    r8 = var_d8.q

uint128_t var_68
sub_141b13380(arg1 + 0x48, &var_68, r8, arg4)
int64_t var_c8
sub_141aeec60(arg1, &var_c8, arg5 + 0x60)
float rax_3 = *(arg3 + 0x24)
int64_t rdx_2

if (rax_3 == 0x80000000)
    int64_t* rdx_3 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        rdx_3 = 4
    
    rdx_2 = *(rdx_3 + arg3)
else
    var_d8 = rax_3
    int32_t var_d4_2 = 0
    rdx_2 = var_d8.q

float zmm6 = sub_141a47d70(arg1, rdx_2).d

if (((*(arg1 + 0x68c) u>> 9).b & 1) != 0)
    int32_t rax_6 = *(arg3 + 0x24)
    var_d8 = 1f
    int64_t rdx_4
    
    if (rax_6 == 0x80000000)
        if (*(arg3 + 0x20) != 0)
            rdi = 4
        
        rdx_4 = *(rdi + arg3)
    else
        int32_t var_cc_1 = 0
        rdx_4 = rax_6.q
    
    zmm6 = sub_141a467f0(arg1 + 0x5e8, rdx_4, &var_d8) * var_d8

char rax_7 = *(arg1 + 0x688)
char var_90
char result_1 = var_90 | 3
uint128_t zmm0 = var_68
void** const var_c0 = &data_14305da28
uint128_t var_b8 = zmm0
int128_t var_58
int128_t var_a8 = var_58
int64_t var_48
uint64_t var_98 = var_48
char var_70 = rax_7
uint128_t var_88 = *(arg5 + 0x124)
int32_t var_78 = *(arg5 + 0x188)
float var_74 = zmm6
sub_141aec600(sub_1405a8fd0(arg5 + 0xb0, sub_1405be5b0(arg5 + 0x110), arg5 + 0x110), var_c8, 
    &var_c0)
char result = result_1

if ((result & 1) != 0)
    void** const rcx_7 = &var_c0
    
    if ((result & 2) == 0)
        rcx_7 = var_c0
    
    char var_90_1 = result & 0xfe
    result = (**rcx_7)(rcx_7, 0)
    
    if ((var_90_1 & 2) == 0)
        result = sub_140a74f90(var_c0)

__security_check_cookie(rax_1 ^ &var_f8)
return result
