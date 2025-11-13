// 函数: sub_142c921a0
// 地址: 0x142c921a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t rbx = 0
int64_t rcx = -1

if (arg2 != 0)
    rbx = -1
    
    do
        rbx += 1
    while (arg2[rbx] != 0)

do
    rcx += 1
while (arg4[rcx] != 0)

void** rax_5 = sub_142c91ea0(&data_1436bb7c8, arg4, sub_1428a1f20(rcx.d))
uint32_t var_f8_1
char* rax_9
int512_t zmm2

if (rax_5 != 0)
    if (rbx != 0)
        sub_142c8ff50(rax_5)
    
    char var_68
    sub_142c91e30(rax_5, &var_68)
    char var_59
    uint32_t var_90_1 = zx.d(var_59)
    char var_5a
    uint32_t var_98_1 = zx.d(var_5a)
    char var_5b
    uint32_t var_a0_1 = zx.d(var_5b)
    char var_5c
    uint32_t var_a8_1 = zx.d(var_5c)
    char var_5d
    uint32_t var_b0_1 = zx.d(var_5d)
    char var_5e
    uint32_t var_b8_1 = zx.d(var_5e)
    char var_5f
    uint32_t var_c0_1 = zx.d(var_5f)
    char var_60
    uint32_t var_c8_1 = zx.d(var_60)
    char var_61
    uint32_t var_d0_1 = zx.d(var_61)
    char var_62
    uint32_t var_d8_1 = zx.d(var_62)
    char var_63
    uint32_t var_e0_1 = zx.d(var_63)
    char var_64
    uint32_t var_e8_1 = zx.d(var_64)
    char var_65
    uint32_t var_f0_1 = zx.d(var_65)
    char var_66
    var_f8_1 = zx.d(var_66)
    rax_9, zmm2 = sub_142c563e0(
        "%s %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", arg3, arg5)

uint64_t result

if (rax_5 == 0 || rax_9 == 0)
    result = 0x1b
else
    var_f8_1.q = arg7
    int32_t result_1 = sub_142c75c90(arg1, rax_9, 0, arg6, zmm2, var_f8_1)
    data_143ccb8a0(rax_9)
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_118)
return result
