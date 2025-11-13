// 函数: sub_141e918c0
// 地址: 0x141e918c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t* rcx_1 = *arg1 + 0x48
int64_t* rax_3 = (*(*rcx_1 + 8))(rcx_1)
int64_t* rsi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rdx = *rax_3
void* rax_4 = &rsi_2[1]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rsi_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rsi_2[1]

*(arg2 + 0x30) = rax_4
*rsi_2 = rdx
void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_5[5]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_5[5]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rcx_5
*(arg2 + 8) = &rcx_5[1]
rcx_5[1] = 0
void** const result = &data_142d549c8
*rcx_5 = &data_142d549c8
rcx_5[2].d = 1
rcx_5[3] = rsi_2
rcx_5[4].d = 1

if (arg1[1].b != 0)
    int64_t* rcx_10 = *arg1 + 0x48
    int64_t* rax_9 = (*(*rcx_10 + 8))(rcx_10)
    int128_t zmm1 = data_142d3f5a0
    int64_t rcx_11 = *rax_9
    int64_t var_158 = rcx_11
    int32_t var_80_1 = 0
    int32_t var_7c
    __builtin_memset(&var_7c, 0xff, 0x14)
    int128_t var_68_1 = zmm1
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x19)
    int64_t var_150_1 = 0
    int32_t var_148_1 = 0xffffffff
    int16_t var_144_1 = 0x900
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x11)
    int32_t var_84_1 = 0
    bool var_3f_1 = *(rcx_11 + 0x38) u> 1
    void var_140
    memset(&var_140, 0, 0xa8)
    int64_t rsi_7 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_10 = rsi_7 + 0x1a
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x1c)
        rsi_7 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_10 = rsi_7 + 0x1a
    
    wchar16 const* const rcx_14 = u"ClearUCanvas"
    *(arg2 + 0x30) = rax_10
    wchar16 const i
    
    do
        i = *rcx_14
        *(rcx_14 + rsi_7 - u"ClearUCanvas") = i
        rcx_14 = &rcx_14[1]
    while (i != 0)
    void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_17[0x27]
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_17[0x27]
    
    *(arg2 + 0x30) = rax_11
    void**** rax_12 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_12 = rcx_17
    *(arg2 + 8) = &rcx_17[1]
    sub_1405d11b0(rcx_17, &var_158, rsi_7)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_158)
    int64_t var_48
    *(arg2 + 0x178) = var_48:7.b
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1
    void*** rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = &rcx_24[2]
    
    if (rax_15 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x18)
        rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = &rcx_24[2]
    
    *(arg2 + 0x30) = rax_15
    int64_t* rax_16 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_16 = rcx_24
    *(arg2 + 8) = &rcx_24[1]
    rcx_24[1] = 0
    *rcx_24 = &data_142d549b8
    *(arg2 + 0x1c4) = 0
    *(arg2 + 0x178) = 0
    int64_t var_50
    result = sub_1405d1550(&var_50)

__security_check_cookie(rax_1 ^ &var_188)
return result
