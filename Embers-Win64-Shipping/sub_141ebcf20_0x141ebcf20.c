// 函数: sub_141ebcf20
// 地址: 0x141ebcf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_c8
float zmm10[0x4]
float zmm11[0x4]
float zmm12[0x4]
int128_t zmm13
int128_t zmm14
float zmm15[0x4]
zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 = sub_141ebb170(arg1, &var_c8, arg3)
int32_t rax = *(arg1 + 8)
float result
int32_t var_c4
int32_t var_c0
int32_t var_bc
int32_t var_b8
int32_t var_b4
float zmm0_1[0x4]
float zmm1_1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
float zmm9_1[0x4]

if (rax == 0)
    if (*(arg1 + 0x28) != rax || *(arg1 + 0x18) != rax)
        goto label_141ebd25f
    
    zmm3 = var_c8
    zmm7_1 = zx.o(0)
    zmm4 = var_c4
    zmm8_1 = zmm3
    zmm2 = var_c0
    zmm9_1 = zmm4
    zmm1_1 = var_b8
    int64_t i_1 = sx.q(*(arg1 + 0x38))
    zmm9_1[0] = zmm9_1[0] + zmm1_1[0]
    float var_58_1[0x4] = zmm10
    zmm10 = zmm2
    int128_t var_88_1 = zmm13
    int128_t var_98_1 = zmm14
    zmm14 = var_b4
    float var_a8_1[0x4] = zmm15
    zmm10[0] = zmm10[0] f+ zmm14.d
    zmm15 = var_bc
    zmm9_1[0] = zmm9_1[0] * 0.5f
    zmm8_1[0] = zmm8_1[0] + zmm15[0]
    zmm10[0] = zmm10[0] * 0.5f
    zmm8_1[0] = zmm8_1[0] * 0.5f
    
    if (i_1 s> 0)
        float var_68_1[0x4] = zmm11
        int64_t* rax_2 = *(arg1 + 0x30) + 0x30
        float var_78_1[0x4] = zmm12
        int64_t i
        
        do
            int64_t j_1 = sx.q(rax_2[1].d)
            
            if (j_1 s> 0)
                zmm4 = *arg3
                zmm11 = arg3[2]
                zmm12 = arg3[1]
                void* rdx_1 = *rax_2
                float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                float temp0_3[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                int64_t j
                
                do
                    zmm0_1 = *(rdx_1 + 8)
                    zmm2 = *(rdx_1 + 4)
                    zmm3 = *rdx_1
                    rdx_1 += 0xc
                    float temp0_4[0x4] = _mm_unpacklo_ps(zmm2, 0)
                    float temp0_7[0x4] = _mm_mul_ps(
                        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1[0].q), temp0_4[0].q), zmm11)
                    float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
                    float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xd2)
                    float temp0_10[0x4] = _mm_mul_ps(temp0_8, temp0_2)
                    float temp0_12[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_9, temp0_1), temp0_10)
                    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
                    float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xc9)
                    float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
                    float temp0_16[0x4] = _mm_mul_ps(temp0_14, temp0_2)
                    float temp0_22[0x4] = _mm_add_ps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_15, temp0_1), temp0_16), 
                            _mm_add_ps(_mm_mul_ps(temp0_3, temp0_13), temp0_7)), 
                        zmm12)
                    float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0x55)
                    temp0_22[0] = temp0_22[0] - zmm8_1[0]
                    float temp0_24[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)
                    temp0_23[0] = temp0_23[0] - zmm9_1[0]
                    temp0_24[0] = temp0_24[0] - zmm10[0]
                    temp0_22[0] = temp0_22[0] * temp0_22[0]
                    temp0_23[0] = temp0_23[0] * temp0_23[0]
                    temp0_24[0] = temp0_24[0] * temp0_24[0]
                    temp0_23[0] = temp0_23[0] + temp0_22[0]
                    temp0_23[0] = temp0_23[0] + temp0_24[0]
                    zmm7_1 = _mm_max_ss(temp0_23[0], zmm7_1[0])
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            rax_2 = &rax_2[0x16]
            i = i_1
            i_1 -= 1
        while (i != 1)
        zmm1_1 = var_b8
        zmm2 = var_c0
        zmm3 = var_c8
        zmm4 = var_c4
    
    zmm15[0] = zmm15[0] - zmm3[0]
    zmm14.d = zmm14.d f- zmm2[0]
    zmm1_1[0] = zmm1_1[0] - zmm4[0]
    zmm15[0] = zmm15[0] * 0.5f
    zmm14.d = zmm14.d f* 0.5f
    zmm1_1[0] = zmm1_1[0] * 0.5f
    *(arg2 + 0xc) = (_mm_unpacklo_ps(zmm15, zmm1_1[0].q)).q
    *(arg2 + 0x14) = zmm14.d
    zmm3[0] = zmm3[0] f+ *(arg2 + 0xc)
    zmm4[0] = zmm4[0] f+ arg2[2].d
    zmm2[0] = zmm2[0] f+ *(arg2 + 0x14)
    *arg2 = (_mm_unpacklo_ps(zmm3, zmm4[0].q)).q
    float temp0_28[0x4] = _mm_sqrt_ss(0, zmm7_1[0])
    result = zmm2[0]
    arg2[3].d = temp0_28[0]
    arg2[1].d = result
