// 函数: sub_1415340b0
// 地址: 0x1415340b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* result)[0x4]
float zmm6[0x4]
float zmm7
result, zmm6, zmm7 =
    sub_1416f6170(*arg1, arg2, arg1[1], arg1[2], *arg1[3], arg1[4], arg1[5], arg1[6], arg1[7], 0, 1)

if (result.b != 0)
    int128_t* rax_1 = arg1[5]
    int128_t* rcx_1 = arg1[9]
    float var_18_1[0x4] = zmm6
    float zmm5_1[0x4] = *rcx_1
    float temp0_4[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(*rax_1, (*(rax_1 + 8))[0].q), 
            _mm_unpacklo_ps(*(rax_1 + 4), 0)[0].q), 
        rcx_1[2])
    float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
    float temp0_12[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_6), temp0_9)
    float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
    float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
    float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_5)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
    float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_4)
    float temp0_22[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_17, temp0_6), temp0_16), temp0_18), rcx_1[1])
    void* rcx_2 = arg1[8]
    float var_30_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
    *(rcx_2 + 0xc) = (_mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0].q)).q
    *(rcx_2 + 0x14) = var_30_1
    float (* rax_3)[0x4] = arg1[6]
    float zmm0_1[0x4] = (*rax_3)[2]
    zmm6 = *rax_3
    float (* rax_4)[0x4] = arg1[9]
    float temp0_26[0x4] = _mm_unpacklo_ps((*rax_3)[1], 0)
    float temp0_28[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm0_1[0].q), temp0_26[0].q)
    zmm5_1 = *rax_4
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xc9)
    float temp0_30[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_31[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_32[0x4] = _mm_mul_ps(temp0_29, temp0_31)
    float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_30)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_36[0x4] = _mm_sub_ps(temp0_34, temp0_32)
    float temp0_37[0x4] = _mm_add_ps(temp0_36, temp0_36)
    float temp0_38[0x4] = _mm_mul_ps(temp0_35, temp0_37)
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xd2)
    float temp0_41[0x4] = _mm_mul_ps(temp0_39, temp0_31)
    float temp0_42[0x4] = _mm_mul_ps(temp0_40, temp0_30)
    float temp0_43[0x4] = _mm_add_ps(temp0_38, temp0_28)
    float temp0_45[0x4] = _mm_add_ps(_mm_sub_ps(temp0_42, temp0_41), temp0_43)
    int64_t* rcx_3 = arg1[8]
    float var_30_2 = _mm_shuffle_ps(temp0_45, temp0_45, 0xaa)[0]
    *rcx_3 = (_mm_unpacklo_ps(temp0_45, _mm_shuffle_ps(temp0_45, temp0_45, 0x55)[0].q)).q
    rcx_3[1].d = var_30_2
    float (* r9_2)[0x4] = arg1[4]
    result = arg1[8]
    float* rdx = arg1[0xb]
    int32_t* r8_2 = arg1[3]
    float zmm3_1[0x4] = *r9_2
    int32_t* rcx_4 = arg1[0xa]
    
    if (not(zmm3_1[0] < zmm7))
        zmm0_1 = *result
        zmm0_1[0] = zmm0_1[0] f* *rcx_4
        float zmm2_1[0x4] = (*result)[1]
        zmm2_1[0] = zmm2_1[0] f* rcx_4[1]
        float zmm1_1[0x4] = (*result)[2]
        zmm1_1[0] = zmm1_1[0] f* rcx_4[2]
        zmm3_1[0] = zmm3_1[0] f- *r8_2
        zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
        zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
        zmm2_1 = __andps_xmmxud_memxud(zmm2_1, data_142d3f770)
        zmm2_1[0] = zmm2_1[0] * zmm3_1[0]
        (*result)[6] = zmm2_1[0]
        zmm0_1 = *r9_2
        zmm0_1[0] = zmm0_1[0] f/ *r8_2
        *rdx = zmm0_1[0]
        return result
    
    (*result)[6] = zmm3_1[0]
    *rdx = 0f

return result
