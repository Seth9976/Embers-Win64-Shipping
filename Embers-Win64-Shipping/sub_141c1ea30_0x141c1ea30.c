// 函数: sub_141c1ea30
// 地址: 0x141c1ea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t var_f4
int32_t var_f4_1 = var_f4 & 0xffffff00
char var_1a8 = 0
int64_t var_1a0 = 0
int64_t var_198 = 0
char var_188 = 0
int64_t var_180
__builtin_memset(&var_180, 0, 0x88)
int32_t var_f8 = 0x20702
void var_e8
sub_140e51550(&var_e8, &var_1a8)
sub_140597700(&var_1a8)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_e8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_e8
void* var_1b8 = nullptr

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_1b8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_1b8)

int64_t rax_5 = *(arg2 + 0x20)
void* r8_4 = var_1b8
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
sub_1405979f0(arg3, sub_141bb99d0(&var_1a8, rsi, r8_4))
sub_140597700(&var_1a8)
int64_t result = sub_140597700(&var_e8)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
