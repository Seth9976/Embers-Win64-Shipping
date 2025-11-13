// 函数: sub_14282a44c
// 地址: 0x14282a44c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* rax_2 = sub_142828cd8(*(arg1 + 8))
void* var_e8

if (arg2[2] != 0)
    sub_14058a5c0(&var_e8, "cannot assign multiple tags to the same node")
    struct std::exception::VTable* exceptionObject
    sub_1428244f0(&exceptionObject, rax_2 + 8, &var_e8)
    _CxxThrowException(&exceptionObject, &data_143946450)
    noreturn

void var_c8
sub_14282e120(&var_c8, rax_2)
sub_14058a4a0(arg2, sub_14282e1a8(&var_c8, &var_e8, *(arg1 + 0x10)))
int64_t var_d0

if (var_d0 u>= 0x10)
    sub_14058ba50(var_e8, var_d0 + 1)

int64_t result = sub_142828d00(*(arg1 + 8))
int64_t var_88
char var_a0

if (var_88 u>= 0x10)
    result = sub_14058ba50(var_a0.q, var_88 + 1)
int64_t var_90 = 0
int64_t var_88_1 = 0xf
char var_a0_1 = 0
int64_t var_a8
void* var_c0

if (var_a8 u>= 0x10)
    result = sub_14058ba50(var_c0, var_a8 + 1)
__security_check_cookie(rax_1 ^ &var_108)
return result