else
    float zmm5_1[0x4]
    float zmm6_1[0x4]
    
    if (rax != 1 || *(arg1 + 0x28) != 0 || *(arg1 + 0x18) != 0 || *(arg1 + 0x38) != 0)
    label_141ebd25f:
        zmm9_1 = var_bc
        zmm6_1 = var_c8
        zmm8_1 = var_b8
        zmm9_1[0] = zmm9_1[0] - zmm6_1[0]
        zmm7_1 = var_b4
        zmm4 = var_c0
        zmm5_1 = var_c4
        zmm7_1[0] = zmm7_1[0] - zmm4[0]
        zmm8_1[0] = zmm8_1[0] - zmm5_1[0]
        zmm9_1[0] = zmm9_1[0] * zmm9_1[0]
        zmm9_1[0] = zmm9_1[0] * 0.5f
        zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
        zmm7_1[0] = zmm7_1[0] * 0.5f
        zmm6_1[0] = zmm6_1[0] + zmm9_1[0]
        zmm8_1[0] = zmm8_1[0] * 0.5f
        float var_d0_4 = zmm7_1[0]
        zmm4[0] = zmm4[0] + zmm7_1[0]
        float temp0_31[0x4] = _mm_unpacklo_ps(zmm9_1, zmm8_1[0].q)
        zmm5_1[0] = zmm5_1[0] + zmm8_1[0]
        var_bc.q = temp0_31.q
        zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
        float var_b4_1 = var_d0_4
        float var_d0_5 = zmm4[0]
        zmm9_1[0] = zmm9_1[0] + zmm8_1[0]
        float var_c0_1 = var_d0_5
        zmm1_1 = var_c8.o
        zmm1_1[0].q = (_mm_unpacklo_ps(zmm6_1, zmm5_1[0].q)).q
        zmm9_1[0] = zmm9_1[0] + zmm7_1[0]
        *arg2 = zmm1_1
        zmm9_1[0] = zmm9_1[0] * 0.25f
        result = _mm_sqrt_ss(0, zmm9_1[0])[0]
        arg2[2] = var_b8.q
        arg2[3].d = result
    else
        zmm6_1 = var_c8
        zmm0_1 = var_b4
        zmm4 = var_c0
        zmm3 = var_bc
        zmm0_1[0] = zmm0_1[0] - zmm4[0]
        zmm5_1 = var_c4
        zmm3[0] = zmm3[0] - zmm6_1[0]
        zmm2 = var_b8
        zmm2[0] = zmm2[0] - zmm5_1[0]
        zmm0_1[0] = zmm0_1[0] * 0.5f
        zmm3[0] = zmm3[0] * 0.5f
        float var_d0_2 = zmm0_1[0]
        zmm2[0] = zmm2[0] * 0.5f
        *(arg2 + 0xc) = (_mm_unpacklo_ps(zmm3, zmm2[0].q)).q
        *(arg2 + 0x14) = var_d0_2
        zmm6_1[0] = zmm6_1[0] f+ *(arg2 + 0xc)
        zmm5_1[0] = zmm5_1[0] f+ arg2[2].d
        zmm4[0] = zmm4[0] f+ *(arg2 + 0x14)
        float temp0_30[0x4] = _mm_unpacklo_ps(zmm6_1, zmm5_1[0].q)
        float var_d0_3 = zmm4[0]
        *arg2 = temp0_30.q
        arg2[1].d = var_d0_3
        result = *(arg2 + 0xc)
        arg2[3].d = result
return result
