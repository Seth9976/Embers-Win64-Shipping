// 函数: sub_1417f9c30
// 地址: 0x1417f9c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t var_58 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_48
int128_t* result = sub_1417f12a0(&var_48)
*arg3 = *result
arg3[1] = result[1]
arg3[2] = result[2]
__security_check_cookie(rax_1 ^ &var_78)
return result
