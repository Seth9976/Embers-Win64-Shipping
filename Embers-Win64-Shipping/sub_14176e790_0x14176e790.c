// 函数: sub_14176e790
// 地址: 0x14176e790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *(arg1 + 0xe0)
int32_t var_6c = 0
arg2[0] = arg2[0] f* *arg3
arg2[0] = arg2[0] f* arg3[1]
arg2[0] = arg2[0] f* arg3[2]
float var_78[0x4]
var_78[0] = arg2[0]
float temp0[0x4] = _mm_shuffle_ps(var_78, var_78, 0xe1)
temp0[0] = arg2[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x1b)
float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
float temp0_3[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_3[0] = arg2[0]
float zmm3[0x4] = *(arg1 + 0xf0)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
float temp0_7[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0_4, temp0_4, 0))
int32_t var_6c_1 = 0
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xff), zmm5)
float temp0_10[0x4] = __mulps_xmmps_memps(temp0_7, data_143ef7c70)
float temp0_11[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
float temp0_12[0x4] = _mm_add_ps(temp0_10, temp0_9)
float temp0_14[0x4] = _mm_mul_ps(temp0_2, _mm_shuffle_ps(temp0_4, temp0_4, 0x55))
arg2[0] = arg2[0] f* *arg4
float temp0_15[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xaa)
float temp0_16[0x4] = __mulps_xmmps_memps(temp0_14, data_143ef7c60)
temp0_4[0] = arg2[0]
float temp0_17[0x4] = _mm_mul_ps(temp0_11, temp0_15)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xe1)
float temp0_19[0x4] = _mm_add_ps(temp0_12, temp0_16)
arg2[0] = arg2[0] f* arg4[1]
arg2[0] = arg2[0] f* arg4[2]
float temp0_20[0x4] = __mulps_xmmps_memps(temp0_17, data_143ef7c50)
temp0_18[0] = arg2[0]
float temp0_21[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0xc6)
float temp0_22[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
temp0_21[0] = arg2[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc9)
float temp0_24[0x4] = _mm_add_ps(temp0_19, temp0_20)
float temp0_26[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_23, temp0_23, 0))
float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xff), zmm3)
float temp0_29[0x4] = __mulps_xmmps_memps(temp0_26, data_143ef7c70)
float temp0_30[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
float temp0_31[0x4] = _mm_add_ps(temp0_29, temp0_28)
float temp0_33[0x4] = _mm_mul_ps(temp0_22, _mm_shuffle_ps(temp0_23, temp0_23, 0x55))
float temp0_35[0x4] = _mm_mul_ps(temp0_30, _mm_shuffle_ps(temp0_23, temp0_23, 0xaa))
float temp0_36[0x4] = __mulps_xmmps_memps(temp0_33, data_143ef7c60)
float temp0_37[0x4] = __mulps_xmmps_memps(temp0_35, data_143ef7c50)
float temp0_39[0x4] = _mm_add_ps(_mm_add_ps(temp0_31, temp0_36), temp0_37)
zmm5 = data_143ef7c40
temp0_24[0] = temp0_24[0] * 0.5f
float temp0_40[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)
float temp0_41[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa)
temp0_24[0] = temp0_24[0] f+ *(arg1 + 0xe0)
temp0_41[0] = temp0_41[0] * 0.5f
temp0_40[0] = temp0_40[0] * 0.5f
temp0_41[0] = temp0_41[0] f+ *(arg1 + 0xe8)
float temp0_42[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xe1)
temp0_40[0] = temp0_40[0] f+ *(arg1 + 0xe4)
float temp0_43[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0xff)
temp0_43[0] = temp0_43[0] * 0.5f
temp0_42[0] = temp0_40[0]
temp0_43[0] = temp0_43[0] f+ *(arg1 + 0xec)
float temp0_44[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xc6)
temp0_44[0] = temp0_41[0]
float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0x27)
temp0_45[0] = temp0_43[0]
float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0x39)
float temp0_47[0x4] = _mm_mul_ps(temp0_46, temp0_46)
float temp0_49[0x4] = _mm_add_ps(temp0_47, _mm_shuffle_ps(temp0_47, temp0_47, 0x4e))
float temp0_51[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_49, temp0_49, 0x39), temp0_49)
float temp0_52[0x4] = _mm_rsqrt_ps(temp0_51)
float temp0_53[0x4] = _mm_mul_ps(temp0_51, zmm5)
float temp0_58[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_52, temp0_52), temp0_53)), temp0_52), 
    temp0_52)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
temp0_59[0] = temp0_59[0] * 0.5f
float temp0_62[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_58, temp0_58), temp0_53))
float temp0_64[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_51, 2)
float temp0_67[0x4] = _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_62, temp0_58), temp0_58), temp0_46)
temp0_39[0] = temp0_39[0] * 0.5f
zmm5 = _mm_and_ps(temp0_67 ^ data_143ef7c30, temp0_64) ^ data_143ef7c30
float temp0_69[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xaa)
*(arg1 + 0xe0) = zmm5
temp0_39[0] = temp0_39[0] f+ *(arg1 + 0xf0)
temp0_59[0] = temp0_59[0] f+ *(arg1 + 0xf4)
float temp0_70[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xff)
temp0_69[0] = temp0_69[0] * 0.5f
float temp0_71[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xe1)
temp0_71[0] = temp0_59[0]
temp0_70[0] = temp0_70[0] * 0.5f
temp0_69[0] = temp0_69[0] f+ *(arg1 + 0xf8)
float temp0_72[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0xc6)
temp0_70[0] = temp0_70[0] f+ *(arg1 + 0xfc)
temp0_72[0] = temp0_69[0]
float temp0_73[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x27)
temp0_73[0] = temp0_70[0]
float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0x39)
float temp0_75[0x4] = _mm_mul_ps(temp0_74, temp0_74)
zmm5 = data_143ef7c40
float temp0_77[0x4] = _mm_add_ps(temp0_75, _mm_shuffle_ps(temp0_75, temp0_75, 0x4e))
float temp0_79[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_77, temp0_77, 0x39), temp0_77)
float temp0_80[0x4] = _mm_rsqrt_ps(temp0_79)
float temp0_81[0x4] = _mm_mul_ps(temp0_79, zmm5)
float temp0_86[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_80, temp0_80), temp0_81)), temp0_80), 
    temp0_80)
float temp0_89[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_86, temp0_86), temp0_81))
float temp0_91[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_79, 2)
zmm5 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_89, temp0_86), temp0_86), temp0_74) ^ data_143ef7c30, 
    temp0_91) ^ data_143ef7c30
*(arg1 + 0xf0) = zmm5
float zmm0[0x4] = *(arg1 + 0xf0)
zmm0[0] = zmm0[0] f* *(arg1 + 0xe0)
arg2 = *(arg1 + 0xf8)
arg2[0] = arg2[0] f* *(arg1 + 0xe8)
float temp0_96[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
temp0_96[0] = temp0_96[0] f* *(arg1 + 0xe4)
temp0_96[0] = temp0_96[0] + zmm0[0]
zmm0 = *(arg1 + 0xfc)
zmm0[0] = zmm0[0] f* *(arg1 + 0xec)
temp0_96[0] = temp0_96[0] + arg2[0]
temp0_96[0] = temp0_96[0] + zmm0[0]

if (temp0_96[0] < 0f)
    zmm0 = 0xbf800000
else
    zmm0 = 0x3f800000

*(arg1 + 0xf0) = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm5)
