// 函数: sub_141babb60
// 地址: 0x141babb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float temp0_3[0x4] = __subps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, (*(arg3 + 8))[0].q), 
        _mm_unpacklo_ps(*(arg3 + 4), 0)[0].q), 
    *(arg1 + 0x1d0))
float zmm2[0x4] = *(arg1 + 0x1e0)
float zmm3[0x4] = __andps_xmmxud_memxud(temp0_3, data_143f31300)
float temp0_5[0x4] = _mm_rcp_ps(zmm2)
float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
float temp0_7[0x4] = __mulps_xmmps_memps(*(arg1 + 0x1c0), data_143f31430)
float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float temp0_10[0x4] = _mm_mul_ps(temp0_8, temp0_9)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xd2)
float temp0_12[0x4] = _mm_mul_ps(temp0_6, temp0_11)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xff)
float temp0_14[0x4] = _mm_sub_ps(temp0_10, temp0_12)
float temp0_15[0x4] = _mm_mul_ps(temp0_5, temp0_5)
float temp0_16[0x4] = _mm_add_ps(temp0_5, temp0_5)
float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_14)
float temp0_19[0x4] = _mm_sub_ps(temp0_16, _mm_mul_ps(temp0_15, zmm2))
float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd2), temp0_9)
float temp0_22[0x4] = _mm_mul_ps(temp0_19, temp0_19)
float temp0_23[0x4] = _mm_add_ps(temp0_19, temp0_19)
float temp0_24[0x4] = _mm_mul_ps(temp0_22, zmm2)
float temp0_26[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm2, data_143f31410), data_143f31420, 2)
float temp0_27[0x4] = _mm_sub_ps(temp0_23, temp0_24)
float zmm6[0x4] = temp0_27 ^ zx.o(0)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
zmm2 = _mm_and_ps(temp0_26, zmm6)
float temp0_30[0x4] = _mm_mul_ps(temp0_17, temp0_13)
float temp0_31[0x4] = _mm_mul_ps(temp0_28, temp0_11)
float temp0_32[0x4] = _mm_add_ps(temp0_30, zmm3)
zmm3 = *arg4
float temp0_33[0x4] = _mm_sub_ps(temp0_21, temp0_31)
float temp0_34[0x4] = _mm_unpacklo_ps(zmm3, (*arg4)[2][0].q)
float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_32), zmm2 ^ temp0_27)
float temp0_38[0x4] = _mm_unpacklo_ps(temp0_34, _mm_unpacklo_ps((*arg4)[1], 0)[0].q)
int96_t var_c8 = temp0_36[0].12
float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc9)
float temp0_40[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xd2)
float temp0_41[0x4] = _mm_mul_ps(temp0_39, temp0_11)
float temp0_43[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_40, temp0_9), temp0_41)
float temp0_44[0x4] = _mm_add_ps(temp0_43, temp0_43)
float temp0_45[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xc9)
float temp0_46[0x4] = _mm_shuffle_ps(temp0_44, temp0_44, 0xd2)
float temp0_47[0x4] = _mm_mul_ps(temp0_45, temp0_11)
float temp0_48[0x4] = _mm_mul_ps(temp0_44, temp0_13)
float temp0_49[0x4] = _mm_mul_ps(temp0_46, temp0_9)
float temp0_50[0x4] = _mm_add_ps(temp0_48, temp0_38)
float temp0_51[0x4] = _mm_sub_ps(temp0_49, temp0_47)
float zmm0[0x4] = _mm_and_ps(
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(*(arg1 + 0x1e0), data_143f31410), 
        data_143f31420, 2), 
    zmm6)
