// 函数: sub_142a70140
// 地址: 0x142a70140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int16_t rax_2 = *(arg1 + 8)
int32_t r8_1

if (rax_2 s< 0)
    r8_1 = *(arg1 + 0xc)
else
    r8_1 = sx.d(rax_2) s>> 5

int32_t var_a0 = 0
char _String[0x80]
int64_t rcx = sx.q(sub_142a49990(arg1, 0, r8_1, &_String, 0x80))

if (rcx u>= 0x80)
    __report_rangecheckfailure()
    noreturn

_String[rcx] = 0
int64_t result = atoi(&_String)
__security_check_cookie(rax_1 ^ &var_c8)
return result
