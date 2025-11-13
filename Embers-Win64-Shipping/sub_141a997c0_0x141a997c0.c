// 函数: sub_141a997c0
// 地址: 0x141a997c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = sub_141a911c0(arg2, arg1)
arg2[2] = arg1[2]
char* result = arg1[3]

if (*result != 0)
    result = *arg1
    int128_t* rdx_1 = *arg2
    *rdx_1 = *result
    rdx_1[1] = *(result + 0x10)
    rdx_1[2] = *(result + 0x20)

int32_t i = arg1[1].d - 1

if (i s> 0)
    int64_t i_1 = sx.q(i)
    float var_28_1[0x4] = zmm6
    
    do
        result = arg1[3]
        int32_t arg_8 = i
        
        if (result[i_1] != 0)
            int32_t arg_10
            sub_141ea4020(arg1[2], &arg_10, &arg_8)
            sub_140ae0920(sx.q(arg_8) * 0x30 + *arg2, sx.q(arg_10) * 0x30 + *arg2)
            result = sx.q(arg_8)
            float zmm5_1[0x4] = data_143f2b8b0
            int128_t* rcx_7 = result * 0x30 + *arg2
            zmm6 = *rcx_7
            float temp0_1[0x4] = _mm_mul_ps(zmm6, zmm6)
            float temp0_3[0x4] = _mm_add_ps(temp0_1, _mm_shuffle_ps(temp0_1, temp0_1, 0x4e))
            float temp0_5[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x39), temp0_3)
            float temp0_6[0x4] = _mm_rsqrt_ps(temp0_5)
            float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm5_1)
            float temp0_12[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_6, temp0_6), temp0_7)), 
                    temp0_6), 
                temp0_6)
            float temp0_15[0x4] =
                _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_12, temp0_12), temp0_7))
            float temp0_16[0x4] = _mm_cmpeq_ps(data_143f2b8f0, temp0_5, 2)
            *rcx_7 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_15, temp0_12), temp0_12), zmm6)
                    ^ data_143f2b8a0, 
                temp0_16) ^ data_143f2b8a0
        
        i -= 1
        i_1 -= 1
    while (i s> 0)

return result
