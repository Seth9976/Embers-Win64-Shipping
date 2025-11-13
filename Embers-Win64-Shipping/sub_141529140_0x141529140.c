// 函数: sub_141529140
// 地址: 0x141529140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm2 = 1.0
uint128_t zmm6
uint128_t var_28 = zmm6
uint128_t zmm8
uint128_t var_48 = zmm8
*arg1 = arg2
arg1[1] = arg3
arg1[2] = arg4
*(arg1 + 0x18) = arg5
uint128_t zmm9
uint128_t var_58 = zmm9
int32_t rdx = arg2 * arg3
*(arg1 + 0x38) = zmm2 / arg6
*(arg1 + 0x20) = arg6
arg1[3] = rdx
*(arg1 + 0x28) = arg7
*(arg1 + 0x30) = zmm2 / arg5
*(arg1 + 0x40) = zmm2 / arg7
arg1[4] = rdx * arg4
double* rax = j_sub_140a82f30(0x8000)
double zmm0_1 = 0.125
void* const rsi = &data_142fbe850
double* rbp = rax
uint128_t zmm10 = zx.o(*(arg1 + 0x18))
uint128_t zmm7 = zx.o(0)
uint128_t zmm12 = zx.o(*(arg1 + 0x20))
int32_t i = 0
uint128_t zmm13
zmm13.q = *(arg1 + 0x28) f* zmm0_1
*(arg1 + 0x48) = rax
zmm10.q = zmm10.q f* zmm0_1
zmm12.q = zmm12.q f* zmm0_1
uint128_t zmm5 = zmm13

