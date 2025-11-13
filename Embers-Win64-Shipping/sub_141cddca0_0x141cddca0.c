// 函数: sub_141cddca0
// 地址: 0x141cddca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
int64_t* rax_2 = (sx.q(arg2) << 5) + *arg1
int64_t i = 0
void* rdx = *rax_2
int64_t rbx = sx.q(rax_2[1].d) << 2
uint64_t rbx_1 = rbx u>> 2

if (rdx u> rbx + rdx)
    rbx_1 = 0

if (rbx_1 != 0)
    if (rbx_1 u>= 8)
        int32_t zmm5[0x4] = zx.o(0)
        int64_t rdi_1 = *(arg1 + 0x38)
        int32_t zmm4[0x4] = zx.o(0)
        
        do
            i += 8
            uint128_t zmm0 = zx.o(*(rdi_1 + sx.q(*(rdx + 8)) * 0x18 + 0x10))
            int64_t rax_8 = sx.q(*rdx)
            uint128_t zmm2 = _mm_unpacklo_epi32(zx.o(*(rdi_1 + sx.q(*(rdx + 4)) * 0x18 + 0x10)), 
                zx.q(*(rdi_1 + sx.q(*(rdx + 0xc)) * 0x18 + 0x10)))
            int64_t rax_9 = sx.q(*(rdx + 0x1c))
            zmm5 = _mm_add_epi32(
                _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(zx.o(*(rdi_1 + rax_8 * 0x18 + 0x10)), zmm0.q), zmm2.q), 
                zmm5)
            int64_t rax_11 = sx.q(*(rdx + 0x14))
            zmm0 = zx.o(*(rdi_1 + sx.q(*(rdx + 0x18)) * 0x18 + 0x10))
            int64_t rax_12 = sx.q(*(rdx + 0x10))
            rdx += 0x20
            zmm2 = _mm_unpacklo_epi32(zx.o(*(rdi_1 + rax_11 * 0x18 + 0x10)), 
                zx.q(*(rdi_1 + rax_9 * 0x18 + 0x10)))
            zmm4 = _mm_add_epi32(
                _mm_unpacklo_epi32(
                    _mm_unpacklo_epi32(zx.o(*(rdi_1 + rax_12 * 0x18 + 0x10)), zmm0.q), zmm2.q), 
                zmm4)
        while (i != (rbx_1 & 0xfffffffffffffff8))
        
        int32_t temp0_9[0x4] = _mm_add_epi32(zmm4, zmm5)
        int32_t temp0_11[0x4] = _mm_add_epi32(temp0_9, _mm_bsrli_si128(temp0_9, 8))
        r9 = _mm_add_epi32(temp0_11, _mm_bsrli_si128(temp0_11, 4))[0]
    
    while (i != rbx_1)
        int64_t rcx_2 = sx.q(*rdx)
        rdx += 4
        i += 1
        r9 += *(*(arg1 + 0x38) + rcx_2 * 0x18 + 0x10)

return zx.q(r9)
