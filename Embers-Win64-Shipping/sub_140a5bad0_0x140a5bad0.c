// 函数: sub_140a5bad0
// 地址: 0x140a5bad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t var_8c = 0x80
int64_t var_b8
__builtin_memset(&var_b8, 0, 0x2c)
char* rax_2 = *arg1
int32_t var_88 = 0xffffffff
int32_t var_84
__builtin_memset(&var_84, 0, 0x48)
int32_t var_3c = 0x80
int32_t var_38 = 0xffffffff
int32_t var_34
__builtin_memset(&var_34, 0, 0x1c)
*arg2 = *rax_2
sub_140a60010(&arg2[8], &var_b8)
int64_t var_68
sub_140a60010(&arg2[0x58], &var_68)
int64_t var_20
var_20.d = 0
int64_t var_28

if (var_28 != 0)
    int64_t* rcx_3 = data_143ddb3f0
    
    if (rcx_3 == 0)
        sub_140a750a0()
        rcx_3 = data_143ddb3f0
    
    (*(*rcx_3 + 0x30))(rcx_3, var_28)

sub_14065d900(&var_68)
int64_t var_70
var_70.d = 0
int64_t var_78

if (var_78 != 0)
    int64_t* rcx_5 = data_143ddb3f0
    
    if (rcx_5 != 0)
        int64_t r8_1 = *rcx_5
        (*(r8_1 + 0x30))(rcx_5, var_78, r8_1)
    else
        sub_140a750a0()
        int64_t* rcx_6 = data_143ddb3f0
        (*(*rcx_6 + 0x30))(rcx_6, var_78)

sub_14065d900(&var_b8)
__security_check_cookie(rax_1 ^ &var_d8)
return arg2
