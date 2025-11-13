// 函数: sub_1421d0450
// 地址: 0x1421d0450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248

if (*(arg1 + 0xb0) != 0)
    void* rbx_1 = *(arg1 + 0x80)
    int128_t zmm1 = data_142d3f5a0
    int64_t rax_2 = *(rbx_1 + 0x80)
    int64_t var_160_1 = *(rbx_1 + 0xa0)
    int32_t var_a0_1 = 0
    int32_t var_9c
    __builtin_memset(&var_9c, 0xff, 0x14)
    int128_t var_88_1 = zmm1
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x1a)
    int64_t var_178 = rax_2
    int64_t var_170_1 = 0
    int32_t var_168_1 = 0xffffffff
    int16_t var_164_1 = 0x500
    int64_t var_158_1 = 0
    int32_t var_150_1 = 0xffffffff
    int16_t var_14c_1 = 0x500
    int64_t var_b8
    __builtin_memset(&var_b8, 0, 0x11)
    int32_t var_a4_1 = 0
    void var_148
    memset(&var_148, 0, 0x90)
    int64_t var_170_2 = *(rbx_1 + 0x88)
    int64_t var_158_2 = *(rbx_1 + 0xa8)
    sub_1410e0180(arg2, &var_178)
    int64_t rsi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_5 = rsi_3 + 0x30
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x32)
        rsi_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_5 = rsi_3 + 0x30
    
    wchar16 const* const rcx_3 = u"UpdateMultiGPUResources"
    *(arg2 + 0x30) = rax_5
    wchar16 const i
    
    do
        i = *rcx_3
        *(rsi_3 - u"UpdateMultiGPUResources" + rcx_3) = i
        rcx_3 = &rcx_3[1]
    while (i != 0)
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_6[0x27]
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_6[0x27]
    
    *(arg2 + 0x30) = rax_6
    void**** rax_7 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_7 = rcx_6
    *(arg2 + 8) = &rcx_6[1]
    sub_1405d11b0(rcx_6, &var_178, rsi_3)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_178)
    int64_t var_68
    *(arg2 + 0x178) = var_68:7.b
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1
    uint128_t zmm7 = zx.o(data_143a2ee34)
    void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(data_143a2ee38))
    void* rax_10 = &rcx_13[5]
    zmm7 = _mm_cvtepi32_ps(zmm7)
    
    if (rax_10 u> *(arg2 + 0x38))
        zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_13[5]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_13
    *(arg2 + 8) = &rcx_13[1]
    rcx_13[1] = 0
    *rcx_13 = &data_142d54998
    *(rcx_13 + 0x1c) = zmm7.d
    rcx_13[4].d = zmm6_1.d
    rcx_13[2] = 0
    rcx_13[3].d = 0
    *(rcx_13 + 0x24) = 0x3f800000
    int128_t var_228
    __builtin_memset(&var_228, 0, 0x30)
    int64_t var_1cc
    __builtin_memset(&var_1cc, 0, 0x43)
    int128_t var_1e0_1 = zx.o(0)
    int16_t var_188_1 = 0
    sub_140fdc870(arg2, &var_228)
    int64_t var_1e8_1 = data_14395d9e8
    int64_t var_1f0_1 = data_14395da18
    int64_t var_1f8_1 = data_14395da00
    sub_1421a75e0(arg2, &var_228, *(arg1 + 0x88), arg1 + 0xa8)
    sub_141096650(arg2)
    int64_t var_70
    sub_1405d1550(&var_70)

*(arg1 + 0xb0) = 0

if (*(arg1 + 0xb4) s<= 0xffffffff)
    sub_140775c70(arg1 + 0xa8, 0)

int32_t rbx_2 = *(arg1 + 0x8c)
char rax_16 = sub_1405fba70(rbx_2, 3)
char result

if (rax_16 != 0)
    result = sub_1419a4830(rbx_2)

if (rax_16 == 0 || result != 0)
    result = sub_1405fba70(*(arg1 + 0x8c), 3)
    int32_t rdi
    rdi.b = result != 0
    *(arg1 + 0xbc) = rdi
else
    *(arg1 + 0xbc) = 2

__security_check_cookie(rax_1 ^ &var_248)
return result
