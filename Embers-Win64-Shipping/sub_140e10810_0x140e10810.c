// 函数: sub_140e10810
// 地址: 0x140e10810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t var_bc = 0x80
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int32_t var_f8
sub_140dd2250(&var_e8, &var_f8, arg4, nullptr)
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_140e10680(arg1, arg3, &var_e8, &var_98)
sub_140e109c0(&var_98, &var_f8, arg4)
int64_t rax_2 = sx.q(var_f8)
void* const rax_5

if (rax_2.d == 0xffffffff)
    rax_5 = nullptr
else
    rax_5 = rax_2 * 0x60 + var_98

*arg2 = *(rax_5 + 0x10)
arg2[1] = *(rax_5 + 0x20)
arg2[2] = *(rax_5 + 0x30)
arg2[3].q = *(rax_5 + 0x40)
int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_140ddeb80(&var_98)
int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_140a720d0(&var_e8, 0)
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rcx_8 = var_e8

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_3 = *rbx_1
        (*rdx_3)(rbx_1, rdx_3)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_3 = *rbx_1
            (*(r8_3 + 8))(rbx_1, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
