// 函数: sub_1414783b0
// 地址: 0x1414783b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int128_t zmm1 = data_142d3f5a0
void* rdx = arg1[1]
int64_t r9 = *arg1[3]
int64_t r10 = *arg1[4]
int64_t r14 = *(*(rdx + 0x130) + 8)
int64_t rcx = *(*(rdx + 0x128) + 0x18)
int64_t rcx_1 = *(*(rdx + 0x88) + 8)
int64_t rcx_2 = *(*(rdx + 0x80) + 0x18)
int32_t var_b0 = 0
int32_t var_ac
__builtin_memset(&var_ac, 0xff, 0x14)
int128_t var_98 = zmm1
int64_t var_88
__builtin_memset(&var_88, 0, 0x1a)
int64_t var_188 = r9
int64_t var_180 = 0
int32_t var_178 = 0xffffffff
int16_t var_174 = 0x500
int64_t var_170 = r10
int64_t var_168 = 0
int32_t var_160 = 0xffffffff
int16_t var_15c = 0x500
int64_t var_c0 = 0
void var_158
memset(&var_158, 0, 0x90)
char var_b8 = 0x55
int64_t* rdi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t var_c8 = *arg1[5]
int32_t var_b4 = 0x22
void* rax_9 = &rdi_2[4]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rdi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rdi_2[4]

*(arg2 + 0x30) = rax_9
*rdi_2 = r14
rdi_2[1] = rcx
rdi_2[2] = rcx_1
rdi_2[3] = rcx_2
void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_8[6]

if (rax_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_8[6]

*(arg2 + 0x30) = rax_13
void**** rax_14 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_14 = rcx_8
*(arg2 + 8) = &rcx_8[1]
rcx_8[1] = 0
rcx_8[3] = rdi_2
*rcx_8 = &data_142da7798
rcx_8[2].d = 4
rcx_8[4].d = 2
*(rcx_8 + 0x24) = 2
rcx_8[5] = 0
int64_t rdi_7 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_16 = rdi_7 + 0x18

if (rax_16 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x1a)
    rdi_7 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_16 = rdi_7 + 0x18

*(arg2 + 0x30) = rax_16
wchar16 const* const rax_17 = u"ShadowAtlas"
wchar16 const i

do
    i = *rax_17
    *(rax_17 + rdi_7 - u"ShadowAtlas") = i
    rax_17 = &rax_17[1]
while (i != 0)
void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_15[0x27]

if (rax_18 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_15[0x27]

*(arg2 + 0x30) = rax_18
void**** rax_19 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_19 = rcx_15
*(arg2 + 8) = &rcx_15[1]
sub_1405d11b0(rcx_15, &var_188, rdi_7)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_188)
int64_t var_78
*(arg2 + 0x178) = var_78:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
char r8
char var_1a8 = r8
int64_t var_1b0 = *arg1[5]
void var_198
sub_141482010(arg1[2], arg2, *arg1, 2, &var_198)
int64_t var_80
int64_t result = sub_1405d1550(&var_80)
__security_check_cookie(rax_1 ^ &var_1d8)
return result
