// 函数: sub_1423412a0
// 地址: 0x1423412a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* rcx = *(arg1 - 0x98)
char rax_3

if (rcx != 0)
    rax_3 = (*(*rcx + 0xf8))(rcx)

char var_1a8
char var_e8
char* rdx
int32_t rbx
int32_t rsi

if (rcx == 0 || rax_3 != 0)
    var_1a8 = 0
    int32_t var_f4
    int32_t var_f4_1 = var_f4 & 0xffffff00
    rdx = &var_1a8
    int64_t var_1a0_1 = 0
    int64_t var_198_1 = 0
    char var_188_1 = 0
    rsi = 0
    int64_t var_180
    __builtin_memset(&var_180, 0, 0x88)
    rbx = 2
    int32_t var_f8_1 = 0x20702
else
    rbx = 0
    var_e8 = 1
    int32_t var_34
    int32_t var_34_1 = var_34 & 0xffffff00
    rdx = &var_e8
    int64_t var_e0_1 = 0
    int64_t var_d8_1 = 0
    rsi = 1
    char var_c8_1 = 0
    int64_t var_c0
    __builtin_memset(&var_c0, 0, 0x88)
    int32_t var_38_1 = 0x20702

sub_140e51550(arg2, rdx)

if (rbx != 0)
    sub_140597700(&var_1a8)

if (rsi != 0)
    sub_140597700(&var_e8)

__security_check_cookie(rax_1 ^ &var_1c8)
return arg2
