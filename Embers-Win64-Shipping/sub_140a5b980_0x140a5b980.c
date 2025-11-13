// 函数: sub_140a5b980
// 地址: 0x140a5b980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_5c = 0x80
int64_t* rdx = *arg1
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_58 = 0xffffffff
int32_t var_54
__builtin_memset(&var_54, 0, 0x18)
sub_140596d10(arg2, rdx)
arg2[2] = 0
void* rcx_1 = &arg2[4]
arg2[3] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg2[8].d = 0xffffffff
*(arg2 + 0x44) = 0
arg2[0xa] = 0
arg2[0xb].d = 0
sub_140a3cab0(&arg2[2], &var_88)
int64_t var_48
int64_t var_50

if (var_48 == 0)
    memmove(&arg2[9], &var_50, 4)
int64_t rbx = arg2[0xa]

if (rbx != 0)
    int64_t* rcx_4 = data_143ddb3f0
    
    if (rcx_4 != 0)
        int64_t r8_1 = *rcx_4
        (*(r8_1 + 0x30))(rcx_4, rbx, r8_1)
    else
        sub_140a750a0()
        int64_t* rcx_5 = data_143ddb3f0
        (*(*rcx_5 + 0x30))(rcx_5, rbx)

arg2[0xa] = var_48
int32_t var_40
arg2[0xb].d = var_40
int64_t var_48_1 = 0
var_40 = 0
sub_140597460(&var_88)
__security_check_cookie(rax_1 ^ &var_a8)
return arg2
