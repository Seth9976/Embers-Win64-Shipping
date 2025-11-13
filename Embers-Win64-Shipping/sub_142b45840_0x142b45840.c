// 函数: sub_142b45840
// 地址: 0x142b45840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t var_38 = arg2.q
int16_t r8
int16_t var_30 = r8
void var_48
int32_t var_44
int16_t var_40
char var_28[0x18]
sub_142b38c50(arg2, 0, 0, &var_28, 0x12, &var_48, &var_44, &var_40)
int32_t rcx = var_44
char rax_2

if (rcx != 1)
    rax_2 = 0xff
else
    rax_2 = var_28[0] - 0x30

rcx.w -= var_40
int16_t var_2e = rcx.w

if (rax_2 == 1)
    *arg1 = 6
else if (rax_2 != 5)
    *arg1 = 5
else
    *arg1 = 7

arg1[6] = 4
*(arg1 + 8) = var_38.o
__security_check_cookie(rax_1 ^ &var_88)
return arg1
