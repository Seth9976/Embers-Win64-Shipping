// 函数: sub_14226e8e0
// 地址: 0x14226e8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
float var_20

if (0f f!= *(arg1 + 0x204))
    var_28 = *(arg1 + 0x208)
    var_20 = *(arg1 + 0x210)
else
    float zmm4[0x4] = data_142d4cc00
    float zmm5[0x4] = *(arg1 + 0x1c0)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), temp0_2)
    float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), temp0_1)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_8[0x4] = _mm_sub_ps(temp0_6, temp0_4)
    float temp0_9[0x4] = _mm_add_ps(temp0_8, temp0_8)
    float temp0_10[0x4] = _mm_mul_ps(temp0_7, temp0_9)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd2)
    float zmm2[0x4] = *(arg1 + 0x1d0)
    float temp0_13[0x4] = _mm_mul_ps(temp0_11, temp0_2)
    float temp0_14[0x4] = _mm_add_ps(temp0_10, zmm4)
    float temp0_17[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_12, temp0_1), temp0_13), temp0_14)
    temp0_17[0] = temp0_17[0] f* *(arg1 + 0x1f8)
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)
    temp0_18[0] = temp0_18[0] f* *(arg1 + 0x1f8)
    zmm2[0] = zmm2[0] + temp0_17[0]
    float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
    temp0_19[0] = temp0_19[0] f* *(arg1 + 0x1f8)
    float temp0_20[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float temp0_21[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    temp0_20[0] = temp0_20[0] + temp0_18[0]
    temp0_21[0] = temp0_21[0] + temp0_19[0]
    var_28.d = zmm2[0]
    var_28:4.d = temp0_20[0]
    var_20 = temp0_21[0]

*arg2 = var_28
arg2[1].d = var_20
return arg2
