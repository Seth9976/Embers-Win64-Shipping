// 函数: sub_14274f6f0
// 地址: 0x14274f6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
int64_t r10 = *(arg1 + 0x70)
uint32_t rbx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t rcx = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
int32_t i_2 = *(arg1 + 0x44)
int32_t (* result)[0x4] = zx.q(rcx * r9) + r10
int128_t* rbx_2 = zx.q(rbx * r9) + r10
int128_t* r8_3 = zx.q(rax_1 * r9) + r10

if (i_2 s> 0)
    int128_t zmm2 = data_143f87820
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int32_t zmm1[0x4] = *r8_3
        r8_3 = &r8_3[1]
        int32_t zmm0[0x4] = *rbx_2
        rbx_2 = &rbx_2[1]
        int32_t (* result_1)[0x4] = result
        result = &result[1]
        *result_1 = _mm_cmpgt_epi32(zmm1, zmm0) ^ zmm2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
