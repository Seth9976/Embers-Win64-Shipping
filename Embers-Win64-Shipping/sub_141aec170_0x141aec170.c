// 函数: sub_141aec170
// 地址: 0x141aec170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char var_50
char rcx_1 = var_50 & 0xfe
void var_98
int64_t rax_3 = *sub_141a2acc0(&var_98)
char result_1 = rcx_1 | 2
char rax_5 = *(arg3 + 0x28)
void** const var_90 = &data_14305dc10
uint128_t var_78
int128_t var_68
uint64_t var_58

if ((rax_5 & 1) != 0)
    uint128_t zmm0_1 = *arg3
    rax_5 &= 0xfe
    int128_t zmm1 = arg3[1]
    *(arg3 + 0x28) = rax_5
    var_78 = zmm0_1
    result_1 = (((rax_5 ^ rcx_1) & 2) ^ rcx_1) | 1
    var_68 = zmm1
    var_58 = arg3[2].q

int32_t rax_6 = arg3[4].d
int64_t rbx_1 = sx.q(arg1[1].d)
char rax_7 = *(arg3 + 0x48)
int32_t rax_8 = (rbx_1 + 1).d
uint128_t var_48 = arg3[3]
int32_t var_34 = (*(arg3 + 0x44)).d
arg1[1].d = rax_8

if (rax_8 s> *(arg1 + 0xc))
    sub_1405c5340(arg1)

void*** rcx_4 = rbx_1 * 0x88 + *arg1
rcx_4[0x10].b = (rcx_4[0x10].b & 0xfe) | 3
*rcx_4 = &data_142d4ba58
rcx_4[1] = arg2
rcx_4[2] = rax_3
*rcx_4 = &data_14305dc10
char rax_12 = (rcx_4[8].b & 0xfe) | 2
rcx_4[8].b = rax_12

if ((result_1 & 1) != 0)
    rcx_4[8].b = rax_12 | 1
    char result_2 = result_1 & 0xfe
    result_1 = result_2
    rcx_4[8].b &= 0xfd
    rcx_4[8].b |= result_2 & 2
    *(rcx_4 + 0x18) = var_78
    *(rcx_4 + 0x28) = var_68
    rcx_4[7] = var_58

*(rcx_4 + 0x48) = var_48
rcx_4[0xb].d = rax_6
*(rcx_4 + 0x5c) = var_34.d
rcx_4[0xc].b = rax_7
char result = result_1

if ((result & 1) != 0)
    uint128_t* rcx_5 = &var_78
    
    if ((result & 2) == 0)
        rcx_5 = var_78.q
    
    char var_50_1 = result & 0xfe
    result = (**rcx_5)(rcx_5, 0)
    
    if ((var_50_1 & 2) == 0)
        result = sub_140a74f90(var_78.q)

__security_check_cookie(rax_1 ^ &var_b8)
return result
