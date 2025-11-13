// 函数: sub_141c0a820
// 地址: 0x141c0a820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void var_58
sub_140d921c0(&var_58)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* rax_3 = *(arg2 + 0x38)
void* rdi = &var_58

if (rax_3 != 0)
    rdi = rax_3

int64_t var_68

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_5 = *(arg2 + 0x20)
int64_t r8_4 = var_68
int64_t rsi
rsi.b = rax_5 != 0
*(arg2 + 0x20) = rsi + rax_5
int32_t var_60
int32_t* result = sub_141b8ef90(&var_60, rdi, r8_4)
*arg3 = *result
__security_check_cookie(rax_1 ^ &var_88)
return result
