// 函数: sub_1408ec8c0
// 地址: 0x1408ec8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void** const var_188 = &data_142e13540
int64_t var_180
sub_1408ec150(&var_180, arg1 + 0x20)
int32_t rdi = *(arg1 + 0x60)
int32_t rbx_1 = *(arg1 + 0x64)
char var_f8
char var_f8_1 = var_f8 & 0xfc
int64_t* rax_2 = sub_140a82f30(0x50, 8)
int64_t* var_138 = rax_2
char result_1 = var_f8_1 | 1
int64_t* rcx_1 = &var_138

if ((result_1 & 2) == 0)
    rcx_1 = rax_2

int64_t rax_3 = var_180
*rcx_1 = &data_142e13540
rcx_1[4].d &= 0xfffffffe
rcx_1[1] = rax_3
int32_t var_178
rcx_1[2].d = var_178
int32_t var_174
*(rcx_1 + 0x14) = var_174
int32_t var_170
rcx_1[3].d = var_170
int32_t var_16c
*(rcx_1 + 0x1c) = var_16c
int32_t var_168
rcx_1[4].d |= var_168 & 1
int32_t var_164
*(rcx_1 + 0x24) = var_164
int32_t var_160
rcx_1[5].d = var_160
int64_t var_158
rcx_1[6] = var_158
int64_t var_150
rcx_1[7] = var_150
int32_t var_148
rcx_1[8].d = var_148
int32_t var_144
*(rcx_1 + 0x44) = var_144
rcx_1[9].d = rdi
*(rcx_1 + 0x4c) = rbx_1
void var_f0
int128_t* rax_13 = sub_1405ab790(&var_f0, &arg2[0x22], arg2 + 0x124, &arg2[0x27], &var_138)
int64_t rbx_2 = sx.q(arg2[1].d)
int32_t rcx_3 = (rbx_2 + 1).d
arg2[1].d = rcx_3

if (rcx_3 s> *(arg2 + 0xc))
    sub_1405c5190(arg2)

sub_1405ab620(rbx_2 * 0xc8 + *arg2, rax_13)
char var_30

if ((var_30 & 1) != 0)
    int64_t* var_70
    int64_t* rcx_7 = &var_70
    
    if ((var_30 & 2) == 0)
        rcx_7 = var_70
    
    (**rcx_7)(rcx_7, 0)
    
    if ((var_30 & 2) == 0)
        sub_140a74f90(var_70)

int64_t var_90

if (var_90 != 0)
    sub_140a74f90(var_90)

char result = result_1

if ((result & 1) != 0)
    int64_t* rcx_10 = &var_138
    
    if ((result & 2) == 0)
        rcx_10 = var_138
    
    char var_f8_3 = result & 0xfe
    result = (**rcx_10)(rcx_10, 0)
    
    if ((var_f8_3 & 2) == 0)
        result = sub_140a74f90(var_138)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
