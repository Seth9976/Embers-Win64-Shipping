// 函数: sub_1417be0d0
// 地址: 0x1417be0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* r10 = *arg2
int64_t i_1 = sx.q(r10[1].d)

if (i_1 s> 0)
    int64_t r8 = *arg3
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    uint32_t zmm11[0x4] = data_143ef8420
    void* rdx = *r10
    float zmm12[0x4] = data_143ef8470
    int64_t rbx_1 = *arg2[1]
    uint32_t zmm13[0x4] = data_143ef8480
    int64_t i
    
    do
        *(r8 + (sx.q(*(rdx + 4)) << 2)) = *(arg1 + 0x1c)
        float zmm5[0x4] = *(arg1 + 0x40)
        result = sx.q(*rdx)
        float temp0_1[0x4] = __mulps_xmmps_memps(*(arg1 + 0x20), data_143ef8490)
        float temp0_2[0x4] = _mm_rcp_ps(zmm5)
        void* rcx_1 = result * 3
        float zmm2[0x4] = *(rbx_1 + (rcx_1 << 2) + 4)
        float temp0_3[0x4] =
            _mm_unpacklo_ps(*(rbx_1 + (rcx_1 << 2)), (*(rbx_1 + (rcx_1 << 2) + 8))[0].q)
        float temp0_4[0x4] = _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)
        float temp0_5[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
        float temp0_7[0x4] =
            __subps_xmmps_memps(_mm_unpacklo_ps(temp0_3, temp0_4[0].q), *(arg1 + 0x30))
        float temp0_8[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
        float temp0_9[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
        zmm7 = _mm_and_ps(temp0_7, zmm11)
        float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc9), temp0_5)
        float temp0_15[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xd2), temp0_8), temp0_12)
        float temp0_16[0x4] = _mm_mul_ps(temp0_2, temp0_2)
        float temp0_17[0x4] = _mm_add_ps(temp0_2, temp0_2)
        float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
        float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm5)
        float temp0_20[0x4] = _mm_mul_ps(temp0_9, temp0_18)
        float temp0_21[0x4] = _mm_sub_ps(temp0_17, temp0_19)
        float temp0_22[0x4] = _mm_add_ps(temp0_20, zmm7)
        float temp0_23[0x4] = _mm_mul_ps(temp0_21, temp0_21)
        float temp0_24[0x4] = _mm_add_ps(temp0_21, temp0_21)
        float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm5)
        float temp0_27[0x4] = _mm_cmpeq_ps(_mm_and_ps(zmm5, zmm13), zmm12, 2)
        float temp0_28[0x4] = _mm_sub_ps(temp0_24, temp0_25)
        float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_5)
        float temp0_33[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_8), temp0_30)
        zmm5 = _mm_and_ps(temp0_27, zx.o(0) ^ temp0_28) ^ temp0_28
        float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_22), zmm5)
        int96_t var_98_1 = temp0_36[0].12
        
        if (not(temp0_36[0] <= -50f) && not(temp0_36[0] >= 50f))
            float zmm0[0x4] = var_98_1:4.d
            
            if (not(zmm0[0] <= -50f) && not(zmm0[0] >= 50f))
                zmm0 = var_98_1:8.d
                
                if (not(zmm0[0] <= -50f) && not(zmm0[0] >= 50f))
                    result = sx.q(*(rdx + 4))
                    *(r8 + (result << 2)) = 0
        
        rdx += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
