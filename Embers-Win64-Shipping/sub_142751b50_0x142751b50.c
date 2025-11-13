// 函数: sub_142751b50
// 地址: 0x142751b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rbx = *(arg1 + 0x80)
int64_t rbp = *(arg1 + 0x70)
uint32_t rsi = zx.d(*rax)
int32_t* r10 = *(arg1 + 0x20)
*(arg1 + 0x10) = &rax[1]
uint32_t rcx = zx.d(rax[1])
int32_t r8_1 = 0
*(arg1 + 0x10) = &rax[2]
int32_t rax_1 = *r10
int128_t* rsi_2 = zx.q(rsi * rbx) + rbp

if (rcx s>= rax_1)
    int64_t rdx_1 = 0
    
    do
        rcx -= rax_1
        rdx_1 += 1
        rax_1 = r10[rdx_1]
        r8_1 += 1
    while (rcx s>= rax_1)

float (* rdi_2)[0x4] = zx.q(zx.d(rax[2]) * rbx) + rbp
float zmm0[0x4] = *(sx.q(rcx) + *(*(arg1 + 0x18) + (sx.q(r8_1) << 3)))
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)

if (result s> 0)
    uint64_t rbp_1 = zx.q(result)
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    float zmm8[0x4]
    float var_38_1[0x4] = zmm8
    float zmm9[0x4]
    float var_48_1[0x4] = zmm9
    uint32_t zmm10[0x4] = temp0[3]
    uint32_t zmm11[0x4] = temp0[0].12:8.d
    uint32_t zmm12[0x4] = temp0[0].q:4.d
    uint32_t zmm13[0x4] = temp0[0]
    uint64_t i
    
    do
        zmm9 = *rsi_2
        rsi_2 = &rsi_2[1]
        float (* rbx_1)[0x4] = rdi_2
        rdi_2 = &rdi_2[1]
        zmm8 = sub_140a3f4a0(_mm_shuffle_ps(zmm9, zmm9, 0xff), zmm10)
        zmm7 = sub_140a3f4a0(_mm_shuffle_ps(zmm9, zmm9, 0xaa), zmm11)
        float zmm0_3[0x4]
        int512_t zmm6_1
        zmm0_3, zmm6_1 = sub_140a3f4a0(_mm_shuffle_ps(zmm9, zmm9, 0x55), zmm12)
        zmm6_1.o = zmm0_3
        float zmm6_2[0x4]
        zmm0, result, zmm6_2 = sub_140a3f4a0(zmm9, zmm13)
        *rbx_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm7[0].q), 
            _mm_unpacklo_ps(zmm6_2, zmm8[0].q)[0].q)
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result
