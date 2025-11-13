// 函数: sub_141da2090
// 地址: 0x141da2090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t var_90
sub_140596d10(&var_90, arg2)
int64_t var_80
sub_140596d10(&var_80, arg3)
void*** rax_2 = sub_140a82f30(0x30, 8)
*rax_2 = &data_143239770
rax_2[1] = arg1
sub_140596d10(&rax_2[2], &var_90)
sub_140596d10(&rax_2[4], &var_80)
*rax_2 = &data_143239790
int64_t (* var_68)(void** arg1, void* arg2)
int64_t (* rax_3)(void** arg1, void* arg2) = var_68

if (rax_2 != -8)
    rax_3 = j_sub_141d96bb0

var_68 = rax_3
uint64_t result = sub_141d92650(arg1, 0x13, arg4, &var_68)

if (var_68 != 0)
    void var_48
    void*** rcx_6 = &var_48
    
    if (rax_2 != 0)
        rcx_6 = rax_2
    
    result = (*rcx_6)[2](rcx_6)

int64_t rcx_7 = var_80

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = var_90

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_b8)
return result
