// 函数: sub_141e10500
// 地址: 0x141e10500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t* r15 = arg1
int32_t var_60
sub_141df3bf0(arg1, &var_60)
int64_t rsi = 0
int32_t rbp = 0
int64_t var_30 = 0
int32_t r14 = 4
int32_t var_28 = 0
int64_t* var_58
*var_58 = *arg2
var_58[5] = 0
int32_t var_24 = 4
void var_50
memmove(&var_58[1], &var_50, 0x20)
int64_t rcx_1 = var_58[5]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)
    r14 = var_24
    rbp = var_28
    rsi = var_30

var_58[5] = rsi
var_58[6].d = rbp
*(var_58 + 0x34) = r14
var_58[7].d = 0xffffffff
int32_t r8 = *(var_58 + 4)
int32_t rdx_4 = (*var_58 - r8) ^ r8 u>> 0xd
int32_t rcx_4 = (0x9e3779b9 - rdx_4 - r8) ^ rdx_4 << 8
int32_t r8_3 = (r8 - rdx_4 - rcx_4) ^ rcx_4 u>> 0xd
int32_t rdx_7 = (rdx_4 - rcx_4 - r8_3) ^ r8_3 u>> 0xc
int32_t rcx_7 = (rcx_4 - rdx_7 - r8_3) ^ rdx_7 << 0x10
int32_t r8_6 = (r8_3 - rdx_7 - rcx_7) ^ rcx_7 u>> 5
int32_t rdx_10 = (rdx_7 - rcx_7 - r8_6) ^ r8_6 u>> 3
int32_t rcx_10 = (rcx_7 - rdx_10 - r8_6) ^ rdx_10 << 0xa
int32_t var_68
sub_141e1c1f0(r15, &var_68, (r8_6 - rdx_10 - rcx_10) ^ rcx_10 u>> 0xf, var_58, var_60, nullptr)
int32_t* rax_20 = *(r15 + 0x100)

if (rax_20 != 0)
    r15 = rax_20

void* result = (sx.q(var_68) << 6) + 8 + r15
__security_check_cookie(rax_1 ^ &var_98)
return result
