// 函数: sub_141aec600
// 地址: 0x141aec600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char var_48
char rcx_1 = var_48 & 0xfe
void var_98
int64_t rax_3 = *sub_141a2ade0(&var_98)
char result_1 = rcx_1 | 2
char rax_5 = arg3[3].b
void** const var_90 = &data_14305dc00
int128_t var_78
int128_t var_68
int128_t var_58

if ((rax_5 & 1) != 0)
    rax_5 &= 0xfe
    int128_t zmm1 = arg3[1]
    arg3[3].b = rax_5
    var_78 = *arg3
    result_1 = (((rax_5 ^ rcx_1) & 2) ^ rcx_1) | 1
    var_68 = zmm1
    var_58 = arg3[2]

int32_t rax_6 = *(arg3 + 0x48)
int64_t rbx_1 = sx.q(arg1[1].d)
char rax_7 = arg3[5].b
int32_t rax_8 = (rbx_1 + 1).d
int128_t var_40 = *(arg3 + 0x38)
int32_t var_2c = (*(arg3 + 0x4c)).d
arg1[1].d = rax_8

if (rax_8 s> *(arg1 + 0xc))
    sub_1405c5340(arg1)

void*** rcx_4 = rbx_1 * 0x88 + *arg1
rcx_4[0x10].b = (rcx_4[0x10].b & 0xfe) | 3
*rcx_4 = &data_142d4ba58
rcx_4[1] = arg2
rcx_4[2] = rax_3
*rcx_4 = &data_14305dc00
char rax_12 = (rcx_4[9].b & 0xfe) | 2
rcx_4[9].b = rax_12

if ((result_1 & 1) != 0)
    rcx_4[9].b = rax_12 | 1
    char result_2 = result_1 & 0xfe
    result_1 = result_2
    rcx_4[9].b &= 0xfd
    rcx_4[9].b |= result_2 & 2
    *(rcx_4 + 0x18) = var_78
    *(rcx_4 + 0x28) = var_68
    *(rcx_4 + 0x38) = var_58

*(rcx_4 + 0x50) = var_40
rcx_4[0xc].d = rax_6
*(rcx_4 + 0x64) = var_2c.d
rcx_4[0xd].b = rax_7
char result = result_1

if ((result & 1) != 0)
    int128_t* rcx_5 = &var_78
    
    if ((result & 2) == 0)
        rcx_5 = var_78.q
    
    char var_48_1 = result & 0xfe
    result = (**rcx_5)(rcx_5, 0)
    
    if ((var_48_1 & 2) == 0)
        result = sub_140a74f90(var_78.q)

__security_check_cookie(rax_1 ^ &var_b8)
return result
