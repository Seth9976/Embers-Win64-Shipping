// 函数: sub_142762200
// 地址: 0x142762200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
uint32_t rdi = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint64_t rsi_1 = zx.q(zx.d(rax[1]) * r9)
*(arg1 + 0x10) = &rax[2]
int32_t result = *(arg1 + 0x44)
uint32_t (* rsi_2)[0x4] = rsi_1 + *(arg1 + 0x70)
int128_t* rdi_2 = zx.q(rdi * r9) + *(arg1 + 0x70)

if (result s> 0)
    uint64_t rbp_1 = zx.q(result)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    uint64_t i
    
    do
        uint32_t (* rbx_1)[0x4] = rsi_2
        float var_28[0x4] = *rdi_2
        rdi_2 = &rdi_2[1]
        rsi_2 = &rsi_2[1]
        uint32_t zmm0_1[0x4]
        zmm0_1, zmm6 = sub_141c46b90(&var_28)
        float zmm2_1[0x4] = data_143f87690
        *rbx_1 = _mm_and_ps(zmm0_1 ^ zmm2_1, _mm_cmpeq_ps(zmm2_1, zmm6, 1)) ^ zmm2_1
        i = rbp_1
        rbp_1 -= 1
    while (i != 1)

return result
