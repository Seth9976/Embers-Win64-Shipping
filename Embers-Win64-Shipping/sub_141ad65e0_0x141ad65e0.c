// 函数: sub_141ad65e0
// 地址: 0x141ad65e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
uint32_t r10 = zx.d(arg2)
uint128_t zmm0
float zmm2[0x4]

if (arg2 == 0)
    zmm6 = arg4[2]
    zmm0 = (*arg3)[2]
    zmm2 = (*arg3)[1]
    zmm8 = *arg3
    float temp0_77[0x4] = __mulps_xmmps_memps(*arg4, data_143f2b8e0)
    float temp0_81[0x4] = __subps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm0.q), _mm_unpacklo_ps(zmm2, 0)[0].q), arg4[1])
    float temp0_82[0x4] = _mm_rcp_ps(zmm6)
    zmm8 = __andps_xmmxud_memxud(temp0_81, data_143f2b820)
    float temp0_84[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xc9)
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xd2)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_85)
    float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_84)
    float temp0_90[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 0xff)
    float temp0_91[0x4] = _mm_sub_ps(temp0_89, zmm0)
    zmm0 = _mm_mul_ps(temp0_82, temp0_82)
    float temp0_93[0x4] = _mm_add_ps(temp0_82, temp0_82)
    float temp0_94[0x4] = _mm_add_ps(temp0_91, temp0_91)
    zmm0 = _mm_mul_ps(zmm0, zmm6)
    float temp0_96[0x4] = _mm_mul_ps(temp0_90, temp0_94)
    float temp0_97[0x4] = _mm_sub_ps(temp0_93, zmm0)
    float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xd2), temp0_84)
    float temp0_100[0x4] = _mm_add_ps(temp0_96, zmm8)
    zmm0 = _mm_mul_ps(temp0_97, temp0_97)
    float temp0_102[0x4] = _mm_add_ps(temp0_97, temp0_97)
    zmm0 = _mm_mul_ps(zmm0, zmm6)
    float temp0_105[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f2b9a0), data_143f2b990, 2)
    float temp0_106[0x4] = _mm_sub_ps(temp0_102, zmm0)
    float temp0_109[0x4] =
        _mm_sub_ps(temp0_99, _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xc9), temp0_85))
    zmm6 = _mm_and_ps(temp0_105, temp0_106 ^ zx.o(0)) ^ temp0_106
    float temp0_112[0x4] = _mm_mul_ps(_mm_add_ps(temp0_109, temp0_100), zmm6)
    *arg1 = temp0_112[0]
    zmm0 = _mm_shuffle_ps(temp0_112, temp0_112, 0x55)
    arg1[1].d = _mm_shuffle_ps(temp0_112, temp0_112, 0xaa)[0]
    *(arg1 + 4) = zmm0.d
else if (r10 == 1)
    *arg1 = *arg3
    arg1[1].d = (*arg3)[2]
else if (r10 == 2)
    zmm6 = arg4[2]
    zmm0 = (*arg3)[2]
    zmm2 = (*arg3)[1]
    zmm8 = *arg3
    float temp0_1[0x4] = __mulps_xmmps_memps(*arg4, data_143f2b8e0)
    float temp0_5[0x4] = __subps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm0.q), _mm_unpacklo_ps(zmm2, 0)[0].q), arg4[1])
    float temp0_6[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xd2)
    float temp0_8[0x4] = _mm_rcp_ps(zmm6)
    zmm8 = __andps_xmmxud_memxud(temp0_5, data_143f2b820)
    float temp0_10[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xff)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xc9), temp0_7)
    float temp0_15[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0xd2), temp0_6), zmm0)
    zmm0 = _mm_mul_ps(temp0_8, temp0_8)
    float temp0_17[0x4] = _mm_add_ps(temp0_8, temp0_8)
    float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_15)
    zmm0 = _mm_mul_ps(zmm0, zmm6)
    float temp0_20[0x4] = _mm_mul_ps(temp0_10, temp0_18)
    float temp0_21[0x4] = _mm_sub_ps(temp0_17, zmm0)
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd2), temp0_6)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, zmm8)
    zmm0 = _mm_mul_ps(temp0_21, temp0_21)
    float temp0_26[0x4] = _mm_add_ps(temp0_21, temp0_21)
    zmm0 = _mm_mul_ps(zmm0, zmm6)
    float temp0_29[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm6, data_143f2b9a0), data_143f2b990, 2)
    float temp0_30[0x4] = _mm_sub_ps(temp0_26, zmm0)
    float temp0_33[0x4] =
        _mm_sub_ps(temp0_23, _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc9), temp0_7))
    zmm6 = _mm_and_ps(temp0_29, temp0_30 ^ zx.o(0)) ^ temp0_30
    float temp0_36[0x4] = _mm_mul_ps(_mm_add_ps(temp0_33, temp0_24), zmm6)
    float temp0_37[0x4] = __mulps_xmmps_memps(*arg5, data_143f2b8e0)
    float temp0_43[0x4] = __subps_xmmps_memps(
        _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_36, _mm_shuffle_ps(temp0_36, temp0_36, 0xaa).q), 
            _mm_unpacklo_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x55), 0)[0].q), 
        arg5[1])
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)
    float temp0_45[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xd2)
    zmm7 = __andps_xmmxud_memxud(temp0_43, data_143f2b820)
    float temp0_51[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xd2), temp0_44), 
        _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0xc9), temp0_45))
    float temp0_52[0x4] = _mm_add_ps(temp0_51, temp0_51)
    float zmm5[0x4] = arg5[2]
    float temp0_53[0x4] = _mm_rcp_ps(zmm5)
    float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0xff), temp0_52)
    zmm0 = _mm_mul_ps(temp0_53, temp0_53)
    float temp0_57[0x4] = _mm_add_ps(temp0_53, temp0_53)
    float temp0_58[0x4] = _mm_add_ps(temp0_55, zmm7)
    float temp0_60[0x4] = _mm_sub_ps(temp0_57, _mm_mul_ps(zmm0, zmm5))
    zmm0 = _mm_mul_ps(temp0_60, temp0_60)
    float temp0_62[0x4] = _mm_add_ps(temp0_60, temp0_60)
    zmm0 = _mm_mul_ps(zmm0, zmm5)
    float temp0_65[0x4] =
        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm5, data_143f2b9a0), data_143f2b990, 2)
    float temp0_66[0x4] = _mm_sub_ps(temp0_62, zmm0)
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0xc9), temp0_45)
    float temp0_71[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0xd2), temp0_44), zmm0)
    zmm5 = _mm_and_ps(temp0_65, temp0_66 ^ zx.o(0)) ^ temp0_66
    float temp0_74[0x4] = _mm_mul_ps(_mm_add_ps(temp0_71, temp0_58), zmm5)
    *arg1 = temp0_74[0]
    zmm0 = _mm_shuffle_ps(temp0_74, temp0_74, 0x55)
    arg1[1].d = _mm_shuffle_ps(temp0_74, temp0_74, 0xaa)[0]
    *(arg1 + 4) = zmm0.d
else
    *arg1 = data_143dbb1f8.q
    arg1[1].d = data_143dbb200
return arg1
