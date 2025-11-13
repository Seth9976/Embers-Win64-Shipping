// 函数: sub_141a062c0
// 地址: 0x141a062c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = &data_143f23d80

for (int32_t i = 0; i u<= 0x40; )
    int32_t rdx_1 = 0
    
    if (i != 0)
        void* r8_1 = r10
        
        do
            uint128_t zmm0 = zx.o(0)
            
            if (rdx_1 s>= 0)
                if (rdx_1 s>= 3)
                    zmm0.d = float.s(zx.q(i - 3))
                    float temp0_1[0x4] = _mm_cvtepi32_ps(zx.o(rdx_1 - 3))
                    float zmm1[0x4] = 0x3f800000
                    temp0_1[0] = temp0_1[0] f/ zmm0.d
                    zmm1[0] = 1f - temp0_1[0]
                    zmm0.d = _mm_sqrt_ss(0, zmm1[0]).d f* zmm1[0]
                else
                    zmm0 = 0x3f400000
            
            *r8_1 = zmm0.d
            rdx_1 += 1
            r8_1 += 4
        while (rdx_1 u< i)
    
    i += 1
    r10 += 0x100

int32_t zmm5[0x4] = data_142e11d00
float zmm3[0x4] = data_142ef1890
int32_t rdx_2 = 8
float zmm4[0x4] = data_142d3f790
float zmm6[0x4] = data_142d3f6c0

do
    float temp0_5[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rdx_2 - 8), 0), zmm5))
    float temp0_6[0x4] = _mm_rsqrt_ps(temp0_5)
    *(&data_143f27e80 + (zx.q(rdx_2 - 8) << 2)) = _mm_mul_ps(
        _mm_mul_ps(
            _mm_mul_ps(_mm_sub_ps(_mm_mul_ps(_mm_mul_ps(temp0_6, temp0_5), temp0_6), zmm3), 
                temp0_6), 
            zmm4), 
        zmm6)
    float temp0_15[0x4] =
        _mm_cvtepi32_ps(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rdx_2 - 4), 0), zmm5))
    float temp0_16[0x4] = _mm_rsqrt_ps(temp0_15)
    *(&data_143f27e80 + (zx.q(rdx_2 - 4) << 2)) = _mm_mul_ps(
        _mm_mul_ps(
            _mm_mul_ps(_mm_sub_ps(_mm_mul_ps(_mm_mul_ps(temp0_16, temp0_15), temp0_16), zmm3), 
                temp0_16), 
            zmm4), 
        zmm6)
    float temp0_25[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rdx_2), 0), zmm5))
    float temp0_26[0x4] = _mm_rsqrt_ps(temp0_25)
    *(&data_143f27e80 + (zx.q(rdx_2) << 2)) = _mm_mul_ps(
        _mm_mul_ps(
            _mm_mul_ps(_mm_sub_ps(_mm_mul_ps(_mm_mul_ps(temp0_26, temp0_25), temp0_26), zmm3), 
                temp0_26), 
            zmm4), 
        zmm6)
    uint64_t rax_7 = zx.q(rdx_2 + 4)
    rdx_2 += 0x10
    float temp0_35[0x4] = _mm_cvtepi32_ps(_mm_add_epi32(_mm_shuffle_epi32(zx.o(rax_7.d), 0), zmm5))
    float temp0_36[0x4] = _mm_rsqrt_ps(temp0_35)
    *(&data_143f27e80 + (rax_7 << 2)) = _mm_mul_ps(
        _mm_mul_ps(
            _mm_mul_ps(_mm_sub_ps(_mm_mul_ps(_mm_mul_ps(temp0_36, temp0_35), temp0_36), zmm3), 
                temp0_36), 
            zmm4), 
        zmm6)
while (rdx_2 - 8 u< 0x40)

int32_t result
result.b = 1
return result
