// 函数: sub_14275b9e0
// 地址: 0x14275b9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *(arg1 + 0x10)
uint32_t rdx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint64_t rax_1 = zx.q(rdx)
uint128_t zmm0

if (rdx.b == 0)
    int32_t r8_3 = *(arg1 + 0x80)
    rax_1 = &rax[5]
    int32_t rbx_2 = *(arg1 + 0x40)
    uint32_t r9_2 = 0
    uint64_t r11_3 = zx.q(zx.d(*(rax + 1)) * r8_3)
    *(arg1 + 0x10) = &rax[3]
    uint64_t r8_4 = zx.q(r8_3 * zx.d(*(rax + 3)))
    *(arg1 + 0x10) = rax_1
    int32_t* r11_4 = r11_3 + *(arg1 + 0x70)
    int32_t* r8_5 = r8_4 + *(arg1 + 0x70)
    
    if (rbx_2 s>= 4)
        uint64_t rax_35 = zx.q(((rbx_2 - 4) u>> 2) + 1)
        uint64_t i_4 = zx.q(rax_35.d)
        r9_2 = (rax_35 << 2).d
        uint64_t i
        
        do
            void* rdx_7 = &r8_5[3]
            int32_t rax_36 = *(arg1 + 0x8c) * 0xbb38435
            zmm0 = _mm_cvtepi32_ps(zx.o(*r11_4))
            *(arg1 + 0x8c) = rax_36 + 0x3619636b
            *r8_5 = int.d((((rax_36 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
            int32_t rax_41 = *(arg1 + 0x8c) * 0xbb38435
            zmm0 = _mm_cvtepi32_ps(zx.o(r11_4[1]))
            *(arg1 + 0x8c) = rax_41 + 0x3619636b
            r8_5[1] = int.d((((rax_41 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
            int32_t rax_46 = *(arg1 + 0x8c) * 0xbb38435
            zmm0 = _mm_cvtepi32_ps(zx.o(r11_4[2]))
            *(arg1 + 0x8c) = rax_46 + 0x3619636b
            r8_5[2] = int.d((((rax_46 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
            r8_5 = rdx_7 + 4
            int32_t rcx_10 = r11_4[3]
            r11_4 = &r11_4[4]
            int32_t rax_52 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg1 + 0x8c) = rax_52
            rax_1 =
                zx.q(int.d(((rax_52 u>> 9 | 0x3f800000) - 1f) f* _mm_cvtepi32_ps(zx.o(rcx_10)).d))
            *rdx_7 = rax_1.d
            i = i_4
            i_4 -= 1
        while (i != 1)
    
    if (r9_2 s< rbx_2)
        uint64_t i_6 = zx.q(rbx_2 - r9_2)
        uint64_t i_1
        
        do
            int32_t* rdx_8 = r8_5
            int32_t rcx_11 = *r11_4
            r8_5 = &r8_5[1]
            r11_4 = &r11_4[1]
            int32_t rax_56 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg1 + 0x8c) = rax_56
            rax_1 =
                zx.q(int.d(((rax_56 u>> 9 | 0x3f800000) - 1f) f* _mm_cvtepi32_ps(zx.o(rcx_11)).d))
            *rdx_8 = rax_1.d
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
else if (rax_1.d == 1)
    int32_t* r11_1 = *(arg1 + 0x20)
    uint32_t rcx_1 = zx.d(*(rax + 1))
    uint32_t r9_1 = 0
    *(arg1 + 0x10) = &rax[3]
    int32_t r8_1 = 0
    int32_t rax_3 = *r11_1
    
    if (rcx_1 s>= rax_3)
        int64_t rdx_1 = 0
        
        do
            rcx_1 -= rax_3
            rdx_1 += 1
            rax_3 = r11_1[rdx_1]
            r8_1 += 1
        while (rcx_1 s>= rax_3)
    
    int32_t r8_2 = *(arg1 + 0x40)
    int32_t rdi_1 = *(sx.q(rcx_1) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
    rax_1 = &rax[5]
    uint64_t rdx_4 = zx.q(*(arg1 + 0x80) * zx.d(*(rax + 3)))
    *(arg1 + 0x10) = rax_1
    void* rdx_5 = rdx_4 + *(arg1 + 0x70)
    uint128_t zmm2
    
    if (r8_2 s>= 4)
        uint64_t rax_8 = zx.q(((r8_2 - 4) u>> 2) + 1)
        zmm2 = _mm_cvtepi32_ps(zx.o(rdi_1))
        uint64_t i_7 = zx.q(rax_8.d)
        r9_1 = (rax_8 << 2).d
        uint64_t i_2
        
        do
            int32_t* rcx_4 = rdx_5 + 0xc
            int32_t rax_10 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg1 + 0x8c) = rax_10
            zmm0.d = (rax_10 u>> 9 | 0x3f800000).d f- 1f
            zmm0.d = zmm0.d f* zmm2.d
            *rdx_5 = int.d(zmm0.d)
            int32_t rax_15 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg1 + 0x8c) = rax_15
            zmm0.d = (rax_15 u>> 9 | 0x3f800000).d f- 1f
            zmm0.d = zmm0.d f* zmm2.d
            *(rdx_5 + 4) = int.d(zmm0.d)
            int32_t rax_20 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg1 + 0x8c) = rax_20
            zmm0.d = (rax_20 u>> 9 | 0x3f800000).d f- 1f
            zmm0.d = zmm0.d f* zmm2.d
            *(rdx_5 + 8) = int.d(zmm0.d)
            rdx_5 = &rcx_4[1]
            int32_t rax_25 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg1 + 0x8c) = rax_25
            zmm0.d = (rax_25 u>> 9 | 0x3f800000).d f- 1f
            zmm0.d = zmm0.d f* zmm2.d
            rax_1 = zx.q(int.d(zmm0.d))
            *rcx_4 = rax_1.d
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    
    if (r9_1 s< r8_2)
        uint64_t i_5 = zx.q(r8_2 - r9_1)
        zmm2 = _mm_cvtepi32_ps(zx.o(rdi_1))
        int32_t rax_32
        uint64_t i_3
        
        do
            void* rcx_5 = rdx_5
            rdx_5 += 4
            int32_t rax_29 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
            *(arg1 + 0x8c) = rax_29
            zmm0.d = (rax_29 u>> 9 | 0x3f800000).d f- 1f
            zmm0.d = zmm0.d f* zmm2.d
            rax_32 = int.d(zmm0.d)
            *rcx_5 = rax_32
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)
        return rax_32
return rax_1
