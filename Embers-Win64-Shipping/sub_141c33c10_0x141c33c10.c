// 函数: sub_141c33c10
// 地址: 0x141c33c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x268)
int32_t r9 = 0
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(fconvert.t(*(arg1 + 0x14))))).d f* *(arg1 + 4)
zmm0.d = zmm0.d f* 0.00100000005f
int32_t r10 = int.d(zmm0.d)
int32_t rax_1

if (r10 s<= rdx)
    rax_1 = r10
    
    if (r10 s< 0)
        rax_1 = 0
else
    rax_1 = rdx

int32_t rdx_1 = rdx - rax_1
*(arg1 + 0x26c) = rax_1
*(arg1 + 0x270) = rdx_1
*(arg1 + 0x274) = 0
int32_t rax_3 = rdx_1 & 0x80000003

if (rax_3 s< 0)
    rax_3 = ((rax_3 - 1) | 0xfffffffc) + 1

if (rax_3 != 0)
    int32_t rcx = 0
    int32_t i
    
    do
        rdx_1 -= 1
        rcx += 1
        i = rdx_1 & 0x80000003
        
        if (i s< 0)
            i = ((i - 1) | 0xfffffffc) + 1
    while (i != 0)
    *(arg1 + 0x270) = rdx_1
    *(arg1 + 0x274) = rcx

int32_t rcx_1 = *(arg1 + 0x288)

if (r10 s> rcx_1)
    r10 = rcx_1
else if (r10 s< 0)
    r10 = 0

int32_t rcx_2 = rcx_1 - r10
*(arg1 + 0x28c) = r10
*(arg1 + 0x290) = rcx_2
*(arg1 + 0x294) = 0
int32_t i_1 = rcx_2 & 0x80000003

if (i_1 s< 0)
    i_1 = ((i_1 - 1) | 0xfffffffc) + 1

if (i_1 != 0)
    do
        rcx_2 -= 1
        r9 += 1
        i_1 = rcx_2 & 0x80000003
        
        if (i_1 s< 0)
            i_1 = ((i_1 - 1) | 0xfffffffc) + 1
    while (i_1 != 0)
    
    *(arg1 + 0x290) = rcx_2
    *(arg1 + 0x294) = r9

float zmm1[0x4] = *(arg1 + 8)
*(arg1 + 0x2ac) = zmm1[0]
zmm0.d = 1f - zmm1[0]
*(arg1 + 0x2b0) = zmm0.d
zmm1 = *(arg1 + 8)
*(arg1 + 0x2bc) = zmm1[0]
zmm0.d = 1f - zmm1[0]
*(arg1 + 0x2c0) = zmm0.d
zmm1 = *(arg1 + 0x10)
zmm1[0] = zmm1[0] + 0.100000001f
float temp0_1[0x4] = _mm_min_ss(zmm1[0], 0x3f7ff972)
*(arg1 + 0x9c) = temp0_1[0]
float temp0_2 = _mm_min_ss(*(arg1 + 0x10) - 0.119999997f, 0x3f7ff972)
*(arg1 + 0xa0) = temp0_2
float temp0_3 = _mm_min_ss(*(arg1 + 0x10) + 0.0799999982f, 0x3f7ff972)
*(arg1 + 0xa4) = temp0_3
float zmm2 = *(arg1 + 0x10) - 0.0700000003f
*(arg1 + 0x7c) = 0x3dcccccd
*(arg1 + 0x80) = 0x3e4ccccd
*(arg1 + 0x84) = 0x3e99999a
*(arg1 + 0x88) = 0x3ecccccd
float temp0_4 = _mm_min_ss(zmm2, 0x3f7ff972)
zmm0.d = 1f - temp0_1[0]
zmm1 = 0x3f800000
zmm1[0] = 1f - temp0_2
*(arg1 + 0xa8) = temp0_4
*(arg1 + 0x8c) = zmm0.d
*(arg1 + 0x90) = zmm1[0]
zmm0.d = 1f - temp0_3
zmm1 = 0x3f800000
zmm1[0] = 1f - temp0_4
*(arg1 + 0x94) = zmm0.d
*(arg1 + 0x98) = zmm1[0]
zmm1 = *(arg1 + 0x10)
zmm1[0] = zmm1[0] + 0.170000002f
float temp0_5[0x4] = _mm_min_ss(zmm1[0], 0x3f7fbe77)
*(arg1 + 0xd4) = temp0_5[0]
float temp0_6 = _mm_min_ss(*(arg1 + 0x10) - 0.0700000003f, 0x3f7fbe77)
*(arg1 + 0xd8) = temp0_6
float temp0_7 = _mm_min_ss(*(arg1 + 0x10) + 0.0500000007f, 0x3f7fbe77)
*(arg1 + 0xdc) = temp0_7
zmm2 = *(arg1 + 0x10) - 0.109999999f
*(arg1 + 0xb4) = 0x3dcccccd
*(arg1 + 0xb8) = 0x3e4ccccd
*(arg1 + 0xbc) = 0x3e99999a
*(arg1 + 0xc0) = 0x3ecccccd
float temp0_8 = _mm_min_ss(zmm2, 0x3f7fbe77)
zmm0.d = 1f - temp0_5[0]
zmm1 = 0x3f800000
zmm1[0] = 1f - temp0_6
*(arg1 + 0xe0) = temp0_8
*(arg1 + 0xc4) = zmm0.d
*(arg1 + 0xc8) = zmm1[0]
zmm0.d = 1f - temp0_7
zmm1 = 0x3f800000
zmm1[0] = 1f - temp0_8
*(arg1 + 0xcc) = zmm0.d
*(arg1 + 0xd0) = zmm1[0]
int128_t zmm6
zmm6.d = 1f f- *(arg1 + 0xc)
zmm6.d = zmm6.d f* 0.5f
*(arg1 + 0xac) = zmm6.d
*(arg1 + 0xe4) = zmm6.d
zmm1 = *(arg1 + 0x88)
*(arg1 + 0xec) = *(arg1 + 0x78)
zmm0 = *(arg1 + 0x98)
*(arg1 + 0xfc) = zmm1
zmm1 = zx.o(*(arg1 + 0xa8))
*(arg1 + 0x10c) = zmm0
zmm0 = *(arg1 + 0xb0)
*(arg1 + 0x11c) = zmm1.q
zmm1 = *(arg1 + 0xc0)
*(arg1 + 0x1ac) = zmm0
zmm0 = *(arg1 + 0xd0)
*(arg1 + 0x1bc) = zmm1
zmm1 = zx.o(*(arg1 + 0xe0))
*(arg1 + 0x1cc) = zmm0
*(arg1 + 0x1dc) = zmm1.q
return i_1
