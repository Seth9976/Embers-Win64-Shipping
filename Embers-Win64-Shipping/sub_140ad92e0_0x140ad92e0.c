// 函数: sub_140ad92e0
// 地址: 0x140ad92e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm4 = 0x3da2f983
uint64_t r10 = 0
int32_t r8 = 0
int64_t r9 = 0
int64_t i_1 = 3
int64_t i

do
    *(r9 + 0x143dbaf68) = r10.d
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8)
    *(r9 + 0x143dbaf90) = r8
    int32_t rbx_1 = r10.d
    int32_t r11_3 = (temp1_1 ^ temp0_1) - temp0_1
    int32_t rbx_2 = rbx_1 - r11_3
    int32_t rdx_2
    
    if (rbx_1 != r11_3)
        int32_t rax_3
        rax_3, r8, r9, r10, r11_3, zmm4 = sub_140ad63a0(rbx_2 - 1)
        rdx_2 = rax_3 * rbx_2
    else
        rdx_2 = rbx_2 + 1
    
    int32_t r11_4 = r11_3 + r10.d
    int32_t rax_4
    
    if (r11_3 != neg.d(r10.d))
        int32_t rax_5
        int32_t r11_5
        rax_5, rdx_2, r8, r9, r10, r11_5, zmm4 = sub_140ad63a0(r11_4 - 1)
        rax_4 = rax_5 * r11_5
    else
        rax_4 = r11_4 + 1
    
    uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_4))
    uint128_t zmm2
    zmm2.d = _mm_cvtepi32_ps(zx.o(((r10 << 1) + 1).d)).d f* zmm4
    uint128_t zmm1
    zmm1.d = _mm_cvtepi32_ps(zx.o(rdx_2)).d f/ zmm0.d
    zmm2.d = zmm2.d f* zmm1.d
    zmm0 = _mm_sqrt_ss(0, zmm2.d)
    *(r9 + 0x143dbaf40) = zmm0.d
    
    if (r8 != 0)
        zmm0.d = zmm0.d f* 1.41421354f
        *(r9 + 0x143dbaf40) = zmm0.d
    
    int32_t r8_1 = r8 + 1
    int32_t rax_6 = r8_1
    
    if (r8_1 s> r10.d)
        r8_1 = not.d(r10.d)
    
    *(r9 + 0x143dbaf94) = r8_1
    uint64_t r11_6 = zx.q((r10 + 1).d)
    
    if (rax_6 s<= r10.d)
        r11_6 = zx.q(r10.d)
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r8_1)
    *(r9 + 0x143dbaf6c) = r11_6.d
    int32_t r10_1 = r11_6.d
    int32_t rbx_5 = (temp5_1 ^ temp4_1) - temp4_1
    int32_t r10_2 = r10_1 - rbx_5
    int32_t rdx_5
    
    if (r10_1 != rbx_5)
        int32_t rax_9
        int32_t r10_3
        rax_9, r8_1, r9, r10_3, r11_6, zmm4 = sub_140ad63a0(r10_2 - 1)
        rdx_5 = rax_9 * r10_3
    else
        rdx_5 = r10_2 + 1
    
    int32_t r10_4 = r11_6.d + rbx_5
    int32_t rax_10
    
    if (r10_4 != 0)
        int32_t rax_11
        int32_t r10_5
        rax_11, rdx_5, r8_1, r9, r10_5, r11_6, zmm4 = sub_140ad63a0(r10_4 - 1)
        rax_10 = rax_11 * r10_5
    else
        rax_10 = r10_4 + 1
    
    zmm0 = _mm_cvtepi32_ps(zx.o(rax_10))
    zmm2.d = _mm_cvtepi32_ps(zx.o(((r11_6 << 1) + 1).d)).d f* zmm4
    zmm1.d = _mm_cvtepi32_ps(zx.o(rdx_5)).d f/ zmm0.d
    zmm2.d = zmm2.d f* zmm1.d
    zmm0 = _mm_sqrt_ss(0, zmm2.d)
    *(r9 + 0x143dbaf44) = zmm0.d
    
    if (r8_1 != 0)
        zmm0.d = zmm0.d f* 1.41421354f
        *(r9 + 0x143dbaf44) = zmm0.d
    
    int32_t r8_3 = r8_1 + 1
    int32_t rax_12 = r8_3
    
    if (r8_3 s> r11_6.d)
        r8_3 = not.d(r11_6.d)
    
    *(r9 + 0x143dbaf98) = r8_3
    uint64_t r10_6 = zx.q((r11_6 + 1).d)
    
    if (rax_12 s<= r11_6.d)
        r10_6 = zx.q(r11_6.d)
    
    int32_t temp7_1
    int32_t temp8_1
    temp7_1:temp8_1 = sx.q(r8_3)
    *(r9 + 0x143dbaf70) = r10_6.d
    int32_t r11_7 = r10_6.d
    int32_t rbx_8 = (temp8_1 ^ temp7_1) - temp7_1
    int32_t r11_8 = r11_7 - rbx_8
    int32_t rdx_8
    
    if (r11_7 != rbx_8)
        int32_t rax_15
        int32_t r11_9
        rax_15, r8_3, r9, r10_6, r11_9, zmm4 = sub_140ad63a0(r11_8 - 1)
        rdx_8 = rax_15 * r11_9
    else
        rdx_8 = r11_8 + 1
    
    int32_t r11_10 = r10_6.d + rbx_8
    int32_t rax_16
    
    if (r11_10 != 0)
        int32_t rax_17
        int32_t r11_11
        rax_17, rdx_8, r8_3, r9, r10_6, r11_11, zmm4 = sub_140ad63a0(r11_10 - 1)
        rax_16 = rax_17 * r11_11
    else
        rax_16 = r11_10 + 1
    
    zmm0 = _mm_cvtepi32_ps(zx.o(rax_16))
    zmm2.d = _mm_cvtepi32_ps(zx.o(((r10_6 << 1) + 1).d)).d f* zmm4
    zmm1.d = _mm_cvtepi32_ps(zx.o(rdx_8)).d f/ zmm0.d
    zmm2.d = zmm2.d f* zmm1.d
    zmm0 = _mm_sqrt_ss(0, zmm2.d)
    *(r9 + 0x143dbaf48) = zmm0.d
    
    if (r8_3 != 0)
        zmm0.d = zmm0.d f* 1.41421354f
        *(r9 + 0x143dbaf48) = zmm0.d
    
    r8 = r8_3 + 1
    int32_t rcx_10 = r8
    
    if (r8 s> r10_6.d)
        r8 = not.d(r10_6.d)
    
    r9 += 0xc
    int32_t rax_18 = (r10_6 + 1).d
    
    if (rcx_10 s<= r10_6.d)
        rax_18 = r10_6.d
    
    r10 = zx.q(rax_18)
    i = i_1
    i_1 -= 1
while (i != 1)
return 0
