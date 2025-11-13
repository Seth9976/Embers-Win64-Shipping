// 函数: sub_141a7fee0
// 地址: 0x141a7fee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[1].d)
int128_t* result
float zmm0_1[0x4]

if (rbp.d s> 0)
    zmm0_1, result = sub_141a803d0(arg1, &arg1[8])

if (rbp.d s<= 0 || zmm0_1[0] <= 9.99999975e-06f)
    result.b = 0
else
    float zmm6[0x4] = 0x3f800000
    
    if (not(zmm0_1[0] <= 1f))
        zmm6[0] = 1f / zmm0_1[0]
    
    zmm6[0] = zmm6[0] f* *arg1[8]
    result = *arg1
    float zmm7[0x4] = *result
    float zmm8[0x4] = result[1]
    float zmm9[0x4] = result[2]
    float zmm1_1[0x4] = zmm6[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0)
    zmm7 = _mm_mul_ps(zmm7, temp0_1)
    zmm8 = _mm_mul_ps(zmm8, temp0_1)
    zmm9 = _mm_mul_ps(zmm9, temp0_1)
    *arg2 = zmm7
    arg2[1] = zmm8
    arg2[2] = zmm9
    float zmm5[0x4]
    
    if (rbp s> 1)
        int64_t rdx_1 = 1
        int128_t* rcx = 0x30
        
        do
            zmm1_1 = *arg2
            zmm6[0] = zmm6[0] f* *(arg1[8] + (rdx_1 << 2))
            rdx_1 += 1
            result = *arg1
            float zmm3[0x4] = *(rcx + result)
            zmm5 = zmm6[0]
            float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_6[0x4] = _mm_mul_ps(zmm3, temp0_5)
            float temp0_7[0x4] = _mm_mul_ps(zmm1_1, temp0_6)
            float temp0_8[0x4] = _mm_sub_ps(zx.o(0), temp0_6)
            float temp0_10[0x4] = _mm_add_ps(temp0_7, _mm_shuffle_ps(temp0_7, temp0_7, 0x4e))
            zmm7 = __addps_xmmps_memps(
                _mm_and_ps(
                    _mm_cmpeq_ps(zx.o(0), 
                        _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x39), temp0_10), 2), 
                    temp0_8 ^ temp0_6) ^ temp0_8, 
                *arg2)
            *arg2 = zmm7
            zmm8 = _mm_add_ps(zmm8, _mm_mul_ps(*(rcx + result + 0x10), temp0_5))
            arg2[1] = zmm8
            zmm0_1 = *(rcx + result + 0x20)
            rcx = &rcx[3]
            zmm9 = _mm_add_ps(zmm9, _mm_mul_ps(zmm0_1, temp0_5))
            arg2[2] = zmm9
        while (rdx_1 s< rbp)
    
    zmm5 = data_143f2b570
    result.b = 1
    float temp0_20[0x4] = _mm_mul_ps(zmm7, zmm7)
    float temp0_22[0x4] = _mm_add_ps(temp0_20, _mm_shuffle_ps(temp0_20, temp0_20, 0x4e))
    float temp0_24[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0x39), temp0_22)
    float temp0_25[0x4] = _mm_rsqrt_ps(temp0_24)
    float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm5)
    float temp0_31[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_25, temp0_25), temp0_26)), 
            temp0_25), 
        temp0_25)
    float temp0_34[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_31, temp0_31), temp0_26))
    float temp0_35[0x4] = _mm_cmpeq_ps(data_143f2b580, temp0_24, 2)
    *arg2 = _mm_and_ps(
        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_34, temp0_31), temp0_31), zmm7) ^ data_143f2b560, 
        temp0_35) ^ data_143f2b560

return result
