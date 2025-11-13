// 函数: sub_141cbbd40
// 地址: 0x141cbbd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t var_128 = 0
int64_t var_120 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_128, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_128)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_128
int64_t var_118 = 0
int64_t var_110 = 0

if (rax_3 != 0)
    rsi = rax_3

int64_t var_108
__builtin_memset(&var_108, 0, 0x5c)
int32_t var_ac = 0x80
int32_t var_a8 = 0xffffffff
int32_t var_a4 = 0
int64_t var_98 = 0
int32_t var_90 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int16_t var_38 = 0
char var_36 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_118, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_118)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r8_4 = &var_118

if (rax_5 != 0)
    r8_4 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_6 != 0
*(arg2 + 0x20) = rbx + rax_6
(*(*arg1 + 0xf8))(arg1, rsi, r8_4)
sub_141c941c0(&var_118)
int64_t result = sub_141c94120(&var_128)
__security_check_cookie(rax_1 ^ &var_148)
return result
