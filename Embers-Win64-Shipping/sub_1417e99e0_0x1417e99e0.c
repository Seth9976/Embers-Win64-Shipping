// 函数: sub_1417e99e0
// 地址: 0x1417e99e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
bool cond:0 = *(arg2 + 0x20) == 0
char var_68 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_3 = *(arg2 + 0x20)
char r8_2 = var_68
int64_t rdx_2
rdx_2.b = rax_3 != 0
*(arg2 + 0x20) = rdx_2 + rax_3
void var_58
int128_t* result = sub_1417dcc50(arg1, &var_58, r8_2)
*arg3 = *result
arg3[1] = result[1]
arg3[2] = result[2]
__security_check_cookie(rax_1 ^ &var_88)
return result
