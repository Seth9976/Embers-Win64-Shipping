// 函数: sub_1421c6e90
// 地址: 0x1421c6e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm9[0x4] = arg4
void* r8 = *(arg2 + 0x28)
void* result

if ((*(arg1 + 0x30) & 1) == 0 || (*(*(r8 + 0x30) + 0x59) & 1) == 0)
    int32_t rax_3 = *(arg1 + 0x40)
    int64_t var_68_1 = *(arg1 + 0x38)
    float zmm2[0x4]
    float zmm4[0x4]
    
    if ((*(*(r8 + 0x30) + 0x59) & 1) == 0)
        zmm4 = rax_3
        arg4 = var_68_1:4.d
        zmm2 = var_68_1.d
    else
        int32_t var_5c_1 = 0
        zmm4 = var_68_1.o
        zmm4[0] = var_68_1.d[0]
        int64_t var_58_1 = 0
        float temp0_37[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
        temp0_37[0] = var_68_1:4.d[0]
        int32_t var_50_1 = 0
        float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc6)
        temp0_38[0] = rax_3[0]
        float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc9)
        float temp0_41[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_39, temp0_39, 0xff), *(arg2 + 0x90))
        float temp0_43[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_39, temp0_39, 0x55), *(arg2 + 0x70))
        float temp0_45[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_39, temp0_39, 0xaa), *(arg2 + 0x80))
        float temp0_47[0x4] =
            __mulps_xmmps_memps(_mm_shuffle_ps(temp0_39, temp0_39, 0), *(arg2 + 0x60))
        zmm2 = _mm_add_ps(_mm_add_ps(temp0_41, temp0_45), _mm_add_ps(temp0_43, temp0_47))
        arg4 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        zmm4 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    
    result = arg5
    zmm2[0] = zmm2[0] * zmm9[0]
    zmm4[0] = zmm4[0] * zmm9[0]
    arg4[0] = arg4[0] * zmm9[0]
    zmm2[0] = zmm2[0] f+ *(result + 0x30)
    arg4[0] = arg4[0] f+ *(result + 0x34)
    *(result + 0x30) = zmm2[0]
    zmm4[0] = zmm4[0] f+ *(result + 0x38)
    *(result + 0x34) = arg4[0]
    *(result + 0x38) = zmm4[0]
    zmm2[0] = zmm2[0] f+ *(result + 0x20)
    zmm4[0] = zmm4[0] f+ *(result + 0x28)
    *(result + 0x20) = zmm2[0]
    *(result + 0x28) = zmm4[0]
else
    void* rax_2 = *(arg2 + 0x18)
    float zmm0[0x4] = *(arg1 + 0x40)
    float temp0_1[0x4] = _mm_unpacklo_ps(*(arg1 + 0x3c), 0)
    float zmm5[0x4] = *(rax_2 + 0x1e0)
    float temp0_2[0x4] = __mulps_xmmps_memps(*(rax_2 + 0x1c0), data_143f4eb20)
    result = arg5
    float temp0_3[0x4] = _mm_rcp_ps(zmm5)
    float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg1 + 0x38), zmm0[0].q), temp0_1[0].q)
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xd2)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_6)
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_9)
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xff)
    float temp0_13[0x4] = _mm_sub_ps(temp0_11, temp0_8)
    float temp0_14[0x4] = _mm_mul_ps(temp0_3, temp0_3)
    float temp0_15[0x4] = _mm_add_ps(temp0_3, temp0_3)
    float temp0_16[0x4] = _mm_add_ps(temp0_13, temp0_13)
    float temp0_17[0x4] = _mm_mul_ps(temp0_14, zmm5)
    float temp0_18[0x4] = _mm_mul_ps(temp0_12, temp0_16)
    float temp0_19[0x4] = _mm_sub_ps(temp0_15, temp0_17)
    float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xd2), temp0_9)
    float temp0_22[0x4] = _mm_add_ps(temp0_18, temp0_5)
    float temp0_23[0x4] = _mm_mul_ps(temp0_19, temp0_19)
    float temp0_24[0x4] = _mm_add_ps(temp0_19, temp0_19)
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm5)
    float temp0_27[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm5, data_143f4dee0), data_143f4eb10, 2)
    float temp0_28[0x4] = _mm_sub_ps(temp0_24, temp0_25)
    float temp0_31[0x4] =
        _mm_sub_ps(temp0_21, _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0xc9), temp0_6))
    zmm5 = _mm_and_ps(temp0_27, temp0_28 ^ zx.o(0)) ^ temp0_28
    float temp0_34[0x4] = _mm_mul_ps(_mm_add_ps(temp0_31, temp0_22), zmm5)
    arg4 = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)
    temp0_36[0] = temp0_36[0] * zmm9[0]
    temp0_34[0] = temp0_34[0] * zmm9[0]
    arg4[0] = arg4[0] * zmm9[0]
    temp0_34[0] = temp0_34[0] f+ *(result + 0x30)
    arg4[0] = arg4[0] f+ *(result + 0x34)
    *(result + 0x30) = temp0_34[0]
    temp0_36[0] = temp0_36[0] f+ *(result + 0x38)
    *(result + 0x34) = arg4[0]
    *(result + 0x38) = temp0_36[0]
    temp0_36[0] = temp0_36[0] f+ *(result + 0x28)
    temp0_34[0] = temp0_34[0] f+ *(result + 0x20)
    *(result + 0x28) = temp0_36[0]
    *(result + 0x20) = temp0_34[0]

arg4[0] = arg4[0] f+ *(result + 0x24)
*(result + 0x24) = arg4[0]
return result
