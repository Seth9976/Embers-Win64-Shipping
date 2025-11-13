// 函数: sub_1410b7b00
// 地址: 0x1410b7b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8
uint128_t var_38 = zmm8
uint128_t zmm9
uint128_t var_48 = zmm9
void** const result
void*** rcx_3
void* rax_13
uint128_t zmm6
uint128_t zmm7

if (sub_1422eb5d0(arg2) == 0 || arg4 != 0)
    zmm7 = zx.o(*(arg2 + 0x15a0))
    rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    zmm8 = zx.o(*(arg2 + 0x159c))
    zmm9 = zx.o(*(arg2 + 0x1598))
    zmm6 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x15a4)))
    void* rax_14 = &rcx_3[5]
    zmm7 = _mm_cvtepi32_ps(zmm7)
    zmm8 = _mm_cvtepi32_ps(zmm8)
    zmm9 = _mm_cvtepi32_ps(zmm9)
    
    if (rax_14 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_3[5]
    
    *(arg1 + 0x30) = rax_14
    void**** rax_15 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_15 = rcx_3
    rax_13 = &rcx_3[1]
    *(arg1 + 8) = rax_13
    rcx_3[2].d = zmm9.d
    *(rcx_3 + 0x14) = zmm8.d
label_1410b7d45:
    *rax_13 = 0
    result = &data_142d54998
    *(rcx_3 + 0x24) = 0x3f800000
    rcx_3[4].d = zmm6.d
    *(rcx_3 + 0x1c) = zmm7.d
    rcx_3[3].d = 0
else
    rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    
    if (*(arg2 + 0xd7b) == arg4)
        uint64_t rax_10 = zx.q(*(arg3 + 0x3b8))
        zmm6 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x15a4)))
        zmm7.d = float.s(rax_10)
        void* rax_11 = &rcx_3[5]
        
        if (rax_11 u> *(arg1 + 0x38))
            zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_11 = &rcx_3[5]
        
        *(arg1 + 0x30) = rax_11
        void**** rax_12 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_12 = rcx_3
        rax_13 = &rcx_3[1]
        *(arg1 + 8) = rax_13
        rcx_3[2] = 0
        goto label_1410b7d45
    
    void* rdx = *(arg3 + 0xa0)
    zmm6.d = float.s(zx.q(*(rdx + 0x67e4)))
    zmm7.d = float.s(zx.q(*(rdx + 0x15a4)))
    zmm8.d = float.s(zx.q(*(rdx + 0x67e0)))
    zmm9.d = float.s(zx.q(*(rdx + 0x15a0)))
    int128_t zmm10
    zmm10.d = float.s(zx.q(*(rdx + 0x67d8)))
    int128_t zmm11
    zmm11.d = float.s(zx.q(*(rdx + 0x1598)))
    void* rax_7 = &rcx_3[7]
    
    if (rax_7 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x40)
        rcx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_3[7]
    
    *(arg1 + 0x30) = rax_7
    int64_t* rax_8 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_8 = rcx_3
    *(arg1 + 8) = &rcx_3[1]
    rcx_3[2].d = zmm11.d
    *(rcx_3 + 0x14) = zmm10.d
    rcx_3[1] = 0
    result = &data_142f115a8
    *(rcx_3 + 0x24) = zmm9.d
    rcx_3[5].d = zmm8.d
    *(rcx_3 + 0x2c) = zmm7.d
    rcx_3[6].d = zmm6.d
    rcx_3[3] = 0
    rcx_3[4].d = 0
    *(rcx_3 + 0x34) = 0x3f800000
*rcx_3 = result
return result
