// 函数: sub_141423720
// 地址: 0x141423720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_148
uint64_t result = __security_cookie ^ &var_148
uint64_t result_1 = result
float* r10 = arg5
float zmm11[0x4] = *arg1
float zmm12[0x4] = arg1[1]
float zmm13[0x4] = arg1[2]
float zmm9[0x4] = arg1[3]
var_148 = (*(arg1 + 0x38))[0]
float zmm6[0x4] = var_148
float temp0[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)

if (arg3 s> 0)
    uint32_t* rbx_1 = arg6 - r10
    float zmm8[0x4] = data_143ed34e0
    float zmm14[0x4] = data_143ed34f0
    float temp0_1[0x4] = _mm_sub_ps(zx.o(0), zmm14)
    float zmm15[0x4] = data_143ed34d0
    uint64_t i_1 = zx.q(arg3)
    uint64_t i
    
    do
        float zmm0[0x4] = zx.o(*arg2)
        uint32_t zmm5[0x4] = zx.o(0)
        int32_t rax_1 = arg2[1].d
        arg2 = &arg2[3]
        int64_t var_140_1 = zmm0.q
        float zmm4[0x4] = zmm14
        float zmm3[0x4] = temp0_1
        int64_t var_130_1 = *(arg2 - 0xc)
        int64_t j = 0
        zmm0 = var_140_1.d
        float zmm1[0x4] = var_130_1.d
        float temp0_2[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_4[0x4] = _mm_mul_ps(temp0_2, zmm11)
        int32_t rax_2 = *(arg2 - 4)
        float temp0_5[0x4] = _mm_mul_ps(temp0_3, zmm11)
        float var_118[0x4] = temp0_4
        zmm0 = var_140_1:4.d
        float temp0_6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float var_108_1[0x4] = temp0_5
        zmm1 = var_130_1:4.d
        float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_8[0x4] = _mm_mul_ps(temp0_6, zmm12)
        float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm12)
        float var_f8[0x4] = temp0_8
        zmm0 = rax_1
        float var_e8_1[0x4] = temp0_9
        zmm1 = rax_2
        float temp0_10[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
        float temp0_11[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_12[0x4] = _mm_mul_ps(temp0_10, zmm13)
        float temp0_13[0x4] = _mm_mul_ps(temp0_11, zmm13)
        float var_d8[0x4] = temp0_12
        float var_c8_1[0x4] = temp0_13
        
        do
            float temp0_15[0x4] = __addps_xmmps_memps(
                _mm_add_ps((&var_118)[zx.q(*(j + 0x142f7e7d8))], zmm9), 
                (&var_f8)[zx.q(*(j + 0x142f7e7f8))])
            uint64_t rax_7 = zx.q(*(j + 0x142f7e818))
            j += 4
            result = rax_7 * 2
            float temp0_16[0x4] = __addps_xmmps_memps(temp0_15, *(&var_d8 + (result << 3)))
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xff)
            float temp0_18[0x4] = _mm_div_ps(temp0_16, temp0_17)
            zmm5 = _mm_or_ps(zmm5, _mm_cmpeq_ps(temp0_17, temp0, 1))
            zmm4 = _mm_min_ps(zmm4, temp0_18)
            zmm3 = _mm_max_ps(zmm3, temp0_18)
        while (j s< 0x20)
        
        float temp0_23[0x4] = _mm_add_ps(zmm3, zmm8)
        *(rbx_1 + r10) = zmm5[0]
        float temp0_24[0x4] = _mm_add_ps(zmm4, zmm8)
        float temp0_25[0x4] = _mm_min_ps(temp0_23, zmm15)
        zmm0 = _mm_cvttps_epi32(_mm_shuffle_ps(_mm_max_ps(temp0_24, zx.o(0)), temp0_25, 0x44))
        float temp0_29[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
        *arg4 = zmm0
        arg4 = &arg4[1]
        *r10 = temp0_29[0]
        r10 = &r10[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(result_1 ^ &var_148)
return result
