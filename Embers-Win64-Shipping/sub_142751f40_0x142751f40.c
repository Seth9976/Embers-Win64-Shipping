// 函数: sub_142751f40
// 地址: 0x142751f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = 0
int32_t* r10 = *(arg1 + 0x20)
int32_t rdx = 0
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r10

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r10[rcx]
        rdx += 1
    while (r8 s>= rax_1)

int64_t rdi = *(arg1 + 0x18)
float zmm1[0x4] = *(sx.q(r8) + *(rdi + (sx.q(rdx) << 3)))
uint32_t rcx_2 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
int32_t rax_4 = *r10
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)

if (rcx_2 s>= rax_4)
    int64_t rdx_1 = 0
    
    do
        rcx_2 -= rax_4
        rdx_1 += 1
        rax_4 = r10[rdx_1]
        r9 += 1
    while (rcx_2 s>= rax_4)

uint32_t zmm0[0x4] = *(sx.q(rcx_2) + *(rdi + (sx.q(r9) << 3)))
uint64_t rdi_2 = zx.q(*(arg1 + 0x80) * zx.d(rax[2]))
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
uint32_t (* rdi_3)[0x4] = rdi_2 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rsi_1 = zx.q(result)
    uint32_t zmm7[0x4]
    uint32_t var_28_1[0x4] = zmm7
    uint32_t zmm8[0x4]
    uint32_t var_38_1[0x4] = zmm8
    float zmm9[0x4] = zmm0[3]
    uint32_t zmm10[0x4] = temp0[3]
    uint32_t zmm11[0x4] = zmm0[0].12:8.d
    uint32_t zmm12[0x4] = temp0[0].12:8.d
    uint32_t zmm13[0x4] = zmm0[0].q:4.d
    uint32_t zmm14[0x4] = temp0[0].q:4.d
    uint32_t zmm15[0x4] = zmm0[0]
    float var_b8_1 = temp0[0]
    uint64_t i
    
    do
        uint32_t (* rbx_2)[0x4] = rdi_3
        rdi_3 = &rdi_3[1]
        zmm8 = sub_140a3f4a0(zmm10, zmm9)
        zmm7 = sub_140a3f4a0(zmm12, zmm11)
        uint32_t zmm0_3[0x4]
        int512_t zmm6_1
        zmm0_3, zmm6_1 = sub_140a3f4a0(zmm14, zmm13)
        zmm6_1.o = zmm0_3
        float zmm6_2[0x4]
        zmm0, result, zmm6_2 = sub_140a3f4a0(var_b8_1, zmm15)
        *rbx_2 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm7[0].q), 
            _mm_unpacklo_ps(zmm6_2, zmm8[0].q)[0].q)
        i = rsi_1
        rsi_1 -= 1
    while (i != 1)

return result
