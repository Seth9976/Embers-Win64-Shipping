// 函数: sub_141b0dc40
// 地址: 0x141b0dc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
void** var_2e8
sub_141a30780(&var_2e8, *(arg1 + 0x60), arg1 + 0x68)
int64_t i_1 = 4
var_2e8 = &data_143053ab0
void var_238
void* rdx_1 = &var_238
int64_t i

do
    *(rdx_1 - 0x68) = &data_142d4c350
    void* rcx_1 = rdx_1 - 0x10
    *(rdx_1 - 0x60) = 0x404
    __builtin_memset(rdx_1 - 0x58, 0, 0x25)
    __builtin_memset(rdx_1 - 0x30, 0, 0x20)
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    *(rdx_1 + 0xc) = 0x80
    void* rax_2 = *rdx_1
    rdx_1 += 0xa0
    
    if (rax_2 != 0)
        rcx_1 = rax_2
    
    *rcx_1 = 0
    *(rcx_1 + 8) = 0
    *(rdx_1 - 0x90) = 0xffffffff
    *(rdx_1 - 0x8c) = 0
    *(rdx_1 - 0x80) = 0
    *(rdx_1 - 0x78) = 0
    *(rdx_1 - 0x70) = 0xea60
    *(rdx_1 - 0x6c) = 1
    i = i_1
    i_1 -= 1
while (i != 1)
char var_20 = *(arg3 + 0xc9)
void var_2a0
sub_1405af700(&var_2a0, arg3 + 0xe0)
void var_200
sub_1405af700(&var_200, arg3 + 0x180)
void var_160
sub_1405af700(&var_160, arg3 + 0x220)
void var_c0
sub_1405af700(&var_c0, arg3 + 0x2c0)
arg2[0x10].b &= 0xfc
void** rax_4 = sub_140a82f30(0x2d0, 8)
char rdx_6 = arg2[0x10].b | 1
*arg2 = rax_4
arg2[0x10].b = rdx_6

if ((rdx_6 & 2) != 0)
    rax_4 = arg2

sub_141af7200(rax_4, &var_2e8)
sub_141afd2e0(&var_2e8)
__security_check_cookie(rax_1 ^ &var_308)
return arg2
