// 函数: sub_1421b46c0
// 地址: 0x1421b46c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x18)

if (result != 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    float var_128_1[0x4] = *(result + 0x1e0)
    void* rbx_1 = *(arg1 + 0x28)
    *(arg1 + 0x14c) = data_143dbb1f8.q
    int32_t rax = data_143dbb200
    *(arg1 + 0x154) = rax
    *(arg1 + 0x140) = *(arg1 + 0x14c)
    *(arg1 + 0x148) = rax
    *(arg1 + 0x158) = 0
    int64_t rdx_1 = sx.q(sub_1421b7d40(arg1))
    char r10_1 = *(*(rbx_1 + 0x30) + 0x59) & 1
    float var_e8_1[0x4]
    float var_d8_1[0x4]
    float var_c8_1[0x4]
    uint128_t var_b8_1
    uint128_t zmm0
    float zmm1[0x4]
    float zmm3[0x4]
    float zmm4[0x4]
    
    if (r10_1 == 0)
        var_e8_1 = data_14399f6e0
        var_d8_1 = data_14399f6f0
        var_c8_1 = data_14399f700
        var_b8_1 = data_14399f710
    else
        void* rcx_1 = *(arg1 + 0x18)
        zmm1 = *(rcx_1 + 0x1c0)
        float temp0_1[0x4] = _mm_add_ps(zmm1, zmm1)
        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_4[0x4] = _mm_mul_ps(zmm1, temp0_1)
        float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), zmm0)
        float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), temp0_3)
        zmm1 = *(rcx_1 + 0x1e0)
        zmm0 = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(temp0_4, temp0_4, 1))
        zmm4 = data_143f4dea0
        float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_6)
        float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_8)
        float temp0_15[0x4] = _mm_sub_ps(zmm4, zmm0)
        float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm1)
        float temp0_17[0x4] = _mm_mul_ps(temp0_10, temp0_14)
        zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_15, zmm1), data_143f4deb0)
        zmm0 = _mm_shuffle_ps(temp0_17, zmm3, 0x32)
        float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3, 0), zmm0, 0x82)
        zmm0 = _mm_shuffle_ps(temp0_16, zmm3, 0x31)
        float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm3, 0x10), zmm0, 0x88)
        zmm0 = *(rcx_1 + 0x1d0)
        zmm4[0].q = zmm0 u>> 0x40
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_16, temp0_17, 0x12)
        var_b8_1 = _mm_shuffle_ps(zmm0, zmm4, 0xc4)
        var_e8_1 = temp0_22
        var_d8_1 = temp0_25
        var_c8_1 = _mm_shuffle_ps(temp0_26, zmm3, 0xe8)
    
    zmm6 = 0x49800000
    float zmm7[0x4] = 0xc9800000
    uint128_t zmm8 = 0x49800000
    int32_t i_2 = *(arg1 + 0x118)
    uint128_t zmm9 = 0x49800000
    float zmm10[0x4] = 0xc9800000
    float var_148_1 = 1048576f
    float zmm11[0x4] = 0xc9800000
    int32_t var_144_1 = 0x49800000
    int32_t var_140_1 = 0x49800000
    float var_138_1 = -1048576f
    int32_t var_134_1 = 0xc9800000
    float var_130_1 = -1048576f
    
    if (i_2 s> 0)
        int32_t rbx_2 = *(arg1 + 0x114)
        uint64_t i_1 = zx.q(i_2)
        int16_t* r8_1 = *(arg1 + 0xf8)
        int64_t rsi_1 = *(arg1 + 0xf0)
        uint128_t zmm12 = var_128_1[2]
        float zmm13[0x4] = var_128_1[1]
        uint128_t zmm14 = var_128_1[0]
        float temp0_56[0x4]
        float temp0_58[0x4]
        float temp0_60[0x4]
        uint64_t i
        
        do
            void* rcx_3 = sx.q(zx.d(*r8_1) * rbx_2) + rsi_1
            
            if (rdx_1 != -1)
                zmm0 = *(rdx_1 + rcx_3 + 0xc)
                zmm4 = _mm_and_ps(*(rdx_1 + rcx_3 + 0x10), 0x7fffffff)
                zmm1 = *(rdx_1 + rcx_3 + 0x14)
                zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                float temp0_36[0x4] = _mm_max_ss(zmm4[0], zmm0.d)
                zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
                zmm4 = _mm_max_ss(temp0_36[0], zmm1[0])
            else
                zmm0.d = zmm14.d f* *(rcx_3 + 0x50)
                zmm13[0] = zmm13[0] f* *(rcx_3 + 0x54)
                zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                float temp0_31[0x4] = _mm_max_ss(_mm_and_ps(zmm13, 0x7fffffff)[0], zmm0.d)
                zmm0.d = zmm12.d f* *(rcx_3 + 0x58)
                zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                zmm4 = _mm_max_ss(temp0_31[0], zmm0.d)
            
            uint64_t var_118_1 = *(rcx_3 + 0x10)
            float zmm2[0x4]
            
            if (r10_1 == 0)
                zmm3 = *(rcx_3 + 0x18)
                zmm1 = var_118_1:4.d
                zmm2 = var_118_1.d
            else
                zmm0 = *(rcx_3 + 0x10)
                zmm1 = *(rcx_3 + 0x14)
                zmm2 = *(rcx_3 + 0x18)
                var_128_1[3] = 0x3f800000
                var_128_1[0] = zmm0.d
                uint128_t var_108
                var_108.q = 0
                float temp0_39[0x4] = _mm_shuffle_ps(var_128_1, var_128_1, 0xe1)
                temp0_39[0] = zmm1[0]
                int32_t var_100_1 = 0
                float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc6)
                temp0_40[0] = zmm2[0]
                float temp0_41[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xc9)
                var_128_1 = temp0_41
                float temp0_43[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_41, temp0_41, 0xff), var_b8_1)
                float temp0_45[0x4] =
                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_41, temp0_41, 0x55), var_d8_1)
                zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_41, temp0_41, 0xaa), var_c8_1)
                float temp0_49[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0), var_e8_1)
                zmm2 = _mm_add_ps(_mm_add_ps(temp0_43, zmm0), _mm_add_ps(temp0_45, temp0_49))
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            
            r8_1 = &r8_1[1]
            zmm0.d = zmm2.d f- zmm4[0]
            zmm2[0] = zmm2[0] + zmm4[0]
            zmm0 = _mm_min_ss(zmm0.d, zmm6[0])
            temp0_56 = _mm_max_ss(zmm2[0], zmm7[0])
            zmm6 = zmm0
            zmm0.d = zmm1.d f- zmm4[0]
            zmm7 = temp0_56
            zmm1[0] = zmm1[0] + zmm4[0]
            zmm0 = _mm_min_ss(zmm0.d, zmm8.d)
            temp0_58 = _mm_max_ss(zmm1[0], zmm10[0])
            zmm8 = zmm0
            zmm0.d = zmm3.d f- zmm4[0]
            zmm10 = temp0_58
            zmm3[0] = zmm3[0] + zmm4[0]
            zmm0 = _mm_min_ss(zmm0.d, zmm9.d)
            temp0_60 = _mm_max_ss(zmm3[0], zmm11[0])
            zmm9 = zmm0
            zmm11 = temp0_60
            i = i_1
            i_1 -= 1
        while (i != 1)
        var_148_1 = zmm6[0]
        var_138_1 = temp0_56[0]
        int32_t var_144_2 = zmm8.d
        var_140_1 = zmm0.d
        float var_134_2 = temp0_58[0]
        var_130_1 = temp0_60[0]
    
    int32_t var_100_2 = var_140_1
    float var_f4_1 = var_130_1
    result = zx.q(1.d)
    zmm0.q = var_148_1.q
    *(arg1 + 0x140) = zmm0
    *(arg1 + 0x150) = var_138_1.q
    *(arg1 + 0x158) = result.d

return result
