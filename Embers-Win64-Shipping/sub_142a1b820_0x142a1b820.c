// 函数: sub_142a1b820
// 地址: 0x142a1b820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result_1 = arg3
int32_t* arg_8 = arg1
int32_t r13 = data_143ccb970
int32_t* result = arg3
int64_t i_1 = 3
int64_t i

do
    int32_t rbp_1 = 0
    int32_t zmm4[0x4] = zx.o(0)
    int32_t* result_2 = result
    int32_t* rsi_1 = arg1
    int32_t zmm3[0x4] = zmm4
    int64_t j_1 = 8
    int32_t j
    
    do
        void* r9 = nullptr
        
        if (r13 s>= 2)
            r9 = 8
            int32_t zmm2[0x4] =
                _mm_sub_epi32(_mm_cvtepu8_epi32(*rsi_1), _mm_cvtepu8_epi32(*result_2))
            uint128_t zmm0 = zx.o(rsi_1[1])
            zmm4 = _mm_add_epi32(_mm_abs_epi32(zmm2), zmm4)
            zmm3 = _mm_add_epi32(
                _mm_abs_epi32(_mm_sub_epi32(_mm_cvtepu8_epi32(zmm0.d), 
                    _mm_cvtepu8_epi32(result_2[1]))), 
                zmm3)
        
        int32_t r11_1 = 0
        int32_t rbx_1 = 0
        
        if (r9 s< 8)
            if (8 - r9 s>= 2)
                char* rcx = r9 + result_2
                void* r10_2 = rsi_1 - result_2
                int64_t k_1 = ((6 - r9) u>> 1) + 1
                r9 += k_1 << 1
                int64_t k
                
                do
                    uint32_t rdx = zx.d(*rcx)
                    uint32_t rax_1 = zx.d(*(r10_2 + rcx))
                    rcx = &rcx[2]
                    int32_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(rax_1 - rdx)
                    r11_1 += (temp5_1 ^ temp4_1) - temp4_1
                    int32_t temp6_1
                    int32_t temp7_1
                    temp6_1:temp7_1 = sx.q(zx.d(*(r10_2 + rcx - 1)) - zx.d(rcx[-1]))
                    rbx_1 += (temp7_1 ^ temp6_1) - temp6_1
                    k = k_1
                    k_1 -= 1
                while (k != 1)
            
            if (r9 s< 8)
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(zx.d(*(r9 + rsi_1)) - zx.d(*(r9 + result_2)))
                rbp_1 += (temp3_1 ^ temp2_1) - temp2_1
            
            rbp_1 += rbx_1 + r11_1
        
        rsi_1 += sx.q(arg2)
        result_2 += sx.q(arg4)
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t* rcx_2 = arg5
    zmm3 = _mm_add_epi32(zmm3, zmm4)
    zmm3 = _mm_add_epi32(zmm3, _mm_bsrli_si128(zmm3, 8))
    *rcx_2 = _mm_add_epi32(zmm3, _mm_bsrli_si128(zmm3, 4))[0] + rbp_1
    result = result_1 + 1
    arg5 = &rcx_2[1]
    i = i_1
    i_1 -= 1
    arg1 = arg_8
    result_1 = result
while (i != 1)
return result
