// 函数: sub_141325b00
// 地址: 0x141325b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t rax_2 = *(arg2 + 0x5150)
uint64_t var_a8 = arg1
int64_t var_a0 = rax_2
int32_t var_c8

if (arg4 == 0)
    var_c8 = 0
    int32_t var_c4_1 = 2
else
    var_c8.q = 2

int64_t arg_28
int64_t rax_3 = arg_28
int64_t r8 = var_c8.q
char var_d0 = 0
int32_t var_88 = data_143f02318
wchar16 const* const var_58 = u"UnknownTexture2D"
int32_t var_84 = (r8 + rax_3).d
int32_t var_80 = rax_3:4.d + (r8 u>> 0x20).d
char var_d8 = 1
char var_e0 = 1
wchar16 const* const var_e8 = u"FFT Tmp Kernel Buffer"
int16_t var_60 = 0
int128_t var_98 = data_143f02308
int32_t var_7c = 0
int32_t var_78 = 1
int32_t var_74 = 0x10000
int16_t var_70 = 1
int64_t var_6c = 1
int32_t var_64 = 0x10001
int16_t var_50 = 1
char var_4e = 0
var_c8.q = 0
sub_1419a0ce0(&data_1439c9260, arg1, &var_98, &var_c8, var_e8, var_e0, var_d8, var_d0)
int64_t var_b8 = 0
int64_t var_b0 = arg_28
var_d8.q = var_c8.q + 8
var_e0.q = arg3
char rax_8 = sub_14118b9f0(&var_a8, &arg_28, arg4, &var_b8, arg3 + 8)
int64_t rax_9 = *(arg3 + 0x10)
int64_t* rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_4 = &rbx_3[1]

if (rcx_4 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_4 = &rbx_3[1]

*(arg1 + 0x30) = rcx_4
*rbx_3 = rax_9
void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_8[6]

if (rax_10 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_8[6]

*(arg1 + 0x30) = rax_10
void**** rax_11 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_11 = rcx_8
*(arg1 + 8) = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_142da7798
rcx_8[2].d = 1
rcx_8[3] = rbx_3
rcx_8[4].d = 0
*(rcx_8 + 0x24) = 3
rcx_8[5] = 0
int64_t* rcx_12 = var_c8.q

if (rcx_12 != 0)
    (*(*rcx_12 + 0x38))(rcx_12)

__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rax_8)
