// 函数: sub_141476830
// 地址: 0x141476830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int128_t zmm1 = data_142d3f5a0
int64_t* rcx = **(arg1 + 8)
int32_t var_80 = 0
char var_88 = (arg3 + 1) << 6 | 0x15
int32_t var_7c
__builtin_memset(&var_7c, 0xff, 0x14)
int128_t var_68 = zmm1
int64_t var_58
__builtin_memset(&var_58, 0, 0x19)
int64_t var_90 = 0
int32_t var_84 = 0x22
bool var_3f = rcx[7].d u> 1
int64_t var_158
memset(&var_158, 0, 0xc0)

if (data_1439c7a16 == 0)
    int32_t rbx_1 = *((*(*rcx + 8))(rcx) + 0x64)
    void* rax_6 = (*(*rcx + 8))(rcx)
    void* rax_7 = sub_14139d120(*(arg1 + 0x10), arg2, *(rax_6 + 0x60), zx.q(rbx_1))
    int64_t* rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rcx_5 = *rax_7
    var_158 = rcx_5
    void* rax_8 = &rbx_4[1]
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rbx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rbx_4[1]
    
    *(arg2 + 0x30) = rax_8
    *rbx_4 = rcx_5
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_9[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_9[5]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    *rcx_9 = &data_142d549c8
    rcx_9[2].d = 1
    rcx_9[3] = rbx_4
    rcx_9[4].d = 1

int64_t** rsi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_13 = &rsi_3[1]

if (rcx_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rsi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_13 = &rsi_3[1]

*(arg2 + 0x30) = rcx_13
*rsi_3 = rcx
void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_17[5]

if (rax_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_17[5]

*(arg2 + 0x30) = rax_13
void**** rax_14 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_14 = rcx_17
*(arg2 + 8) = &rcx_17[1]
rcx_17[3] = rsi_3
rcx_17[1] = 0
*rcx_17 = &data_142d549c8
rcx_17[2].d = 1
rcx_17[4].d = 1
int64_t rsi_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_16 = rsi_8 + 0x22

if (rax_16 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x24)
    rsi_8 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_16 = rsi_8 + 0x22

wchar16 const* const rcx_22 = u"ShadowMapAtlases"
*(arg2 + 0x30) = rax_16
wchar16 const i

do
    i = *rcx_22
    *(rcx_22 + rsi_8 - u"ShadowMapAtlases") = i
    rcx_22 = &rcx_22[1]
while (i != 0)
void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_17 = &rcx_25[0x27]

if (rax_17 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_17 = &rcx_25[0x27]

*(arg2 + 0x30) = rax_17
void**** rax_18 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_18 = rcx_25
*(arg2 + 8) = &rcx_25[1]
sub_1405d11b0(rcx_25, &var_158, rsi_8)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_158)
int64_t var_48
*(arg2 + 0x178) = var_48:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1

if (arg3 == 0)
    void*** rcx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_21 = &rcx_32[3]
    
    if (rax_21 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rcx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_21 = &rcx_32[3]
    
    *(arg2 + 0x30) = rax_21
    int64_t* rax_22 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_22 = rcx_32
    *(arg2 + 8) = &rcx_32[1]
    rcx_32[1] = 0
    *rcx_32 = &data_142f6bbc8
    rcx_32[2].w = 0x100
    *(rcx_32 + 0x12) = 0

int64_t var_50
int64_t result = sub_1405d1550(&var_50)
__security_check_cookie(rax_1 ^ &var_188)
return result
