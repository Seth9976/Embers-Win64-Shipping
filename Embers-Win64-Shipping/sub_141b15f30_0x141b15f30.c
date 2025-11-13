// 函数: sub_141b15f30
// 地址: 0x141b15f30
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

uint128_t var_70
sub_141b13380(arg1 + 0x48, &var_70, r8, arg4)
int64_t var_c8
sub_141aeea00(arg1, &var_c8, arg5 + 0x60)
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

float zmm6 = sub_141a47d70(arg1, rdx_2)

if (((*(arg1 + 0x68c) u>> 9).b & 1) != 0)
    int32_t rax_6 = *(arg3 + 0x24)
    var_d8 = 0f
    int64_t rdx_4
    
    if (rax_6 == 0x80000000)
        if (*(arg3 + 0x20) != 0)
            rdi = 4
        
        rdx_4 = *(rdi + arg3)
    else
        int32_t var_cc_1 = 0
        rdx_4 = rax_6.q
    
    char rax_7
    rax_7, zmm6 = sub_141a467f0(arg1 + 0x5e8, rdx_4, &var_d8)
    
    if (rax_7 != 0)
        zmm6 = zmm6 * var_d8

char rbx_1 = *(arg1 + 0x688)
char var_98
char var_98_1 = var_98 & 0xfc
uint128_t (* rax_8)[0x2] = sub_140a82f30(0x30, 8)
uint128_t var_c0[0x2]
var_c0[0].q = rax_8
char result_1 = var_98_1 | 1
uint128_t (* rcx_4)[0x2] = &var_c0

if ((result_1 & 2) == 0)
    rcx_4 = rax_8

*(rcx_4 + 8) = var_70
*rcx_4 = &data_14305da38
int128_t var_60
*(rcx_4 + 0x18) = var_60
int64_t var_50
*(rcx_4 + 0x28) = var_50
float var_7c = zmm6
uint128_t var_90 = *(arg5 + 0x124)
char var_78 = rbx_1
int32_t var_80 = *(arg5 + 0x188)
sub_141aec170(sub_1405a8fd0(arg5 + 0xb0, sub_1405be5b0(arg5 + 0x110), arg5 + 0x110), var_c8, 
    &var_c0)
char result = result_1

if ((result & 1) != 0)
    uint128_t (* rcx_8)[0x2] = &var_c0
    
    if ((result & 2) == 0)
        rcx_8 = var_c0[0].q
    
    char var_98_3 = result & 0xfe
    result = (**rcx_8)(rcx_8, 0)
    
    if ((var_98_3 & 2) == 0)
        result = sub_140a74f90(var_c0[0].q)

__security_check_cookie(rax_1 ^ &var_f8)
return result
