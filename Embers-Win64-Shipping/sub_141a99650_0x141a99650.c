// 函数: sub_141a99650
// 地址: 0x141a99650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1].d

if (*arg1[3] != 0)
    int128_t* rax_1 = *arg1
    int128_t* r8_1 = *arg2
    *r8_1 = *rax_1
    r8_1[1] = rax_1[1]
    r8_1[2] = rax_1[2]

if (arg2 != arg1)
    *arg2 = *arg1
    *arg1 = 0
    arg2[1].d = arg1[1].d
    *(arg2 + 0xc) = *(arg1 + 0xc)
    arg1[1] = 0

int64_t result = arg1[2]
int32_t i = rbx - 1
arg2[2] = result

if (i s> 0)
    int64_t i_1 = sx.q(i)
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    
    do
        result = arg1[3]
        int32_t arg_8 = i
        
        if (*(i_1 + result) != 0)
            int32_t arg_10
            sub_141ea4020(arg2[2], &arg_10, &arg_8)
            sub_140ae0920(sx.q(arg_8) * 0x30 + *arg2, sx.q(arg_10) * 0x30 + *arg2)
            result = sx.q(arg_8)
            float zmm5_1[0x4] = data_143f2b8b0
            int128_t* rcx_6 = result * 0x30 + *arg2
            zmm6 = *rcx_6
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
            *rcx_6 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_15, temp0_12), temp0_12), zmm6)
                    ^ data_143f2b8a0, 
                temp0_16) ^ data_143f2b8a0
        
        i -= 1
        i_1 -= 1
    while (i s> 0)

return result
