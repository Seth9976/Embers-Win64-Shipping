// 函数: sub_14040ab20
// 地址: 0x14040ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg3
uint32_t result = 0
float zmm6[0x4] = zx.o(0)

if (arg4 - 3 s> 0)
    int128_t* r11_1 = arg1
    int128_t* rcx_1 = arg2 - r11_1
    uint64_t rax_2 = zx.q(((arg4 - 4) u>> 2) + 1)
    uint64_t i_1 = zx.q(rax_2.d)
    result = (rax_2 << 2).d
    uint64_t i
    
    do
        float zmm4[0x4] = *r11_1
        float zmm2[0x4] = *(rcx_1 + r11_1)
        float zmm3[0x4] = *(rcx_1 + r11_1 + 0xc)
        r11_1 = &r11_1[1]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm3, 0x9e)
        float temp0_3[0x4] = _mm_mul_ps(temp0_1, zmm2)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm3, 0x49)
        float temp0_5[0x4] = _mm_add_ps(zmm5, temp0_3)
        float temp0_7[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(zmm4, zmm4, 0xaa))
        float temp0_8[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
        zmm5 = _mm_add_ps(temp0_5, temp0_7)
        float temp0_11[0x4] = _mm_mul_ps(temp0_4, temp0_8)
        float temp0_12[0x4] = _mm_mul_ps(temp0_9, zmm3)
        zmm6 = _mm_add_ps(_mm_add_ps(zmm6, temp0_11), temp0_12)
        i = i_1
        i_1 -= 1
    while (i != 1)

if (result s< arg4)
    int64_t result_1 = sx.q(result)
    result += 1
    float zmm1[0x4] = *(arg1 + (result_1 << 2))
    zmm5 = _mm_add_ps(zmm5, _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), *(arg2 + (result_1 << 2))))
    
    if (result s< arg4)
        int64_t result_2 = sx.q(result)
        result += 1
        zmm1 = *(arg1 + (result_2 << 2))
        zmm6 =
            _mm_add_ps(zmm6, _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), *(arg2 + (result_2 << 2))))
        
        if (result s< arg4)
            int64_t result_3 = sx.q(result)
            zmm1 = *(arg1 + (result_3 << 2))
            zmm5 = _mm_add_ps(zmm5, 
                _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), *(arg2 + (result_3 << 2))))

*arg3 = _mm_add_ps(zmm6, zmm5)
return result
