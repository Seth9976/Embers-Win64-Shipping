// 函数: sub_1427519f0
// 地址: 0x1427519f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
int64_t r10 = *(arg1 + 0x70)
uint32_t rdi = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rsi = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint64_t rbp_1 = zx.q(zx.d(rax[2]) * r9)
*(arg1 + 0x10) = &rax[3]
int32_t result = *(arg1 + 0x44)
float (* rbp_2)[0x4] = rbp_1 + r10
int128_t* rdi_2 = zx.q(rdi * r9) + r10
int128_t* rsi_2 = zx.q(rsi * r9) + r10

if (result s> 0)
    uint64_t r14_1 = zx.q(result)
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    uint32_t zmm8[0x4]
    uint32_t var_38_1[0x4] = zmm8
    float zmm9[0x4]
    float var_48_1[0x4] = zmm9
    float zmm10[0x4]
    float var_58_1[0x4] = zmm10
    uint64_t i
    
    do
        zmm9 = *rsi_2
        rsi_2 = &rsi_2[1]
        zmm10 = *rdi_2
        rdi_2 = &rdi_2[1]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
        float (* rbx_1)[0x4] = rbp_2
        rbp_2 = &rbp_2[1]
        zmm8 = sub_140a3f4a0(_mm_shuffle_ps(zmm10, zmm10, 0xff), temp0_1)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
        zmm7 = sub_140a3f4a0(_mm_shuffle_ps(zmm10, zmm10, 0xaa), temp0_3)
        uint32_t zmm1_2[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
        uint32_t zmm0_3[0x4]
        int512_t zmm6_1
        zmm0_3, zmm6_1 = sub_140a3f4a0(_mm_shuffle_ps(zmm10, zmm10, 0x55), zmm1_2)
        zmm6_1.o = zmm0_3
        float zmm0[0x4]
        float zmm6_2[0x4]
        zmm0, result, zmm6_2 = sub_140a3f4a0(zmm10, zmm9)
        *rbx_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm0, zmm7[0].q), 
            _mm_unpacklo_ps(zmm6_2, zmm8[0].q)[0].q)
        i = r14_1
        r14_1 -= 1
    while (i != 1)

return result
