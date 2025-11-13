// 函数: sub_14174b0e0
// 地址: 0x14174b0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *(arg1 + 0x40)
float zmm0[0x4] = *(arg2 + 8)
float temp0[0x4] = _mm_unpacklo_ps(*(arg2 + 4), 0)
float temp0_3[0x4] = __subps_xmmps_memps(
    _mm_unpacklo_ps(_mm_unpacklo_ps(*arg2, zmm0[0].q), temp0[0].q), *(arg1 + 0x30))
float temp0_4[0x4] = _mm_rcp_ps(zmm5)
float zmm7[0x4] = __andps_xmmxud_memxud(temp0_3, data_143ef7300)
float zmm11[0x4] = *(arg1 + 0x20)
float temp0_6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
float temp0_7[0x4] = __mulps_xmmps_memps(zmm11, data_143ef7590)
float temp0_8[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xd2)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xd2)
float temp0_10[0x4] = _mm_mul_ps(temp0_6, temp0_9)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float temp0_12[0x4] = _mm_mul_ps(temp0_8, temp0_11)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xff)
float temp0_14[0x4] = _mm_sub_ps(temp0_12, temp0_10)
float temp0_15[0x4] = _mm_mul_ps(temp0_4, temp0_4)
float temp0_16[0x4] = _mm_add_ps(temp0_4, temp0_4)
float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_14)
float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm5)
float temp0_19[0x4] = _mm_mul_ps(temp0_13, temp0_17)
float temp0_20[0x4] = _mm_sub_ps(temp0_16, temp0_18)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd2), temp0_11)
float temp0_23[0x4] = _mm_add_ps(temp0_19, zmm7)
float temp0_24[0x4] = _mm_mul_ps(temp0_20, temp0_20)
float temp0_25[0x4] = _mm_add_ps(temp0_20, temp0_20)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm5)
float temp0_28[0x4] =
    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm5, data_143ef7580), data_143ef7570, 2)
float temp0_29[0x4] = _mm_sub_ps(temp0_25, temp0_26)
float zmm9[0x4] = temp0_29 ^ zx.o(0)
float temp0_30[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
zmm5 = _mm_and_ps(temp0_28, zmm9)
float temp0_35[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_sub_ps(temp0_22, _mm_mul_ps(temp0_30, temp0_9)), temp0_23), zmm5 ^ temp0_29)
zmm5 = *arg3
float var_90 = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)[0]
float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x55)
float zmm2[0x4] = (*arg3)[1]
int64_t var_88 = (_mm_unpacklo_ps(temp0_35, temp0_37[0].q)).q
float temp0_39[0x4] = _mm_unpacklo_ps(zmm5, (*arg3)[2][0].q)
float var_80 = var_90
float temp0_40[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_41[0x4] = __mulps_xmmps_memps(zmm11, data_143ef7590)
float temp0_42[0x4] = _mm_unpacklo_ps(temp0_39, temp0_40[0].q)
float temp0_43[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xc9)
float temp0_44[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0xd2)
float temp0_45[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xc9)
float temp0_46[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xd2)
float temp0_47[0x4] = _mm_mul_ps(temp0_43, temp0_46)
float temp0_48[0x4] = _mm_mul_ps(temp0_44, temp0_45)
float temp0_49[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xff)
float temp0_50[0x4] = _mm_sub_ps(temp0_48, temp0_47)
float temp0_51[0x4] = _mm_add_ps(temp0_50, temp0_50)
float temp0_52[0x4] = _mm_mul_ps(temp0_49, temp0_51)
float temp0_54[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xc9), temp0_46)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xd2)
float temp0_56[0x4] = _mm_add_ps(temp0_52, temp0_42)
float temp0_58[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_55, temp0_45), temp0_54)
float temp0_60[0x4] = __cmpps_xmmps_memps_immb(
    __andps_xmmxud_memxud(*(arg1 + 0x40), data_143ef7580), data_143ef7570, 2)
int64_t* rcx = *(arg1 + 0x10)
zmm0 = _mm_and_ps(temp0_60, zmm9) ^ temp0_29
float temp0_63[0x4] = _mm_mul_ps(_mm_add_ps(temp0_58, temp0_56), zmm0)
float var_a0 = _mm_shuffle_ps(temp0_63, temp0_63, 0xaa)[0]
float var_90_1 = var_a0
int64_t var_98 = (_mm_unpacklo_ps(temp0_63, _mm_shuffle_ps(temp0_63, temp0_63, 0x55)[0].q)).q
int64_t r9 = *rcx
int32_t var_b8
int32_t var_a8
float result

if ((*(r9 + 0x40))(rcx, &var_88, &var_98, r9, arg4[0], arg5, &var_b8, &var_a8, arg8).b == 0)
    result.b = 0
else
    if (not(0f f== *arg5))
        float zmm5_1[0x4] = *(arg1 + 0x20)
        int32_t var_b0
        float temp0_67[0x4] = _mm_unpacklo_ps(var_b8, var_b0[0].q)
        int32_t var_b4
        float temp0_68[0x4] = _mm_unpacklo_ps(var_b4, 0)
        float temp0_69[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_71[0x4] =
            __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_67, temp0_68[0].q), *(arg1 + 0x40))
        float temp0_72[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_73[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xc9), temp0_69)
        float temp0_78[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xd2), temp0_72), temp0_75)
        float temp0_79[0x4] = _mm_add_ps(temp0_78, temp0_78)
        float temp0_80[0x4] = _mm_mul_ps(temp0_73, temp0_79)
        float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0xc9), temp0_69)
        float temp0_83[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0xd2)
        float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_71)
        float zmm6[0x4] = var_a8
        float temp0_88[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_83, temp0_72), temp0_82), temp0_84), 
            *(arg1 + 0x30))
        float var_80_1 = _mm_shuffle_ps(temp0_88, temp0_88, 0xaa)[0]
        *arg6 = (_mm_unpacklo_ps(temp0_88, _mm_shuffle_ps(temp0_88, temp0_88, 0x55)[0].q)).q
        int32_t var_a4
        float temp0_94[0x4] =
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, var_a0[0].q), _mm_unpacklo_ps(var_a4, 0)[0].q)
        arg6[1].d = var_80_1
        float temp0_95[0x4] = __mulps_xmmps_memps(temp0_94, *(arg1 + 0x40))
        zmm5_1 = *(arg1 + 0x20)
        float temp0_96[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_97[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_98[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xd2)
        float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xc9), temp0_97)
        float temp0_101[0x4] = _mm_mul_ps(temp0_98, temp0_96)
        float temp0_102[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_103[0x4] = _mm_sub_ps(temp0_101, temp0_100)
        float temp0_104[0x4] = _mm_add_ps(temp0_103, temp0_103)
        float temp0_105[0x4] = _mm_mul_ps(temp0_102, temp0_104)
        float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xd2), temp0_96)
        float temp0_108[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xc9)
        float temp0_109[0x4] = _mm_add_ps(temp0_105, temp0_95)
        float temp0_112[0x4] =
            _mm_add_ps(_mm_sub_ps(temp0_107, _mm_mul_ps(temp0_108, temp0_97)), temp0_109)
        float var_80_2 = _mm_shuffle_ps(temp0_112, temp0_112, 0xaa)[0]
        *arg7 = (_mm_unpacklo_ps(temp0_112, _mm_shuffle_ps(temp0_112, temp0_112, 0x55)[0].q)).q
        arg7[1].d = var_80_2
    
    result.b = 1

return result