zmm6 = zx.o(0)
zmm6[0] = float.s(*(arg1 + 0x458))
float temp0_55[0x4] = _mm_add_ps(temp0_51, temp0_50)
float zmm1[0x4] = *(arg1 + 0x524)
zmm1[0] = zmm1[0] * 0.0174532924f
float temp0_56[0x4] = _mm_mul_ps(temp0_55, zmm0 ^ temp0_27)
zmm6[0] = zmm6[0] / zmm1[0]
zmm1[0] = zmm1[0] * 0.5f
int96_t var_b8 = temp0_56[0].12
float zmm0_1[0x4]
uint32_t zmm6_1[0x4]
float zmm7_1[0x4]
float zmm12_1[0x4]
float zmm14_1[0x4]
zmm0_1, zmm6_1, zmm7_1, zmm12_1, zmm14_1 = __libm_sse2_sincosf_(zmm1)
float temp0_57[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
zmm6_1[0] = zmm6_1[0] f+ zmm6_1[0]
float temp0_58[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)
temp0_58[0] = temp0_58[0] f* zmm6_1[0]
uint32_t zmm15[0x4] = zmm7_1
zmm15[0] = zmm15[0] f- *(arg1 + 0x464)
zmm6_1[0] = zmm6_1[0] f* zmm6_1[0]
float zmm11[0x4] = temp0_58 ^ data_142d3f780
zmm0_1[0] = zmm0_1[0] f* zmm6_1[0]
uint32_t zmm1_1[0x4] = zmm12_1
zmm1_1[0] = zmm1_1[0] f* zmm11[0]
zmm12_1[0] = zmm12_1[0] * zmm12_1[0]
zmm1_1[0] = zmm1_1[0] f+ zmm1_1[0]
float temp0_59[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55)
zmm15[0] = zmm15[0] f* zmm0_1[0]
float zmm2_1 = temp0_59[0]
float zmm3_1 = temp0_59[0] * temp0_59[0]
zmm15[0] = zmm15[0] f+ temp0_57[0]
zmm3_1 = zmm3_1 + zmm12_1[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm2_1 = zmm2_1 f* zmm15[0]
zmm2_1 = zmm2_1 + zmm2_1 f+ zmm1_1[0]
zmm15[0] = zmm15[0] f* zmm15[0]
zmm15[0] = zmm15[0] f+ zmm11[0]
zmm15[0] = zmm15[0] f- zmm6_1[0]
zmm15[0] = zmm15[0] f* zmm3_1
zmm15[0] = zmm15[0] f* 4f
float zmm4 = zmm2_1 * zmm2_1 f- zmm15[0]

if (zmm4 < 0f)
    *arg2 = data_143dbb1f8.q
    arg2[1].d = data_143dbb200
    *(arg2 + 0xc) = data_143dbb1f0
else
    int32_t temp0_60 = _mm_sqrt_ss(0, zmm4)
    zmm7_1[0] = zmm7_1[0] / zmm3_1
    int32_t zmm10_1 = (temp0_60 f- zmm2_1) f* zmm7_1[0]
    zmm0_1[0] = zmm0_1[0] * -0.5f
    zmm12_1[0] = zmm12_1[0] f* zmm10_1
    temp0_59[0] = temp0_59[0] f* zmm10_1
    zmm12_1[0] = zmm12_1[0] + zmm11[0]
    zmm15[0] = zmm15[0] f+ temp0_59[0]
    float zmm0_2[0x4] = sub_140a3f4a0(zmm0_1, zmm11)
    zmm0_2[0] = zmm0_2[0] + 6.28318548f
    uint32_t zmm0_3[0x4]
    uint32_t zmm8_2[0x4]
    int512_t zmm9_1
    zmm0_3, zmm8_2, zmm9_1 = sub_140a454f0(zmm0_2, 0x40c90fdb)
    zmm8_2[0] = zmm8_2[0] f* 0.5f
    zmm9_1.o = zmm0_3
    float zmm0_4[0x4]
    float zmm6_2[0x4]
    zmm0_4, zmm6_2 = sub_140a3f4a0(zmm8_2, zmm11)
    zmm0_4[0] = zmm0_4[0] + zmm6_2[0]
    uint32_t zmm0_5[0x4]
    uint32_t zmm7_2[0x4]
    int512_t zmm8_3
    zmm0_5, zmm7_2, zmm8_3 = sub_140a454f0(zmm0_4, zmm6_2)
    zmm8_3.o = zmm0_5
    float zmm0_6[0x4]
    float zmm6_3[0x4]
    zmm0_6, zmm6_3 = sub_140a3f4a0(zmm15, zmm7_2)
    zmm0_6[0] = zmm0_6[0] + zmm6_3[0]
    float zmm0_7[0x4]
    float zmm8_4[0x4]
    int32_t zmm9_2
    zmm0_7, zmm8_4, zmm9_2 = sub_140a454f0(zmm0_6, zmm6_3)
    float zmm5_1[0x4] = *(arg1 + 0x1c0)
    temp0_57[0] = temp0_57[0] + temp0_59[0]
    float zmm2_2[0x4] = var_b8:8.d
    zmm11 = zmm0_7
    float zmm3_2[0x4] = var_c8.d
    zmm0_7 = zx.o(0)
    zmm0_7[0] = float.s(*(arg1 + 0x458))
    zmm2_2[0] = zmm2_2[0] f* zmm10_1
    zmm3_2[0] = zmm3_2[0] + zmm12_1[0]
    int32_t zmm7_3 = float.s(*(arg1 + 0x45c))
    zmm2_2[0] = zmm2_2[0] f+ var_c8:8.d
    zmm7_3 = zmm7_3 f* *(arg1 + 0x468)
    float temp0_61[0x4] = _mm_min_ss(zmm8_4[0], zmm9_2)
    zmm8_4[0] = zmm8_4[0] f- zmm9_2
    zmm7_3 = zmm7_3 f- zmm2_2[0]
    zmm11[0] = zmm11[0] - temp0_61[0]
    zmm8_4 = __andps_xmmxud_memxud(zmm8_4, data_142d3f770)
    zmm11[0] = zmm11[0] / zmm8_4[0]
    zmm11[0] = zmm11[0] * zmm0_7[0]
    float temp0_66[0x4] = __mulps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_2, zmm2_2[0].q), _mm_unpacklo_ps(temp0_57, 0)[0].q), 
        *(arg1 + 0x1e0))
    float temp0_67[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_68[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xc9), temp0_67)
    float temp0_73[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xd2), temp0_68), temp0_70)
    float temp0_74[0x4] = _mm_add_ps(temp0_73, temp0_73)
    float temp0_75[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xd2)
    float temp0_76[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xc9)
    float temp0_84[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_75, temp0_68), _mm_mul_ps(temp0_76, temp0_67)), 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), temp0_74), temp0_66)), 
        *(arg1 + 0x1d0))
    *(arg2 + 0xc) = zmm11[0]
    arg2[2].d = zmm7_3
    var_c8:8.d = _mm_shuffle_ps(temp0_84, temp0_84, 0xaa)[0]
    *arg2 = (_mm_unpacklo_ps(temp0_84, _mm_shuffle_ps(temp0_84, temp0_84, 0x55)[0].q)).q
    arg2[1].d = var_c8:8.d

return arg2
