// 函数: sub_141146130
// 地址: 0x141146130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8
uint128_t var_38 = zmm8
uint128_t zmm9
uint128_t var_48 = zmm9
void** const result
uint128_t zmm6
uint128_t zmm7

if (sub_1422eb5d0(arg2) != 0)
    int64_t* rcx_5
    
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
        int64_t** rax_15 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_15 = rcx_5
        *(arg1 + 8) = &rcx_5[1]
        rcx_5[1] = 0
        result = &data_142d54998
        *(rcx_5 + 0x1c) = zmm7.d
        rcx_5[4].d = zmm6.d
        rcx_5[2] = 0
        rcx_5[3].d = 0
        *(rcx_5 + 0x24) = 0x3f800000
    else
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
        int64_t** rax_11 = *(arg1 + 8)
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
else
    zmm7 = zx.o(*(arg2 + 0x15a0))
    void*** rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    zmm8 = zx.o(*(arg2 + 0x159c))
    zmm9 = zx.o(*(arg2 + 0x1598))
    zmm6 = _mm_cvtepi32_ps(zx.o(*(arg2 + 0x15a4)))
    void* rax_1 = &rdx_2[5]
    zmm7 = _mm_cvtepi32_ps(zmm7)
    zmm8 = _mm_cvtepi32_ps(zmm8)
    zmm9 = _mm_cvtepi32_ps(zmm9)
    
    if (rax_1 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
        rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rdx_2[5]
    
    *(arg1 + 0x30) = rax_1
    int64_t* rax_2 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_2 = rdx_2
    *(arg1 + 8) = &rdx_2[1]
    rdx_2[1] = 0
    result = &data_142d54998
    *rdx_2 = &data_142d54998
    rdx_2[2].d = zmm9.d
    *(rdx_2 + 0x14) = zmm8.d
    *(rdx_2 + 0x1c) = zmm7.d
    rdx_2[4].d = zmm6.d
    rdx_2[3].d = 0
    *(rdx_2 + 0x24) = 0x3f800000
return result
