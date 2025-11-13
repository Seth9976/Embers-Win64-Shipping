// 函数: sub_14230ab20
// 地址: 0x14230ab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t i_2 = sx.q(*(arg1 + 0x190))

if (*(arg1 + 0x2e8) != i_2.d)
    int32_t rdi_1 = 0
    int32_t rdx_1 = 0
    *(arg1 + 0x2e8) = 0
    
    if (*(arg1 + 0x2ec) != i_2.d)
        sub_1405a52a0(arg1 + 0x2e0, i_2.d)
        rdx_1 = *(arg1 + 0x2e8)
    
    int32_t rax = rdx_1 + i_2.d
    *(arg1 + 0x2e8) = rax
    
    if (rax s> *(arg1 + 0x2ec))
        sub_1405c4fe0(arg1 + 0x2e0)
    
    int32_t rdx_3 = 0
    *(arg1 + 0x368) = 0
    
    if (*(arg1 + 0x36c) != i_2.d)
        sub_1405a52a0(arg1 + 0x360, i_2.d)
        rdx_3 = *(arg1 + 0x368)
    
    result = zx.q(rdx_3 + i_2.d)
    *(arg1 + 0x368) = result.d
    
    if (result.d s> *(arg1 + 0x36c))
        result = sub_1405c4fe0(arg1 + 0x360)
    
    int64_t i_1 = i_2
    
    if (i_2.d s> 0)
        int64_t rbx = 0
        int64_t r12_1 = 0
        float zmm9[0x4]
        float var_58_1[0x4] = zmm9
        float zmm10[0x4]
        float var_68_1[0x4] = zmm10
        int64_t i
        
        do
            void var_a8
            float (* rax_1)[0x4] = sub_142314fa0(arg1, &var_a8, rdi_1)
            float (* rcx_5)[0x4] = *(arg1 + 0x360)
            *(rcx_5 + rbx) = *rax_1
            *(rcx_5 + rbx + 0x10) = rax_1[1]
            *(rcx_5 + rbx + 0x20) = rax_1[2]
            *(rcx_5 + rbx + 0x30) = rax_1[3]
            
            if (rdi_1 s> 0)
                float (* rdx_6)[0x4] = *(arg1 + 0x360)
                float zmm2_1[0x4] = *(rdx_6 + rbx)
                int64_t rcx_6 = sx.q(*(*(arg1 + 0x188) + r12_1 + 8))
                zmm10 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                float zmm0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                int128_t* rcx_8 = &rdx_6[rcx_6 * 4]
                float zmm7_1[0x4] = rcx_8[1]
                float zmm6_1[0x4] = *rcx_8
                float zmm8_1[0x4] = rcx_8[2]
                zmm9 = rcx_8[3]
                zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
                zmm2_1 = _mm_mul_ps(zmm2_1, zmm9)
                zmm10 = _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm10, zmm6_1), zmm0_1), zmm1_1), zmm2_1)
                zmm2_1 = *(rdx_6 + rbx + 0x10)
                zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                float zmm5_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
                zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9)
                zmm5_1 = _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, zmm6_1), zmm0_1), zmm1_1), zmm2_1)
                zmm2_1 = *(rdx_6 + rbx + 0x20)
                float zmm4_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
                zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm9)
                zmm4_1 = _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm4_1, zmm6_1), zmm0_1), zmm1_1), zmm2_1)
                zmm2_1 = *(rdx_6 + rbx + 0x30)
                *(rdx_6 + rbx) = zmm10
                float zmm3_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                zmm3_1 = _mm_mul_ps(zmm3_1, zmm6_1)
                zmm1_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                *(rdx_6 + rbx + 0x10) = zmm5_1
                zmm0_1 = _mm_mul_ps(zmm0_1, zmm7_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, zmm8_1)
                zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
                zmm2_1 = _mm_mul_ps(zmm2_1, zmm9)
                *(rdx_6 + rbx + 0x20) = zmm4_1
                *(rdx_6 + rbx + 0x30) = _mm_add_ps(_mm_add_ps(zmm3_1, zmm1_1), zmm2_1)
            
            result = sub_140631b10((sx.q(rdi_1) << 6) + *(arg1 + 0x360), &var_a8)
            int128_t* rcx_12 = *(arg1 + 0x2e0)
            rdi_1 += 1
            r12_1 += 0xc
            *(rcx_12 + rbx) = *result
            *(rcx_12 + rbx + 0x10) = *(result + 0x10)
            *(rcx_12 + rbx + 0x20) = *(result + 0x20)
            *(rcx_12 + rbx + 0x30) = *(result + 0x30)
            rbx += 0x40
            i = i_1
            i_1 -= 1
        while (i != 1)

return result
