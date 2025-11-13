// 函数: sub_14257a5d0
// 地址: 0x14257a5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

char var_68 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_4 = *(arg2 + 0x20)
uint32_t r9 = zx.d(var_68)
int64_t r8_4 = var_60
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
void var_58
int128_t* result = sub_141f12c10(arg1, &var_58, r8_4, r9)
*arg3 = *result
arg3[1] = result[1]
arg3[2] = result[2]
__security_check_cookie(rax_1 ^ &var_88)
return result