do
    zmm8 = zx.o(0)
    zmm6 = zmm12
    
    for (int32_t j = 0; j s< 4; )
        zmm9 = zx.o(0)
        uint128_t zmm4_1 = zmm10
        
        for (int32_t k = 0; k s< 4; )
            double zmm3 = 0x46293e5939a08cea
            int32_t rdi_2 = *rsi + 1
            double zmm1
            
            for (int64_t r11_1 = sx.q(rdi_2); r11_1 s< 0x40; r11_1 += 1)
                int32_t r10_1 = *(rsi + (r11_1 << 2))
                int32_t rax_4
                bool cond:3_1
                
                if (test_bit(r10_1, 0x16))
                    if ((r10_1 & 0x7f) - 0x41 s> 0)
                        zmm2 = _mm_cvtepi32_pd(zx.q((r10_1 & 0x7f) - 0x41)).q f*
                            *(arg1 + 0x18) f- zmm4_1.q
                        zmm2 = zmm2 * zmm2
                    else if ((r10_1 & 0x7f) - 0x41 s>= 0)
                        zmm2 = (zx.o(0)).q
                    else
                        zmm2 = zmm9.q
                            - _mm_cvtepi32_pd(zx.q((r10_1 & 0x7f) - 0x40)).q f* *(arg1 + 0x18)
                        zmm2 = zmm2 * zmm2
                    
                    if ((r10_1 u>> 7 & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x20) f- zmm6.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 7 & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm8.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x20)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    if ((r10_1 u>> 0xe & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x28) f- zmm5.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 0xe & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm7.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x28)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    zmm3 = _mm_min_sd(zmm2, zmm3).q
                    
                    if (not(test_bit(r10_1, 0x15)))
                        rax_4 = (r10_1 & 0x7f) - 0x3f
                        cond:3_1 = rax_4 s>= 0
                        
                        if (rax_4 s<= 0)
                            goto label_1415293e4
                        
                        zmm2 = _mm_cvtepi32_pd(zx.q(rax_4)).q f* *(arg1 + 0x18) f- zmm4_1.q
                        zmm2 = zmm2 * zmm2
                        goto label_141529409
                else if (test_bit(r10_1, 0x15))
                    rax_4 = (r10_1 & 0x7f) - 0x3f
                    cond:3_1 = rax_4 s>= 0
                    
                    if (rax_4 s<= 0)
                    label_1415293e4:
                        
                        if (cond:3_1)
                            zmm2 = (zx.o(0)).q
                            goto label_141529409
                        
                        zmm2 = zmm9.q - _mm_cvtepi32_pd(zx.q(rax_4 + 1)).q f* *(arg1 + 0x18)
                        zmm2 = zmm2 * zmm2
                        goto label_141529409
                    
                    zmm2 = _mm_cvtepi32_pd(zx.q(rax_4)).q f* *(arg1 + 0x18) f- zmm4_1.q
                    zmm2 = zmm2 * zmm2
                label_141529409:
                    
                    if ((r10_1 u>> 7 & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x20) f- zmm6.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 7 & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm8.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x20)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    if ((r10_1 u>> 0xe & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x28) f- zmm5.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 0xe & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm7.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x28)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    zmm3 = _mm_min_sd(zmm2, zmm3).q
                
                if (test_bit(r10_1, 0x19))
                    if ((r10_1 & 0x7f) - 0x40 s> 0)
                        zmm2 = _mm_cvtepi32_pd(zx.q((r10_1 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x18) f- zmm4_1.q
                        zmm2 = zmm2 * zmm2
                    else if ((r10_1 & 0x7f) - 0x40 s>= 0)
                        zmm2 = (zx.o(0)).q
                    else
                        zmm2 = zmm9.q
                            - _mm_cvtepi32_pd(zx.q((r10_1 & 0x7f) - 0x3f)).q f* *(arg1 + 0x18)
                        zmm2 = zmm2 * zmm2
                    
                    if ((r10_1 u>> 7 & 0x7f) - 0x41 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x41)).q f*
                            *(arg1 + 0x20) f- zmm6.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 7 & 0x7f) - 0x41 s< 0)
                        zmm1 = zmm8.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x20)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    if ((r10_1 u>> 0xe & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x28) f- zmm5.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 0xe & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm7.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x28)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    zmm3 = _mm_min_sd(zmm2, zmm3).q
                    
                    if (not(test_bit(r10_1, 0x18)))
                        goto label_141529586
                else if (test_bit(r10_1, 0x18))
                label_141529586:
                    
                    if ((r10_1 & 0x7f) - 0x40 s> 0)
                        zmm2 = _mm_cvtepi32_pd(zx.q((r10_1 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x18) f- zmm4_1.q
                        zmm2 = zmm2 * zmm2
                    else if ((r10_1 & 0x7f) - 0x40 s>= 0)
                        zmm2 = (zx.o(0)).q
                    else
                        zmm2 = zmm9.q
                            - _mm_cvtepi32_pd(zx.q((r10_1 & 0x7f) - 0x3f)).q f* *(arg1 + 0x18)
                        zmm2 = zmm2 * zmm2
                    
                    if ((r10_1 u>> 7 & 0x7f) - 0x3f s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x20) f- zmm6.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 7 & 0x7f) - 0x3f s< 0)
                        zmm1 = zmm8.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x3e)).q f*
                            *(arg1 + 0x20)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    if ((r10_1 u>> 0xe & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x28) f- zmm5.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 0xe & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm7.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x28)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    zmm3 = _mm_min_sd(zmm2, zmm3).q
                
                if (test_bit(r10_1, 0x1c))
                    if ((r10_1 & 0x7f) - 0x40 s> 0)
                        zmm2 = _mm_cvtepi32_pd(zx.q((r10_1 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x18) f- zmm4_1.q
                        zmm2 = zmm2 * zmm2
                    else if ((r10_1 & 0x7f) - 0x40 s>= 0)
                        zmm2 = (zx.o(0)).q
                    else
                        zmm2 = zmm9.q
                            - _mm_cvtepi32_pd(zx.q((r10_1 & 0x7f) - 0x3f)).q f* *(arg1 + 0x18)
                        zmm2 = zmm2 * zmm2
                    
                    if ((r10_1 u>> 7 & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x20) f- zmm6.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 7 & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm8.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x20)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    if ((r10_1 u>> 0xe & 0x7f) - 0x41 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x41)).q f*
                            *(arg1 + 0x28) f- zmm5.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 0xe & 0x7f) - 0x41 s< 0)
                        zmm1 = zmm7.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x28)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    zmm3 = _mm_min_sd(zmm2, zmm3).q
                    
                    if (not(test_bit(r10_1, 0x1b)))
                        goto label_141529741
                else if (test_bit(r10_1, 0x1b))
                label_141529741:
                    
                    if ((r10_1 & 0x7f) - 0x40 s> 0)
                        zmm2 = _mm_cvtepi32_pd(zx.q((r10_1 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x18) f- zmm4_1.q
                        zmm2 = zmm2 * zmm2
                    else if ((r10_1 & 0x7f) - 0x40 s>= 0)
                        zmm2 = (zx.o(0)).q
                    else
                        zmm2 = zmm9.q
                            - _mm_cvtepi32_pd(zx.q((r10_1 & 0x7f) - 0x3f)).q f* *(arg1 + 0x18)
                        zmm2 = zmm2 * zmm2
                    
                    if ((r10_1 u>> 7 & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x20) f- zmm6.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 7 & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm8.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 7 & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x20)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    if ((r10_1 u>> 0xe & 0x7f) - 0x3f s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x28) f- zmm5.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((r10_1 u>> 0xe & 0x7f) - 0x3f s< 0)
                        zmm1 = zmm7.q - _mm_cvtepi32_pd(zx.q((r10_1 u>> 0xe & 0x7f) - 0x3e)).q f*
                            *(arg1 + 0x28)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    zmm3 = _mm_min_sd(zmm2, zmm3).q
                
                rdi_2 += 1
            
            int64_t r11_2 = sx.q(rdi_2 - 1)
            
            if (r11_2 s>= 4)
                int64_t r10_4 = ((r11_2 - 4) u>> 2) + 1
                void* r9_5 = (r11_2 << 3) + -0xfffffffffffffff0 + rbp
                void* r8_4 = rsi + ((r11_2 - 2) << 2)
                r11_2 -= r10_4 << 2
                int64_t temp34_1
                
                do
                    *(r9_5 + 0x10) = zmm3
                    int32_t rdx_6 = *(r8_4 + 8)
                    
                    if ((rdx_6 & 0x7f) - 0x40 s> 0)
                        zmm2 = _mm_cvtepi32_pd(zx.q((rdx_6 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x18) f- zmm4_1.q
                        zmm2 = zmm2 * zmm2
                    else if ((rdx_6 & 0x7f) - 0x40 s>= 0)
                        zmm2 = (zx.o(0)).q
                    else
                        zmm2 = zmm9.q
                            - _mm_cvtepi32_pd(zx.q((rdx_6 & 0x7f) - 0x3f)).q f* *(arg1 + 0x18)
                        zmm2 = zmm2 * zmm2
                    
                    if ((rdx_6 u>> 7 & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((rdx_6 u>> 7 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x20) f- zmm6.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((rdx_6 u>> 7 & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm8.q - _mm_cvtepi32_pd(zx.q((rdx_6 u>> 7 & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x20)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    if ((rdx_6 u>> 0xe & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((rdx_6 u>> 0xe & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x28) f- zmm5.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((rdx_6 u>> 0xe & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm7.q - _mm_cvtepi32_pd(zx.q((rdx_6 u>> 0xe & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x28)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    zmm2 = _mm_min_sd(zmm2, zmm3).q
                    *(r9_5 + 8) = zmm2
                    int32_t rdx_10 = *(r8_4 + 4)
                    
                    if ((rdx_10 & 0x7f) - 0x40 s> 0)
                        zmm3 = _mm_cvtepi32_pd(zx.q((rdx_10 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x18) f- zmm4_1.q
                        zmm3 = zmm3 * zmm3
                    else if ((rdx_10 & 0x7f) - 0x40 s>= 0)
                        zmm3 = (zx.o(0)).q
                    else
                        zmm3 = zmm9.q
                            - _mm_cvtepi32_pd(zx.q((rdx_10 & 0x7f) - 0x3f)).q f* *(arg1 + 0x18)
                        zmm3 = zmm3 * zmm3
                    
                    if ((rdx_10 u>> 7 & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((rdx_10 u>> 7 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x20) f- zmm6.q
                        zmm3 = zmm3 + zmm0_1 * zmm0_1
                    else if ((rdx_10 u>> 7 & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm8.q - _mm_cvtepi32_pd(zx.q((rdx_10 u>> 7 & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x20)
                        zmm3 = zmm3 + zmm1 * zmm1
                    
                    if ((rdx_10 u>> 0xe & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((rdx_10 u>> 0xe & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x28) f- zmm5.q
                        zmm3 = zmm3 + zmm0_1 * zmm0_1
                    else if ((rdx_10 u>> 0xe & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm7.q - _mm_cvtepi32_pd(zx.q((rdx_10 u>> 0xe & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x28)
                        zmm3 = zmm3 + zmm1 * zmm1
                    
                    zmm3 = _mm_min_sd(zmm3, zmm2).q
                    *r9_5 = zmm3
                    int32_t rdx_14 = *r8_4
                    
                    if ((rdx_14 & 0x7f) - 0x40 s> 0)
                        zmm2 = _mm_cvtepi32_pd(zx.q((rdx_14 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x18) f- zmm4_1.q
                        zmm2 = zmm2 * zmm2
                    else if ((rdx_14 & 0x7f) - 0x40 s>= 0)
                        zmm2 = (zx.o(0)).q
                    else
                        zmm2 = zmm9.q
                            - _mm_cvtepi32_pd(zx.q((rdx_14 & 0x7f) - 0x3f)).q f* *(arg1 + 0x18)
                        zmm2 = zmm2 * zmm2
                    
                    if ((rdx_14 u>> 7 & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((rdx_14 u>> 7 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x20) f- zmm6.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((rdx_14 u>> 7 & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm8.q - _mm_cvtepi32_pd(zx.q((rdx_14 u>> 7 & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x20)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    if ((rdx_14 u>> 0xe & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((rdx_14 u>> 0xe & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x28) f- zmm5.q
                        zmm2 = zmm2 + zmm0_1 * zmm0_1
                    else if ((rdx_14 u>> 0xe & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm7.q - _mm_cvtepi32_pd(zx.q((rdx_14 u>> 0xe & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x28)
                        zmm2 = zmm2 + zmm1 * zmm1
                    
                    zmm2 = _mm_min_sd(zmm2, zmm3).q
                    *(r9_5 - 8) = zmm2
                    int32_t rdx_18 = *(r8_4 - 4)
                    
                    if ((rdx_18 & 0x7f) - 0x40 s> 0)
                        zmm3 = _mm_cvtepi32_pd(zx.q((rdx_18 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x18) f- zmm4_1.q
                        zmm3 = zmm3 * zmm3
                    else if ((rdx_18 & 0x7f) - 0x40 s>= 0)
                        zmm3 = (zx.o(0)).q
                    else
                        zmm3 = zmm9.q
                            - _mm_cvtepi32_pd(zx.q((rdx_18 & 0x7f) - 0x3f)).q f* *(arg1 + 0x18)
                        zmm3 = zmm3 * zmm3
                    
                    if ((rdx_18 u>> 7 & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((rdx_18 u>> 7 & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x20) f- zmm6.q
                        zmm3 = zmm3 + zmm0_1 * zmm0_1
                    else if ((rdx_18 u>> 7 & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm8.q - _mm_cvtepi32_pd(zx.q((rdx_18 u>> 7 & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x20)
                        zmm3 = zmm3 + zmm1 * zmm1
                    
                    if ((rdx_18 u>> 0xe & 0x7f) - 0x40 s> 0)
                        zmm0_1 = _mm_cvtepi32_pd(zx.q((rdx_18 u>> 0xe & 0x7f) - 0x40)).q f*
                            *(arg1 + 0x28) f- zmm5.q
                        zmm3 = zmm3 + zmm0_1 * zmm0_1
                    else if ((rdx_18 u>> 0xe & 0x7f) - 0x40 s< 0)
                        zmm1 = zmm7.q - _mm_cvtepi32_pd(zx.q((rdx_18 u>> 0xe & 0x7f) - 0x3f)).q f*
                            *(arg1 + 0x28)
                        zmm3 = zmm3 + zmm1 * zmm1
                    
                    r9_5 -= 0x20
                    zmm3 = _mm_min_sd(zmm3, zmm2).q
                    r8_4 -= 0x10
                    temp34_1 = r10_4
                    r10_4 -= 1
                while (temp34_1 != 1)
            
            while (r11_2 s> 0)
                rbp[r11_2] = zmm3
                int32_t rcx_20 = *(rsi + (r11_2 << 2))
                
                if ((rcx_20 & 0x7f) - 0x40 s> 0)
                    zmm2 = _mm_cvtepi32_pd(zx.q((rcx_20 & 0x7f) - 0x40)).q f*
                        *(arg1 + 0x18) f- zmm4_1.q
                    zmm2 = zmm2 * zmm2
                else if ((rcx_20 & 0x7f) - 0x40 s>= 0)
                    zmm2 = (zx.o(0)).q
                else
                    zmm2 =
                        zmm9.q - _mm_cvtepi32_pd(zx.q((rcx_20 & 0x7f) - 0x3f)).q f* *(arg1 + 0x18)
                    zmm2 = zmm2 * zmm2
                
                if ((rcx_20 u>> 7 & 0x7f) - 0x40 s> 0)
                    zmm0_1 = _mm_cvtepi32_pd(zx.q((rcx_20 u>> 7 & 0x7f) - 0x40)).q f*
                        *(arg1 + 0x20) f- zmm6.q
                    zmm2 = zmm2 + zmm0_1 * zmm0_1
                else if ((rcx_20 u>> 7 & 0x7f) - 0x40 s< 0)
                    zmm1 = zmm8.q
                        - _mm_cvtepi32_pd(zx.q((rcx_20 u>> 7 & 0x7f) - 0x3f)).q f* *(arg1 + 0x20)
                    zmm2 = zmm2 + zmm1 * zmm1
                
                if ((rcx_20 u>> 0xe & 0x7f) - 0x40 s> 0)
                    zmm0_1 = _mm_cvtepi32_pd(zx.q((rcx_20 u>> 0xe & 0x7f) - 0x40)).q f*
                        *(arg1 + 0x28) f- zmm5.q
                    zmm2 = zmm2 + zmm0_1 * zmm0_1
                else if ((rcx_20 u>> 0xe & 0x7f) - 0x40 s< 0)
                    zmm1 = zmm7.q
                        - _mm_cvtepi32_pd(zx.q((rcx_20 u>> 0xe & 0x7f) - 0x3f)).q f* *(arg1 + 0x28)
                    zmm2 = zmm2 + zmm1 * zmm1
                
                r11_2 -= 1
                zmm3 = _mm_min_sd(zmm2, zmm3).q
            
            *rbp = zmm3
            rsi += 0x100
            rbp = &rbp[0x40]
            k += 1
            zmm9 = zmm4_1
            zmm4_1.q = zmm4_1.q f+ zmm10.q
        
        j += 1
        zmm8 = zmm6
        zmm6.q = zmm6.q f+ zmm12.q
    
    i += 1
    zmm7 = zmm5
    zmm5.q = zmm5.q f+ zmm13.q
while (i s< 4)

return arg1
