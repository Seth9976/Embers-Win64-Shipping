// 函数: sub_1420b0930
// 地址: 0x1420b0930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* rcx_1 = *arg1 + 0x48
int64_t* rax_3 = (*(*rcx_1 + 8))(rcx_1)
int128_t zmm1 = data_142d3f5a0
void* rdx = *rax_3
void* var_158 = rdx
int32_t var_80 = 0
int32_t var_7c
__builtin_memset(&var_7c, 0xff, 0x14)
int128_t var_68 = zmm1
int64_t var_58
__builtin_memset(&var_58, 0, 0x1a)
int64_t var_150 = 0
int32_t var_148 = 0xffffffff
int16_t var_144 = 0x100
int64_t var_98
__builtin_memset(&var_98, 0, 0x11)
int32_t var_84 = 0
int16_t var_40
var_40:1.b = *(rdx + 0x38) u> 1
void var_140
memset(&var_140, 0, 0xa8)
sub_1410e0180(arg2, &var_158)
int64_t rdi_2 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_4 = rdi_2 + 0x10

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x12)
    rdi_2 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_4 = rdi_2 + 0x10

wchar16 const* const rcx_5 = u"ClearRT"
*(arg2 + 0x30) = rax_4
wchar16 const i

do
    i = *rcx_5
    *(rdi_2 - u"ClearRT" + rcx_5) = i
    rcx_5 = &rcx_5[1]
while (i != 0)
void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_8[0x27]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_8[0x27]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rcx_8
*(arg2 + 8) = &rcx_8[1]
sub_1405d11b0(rcx_8, &var_158, rdi_2)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_158)
int32_t var_160 = 0
char var_168 = 0
int32_t var_170 = 0
char var_178 = 0
int64_t var_48
*(arg2 + 0x178) = var_48:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
sub_14199cb60(arg2, 1, 1, &arg1[1], var_178, var_170, var_168, var_160)
void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_16[2]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_16[2]

*(arg2 + 0x30) = rax_9
int64_t* rax_10 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_10 = rcx_16
*(arg2 + 8) = &rcx_16[1]
rcx_16[1] = 0
*rcx_16 = &data_142d549b8
*(arg2 + 0x1c4) = 0
*(arg2 + 0x178) = 0
int64_t var_50
int64_t result = sub_1405d1550(&var_50)
__security_check_cookie(rax_1 ^ &var_198)
return result
