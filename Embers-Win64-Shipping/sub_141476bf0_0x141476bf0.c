// 函数: sub_141476bf0
// 地址: 0x141476bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int128_t zmm1 = data_142d3f5a0
int64_t* r14 = **(arg1 + 8)
int32_t var_80 = 0
char var_88 = (arg3 + 1) << 6 | 0x15
int32_t var_7c
__builtin_memset(&var_7c, 0xff, 0x14)
int128_t var_68 = zmm1
int64_t var_58
__builtin_memset(&var_58, 0, 0x19)
int64_t* var_98 = r14
int64_t var_90 = 0
int32_t var_84 = 0x22
bool var_3f = r14[7].d u> 1
int64_t var_158
memset(&var_158, 0, 0xc0)

if (data_1439c7a16 == 0)
    int32_t var_148_1 = 0xffffffff
    char var_144_1 = 0
    int32_t rbx_1 = *((*(*r14 + 8))(r14) + 0x64)
    void* rax_6 = (*(*r14 + 8))(r14)
    void* rax_7 = sub_14139d120(*(arg1 + 0x10), arg2, *(rax_6 + 0x60), zx.q(rbx_1))
    int64_t* rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rcx_4 = *rax_7
    var_158 = rcx_4
    void* rax_8 = &rbx_4[1]
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rbx_4[1]
    
    *(arg2 + 0x30) = rax_8
    *rbx_4 = rcx_4
    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_8[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_8[5]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_8
    *(arg2 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142d549c8
    rcx_8[2].d = 1
    rcx_8[3] = rbx_4
    rcx_8[4].d = 1

int64_t** rsi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_12 = &rsi_3[1]

if (rax_12 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rsi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rsi_3[1]

*(arg2 + 0x30) = rax_12
*rsi_3 = r14
void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_15[5]

if (rax_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_15[5]

*(arg2 + 0x30) = rax_13
void**** rax_14 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_14 = rcx_15
*(arg2 + 8) = &rcx_15[1]
rcx_15[3] = rsi_3
rcx_15[1] = 0
*rcx_15 = &data_142d549c8
rcx_15[2].d = 1
rcx_15[4].d = 1
int64_t rsi_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_16 = rsi_8 + 0x28

if (rax_16 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x2a)
    rsi_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_16 = rsi_8 + 0x28

wchar16 const* const rcx_20 = u"ShadowDepthCubeMaps"
*(arg2 + 0x30) = rax_16
wchar16 const i

do
    i = *rcx_20
    *(rcx_20 + rsi_8 - u"ShadowDepthCubeMaps") = i
    rcx_20 = &rcx_20[1]
while (i != 0)
void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_17 = &rcx_23[0x27]

if (rax_17 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_23[0x27]

*(arg2 + 0x30) = rax_17
void**** rax_18 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_18 = rcx_23
*(arg2 + 8) = &rcx_23[1]
sub_1405d11b0(rcx_23, &var_158, rsi_8)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_158)
int64_t var_48
*(arg2 + 0x178) = var_48:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
int64_t var_50
int64_t result = sub_1405d1550(&var_50)
__security_check_cookie(rax_1 ^ &var_188)
return result
