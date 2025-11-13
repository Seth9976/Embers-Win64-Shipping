// 函数: sub_1416f53c0
// 地址: 0x1416f53c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x3f800000
arg1[1].d = 0
arg1[3].d = 0x7f7fffff
float zmm4[0x4] = *arg3
float zmm6[0x4] = *(arg4 + 0x10)
float temp0_3[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg2 + 0x10), (*(arg2 + 0x18))[0].q), 
        _mm_unpacklo_ps(*(arg2 + 0x14), 0)[0].q), 
    arg3[2])
float temp0_4[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_5)
float temp0_11[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_4), temp0_8)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_6, temp0_12)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_5)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_3)
float zmm5[0x4] = *arg5
float temp0_18[0x4] = _mm_unpacklo_ps(*(arg4 + 0x14), 0)
float temp0_19[0x4] = _mm_mul_ps(temp0_16, temp0_4)
float temp0_20[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_21[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_22[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
float temp0_23[0x4] = _mm_sub_ps(temp0_19, temp0_15)
float temp0_26[0x4] = __mulps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, (*(arg4 + 0x18))[0].q), temp0_18[0].q), arg5[2])
float temp0_27[0x4] = _mm_add_ps(temp0_23, temp0_17)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xc9)
float temp0_29[0x4] = __addps_xmmps_memps(temp0_27, arg3[1])
float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xd2)
float temp0_31[0x4] = _mm_mul_ps(temp0_28, temp0_21)
float temp0_33[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_30, temp0_20), temp0_31)
float temp0_34[0x4] = _mm_add_ps(temp0_33, temp0_33)
float temp0_35[0x4] = _mm_mul_ps(temp0_22, temp0_34)
float temp0_36[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xc9)
float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xd2), temp0_20)
float temp0_39[0x4] = _mm_add_ps(temp0_35, temp0_26)
float temp0_40[0x4] = _mm_mul_ps(temp0_36, temp0_21)
float temp0_41[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)
float temp0_44[0x4] =
    __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_38, temp0_40), temp0_39), arg5[1])
temp0_29[0] = temp0_29[0] - temp0_44[0]
float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x55)
temp0_41[0] = temp0_41[0] - temp0_45[0]
float temp0_46[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xaa)
temp0_29[0] = temp0_29[0] * temp0_29[0]
float temp0_47[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)
temp0_47[0] = temp0_47[0] - temp0_46[0]
temp0_41[0] = temp0_41[0] * temp0_41[0]
temp0_41[0] = temp0_41[0] + temp0_29[0]
temp0_47[0] = temp0_47[0] * temp0_47[0]
temp0_41[0] = temp0_41[0] + temp0_47[0]
float zmm1[0x4] = *(arg4 + 0x1c)
zmm1[0] = zmm1[0] f+ *(arg2 + 0x1c)
float temp0_48[0x4] = _mm_sqrt_ss(0, temp0_41[0])
bool cond:0 = temp0_48[0] <= 9.99999994e-09f
temp0_48[0] = temp0_48[0] - zmm1[0]
arg1[3].d = temp0_48[0]
int64_t var_58
float var_50
float zmm2[0x4]

if (cond:0)
    var_50 = 1f
    var_58 = 0
else
    zmm2 = 0x3f800000
    zmm2[0] = 1f / temp0_48[0]
    zmm2[0] = zmm2[0] * temp0_29[0]
    zmm2[0] = zmm2[0] * temp0_41[0]
    zmm2[0] = zmm2[0] * temp0_47[0]
    var_58.d = zmm2[0]
    var_58:4.d = zmm2[0]
    var_50 = zmm2[0]

*arg1 = var_58
arg1[1].d = var_50
zmm2 = *(arg2 + 0x1c)
zmm2[0] = zmm2[0] f* *arg1
zmm2[0] = zmm2[0] f* *(arg1 + 4)
zmm2[0] = zmm2[0] f* arg1[1].d
temp0_29[0] = temp0_29[0] - zmm2[0]
temp0_41[0] = temp0_41[0] - zmm2[0]
temp0_47[0] = temp0_47[0] - zmm2[0]
*(arg1 + 0xc) = (_mm_unpacklo_ps(temp0_29, temp0_41[0].q)).q
*(arg1 + 0x14) = temp0_47[0]
return arg1
