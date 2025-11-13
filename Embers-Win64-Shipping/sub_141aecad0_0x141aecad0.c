// 函数: sub_141aecad0
// 地址: 0x141aecad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char var_48
char rcx_1 = var_48 & 0xfe
void var_78
int64_t rax_3 = *sub_141a2af90(&var_78)
char result_1 = rcx_1 | 2
char rax_5 = arg3[1].b
void** const var_70 = &data_14305dc40
int128_t var_58

if ((rax_5 & 1) != 0)
    rax_5 &= 0xfe
    arg3[1].b = rax_5
    result_1 = (((rax_5 ^ rcx_1) & 2) ^ rcx_1) | 1
    var_58 = *arg3

int32_t rax_6 = *(arg3 + 0x28)
int64_t rbx_1 = sx.q(arg1[1].d)
char rax_7 = arg3[3].b
int32_t rax_8 = (rbx_1 + 1).d
int128_t var_40 = *(arg3 + 0x18)
int32_t var_2c = (*(arg3 + 0x2c)).d
arg1[1].d = rax_8

if (rax_8 s> *(arg1 + 0xc))
    sub_1405c5340(arg1)

void*** rcx_4 = rbx_1 * 0x88 + *arg1
rcx_4[0x10].b = (rcx_4[0x10].b & 0xfe) | 3
*rcx_4 = &data_142d4ba58
rcx_4[1] = arg2
rcx_4[2] = rax_3
*rcx_4 = &data_14305dc40
char rax_12 = (rcx_4[5].b & 0xfe) | 2
rcx_4[5].b = rax_12

if ((result_1 & 1) != 0)
    rcx_4[5].b = rax_12 | 1
    char result_2 = result_1 & 0xfe
    result_1 = result_2
    rcx_4[5].b &= 0xfd
    rcx_4[5].b |= result_2 & 2
    *(rcx_4 + 0x18) = var_58

*(rcx_4 + 0x30) = var_40
rcx_4[8].d = rax_6
*(rcx_4 + 0x44) = var_2c.d
rcx_4[9].b = rax_7
char result = result_1

if ((result & 1) != 0)
    int128_t* rcx_5 = &var_58
    
    if ((result & 2) == 0)
        rcx_5 = var_58.q
    
    char var_48_1 = result & 0xfe
    result = (**rcx_5)(rcx_5, 0)
    
    if ((var_48_1 & 2) == 0)
        result = sub_140a74f90(var_58.q)

__security_check_cookie(rax_1 ^ &var_98)
return result
