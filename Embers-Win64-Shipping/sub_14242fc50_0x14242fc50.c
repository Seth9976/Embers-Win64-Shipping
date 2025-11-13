// 函数: sub_14242fc50
// 地址: 0x14242fc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = (*(arg1 + 0x204)).b
int64_t* result = j_sub_140a82f30(0x30)
float zmm2[0x4]
float zmm4[0x4]

if ((rbx & 1) == 0)
    if (result != 0)
        float zmm5[0x4] = *(arg1 + 0x1c0)
        zmm4 = data_142d4cc00
        float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), temp0_4)
        float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), temp0_3)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float temp0_10[0x4] = _mm_sub_ps(temp0_8, temp0_6)
        float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
        float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_11)
        float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_4)
        float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
        float temp0_16[0x4] = _mm_add_ps(temp0_12, zmm4)
        zmm2 = *(arg1 + 0x1f0)
        float temp0_19[0x4] =
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_15, temp0_3), temp0_14), temp0_16)
        float var_30_1 = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)[0]
        *result = data_143dbb1f8.q
        result[1].d = data_143dbb200
        *(result + 0xc) =
            (_mm_unpacklo_ps(temp0_19, _mm_shuffle_ps(temp0_19, temp0_19, 0x55)[0].q)).q
        *(result + 0x14) = var_30_1
        *(result + 0x18) = zmm2
        result[5].d = 0
        *(result + 0x2c) = 0
        return result
else if (result != 0)
    zmm4 = *(arg1 + 0x1d0)
    zmm2 = *(arg1 + 0x1f0)
    int128_t zmm7 = *(arg1 + 0x200)
    float var_30 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)[0]
    *result = (_mm_unpacklo_ps(zmm4, _mm_shuffle_ps(zmm4, zmm4, 0x55)[0].q)).q
    result[1].d = var_30
    *(result + 0xc) = data_143dbb1f8.q
    result[5].d = zmm7.d
    *(result + 0x14) = data_143dbb200
    *(result + 0x18) = zmm2
    *(result + 0x2c) = 1
    return result
return 0
