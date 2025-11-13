// 函数: sub_141b12f70
// 地址: 0x141b12f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
char rax_2 = *(arg1 + 0x48)
int64_t rbx = *(arg1 + 0x40)
uint64_t rdi = *(arg1 + 0x38)
char var_18f = *(arg1 + 0x49)
char var_18e = *(arg1 + 0x4a)
char var_18d = *(arg1 + 0x4b)
char var_18c = *(arg1 + 0x4c)
uint128_t var_138 = *(arg1 + 0x20)
char var_18b = *(arg1 + 0x4d)
uint64_t var_148 = *(arg1 + 0x30)
void** const var_198 = &data_142d4ba00
void var_188
sub_140d3a3a0(&var_188, nullptr)
char var_e8
char var_e8_1 = var_e8 & 0xfc
char var_178 = 1
void** const var_198_1 = &data_143050fa0
void*** rax_8 = sub_140a82f30(0x48, 8)
void*** var_128 = rax_8
char result_1 = var_e8_1 | 1
void*** rcx_1 = &var_128

if ((result_1 & 2) == 0)
    rcx_1 = rax_8

*rcx_1 = &data_142d4ba00
*(rcx_1 + 8) = rax_2.o
rcx_1[3] = rdi
rcx_1[4].d = var_178.d
*rcx_1 = &data_143050fa0
*(rcx_1 + 0x24) = var_138
*(rcx_1 + 0x34) = var_148
*(rcx_1 + 0x3c) = rbx
void var_e0
int128_t* rax_11 = sub_1405ab790(&var_e0, &arg2[0x22], arg2 + 0x124, &arg2[0x27], &var_128)
int64_t rbx_1 = sx.q(arg2[1].d)
int32_t rcx_3 = (rbx_1 + 1).d
arg2[1].d = rcx_3

if (rcx_3 s> *(arg2 + 0xc))
    sub_1405c5190(arg2)

sub_1405ab620(rbx_1 * 0xc8 + *arg2, rax_11)
char var_20

if ((var_20 & 1) != 0)
    int64_t* var_60
    int64_t* rcx_7 = &var_60
    
    if ((var_20 & 2) == 0)
        rcx_7 = var_60
    
    (**rcx_7)(rcx_7, 0)
    
    if ((var_20 & 2) == 0)
        sub_140a74f90(var_60)

int64_t var_80

if (var_80 != 0)
    sub_140a74f90(var_80)

char result = result_1

if ((result & 1) != 0)
    void*** rcx_10 = &var_128
    
    if ((result & 2) == 0)
        rcx_10 = var_128
    
    char var_e8_3 = result & 0xfe
    result = (**rcx_10)(rcx_10, 0)
    
    if ((var_e8_3 & 2) == 0)
        result = sub_140a74f90(var_128)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
