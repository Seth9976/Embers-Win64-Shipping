// 函数: sub_142c08960
// 地址: 0x142c08960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_118 = -2
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
memset(arg1 + 0x28, 0, 0x60)
__builtin_memset(arg1 + 0x38, 0, 0x50)
*(arg1 + 0x88) = 0
arg1[9].q = 0
void var_108
sub_142c067e0(&var_108, arg2, arg3)
sub_142c07b10(&var_108, arg3[2].q, *(arg3 + 0x28))
sub_142c06ad0(&var_108, arg1, arg3 + 0x2c)
int64_t rdx_3 = *(arg1[2].q + 0x10)
int64_t rax_3

if (rdx_3 != 0)
    rax_3 = rdx_3(arg1)
    *(arg1 + 0x98) = rax_3

void* rbx

if (rdx_3 == 0 || rax_3 != 0)
    rbx.b = 1
else
    rbx.b = 0

int64_t var_50

if (var_50 != 0)
    j_sub_140a74f90(var_50)

int64_t var_58 = 0
int64_t var_50_1 = 0
void var_e0
sub_142c36a60(&var_e0)
__security_check_cookie(rax_1 ^ &var_138)
return zx.q(rbx.b)
