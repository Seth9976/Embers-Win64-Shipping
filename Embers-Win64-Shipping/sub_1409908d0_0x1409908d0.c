// 函数: sub_1409908d0
// 地址: 0x1409908d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(*(arg1 + 0x438))
char r9 = 0
float zmm5[0x4] = data_143dbb1fc
float zmm4[0x4] = data_143dbb200
float zmm6[0x4] = data_143dbb1f8
float zmm7[0x4] = zmm6
float zmm8[0x4] = zmm5
float zmm9[0x4] = zmm4
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]

if (i_1 s> 0)
    float zmm10[0x4] = *arg3
    void* rax_2 = *(arg1 + 0x430) + 0x14
    float zmm13[0x4] = arg3[2]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xc9)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xd2)
    float zmm14[0x4] = arg3[1]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xff)
    int64_t i
    
    do
        zmm0 = *(rax_2 - 0xc)
        float zmm3[0x4] = *(rax_2 - 0x14)
        float temp0_4[0x4] = _mm_unpacklo_ps(*(rax_2 - 0x10), zx.o(0)[0].q)
        float temp0_7[0x4] =
            _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_4[0].q), zmm13)
        float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_2)
        float temp0_12[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_1), temp0_9)
        float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
        float temp0_16[0x4] = _mm_mul_ps(temp0_14, temp0_2)
        int64_t var_a8_1 = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_15, temp0_1), temp0_16), 
                _mm_add_ps(_mm_mul_ps(temp0_3, temp0_13), temp0_7)), 
            zmm14)[0].q
        int32_t var_a0
        
        if (r9 == 0)
            zmm6 = var_a8_1.d
            r9 = 1
            zmm5 = var_a8_1:4.d
            zmm7 = zmm6
            zmm4 = var_a0
            zmm8 = zmm5
            zmm9 = zmm4
        else
            zmm0 = var_a8_1.d
            
            if (not(zmm7[0] <= zmm0[0]))
                zmm7 = zmm0
            
            zmm1 = var_a8_1:4.d
            
            if (not(zmm8[0] <= zmm1[0]))
                zmm8 = zmm1
            
            zmm2 = var_a0
            
            if (not(zmm9[0] <= zmm2[0]))
                zmm9 = zmm2
            
            if (not(zmm6[0] >= zmm0[0]))
                zmm6 = zmm0
            
            if (not(zmm5[0] >= zmm1[0]))
                zmm5 = zmm1
            
            if (not(zmm4[0] >= zmm2[0]))
                zmm4 = zmm2
        
        zmm0 = *rax_2
        zmm3 = *(rax_2 - 8)
        float temp0_23[0x4] = _mm_unpacklo_ps(*(rax_2 - 4), zx.o(0)[0].q)
        float temp0_26[0x4] =
            _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_23[0].q), zmm13)
        float temp0_27[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xd2)
        float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xc9), temp0_2)
        float temp0_31[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_27, temp0_1), temp0_29)
        float temp0_32[0x4] = _mm_add_ps(temp0_31, temp0_31)
        float temp0_33[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xd2)
        float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0xc9)
        float temp0_35[0x4] = _mm_mul_ps(temp0_33, temp0_1)
        float temp0_36[0x4] = _mm_mul_ps(temp0_34, temp0_2)
        float temp0_37[0x4] = _mm_mul_ps(temp0_32, temp0_3)
        int64_t var_a8_2 = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_35, temp0_36), _mm_add_ps(temp0_37, temp0_26)), zmm14)[0].q
        
        if (r9 == 0)
            zmm6 = var_a8_2.d
            r9 = 1
            zmm5 = var_a8_2:4.d
            zmm7 = zmm6
            zmm4 = var_a0
            zmm8 = zmm5
            zmm9 = zmm4
        else
            zmm0 = var_a8_2.d
            
            if (not(zmm7[0] <= zmm0[0]))
                zmm7 = zmm0
            
            zmm1 = var_a8_2:4.d
            
            if (not(zmm8[0] <= zmm1[0]))
                zmm8 = zmm1
            
            zmm2 = var_a0
            
            if (not(zmm9[0] <= zmm2[0]))
                zmm9 = zmm2
            
            if (not(zmm6[0] >= zmm0[0]))
                zmm6 = zmm0
            
            if (not(zmm5[0] >= zmm1[0]))
                zmm5 = zmm1
            
            if (not(zmm4[0] >= zmm2[0]))
                zmm4 = zmm2
        
        zmm0 = *(rax_2 + 0xc)
        zmm3 = *(rax_2 + 4)
        float temp0_42[0x4] = _mm_unpacklo_ps(*(rax_2 + 8), zx.o(0)[0].q)
        float temp0_45[0x4] =
            _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_42[0].q), zmm13)
        float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xd2)
        float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0xc9), temp0_2)
        float temp0_50[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_46, temp0_1), temp0_48)
        float temp0_51[0x4] = _mm_add_ps(temp0_50, temp0_50)
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xd2)
        float temp0_53[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xc9)
        float temp0_54[0x4] = _mm_mul_ps(temp0_52, temp0_1)
        float temp0_55[0x4] = _mm_mul_ps(temp0_53, temp0_2)
        float temp0_56[0x4] = _mm_mul_ps(temp0_51, temp0_3)
        int64_t var_a8_3 = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_54, temp0_55), _mm_add_ps(temp0_56, temp0_45)), zmm14)[0].q
        
        if (r9 == 0)
            zmm6 = var_a8_3.d
            r9 = 1
            zmm5 = var_a8_3:4.d
            zmm7 = zmm6
            zmm4 = var_a0
            zmm8 = zmm5
            zmm9 = zmm4
        else
            zmm0 = var_a8_3.d
            
            if (not(zmm7[0] <= zmm0[0]))
                zmm7 = zmm0
            
            zmm1 = var_a8_3:4.d
            
            if (not(zmm8[0] <= zmm1[0]))
                zmm8 = zmm1
            
            zmm2 = var_a0
            
            if (not(zmm9[0] <= zmm2[0]))
                zmm9 = zmm2
            
            if (not(zmm6[0] >= zmm0[0]))
                zmm6 = zmm0
            
            if (not(zmm5[0] >= zmm1[0]))
                zmm5 = zmm1
            
            if (not(zmm4[0] >= zmm2[0]))
                zmm4 = zmm2
        
        rax_2 += 0x24
        i = i_1
        i_1 -= 1
    while (i != 1)

