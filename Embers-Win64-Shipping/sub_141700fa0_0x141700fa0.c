// 函数: sub_141700fa0
// 地址: 0x141700fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm3
int32_t var_e0 = zmm3
int64_t var_b0
float zmm9[0x4]
uint128_t zmm10
float zmm11[0x4]
zmm9, zmm10, zmm11 = sub_141553620(&var_b0, *(arg1 + 0xb0), arg2, *(arg1 + 0xb8), arg3)
uint128_t zmm1 = zx.o(var_b0)
int32_t var_98
*(arg1 + 0x9c) = var_98.d
int32_t var_a4
*(arg1 + 0x90) = var_a4.q
int32_t var_9c
float temp0[0x4] = _mm_unpacklo_ps(var_a4, var_9c.q)
*(arg1 + 0x84) = zmm1.q
int32_t var_a0
float temp0_2[0x4] = _mm_unpacklo_ps(temp0, _mm_unpacklo_ps(var_a0, 0)[0].q)
int32_t var_a8
*(arg1 + 0x8c) = var_a8
*(arg1 + 0x98) = var_9c
float zmm6[0x4] = arg2[2]
float temp0_3[0x4] = __subps_xmmps_memps(temp0_2, arg2[1])
float temp0_4[0x4] = __mulps_xmmps_memps(*arg2, data_143ef7590)
int64_t* var_c0 = nullptr
float temp0_5[0x4] = _mm_rcp_ps(zmm6)
int32_t result_3 = 0
float zmm8[0x4] = __andps_xmmxud_memxud(temp0_3, data_143ef7300)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc9)
zmm1 = _mm_shuffle_ps(temp0_4, temp0_4, 0xd2)
float temp0_9[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xd2)
uint128_t zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), zmm1)
float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_7)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
float temp0_14[0x4] = _mm_sub_ps(temp0_12, zmm0)
zmm0 = _mm_mul_ps(temp0_5, temp0_5)
float temp0_16[0x4] = _mm_add_ps(temp0_5, temp0_5)
float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_14)
zmm0 = _mm_mul_ps(zmm0, zmm6)
float temp0_19[0x4] = _mm_mul_ps(temp0_13, temp0_17)
float temp0_20[0x4] = _mm_sub_ps(temp0_16, zmm0)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd2), temp0_7)
float temp0_23[0x4] = _mm_add_ps(temp0_19, zmm8)
zmm0 = _mm_mul_ps(temp0_20, temp0_20)
float temp0_25[0x4] = _mm_add_ps(temp0_20, temp0_20)
zmm0 = _mm_mul_ps(zmm0, zmm6)
float temp0_28[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143ef7580), data_143ef7570, 2)
float temp0_29[0x4] = _mm_sub_ps(temp0_25, zmm0)
float temp0_33[0x4] = _mm_add_ps(
    _mm_sub_ps(temp0_22, _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc9), zmm1)), temp0_23)
int64_t* rcx_1 = *(arg1 + 0xb0)
float temp0_35[0x4] = _mm_mul_ps(temp0_33, _mm_and_ps(temp0_28, zx.o(0) ^ temp0_29) ^ temp0_29)
int32_t var_c4 = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa).d
uint64_t var_d8 = (_mm_unpacklo_ps(temp0_35, _mm_shuffle_ps(temp0_35, temp0_35, 0x55).q)).q
int32_t var_d0 = var_c4
int64_t result = (*(*rcx_1 + 0x50))(rcx_1, &var_d8, &var_c0, 0x3f800000)
int64_t* rbx_1

