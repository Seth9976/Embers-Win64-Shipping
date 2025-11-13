// 函数: sub_142759030
// 地址: 0x142759030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x10)
int32_t r9 = *(arg1 + 0x80)
int64_t r10 = *(arg1 + 0x70)
uint32_t rbx = zx.d(*rax)
*(arg1 + 0x10) = &rax[1]
uint32_t rax_1 = zx.d(rax[1])
*(arg1 + 0x10) = &rax[2]
uint32_t rdi = zx.d(rax[2])
*(arg1 + 0x10) = &rax[3]
uint64_t rcx_1 = zx.q(zx.d(rax[3]) * r9)
*(arg1 + 0x10) = &rax[4]
int128_t* rbx_2 = zx.q(rbx * r9) + r10
uint64_t result = zx.q(*(arg1 + 0x44))
int128_t* r8_3 = zx.q(rax_1 * r9) + r10
uint64_t result_1 = rcx_1 + r10
int128_t* rdi_2 = zx.q(rdi * r9) + r10

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        int32_t zmm1[0x4] = *r8_3
        result = result_1
        int32_t zmm3[0x4] = *rdi_2
        rdi_2 = &rdi_2[1]
        int32_t zmm0[0x4] = *rbx_2
        r8_3 = &r8_3[1]
        rbx_2 = &rbx_2[1]
        result_1 += 0x10
        int32_t zmm2[0x4] = (_mm_cmpgt_epi32(zmm0, zmm1) & (zmm0 ^ zmm1)) ^ zmm1
        *result = ((zmm2 ^ zmm3) & _mm_cmpgt_epi32(zmm3, zmm2)) ^ zmm3
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
