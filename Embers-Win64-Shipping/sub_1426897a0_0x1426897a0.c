// 函数: sub_1426897a0
// 地址: 0x1426897a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *(arg1 + 0x2f0)
int32_t rax_3 = (*(arg1 + 0x15c) + ((*(arg1 + 0x2fc) + (*(arg1 + 0x31c) << 1)) << 1)) * 0x1c
    + (*(arg1 + 0x30c) << 5)
void* r11_1 = sx.q(*(arg1 + 0x2f8)) * 0x38 + r9

while (r9 != r11_1)
    uint64_t r8_2 = zx.q(*(r9 + 0x1c) + *(r9 + 0x2c) * 0xc + *(r9 + 0xc))
    r9 += 0x38
    rax_3 += (r8_2 << 2).d

void* r9_1 = *(arg1 + 0x300)
void* r11_4 = (sx.q(*(arg1 + 0x308)) << 5) + r9_1

while (r9_1 != r11_4)
    uint64_t rcx_2 = zx.q(*(r9_1 + 0xc))
    uint64_t rcx_3 = zx.q(*(r9_1 + 0x1c))
    r9_1 += 0x20
    rax_3 = rax_3 + ((rcx_3 * 3).d << 4) + ((rcx_2 * 5).d << 4)

int32_t rsi = *(arg1 + 0x318)
int32_t r8_5 = 0
void* r9_2 = *(arg1 + 0x310)
int32_t r11_5 = 0
int32_t rbx = 0
int32_t rbp = 0

if (rsi s>= 2)
    uint64_t i_7 = zx.q(((rsi - 2) u>> 1) + 1)
    rbp = (((rsi - 2) u>> 1) + 1) * 2
    uint64_t i
    
    do
        uint64_t rcx_8 = zx.q(*(r9_2 + 0x84))
        r11_5 += *(r9_2 + 0x14) * 0x48
        r9_2 += 0xe0
        rbx += (rcx_8 * 9).d << 3
        i = i_7
        i_7 -= 1
    while (i != 1)

if (rbp s< rsi)
    rax_3 += *(r9_2 + 0x14) * 0x48

int64_t rdi_1 = sx.q(*(arg1 + 0x2c8))
int32_t rbx_1 = 0
int32_t rax_5 = rax_3 + *(arg1 + 0x2cc) * 0x38 + rbx + r11_5
uint128_t zmm0
uint64_t zmm1
int32_t zmm2[0x4]
int32_t zmm3[0x4]
int32_t zmm4[0x4]
int32_t zmm5[0x4]

if (rdi_1.d s> 0 && rdi_1.d u>= 8)
    int64_t r11_6 = *(arg1 + 0x2c0)
    zmm5 = zx.o(0)
    zmm4 = zx.o(0)
    int32_t rdx_12 = rdi_1.d & 0x80000007
    
    if (rdx_12 s< 0)
        rdx_12 = ((rdx_12 - 1) | 0xfffffff8) + 1
    
    int64_t rdx_15 = 0
    int64_t i_1 = 0
    
    do
        zmm1 = zx.q(*(r11_6 + rdx_15 + 0xc8))
        rbx_1 += 8
        zmm0 = zx.o(*(r11_6 + rdx_15 + 0x90))
        i_1 += 8
        zmm2 = zx.o(*(r11_6 + rdx_15 + 0x58))
        zmm3 = zx.o(*(r11_6 + rdx_15 + 0x20))
        rdx_15 += 0x1c0
        zmm3 = _mm_unpacklo_epi32(zmm3, zmm0.q)
        zmm0 = zx.o(*(r11_6 + rdx_15 - 0x50))
        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1)
        zmm1 = zx.q(*(r11_6 + rdx_15 - 0x18))
        zmm3 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
        zmm2 = zx.o(*(r11_6 + rdx_15 - 0x88))
        zmm3 = _mm_add_epi32(zmm3, zmm5)
        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1)
        zmm5 = zmm3
        zmm4 = _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(r11_6 + rdx_15 - 0xc0)), zmm0.q), 
                zmm2[0].q), 
            zmm4)
    while (i_1 s< sx.q(rdi_1.d - rdx_12))
    
    zmm4 = _mm_add_epi32(zmm4, zmm5)
    zmm4 = _mm_add_epi32(zmm4, _mm_bsrli_si128(zmm4, 8))
    rax_5 += _mm_add_epi32(zmm4, _mm_bsrli_si128(zmm4, 4))[0]

