// 函数: sub_142b4cf00
// 地址: 0x142b4cf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
struct icu_64::TimeZoneNames::icu_64::TZDBTimeZoneNames::VTable** var_c8 = arg1
*arg1 = &icu_64::TZDBTimeZoneNames::`vftable'{for `icu_64::TimeZoneNames'}
sub_142a456d0(&arg1[1], arg2)
char* rax_2 = arg1 + 0x22
int64_t rcx_1 = -1

do
    rcx_1 += 1
while (rax_2[rcx_1] != 0)

if (rcx_1.d == 0)
    var_c8.d = rcx_1.d
    void var_b8
    sub_142a4fc30(arg1[6], &var_b8, 0x9d, &var_c8)
    int32_t rax_3 = sub_142a4cc70(&var_b8, &arg1[0x1d], 4, &var_c8)
    
    if (var_c8.d s> 0 || rax_3 s>= 4)
        arg1[0x1d].d = 0x313030
else if (rcx_1.d s>= 4)
    arg1[0x1d].d = 0x313030
else
    int64_t rdx_3 = arg1 - rax_2
    char i
    
    do
        i = *rax_2
        rax_2[rdx_3 + 0xe8] = i
        rax_2 = &rax_2[1]
    while (i != 0)

__security_check_cookie(rax_1 ^ &var_e8)
return arg1
