// 函数: sub_1423448e0
// 地址: 0x1423448e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t rdi

if (arg2 == 1)
    rdi = 0x4b
else if (arg2 == 3)
    rdi = 0x10000
else
    rdi = 0

uint64_t result = sub_14205e180()
int32_t rbp = result.d
int32_t result_1 = 0

if (rdi s<= result.d)
    rbp = rdi

int64_t i_3 = sx.q(arg1[1].d)

if (i_3 s> 0)
    int64_t* r11_1 = *arg1
    int64_t i_2 = i_3
    int32_t r14_1 = data_143ccb970
    int64_t i
    
    do
        int64_t* r10_1 = *r11_1
        int64_t j = 0
        int64_t rdx = sx.q(r10_1[1].d)
        
        if (rdx.d s> 0 && rdx.d u>= 8 && r14_1 s>= 2)
            int64_t r8_2 = *r10_1
            int32_t zmm4[0x4] = _mm_shuffle_epi32(zx.o(result_1), 0)
            int32_t zmm5[0x4] = zmm4
            int32_t rcx_1 = rdx.d & 0x80000007
            
            if (rcx_1 s< 0)
                rcx_1 = ((rcx_1 - 1) | 0xfffffff8) + 1
            
            result = 0
            
            do
                uint64_t zmm1 = zx.q(*(result + r8_2 + 0x2e8))
                j += 8
                int32_t zmm2[0x4] = zx.o(*(result + r8_2 + 0x118))
                uint128_t zmm3 = _mm_unpacklo_epi32(zx.o(*(result + r8_2 + 0x30)), 
                    zx.q(*(result + r8_2 + 0x200)))
                uint128_t zmm0 = zx.o(*(result + r8_2 + 0x5a0))
                zmm2 = _mm_unpacklo_epi32(zmm2, zmm1)
                zmm1 = zx.q(*(result + r8_2 + 0x688))
                zmm3 = _mm_unpacklo_epi32(zmm3, zmm2[0].q)
                zmm2 = zx.o(*(result + r8_2 + 0x4b8))
                zmm4 = _mm_max_epi32(zmm4, zmm3)
                zmm3 = zx.o(*(result + r8_2 + 0x3d0))
                result += 0x740
                zmm5 = _mm_max_epi32(zmm5, 
                    _mm_unpacklo_epi32(_mm_unpacklo_epi32(zmm3, zmm0.q), 
                        _mm_unpacklo_epi32(zmm2, zmm1)[0].q))
            while (j s< sx.q(rdx.d - rcx_1))
            
            zmm4 = _mm_max_epi32(zmm4, zmm5)
            zmm4 = _mm_max_epi32(zmm4, _mm_bsrli_si128(zmm4, 8))
            result_1 = _mm_max_epi32(zmm4, _mm_bsrli_si128(zmm4, 4))[0]
        
        if (j s< rdx)
            int64_t rdx_1 = j * 0xe8
            int64_t j_2 = rdx - j
            int64_t j_1
            
            do
                result = zx.q(*(rdx_1 + *r10_1 + 0x30))
                rdx_1 += 0xe8
                
                if (result_1 s>= result.d)
                    result = zx.q(result_1)
                
                result_1 = result.d
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        r11_1 = &r11_1[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (result_1 s<= rbp)
    if (i_3 s<= 0)
        result.b = 0
        return result
    
    uint64_t* rdx_2 = *arg1
    int32_t rcx_5
    int64_t i_1
    
    do
        result = *rdx_2
        rdx_2 = &rdx_2[1]
        rcx_5 = *(result + 0x15c)
        
        if (rbx u>= rcx_5)
            rcx_5 = rbx
        
        rbx = rcx_5
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    
    if (rcx_5 u<= 4 || arg2 s>= 1)
        result.b = 0
        return result

result.b = 1
return result
