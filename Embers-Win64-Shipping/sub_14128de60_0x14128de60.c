// 函数: sub_14128de60
// 地址: 0x14128de60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* r15 = *arg2
arg2[8]
int64_t r8 = *arg1
int64_t* rax_3 = sub_1413a8300((*(r8 + 0x38))(arg1, 0, r8), arg2)
int128_t zmm1 = data_142d3f5a0
int64_t rcx_3 = *rax_3
int64_t var_158 = rcx_3
int32_t var_80 = 0
int32_t var_7c
__builtin_memset(&var_7c, 0xff, 0x14)
int128_t var_68 = zmm1
int64_t var_58
__builtin_memset(&var_58, 0, 0x19)
int64_t var_150 = 0
int32_t var_148 = 0xffffffff
int16_t var_144 = 0x500
int64_t var_90 = 0
bool var_3f = *(rcx_3 + 0x38) u> 1
void var_140
memset(&var_140, 0, 0xa8)
void* rsi = arg2[8]
char var_88 = 0x55
int64_t var_98 = *(data_143ec4ca0 + 8)
int32_t var_84 = 0x11
int64_t rbx_3 = (*(rsi + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_5 = rbx_3 + 0x2a

if (rax_5 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x2c)
    rbx_3 = (*(rsi + 0x30) + 1) & 0xfffffffffffffffe
    rax_5 = rbx_3 + 0x2a

wchar16 const* const rcx_7 = u"SeparateTranslucency"
*(rsi + 0x30) = rax_5
wchar16 const i

do
    i = *rcx_7
    *(rbx_3 - u"SeparateTranslucency" + rcx_7) = i
    rcx_7 = &rcx_7[1]
while (i != 0)
void*** rcx_10 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_10[0x27]

if (rax_6 u> *(rsi + 0x38))
    sub_140b0e3d0(rsi + 0x30, 0x140)
    rcx_10 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_10[0x27]

*(rsi + 0x30) = rax_6
void**** rax_7 = *(rsi + 8)
*(rsi + 0x14) += 1
*rax_7 = rcx_10
*(rsi + 8) = &rcx_10[1]
sub_1405d11b0(rcx_10, &var_158, rbx_3)
*(rsi + 0x1c4) = 1
sub_1405d19b0(rsi, &var_158)
int64_t var_48
*(rsi + 0x178) = var_48:7.b
*(rsi + 0x179) = 0
*(rsi + 0x1c4) = 1
int128_t var_168 = *(r15 + 0x1598)
sub_1410b7780(arg2, &var_168, zx.o(0), 0x3f800000)
sub_141267530(r15 + 0x3790, nullptr, arg2[8])
sub_141096650(arg2[8])
int64_t var_50
int64_t result = sub_1405d1550(&var_50)
__security_check_cookie(rax_1 ^ &var_188)
return result
