// 函数: sub_141c0ccf0
// 地址: 0x141c0ccf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void var_60
sub_140d921c0(&var_60)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_60
int32_t var_68 = (zx.o(0)).d

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t result = *(arg2 + 0x20)
float zmm1 = var_68
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
*arg3 = sub_141bf2c90(rsi, zmm1)
__security_check_cookie(rax_1 ^ &var_88)
return result
