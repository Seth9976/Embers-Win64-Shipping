// 函数: sub_142751d40
// 地址: 0x142751d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t rdx = 0
int32_t* r9 = *(arg1 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
int32_t rax_1 = *r9

if (r8 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8 s>= rax_1)

int32_t r8_1 = *(arg1 + 0x80)
float zmm0[0x4] = *(sx.q(r8) + *(*(arg1 + 0x18) + (sx.q(rdx) << 3)))
int128_t* rdi_2 = zx.q(zx.d(rax[1]) * r8_1) + *(arg1 + 0x70)
*(arg1 + 0x10) = &rax[2]
uint64_t rsi_1 = zx.q(zx.d(rax[2]) * r8_1)
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
float temp0[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float (* rsi_2)[0x4] = rsi_1 + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rbp_1 = zx.q(result)
    uint32_t zmm7[0x4]
    uint32_t var_28_1[0x4] = zmm7
    uint32_t zmm8[0x4]
    uint32_t var_38_1[0x4] = zmm8
    float zmm9[0x4]
    float var_48_1[0x4] = zmm9
    float zmm10[0x4] = temp0[3]
    uint32_t zmm11[0x4] = temp0[0].12:8.d
    uint32_t zmm12[0x4] = temp0[0].q:4.d
    uint32_t zmm13[0x4] = temp0[0]
    uint64_t i
    
    do
        zmm9 = *rdi_2
        rdi_2 = &rdi_2[1]
        float (* rbx_1)[0x4] = rsi_2
        rsi_2 = &rsi_2[1]
        zmm8 = sub_140a3f4a0(zmm10, _mm_shuffle_ps(zmm9, zmm9, 0xff))
        zmm7 = sub_140a3f4a0(zmm11, _mm_shuffle_ps(zmm9, zmm9, 0xaa))
        uint32_t zmm0_3[0x4]
        int512_t zmm6_1
        zmm0_3, zmm6_1 = sub_140a3f4a0(zmm12, _mm_shuffle_ps(zmm9, zmm9, 0x55))
        zmm6_1.o = zmm0_3
        float zmm6_2[0x4]
        zmm0, result, zmm6_2 = sub_140a3f4a0(zmm13, zmm9)
        *rbx_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm7[0].q), 
            _mm_unpacklo_ps(zmm6_2, zmm8[0].q)[0].q)
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result
