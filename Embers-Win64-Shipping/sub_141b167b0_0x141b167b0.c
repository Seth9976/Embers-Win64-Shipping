// 函数: sub_141b167b0
// 地址: 0x141b167b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int64_t rax_2 = *(arg1 + 0x80)
void** const var_258 = &data_1430571b8
int64_t var_230 = 0
int32_t var_228 = 0
int64_t var_208 = 0
int32_t var_200 = 0
int64_t var_1d8 = 0
int32_t var_1d0 = 0
int64_t var_1a0 = 0
int32_t var_198 = 0
int64_t var_160 = 0
int32_t var_158 = 0
int64_t var_f8 = 0
int32_t var_f0 = 0
int32_t var_224 = 2
int32_t var_1fc = 2
int32_t var_1cc = 2
int32_t var_194 = 2
int32_t var_154 = 2
int32_t var_ec = 2
void var_248
sub_141b18710(arg1, arg3, &var_248)
char var_268
char var_268_1 = var_268 & 0xfc
int64_t* rax_3 = sub_140a82f30(0x170, 8)
char rcx = var_268_1 | 1
int64_t* var_2a8 = rax_3
int64_t* rcx_1 = &var_2a8

if ((rcx & 2) == 0)
    rcx_1 = rax_3

*rcx_1 = &data_1430571b8
rcx_1[1] = rax_2
sub_141af5f10(&rcx_1[2], &var_248)
void var_e8
int128_t* rax_5 = sub_1405ab790(&var_e8, &arg4[0x22], arg4 + 0x124, &arg4[0x27], &var_2a8)
int64_t rdi = sx.q(arg4[1].d)
int32_t rcx_4 = (rdi + 1).d
arg4[1].d = rcx_4

if (rcx_4 s> *(arg4 + 0xc))
    sub_1405c5190(arg4)

sub_1405ab620(rdi * 0xc8 + *arg4, rax_5)
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

int64_t result = sub_141afcfd0(&var_248)
__security_check_cookie(rax_1 ^ &var_2d8)
return result
