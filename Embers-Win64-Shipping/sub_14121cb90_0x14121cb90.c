// 函数: sub_14121cb90
// 地址: 0x14121cb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t result = __security_cookie ^ &var_1e8
int64_t result_1 = result

if (*arg2 == 0)
    int32_t rcx = data_1439b6364
    int32_t r8 = 8
    int64_t r10_1 = data_143ec4fdc
    int32_t r9_1
    
    if (rcx s>= 1)
        r9_1 = 8
        
        if (rcx s< 8)
            r9_1 = rcx
    else
        r9_1 = 1
    
    int32_t temp0_1 = divs.dp.d(sx.q((r10_1 u>> 0x20).d), r9_1)
    
    if (rcx s< 1)
        r8 = 1
    else if (rcx s< 8)
        r8 = rcx
    
    int16_t var_170_1 = 0
    int32_t var_188_1 = 1
    int32_t temp0_2 = divs.dp.d(sx.q(r10_1.d), r8)
    int32_t rdx_3 = 1
    int128_t var_1a8 = data_1439c7b08
    int32_t var_184_1 = 0x10000
    int32_t rcx_1 = 1
    int16_t var_180_1 = 1
    
    if (temp0_2 u>= 1)
        rdx_3 = temp0_2
    
    int64_t var_17c_1 = 9
    int32_t var_198_1 = data_1439c7b18
    int32_t var_194_1 = rdx_3
    
    if (temp0_1 u>= 1)
        rcx_1 = temp0_1
    
    int32_t var_174_1 = 9
    int32_t var_190_1 = rcx_1
    int32_t var_18c_1 = 0
    wchar16 const* const var_168_1 = u"UnknownTexture2D"
    int16_t var_15f_1 = 0
    char var_160_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg1, &var_1a8, arg2, arg3, 1, 1, 0)
    int128_t zmm1_1 = data_142d3f5a0
    int64_t rcx_2 = *(*arg2 + 8)
    int64_t var_158 = rcx_2
    int32_t var_80_1 = 0
    int32_t var_7c
    __builtin_memset(&var_7c, 0xff, 0x14)
    int128_t var_68_1 = zmm1_1
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x19)
    int64_t var_150_1 = 0
    int32_t var_148_1 = 0xffffffff
    int16_t var_144_1 = 0x900
    int64_t var_98
    __builtin_memset(&var_98, 0, 0x11)
    int32_t var_84_1 = 0
    bool var_3f_1 = *(rcx_2 + 0x38) u> 1
    void var_140
    memset(&var_140, 0, 0xa8)
    int64_t rdi_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_10 = rdi_3 + 0x20
    
    if (rax_10 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x22)
        rdi_3 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
        rax_10 = rdi_3 + 0x20
    
    wchar16 const* const rcx_5 = u"ClearLightShaft"
    *(arg1 + 0x30) = rax_10
    wchar16 const i
    
    do
        i = *rcx_5
        *(rdi_3 - u"ClearLightShaft" + rcx_5) = i
        rcx_5 = &rcx_5[1]
    while (i != 0)
    void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_8[0x27]
    
    if (rax_11 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x140)
        rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_8[0x27]
    
    *(arg1 + 0x30) = rax_11
    void**** rax_12 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_12 = rcx_8
    *(arg1 + 8) = &rcx_8[1]
    sub_1405d11b0(rcx_8, &var_158, rdi_3)
    *(arg1 + 0x1c4) = 1
    sub_1405d19b0(arg1, &var_158)
    int64_t var_48
    *(arg1 + 0x178) = var_48:7.b
    *(arg1 + 0x179) = 0
    *(arg1 + 0x1c4) = 1
    sub_141096650(arg1)
    int64_t var_50
    result = sub_1405d1550(&var_50)

__security_check_cookie(result_1 ^ &var_1e8)
return result
