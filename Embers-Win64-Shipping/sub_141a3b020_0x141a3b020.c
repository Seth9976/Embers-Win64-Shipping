// 函数: sub_141a3b020
// 地址: 0x141a3b020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
uint32_t zmm11[0x4] = arg2

if (*(arg1 + 0x28) s>= 2)
    int64_t* rcx = data_143f2a000
    int32_t rax_1 = (*(*rcx + 0x90))(rcx)
    float* r8_1 = *(arg1 + 0x20)
    uint128_t zmm9 = 0x3f1a36e2e0000000
    int64_t rsi_1 = sx.q(rax_1)
    char rcx_1 = r8_1[6].b
    
    if (rcx_1 == 0)
        r8_1[5].b = 0
        int32_t* rdx_1 = *(arg1 + 0x10)
        r8_1[2] = (*(*(arg1 + 0x20) + 0x1c) - *r8_1)
            f/ _mm_cvtpd_ps(_mm_max_sd(_mm_cvtepi32_pd(zx.q(rdx_1[1] - *rdx_1)).q, zmm9.q))[0]
    else if (rcx_1 == 2 && *(r8_1 + 0x19) == 0)
        *(r8_1 + 4) = 0
        r8_1[5].b = 0
    
    int64_t r11_1 = *(arg1 + 0x20)
    int64_t r10_1 = sx.q(*(arg1 + 0x28)) * 0x1c
    char rax_5 = *(r10_1 + r11_1 - 4)
    float zmm2
    
    if (rax_5 == 0)
        zmm2 = *(r10_1 + r11_1 - 0x1c)
        *(r10_1 + r11_1 - 8) = 0
        int64_t r9_1 = sx.q(*(arg1 + 0x28))
        int64_t r8_2 = *(arg1 + 0x10)
        *(r10_1 + r11_1 - 0x18) = (zmm2 f- *((r9_1 - 2) * 0x1c + *(arg1 + 0x20))) f/ _mm_cvtpd_ps(
            _mm_max_sd(
            _mm_cvtepi32_pd(zx.q(*(r8_2 + (r9_1 << 2) - 4) - *(r8_2 + ((r9_1 - 2) << 2)))).q, 
            zmm9.q))[0]
    else if (rax_5 == 2 && *(r10_1 + r11_1 - 3) == 0)
        *(r10_1 + r11_1 - 0x18) = 0
        *(r10_1 + r11_1 - 8) = 0
    
    int32_t rdi_1 = 1
    result = *(arg1 + 0x28) - 1
    
    if (result s> 1)
        int64_t r10_2 = 4
        int64_t r9_2 = 0x1c
        int128_t zmm6
        int128_t var_18_1 = zmm6
        
        do
            int128_t* r8_3 = *(arg1 + 0x20)
            char rax_10 = *(r8_3 + r9_2 + 0x18)
            float var_a8_1 = (*(r8_3 + r9_2 - 0x1c)).d
            uint32_t zmm3[0x4]
            
            if (rax_10 != 2)
                if (rax_10 == 0)
                    zmm3 = *(r8_3 + r9_2)
                    *(r8_3 + r9_2 + 0x14) = rax_10
                    int32_t* rcx_5 = *(arg1 + 0x10)
                    int64_t rdx_3 = *(arg1 + 0x20)
                    *(r8_3 + r9_2 + 4) = (zmm3[0] - var_a8_1) f/ _mm_cvtpd_ps(_mm_max_sd(
                        _mm_cvtepi32_pd(zx.q(*(rcx_5 + r10_2) - *(rcx_5 + r10_2 - 4))).q, zmm9.q))[0]
                    void* rcx_6 = *(arg1 + 0x10)
                    *(r8_3 + r9_2 + 8) = (*(r9_2 + rdx_3 + 0x1c) f- zmm3[0]) f/ _mm_cvtpd_ps(
                        _mm_max_sd(
                        _mm_cvtepi32_pd(zx.q(*(rcx_6 + r10_2 + 4) - *(rcx_6 + r10_2))).q, zmm9.q))[0]
            else if (*(r8_3 + r9_2 + 0x19) == 0)
                int64_t rcx_4 = *(arg1 + 0x10)
                zmm2 = (zx.o(0)).d
                zmm3 = *(r8_3 + r9_2)
                zmm6 = _mm_cvtpd_ps(_mm_max_sd(
                    _mm_cvtepi32_pd(zx.q(*(rcx_4 + r10_2 + 4) - *(rcx_4 + r10_2 - 4))).q, zmm9.q))
                uint128_t zmm0
                
                if (rsi_1 != 0)
                    zmm3[0] f- var_a8_1
                    bool cond:1_1 = zmm3[0] f>= var_a8_1
                    
                    if (zmm3[0] f<= var_a8_1)
                        goto label_141a3b25e
                    
                    uint32_t zmm4_1[0x4] = *(r8_3 + r9_2 + 0x1c)
                    
                    if (zmm3[0] f< zmm4_1[0])
                    label_141a3b26c:
                        zmm2 = zmm4_1[0]
                        zmm3[0] = zmm3[0] f- var_a8_1
                        zmm2 = zmm2 f- zmm3[0]
                        zmm4_1[0] = zmm4_1[0] f- var_a8_1
                        zmm0.d = 1f f- zmm11[0]
                        zmm2 = zmm2 f+ zmm3[0]
                        arg2 = _mm_and_ps(zmm3, 0x7fffffff)
                        zmm4_1 = _mm_and_ps(zmm4_1, 0x7fffffff)
                        arg2[0] = arg2[0] f/ zmm4_1[0]
                        zmm2 = zmm2 f* zmm0.d f/ zmm6.d
                        
                        if (arg2[0] f<= 0.850000024f)
                            if (not(arg2[0] f>= 0.149999976f))
                                arg2[0] = arg2[0] f* 6.66666794f
                                zmm2 = zmm2 f* arg2[0]
                            
                            *(r8_3 + r9_2 + 4) = zmm2
                            *(r8_3 + r9_2 + 0x14) = 0
                        else
                            arg2[0] = arg2[0] f- 0.850000024f
                            *(r8_3 + r9_2 + 0x14) = 0
                            arg2[0] = arg2[0] f* 6.66666794f
                            zmm0.d = 1f f- arg2[0]
                            zmm2 = zmm2 f* zmm0.d
                            *(r8_3 + r9_2 + 4) = zmm2
                    else
                        cond:1_1 = zmm3[0] f>= var_a8_1
                    label_141a3b25e:
                        
                        if (cond:1_1)
                            *(r8_3 + r9_2 + 4) = zmm2
                            *(r8_3 + r9_2 + 0x14) = 0
                        else
                            zmm4_1 = *(r8_3 + r9_2 + 0x1c)
                            
                            if (not(zmm3[0] f<= zmm4_1[0]))
                                goto label_141a3b26c
                            
                            *(r8_3 + r9_2 + 4) = zmm2
                            *(r8_3 + r9_2 + 0x14) = 0
                else
                    zmm2 = zmm3[0] - var_a8_1
                    zmm0.d = (*(r8_3 + r9_2 + 0x1c)).d f- zmm3[0]
                    *(r8_3 + r9_2 + 0x14) = rsi_1.b
                    arg2 = 0x3f800000
                    arg2[0] = 1f f- zmm11[0]
                    zmm2 = (zmm2 f+ zmm0.d) f* arg2[0] f/ zmm6.d
                    *(r8_3 + r9_2 + 4) = zmm2
                *(r8_3 + r9_2 + 8) = zmm2
            rdi_1 += 1
            result = *(arg1 + 0x28) - 1
            r9_2 += 0x1c
            r10_2 += 4
        while (rdi_1 s< result)

return result