int64_t rbx_2 = sx.q(rbx_1)
int32_t r9_4 = 0
int32_t r11_7 = 0

if (rbx_2 s< rdi_1)
    if (rdi_1 - rbx_2 s>= 2)
        int64_t rsi_1 = *(arg1 + 0x2c0)
        int64_t rdx_16 = rbx_2 * 0x38
        int64_t i_5 = ((rdi_1 - rbx_2 - 2) u>> 1) + 1
        rbx_2 += i_5 << 1
        int64_t i_2
        
        do
            r9_4 += *(rsi_1 + rdx_16 + 0x20)
            r11_7 += *(rsi_1 + rdx_16 + 0x58)
            rdx_16 += 0x70
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    if (rbx_2 s< rdi_1)
        rax_5 += *(rbx_2 * 0x38 + *(arg1 + 0x2c0) + 0x20)
    
    rax_5 += r11_7 + r9_4

int32_t r11_8 = 0
int64_t rbx_3 = sx.q(*(arg1 + 0x2d8))
int32_t result = rax_5 + *(arg1 + 0x2dc) * 0x38

if (rbx_3.d s> 0 && rbx_3.d u>= 8)
    int64_t rdi_2 = *(arg1 + 0x2d0)
    zmm5 = zx.o(0)
    zmm4 = zx.o(0)
    int32_t rdx_19 = rbx_3.d & 0x80000007
    
    if (rdx_19 s< 0)
        rdx_19 = ((rdx_19 - 1) | 0xfffffff8) + 1
    
    int64_t rdx_22 = 0
    int64_t i_3 = 0
    
    do
        zmm1 = zx.q(*(rdi_2 + rdx_22 + 0xc8))
        r11_8 += 8
        zmm0 = zx.o(*(rdi_2 + rdx_22 + 0x90))
        i_3 += 8
        zmm2 = zx.o(*(rdi_2 + rdx_22 + 0x58))
        zmm3 = zx.o(*(rdi_2 + rdx_22 + 0x20))
        rdx_22 += 0x1c0
        zmm3 = _mm_unpacklo_epi32(zmm3, zmm0.q)
        zmm0 = zx.o(*(rdi_2 + rdx_22 - 0x50))
        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1)
        zmm1 = zx.q(*(rdi_2 + rdx_22 - 0x18))
        zmm3 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
        zmm2 = zx.o(*(rdi_2 + rdx_22 - 0x88))
        zmm3 = _mm_add_epi32(zmm3, zmm5)
        zmm2 = _mm_unpacklo_epi32(zmm2, zmm1)
        zmm5 = zmm3
        zmm4 = _mm_add_epi32(
            _mm_unpacklo_epi32(_mm_unpacklo_epi32(zx.o(*(rdi_2 + rdx_22 - 0xc0)), zmm0.q), 
                zmm2[0].q), 
            zmm4)
    while (i_3 s< sx.q(rbx_3.d - rdx_19))
    
    zmm4 = _mm_add_epi32(zmm4, zmm5)
    zmm4 = _mm_add_epi32(zmm4, _mm_bsrli_si128(zmm4, 8))
    result += _mm_add_epi32(zmm4, _mm_bsrli_si128(zmm4, 4))[0]

int64_t r11_9 = sx.q(r11_8)
int32_t r9_6 = 0

if (r11_9 s>= rbx_3)
    return result

if (rbx_3 - r11_9 s>= 2)
    int64_t rdi_3 = *(arg1 + 0x2d0)
    int64_t rdx_23 = r11_9 * 0x38
    int64_t i_6 = ((rbx_3 - r11_9 - 2) u>> 1) + 1
    r11_9 += i_6 << 1
    int64_t i_4
    
    do
        r8_5 += *(rdx_23 + rdi_3 + 0x20)
        r9_6 += *(rdx_23 + rdi_3 + 0x58)
        rdx_23 += 0x70
        i_4 = i_6
        i_6 -= 1
    while (i_4 != 1)

if (r11_9 s< rbx_3)
    result += *(r11_9 * 0x38 + *(arg1 + 0x2d0) + 0x20)

return result + r9_6 + r8_5
