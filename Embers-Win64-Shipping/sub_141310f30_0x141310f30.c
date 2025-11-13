// 函数: sub_141310f30
// 地址: 0x141310f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
char r8 = *(arg3 + 0x84)
int64_t var_a0 = *(arg2 + 0x5150)
int32_t var_d8 = *(arg3 + 0x60) - *(arg3 + 0x58)
int32_t rax_6 = *(arg3 + 0x64) - *(arg3 + 0x5c)
uint64_t var_a8 = arg1
int32_t var_d4 = rax_6
int128_t var_c8 = zx.o(0)
int32_t var_d0
sub_141187400(&var_d0, arg3 + 0x68, r8, &var_d8)
int32_t var_88 = data_143f02318
int32_t var_84 = var_d0
int32_t var_cc
int32_t var_80 = var_cc
int32_t var_7c = 0
char var_f0 = 0
wchar16 const* const var_58 = u"UnknownTexture2D"
char var_f8 = 1
char var_100 = 1
wchar16 const* const var_108 = u"Tmp FFT Buffer A"
int16_t var_60 = 0
int128_t var_98 = data_143f02308
int32_t var_78 = 1
int32_t var_74 = 0x10000
int16_t var_70 = 1
int64_t var_6c = 1
int32_t var_64 = 0x10001
int16_t var_50 = 1
char var_4e = 0
sub_1419a0ce0(&data_1439c9260, arg1, &var_98, &var_c8, var_108, var_100, var_f8, var_f0)
sub_1419a0ce0(&data_1439c9260, arg1, &var_98, &var_c8:8, u"Tmp FFT Buffer B", 1, 1, 0)
void* rax_10 = *arg5
int64_t rcx_1 = var_c8:8.q
int64_t r10_1 = *(arg3 + 0x40) + 8
int64_t r8_3 = var_c8.q
void* var_b8 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

void* var_e0 = arg3 + 0x70
int64_t var_e8 = rcx_1 + 8
char var_f0_1
var_f0_1.q = r8_3 + 8
char var_f8_1
var_f8_1.q = &var_b8
char var_100_1
var_100_1.q = r10_1
sub_1411874a0(&var_a8, arg3 + 0x68, *(arg3 + 0x84), arg4, arg3 + 0x58, var_100_1, var_f8_1, 
    var_f0_1)
int64_t rax_12 = *arg5
int64_t* rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_4 = &rbx_3[1]

if (rcx_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_4 = &rbx_3[1]

*(arg1 + 0x30) = rcx_4
*rbx_3 = rax_12
void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_8[6]

if (rax_13 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_8[6]

*(arg1 + 0x30) = rax_13
void** rdi_1 = &var_b8
void**** rax_14 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_14 = rcx_8
*(arg1 + 8) = &rcx_8[1]
rcx_8[1] = 0
rcx_8[3] = rbx_3
int64_t i = 2
*rcx_8 = &data_142da7798
rcx_8[4].d = 2
rcx_8[2].d = 1
*(rcx_8 + 0x24) = 1
rcx_8[5] = 0

do
    int64_t* rcx_12 = rdi_1[-1]
    rdi_1 = &rdi_1[-1]
    i -= 1
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0x38))(rcx_12)
while (i != 0)

int64_t result = sub_1405d1550(arg5)
__security_check_cookie(rax_1 ^ &var_128)
return result
