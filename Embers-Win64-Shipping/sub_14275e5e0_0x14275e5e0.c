// 函数: sub_14275e5e0
// 地址: 0x14275e5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *(arg1 + 0x10)
float zmm6[0x4]
float var_18[0x4] = zmm6
uint32_t i_5 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t i_4 = i_5
float zmm0[0x4]
int64_t zmm1
int64_t zmm2
float zmm3[0x4]
float i_6[0x4]

if (i_5.b == 0)
    uint32_t r11_2 = zx.d(*(rax + 1))
    int32_t r8_3 = *(arg1 + 0x80)
    *(arg1 + 0x10) = &rax[3]
    uint64_t rbx_2 = zx.q(zx.d(*(rax + 3)) * r8_3)
    *(arg1 + 0x10) = &rax[5]
    i_4 = *(arg1 + 0x44)
    float (* rbx_3)[0x4] = rbx_2 + *(arg1 + 0x70)
    int128_t* r11_4 = zx.q(r11_2 * r8_3) + *(arg1 + 0x70)
    
    if (i_4 s> 0)
        uint64_t i_2 = zx.q(i_4)
        uint64_t i
        
        do
            float (* r8_4)[0x4] = rbx_3
            float zmm5[0x4] = *r11_4
            rbx_3 = &rbx_3[1]
            r11_4 = &r11_4[1]
            int32_t rcx_9 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
            zmm0 = rcx_9 u>> 9 | 0x3f800000
            zmm0[0] = zmm0[0] - 1f
            zmm2 = zmm0[0].q
            zmm1.d = ((rcx_9 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
            zmm3 = ((rcx_9 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
            zmm3[0] = zmm3[0] - 1f
            float temp0_6[0x4] = _mm_unpacklo_ps(zmm3, zmm2)
            *(arg1 + 0x8c) =
                ((rcx_9 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
            i_4 = (((rcx_9 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                + 0x3619636b) u>> 9 | 0x3f800000
            i_6 = i_4
            i_6[0] = i_6[0] - 1f
            *r8_4 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(i_6, zmm1), temp0_6[0].q), zmm5)
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (i_4 == 1)
    int32_t* r9_1 = *(arg1 + 0x20)
    uint32_t rcx_1 = zx.d(*(rax + 1))
    *(arg1 + 0x10) = &rax[3]
    int32_t r8_1 = 0
    int32_t rax_2 = *r9_1
    
    if (rcx_1 s>= rax_2)
        int64_t rdx = 0
        
        do
            rcx_1 -= rax_2
            rdx += 1
            rax_2 = r9_1[rdx]
            r8_1 += 1
        while (rcx_1 s>= rax_2)
    
    zmm6 = *(sx.q(rcx_1) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
    uint64_t r9_3 = zx.q(*(arg1 + 0x80) * zx.d(*(rax + 3)))
    *(arg1 + 0x10) = &rax[5]
    i_4 = *(arg1 + 0x44)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
    float (* r9_4)[0x4] = r9_3 + *(arg1 + 0x70)
    
    if (i_4 s> 0)
        uint64_t i_3 = zx.q(i_4)
        uint32_t i_7
        uint64_t i_1
        
        do
            float (* r8_2)[0x4] = r9_4
            r9_4 = &r9_4[1]
            int32_t rcx_5 = *(arg1 + 0x8c) * 0xbb38435 + 0x3619636b
            zmm0 = rcx_5 u>> 9 | 0x3f800000
            zmm0[0] = zmm0[0] - 1f
            zmm2 = zmm0[0].q
            zmm1.d = ((rcx_5 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
            zmm3 = ((rcx_5 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000
            zmm3[0] = zmm3[0] - 1f
            float temp0_2[0x4] = _mm_unpacklo_ps(zmm3, zmm2)
            *(arg1 + 0x8c) =
                ((rcx_5 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
            i_7 = (((rcx_5 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) * 0xbb38435
                + 0x3619636b) u>> 9 | 0x3f800000
            i_6 = i_7
            i_6[0] = i_6[0] - 1f
            *r8_2 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(i_6, zmm1), temp0_2[0].q), temp0_1)
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        return i_7
return i_4
