// 函数: sub_141b7b0e0
// 地址: 0x141b7b0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int32_t rbx = 0
char var_198
char var_d8
char* rdx
int32_t rsi

if (arg2 == 0)
    int32_t var_e4
    int32_t var_e4_1 = var_e4 & 0xffffff00
    rdx = &var_198
    int64_t var_190_1 = 0
    rsi = 0
    int64_t var_188_1 = 0
    char var_178_1 = 0
    int64_t var_170
    __builtin_memset(&var_170, 0, 0x88)
    rbx = 2
    var_198 = 0
    int32_t var_e8_1 = 0x20702
else
    int32_t var_24
    int32_t var_24_1 = var_24 & 0xffffff00
    rdx = &var_d8
    var_d8 = 1
    rsi = 1
    int64_t var_d0_1 = 0
    int64_t var_c8_1 = 0
    char var_b8_1 = 0
    int64_t var_b0
    __builtin_memset(&var_b0, 0, 0x88)
    int32_t var_28_1 = 0x20702

sub_140e51550(arg1, rdx)

if (rbx != 0)
    sub_140597700(&var_198)

if (rsi != 0)
    sub_140597700(&var_d8)

__security_check_cookie(rax_1 ^ &var_1b8)
return arg1
