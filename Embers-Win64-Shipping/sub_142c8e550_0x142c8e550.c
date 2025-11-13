// 函数: sub_142c8e550
// 地址: 0x142c8e550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rbx = -1
int64_t rax_2 = -1

do
    rax_2 += 1
while (arg2[rax_2] != 0)

if (rax_2 u>= 0xe)
    rbx = 0xe
else
    do
        rbx += 1
    while (arg2[rbx] != 0)

char var_30
sub_142c70550(&var_30, arg2, rbx)
memset(&(&var_30)[rbx], 0, 0xe - rbx)
char rcx_2 = var_30
char var_38 = rcx_2
char var_2f
uint8_t var_37 = var_2f u>> 1 | rcx_2 << 7
char var_2e
uint8_t var_36 = var_2e u>> 2 | var_2f << 6
char var_2d
uint8_t var_35 = var_2d u>> 3 | var_2e << 5
char var_2c
uint8_t var_34 = var_2c u>> 4 | var_2d << 4
char var_2b
uint8_t var_33 = var_2b u>> 5 | var_2c << 3
uint8_t var_2a
uint8_t var_31 = var_2a * 2
uint8_t var_32 = var_2a u>> 6 | var_2b << 2
sub_1428fcf60(&var_38)
int32_t var_b8[0x16]
sub_1428fc850(&var_38, &var_b8)
sub_1428fc780("KGS!@#$%%c%c%c%c%c%c%c%c", arg3, &var_b8, 1)
void var_29
sub_142c8eae0(&var_29, &var_b8)
sub_1428fc780("KGS!@#$%%c%c%c%c%c%c%c%c", &arg3[8], &var_b8, 1)
*(arg3 + 0x10) = 0
arg3[0x14] = 0
__security_check_cookie(rax_1 ^ &var_d8)
return 0
