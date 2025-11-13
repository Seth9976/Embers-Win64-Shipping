// 函数: sub_141477350
// 地址: 0x141477350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* rdi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_1 = *(*(*(*arg1 + 8) + 0x1b08) + 8)
void* rax_4 = &rdi_2[1]
int64_t var_168 = rcx_1

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rcx_1 = var_168
    rdi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rdi_2[1]

*(arg2 + 0x30) = rax_4
*rdi_2 = rcx_1
void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_5[5]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_5[5]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
int128_t zmm1 = data_142d3f5a0
*rax_6 = rcx_5
*(arg2 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142d549c8
rcx_5[2].d = 1
rcx_5[3] = rdi_2
rcx_5[4].d = 1
int32_t var_80 = 0
int32_t var_7c
__builtin_memset(&var_7c, 0xff, 0x14)
int128_t var_68 = zmm1
int64_t var_58
__builtin_memset(&var_58, 0, 0x19)
int64_t var_98 = var_168
int64_t var_90 = 0
char var_88 = 0x55
int32_t var_84 = 0x22
bool var_3f = *(var_168 + 0x38) u> 1
void var_158
memset(&var_158, 0, 0xc0)
int64_t rdi_7 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_9 = rdi_7 + 0x20

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x22)
    rdi_7 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_9 = rdi_7 + 0x20

wchar16 const* const rcx_11 = u"ShadowDepthMaps"
*(arg2 + 0x30) = rax_9
wchar16 const i

do
    i = *rcx_11
    *(rcx_11 + rdi_7 - u"ShadowDepthMaps") = i
    rcx_11 = &rcx_11[1]
while (i != 0)
void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_14[0x27]

if (rax_10 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_14[0x27]

*(arg2 + 0x30) = rax_10
void**** rax_11 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_11 = rcx_14
*(arg2 + 8) = &rcx_14[1]
sub_1405d11b0(rcx_14, &var_158, rdi_7)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_158)
int64_t var_48
*(arg2 + 0x178) = var_48:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
char r8
char var_178 = r8
int64_t var_180 = var_168
sub_141482010(arg1[1], arg2, *arg1, 0, 0)
int64_t var_50
int64_t result = sub_1405d1550(&var_50)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
