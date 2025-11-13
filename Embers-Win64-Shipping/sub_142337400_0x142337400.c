// 函数: sub_142337400
// 地址: 0x142337400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(arg1[1].d)
int32_t result = 0

if (i_1 s> 0)
    int64_t* r11_1 = *arg1
    int32_t rdi_1 = data_143ccb970
    int64_t i
    
    do
        int64_t* r10_1 = *r11_1
        int64_t j = 0
        int64_t rdx_1 = sx.q(r10_1[1].d)
        
        if (rdx_1.d s> 0 && rdx_1.d u>= 8 && rdi_1 s>= 2)
            int64_t r8_1 = *r10_1
            uint128_t zmm4 = _mm_shuffle_epi32(zx.o(result), 0)
            uint128_t zmm5 = zmm4
            int32_t rcx_1 = rdx_1.d & 0x80000007
            
            if (rcx_1 s< 0)
                rcx_1 = ((rcx_1 - 1) | 0xfffffff8) + 1
            
            int64_t rax_2 = 0
            
            do
                uint64_t zmm1 = zx.q(*(rax_2 + r8_1 + 0x2e8))
                j += 8
                int32_t zmm0[0x4] = zx.o(*(rax_2 + r8_1 + 0x200))
                int32_t zmm2[0x4] = zx.o(*(rax_2 + r8_1 + 0x118))
                int32_t zmm3[0x4] = zx.o(*(rax_2 + r8_1 + 0x30))
                rax_2 += 0x740
                zmm3 = _mm_unpacklo_epi32(zmm3, zmm0[0].q)
                zmm0 = zx.o(*(rax_2 + r8_1 - 0x1a0))
                zmm2 = _mm_unpacklo_epi32(zmm2, zmm1)
                zmm1 = zx.q(*(rax_2 + r8_1 - 0xb8))
                zmm3 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
                zmm2 = zx.o(*(rax_2 + r8_1 - 0x288))
                zmm4 = _mm_max_epi32(zmm4, zmm3)
                zmm5 = _mm_max_epi32(zmm5, 
                    _mm_unpacklo_epi32(
                        _mm_unpacklo_epi32(zx.o(*(rax_2 + r8_1 - 0x370)), zmm0[0].q), 
                        _mm_unpacklo_epi32(zmm2, zmm1)[0].q))
            while (j s< sx.q(rdx_1.d - rcx_1))
            
            zmm4 = _mm_max_epi32(zmm4, zmm5)
            zmm4 = _mm_max_epi32(zmm4, _mm_bsrli_si128(zmm4, 8))
            result = _mm_max_epi32(zmm4, _mm_bsrli_si128(zmm4, 4)).d
        
        if (j s< rdx_1)
            int64_t rdx_2 = j * 0xe8
            int64_t j_2 = rdx_1 - j
            int64_t j_1
            
            do
                int32_t result_1 = *(rdx_2 + *r10_1 + 0x30)
                rdx_2 += 0xe8
                
                if (result s>= result_1)
                    result_1 = result
                
                result = result_1
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        r11_1 = &r11_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
