// 函数: sub_140754e90
// 地址: 0x140754e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
sub_140747650(&arg3[0x27], arg2)
int32_t rdx_1 = *(arg1 + 0x14)
int32_t r8 = *(arg1 + 0x18)
char rcx_1 = *(arg1 + 0x24)
int32_t r10 = *(arg1 + 0x1c)
int32_t r11 = *(arg1 + 0x20)
char var_e8
char result_1 = var_e8 | 3
int32_t var_120 = *(arg1 + 0x10)
void** const var_128 = &data_142d9aad0
int32_t var_11c = rdx_1
int32_t var_118 = r8
char var_10c = rcx_1
int32_t var_114 = r10
int32_t var_110 = r11
void var_e0
int128_t* rax_3 = sub_1405ab790(&var_e0, &arg3[0x22], arg3 + 0x124, &arg3[0x27], &var_128)
int64_t rbx_1 = sx.q(arg3[1].d)
int32_t rcx_3 = (rbx_1 + 1).d
arg3[1].d = rcx_3

if (rcx_3 s> *(arg3 + 0xc))
    sub_1405c5190(arg3)

sub_1405ab620(rbx_1 * 0xc8 + *arg3, rax_3)
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
    void** const rcx_10 = &var_128
    
    if ((result & 2) == 0)
        rcx_10 = var_128
    
    char var_e8_1 = result & 0xfe
    result = (**rcx_10)(rcx_10, 0)
    
    if ((var_e8_1 & 2) == 0)
        result = sub_140a74f90(var_128)

__security_check_cookie(rax_1 ^ &var_158)
return result
