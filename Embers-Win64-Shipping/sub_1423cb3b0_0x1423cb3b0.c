// 函数: sub_1423cb3b0
// 地址: 0x1423cb3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void* rcx = *(arg1 + 8)

if (rcx != 0)
    *(rcx + 8) = *(arg1 + 0x10)

int64_t* rcx_1 = *(arg1 + 0x10)

if (rcx_1 != 0)
    *rcx_1 = *(arg1 + 8)

*(arg1 + 8) = 0
*(arg1 + 0x10) = 0

if (arg3 != 0)
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    uint128_t zmm7 = zx.o(*(arg1 + 0x4c))
    uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x50)))
    void* rax_4 = &rcx_4[5]
    zmm7 = _mm_cvtepi32_ps(zmm7)
    
    if (rax_4 u> *(arg2 + 0x38))
        zmm6 = sub_140b0e3d0(&arg2[0x30], 0x30)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_4[5]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    int128_t zmm1 = data_142d3f5a0
    *rax_5 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142d54998
    *(rcx_4 + 0x1c) = zmm7.d
    rcx_4[4].d = zmm6.d
    rcx_4[2] = 0
    rcx_4[3].d = 0
    *(rcx_4 + 0x24) = 0x3f800000
    int64_t rax_7 = *(arg1 - 8)
    int32_t var_a0_1 = 0
    int32_t var_9c
    __builtin_memset(&var_9c, 0xff, 0x14)
    int128_t var_88_1 = zmm1
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x19)
    int64_t var_178 = rax_7
    int64_t var_170_1 = 0
    int32_t var_168_1 = 0xffffffff
    int16_t var_164_1 = 0x900
    int64_t var_b8
    __builtin_memset(&var_b8, 0, 0x11)
    int32_t var_a4_1 = 0
    bool var_5f_1 = *(rax_7 + 0x38) u> 1
    void var_160
    memset(&var_160, 0, 0xa8)
    int64_t r14_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_8 = r14_3 + 0x24
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(&arg2[0x30], 0x26)
        r14_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_8 = r14_3 + 0x24
    
    wchar16 const* const rcx_10 = u"ClearRenderTarget"
    *(arg2 + 0x30) = rax_8
    wchar16 const i
    
    do
        i = *rcx_10
        *(r14_3 - u"ClearRenderTarget" + rcx_10) = i
        rcx_10 = &rcx_10[1]
    while (i != 0)
    void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_13[0x27]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(&arg2[0x30], 0x140)
        rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_13[0x27]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_13
    *(arg2 + 8) = &rcx_13[1]
    sub_1405d11b0(rcx_13, &var_178, r14_3)
    arg2[0x1c4] = 1
    sub_1405d19b0(arg2, &var_178)
    int64_t var_68
    arg2[0x178] = var_68:7.b
    arg2[0x179] = 0
    arg2[0x1c4] = 1
    sub_141096650(arg2)
    int64_t var_70
    sub_1405d1550(&var_70)

void* rcx_20 = *(arg1 + 0x28)

if ((*(rcx_20 + 0xdc) & 1) != 0)
    char rdx_4 = *(rcx_20 + 0xdd)
    int32_t var_1b8
    
    if (rdx_4 != 0)
        int32_t rax_13
        rax_13.b = rdx_4 == 2
        var_1b8 = rax_13 + 1
    else
        var_1b8 = 0
    
    char rdx_5 = *(rcx_20 + 0xde)
    
    if (rdx_5 != 0)
        int32_t rax_15
        rax_15.b = rdx_5 == 2
        int32_t var_1b4_2 = rax_15 + 1
    else
        int32_t var_1b4_1 = 0
    
    char rdx_6 = *(rcx_20 + 0xdf)
    
    if (rdx_6 != 0)
        int32_t rax_17
        rax_17.b = rdx_6 == 2
        int32_t var_1b0_2 = rax_17 + 1
    else
        int32_t var_1b0_1 = 0
    
    int32_t var_1ac_1 = 1
    char var_1c8_1 = 0
    sub_14199f740(arg2, *(arg1 - 8), &var_1b8, arg1 + 0x58, arg5, arg4)

int64_t r15 = *(arg1 - 0x48)
int64_t* r14_6 = *(arg1 - 8)
void*** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int128_t var_1a8 = data_142d57d10
int128_t zmm0 = data_142d57920
void* rax_19 = &rbx_3[0xa]
int128_t var_198 = data_142d3f800

if (rax_19 u> *(arg2 + 0x38))
    sub_140b0e3d0(&arg2[0x30], 0x58)
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_19 = &rbx_3[0xa]

*(arg2 + 0x30) = rax_19
int64_t* rax_20 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_20 = rbx_3
*(arg2 + 8) = &rbx_3[1]
rbx_3[1] = 0
*rbx_3 = &data_142d56628
rbx_3[2].d = var_1a8.d
__builtin_memset(rbx_3 + 0x14, 0xff, 0x20)
*(rbx_3 + 0x34) = zmm0:4.d
rbx_3[7].d = zmm0:8.d
*(rbx_3 + 0x3c) = zmm0:0xc.d
rbx_3[8] = r14_6
rbx_3[9] = r15

if ((*(*r14_6 + 8))(r14_6) == 0)
    int64_t* rcx_24 = rbx_3[8]
    
    if ((*(*rcx_24 + 0x18))(rcx_24) == 0)
        int64_t* rcx_25 = rbx_3[8]
        
        if ((*(*rcx_25 + 0x20))(rcx_25) == 0)
            int64_t* rcx_26 = rbx_3[8]
            (*(*rcx_26 + 0x10))(rcx_26)

int64_t* rcx_27 = rbx_3[9]
int64_t result = (*(*rcx_27 + 8))(rcx_27)

if (result == 0)
    int64_t* rcx_28 = rbx_3[9]
    result = (*(*rcx_28 + 0x18))(rcx_28)
    
    if (result == 0)
        int64_t* rcx_29 = rbx_3[9]
        result = (*(*rcx_29 + 0x20))(rcx_29)
        
        if (result == 0)
            int64_t* rcx_30 = rbx_3[9]
            result = (*(*rcx_30 + 0x10))(rcx_30)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
