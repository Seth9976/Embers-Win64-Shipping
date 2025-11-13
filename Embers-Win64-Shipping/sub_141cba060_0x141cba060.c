// 函数: sub_141cba060
// 地址: 0x141cba060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t var_bc = 0x80
int64_t var_128
__builtin_memset(&var_128, 0, 0x6c)
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int16_t var_48 = 0
char var_46 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_128, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_128)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_128
int64_t var_138 = 0
int64_t var_130 = 0

if (rax_3 != 0)
    rsi = rax_3

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_138, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_138)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r8_4 = &var_138

if (rax_5 != 0)
    r8_4 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_6 != 0
*(arg2 + 0x20) = rbx + rax_6
*arg3 = (*(*arg1 + 0x40))(arg1, rsi, r8_4)
sub_141c94120(&var_138)
int64_t result = sub_141c941c0(&var_128)
__security_check_cookie(rax_1 ^ &var_158)
return result