zmm4[0] = zmm4[0] - zmm9[0]
zmm6[0] = zmm6[0] - zmm7[0]
zmm5[0] = zmm5[0] - zmm8[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm5[0] = zmm5[0] + zmm8[0]
zmm4[0] = zmm4[0] * 0.5f
zmm4[0] = zmm4[0] + zmm9[0]
zmm6[0] = zmm6[0] * 0.5f
float var_a0_1 = zmm4[0]
zmm5[0] = zmm5[0] * 0.5f
zmm6[0] = zmm6[0] * 0.5f
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm6, zmm5[0].q)).q
*(arg2 + 0x14) = var_a0_1
zmm5[0] = zmm5[0] * 0.5f
zmm4[0] = zmm4[0] * 0.5f
*arg2 = (_mm_unpacklo_ps(zmm6, zmm5[0].q)).q
arg2[1].d = zmm4[0]
zmm0 = arg2[2].d
zmm2 = *(arg2 + 0xc)
zmm1 = *(arg2 + 0x14)
zmm0[0] = zmm0[0] * zmm0[0]
zmm2[0] = zmm2[0] * zmm2[0]
zmm1[0] = zmm1[0] * zmm1[0]
zmm2[0] = zmm2[0] + zmm0[0]
zmm2[0] = zmm2[0] + zmm1[0]
arg2[3].d = _mm_sqrt_ss(0, zmm2[0])[0]
return arg2
