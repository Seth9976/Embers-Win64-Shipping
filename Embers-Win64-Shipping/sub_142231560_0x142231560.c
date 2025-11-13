// 函数: sub_142231560
// 地址: 0x142231560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = &data_142e3e610
arg2[1].d = *(arg1 + 8)
*(arg2 + 0xc) = *(arg1 + 0xc)
*(arg2 + 0x14) = *(arg1 + 0x14)
arg2[3].b ^= (*(arg1 + 0x18) ^ arg2[3].b) & 1
arg2[4].d = 6
arg2[5] = arg2
*arg2 = &data_143273288
arg2[6] = *(arg1 + 0x30)
arg2[7].d = *(arg1 + 0x38)
*(arg2 + 0x3c) = *(arg1 + 0x3c)
*(arg2 + 0x44) = *(arg1 + 0x44)
arg2[9].d = *(arg1 + 0x48)
*(arg2 + 0x4c) = *(arg1 + 0x4c)
float zmm1[0x4] = arg4[2]
float zmm4[0x4] = zmm1
zmm4[0] = zmm4[0] f* *arg3
float zmm2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
zmm2[0] = zmm2[0] f* arg3[1]
zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
zmm1[0] = zmm1[0] f* arg3[2]
int32_t rax_7

if (_mm_and_ps(zmm4, 0x7fffffff).d f> 9.99999975e-05f)
    rax_7.b = 0
else if (_mm_and_ps(zmm2, 0x7fffffff).d f> 9.99999975e-05f)
    rax_7.b = 0
else if (_mm_and_ps(zmm1, 0x7fffffff).d f> 9.99999975e-05f)
    rax_7.b = 0
else
    rax_7.b = 1

if (rax_7.b != 0)
    zmm4 = 0x3dcccccd
    zmm2 = 0x3dcccccd
    zmm1 = 0x3dcccccd

uint128_t zmm0 = *(arg1 + 0x48)
zmm4 = _mm_and_ps(zmm4, 0x7fffffff)
zmm2 = _mm_and_ps(zmm2, 0x7fffffff)
zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
float temp0_8[0x4] = _mm_max_ss(zmm4[0], zmm2[0])
float zmm5[0x4] = zmm0
zmm5[0] = zmm5[0] * temp0_8[0]

if (zmm5[0] >= 0.100000001f)
    zmm0.d = zmm0.d f+ zmm0.d
    zmm0.d = zmm0.d f+ *(arg1 + 0x4c)
    zmm0.d = zmm0.d f* zmm1[0]
    zmm0.d = zmm0.d f* 0.5f
    zmm0 = _mm_min_ss(_mm_max_ss(zmm0.d, 0x3dcccccd).d, zmm5[0])
else
    zmm0 = 0x3dcccccd

arg2[9].d = zmm0.d
zmm5 = *(arg1 + 0x48)
zmm5[0] = zmm5[0] + zmm5[0]
zmm5[0] = zmm5[0] * temp0_8[0]
bool cond:0 = zmm5[0] >= 0.100000001f
zmm5[0] = zmm5[0] f+ *(arg1 + 0x4c)
zmm5[0] = zmm5[0] * zmm1[0]
zmm5[0] = zmm5[0] * 0.5f
float temp0_11[0x4] = _mm_max_ss(zmm5[0], 0x3dcccccd)

if (cond:0)
    zmm5 = _mm_min_ss(zmm5[0], temp0_11[0])
else
    zmm5 = 0x3dcccccd

temp0_11[0] = temp0_11[0] - zmm5[0]
temp0_11[0] = temp0_11[0] + temp0_11[0]
*(arg2 + 0x4c) = _mm_max_ss(temp0_11[0], 0x3dcccccd)[0]
zmm5 = *arg4
zmm2 = *(arg1 + 0x34)
float temp0_14[0x4] = _mm_unpacklo_ps(*(arg1 + 0x30), (*(arg1 + 0x38)).q)
float temp0_15[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_16[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_18[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_14, temp0_15[0].q), arg4[2])
float temp0_19[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_20[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_16)
float temp0_25[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_19), zmm0)
float temp0_26[0x4] = _mm_add_ps(temp0_25, temp0_25)
float temp0_27[0x4] = _mm_mul_ps(temp0_20, temp0_26)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0xc9), temp0_16)
float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, temp0_26, 0xd2)
float temp0_31[0x4] = _mm_add_ps(temp0_27, temp0_18)
float temp0_35[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_30, temp0_19), zmm0), temp0_31), arg4[1])
zmm0.d = temp0_35.d f* *arg3
float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x55)
temp0_36[0] = temp0_36[0] f* arg3[1]
float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)
temp0_37[0] = temp0_37[0] f* arg3[2]
arg2[6] = (_mm_unpacklo_ps(zmm0, temp0_36[0].q)).q
arg2[7].d = temp0_37[0]
float var_28[0x4]
float (* rax_9)[0x4] = sub_140ade170(arg2 + 0x3c, &var_28)
float zmm2_1[0x4] = *arg4
float temp0_39[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float zmm4_1[0x4] = *rax_9
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1b), temp0_39)
float temp0_42[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x4e)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm4_1)
float temp0_45[0x4] = __mulps_xmmps_memps(temp0_41, data_143f513c0)
float temp0_46[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xb1)
float temp0_47[0x4] = _mm_add_ps(temp0_45, temp0_44)
float temp0_49[0x4] = _mm_mul_ps(temp0_42, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55))
float temp0_51[0x4] = _mm_mul_ps(temp0_46, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
float temp0_52[0x4] = __mulps_xmmps_memps(temp0_49, data_143f513b0)
float temp0_53[0x4] = __mulps_xmmps_memps(temp0_51, data_143f513a0)
float var_38[0x4] = _mm_add_ps(_mm_add_ps(temp0_47, temp0_52), temp0_53)
void var_48
int64_t* rax_10 = sub_140acd070(&var_48, &var_38)
*(arg2 + 0x3c) = *rax_10
*(arg2 + 0x44) = rax_10[1].d
return arg2
