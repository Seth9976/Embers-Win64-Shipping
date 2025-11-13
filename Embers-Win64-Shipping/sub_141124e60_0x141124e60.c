// 函数: sub_141124e60
// 地址: 0x141124e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0

if (*(arg1 + 0xa8) s> 0)
    int64_t r15_1 = 0
    float zmm9[0x4] = zx.o(0)
    float zmm11[0x4] = 0xc2fa0000
    int128_t zmm14 = 0x7f7fffff
    int128_t zmm15 = 0x47800000
    int128_t zmm7
    int128_t var_38_1 = zmm7
    float zmm8[0x4]
    float var_48_1[0x4] = zmm8
    int128_t zmm10
    int128_t var_68_1 = zmm10
    int128_t zmm12
    int128_t var_88_1 = zmm12
    int128_t zmm13
    int128_t var_98_1 = zmm13
    
    do
        void*** rdi_2 = *(arg1 + 0xa0) + r15_1
        arg2 = sub_141097690(rdi_2, arg2)
        result = *rdi_2
        
        if (test_bit((result[5] u>> 0x20).d, 9))
            result = data_143e57168
            
            if (*(result + 4) == 1)
                void* rbx_1 = *(arg1 + 8)
                
                if (*(rbx_1 + 0x1c20) s> 0)
                    void* rbx_2 = *(rbx_1 + 0x1c18)
                    zmm7 = zmm14
                    zmm10 = *(rbx_2 + 0xc)
                    int128_t zmm0_1
                    
                    if (not(zmm10.d f<= zmm9[0]))
                        zmm0_1.d = (*(rbx_2 + 8)).d f+ zmm15.d
                        
                        if (not(zmm0_1.d f>= zmm14.d))
                            zmm7 = zmm0_1
                    
                    zmm12 = *(rbx_2 + 0x18)
                    
                    if (not(zmm12.d f<= zmm9[0]))
                        zmm0_1.d = (*(rbx_2 + 0x14)).d f+ zmm15.d
                        
                        if (not(zmm7.d f<= zmm0_1.d))
                            zmm7 = zmm0_1
                    
                    float zmm1_1[0x4] = *(rbx_2 + 8)
                    float temp0_1[0x4] = _mm_min_ss((*(rdi_2 + 0x614))[0], zmm7.d)
                    zmm13 = *(rbx_2 + 0x10)
                    zmm1_1[0] = zmm1_1[0] - temp0_1[0]
                    zmm1_1[0] = zmm1_1[0] f* zmm13.d
                    
                    if (zmm1_1[0] >= zmm11[0])
                        zmm1_1 = __minss_xmmss_memss(zmm1_1[0], 0x42fc0000)
                    else
                        zmm1_1 = zmm11
                    
                    float zmm0_2[0x4] = powf(0x40000000.d, zmm1_1[0])
                    zmm1_1 = *(rbx_2 + 0x14)
                    zmm1_1[0] = zmm1_1[0] - temp0_1[0]
                    zmm0_2[0] = zmm0_2[0] f* zmm10.d
                    zmm1_1[0] = zmm1_1[0] f* *(rbx_2 + 0x1c)
                    
                    if (zmm1_1[0] >= zmm11[0])
                        zmm1_1 = __minss_xmmss_memss(zmm1_1[0], 0x42fc0000)
                    else
                        zmm1_1 = zmm11
                    
                    float zmm0_3[0x4] = powf(0x40000000[0], zmm1_1[0])
                    zmm1_1 = *(rbx_2 + 0x24)
                    float temp0_4[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xe1)
                    zmm0_3[0] = zmm0_3[0] f* zmm12.d
                    temp0_4[0] = zmm13.d
                    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
                    temp0_5[0] = zmm7.d
                    float temp0_6[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 0xe1)
                    float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
                    temp0_7[0] = zmm1_1[0]
                    *(rdi_2 + 0x48b0) = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
                    zmm1_1 = *(rbx_2 + 0x18)
                    temp0_6[0] = (*(rbx_2 + 0x1c))[0]
                    float zmm2[0x4] = *(rbx_2 + 0x14)
                    float temp0_9[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
                    temp0_9[0] = zmm1_1[0]
                    float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x27)
                    temp0_10[0] = zmm2[0]
                    *(rdi_2 + 0x48c0) = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
                    zmm0_3 = *(rbx_2 + 0x34)
                    rdi_2[0x91a] = (_mm_unpacklo_ps(*(rbx_2 + 0x2c), (*(rbx_2 + 0x30))[0].q)).q
                    rdi_2[0x91b].d = zmm0_3[0]
                    *(rdi_2 + 0x48dc) = *(rbx_2 + 0x20)
                    float zmm3[0x4]
                    
                    if (*(rbx_2 + 0x58) == 0)
                        zmm3 = zmm9
                    else
                        zmm3 = 0x3f800000
                    
                    zmm2 = *(rbx_2 + 0xc)
                    zmm0_3 = *(rbx_2 + 8)
                    zmm1_1 = *(rbx_2 + 0x28)
                    float temp0_13[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                    temp0_13[0] = zmm0_3[0]
                    float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc6)
                    temp0_14[0] = zmm3[0]
                    float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x27)
                    temp0_15[0] = zmm1_1[0]
                    *(rdi_2 + 0x48e0) = _mm_shuffle_ps(temp0_15, temp0_15, 0x39)
                    float zmm0_4[0x4]
                    float zmm6_2[0x4]
                    arg2, zmm0_4, zmm6_2, zmm9, zmm11, zmm14, zmm15 =
                        __libm_sse2_sincosf_(*(rbx_2 + 0x60))
                    rdi_2[0x91e].d = zmm0_4[0]
                    *(rdi_2 + 0x48f4) = _mm_shuffle_ps(zmm0_4, zmm0_4, 1)[0]
                    zmm2 = zmm6_2
                    rdi_2[0x91f] = *(rbx_2 + 0x58)
                    float zmm1_2[0x4] = *(rbx_2 + 0x68)
                    zmm0_4 = *(rbx_2 + 0x64)
                    void* rax_3 = *(rbx_2 + 0x58)
                    zmm0_4[0] = zmm0_4[0] - zmm1_2[0]
                    float temp0_18[0x4] = __maxss_xmmss_memss(zmm0_4[0], 0x3727c5ac)
                    zmm6_2[0] = zmm6_2[0] / temp0_18[0]
                    
                    if (rax_3 != 0)
                        uint64_t rax_4 = *(rax_3 + 0xb8)
                        
                        if (rax_4 != 0)
                            rax_4 = zx.q(*(rax_4 + 0x20))
                        
                        zmm2 = _mm_cvtepi32_ps(zx.o(rax_4.d))
                    
                    zmm1_2[0] = zmm1_2[0] * zmm6_2[0]
                    int32_t var_d8_1 = 0
                    float var_e4_1 = zmm2[0]
                    rdi_2[0x920] = (_mm_unpacklo_ps(zmm6_2, (zmm1_2 ^ 0x80000000)[0].q)).q
                    rdi_2[0x921].d = var_e4_1
                    rdi_2[0x922].d = *(rbx_2 + 0x3c)
                    *(rdi_2 + 0x4914) = *(rbx_2 + 0x40)
                    rdi_2[0x923] = (_mm_unpacklo_ps(zmm9, zmm9[0].q)).q
                    rdi_2[0x924].d = 0
                    void* rcx_3 = (*(arg1 + 8))[0x1f7]
                    
                    if (rcx_3 != 0)
                        void* rax_8 = *(rcx_3 + 0x20)
                        zmm0_4 = *(rax_8 + 0x60)
                        rdi_2[0x923] = (_mm_unpacklo_ps(*(rax_8 + 0x40) ^ 0x80000000, 
                            (*(rax_8 + 0x50) ^ 0x80000000)[0].q)).q
                        rdi_2[0x924].d = (zmm0_4 ^ 0x80000000)[0]
                        result = *(rcx_3 + 0x20)
                        zmm3 = *(result + 0x34)
                        zmm3[0] = zmm3[0] * 0.589999974f
                        zmm0_4 = result[6].d
                        zmm0_4[0] = zmm0_4[0] * 0.300000012f
                        zmm1_2 = result[7].d
                        zmm1_2[0] = zmm1_2[0] * 0.109999999f
                        zmm3[0] = zmm3[0] + zmm0_4[0]
                        zmm3[0] = zmm3[0] + zmm1_2[0]
                        zmm3[0] = zmm3[0] f* *(rbx_2 + 0x44)
                        zmm3[0] = zmm3[0] f* *(rbx_2 + 0x48)
                        zmm3[0] = zmm3[0] f* *(rbx_2 + 0x4c)
                        zmm3[0] = zmm3[0] f* *(rbx_2 + 0x50)
                        float temp0_24[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                        temp0_24[0] = zmm3[0]
                        float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xc6)
                        temp0_25[0] = zmm3[0]
                        float temp0_26[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x27)
                        temp0_26[0] = zmm3[0]
                        *(rdi_2 + 0x4924) = _mm_shuffle_ps(temp0_26, temp0_26, 0x39)
                    
                    result.b = rcx_3 != 0
                    *(rdi_2 + 0x490c) = result.b
        
        i += 1
        r15_1 += 0x5240
    while (i s< *(arg1 + 0xa8))

return result
