// 函数: sub_141108550
// 地址: 0x141108550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r10_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &r10_2[5]
uint128_t zmm6

if (rax u> *(arg1 + 0x38))
    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
    r10_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r10_2[5]

uint128_t var_28 = zmm6
uint128_t zmm8
uint128_t var_48 = zmm8
uint128_t zmm9
uint128_t var_58 = zmm9
*(arg1 + 0x30) = rax
int64_t* rax_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_1 = r10_2
*(arg1 + 8) = &r10_2[1]
r10_2[1] = 0
*r10_2 = &data_142f18bc8
r10_2[2].b = 0
*(r10_2 + 0x14) = 0
*(r10_2 + 0x1c) = 0
void** const result
void*** rcx_5
void* rax_16
uint128_t zmm7

if (sub_1422eb5d0(arg2) == 0 || arg4 != 0)
    zmm7 = zx.o(*(arg2 + 0x15a0))
    rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    zmm8 = zx.o(*(arg2 + 0x159c))
    zmm9 = zx.o(*(arg2 + 0x1598))
    zmm6 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x15a4)))
    void* rax_17 = &rcx_5[5]
    zmm7 = _mm_cvtepi32_ps(zmm7)
    zmm8 = _mm_cvtepi32_ps(zmm8)
    zmm9 = _mm_cvtepi32_ps(zmm9)
    
    if (rax_17 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_5[5]
    
    *(arg1 + 0x30) = rax_17
    void**** rax_18 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_18 = rcx_5
    rax_16 = &rcx_5[1]
    *(arg1 + 8) = rax_16
    rcx_5[2].d = zmm9.d
    *(rcx_5 + 0x14) = zmm8.d
label_141108809:
    *rax_16 = 0
    result = &data_142d54998
    *(rcx_5 + 0x24) = 0x3f800000
    rcx_5[4].d = zmm6.d
    *(rcx_5 + 0x1c) = zmm7.d
    rcx_5[3].d = 0
else
    if (*(arg2 + 0xd7b) == 0)
        rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        zmm7.d = float.s(zx.q(*(arg3 + 0x3b8)))
        void* rax_14 = &rcx_5[5]
        zmm6 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x15a4)))
        
        if (rax_14 u> *(arg1 + 0x38))
            zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_14 = &rcx_5[5]
        
        *(arg1 + 0x30) = rax_14
        void**** rax_15 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_15 = rcx_5
        rax_16 = &rcx_5[1]
        *(arg1 + 8) = rax_16
        rcx_5[2] = 0
        goto label_141108809
    
    void* rcx_2 = *(arg3 + 0xa0)
    zmm6.d = float.s(zx.q(*(rcx_2 + 0x67e4)))
    zmm7.d = float.s(zx.q(*(rcx_2 + 0x15a4)))
    zmm8.d = float.s(zx.q(*(rcx_2 + 0x67e0)))
    zmm9.d = float.s(zx.q(*(rcx_2 + 0x15a0)))
    int128_t zmm10
    zmm10.d = float.s(zx.q(*(rcx_2 + 0x67d8)))
    rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int128_t zmm11
    zmm11.d = float.s(zx.q(*(rcx_2 + 0x1598)))
    void* rax_10 = &rcx_5[7]
    
    if (rax_10 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x40)
        rcx_5 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_5[7]
    
    *(arg1 + 0x30) = rax_10
    void** rax_11 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_11 = rcx_5
    *(arg1 + 8) = &rcx_5[1]
    rcx_5[2].d = zmm11.d
    *(rcx_5 + 0x14) = zmm10.d
    rcx_5[1] = 0
    result = &data_142f115a8
    *(rcx_5 + 0x24) = zmm9.d
    rcx_5[5].d = zmm8.d
    *(rcx_5 + 0x2c) = zmm7.d
    rcx_5[6].d = zmm6.d
    rcx_5[3] = 0
    rcx_5[4].d = 0
    *(rcx_5 + 0x34) = 0x3f800000
*rcx_5 = result
return result
