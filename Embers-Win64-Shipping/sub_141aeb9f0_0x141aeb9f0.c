// 函数: sub_141aeb9f0
// 地址: 0x141aeb9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char var_50
char rcx_1 = var_50 & 0xfe
void var_78
int64_t rax_3 = *sub_141a2ac30(&var_78)
char result_1 = rcx_1 | 2
char rax_5 = arg3[1].b
void** const var_70 = &data_14305dbc0
int64_t* var_58

if ((rax_5 & 1) != 0)
    rax_5 &= 0xfe
    arg3[1].b = rax_5
    result_1 = (((rax_5 ^ rcx_1) & 2) ^ rcx_1) | 1
    var_58 = *arg3

int32_t rax_7 = arg3[4].d
int64_t rbx_1 = sx.q(arg1[1].d)
char rax_8 = arg3[5].b
int32_t rax_9 = (rbx_1 + 1).d
int128_t var_48 = *(arg3 + 0x10)
int32_t var_34 = (*(arg3 + 0x24)).d
arg1[1].d = rax_9

if (rax_9 s> *(arg1 + 0xc))
    sub_1405c5340(arg1)

void*** rcx_4 = rbx_1 * 0x88 + *arg1
rcx_4[0x10].b = (rcx_4[0x10].b & 0xfe) | 3
*rcx_4 = &data_142d4ba58
rcx_4[1] = arg2
rcx_4[2] = rax_3
*rcx_4 = &data_14305dbc0
char rax_13 = (rcx_4[4].b & 0xfe) | 2
rcx_4[4].b = rax_13

if ((result_1 & 1) != 0)
    rcx_4[4].b = rax_13 | 1
    char result_2 = result_1 & 0xfe
    result_1 = result_2
    rcx_4[4].b &= 0xfd
    rcx_4[4].b |= result_2 & 2
    rcx_4[3] = var_58

*(rcx_4 + 0x28) = var_48
rcx_4[7].d = rax_7
*(rcx_4 + 0x3c) = var_34.d
rcx_4[8].b = rax_8
char result = result_1

if ((result & 1) != 0)
    int64_t* rcx_5 = &var_58
    
    if ((result & 2) == 0)
        rcx_5 = var_58
    
    char var_50_1 = result & 0xfe
    result = (**rcx_5)(rcx_5, 0)
    
    if ((var_50_1 & 2) == 0)
        result = sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_98)
return result
