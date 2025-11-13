// 函数: sub_1428fe250
// 地址: 0x1428fe250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm2[0x4] = data_142e11d00
uint64_t r14 = 0
*arg1 = 0
int32_t r10 = 0
void* r9 = &arg1[5]
int32_t rax = 8

do
    r9 += 0x40
    *(r9 - 0x60) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(rax - 8), 0), zmm2)
    int32_t rcx_2 = rax + 4
    uint128_t zmm0 = zx.o(rax)
    *(r9 - 0x50) = _mm_add_epi32(_mm_shuffle_epi32(zx.o(rax - 4), 0), zmm2)
    rax += 0x10
    zmm0 = _mm_shuffle_epi32(zmm0, 0)
    int32_t zmm1[0x4] = _mm_shuffle_epi32(zx.o(rcx_2), 0)
    *(r9 - 0x40) = _mm_add_epi32(zmm0, zmm2)
    *(r9 - 0x30) = _mm_add_epi32(zmm1, zmm2)
while (rax - 8 u< 0x100)

int32_t rdi = 2

do
    uint64_t rax_1 = zx.q(rdi - 2)
    int32_t r8 = *(&arg1[1] + (rax_1 << 2))
    int32_t r10_1 = 0
    uint64_t r9_1 = zx.q(*(sx.q(r10) + arg3) + r8.b + r14.b)
    
    if (r10 + 1 != arg2)
        r10_1 = r10 + 1
    
    *(&arg1[1] + (rax_1 << 2)) = *(&arg1[1] + (r9_1 << 2))
    *(&arg1[1] + (r9_1 << 2)) = r8
    void* rdx_1 = &arg1[1] + (zx.q(rdi - 1) << 2)
    int32_t r8_1 = *rdx_1
    int32_t r10_2 = 0
    uint64_t r9_2 = zx.q(*(sx.q(r10_1) + arg3) + r9_1.b + r8_1.b)
    
    if (r10_1 + 1 != arg2)
        r10_2 = r10_1 + 1
    
    *rdx_1 = *(&arg1[1] + (r9_2 << 2))
    *(&arg1[1] + (r9_2 << 2)) = r8_1
    uint64_t rax_9 = zx.q(rdi)
    int32_t r8_2 = *(&arg1[1] + (rax_9 << 2))
    int32_t r10_3 = 0
    uint64_t r9_3 = zx.q(*(sx.q(r10_2) + arg3) + r9_2.b + r8_2.b)
    
    if (r10_2 + 1 != arg2)
        r10_3 = r10_2 + 1
    
    *(&arg1[1] + (rax_9 << 2)) = *(&arg1[1] + (r9_3 << 2))
    *(&arg1[1] + (r9_3 << 2)) = r8_2
    void* rdx_3 = &arg1[1] + (zx.q(rdi + 1) << 2)
    int32_t r8_3 = *rdx_3
    int32_t r10_4 = 0
    uint64_t r9_4 = zx.q(*(sx.q(r10_3) + arg3) + r9_3.b + r8_3.b)
    
    if (r10_3 + 1 != arg2)
        r10_4 = r10_3 + 1
    
    *rdx_3 = *(&arg1[1] + (r9_4 << 2))
    void* rdx_4 = &arg1[1] + (zx.q(rdi + 2) << 2)
    *(&arg1[1] + (r9_4 << 2)) = r8_3
    int32_t r8_4 = *rdx_4
    int32_t r10_5 = 0
    uint64_t r9_5 = zx.q(*(sx.q(r10_4) + arg3) + r9_4.b + r8_4.b)
    
    if (r10_4 + 1 != arg2)
        r10_5 = r10_4 + 1
    
    *rdx_4 = *(&arg1[1] + (r9_5 << 2))
    void* rdx_5 = &arg1[1] + (zx.q(rdi + 3) << 2)
    *(&arg1[1] + (r9_5 << 2)) = r8_4
    int32_t r8_5 = *rdx_5
    uint64_t r9_6 = zx.q(*(sx.q(r10_5) + arg3) + r9_5.b + r8_5.b)
    int32_t r10_6 = 0
    
    if (r10_5 + 1 != arg2)
        r10_6 = r10_5 + 1
    
    *rdx_5 = *(&arg1[1] + (r9_6 << 2))
    *(&arg1[1] + (r9_6 << 2)) = r8_5
    void* rdx_6 = &arg1[1] + (zx.q(rdi + 4) << 2)
    int32_t r8_6 = *rdx_6
    int32_t r10_7 = 0
    uint64_t r9_7 = zx.q(*(sx.q(r10_6) + arg3) + r9_6.b + r8_6.b)
    
    if (r10_6 + 1 != arg2)
        r10_7 = r10_6 + 1
    
    *rdx_6 = *(&arg1[1] + (r9_7 << 2))
    *(&arg1[1] + (r9_7 << 2)) = r8_6
    void* rdx_7 = &arg1[1] + (zx.q(rdi + 5) << 2)
    int32_t r8_7 = *rdx_7
    int32_t r10_8 = 0
    uint64_t r9_8 = zx.q(*(sx.q(r10_7) + arg3) + r9_7.b + r8_7.b)
    
    if (r10_7 + 1 != arg2)
        r10_8 = r10_7 + 1
    
    *rdx_7 = *(&arg1[1] + (r9_8 << 2))
    *(&arg1[1] + (r9_8 << 2)) = r8_7
    void* rdx_8 = &arg1[1] + (zx.q(rdi + 6) << 2)
    int32_t r8_8 = *rdx_8
    int32_t r10_9 = 0
    uint64_t r9_9 = zx.q(*(sx.q(r10_8) + arg3) + r9_8.b + r8_8.b)
    
    if (r10_8 + 1 != arg2)
        r10_9 = r10_8 + 1
    
    *rdx_8 = *(&arg1[1] + (r9_9 << 2))
    void* rdx_9 = &arg1[1] + (zx.q(rdi + 7) << 2)
    *(&arg1[1] + (r9_9 << 2)) = r8_8
    int32_t r8_9 = *rdx_9
    int32_t r10_10 = 0
    uint64_t r9_10 = zx.q(*(sx.q(r10_9) + arg3) + r9_9.b + r8_9.b)
    
    if (r10_9 + 1 != arg2)
        r10_10 = r10_9 + 1
    
    *rdx_9 = *(&arg1[1] + (r9_10 << 2))
    void* rdx_10 = &arg1[1] + (zx.q(rdi + 8) << 2)
    *(&arg1[1] + (r9_10 << 2)) = r8_9
    int32_t r8_10 = *rdx_10
    int32_t r10_11 = 0
    uint64_t r9_11 = zx.q(*(sx.q(r10_10) + arg3) + r9_10.b + r8_10.b)
    
    if (r10_10 + 1 != arg2)
        r10_11 = r10_10 + 1
    
    *rdx_10 = *(&arg1[1] + (r9_11 << 2))
    *(&arg1[1] + (r9_11 << 2)) = r8_10
    void* rdx_11 = &arg1[1] + (zx.q(rdi + 9) << 2)
    int32_t r8_11 = *rdx_11
    int32_t r10_12 = 0
    uint64_t r9_12 = zx.q(*(sx.q(r10_11) + arg3) + r9_11.b + r8_11.b)
    
    if (r10_11 + 1 != arg2)
        r10_12 = r10_11 + 1
    
    *rdx_11 = *(&arg1[1] + (r9_12 << 2))
    *(&arg1[1] + (r9_12 << 2)) = r8_11
    void* rdx_12 = &arg1[1] + (zx.q(rdi + 0xa) << 2)
    int32_t r8_12 = *rdx_12
    int32_t r10_13 = 0
    uint64_t r9_13 = zx.q(*(sx.q(r10_12) + arg3) + r9_12.b + r8_12.b)
    
    if (r10_12 + 1 != arg2)
        r10_13 = r10_12 + 1
    
    int32_t r11_1 = 0
    *rdx_12 = *(&arg1[1] + (r9_13 << 2))
    *(&arg1[1] + (r9_13 << 2)) = r8_12
    void* rdx_13 = &arg1[1] + (zx.q(rdi + 0xb) << 2)
    int32_t r8_13 = *rdx_13
    uint64_t r9_14 = zx.q(*(sx.q(r10_13) + arg3) + r9_13.b + r8_13.b)
    
    if (r10_13 + 1 != arg2)
        r11_1 = r10_13 + 1
    
    *rdx_13 = *(&arg1[1] + (r9_14 << 2))
    *(&arg1[1] + (r9_14 << 2)) = r8_13
    void* rdx_14 = &arg1[1] + (zx.q(rdi + 0xc) << 2)
    int32_t r8_14 = *rdx_14
    int32_t r11_2 = 0
    uint64_t r10_14 = zx.q(*(sx.q(r11_1) + arg3) + r9_14.b + r8_14.b)
    
    if (r11_1 + 1 != arg2)
        r11_2 = r11_1 + 1
    
    *rdx_14 = *(&arg1[1] + (r10_14 << 2))
    uint64_t rax_61 = zx.q(rdi + 0xd)
    *(&arg1[1] + (r10_14 << 2)) = r8_14
    int32_t r9_15 = *(&arg1[1] + (rax_61 << 2))
    rdi += 0x10
    r10 = 0
    r14 = zx.q(*(sx.q(r11_2) + arg3) + r10_14.b + r9_15.b)
    
    if (r11_2 + 1 != arg2)
        r10 = r11_2 + 1
    
    int32_t* rcx_52 = r14 << 2
    *(&arg1[1] + (rax_61 << 2)) = *(rcx_52 + &arg1[1])
    *(rcx_52 + &arg1[1]) = r9_15
while (rdi - 2 u< 0x100)

return rdi - 2