if (result.d != *(arg1 + 0xdc) || *(arg1 + 0x130) == 0)
    uint128_t zmm5_1 = var_b0:4.d
    float zmm4_1[0x4] = var_b0.d
    zmm6 = var_a8
    zmm1 = _mm_unpacklo_ps(zmm5_1, 0)
    float zmm2[0x4] = var_a0
    float temp0_41[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4_1, zmm6[0].q), zmm1.q)
    zmm0 = _mm_shuffle_ps(temp0_41, temp0_41, 0xc9)
    zmm1 = _mm_shuffle_ps(temp0_41, temp0_41, 0xd2)
    float var_58_1[0x4] = zmm9
    uint128_t var_68_1 = zmm10
    float var_78_1[0x4] = zmm11
    float temp0_44[0x4] = __mulps_xmmps_memps(*arg3, data_143ef7590)
    float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xc9)
    zmm1 = _mm_mul_ps(zmm1, temp0_45)
    float temp0_47[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xd2)
    zmm0 = _mm_mul_ps(zmm0, temp0_47)
    float temp0_49[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xff)
    zmm1 = _mm_sub_ps(zmm1, zmm0)
    zmm1 = _mm_add_ps(zmm1, zmm1)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), temp0_47)
    zmm10 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), temp0_45), zmm0)
    zmm0 = _mm_mul_ps(temp0_49, zmm1)
    zmm1 = var_98
    zmm5_1.d = zmm5_1.d f* zmm1.d
    zmm0 = _mm_add_ps(zmm0, temp0_41)
    zmm4_1[0] = zmm4_1[0] f* zmm1.d
    float zmm3_1[0x4] = var_a4
    zmm2[0] = zmm2[0] f- zmm5_1.d
    zmm6[0] = zmm6[0] f* zmm1.d
    zmm3_1[0] = zmm3_1[0] - zmm4_1[0]
    zmm4_1 = arg3[2]
    zmm10 = _mm_add_ps(zmm10, zmm0)
    float temp0_60[0x4] = _mm_unpacklo_ps(zmm2, 0)
    int32_t var_c4_1 = _mm_shuffle_ps(zmm10, zmm10, 0xaa).d
    zmm0.d = var_9c.d f- zmm6[0]
    float temp0_62[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
    zmm5_1 = __subps_xmmps_memps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0.q), temp0_60[0].q), 
        arg3[1])
    float temp0_66[0x4] = _mm_rcp_ps(zmm4_1)
    zmm5_1 = __andps_xmmxud_memxud(zmm5_1, data_143ef7300)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), temp0_47)
    zmm1 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), temp0_45), zmm0)
    zmm0 = _mm_mul_ps(temp0_66, temp0_66)
    float temp0_74[0x4] = _mm_add_ps(temp0_66, temp0_66)
    zmm1 = _mm_add_ps(zmm1, zmm1)
    float temp0_77[0x4] = _mm_sub_ps(temp0_74, _mm_mul_ps(zmm0, zmm4_1))
    zmm0 = _mm_mul_ps(temp0_77, temp0_77)
    float temp0_81[0x4] = _mm_sub_ps(_mm_add_ps(temp0_77, temp0_77), _mm_mul_ps(zmm0, zmm4_1))
    float temp0_83[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm4_1, data_143ef7580), data_143ef7570, 2)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc9), temp0_47)
    *(arg1 + 0xdc) = result.d
    float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), temp0_45)
    *(arg1 + 0xd8) = 1
    zmm1 = _mm_mul_ps(zmm1, temp0_49)
    float temp0_89[0x4] = _mm_sub_ps(temp0_87, zmm0)
    zmm4_1 = _mm_and_ps(temp0_83, temp0_81 ^ zx.o(0))
    float temp0_93[0x4] =
        _mm_mul_ps(_mm_add_ps(temp0_89, _mm_add_ps(zmm1, zmm5_1)), zmm4_1 ^ temp0_81)
    int32_t var_d0_1 = _mm_shuffle_ps(temp0_93, temp0_93, 0xaa).d
    *(arg1 + 0xe0) = (_mm_unpacklo_ps(zmm10, temp0_62[0].q)).q
    *(arg1 + 0xe8) = var_c4_1
    *(arg1 + 0xec) = (_mm_unpacklo_ps(temp0_93, _mm_shuffle_ps(temp0_93, temp0_93, 0x55)[0].q)).q
    *(arg1 + 0xf4) = var_d0_1
    *(arg1 + 0x130) = 0
    int32_t result_1 = result_3
    
    if (result_1 s> *(arg1 + 0x134))
        sub_141750700(arg1 + 0xf8, result_1)
        result_1 = result_3
    
    rbx_1 = var_c0
    result = sx.q(result_1)
    void* r15_1 = rbx_1 + result * 0xc
    
    if (rbx_1 != r15_1)
        do
            int64_t rsi_1 = sx.q(*(arg1 + 0x130))
            zmm6 = zx.o(*rbx_1)
            int32_t r14_1 = rbx_1[1].d
            int32_t rax_6 = (rsi_1 + 1).d
            *(arg1 + 0x130) = rax_6
            
            if (rax_6 s> *(arg1 + 0x134))
                sub_140775760(arg1 + 0xf8, rsi_1.d)
            
            result = *(arg1 + 0x128)
            int64_t rcx_5 = rsi_1 * 3
            void* result_2 = arg1 + 0xf8
            
            if (result != 0)
                result_2 = result
            
            rbx_1 += 0xc
            *(result_2 + (rcx_5 << 2)) = zmm6.q
            *(result_2 + (rcx_5 << 2) + 8) = r14_1
        while (rbx_1 != r15_1)
        
        rbx_1 = var_c0
else
    rbx_1 = var_c0

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
