// 函数: sub_141b16b50
// 地址: 0x141b16b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
void** const var_258 = &data_143057d90
int64_t var_238 = 0
int32_t var_230 = 0
int64_t var_210 = 0
int32_t var_208 = 0
int64_t var_1e0 = 0
int32_t var_1d8 = 0
int64_t var_1a8 = 0
int32_t var_1a0 = 0
int64_t var_168 = 0
int32_t var_160 = 0
int64_t var_100 = 0
int32_t var_f8 = 0
int32_t var_22c = 2
int32_t var_204 = 2
int32_t var_1d4 = 2
int32_t var_19c = 2
int32_t var_15c = 2
int32_t var_f4 = 2
void var_250
sub_141b18710(arg1, arg3, &var_250)
char var_268
char var_268_1 = var_268 & 0xfc
int64_t* rax_3 = sub_140a82f30(0x168, 8)
char rcx = var_268_1 | 1
int64_t* var_2a8 = rax_3
int64_t* rcx_1 = &var_2a8

if ((rcx & 2) == 0)
    rcx_1 = rax_3

*rcx_1 = &data_143057d90
sub_141af5f10(&rcx_1[1], &var_250)
void var_e8
int128_t* rax_4 = sub_1405ab790(&var_e8, &arg4[0x22], arg4 + 0x124, &arg4[0x27], &var_2a8)
int64_t rdi = sx.q(arg4[1].d)
int32_t rcx_4 = (rdi + 1).d
arg4[1].d = rcx_4

if (rcx_4 s> *(arg4 + 0xc))
    sub_1405c5190(arg4)

sub_1405ab620(rdi * 0xc8 + *arg4, rax_4)
char var_28

if ((var_28 & 1) != 0)
    int64_t* var_68
    int64_t* rcx_8 = &var_68
    
    if ((var_28 & 2) == 0)
        rcx_8 = var_68
    
    (**rcx_8)(rcx_8, 0)
    
    if ((var_28 & 2) == 0)
        sub_140a74f90(var_68)

int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

if ((rcx & 1) != 0)
    int64_t* rcx_11 = &var_2a8
    
    if ((rcx & 2) == 0)
        rcx_11 = var_2a8
    
    (**rcx_11)(rcx_11, 0)
    
    if ((rcx & 2) == 0)
        sub_140a74f90(var_2a8)

int64_t result = sub_141afcfd0(&var_250)
__security_check_cookie(rax_1 ^ &var_2d8)
return result
